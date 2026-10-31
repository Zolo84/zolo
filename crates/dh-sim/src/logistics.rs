//! A country's IC, transport capacity and supply load, and from them its
//! supply efficiency (`docs/spec/logistics.md`): worked out at the start and
//! then daily (`0x49A740`, `0x49AD70`).
//!
//! Technologies' `tc_mod` / `tc_occupied_mod` raise the TC modifiers.
//! Ministers' production and `tc_mod` apply.
//! Not modelled yet (their terms are 0 or 1): revolt risk and
//! partisans, the undeployed pool, queued buildings, offensive supply,
//! puppets, difficulty (0 at Normal) and the dissent penalty, which only
//! human players pay.

use crate::movement::MoveContext;
use crate::{Rng, System, World};
use dh_data::{Branch, Division};
use std::sync::Arc;

/// `fistp`: the FPU's default rounding, half to even.
fn fistp(x: f32) -> i64 {
    f64::from(x).round_ties_even() as i64
}

pub struct Logistics {
    ctx: Arc<MoveContext>,
    started: bool,
}

impl Logistics {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        Logistics {
            ctx,
            started: false,
        }
    }
}

impl World {
    fn province_ic_size(&self, ctx: &MoveContext, p: u32) -> f32 {
        self.province_ic
            .get(&p)
            .copied()
            .unwrap_or_else(|| ctx.province(p).map_or(0.0, |i| i.ic))
    }

    /// Base IC of `tag` (`B0` of `0x49A740`, logistics.md B4): the IC of
    /// the provinces it controls (a fifth outside its national ones) and
    /// its `free` IC (with the `production` rule on), before any modifier,
    /// at least 0. Rounded, it is `C+0x3954`, which sets the research
    /// slots ([`World::research_slots`]).
    pub fn base_ic(&self, ctx: &MoveContext, tag: &str) -> f32 {
        let p = &self.params;
        let Some(c) = self.countries.get(tag) else {
            return 0.0;
        };
        let mut b = if self.rules.production {
            c.free_ic
        } else {
            0.0
        };
        for (&prov, ctrl) in &self.controller {
            if ctrl != tag {
                continue;
            }
            let mut f = self.province_ic_size(ctx, prov);
            if f > 0.0 && !c.national.contains(&prov) {
                let m = if self.owner.get(&prov).map(String::as_str) == Some(tag) {
                    p.non_national_ic
                } else {
                    p.non_owned_ic
                } + c.ministers.non_national_production;
                f = if m < 0.0 { 0.0 } else { f * m };
            }
            b += f;
        }
        b.max(0.0)
    }

    /// Effective IC of `tag` (`0x49A740`): its [`World::base_ic`] times its
    /// IC modifiers, capped by what its energy, metal and rare materials
    /// can feed.
    pub fn effective_ic(&self, ctx: &MoveContext, tag: &str) -> i64 {
        self.ic_from_base(tag, self.base_ic(ctx, tag))
    }

    fn ic_from_base(&self, tag: &str, b: f32) -> i64 {
        let Some(c) = self.countries.get(tag) else {
            return 0;
        };
        let mode = if self.diplomacy.in_war(tag) {
            c.wartime_ic_mod
        } else {
            c.peacetime_ic_mod
        };
        let policy = self.policies.factor("MODIFIER_TOTAL_IC", &c.policy);
        let t = b
            + (c.ministers.production - 1.0) * b
            + (c.industrial_modifier - 1.0) * b
            + (policy - 1.0) * b
            + (mode - 1.0) * b;
        let ic = fistp(t);
        let s = &c.stock;
        let cap = (s.energy * 0.5)
            .min(s.rare_materials * 2.0)
            .min(s.metal)
            .max(0.0) as i64;
        ic.min(cap)
    }

    /// Daily supply need of a division for the load (`0x4FD380(0)` plus
    /// `0x4FD570(0)`): combat is ignored. Air and naval divisions count as
    /// at their base or in port when they stand on land.
    fn load_need(&self, ctx: &MoveContext, unit: usize, d: &Division) -> (f32, f32) {
        let p = &self.params;
        let u = &self.units[unit];
        let stats = ctx.units.division_stats(d);
        let get = |k: &str| stats.as_ref().map_or(0.0, |s| s.get(k) as f32);
        let moving = !u.route.is_empty();
        let docked = u
            .unit
            .location
            .is_some_and(|l| ctx.province(l).is_some_and(|i| !i.is_water()));
        match u.unit.branch {
            Branch::Land => {
                let mut cond = self.need_conditions(ctx, unit);
                cond.in_battle = false;
                (
                    self.fuel_need(ctx, &cond, d),
                    self.supply_need(ctx, &cond, d),
                )
            }
            Branch::Air => {
                let share = d.strength.unwrap_or(100.0) as f32 / 100.0;
                let at_base = !moving && docked;
                let fuel =
                    get("fuelconsumption") * share * if at_base { p.fuel_at_base } else { 1.0 };
                let supplies = get("supplyconsumption")
                    * share
                    * if at_base { p.air_supply_base } else { 1.0 };
                (fuel, supplies)
            }
            Branch::Naval => {
                let fuel = get("fuelconsumption")
                    * match (moving, docked) {
                        (false, true) => p.fuel_at_base,
                        (false, false) => p.naval_fuel_idle,
                        (true, _) => 1.0,
                    };
                let supplies = get("supplyconsumption")
                    * if !moving && docked {
                        p.naval_supply_port
                    } else {
                        1.0
                    };
                (fuel, supplies)
            }
        }
    }

    /// Transport capacity and supply load of `tag` (`0x49AD70`).
    pub fn transport(&self, ctx: &MoveContext, tag: &str) -> (i64, i64) {
        let p = &self.params;
        let Some(c) = self.countries.get(tag) else {
            return (0, 0);
        };
        let tc_mod = (p.tc_modifier + c.tc_bonus).max(0.01);
        let occupied_mod = (p.occupied_tc_modifier + c.occupied_tc_bonus).max(0.01);
        let tc = (c.extra_tc + (c.ic as f32 * p.ic_to_tc).max(10.0)) * c.ministers.tc * tc_mod;
        let mut divisions = 0.0f32;
        for (i, u) in self.units.iter().enumerate() {
            if u.owner != tag {
                continue;
            }
            let k = match u.unit.branch {
                Branch::Land => p.load_land,
                Branch::Air => p.load_air,
                Branch::Naval => p.load_naval,
            };
            for d in &u.unit.divisions {
                // Fuel and supplies are added one after the other, in f32.
                let (fuel, supplies) = self.load_need(ctx, i, d);
                divisions += fuel * k;
                divisions += supplies * k;
            }
        }
        let occupied = self
            .controller
            .iter()
            .filter(|(prov, ctrl)| {
                *ctrl == tag && self.owner.get(prov).map(String::as_str) != Some(tag)
            })
            .count() as f32
            * p.load_occupied
            / occupied_mod;
        (fistp(tc), fistp(divisions + occupied))
    }

    /// Recomputes every country's IC, TC, load and national supply
    /// efficiency (`0x44AAB0`: TC over load, at most 1).
    pub fn update_logistics(&mut self, ctx: &MoveContext) {
        let tags: Vec<String> = self.countries.keys().cloned().collect();
        for tag in &tags {
            let b = self.base_ic(ctx, tag);
            let ic = self.ic_from_base(tag, b);
            let base = fistp(b);
            let c = self.countries.get_mut(tag).unwrap();
            c.ic = ic;
            c.base_ic = base;
            let (tc, load) = self.transport(ctx, tag);
            let c = self.countries.get_mut(tag).unwrap();
            c.tc = tc;
            c.load = load;
            c.ese = (tc as f32 / (load as f32).max(0.001)).min(1.0);
        }
    }
}

impl System for Logistics {
    fn name(&self) -> &str {
        "logistics"
    }

    /// At the start, and at 00:00: the day message comes before the
    /// hour's (`0x42CF30`), so add this system before [`crate::Reinforce`]
    /// for reinforcement to see the day's values.
    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        if !self.started || world.date.hour == 0 {
            self.started = true;
            world.update_logistics(&self.ctx);
        }
    }
}
