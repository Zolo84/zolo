//! Supplies and fuel a land division uses each hour (`docs/spec/supply.md`
//! §3): the daily need (`0x4FD570`, `0x4FD380`) is drawn a 24th at a time
//! from the national stockpile (`0x44CCB0`, `0x44D190`), and a failed draw
//! marks the division short of supplies or fuel for the hour.
//!
//! Only the national stockpile is modelled: a stack draws from it while it
//! is in supply and fails otherwise (provincial depots, convoys and the
//! redeployment pool are not modelled), and no stack is carried by a fleet.

use crate::movement::{terrain, MoveContext};
use crate::World;
use dh_data::leaders::traits;
use dh_data::{Climate, Division};

/// The hour's share of a daily need: `need · f32(1/24)` (`0x7E5DCC`).
const HOUR: f32 = 1.0 / 24.0;

/// Extra supplies a division needs in hard terrain (`0x4FD62A`): marsh and
/// jungle, and deserts by climate.
fn terrain_supply(t: u8, c: Climate) -> Option<f32> {
    match t {
        terrain::MARSH | terrain::JUNGLE => Some(1.25),
        terrain::DESERT => match c {
            Climate::Mediterranean => Some(1.25),
            Climate::Subtropical => Some(1.5),
            Climate::Tropical => Some(2.0),
            _ => None,
        },
        _ => None,
    }
}

/// The stack-wide inputs of a land division's needs.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct NeedConditions {
    pub in_battle: bool,
    /// Has a route (`+0x22E`), whether or not it has left yet.
    pub moving: bool,
    /// Logistics Wizard leading it within the command limit.
    pub logistics: bool,
    pub terrain: u8,
    pub climate: Climate,
    /// The country's `supply_consumption` minister modifier.
    pub consumption: f32,
}

impl World {
    pub fn need_conditions(&self, ctx: &MoveContext, unit: usize) -> NeedConditions {
        let u = &self.units[unit];
        let info = u.unit.location.and_then(|p| ctx.province(p));
        NeedConditions {
            in_battle: self.in_battle(unit),
            moving: !u.route.is_empty(),
            logistics: self.within_command_limit(unit)
                && self.stack_leader(unit).has_trait(traits::LOGISTICS_WIZARD),
            terrain: info.map_or(terrain::PLAINS, |i| i.terrain),
            climate: info.map_or(Climate::None, |i| i.climate),
            consumption: self
                .countries
                .get(&u.owner)
                .map_or(1.0, |c| c.ministers.supply_consumption),
        }
    }

    /// Fuel a land division needs a day (`0x4FD380`).
    pub fn fuel_need(&self, ctx: &MoveContext, cond: &NeedConditions, d: &Division) -> f32 {
        let p = &self.params;
        let use_ = ctx
            .units
            .division_stats(d)
            .map_or(0.0, |s| s.get("fuelconsumption") as f32);
        let mut f = use_ * strength_share(d);
        if cond.in_battle {
            f *= p.fuel_combat;
        } else if !cond.moving {
            f *= p.fuel_idle;
        }
        if cond.logistics {
            f *= 0.75;
        }
        f
    }

    /// Supplies a land division needs a day (`0x4FD570`), times its
    /// country's `supply_consumption` minister modifier.
    pub fn supply_need(&self, ctx: &MoveContext, cond: &NeedConditions, d: &Division) -> f32 {
        let p = &self.params;
        let stats = ctx.units.division_stats(d);
        let use_ = stats
            .as_ref()
            .map_or(0.0, |s| s.get("supplyconsumption") as f32);
        let mut s = use_ * cond.consumption * strength_share(d);
        if cond.in_battle {
            s *= p.supply_combat;
        } else if !cond.moving {
            s *= p.supply_idle;
        }
        if let Some(k) = terrain_supply(cond.terrain, cond.climate) {
            s *= k;
            // Motorised divisions suffer more there.
            if stats
                .as_ref()
                .is_some_and(|st| st.get("fuelconsumption") > 0.0)
            {
                s *= 1.25;
            }
        }
        if cond.logistics {
            s *= 0.75;
        }
        s
    }

    /// Draws an hour's supplies (a 24th of `need`) for country `tag`
    /// (`0x44CCB0`): fails when the stack is cut off or the stockpile is
    /// short, and a short stockpile is still drained to 0.
    pub fn draw_supplies(&mut self, tag: &str, need: f32, in_supply: bool) -> bool {
        if need <= 0.0 {
            return true;
        }
        let h = need * HOUR;
        if !in_supply {
            return false;
        }
        let Some(c) = self.countries.get_mut(tag) else {
            return false;
        };
        let ok = c.stock.supplies >= f64::from(h);
        c.stock.supplies = (c.stock.supplies - f64::from(h)).max(0.0);
        ok
    }

    /// Draws an hour's fuel (oil) for country `tag` (`0x44D190`): a short
    /// stockpile is left as it is. Unlike supplies, a cut-off stack fails
    /// even with nothing to draw (the source is looked up first).
    pub fn draw_fuel(&mut self, tag: &str, need: f32, in_supply: bool) -> bool {
        if !in_supply {
            return false;
        }
        let h = need.max(0.0) * HOUR;
        let Some(c) = self.countries.get_mut(tag) else {
            return false;
        };
        let ok = c.stock.oil >= f64::from(h);
        if ok && h > 0.0 {
            c.stock.oil -= f64::from(h);
        }
        ok
    }
}

impl World {
    /// The hour's draws for every division of land stack `unit`, marking
    /// the divisions short of fuel or supplies. Rebels draw nothing.
    pub fn consume(&mut self, ctx: &MoveContext, unit: usize, in_supply: bool) {
        let u = &self.units[unit];
        let tag = u.owner.clone();
        if u.controller() == crate::org::REBELS {
            for d in &mut self.units[unit].unit.divisions {
                (d.no_fuel, d.no_supplies) = (false, false);
            }
            return;
        }
        let cond = self.need_conditions(ctx, unit);
        for j in 0..self.units[unit].unit.divisions.len() {
            let d = &self.units[unit].unit.divisions[j];
            let (fuel, supplies) = (
                self.fuel_need(ctx, &cond, d),
                self.supply_need(ctx, &cond, d),
            );
            // The old ORG rules draw fuel in combat even with no need
            // (`0x504283`), so a cut-off stack there goes short of it.
            let try_fuel = fuel > 0.0 || cond.in_battle && !self.params.new_org_logic;
            let no_fuel = try_fuel && !self.draw_fuel(&tag, fuel, in_supply);
            let no_supplies = supplies > 0.0 && !self.draw_supplies(&tag, supplies, in_supply);
            let d = &mut self.units[unit].unit.divisions[j];
            (d.no_fuel, d.no_supplies) = (no_fuel, no_supplies);
        }
    }
}

/// `+0x10C · maxSTR · 0.01 · STR / maxSTR`: the model's use scaled by the
/// division's strength.
fn strength_share(d: &Division) -> f32 {
    let max = d.max_strength.unwrap_or(100.0) as f32;
    let str = d.strength.unwrap_or(100.0) as f32;
    if max <= 0.0 {
        return 0.0;
    }
    (max * 0.01) * (str / max)
}
