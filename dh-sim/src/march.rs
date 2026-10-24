//! Marching orders and the hourly system that carries them out.
//!
//! A stack stores the hour it left its province and the hour it reaches the
//! next one on its route (spec §5.2); the hop time is fixed when the hop starts.

use crate::combat::TERRAIN_TRAITS;
use crate::movement::{MoveConditions, MoveContext};
use crate::{Rng, System, World};
use dh_data::leaders::traits;
use std::sync::Arc;

/// An arrival, for logging.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Arrival {
    pub unit: usize,
    pub province: u32,
    pub hour: u64,
}

pub struct March {
    ctx: Arc<MoveContext>,
    pub arrivals: Vec<Arrival>,
}

impl March {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        March {
            ctx,
            arrivals: Vec::new(),
        }
    }

    /// Orders unit `index` to march to `target` along provinces it may enter.
    pub fn order(
        ctx: &MoveContext,
        world: &mut World,
        index: usize,
        target: u32,
    ) -> Result<Vec<u32>, String> {
        let unit = world.units.get(index).ok_or("no such unit")?;
        let from = unit.unit.location.ok_or("unit has no location")?;
        let tag = unit.controller().to_owned();
        let path = ctx
            .land_route(from, target, |p| world.can_enter(&tag, Some(from), p))
            .ok_or_else(|| format!("no land route from {from} to {target}"))?;
        let unit = &mut world.units[index];
        unit.route = path.provinces[1..].iter().copied().collect();
        unit.depart = world.hour;
        let hours = Self::next_hop_hours(ctx, world, index).unwrap_or(1);
        let unit = &mut world.units[index];
        unit.arrive = world.hour + hours as u64;
        Ok(path.provinces)
    }

    fn next_hop_hours(ctx: &MoveContext, world: &World, index: usize) -> Option<u32> {
        let unit = &world.units[index];
        let from = unit.unit.location?;
        let next = *unit.route.front()?;
        let link = ctx.adjacency.link(from, next)?;
        let hostile = world
            .controller
            .get(&next)
            .is_some_and(|c| world.at_war(unit.controller(), c));
        let cond = world.move_conditions(ctx, index, from, next);
        ctx.hop_hours(&unit.unit.divisions, from, link, hostile, &cond)
    }
}

impl World {
    /// Conditions of a hop by stack `unit` from `from` into `dest`: supply
    /// where it stands, the weather it marches into and its leader's traits
    /// (land-movement.md §3.5).
    pub fn move_conditions(
        &self,
        ctx: &MoveContext,
        unit: usize,
        from: u32,
        dest: u32,
    ) -> MoveConditions {
        let p = &self.params;
        let weather = self.weather_at(dest);
        let traits = self.stack_leader(unit).traits;
        let mut leader = 1.0;
        if self.within_command_limit(unit) {
            let terrain = ctx.province(dest).map_or(0, |i| i.terrain);
            if let Some(&(own, similar)) = TERRAIN_TRAITS.get(terrain as usize) {
                if traits & own != 0 {
                    leader *= 1.0 + p.leader_move;
                } else if traits & similar != 0 {
                    leader *= 1.0 + p.leader_move_similar;
                }
            }
            if traits & traits::WINTER_SPECIALIST != 0 && weather.is_cold() {
                leader *= 1.0 + p.leader_move;
            }
        }
        MoveConditions {
            supply: self.supply_speed_factor(ctx, self.units[unit].controller(), from),
            weather,
            leader,
            fuel_speed: (p.fuel_speed >= 0.0).then_some(p.fuel_speed),
            no_fuel_travel: p.no_fuel_travel,
        }
    }
}

impl System for March {
    fn name(&self) -> &str {
        "march"
    }

    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        let hour = world.hour;
        for i in 0..world.units.len() {
            while !world.units[i].route.is_empty() && hour >= world.units[i].arrive {
                // A stack cannot enter a province while enemy land units hold it.
                let next = world.units[i].route[0];
                let tag = world.units[i].controller().to_owned();
                if world.enemy_land_units(&tag, next).next().is_some() {
                    break;
                }
                let unit = &mut world.units[i];
                let next = unit.route.pop_front().unwrap();
                unit.unit.location = Some(next);
                // The hour it actually got in: later than planned if it was held up.
                let (arrived, tag) = (hour, unit.controller().to_owned());
                self.arrivals.push(Arrival {
                    unit: i,
                    province: next,
                    hour: arrived,
                });
                // Entering an enemy province takes control of it (assumed; the
                // spec has not located that code, land-movement.md §11).
                if world
                    .controller
                    .get(&next)
                    .is_some_and(|c| world.at_war(&tag, c))
                {
                    world.controller.insert(next, tag);
                }
                if world.units[i].route.is_empty() {
                    break;
                }
                let hours = Self::next_hop_hours(&self.ctx, world, i).unwrap_or(1);
                let unit = &mut world.units[i];
                unit.depart = arrived;
                unit.arrive = arrived + hours as u64;
            }
        }
    }
}
