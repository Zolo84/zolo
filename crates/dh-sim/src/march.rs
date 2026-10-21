//! Marching orders and the hourly system that carries them out.
//!
//! A stack stores the hour it left its province and the hour it reaches the
//! next one on its route (spec §5.2); the hop time is fixed when the hop starts.

use crate::movement::MoveContext;
use crate::{Rng, System, World};
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

    /// Orders unit `index` to march to `target`. Without diplomacy a stack may
    /// only pass through provinces its country controls or nobody controls.
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
            .land_route(from, target, |p| {
                world.controller.get(&p).is_none_or(|c| *c == tag)
            })
            .ok_or_else(|| format!("no land route from {from} to {target}"))?;
        let unit = &mut world.units[index];
        unit.route = path.provinces[1..].iter().copied().collect();
        unit.depart = world.hour;
        unit.arrive = world.hour + Self::next_hop_hours(ctx, unit).unwrap_or(1) as u64;
        Ok(path.provinces)
    }

    fn next_hop_hours(ctx: &MoveContext, unit: &crate::UnitState) -> Option<u32> {
        let from = unit.unit.location?;
        let next = *unit.route.front()?;
        let link = ctx.adjacency.link(from, next)?;
        ctx.hop_hours(&unit.unit.divisions, from, link)
    }
}

impl System for March {
    fn name(&self) -> &str {
        "march"
    }

    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        let hour = world.hour;
        for (i, unit) in world.units.iter_mut().enumerate() {
            while !unit.route.is_empty() && hour >= unit.arrive {
                let next = unit.route.pop_front().unwrap();
                unit.unit.location = Some(next);
                self.arrivals.push(Arrival {
                    unit: i,
                    province: next,
                    hour: unit.arrive,
                });
                if unit.route.is_empty() {
                    break;
                }
                unit.depart = unit.arrive;
                unit.arrive =
                    unit.depart + Self::next_hop_hours(&self.ctx, unit).unwrap_or(1) as u64;
            }
        }
    }
}
