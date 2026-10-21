//! Land battles: when they start (`docs/spec/land-movement.md` §8).
//!
//! Every hour a land stack that has a route attacks the first province on it
//! as soon as that province holds land units of a country at war with it,
//! unless it is already fighting for that province. Battles are not resolved
//! yet; while one lasts the attackers wait at the border (assumed: the spec
//! has not located the arrival code, §11).

use crate::{Rng, System, World};
use dh_data::Branch;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Battle {
    pub province: u32,
    /// Indices into `World::units`.
    pub attackers: Vec<usize>,
    /// Simulation hour the battle started.
    pub started: u64,
}

impl World {
    /// Land units in `province` belonging to a country at war with `tag`.
    pub fn enemy_land_units<'a>(
        &'a self,
        tag: &'a str,
        province: u32,
    ) -> impl Iterator<Item = usize> + 'a {
        self.units.iter().enumerate().filter_map(move |(i, u)| {
            (u.unit.branch == Branch::Land
                && u.unit.location == Some(province)
                && self.at_war(tag, u.controller()))
            .then_some(i)
        })
    }

    pub fn battle_at(&self, province: u32) -> Option<&Battle> {
        self.battles.iter().find(|b| b.province == province)
    }
}

/// Starts battles for stacks whose next step is held by the enemy, and ends
/// battles whose province no longer holds defenders or attackers.
pub struct Engage;

impl System for Engage {
    fn name(&self) -> &str {
        "engage"
    }

    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        for i in 0..world.units.len() {
            let unit = &world.units[i];
            if unit.unit.branch != Branch::Land {
                continue;
            }
            let Some(&next) = unit.route.front() else {
                continue;
            };
            let tag = unit.controller().to_owned();
            if world.enemy_land_units(&tag, next).next().is_none() {
                continue;
            }
            let hour = world.hour;
            match world.battles.iter_mut().find(|b| b.province == next) {
                Some(b) if b.attackers.contains(&i) => {}
                Some(b) => b.attackers.push(i),
                None => world.battles.push(Battle {
                    province: next,
                    attackers: vec![i],
                    started: hour,
                }),
            }
        }
        // A battle ends when its province is empty of anyone the attackers fight,
        // or no attacker is still heading there.
        let units = &world.units;
        let still_on = |b: &Battle| {
            b.attackers.iter().any(|&i| {
                let tag = units[i].controller();
                units[i].route.front() == Some(&b.province)
                    && world.enemy_land_units(tag, b.province).next().is_some()
            })
        };
        let keep: Vec<bool> = world.battles.iter().map(still_on).collect();
        let mut keep = keep.into_iter();
        world.battles.retain(|_| keep.next().unwrap());
    }
}
