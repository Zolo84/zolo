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
//! Before the hour's multipliers, the first hour rolls surprise (a fifth
//! off the caught side for nine hours), any hour may bring a combat event
//! that changes the damage both sides take for that hour and the next eight,
//! and the sides bring their commanders up to date ([`events`]).
//!
//! Implemented modifiers (spec §4, in the game's order): river crossing
//! (with the Engineer trait), crossing from a strait or landing from the sea
//! (at the starting amphibious-assault efficiency), a defender also
//! attacking elsewhere, doctrine traits, combined arms, surprise,
//! experience, supply efficiency (with Logistics Wizard and HQ influence),
//! terrain (with terrain traits and the hard-unit city penalty), weather
//! (with WinterSpecialist), night, leader skill with the PanzerLeader and Commando
//! traits, command limits by direction, envelopment, encirclement, dig-in,
//! land forts (with FortressBuster), dissent and difficulty. Not yet:
//! paratroopers and invasion size, shore bombardment, country bonuses by
//! type, supply and fuel shortage, army detection, mission efficiency. Misc
//! values come from the world's [`crate::Params`].

pub mod events;

use crate::leaders::LeaderState;
use crate::movement::{terrain, MoveContext};
use crate::params::{self, Params};
use crate::{Battle, CombatEvent, Rng, System, World};
use dh_data::leaders::traits;
use dh_data::{Branch, Difficulty, DivisionStats, Weather};
use dh_map::AdjKind;
use std::borrow::Cow;
use std::collections::{BTreeMap, BTreeSet};
use std::sync::Arc;

/// Terrain suffix of the `ATT_*`/`DEF_*` rows, by terrain index 0..=7.
const TERRAIN_ROW: [&str; 8] = [
    "PLAIN", "FOREST", "MOUNTAIN", "DESERT", "SWAMP", "HILL", "JUNGLE", "URBAN",
];
/// Division classes (`modifiers.csv` columns, `#ID`) the rules single out.
const HQ_CLASS: usize = 10;
const GARRISON_CLASS: usize = 9;
const MILITIA_CLASS: usize = 11;
/// MECH, L ARM, ARM: combined arms (row 6) and PanzerLeader.
const ARMOUR_CLASSES: [usize; 3] = [3, 4, 5];
/// PARA, MAR, MTN: Commando.
const COMMANDO_CLASSES: [usize; 3] = [6, 7, 8];

/// Trait bonuses the exe hard-codes (spec §2.3.6).
const DOCTRINE: f32 = 1.1;
const ENGINEER_RIVER: f32 = 0.2;
const FORTRESS_BUSTER: f32 = 0.75;
const SPECIALIST: f32 = 1.1;
const COMMANDO_OTHERS: f32 = 0.95;
/// WinterSpecialist additions to the weather modifier (row 12, `0x4C37E2`).
const WINTER_SPECIALIST_FROST: f32 = 0.2;
const WINTER_SPECIALIST_SNOW: f32 = 0.25;
/// Terrain traits by terrain 0..=7 (row 11): the terrain's own trait and a
/// similar one.
pub(crate) const TERRAIN_TRAITS: [(u32, u32); 8] = [
    (0, 0),
    (traits::RANGER, traits::JUNGLE_RAT),
    (traits::MOUNTAINEER, traits::HILLS_FIGHTER),
    (traits::DESERT_FOX, 0),
    (traits::JUNGLE_RAT, traits::RANGER),
    (traits::HILLS_FIGHTER, traits::MOUNTAINEER),
    (traits::JUNGLE_RAT, traits::RANGER),
    (traits::URBAN_WARFARE, 0),
];

/// Multipliers of the ORG and STR damage a division takes during a combat
/// event (`0x4C1830`, `0x4C1740`), by the side it is on.
fn event_damage(p: &Params, event: Option<CombatEvent>, target_attacking: bool) -> (f32, f32) {
    let Some(e) = event else {
        return (1.0, 1.0);
    };
    let [att_org, att_str, def_org, def_str] = p.event_damage[e as usize];
    if target_attacking {
        (att_org, att_str)
    } else {
        (def_org, def_str)
    }
}

/// Division class of a division type (its `#ID`), `usize::MAX` if unknown.
fn class_of(kind: &str) -> usize {
    dh_data::unitdb::DIVISION_TYPES
        .iter()
        .position(|t| *t == kind)
        .unwrap_or(usize::MAX)
}

/// Row 6 (`0x5093F0`): the stack mixes armour with other troops — MECH,
/// L ARM and ARM make up strictly between 0.332 and 0.667 of its divisions —
/// and has no garrison or militia. The leader condition is the caller's.
fn combined_arms(classes: &[usize]) -> bool {
    if classes.is_empty()
        || classes
            .iter()
            .any(|&c| c == GARRISON_CLASS || c == MILITIA_CLASS)
    {
        return false;
    }
    let armour = classes
        .iter()
        .filter(|c| ARMOUR_CLASSES.contains(c))
        .count();
    let share = armour as f32 / classes.len() as f32;
    share > 0.332 && share < 0.667
}

/// Row 11 bonus of a leader's terrain traits: `combat[83]` for the battle
/// terrain's own trait, else `combat[84]` for a similar one.
fn terrain_trait_bonus(p: &Params, leader_traits: u32, terrain: u8) -> f32 {
    let Some(&(own, similar)) = TERRAIN_TRAITS.get(terrain as usize) else {
        return 0.0;
    };
    if leader_traits & own != 0 {
        p.own_terrain_trait
    } else if leader_traits & similar != 0 {
        p.similar_terrain_trait
    } else {
        0.0
    }
}

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
    pub forts: BTreeMap<u32, f32>,
    /// Ended battles, newest last: (province, attacker won).
    pub results: Vec<(u32, bool)>,
    /// Apply the night modifiers (on in the game; switchable for comparisons).
    pub night: bool,
    /// Apply the supply-efficiency modifier (on in the game).
    pub supply: bool,
    /// Stacks fight under their own leaders (on in the game). Off, every
    /// stack has its built-in leader: rank 25, skill 0, no traits, limit 1.
    pub leaders: bool,
    /// Apply the command-limit penalty of row 16 (on in the game).
    pub command_limit: bool,
    /// Roll surprise in the first hour (on in the game).
    pub surprise: bool,
    /// Roll combat events (on in the game).
    pub events: bool,
    /// `db/difficulty.csv`; empty means no difficulty modifier.
    pub difficulty: Difficulty,
    /// Difficulty level 0..=4 (`NORMAL` in a new game).
    pub difficulty_level: usize,
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
            leaders: true,
            command_limit: true,
            surprise: true,
            events: true,
            difficulty: Difficulty::default(),
            difficulty_level: dh_data::difficulty::NORMAL,
        }
    }

    /// The leader a stack fights under (§2.3.2): its own or the built-in
    /// one; only the built-in one with [`Combat::leaders`] off.
    fn leader<'w>(&self, world: &'w World, unit: usize) -> Cow<'w, LeaderState> {
        if self.leaders {
            return world.stack_leader(unit);
        }
        let u = &world.units[unit];
        Cow::Owned(LeaderState::built_in(&u.owner, u.unit.branch))
    }

    /// HQ influence (§2.3.5); with [`Combat::leaders`] off no stack has a
    /// leader senior enough to make a headquarters.
    fn under_hq_influence(&self, world: &World, unit: usize) -> bool {
        self.leaders && world.under_hq_influence(&self.ctx, unit)
    }

    /// Command limit of each direction for this hour (§4.1), keyed by the
    /// province the stacks stand in. Attackers get the best stack's limit in
    /// each direction, doubled for a stack under HQ influence; defenders add
    /// theirs up, and the sum is doubled when any of them is under HQ
    /// influence.
    fn direction_limits(
        &self,
        world: &World,
        units: &[usize],
        province: u32,
        attacking: bool,
    ) -> BTreeMap<u32, i64> {
        let p = &world.params;
        let factor = i64::from(p.hq_command_factor);
        let mut limits = BTreeMap::new();
        let mut hq = false;
        for &u in units {
            let mut limit = i64::from(self.leader(world, u).command_limit(&world.params));
            let influenced = self.under_hq_influence(world, u);
            let direction = limits
                .entry(world.units[u].unit.location.unwrap_or(0))
                .or_insert(0);
            if attacking {
                if influenced {
                    limit *= factor;
                }
                *direction = (*direction).max(limit);
            } else {
                hq |= influenced;
                *direction += limit;
            }
        }
        if hq {
            if let Some(l) = limits.get_mut(&province) {
                *l *= factor;
            }
        }
        limits
    }

    /// Row 19 (§4.3): a defender under command country `k`, whose divisions
    /// belong to `owner`, is encircled in `p` when no regular land neighbour
    /// shares the province's controller (its region is `p` alone) and none
    /// of the neighbouring controllers is friendly. A controller `c` is
    /// friendly when `k` has military access to it, or when `k` is in an
    /// alliance and `c` is in `owner`'s. Islands are never encircled.
    fn encircled(&self, world: &World, p: u32, k: &str, owner: &str) -> bool {
        let Some(controller) = world.controller.get(&p) else {
            return false;
        };
        if self.ctx.is_island(p) {
            return false;
        }
        let diplomacy = &world.diplomacy;
        let in_alliance = diplomacy.alliance_of(k).is_some();
        let alliance = diplomacy.alliance_of(owner);
        // Access is the byte of k's relation record about c, which a
        // scenario sets with `access = yes` in k's relation with c.
        let friendly = |c: &String| {
            world.has_access(k, c) || (in_alliance && diplomacy.alliance_of(c) == alliance)
        };
        self.ctx
            .regular_neighbours(p)
            .filter(|l| self.ctx.province(l.to).is_some_and(|i| !i.is_water()))
            .filter_map(|l| world.controller.get(&l.to))
            .all(|c| c != controller && !friendly(c))
    }

    /// Fighters of one side with their multipliers for this hour (spec §4):
    /// `units` are the side's stacks in the order they joined, `enemies` the
    /// other side's.
    fn fighters(
        &self,
        world: &World,
        units: &[usize],
        enemies: &[usize],
        battle: &Battle,
        attacking: bool,
    ) -> Vec<Fighter> {
        let p = &world.params;
        let ctx = &self.ctx;
        let province = ctx.province(battle.province);
        let terrain = province.map_or(terrain::PLAINS, |p| p.terrain);
        let night = self.night && province.is_some_and(|p| is_night(world.date, p.army_pos));
        let weather = world.weather_at(battle.province);
        // Row 18: the defenders count the provinces the attackers stand in
        // (not on an island).
        let directions = if attacking || ctx.is_island(battle.province) {
            0
        } else {
            enemies
                .iter()
                .map(|&e| world.units[e].unit.location)
                .collect::<BTreeSet<_>>()
                .len()
        };
        let mut limits = self.direction_limits(world, units, battle.province, attacking);
        let mut out = Vec::new();
        for &u in units {
            let unit = &world.units[u];
            let k = unit.controller();
            // The battle province's link to where the stack stands (rows 1
            // and 3).
            let link = unit
                .unit
                .location
                .and_then(|from| ctx.adjacency.link(battle.province, from));
            // Row 3 also covers a stack with no province or on water (a
            // landing from the sea).
            let from_sea = unit
                .unit
                .location
                .filter(|&p| p != 0)
                .is_none_or(|p| ctx.province(p).is_some_and(|i| i.is_water()));
            let ashore = from_sea || link.is_some_and(|l| l.kind == AdjKind::Sea);
            let enemy_held = world
                .controller
                .get(&battle.province)
                .is_some_and(|c| world.at_war(k, c));
            let leader = self.leader(world, u);
            // Supply efficiency of the stack where it stands (row 10 of the
            // modifier table). Out-of-supply stacks are left neutral for now.
            let ese = match unit.unit.location {
                Some(p) if self.supply && world.in_supply(ctx, k, p) => {
                    let hq = self.under_hq_influence(world, u);
                    world.stack_supply_efficiency(ctx, u, &leader, hq)
                }
                _ => 1.0,
            };
            // Every leader bonus but Engineer needs the stack within its
            // leader's own limit (§2.3.5).
            let within = unit.unit.divisions.len() <= leader.command_limit(&world.params) as usize;
            let skill = world.leader_skill(&leader);
            let classes: Vec<usize> = unit
                .unit
                .divisions
                .iter()
                .map(|d| class_of(&d.kind))
                .collect();
            // Row 4: a defender that is attacking another province as well.
            let two_battles = !attacking
                && unit
                    .route
                    .front()
                    .and_then(|&q| world.battle_at(q))
                    .is_some_and(|b| b.attackers.contains(&u));
            let combined = within && combined_arms(&classes);
            let terrain_trait = if within {
                terrain_trait_bonus(&world.params, leader.traits, terrain)
            } else {
                0.0
            };
            let surprised = battle.side(attacking).surprised;
            let encircled = !attacking && self.encircled(world, battle.province, k, &unit.owner);
            let dissent = world.countries.get(k).map_or(0.0, |c| c.dissent) * p.dissent;
            // Human players are not modelled: every country takes the AI row.
            let difficulty = self.difficulty.modifier(
                "COMBAT",
                self.difficulty_level,
                false,
                world.diplomacy.faction_of(k),
            );
            let src = unit.unit.location.unwrap_or(0);
            for (i, d) in unit.unit.divisions.iter().enumerate() {
                // Row 16 counts every division, in stack and then division order.
                let over_limit = self.command_limit && {
                    let left = limits.entry(src).or_insert(0);
                    *left -= 1;
                    *left < 0
                };
                let Some(stats) = ctx.units.division_stats(d) else {
                    continue;
                };
                let class = classes[i];
                let m = |name: &str| ctx.modifiers.named(name, class);
                let (mut a, mut w) = (1.0f32, 1.0f32);
                let side = if attacking { "ATT" } else { "DEF" };
                if attacking && link.is_some_and(|l| l.kind == AdjKind::River) {
                    let engineer = if leader.has_trait(traits::ENGINEER) {
                        ENGINEER_RIVER
                    } else {
                        0.0
                    };
                    a *= 1.0 + (m("ATT_RIVER") + engineer).min(0.0);
                }
                if attacking && ashore {
                    // The command country's amphibious-assault efficiency;
                    // every country has the starting one so far.
                    let s = -m("ATT_SHORE") * (2.0 - p.amphibious_assault);
                    a *= 1.0 - s.clamp(0.0, 0.99);
                }
                if two_battles {
                    a *= 1.0 + p.multiple_combats;
                }
                let doctrine = if attacking {
                    traits::OFFENSIVE_DOCTRINE
                } else {
                    traits::DEFENSIVE_DOCTRINE
                };
                if within && leader.has_trait(doctrine) {
                    a *= DOCTRINE;
                }
                if combined {
                    a *= 1.0
                        + if attacking {
                            p.combined_arms_attack
                        } else {
                            p.combined_arms_defence
                        };
                }
                if surprised {
                    a *= 1.0 + p.surprise;
                }
                let experience = d.experience.unwrap_or(0.0) as f32;
                if experience > 0.0 {
                    a *= 1.0 + experience * 0.01 * p.experience;
                }
                if ese != 1.0 {
                    a *= 1.0 + (ese - 1.0) * 0.5;
                }
                if let Some(t) = TERRAIN_ROW.get(terrain as usize) {
                    let mut tm = m(&format!("{side}_{t}")) + terrain_trait;
                    if attacking && terrain == terrain::URBAN && stats.get("softness") < 50.0 {
                        tm += p.hard_in_city;
                    }
                    a *= 1.0 + tm;
                }
                // Weather is always clear for now, so WinterSpecialist (frost,
                // snow, blizzard) never applies.
                // Row 12: the battle province's weather; WinterSpecialist
                // within the limit softens frost and snow.
                let mut wm = m(&format!("{side}_{}", weather.modifier_suffix()));
                if within && leader.has_trait(traits::WINTER_SPECIALIST) {
                    wm += match weather {
                        Weather::Frozen => WINTER_SPECIALIST_FROST,
                        Weather::Snowing | Weather::Blizzard => WINTER_SPECIALIST_SNOW,
                        _ => 0.0,
                    };
                }
                w *= 1.0 + wm;
                if night {
                    w *= 1.0 + m(&format!("{side}_NIGHT"));
                }
                if within {
                    a *= 1.0 + skill * p.leader_skill;
                    if leader.has_trait(traits::PANZER_LEADER) && ARMOUR_CLASSES.contains(&class) {
                        a *= SPECIALIST;
                    }
                    if leader.has_trait(traits::COMMANDO) {
                        a *= if COMMANDO_CLASSES.contains(&class) {
                            SPECIALIST
                        } else {
                            COMMANDO_OTHERS
                        };
                    }
                }
                if over_limit {
                    a *= 1.0 + p.over_command_limit;
                }
                if directions > 2 {
                    a *= 1.0 + (directions - 2) as f32 * p.envelopment;
                }
                if encircled {
                    a *= 1.0 + p.encircled;
                }
                if !attacking && unit.dig_in > 0.0 {
                    a *= 1.0 + unit.dig_in * p.dig_in;
                }
                if attacking && enemy_held {
                    let level = self.forts.get(&battle.province).copied().unwrap_or(0.0);
                    if level > 0.0 {
                        let mut f = level * p.fort_per_level * (1.0 - m("ATT_FORT"));
                        if within && leader.has_trait(traits::FORTRESS_BUSTER) {
                            f *= FORTRESS_BUSTER;
                        }
                        a *= 1.0 + f.clamp(-0.99, 0.0);
                    }
                }
                if dissent != 0.0 {
                    a *= 1.0 + dissent;
                }
                a *= 1.0 + difficulty;
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

    /// One side fires at the other (spec §3.3–3.4) during `event`; damage
    /// only accumulates.
    fn fire(
        p: &Params,
        shooters: &[Fighter],
        targets: &mut [Fighter],
        targets_defending: bool,
        event: Option<CombatEvent>,
        rng: &mut Rng,
    ) {
        let (org_taken, str_taken) = event_damage(p, event, !targets_defending);
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
                    p.ground_defence_efficiency * p.evade_with_defences
                } else {
                    p.ground_defence_efficiency * p.evade_without_defences
                };
                if rng.below(100) < (evade.min(99.0)) as u32 {
                    continue;
                }
                let (org_range, str_range) = if hard_on_soft {
                    (p.org_range_hard_on_soft, p.str_range_hard_on_soft)
                } else {
                    (p.org_range, p.str_range)
                };
                let mut org = p.org_min + rng.below(org_range) as f32;
                let mut str = p.str_min + rng.below(str_range) as f32;
                str *= str_taken;
                org *= org_taken;
                org *= firepower;
                str *= firepower;
                // Headquarters lose strength only to a breakthrough (`combat[262]`).
                if target.class == HQ_CLASS && event != Some(CombatEvent::Breakthrough) {
                    str = 0.0;
                }
                str *= p.str_damage;
                org *= p.org_damage;
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

    fn round(&mut self, world: &mut World, battle: &mut Battle, rng: &mut Rng) -> Option<bool> {
        let params = world.params.clone();
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
        // Spec §3.1 steps 2–4: surprise, combat events and commanders, then
        // the multipliers and the hour count.
        self.begin_hour(world, battle, &attackers, &defenders, rng);
        let mut att = self.fighters(world, &attackers, &defenders, battle, true);
        let mut def = self.fighters(world, &defenders, &attackers, battle, false);
        battle.hours += 1;
        if battle.hours > events::SURPRISE_HOURS {
            for side in &mut battle.sides {
                side.surprised = false;
            }
        }
        let event = battle.event.map(|e| e.kind);
        Self::fire(&params, &att, &mut def, true, event, rng);
        Self::fire(&params, &def, &mut att, false, event, rng);

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
                || Self::average_org(side) < params.retreat_org
        };
        if beaten(&def) {
            for &u in &defenders {
                match self.retreat_target(world, u, battle.province) {
                    Some(p) if !world.units[u].unit.divisions.is_empty() => {
                        // In the game the stack marches off on a retreat
                        // route, whose first hour of movement zeroes its
                        // dig-in (§4.4); here it arrives at once.
                        let unit = &mut world.units[u];
                        unit.unit.location = Some(p);
                        unit.route.clear();
                        unit.dig_in = 0.0;
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
        for mut battle in battles {
            let p = battle.province;
            match self.round(world, &mut battle, rng) {
                Some(attacker_won) => {
                    self.results.push((p, attacker_won));
                    world.battles.retain(|b| b.province != p);
                }
                None => {
                    if let Some(b) = world.battles.iter_mut().find(|b| b.province == p) {
                        *b = battle;
                    }
                }
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
    use crate::movement::{ProvinceInfo, UnitModifiers};
    use crate::{Country, UnitState};
    use dh_data::unitdb::{DivisionClass, Model};
    use dh_data::{GameDate, Unit, UnitDb};
    use dh_map::{Adjacency, Link};

    /// `modifiers.csv` columns INF … MIL; ATT_RIVER is −50 % but −10 % for
    /// marines, ATT_SHORE −50 % but −20 % for marines and −75 % for
    /// garrisons (as shipped), DEF_FOREST +10 %, everything else 0.
    const MODIFIERS: &str = "MODIFIER;INF;CAV;MOT;MECH;LARM;ARM;PARA;MAR;MTN;GARR;HQ;MIL\n\
        ATT_RIVER;-50;-50;-50;-50;-50;-50;-50;-10;-50;-50;-50;-50\n\
        ATT_SHORE;-50;-50;-50;-50;-50;-50;-50;-20;-50;-75;-50;-50\n\
        DEF_FOREST;10;10;10;10;10;10;10;10;10;10;10;10\n";

    /// Battle province 1 (terrain `battle_terrain`) borders the land
    /// provinces 2, 3 and 4 (2 across a link of kind `from_2`) and the sea 5;
    /// province 6 is an island in the seas 5, 7 and 8. The other land
    /// provinces only border 1. Only armour has a speed (12 km/h).
    pub(super) fn map(battle_terrain: u8, from_2: AdjKind) -> Arc<MoveContext> {
        let link = |to, kind| Link {
            to,
            kind,
            through: None,
        };
        let normal = |to| link(to, AdjKind::Normal);
        let province = |terrain| {
            Some(ProvinceInfo {
                terrain,
                infra: 1.0,
                army_pos: (0, 0),
                climate: Default::default(),
                centre: (0, 0),
                north: true,
            })
        };
        let (land, sea) = (province(terrain::PLAINS), province(terrain::OCEAN));
        let mut units = UnitDb::default();
        for kind in ["infantry", "armor", "marine", "garrison", "hq"] {
            let mut stats = vec![
                ("softattack", 3.0),
                ("defensiveness", 5.0),
                ("toughness", 5.0),
                ("softness", 100.0),
                ("defaultorganisation", 30.0),
            ];
            if kind == "armor" {
                stats.push(("maxspeed", 12.0));
            }
            units.divisions.insert(
                kind.into(),
                DivisionClass {
                    name: kind.into(),
                    branch: Branch::Land,
                    models: vec![Model {
                        stats: stats.iter().map(|(k, v)| (k.to_string(), *v)).collect(),
                    }],
                    allowed_brigades: Vec::new(),
                    max_brigades: 1,
                },
            );
        }
        Arc::new(MoveContext {
            adjacency: Adjacency::from_lists(vec![
                vec![],
                vec![link(2, from_2), normal(3), normal(4), normal(5)],
                vec![link(1, from_2)],
                vec![normal(1)],
                vec![normal(1)],
                vec![normal(1), normal(6)],
                vec![normal(5), normal(7), normal(8)],
                vec![normal(6)],
                vec![normal(6)],
            ]),
            provinces: vec![
                None,
                province(battle_terrain),
                land,
                land,
                land,
                sea,
                land,
                sea,
                sea,
            ],
            terrain_move: [1.0; 12],
            modifiers: UnitModifiers::parse(MODIFIERS.as_bytes()),
            units,
            airdist: None,
        })
    }

    pub(super) fn combat(ctx: Arc<MoveContext>) -> Combat {
        Combat {
            ctx,
            forts: BTreeMap::new(),
            results: Vec::new(),
            night: false,
            supply: false,
            leaders: true,
            command_limit: true,
            surprise: true,
            events: true,
            difficulty: Difficulty::default(),
            difficulty_level: dh_data::difficulty::NORMAL,
        }
    }

    /// France holds 1, 4 and the island 6, Germany 2 and 3; they are at war.
    pub(super) fn world() -> World {
        let mut world = World::empty(GameDate::new(1936, 6, 1));
        for tag in ["GER", "FRA", "ITA"] {
            world.countries.insert(tag.into(), Country::new(tag));
        }
        for (p, tag) in [(1, "FRA"), (2, "GER"), (3, "GER"), (4, "FRA"), (6, "FRA")] {
            world.controller.insert(p, tag.into());
        }
        world.declare_war("GER", "FRA");
        world
    }

    /// Adds a stack of `owner` in `location` with divisions of these types;
    /// returns its index.
    pub(super) fn stack(world: &mut World, owner: &str, location: u32, kinds: &[&str]) -> usize {
        let divisions: String = kinds
            .iter()
            .map(|k| format!("division = {{ type = {k} }} "))
            .collect();
        let doc = dh_text::script::parse_str(&format!(
            "landunit = {{ location = {location} {divisions}}}"
        ));
        let unit = Unit::all_in(&doc.root).remove(0);
        world.units.push(UnitState::new(owner, unit));
        world.units.len() - 1
    }

    /// Gives a stack a leader of this rank, whole skill level and traits.
    pub(super) fn lead(world: &mut World, unit: usize, rank: u8, skill: i32, traits: u32) {
        let id = 1000 + unit as i64;
        let mut leader = LeaderState::built_in(&world.units[unit].owner, Branch::Land);
        leader.id = Some(id);
        leader.rank = rank;
        leader.max_skill = 10;
        leader.set_skill(skill);
        leader.traits = traits;
        leader.unit = Some(unit);
        world.leaders.insert(id, leader);
        world.units[unit].unit.leader = Some(id);
    }

    /// The multiplier `A` of each division of `units` fighting for province
    /// `p` (clear weather in daylight, so `A·W` is the same).
    fn mults(
        combat: &Combat,
        world: &World,
        p: u32,
        units: &[usize],
        enemies: &[usize],
        attacking: bool,
    ) -> Vec<f32> {
        let attackers = if attacking { units } else { enemies };
        let battle = Battle::new(p, attackers.to_vec(), 0);
        let fighters = combat.fighters(world, units, enemies, &battle, attacking);
        for f in &fighters {
            assert_eq!(f.attack_mult, f.defence_mult);
        }
        fighters.iter().map(|f| f.defence_mult).collect()
    }

    fn assert_close(actual: &[f32], expected: &[f32]) {
        assert_eq!(actual.len(), expected.len(), "{actual:?} vs {expected:?}");
        for (a, e) in actual.iter().zip(expected) {
            assert!((a - e).abs() < 1e-5, "{actual:?} vs {expected:?}");
        }
    }

    /// The example of spec §4.1: from 2, S1 (rank 2, 3 divisions) and S2 (no
    /// leader, 2); from 3, S3 (rank 1, 6) next to a German HQ; defending,
    /// D1 (rank 3, 2) and D2 (no leader, 1). Then S3 grows past its own
    /// limit, and the leaders are switched off.
    #[test]
    fn command_limit_is_counted_by_direction() {
        let mut world = world();
        let s1 = stack(&mut world, "GER", 2, &["infantry"; 3]);
        let s2 = stack(&mut world, "GER", 2, &["infantry"; 2]);
        let s3 = stack(&mut world, "GER", 3, &["infantry"; 6]);
        let hq = stack(&mut world, "GER", 3, &["hq"]);
        let d1 = stack(&mut world, "FRA", 1, &["infantry"; 2]);
        let d2 = stack(&mut world, "FRA", 1, &["infantry"]);
        lead(&mut world, s1, 2, 0, 0);
        lead(&mut world, s3, 1, 0, 0);
        lead(&mut world, hq, 0, 0, 0);
        lead(&mut world, d1, 3, 0, 0);
        let mut combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        let (att, def) = ([s1, s2, s3], [d1, d2]);

        // From 2 the best limit is S1's 3: both S2 divisions are over it.
        // From 3 the HQ doubles S3's 9. The defenders add up 1 + 1, which
        // D1's two divisions use up: only D2's is over.
        let mut expected = vec![1.0; 11];
        expected[3..5].fill(0.25);
        assert_close(&mults(&combat, &world, 1, &att, &def, true), &expected);
        assert_close(
            &mults(&combat, &world, 1, &def, &att, false),
            &[1.0, 1.0, 0.25],
        );
        // Without the HQ, S3's own limit of 9 still covers its 6 divisions;
        // S1 and S2 never were near it.
        world.units[hq].unit.location = Some(4);
        assert_close(&mults(&combat, &world, 1, &att, &def, true), &expected);

        // With 12 divisions S3 is over its own 9 but within the doubled 18
        // next to the HQ; away from it, its last three are over.
        let division = world.units[s3].unit.divisions[0].clone();
        world.units[s3].unit.divisions.resize(12, division);
        let mut expected = vec![1.0; 17];
        expected[3..5].fill(0.25);
        let away = mults(&combat, &world, 1, &att, &def, true);
        world.units[hq].unit.location = Some(3);
        assert_close(&mults(&combat, &world, 1, &att, &def, true), &expected);
        expected[14..].fill(0.25);
        assert_close(&away, &expected);
        world.units[s3].unit.divisions.truncate(6);

        // A French HQ next to the battle doubles the defenders' sum to 4.
        let fra_hq = stack(&mut world, "FRA", 4, &["hq"]);
        lead(&mut world, fra_hq, 1, 0, 0);
        assert_close(&mults(&combat, &world, 1, &def, &att, false), &[1.0; 3]);

        // Built-in leaders only: every stack has limit 1 in its direction,
        // and neither side has an HQ to double it.
        combat.leaders = false;
        let mut expected = vec![0.25; 11];
        expected[0] = 1.0;
        expected[5] = 1.0;
        assert_close(&mults(&combat, &world, 1, &att, &def, true), &expected);
        assert_close(
            &mults(&combat, &world, 1, &def, &att, false),
            &[1.0, 1.0, 0.25],
        );
        combat.command_limit = false;
        assert_close(&mults(&combat, &world, 1, &att, &def, true), &[1.0; 11]);
    }

    #[test]
    fn leader_bonuses_need_the_stack_within_its_limit() {
        let mut world = world();
        let ctx = map(terrain::PLAINS, AdjKind::Normal);
        let mut combat = combat(ctx);
        let tanks = stack(&mut world, "GER", 2, &["armor", "infantry"]);
        let marines = stack(&mut world, "FRA", 1, &["marine", "infantry"]);
        lead(
            &mut world,
            tanks,
            1,
            2,
            traits::OFFENSIVE_DOCTRINE | traits::DEFENSIVE_DOCTRINE | traits::PANZER_LEADER,
        );
        lead(
            &mut world,
            marines,
            1,
            0,
            traits::OFFENSIVE_DOCTRINE | traits::DEFENSIVE_DOCTRINE | traits::COMMANDO,
        );
        // Attacker: doctrine 1.1, combined arms (1 of 2 armoured) +5 %,
        // skill 2 · 5 %, PanzerLeader 1.1 on the armour only.
        let infantry = 1.1 * 1.05 * 1.1;
        assert_close(
            &mults(&combat, &world, 1, &[tanks], &[marines], true),
            &[infantry * 1.1, infantry],
        );
        // Defender: doctrine 1.1, no armour, skill 0, Commando 1.1 on
        // marines and 0.95 on the others.
        assert_close(
            &mults(&combat, &world, 1, &[marines], &[tanks], false),
            &[1.1 * 1.1, 1.1 * 0.95],
        );
        // The same mix defending gets the defensive combined-arms bonus.
        assert_close(
            &mults(&combat, &world, 1, &[tanks], &[marines], false)[1..],
            &[1.1 * 1.15 * 1.1],
        );

        // Rank 2 allows 3 divisions: with a fourth no bonus applies, and the
        // fourth division is over the limit of its direction.
        world.leaders.get_mut(&(1000 + tanks as i64)).unwrap().rank = 2;
        world.units[tanks].unit.divisions = Unit::all_in(
            &dh_text::script::parse_str(
                "landunit = { division = { type = armor } division = { type = infantry } \
                 division = { type = infantry } division = { type = infantry } }",
            )
            .root,
        )
        .remove(0)
        .divisions;
        assert_close(
            &mults(&combat, &world, 1, &[tanks], &[marines], true),
            &[1.0, 1.0, 1.0, 0.25],
        );
        // Garrisons and militia rule out combined arms.
        world.units[tanks].unit.divisions.truncate(2);
        world.units[tanks].unit.divisions[1].kind = "garrison".into();
        assert_close(
            &mults(&combat, &world, 1, &[tanks], &[marines], true),
            &[1.1 * 1.1 * 1.1, 1.1 * 1.1],
        );
        // With leaders off the same stack has only its built-in leader.
        combat.leaders = false;
        assert_close(
            &mults(&combat, &world, 1, &[tanks], &[marines], true),
            &[1.0, 0.25],
        );

        // An armour and infantry pair qualifies for combined arms only
        // within its leader's limit: never without a leader (limit 1).
        combat.leaders = true;
        combat.command_limit = false;
        let pair = stack(&mut world, "GER", 3, &["armor", "infantry"]);
        assert_close(
            &mults(&combat, &world, 1, &[pair], &[marines], true),
            &[1.0, 1.0],
        );
        lead(&mut world, pair, 3, 0, 0);
        assert_close(
            &mults(&combat, &world, 1, &[pair], &[marines], true),
            &[1.0, 1.0],
        );
        lead(&mut world, pair, 2, 0, 0);
        assert_close(
            &mults(&combat, &world, 1, &[pair], &[marines], true),
            &[1.05, 1.05],
        );
    }

    #[test]
    fn combined_arms_wants_a_third_to_two_thirds_armour() {
        const ARM: usize = 5;
        const INF: usize = 0;
        let mix = |armour: usize, others: usize| {
            let mut classes = vec![ARM; armour];
            classes.resize(armour + others, INF);
            combined_arms(&classes)
        };
        // Spec §4, row 6: 1/3, 2/5, 1/2, 3/5 and 2/3 qualify; 1/5, 1/4,
        // 3/4, all armour, none and an empty stack do not.
        for (armour, others) in [(1, 2), (2, 3), (1, 1), (3, 2), (2, 1), (4, 2)] {
            assert!(mix(armour, others), "{armour} of {}", armour + others);
        }
        for (armour, others) in [(1, 4), (1, 3), (3, 1), (2, 0), (0, 3), (0, 0)] {
            assert!(!mix(armour, others), "{armour} of {}", armour + others);
        }
        // MECH and L ARM count as armour; a garrison or militia rules the
        // bonus out.
        assert!(combined_arms(&[3, 4, INF, INF, INF]));
        assert!(!combined_arms(&[ARM, INF, GARRISON_CLASS]));
        assert!(!combined_arms(&[ARM, INF, MILITIA_CLASS]));
    }

    #[test]
    fn crossing_from_a_strait_or_landing_from_the_sea() {
        let mut world = world();
        let (mut strait, mut normal) = (
            combat(map(terrain::PLAINS, AdjKind::Sea)),
            combat(map(terrain::PLAINS, AdjKind::Normal)),
        );
        strait.command_limit = false;
        normal.command_limit = false;
        let s = stack(&mut world, "GER", 2, &["infantry", "marine", "garrison"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        // At the starting amphibious efficiency of 0.5 the shore penalty
        // counts one and a half times: infantry 0.5 · 1.5 = 0.75 off,
        // marines 0.3, garrisons 1.125, held at 0.99.
        assert_close(
            &mults(&strait, &world, 1, &[s], &[d], true),
            &[0.25, 0.7, 0.01],
        );
        // Defenders do not cross.
        assert_close(&mults(&strait, &world, 1, &[d], &[s], false), &[1.0]);
        // Over a normal link nothing applies, but from a sea province it
        // does.
        assert_close(&mults(&normal, &world, 1, &[s], &[d], true), &[1.0; 3]);
        world.units[s].unit.location = Some(5);
        assert_close(
            &mults(&normal, &world, 1, &[s], &[d], true),
            &[0.25, 0.7, 0.01],
        );
    }

    #[test]
    fn supply_efficiency_with_logistics_wizard_and_hq() {
        // Province 2 gets infrastructure `infra`: ESE (infra + 1) · 0.5.
        let with_infra = |infra: f32| {
            let mut ctx = Arc::try_unwrap(map(terrain::PLAINS, AdjKind::Normal))
                .ok()
                .unwrap();
            if let Some(p) = ctx.provinces[2].as_mut() {
                p.infra = infra;
            }
            let mut combat = combat(Arc::new(ctx));
            combat.supply = true;
            combat.command_limit = false;
            combat
        };
        let mut world = world();
        let a = stack(&mut world, "GER", 2, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        let attack = |combat: &Combat, world: &World| mults(combat, world, 1, &[a], &[d], true);
        let (low, high) = (with_infra(0.6), with_infra(0.9));
        // Row 10: 1 + (ESE − 1) · 0.5 with ESE 0.8 and 0.95.
        assert_close(&attack(&low, &world), &[0.9]);
        assert_close(&attack(&high, &world), &[0.975]);
        // A Logistics Wizard within his limit adds 0.1 below 1, up to 1.
        lead(&mut world, a, 3, 0, traits::LOGISTICS_WIZARD);
        assert_close(&attack(&low, &world), &[0.95]);
        assert_close(&attack(&high, &world), &[1.0]);
        // HQ influence adds 0.01 past that cap.
        let hq = stack(&mut world, "GER", 2, &["hq"]);
        lead(&mut world, hq, 1, 0, 0);
        assert_close(&attack(&low, &world), &[0.955]);
        assert_close(&attack(&high, &world), &[1.005]);
        // Over his limit the wizard does not help; the HQ still does.
        let second = world.units[a].unit.divisions[0].clone();
        world.units[a].unit.divisions.push(second);
        assert_close(&attack(&low, &world), &[0.905, 0.905]);
        // With leaders off neither applies; with supply off ESE is 1.
        let mut low = low;
        low.leaders = false;
        assert_close(&attack(&low, &world), &[0.9, 0.9]);
        low.supply = false;
        assert_close(&attack(&low, &world), &[1.0, 1.0]);
    }

    #[test]
    fn a_beaten_defender_retreats_without_its_dig_in() {
        let mut world = world();
        let mut combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        combat.surprise = false;
        combat.events = false;
        let a = stack(&mut world, "GER", 2, &["infantry"; 3]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        world.units[a].route.push_back(1);
        world.units[d].dig_in = 20.0;
        // Worn out: organisation 1, under the 5 of `combat[228]`.
        world.units[d].unit.divisions[0].organisation = Some(1.0);
        let mut battle = Battle::new(1, vec![a], 0);
        let mut rng = Rng::new(1);
        assert_eq!(combat.round(&mut world, &mut battle, &mut rng), Some(true));
        // To its own province 4, the best neighbour.
        assert_eq!(world.units[d].unit.location, Some(4));
        assert!(world.units[d].route.is_empty());
        assert_eq!(world.units[d].dig_in, 0.0);
    }

    #[test]
    fn engineer_eases_river_crossings_whatever_the_limit() {
        let mut world = world();
        let mut combat = combat(map(terrain::PLAINS, AdjKind::River));
        combat.command_limit = false;
        let s = stack(&mut world, "GER", 2, &["infantry", "marine"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        assert_close(&mults(&combat, &world, 1, &[s], &[d], true), &[0.5, 0.9]);
        // Rank 3 with two divisions: over the limit, yet Engineer counts.
        lead(&mut world, s, 3, 5, traits::ENGINEER);
        assert_close(&mults(&combat, &world, 1, &[s], &[d], true), &[0.7, 1.0]);
        // Defenders do not cross.
        assert_close(&mults(&combat, &world, 1, &[d], &[s], false), &[1.0]);
    }

    #[test]
    fn terrain_traits_add_to_the_terrain_modifier() {
        let mut world = world();
        let mut combat = combat(map(1, AdjKind::Normal)); // forest
        combat.command_limit = false;
        let a = stack(&mut world, "GER", 2, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        let defend = |world: &World| mults(&combat, world, 1, &[d], &[a], false);
        assert_close(&defend(&world), &[1.1]);
        lead(&mut world, d, 3, 0, traits::RANGER);
        assert_close(&defend(&world), &[1.2]);
        lead(&mut world, d, 3, 0, traits::JUNGLE_RAT);
        assert_close(&defend(&world), &[1.15]);
        lead(&mut world, d, 3, 0, traits::JUNGLE_RAT | traits::RANGER);
        assert_close(&defend(&world), &[1.2]);
        lead(
            &mut world,
            d,
            3,
            0,
            traits::DESERT_FOX | traits::HILLS_FIGHTER,
        );
        assert_close(&defend(&world), &[1.1]);
        // A second division puts a rank-3 leader over his limit.
        lead(&mut world, d, 3, 0, traits::RANGER);
        let second = world.units[d].unit.divisions[0].clone();
        world.units[d].unit.divisions.push(second);
        assert_close(&defend(&world), &[1.1, 1.1]);
    }

    #[test]
    fn envelopment_and_encirclement() {
        let mut world = world();
        let combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        let from: Vec<usize> = [2, 3, 4, 5]
            .iter()
            .map(|&p| stack(&mut world, "GER", p, &["infantry"]))
            .collect();
        let defend = |world: &World, attackers: &[usize]| {
            mults(&combat, world, 1, &[d], attackers, false)[0]
        };
        // Two directions are free, each further one costs 10 %; several
        // stacks in one province are one direction. (Province 4 is French,
        // so the defender is not encircled.)
        assert_close(&[defend(&world, &from[..2])], &[1.0]);
        assert_close(&[defend(&world, &from[..3])], &[0.9]);
        assert_close(&[defend(&world, &from)], &[0.8]);
        let twin = stack(&mut world, "GER", 2, &["infantry"]);
        assert_close(&[defend(&world, &[from[0], twin, from[1]])], &[1.0]);
        // The attackers never get it (the one in the sea province 5 lands at
        // a quarter, row 3).
        assert_close(
            &mults(&combat, &world, 1, &from, &[d], true),
            &[1.0, 1.0, 1.0, 0.25],
        );

        // Encircled once no land neighbour is French or friendly; the sea
        // does not count.
        let a = &from[..1];
        assert_close(&[defend(&world, a)], &[1.0]);
        world.controller.insert(4, "GER".into());
        assert_close(&[defend(&world, a)], &[0.9]);
        world.controller.insert(4, "ITA".into());
        assert_close(&[defend(&world, a)], &[0.9]);
        // Military access of France to Italy makes Italy friendly …
        world.access.insert(("FRA".into(), "ITA".into()));
        assert_close(&[defend(&world, a)], &[1.0]);
        world.access.clear();
        // … and so does an alliance of both.
        world
            .diplomacy
            .alliances
            .push(dh_data::diplomacy::Alliance {
                faction: dh_data::diplomacy::Faction::Allies,
                id: None,
                name: None,
                members: vec!["FRA".into(), "ITA".into()],
                defensive: false,
            });
        assert_close(&[defend(&world, a)], &[1.0]);
        world.diplomacy.alliances.clear();
        // A neighbour nobody controls is ignored.
        world.controller.remove(&4);
        assert_close(&[defend(&world, a)], &[0.9]);

        // On the island 6 neither applies, though the stacks come from three
        // sea provinces and no neighbour is French.
        let islanders = stack(&mut world, "FRA", 6, &["infantry"]);
        let landing: Vec<usize> = [5, 7, 8]
            .iter()
            .map(|&p| stack(&mut world, "GER", p, &["infantry"]))
            .collect();
        assert!(combat.ctx.is_island(6));
        assert!(!combat.ctx.is_island(1) && !combat.ctx.is_island(5));
        assert_close(
            &mults(&combat, &world, 6, &[islanders], &landing, false),
            &[1.0],
        );
    }

    #[test]
    fn second_battle_dig_in_forts_dissent_and_difficulty() {
        let mut world = world();
        let mut combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        combat.command_limit = false;
        let a = stack(&mut world, "GER", 2, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        let defend = |combat: &Combat, world: &World| mults(combat, world, 1, &[d], &[a], false)[0];
        let attack = |combat: &Combat, world: &World| mults(combat, world, 1, &[a], &[d], true)[0];

        // A defender that is attacking province 2 at the same time.
        world.units[d].route.push_back(2);
        world.battles.push(Battle::new(2, vec![d], 0));
        assert_close(&[defend(&combat, &world)], &[0.5]);
        world.units[d].route.clear();
        assert_close(&[defend(&combat, &world)], &[1.0]);

        // Dig-in helps defenders only, without a cap.
        world.units[d].dig_in = 50.0;
        world.units[a].dig_in = 50.0;
        assert_close(
            &[defend(&combat, &world), attack(&combat, &world)],
            &[1.5, 1.0],
        );
        world.units[d].dig_in = 0.0;

        // Forts: 5 levels · −7 %; FortressBuster within the limit takes a
        // quarter off.
        combat.forts.insert(1, 5.0);
        assert_close(&[attack(&combat, &world)], &[0.65]);
        lead(&mut world, a, 3, 0, traits::FORTRESS_BUSTER);
        assert_close(&[attack(&combat, &world)], &[1.0 - 0.35 * 0.75]);
        let second = world.units[a].unit.divisions[0].clone();
        world.units[a].unit.divisions.push(second);
        assert_close(&[attack(&combat, &world)], &[0.65]);
        combat.forts.clear();

        // Dissent of the command country: 20 · −0.5 %.
        world.countries.get_mut("FRA").unwrap().dissent = 20.0;
        assert_close(
            &[defend(&combat, &world), attack(&combat, &world)],
            &[0.9, 1.0],
        );
        world.countries.get_mut("FRA").unwrap().dissent = 0.0;

        // Difficulty: the AI row plus the alliance row.
        combat.difficulty = Difficulty::parse(
            b"CATEGORY;VERYEASY;EASY;NORMAL;HARD;VERYHARD;BLANK;X\n\
              AI;;;;;;;X\nCOMBAT;-20;-10;0;10;20;;X\n\
              ALLIES;;;;;;;X\nCOMBAT;0;0;0;0;5;;X\n",
        );
        assert_close(
            &[defend(&combat, &world), attack(&combat, &world)],
            &[1.0, 1.0],
        );
        combat.difficulty_level = 4;
        world
            .diplomacy
            .alliances
            .push(dh_data::diplomacy::Alliance {
                faction: dh_data::diplomacy::Faction::Allies,
                id: None,
                name: None,
                members: vec!["FRA".into()],
                defensive: false,
            });
        assert_close(
            &[defend(&combat, &world), attack(&combat, &world)],
            &[1.25, 1.2],
        );
    }

    #[test]
    fn scenario_dig_in_is_kept_unclamped() {
        let doc = dh_text::script::parse_str(
            "landunit = { location = 1 dig_in = 75.000 division = { type = infantry } }",
        );
        let unit = UnitState::new("CHI", Unit::all_in(&doc.root).remove(0));
        assert_eq!(unit.dig_in, 75.0);
    }

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
