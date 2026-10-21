//! Hourly land combat (`docs/spec/land-combat.md`).
//!
//! Each hour every division with organisation ≥ 0.5 fires one burst at a
//! random enemy division: `attack × A·W` shots, each of which the target may
//! evade while it still has "defences" this hour (80 % with the vanilla ground
//! defence efficiency) or afterwards (48 %). Hits accumulate strength and
//! organisation damage that is applied to both sides at once; divisions under
//! 0.1 strength are destroyed, and a side whose strength is gone or whose
//! average organisation drops below 5 leaves the battle — a defender retreats
//! to the best neighbouring province, an attacker breaks off.
//!
//! Implemented modifiers: river crossing, crossing from a strait, terrain,
//! weather (clear only), night, experience, the hard-unit city penalty and
//! land forts. Not yet: leaders, command limits, dig-in, combat events,
//! surprise, supply, encirclement and flanking, country bonuses, difficulty.
//! Misc values are the shipped `db/misc.txt` ones.

use crate::movement::{terrain, MoveContext};
use crate::{Battle, Rng, System, World};
use dh_data::{Branch, DivisionStats};
use dh_map::AdjKind;
use std::sync::Arc;

/// `combat` section values of the shipped `db/misc.txt` (positions in the spec).
pub mod params {
    pub const ORG_MIN: f32 = 1.0; // [90]
    pub const ORG_RANGE: u32 = 2; // [91]
    pub const ORG_RANGE_HARD_ON_SOFT: u32 = 4; // [92]
    pub const STR_MIN: f32 = 1.0; // [93]
    pub const STR_RANGE: u32 = 2; // [94]
    pub const STR_RANGE_HARD_ON_SOFT: u32 = 1; // [95]
    pub const ORG_DAMAGE: f32 = 0.6; // [121]
    pub const STR_DAMAGE: f32 = 0.1; // [125]
    pub const EVADE_WITH_DEFENCES: f32 = 100.0; // [73] × 100
    pub const EVADE_WITHOUT_DEFENCES: f32 = 60.0; // [77] × 100
    pub const GROUND_DEFENCE_EFFICIENCY: f32 = 0.8; // country section, 3rd value
    pub const EXPERIENCE: f32 = 0.5; // [63]
    pub const FORT_PER_LEVEL: f32 = -0.07; // [23]
    pub const HARD_IN_CITY: f32 = -0.5; // [25]
    pub const RETREAT_ORG: f32 = 5.0; // [228]
    pub const DESTROYED_BELOW: f32 = 0.1;
    pub const MIN_ORG_TO_FIRE: f32 = 0.5;
}

/// Terrain suffix of the `ATT_*`/`DEF_*` rows, by terrain index 0..=7.
const TERRAIN_ROW: [&str; 8] = [
    "PLAIN", "FOREST", "MOUNTAIN", "DESERT", "SWAMP", "HILL", "JUNGLE", "URBAN",
];
/// Division class of HQs (`modifiers.csv` column, `#ID` 10).
const HQ_CLASS: usize = 10;

/// One division taking part in the current hour.
struct Fighter {
    unit: usize,
    division: usize,
    class: usize,
    stats: DivisionStats,
    strength: f32,
    org: f32,
    attack_mult: f32,
    defence_mult: f32,
    acc_str: f32,
    acc_org: f32,
    defences_used: u32,
}

impl Fighter {
    fn remaining_str(&self) -> f32 {
        self.strength - self.acc_str
    }
    fn remaining_org(&self) -> f32 {
        self.org - self.acc_org
    }
    fn is_soft(&self) -> bool {
        self.stats.get("softness") >= 50.0
    }
}

/// Is it night at a map position (level-1 pixels)? Solar model of the spec
/// §4.2 on the game's 30-day months.
pub fn is_night(date: dh_data::GameDate, pos: (i64, i64)) -> bool {
    let day_of_year = (date.month as i64 - 1) * 30 + (date.day.min(30) as i64 - 1);
    let mut d = (day_of_year - (2 * 30 + 19)).rem_euclid(360) as f64; // from about 20 March
    d = if d > 270.0 {
        d - 360.0
    } else if d > 90.0 {
        180.0 - d
    } else {
        d
    };
    let summer = d >= 0.0;
    let a = d.abs();
    let angle = date.hour as f64 * std::f64::consts::PI / 12.0 - std::f64::consts::FRAC_PI_2
        + pos.0 as f64 * 0.000_209_775_15;
    let s = (20760.0 - 172.0 * a) * angle.sin();
    if summer {
        pos.1 >= (5760.0 - s) as i64
    } else {
        pos.1 < (5760.0 + s) as i64
    }
}

pub struct Combat {
    ctx: Arc<MoveContext>,
    /// Land fort level by province.
    pub forts: std::collections::BTreeMap<u32, f32>,
    /// Ended battles, newest last: (province, attacker won).
    pub results: Vec<(u32, bool)>,
    /// Apply the night modifiers (on in the game; switchable for comparisons).
    pub night: bool,
    /// Apply the supply-efficiency modifier (on in the game).
    pub supply: bool,
}

impl Combat {
    pub fn new(ctx: Arc<MoveContext>, scenario: &dh_data::Scenario) -> Self {
        let forts = scenario
            .provinces
            .iter()
            .filter(|p| p.land_fort > 0.0)
            .map(|p| (p.id, p.land_fort as f32))
            .collect();
        Combat {
            ctx,
            forts,
            results: Vec::new(),
            night: true,
            supply: true,
        }
    }

    fn fighters(
        &self,
        world: &World,
        units: &[usize],
        battle: &Battle,
        attacking: bool,
    ) -> Vec<Fighter> {
        let ctx = &self.ctx;
        let province = ctx.province(battle.province);
        let terrain = province.map_or(terrain::PLAINS, |p| p.terrain);
        let night = self.night && province.is_some_and(|p| is_night(world.date, p.army_pos));
        let mut out = Vec::new();
        for &u in units {
            let unit = &world.units[u];
            let link = unit
                .unit
                .location
                .and_then(|from| ctx.adjacency.link(from, battle.province));
            let enemy_held = world
                .controller
                .get(&battle.province)
                .is_some_and(|c| world.at_war(unit.controller(), c));
            // Supply efficiency of the stack where it stands (row 10 of the
            // modifier table). Out-of-supply stacks are left neutral for now.
            let ese = match unit.unit.location {
                Some(p) if self.supply && world.in_supply(ctx, unit.controller(), p) => {
                    world.supply_efficiency(ctx, p)
                }
                _ => 1.0,
            };
            for (i, d) in unit.unit.divisions.iter().enumerate() {
                let Some(stats) = ctx.units.division_stats(d) else {
                    continue;
                };
                let class = dh_data::unitdb::DIVISION_TYPES
                    .iter()
                    .position(|t| *t == d.kind)
                    .unwrap_or(usize::MAX);
                let m = |name: &str| ctx.modifiers.named(name, class);
                let (mut a, mut w) = (1.0f32, 1.0f32);
                let side = if attacking { "ATT" } else { "DEF" };
                if attacking && link.is_some_and(|l| l.kind == AdjKind::River) {
                    a *= 1.0 + m("ATT_RIVER").min(0.0);
                }
                if attacking && link.is_some_and(|l| l.kind == AdjKind::Sea) {
                    a *= 1.0 - (-m("ATT_SHORE")).clamp(0.0, 0.99);
                }
                let experience = d.experience.unwrap_or(0.0) as f32;
                if experience > 0.0 {
                    a *= 1.0 + experience * 0.01 * params::EXPERIENCE;
                }
                if let Some(t) = TERRAIN_ROW.get(terrain as usize) {
                    let mut tm = m(&format!("{side}_{t}"));
                    if attacking && terrain == terrain::URBAN && stats.get("softness") < 50.0 {
                        tm += params::HARD_IN_CITY;
                    }
                    a *= 1.0 + tm;
                }
                if ese != 1.0 {
                    a *= 1.0 + (ese - 1.0) * 0.5;
                }
                w *= 1.0 + m(&format!("{side}_CLEAR"));
                if night {
                    w *= 1.0 + m(&format!("{side}_NIGHT"));
                }
                if attacking && enemy_held {
                    let level = self.forts.get(&battle.province).copied().unwrap_or(0.0);
                    if level > 0.0 {
                        let f = level * params::FORT_PER_LEVEL * (1.0 - m("ATT_FORT"));
                        a *= 1.0 + f.clamp(-0.99, 0.0);
                    }
                }
                out.push(Fighter {
                    unit: u,
                    division: i,
                    class,
                    strength: d.strength.unwrap_or(100.0) as f32,
                    org: d.organisation.unwrap_or(stats.get("defaultorganisation")) as f32,
                    stats,
                    attack_mult: (a * w).max(0.01),
                    defence_mult: a.max(0.01),
                    acc_str: 0.0,
                    acc_org: 0.0,
                    defences_used: 0,
                });
            }
        }
        out
    }

    /// One side fires at the other (spec §3.3–3.4); damage only accumulates.
    fn fire(shooters: &[Fighter], targets: &mut [Fighter], targets_defending: bool, rng: &mut Rng) {
        let alive: Vec<usize> = (0..targets.len())
            .filter(|&i| targets[i].remaining_str() > 0.0)
            .collect();
        if alive.is_empty() {
            return;
        }
        let stochastic = |x: f32, rng: &mut Rng| {
            let whole = x.trunc();
            whole as u32 + u32::from(rng.below(100) < ((x - whole) * 100.0).round() as u32)
        };
        for s in shooters.iter().filter(|s| s.org >= params::MIN_ORG_TO_FIRE) {
            let mut t = alive[rng.below(alive.len() as u32) as usize];
            for _ in 0..4 {
                if targets[t].remaining_str() > 0.0 || targets[t].remaining_org() > 0.0 {
                    break;
                }
                t = alive[rng.below(alive.len() as u32) as usize];
            }
            let target = &mut targets[t];
            let softness = target.stats.get("softness") as f32;
            let base = (s.stats.get("hardattack") as f32 * (100.0 - softness)
                + s.stats.get("softattack") as f32 * softness)
                * 0.01;
            let shots = stochastic(base * s.attack_mult, rng);
            let hard_on_soft = !s.is_soft() && target.is_soft();
            let firepower = ((s.strength * 0.1).trunc() * 0.1).max(0.1);
            for _ in 0..shots {
                if target.remaining_str() <= 0.0 && target.remaining_org() <= 0.0 {
                    continue;
                }
                let defence = target.stats.get(if targets_defending {
                    "defensiveness"
                } else {
                    "toughness"
                }) as f32
                    * target.defence_mult;
                let defences = stochastic(defence, rng);
                let evade = if defences > target.defences_used {
                    target.defences_used += 1;
                    params::GROUND_DEFENCE_EFFICIENCY * params::EVADE_WITH_DEFENCES
                } else {
                    params::GROUND_DEFENCE_EFFICIENCY * params::EVADE_WITHOUT_DEFENCES
                };
                if rng.below(100) < (evade.min(99.0)) as u32 {
                    continue;
                }
                let (org_range, str_range) = if hard_on_soft {
                    (
                        params::ORG_RANGE_HARD_ON_SOFT,
                        params::STR_RANGE_HARD_ON_SOFT,
                    )
                } else {
                    (params::ORG_RANGE, params::STR_RANGE)
                };
                let mut org = params::ORG_MIN + rng.below(org_range) as f32;
                let mut str = params::STR_MIN + rng.below(str_range) as f32;
                org *= firepower;
                str *= firepower;
                if target.class == HQ_CLASS {
                    str = 0.0;
                }
                str *= params::STR_DAMAGE;
                org *= params::ORG_DAMAGE;
                if target.remaining_str() - str < params::DESTROYED_BELOW {
                    str = target.remaining_str();
                    org = target.remaining_org().max(0.0);
                }
                target.acc_str += str;
                target.acc_org += org;
            }
        }
    }

    /// Average over stacks of each stack's average organisation (spec §5.1).
    fn average_org(fighters: &[Fighter]) -> f32 {
        let mut stacks: Vec<(usize, f32, u32)> = Vec::new();
        for f in fighters {
            match stacks.iter_mut().find(|s| s.0 == f.unit) {
                Some(s) => {
                    s.1 += f.org;
                    s.2 += 1;
                }
                None => stacks.push((f.unit, f.org, 1)),
            }
        }
        if stacks.is_empty() {
            return 0.0;
        }
        stacks.iter().map(|s| s.1 / s.2 as f32).sum::<f32>() / stacks.len() as f32
    }

    /// Picks where a defeated defender goes (spec §5.2, simplified): a passable
    /// neighbour its country may enter, preferring its own or allied territory.
    fn retreat_target(&self, world: &World, unit: usize, from: u32) -> Option<u32> {
        let tag = world.units[unit].controller();
        let mut best: Option<(f32, u32)> = None;
        for link in self.ctx.adjacency.neighbours(from) {
            let p = link.to;
            let land = self.ctx.province(p).is_some_and(|i| !i.is_water());
            if link.kind == AdjKind::Impassable || !land || !world.can_enter(tag, Some(from), p) {
                continue;
            }
            if world.enemy_land_units(tag, p).next().is_some() {
                continue;
            }
            let controller = world.controller.get(&p);
            let mut score = -1.0;
            if controller.is_some_and(|c| world.diplomacy.allied(tag, c)) {
                score += 10000.0;
            }
            if !world.owner.get(&p).is_some_and(|o| world.at_war(tag, o)) {
                score += 200.0;
                if controller.is_some_and(|c| c == tag) {
                    score += 10.0;
                }
            }
            if score > 0.1 && best.is_none_or(|(s, _)| score > s) {
                best = Some((score, p));
            }
        }
        best.map(|(_, p)| p)
    }

    fn round(&mut self, world: &mut World, battle: &Battle, rng: &mut Rng) -> Option<bool> {
        let attackers: Vec<usize> = battle
            .attackers
            .iter()
            .copied()
            .filter(|&i| {
                world.units[i].route.front() == Some(&battle.province)
                    && !world.units[i].unit.divisions.is_empty()
            })
            .collect();
        let tag = world.units[*attackers.first()?].controller().to_owned();
        let defenders: Vec<usize> = world.enemy_land_units(&tag, battle.province).collect();
        if defenders.is_empty() {
            return Some(true);
        }
        let mut att = self.fighters(world, &attackers, battle, true);
        let mut def = self.fighters(world, &defenders, battle, false);
        Self::fire(&att, &mut def, true, rng);
        Self::fire(&def, &mut att, false, rng);

        // Apply damage to both sides at once and drop destroyed divisions.
        for f in att.iter_mut().chain(def.iter_mut()) {
            f.strength = (f.strength - f.acc_str).max(0.0);
            f.org = (f.org - f.acc_org).max(0.0);
            let d = &mut world.units[f.unit].unit.divisions[f.division];
            d.strength = Some(f.strength as f64);
            d.organisation = Some(f.org as f64);
        }
        for &u in attackers.iter().chain(&defenders) {
            world.units[u]
                .unit
                .divisions
                .retain(|d| d.strength.unwrap_or(100.0) >= params::DESTROYED_BELOW as f64);
        }
        att.retain(|f| f.strength >= params::DESTROYED_BELOW);
        def.retain(|f| f.strength >= params::DESTROYED_BELOW);

        let beaten = |side: &[Fighter]| {
            side.iter().map(|f| f.strength).sum::<f32>() < 1.0
                || Self::average_org(side) < params::RETREAT_ORG
        };
        if beaten(&def) {
            for &u in &defenders {
                match self.retreat_target(world, u, battle.province) {
                    Some(p) if !world.units[u].unit.divisions.is_empty() => {
                        world.units[u].unit.location = Some(p);
                        world.units[u].route.clear();
                    }
                    _ => {
                        world.units[u].unit.divisions.clear(); // nowhere to go: destroyed
                        world.units[u].unit.location = None;
                    }
                }
            }
            return Some(true);
        }
        if beaten(&att) {
            // The attack breaks off; the stack stays where it is (assumed: it
            // also stops marching instead of attacking again next hour).
            for &u in &attackers {
                world.units[u].route.clear();
            }
            return Some(false);
        }
        None
    }
}

impl System for Combat {
    fn name(&self) -> &str {
        "combat"
    }

    fn on_hour(&mut self, world: &mut World, rng: &mut Rng) {
        let battles = world.battles.clone();
        for battle in battles {
            if let Some(attacker_won) = self.round(world, &battle, rng) {
                self.results.push((battle.province, attacker_won));
                world.battles.retain(|b| b.province != battle.province);
            }
        }
        // Units without divisions are gone.
        for u in world
            .units
            .iter_mut()
            .filter(|u| u.unit.branch == Branch::Land && u.unit.divisions.is_empty())
        {
            u.unit.location = None;
            u.route.clear();
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use dh_data::GameDate;

    #[test]
    fn night_follows_the_sun() {
        // Berlin's army position; the game's day starts at its own meridian offset.
        let berlin = (15913, 2350);
        let june = |hour| GameDate {
            year: 1936,
            month: 6,
            day: 1,
            hour,
        };
        assert!(!is_night(june(12), berlin));
        assert!(is_night(june(0), berlin));
        let december = |hour| GameDate {
            year: 1936,
            month: 12,
            day: 15,
            hour,
        };
        assert!(is_night(december(20), berlin));
        assert!(!is_night(december(12), berlin));
    }
}
