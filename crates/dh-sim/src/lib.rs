//! Deterministic simulation core.
//!
//! The original engine advances the world in one-hour ticks; daily and monthly
//! logic (production, events, politics) hangs off day boundaries. Game rules are
//! added as [`System`]s as they are reverse engineered, so each one can be
//! tested in isolation against recorded behaviour of the original game.

pub mod march;
pub mod movement;
pub mod rng;
pub mod world;

pub use rng::Rng;
pub use world::{Country, UnitState, World};

use dh_data::GameDate;

/// A piece of game logic driven by the clock.
pub trait System {
    fn name(&self) -> &str;
    fn on_hour(&mut self, _world: &mut World, _rng: &mut Rng) {}
    fn on_day(&mut self, _world: &mut World, _rng: &mut Rng) {}
}

pub struct Simulation {
    pub world: World,
    pub rng: Rng,
    systems: Vec<Box<dyn System>>,
}

impl Simulation {
    pub fn new(world: World, seed: u64) -> Self {
        Simulation {
            world,
            rng: Rng::new(seed),
            systems: Vec::new(),
        }
    }

    pub fn add_system(&mut self, system: impl System + 'static) {
        self.systems.push(Box::new(system));
    }

    pub fn date(&self) -> GameDate {
        self.world.date
    }

    /// Advances one hour.
    pub fn tick(&mut self) {
        self.world.date = self.world.date.add_hours(1);
        self.world.hour += 1;
        for s in &mut self.systems {
            s.on_hour(&mut self.world, &mut self.rng);
        }
        if self.world.date.hour == 0 {
            for s in &mut self.systems {
                s.on_day(&mut self.world, &mut self.rng);
            }
        }
    }

    pub fn run_hours(&mut self, hours: u32) {
        for _ in 0..hours {
            self.tick();
        }
    }

    pub fn run_days(&mut self, days: u32) {
        self.run_hours(days * 24);
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    struct DayCounter(u32);

    impl System for DayCounter {
        fn name(&self) -> &str {
            "day-counter"
        }
        fn on_day(&mut self, world: &mut World, _rng: &mut Rng) {
            self.0 += 1;
            world.flags.insert(format!("day{}", self.0));
        }
    }

    #[test]
    fn days_fire_on_midnight() {
        let mut sim = Simulation::new(World::empty(GameDate::new(1936, 1, 1)), 1);
        sim.add_system(DayCounter(0));
        sim.run_hours(23);
        assert!(sim.world.flags.is_empty());
        sim.run_days(366);
        assert_eq!(sim.date().to_string(), "1937-01-01 23:00");
        assert!(sim.world.flags.contains("day366"));
        assert!(!sim.world.flags.contains("day367"));
    }
}
