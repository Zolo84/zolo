//! Daily attrition of land divisions (`docs/spec/weather.md` §4.3, `0x4E92E0`
//! applied by `0x51CB40` at 01:00): deserts, jungles and winter weather wear
//! down troops where infrastructure is poor, and so does being out of supply.
//!
//! The country's own supply efficiency is 1.0 here (stockpiles and transport
//! capacity are not modelled), so poor infrastructure alone drives it.

use crate::movement::{terrain, MoveContext};
use crate::{Rng, System, World};
use dh_data::leaders::traits;
use dh_data::{Branch, Climate, Weather};
use dh_map::AdjKind;
use std::sync::Arc;

/// Hour of the day when attrition is applied.
pub const ATTRITION_HOUR: u8 = 1;

/// Extra desert attrition by climate; deserts of other climates have none.
fn desert_climate(c: Climate) -> Option<f32> {
    match c {
        Climate::Mediterranean => Some(0.12),
        Climate::Subtropical => Some(0.25),
        Climate::Tropical => Some(0.5),
        _ => None,
    }
}

/// Winter attrition by weather.
fn winter(w: Weather) -> f32 {
    match w {
        Weather::Frozen => 0.1,
        Weather::Snowing => 0.2,
        Weather::Blizzard => 1.0,
        _ => 0.0,
    }
}

pub struct Attrition {
    ctx: Arc<MoveContext>,
}

impl Attrition {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        Attrition { ctx }
    }
}

impl World {
    /// Attrition rate `T` of stack `unit` before the per-division fuel
    /// factor and the country's modifier.
    pub fn attrition_rate(&self, ctx: &MoveContext, unit: usize) -> f32 {
        let u = &self.units[unit];
        let Some(p) = u.unit.location else {
            return 0.0;
        };
        let Some(info) = ctx.province(p) else {
            return 0.0;
        };
        let Some(owner) = self.owner.get(&p) else {
            return 0.0;
        };
        if info.is_water() {
            return 0.0;
        }
        let tag = u.controller();
        let weather = self.weather_at(p);
        let bare = 1.0 - info.infra;
        let a = match info.terrain {
            terrain::DESERT => desert_climate(info.climate).map_or(0.0, |c| bare + c),
            terrain::JUNGLE => {
                0.2 * bare
                    + match weather {
                        Weather::Raining => 0.02,
                        Weather::Storm => 0.1,
                        _ => 0.0,
                    }
            }
            _ => 0.0,
        };
        let leader = self.stack_leader(unit);
        let within = self.within_command_limit(unit);
        let mut w = winter(weather) * bare;
        if within && leader.has_trait(traits::WINTER_SPECIALIST) {
            w *= 0.25;
        }
        let mut t = a + w;
        if within && leader.has_trait(traits::LOGISTICS_WIZARD) {
            t *= 0.5;
        }
        // At home only near the front, and then a tenth.
        let friendly =
            owner == tag || self.diplomacy.allied(tag, owner) || self.has_access(tag, owner);
        if friendly {
            let front = ctx.regular_neighbours(p).any(|l| {
                l.kind != AdjKind::Impassable
                    && ctx.province(l.to).is_some_and(|i| !i.is_water())
                    && self
                        .controller
                        .get(&l.to)
                        .is_some_and(|c| self.at_war(tag, c))
                    && self.can_enter(tag, Some(p), l.to)
            });
            t = if front { t * 0.1 } else { 0.0 };
        }
        t
    }
}

impl System for Attrition {
    fn name(&self) -> &str {
        "attrition"
    }

    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        if world.date.hour != ATTRITION_HOUR {
            return;
        }
        let p = world.params.clone();
        for i in 0..world.units.len() {
            let u = &world.units[i];
            if u.unit.branch != Branch::Land {
                continue;
            }
            let Some(loc) = u.unit.location else {
                continue;
            };
            let t = world.attrition_rate(&self.ctx, i);
            let supplied = world.in_supply(&self.ctx, u.controller(), loc);
            let losses: Vec<f32> = u
                .unit
                .divisions
                .iter()
                .map(|d| {
                    let str = d.strength.unwrap_or(100.0) as f32;
                    if str <= p.attrition_floor {
                        return 0.0;
                    }
                    let fuel = self
                        .ctx
                        .units
                        .division_stats(d)
                        .is_some_and(|s| s.get("fuelconsumption") != 0.0);
                    let t = if fuel { t } else { t * 0.5 };
                    let r = (t / p.country_attrition * p.attrition).max(0.0);
                    let mut loss = r * str / 100.0;
                    if !supplied {
                        loss += p.out_of_supply_attrition;
                    }
                    loss.min(str - p.attrition_floor)
                })
                .collect();
            for (d, loss) in world.units[i].unit.divisions.iter_mut().zip(losses) {
                if loss > 0.0 {
                    let str = d.strength.unwrap_or(100.0) - f64::from(loss);
                    d.strength = Some(str);
                }
            }
        }
    }
}
