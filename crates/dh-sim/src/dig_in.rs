//! Dig-in of land stacks (`docs/spec/land-combat.md` §4.4). A stack digs in
//! once a day at 01:00 while it stands still, out of every battle, and its
//! owner is at war and allowed to (`allow_dig_in`); the first hour of
//! actual movement loses it all. Battles neither raise nor reset it, so a
//! defender keeps what it had. A level above the maximum (from the
//! scenario) holds until the next daily growth cuts it down.
//!
//! Stacks on ships or transport planes are not modelled, so embarking does
//! not reset the level yet.

use crate::{Rng, System, World};
use dh_data::Branch;

/// Hour of the day the level grows (`0x51D510`).
const GROWTH_HOUR: u8 = 1;

/// Runs the hourly dig-in rules. Add it before [`crate::march::March`], so
/// that a stack arriving within its first hour of movement still loses its
/// level.
pub struct DigIn;

impl World {
    /// Whether a stack may dig in now (`0x5092C0`): standing still, in no
    /// battle, and its owner allowed and at war with someone.
    fn can_dig_in(&self, unit: usize) -> bool {
        let u = &self.units[unit];
        !u.is_moving(self.hour)
            && self.countries.get(&u.owner).is_some_and(|c| c.allow_dig_in)
            && self.diplomacy.in_war(&u.owner)
            && !self.in_battle(unit)
    }

    /// Moves a division to another stack in the same province (`0x47A1F0`).
    /// The receiving stack's level becomes the average over its divisions,
    /// the newcomer bringing the level of the stack it leaves.
    pub fn transfer_division(
        &mut self,
        from: usize,
        division: usize,
        to: usize,
    ) -> Result<(), String> {
        let (source, target) = (&self.units[from], &self.units[to]);
        if from == to || source.unit.location != target.unit.location {
            return Err("the stacks are not in the same province".into());
        }
        if division >= source.unit.divisions.len() {
            return Err(format!("no division {division}"));
        }
        let n = target.unit.divisions.len() as f32;
        let level = target.dig_in + (source.dig_in - target.dig_in) / (n + 1.0);
        let d = self.units[from].unit.divisions.remove(division);
        let target = &mut self.units[to];
        target.unit.divisions.push(d);
        target.dig_in = level;
        Ok(())
    }
}

impl System for DigIn {
    fn name(&self) -> &str {
        "dig-in"
    }

    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        let growth = world.date.hour == GROWTH_HOUR;
        for i in 0..world.units.len() {
            let u = &world.units[i];
            if u.unit.branch != Branch::Land || u.unit.location.is_none() {
                continue;
            }
            if u.is_moving(world.hour) {
                world.units[i].dig_in = 0.0;
            } else if growth && world.can_dig_in(i) {
                // Growth and maximum are the command country's (§4.4); every
                // country has the shipped values so far.
                let u = &mut world.units[i];
                u.dig_in = (u.dig_in + world.params.dig_in_daily).min(world.params.dig_in_max);
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::{Battle, Country, Simulation, UnitState};
    use dh_data::{GameDate, Unit};

    /// Germany (allowed to dig in) and France at war; Italy allowed but at
    /// peace, Spain at war but not allowed.
    fn world() -> World {
        let mut world = World::empty(GameDate::new(1936, 6, 1));
        for (tag, allowed) in [("GER", true), ("FRA", true), ("ITA", true), ("SPA", false)] {
            world.countries.insert(
                tag.into(),
                Country {
                    allow_dig_in: allowed,
                    ..Country::new(tag)
                },
            );
        }
        world.declare_war("GER", "FRA");
        world.declare_war("SPA", "FRA");
        world
    }

    fn stack(world: &mut World, owner: &str, location: u32, divisions: usize) -> usize {
        let doc = dh_text::script::parse_str(&format!(
            "landunit = {{ location = {location} {} }}",
            "division = { type = infantry } ".repeat(divisions)
        ));
        world
            .units
            .push(UnitState::new(owner, Unit::all_in(&doc.root).remove(0)));
        world.units.len() - 1
    }

    #[test]
    fn grows_once_a_day_while_standing_at_war() {
        let mut world = world();
        let ger = stack(&mut world, "GER", 1, 1);
        let ita = stack(&mut world, "ITA", 2, 1);
        let spa = stack(&mut world, "SPA", 3, 1);
        let old = stack(&mut world, "FRA", 4, 1);
        world.units[old].dig_in = 75.0; // as Finland's in the 1944 scenario
        let mut sim = Simulation::new(world, 1);
        sim.add_system(DigIn);
        let level = |sim: &Simulation, u: usize| sim.world.units[u].dig_in;

        // 00:00 → 01:00: the first growth, which also cuts 75 down to 20.
        sim.tick();
        assert_eq!(sim.date().hour, 1);
        assert_eq!(
            [ger, ita, spa, old].map(|u| level(&sim, u)),
            [1.0, 0.0, 0.0, 20.0]
        );
        sim.run_hours(23);
        assert_eq!(level(&sim, ger), 1.0);
        sim.tick();
        assert_eq!(level(&sim, ger), 2.0);
        sim.run_days(30);
        assert_eq!(level(&sim, ger), 20.0);
        assert_eq!(level(&sim, old), 20.0);
    }

    #[test]
    fn movement_resets_and_battle_freezes() {
        let mut world = world();
        let walker = stack(&mut world, "GER", 1, 1);
        let attacker = stack(&mut world, "GER", 2, 1);
        let defender = stack(&mut world, "FRA", 3, 1);
        for u in [walker, attacker, defender] {
            world.units[u].dig_in = 10.0;
        }
        // An order to leave at hour 5; until then the stack is not moving.
        world.units[walker].route.push_back(2);
        world.units[walker].depart = 5;
        world.units[walker].arrive = 30;
        // The attacker is under way into the defended province 3.
        world.units[attacker].route.push_back(3);
        world.battles.push(Battle::new(3, vec![attacker], 0));
        let mut sim = Simulation::new(world, 1);
        sim.add_system(DigIn);

        sim.tick(); // 01:00
        let level =
            |sim: &Simulation| [walker, attacker, defender].map(|u| sim.world.units[u].dig_in);
        assert_eq!(level(&sim), [11.0, 0.0, 10.0]);
        sim.run_hours(4); // hour 5: the walker sets off
        assert_eq!(level(&sim), [0.0, 0.0, 10.0]);
        // Once the battle is over the defender digs in again.
        sim.world.battles.clear();
        sim.run_days(1);
        assert_eq!(level(&sim), [0.0, 0.0, 11.0]);
    }

    #[test]
    fn transferred_divisions_average_the_level() {
        let mut world = world();
        let a = stack(&mut world, "GER", 1, 1);
        let b = stack(&mut world, "GER", 1, 3);
        let far = stack(&mut world, "GER", 2, 1);
        world.units[a].dig_in = 20.0;
        world.units[b].dig_in = 4.0;
        world.transfer_division(a, 0, b).unwrap();
        assert_eq!(world.units[b].dig_in, 8.0); // (3 · 4 + 20) / 4
        assert_eq!(world.units[b].unit.divisions.len(), 4);
        assert!(world.units[a].unit.divisions.is_empty());
        assert_eq!(world.units[a].dig_in, 20.0);
        assert!(world.transfer_division(b, 0, far).is_err());
        assert!(world.transfer_division(a, 0, b).is_err());
    }
}
