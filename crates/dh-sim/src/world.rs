//! Mutable game state.

use dh_data::{GameDate, Scenario, Unit};
use std::collections::{BTreeMap, BTreeSet, VecDeque};

#[derive(Debug, Clone)]
pub struct Country {
    pub tag: String,
    pub capital: Option<u32>,
}

#[derive(Debug, Clone)]
pub struct World {
    pub date: GameDate,
    pub countries: BTreeMap<String, Country>,
    /// Province id -> owner tag.
    pub owner: BTreeMap<u32, String>,
    /// Province id -> controller tag (differs from owner under occupation).
    pub controller: BTreeMap<u32, String>,
    pub flags: BTreeSet<String>,
    pub units: Vec<UnitState>,
    /// Hours simulated since the scenario start.
    pub hour: u64,
}

/// A unit on the map and the country it belongs to.
#[derive(Debug, Clone)]
pub struct UnitState {
    pub owner: String,
    pub unit: Unit,
    /// Remaining provinces to march through, next first.
    pub route: VecDeque<u32>,
    /// Absolute simulation hours when the current hop started and ends.
    pub depart: u64,
    pub arrive: u64,
}

impl UnitState {
    /// Country giving the unit orders (expeditionary forces differ from the owner).
    pub fn controller(&self) -> &str {
        self.unit.control.as_deref().unwrap_or(&self.owner)
    }
}

/// Start date used when a scenario header has none.
pub const DEFAULT_START: GameDate = GameDate {
    year: 1936,
    month: 1,
    day: 1,
    hour: 0,
};

impl World {
    pub fn empty(date: GameDate) -> Self {
        World {
            date,
            countries: BTreeMap::new(),
            owner: BTreeMap::new(),
            controller: BTreeMap::new(),
            flags: BTreeSet::new(),
            units: Vec::new(),
            hour: 0,
        }
    }

    /// Builds the initial state; returns human-readable conflicts alongside.
    pub fn from_scenario(scenario: &Scenario) -> (Self, Vec<String>) {
        let mut world = World::empty(scenario.info.start.unwrap_or(DEFAULT_START));
        let mut conflicts = Vec::new();
        for c in &scenario.countries {
            world.countries.insert(
                c.tag.clone(),
                Country {
                    tag: c.tag.clone(),
                    capital: c.capital,
                },
            );
            for &p in &c.owned {
                if let Some(prev) = world.owner.insert(p, c.tag.clone()) {
                    conflicts.push(format!("province {p} owned by both {prev} and {}", c.tag));
                }
            }
            for &p in &c.controlled {
                world.controller.insert(p, c.tag.clone());
            }
            world.units.extend(c.units.iter().map(|u| UnitState {
                owner: c.tag.clone(),
                unit: u.clone(),
                route: VecDeque::new(),
                depart: 0,
                arrive: 0,
            }));
        }
        // Provinces without an explicit controller are controlled by their owner.
        for (p, tag) in &world.owner {
            world.controller.entry(*p).or_insert_with(|| tag.clone());
        }
        (world, conflicts)
    }

    pub fn units_of<'a>(&'a self, tag: &'a str) -> impl Iterator<Item = &'a UnitState> + 'a {
        self.units.iter().filter(move |u| u.owner == tag)
    }

    pub fn provinces_owned_by<'a>(&'a self, tag: &'a str) -> impl Iterator<Item = u32> + 'a {
        self.owner
            .iter()
            .filter(move |(_, t)| t.as_str() == tag)
            .map(|(p, _)| *p)
    }
}
