//! Daily reinforcement of land divisions (`docs/spec/logistics.md` §5,
//! `0x44FD50` at 00:00): the IC a country puts on its reinforcement slider
//! and its manpower bring depleted divisions back to strength, the most
//! urgent first.
//!
//! Not modelled yet: the undeployed pool, divisions of other countries
//! under this one's command, the `prioritized` and `can_reinforce` flags
//! (every stack may reinforce), technology deltas (0), and the automatic
//! IC sliders.

use crate::movement::MoveContext;
use crate::{Rng, System, World};
use dh_data::Branch;
use dh_map::AdjKind;
use std::sync::Arc;

/// Hour of the day reinforcement runs.
pub const REINFORCE_HOUR: u8 = 0;

/// Division classes (`#ID`) the priority singles out.
const MECH: usize = 3;
const ARM: usize = 5;
const GARRISON: usize = 9;
const MILITIA: usize = 11;

pub struct Reinforce {
    ctx: Arc<MoveContext>,
}

impl Reinforce {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        Reinforce { ctx }
    }
}

impl World {
    /// `CanReinforce` (`0x49F530`) for division `j` of land stack `unit`:
    /// below full strength, and the stack in supply, out of combat and on
    /// the map. Movement and friendly territory do not matter.
    fn can_reinforce(&self, ctx: &MoveContext, unit: usize, j: usize) -> bool {
        let u = &self.units[unit];
        let d = &u.unit.divisions[j];
        let max = d.max_strength.unwrap_or(100.0);
        d.strength.unwrap_or(100.0) < max
            && u.unit.branch == Branch::Land
            && u.unit
                .location
                .is_some_and(|p| p >= 1 && self.in_supply(ctx, u.controller(), p))
            && !self.in_battle(unit)
    }

    /// Priority of a division for reinforcement (`0x483B10`): land first,
    /// experienced ones and armour before others, garrisons and militia
    /// last, more so at the front.
    fn reinforce_priority(&self, ctx: &MoveContext, unit: usize, j: usize) -> f64 {
        let u = &self.units[unit];
        let d = &u.unit.divisions[j];
        let mut p = 10.0 + d.experience.unwrap_or(0.0) + 200.0;
        let tag = u.controller();
        let front = u.unit.location.is_some_and(|loc| {
            ctx.regular_neighbours(loc).any(|l| {
                l.kind != AdjKind::Impassable
                    && ctx.province(l.to).is_some_and(|i| !i.is_water())
                    && self
                        .controller
                        .get(&l.to)
                        .is_some_and(|c| self.at_war(tag, c))
            })
        });
        if front {
            p += 50.0;
        }
        let class = dh_data::unitdb::DIVISION_TYPES
            .iter()
            .position(|t| *t == d.kind)
            .unwrap_or(usize::MAX);
        p += match class {
            ARM => 50.0,
            MECH => 30.0,
            GARRISON | MILITIA => -210.0,
            _ => 0.0,
        };
        p - d.model.unwrap_or(0) as f64
    }

    /// One day's reinforcement for country `tag`.
    pub fn reinforce(&mut self, ctx: &MoveContext, tag: &str) {
        let p = self.params.clone();
        let Some(c) = self.countries.get(tag) else {
            return;
        };
        let mut ic = c.sliders.reinforcement * c.ic as f32;
        let ese = c.ese;
        let ministers = c.ministers.clone();
        let cost_factor = p.reinforce_cost * ministers.reinforcement;
        let time_factor = p.reinforce_time / p.repair_modifier * ministers.reinforcement;
        let new_exp = (self.policies.factor("MODIFIER_MP_EXPERIENCE", &c.policy) - 1.0) * 100.0;

        let mut queue: Vec<(f64, usize, usize)> = Vec::new();
        for (i, u) in self.units.iter().enumerate() {
            if u.controller() != tag {
                continue;
            }
            for j in 0..u.unit.divisions.len() {
                if self.can_reinforce(ctx, i, j) {
                    queue.push((self.reinforce_priority(ctx, i, j), i, j));
                }
            }
        }
        // Highest first; equal priorities keep their order.
        queue.sort_by(|a, b| b.0.total_cmp(&a.0));

        for (_, i, j) in queue {
            let d = &self.units[i].unit.divisions[j];
            let Some(model) = ctx.units.division_model(&d.kind, d.model) else {
                continue;
            };
            // The cabinet's time and cost factors for the division type.
            let unit = ministers.unit(&d.kind);
            let cost = (model.get("cost") as f32
                * unit[crate::ministers::COST]
                * cost_factor
                * model.get("reinforce_cost") as f32)
                .max(0.001);
            let time = (model.get("buildtime") as f32
                * unit[crate::ministers::TIME]
                * time_factor
                * model.get("reinforce_time") as f32)
                .max(1.0);
            let mp_full = p.reinforce_manpower * (model.get("manpower") as f32).max(0.001);
            let max = d.max_strength.unwrap_or(100.0) as f32;
            let str = d.strength.unwrap_or(100.0) as f32;
            let f = ((max - str) / max).max(0.0);
            let mp_day = mp_full / time;
            let manpower = self.countries[tag].stock.manpower as f32;
            let r = (manpower / mp_day).min(1.0);
            let distance = self.supply_distance_factor(ctx, i);
            let mut g = ese * r * distance * max * 0.01;
            let ic_full = f * cost;
            if ic > 0.0 {
                g = g.min(ic / ic_full).max(0.0);
                let mut ds = g * 100.0 / time;
                if str + ds >= max {
                    ds = max - str;
                    g = ds * time * 0.01;
                }
                let used = g * ic_full;
                let mp_used = g * mp_day;
                let c = self.countries.get_mut(tag).unwrap();
                let s = &mut c.stock;
                s.metal = (s.metal - f64::from(used)).max(0.0);
                s.energy = (s.energy - f64::from(2.0 * used)).max(0.0);
                s.rare_materials = (s.rare_materials - f64::from(0.5 * used)).max(0.0);
                s.manpower = (s.manpower - f64::from(mp_used)).max(0.0);
                let d = &mut self.units[i].unit.divisions[j];
                d.strength = Some(f64::from((str + ds).min(max)));
                let w = ds / (str + ds);
                let exp = d.experience.unwrap_or(0.0) as f32;
                d.experience = Some(f64::from(((1.0 - w) * exp + w * new_exp).max(0.0)));
            }
            ic -= g * ic_full;
        }
    }
}

impl System for Reinforce {
    fn name(&self) -> &str {
        "reinforce"
    }

    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        if world.date.hour != REINFORCE_HOUR {
            return;
        }
        let tags: Vec<String> = world.countries.keys().cloned().collect();
        for tag in tags {
            world.reinforce(&self.ctx, &tag);
        }
    }
}
