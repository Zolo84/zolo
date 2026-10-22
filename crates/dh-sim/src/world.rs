//! Mutable game state.

use dh_data::{Diplomacy, GameDate, Scenario, Techs, Unit, Vfs};
use std::collections::{BTreeMap, BTreeSet, VecDeque};

#[derive(Debug, Clone)]
pub struct Country {
    pub tag: String,
    pub capital: Option<u32>,
    /// Multiplier of its leaders' skill: 1 plus the `leader_skill` of the
    /// active ministers, within 0.01..=10 (1.0 while ministers are not modelled).
    pub leader_skill: f32,
    /// Dissent, 0..=100 (land-combat.md §4.6): the scenario's `dissent`.
    pub dissent: f32,
    /// Technology applications it has (the scenario's `techapps`).
    pub techs: BTreeSet<i64>,
    /// Its stacks may dig in (§4.4): set by the `allow_dig_in` command.
    pub allow_dig_in: bool,
    /// Chance of surprise in land battles (§3.7): `country[32]` (1.0),
    /// raised by `surprise` commands with `which = land`.
    pub land_surprise: f32,
}

impl Country {
    /// A country as the game creates it, before scenario values and
    /// technologies.
    pub fn new(tag: &str) -> Self {
        Country {
            tag: tag.to_owned(),
            capital: None,
            leader_skill: 1.0,
            dissent: 0.0,
            techs: BTreeSet::new(),
            allow_dig_in: false,
            land_surprise: crate::combat::params::LAND_SURPRISE,
        }
    }
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
    pub diplomacy: Diplomacy,
    /// Military access as `(holder, territory)` pairs: stacks of the holder
    /// may enter the provinces the other country controls. A scenario's
    /// `relation = { tag = B access = yes }` in A's block gives `(A, B)`
    /// (land-movement.md §1.4). Query it with [`World::has_access`].
    pub access: BTreeSet<(String, String)>,
    pub battles: Vec<crate::Battle>,
    /// Leaders by ID, once loaded with [`World::load_leaders`].
    pub leaders: BTreeMap<i64, crate::LeaderState>,
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
    /// Dig-in level of a land stack (land-combat.md §4.4): the scenario's
    /// `dig_in`, unclamped; 0 for other units.
    pub dig_in: f32,
}

impl UnitState {
    /// A unit as a scenario places it, standing still.
    pub fn new(owner: &str, unit: Unit) -> Self {
        let dig_in = unit.raw.get_f64("dig_in").unwrap_or(0.0) as f32;
        UnitState {
            owner: owner.to_owned(),
            unit,
            route: VecDeque::new(),
            depart: 0,
            arrive: 0,
            dig_in,
        }
    }

    /// Whether the stack is under way (`land-combat.md` §4.4): it has a route
    /// and its departure hour has come.
    pub fn is_moving(&self, hour: u64) -> bool {
        !self.route.is_empty() && hour >= self.depart
    }

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
            diplomacy: Diplomacy::default(),
            access: BTreeSet::new(),
            battles: Vec::new(),
            leaders: BTreeMap::new(),
        }
    }

    /// Builds the initial state; returns human-readable conflicts alongside.
    pub fn from_scenario(scenario: &Scenario) -> (Self, Vec<String>) {
        let mut world = World::empty(scenario.info.start.unwrap_or(DEFAULT_START));
        world.diplomacy = scenario.diplomacy.clone();
        let mut conflicts = Vec::new();
        for c in &scenario.countries {
            world.countries.insert(
                c.tag.clone(),
                Country {
                    capital: c.capital,
                    // Every writer keeps it within 0..=100 (assumed for the scenario too).
                    dissent: c.raw.get_f64("dissent").unwrap_or(0.0).clamp(0.0, 100.0) as f32,
                    techs: c
                        .raw
                        .get_block("techapps")
                        .map(|b| b.ints().collect())
                        .unwrap_or_default(),
                    // The key a saved game writes (§4.4).
                    allow_dig_in: c.raw.get_bool("allow_dig_in").unwrap_or(false),
                    ..Country::new(&c.tag)
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
            for r in c.relations.iter().filter(|r| r.access) {
                world.access.insert((c.tag.clone(), r.tag.clone()));
            }
            world
                .units
                .extend(c.units.iter().map(|u| UnitState::new(&c.tag, u.clone())));
        }
        // Provinces without an explicit controller are controlled by their owner.
        for (p, tag) in &world.owner {
            world.controller.entry(*p).or_insert_with(|| tag.clone());
        }
        (world, conflicts)
    }

    /// Loads the technology files and applies what the countries start with
    /// (see [`World::add_techs`]); returns load warnings.
    pub fn load_techs(&mut self, vfs: &Vfs) -> Vec<String> {
        let mut warnings = Vec::new();
        let techs = Techs::load(vfs, &mut warnings);
        self.add_techs(&techs);
        warnings.iter().map(ToString::to_string).collect()
    }

    /// Applies the effects of the technologies each country has, as if it
    /// had just researched them (assumed for the scenario start,
    /// land-combat.md §7 question 11). Only the commands of combat so far:
    /// `allow_dig_in`, and `surprise` for land battles (`+= value · 0.01`).
    /// Call it once.
    pub fn add_techs(&mut self, techs: &Techs) {
        for country in self.countries.values_mut() {
            for &id in &country.techs {
                for command in techs.commands(id) {
                    let which = command.which.as_deref().unwrap_or("");
                    match command.kind.as_str() {
                        "allow_dig_in" => country.allow_dig_in = true,
                        "surprise" if which.eq_ignore_ascii_case("land") => {
                            country.land_surprise += (command.value.unwrap_or(0.0) * 0.01) as f32;
                        }
                        _ => {}
                    }
                }
            }
        }
    }

    /// Starts a war between two countries (each side alone).
    pub fn declare_war(&mut self, attacker: &str, defender: &str) {
        if !self.at_war(attacker, defender) {
            self.diplomacy.wars.push(dh_data::War {
                id: None,
                start: Some(self.date),
                end: None,
                attackers: vec![attacker.to_owned()],
                defenders: vec![defender.to_owned()],
            });
        }
    }

    pub fn at_war(&self, a: &str, b: &str) -> bool {
        self.diplomacy.at_war(a, b)
    }

    /// Whether `us` has military access to the territory of `territory`
    /// (`0x585E80` on `us`'s relation record about `territory`).
    pub fn has_access(&self, us: &str, territory: &str) -> bool {
        self.access.contains(&(us.to_owned(), territory.to_owned()))
    }

    /// Whether a stack of country `us`, standing in `from`, may enter province
    /// `p` (`docs/spec/land-movement.md` §7.2): own, allied or ownerless
    /// territory, countries we have military access to, countries at war
    /// with us, and provinces nobody controls; a neutral country's territory
    /// only when the stack is already inside it.
    pub fn can_enter(&self, us: &str, from: Option<u32>, p: u32) -> bool {
        let Some(controller) = self.controller.get(&p) else {
            return true;
        };
        !self.owner.contains_key(&p)
            || self.diplomacy.allied(us, controller)
            || self.has_access(us, controller)
            || self.at_war(us, controller)
            || from.and_then(|f| self.controller.get(&f)) == Some(controller)
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

#[cfg(test)]
mod tests {
    use super::*;

    /// Iraq holds province 1, Britain 2; they are at peace.
    #[test]
    fn military_access_lets_its_holder_in() {
        let mut world = World::empty(GameDate::new(1936, 1, 1));
        for (p, tag) in [(1, "IRQ"), (2, "ENG")] {
            world.owner.insert(p, tag.into());
            world.controller.insert(p, tag.into());
        }
        assert!(!world.can_enter("ENG", Some(2), 1));
        // `relation = { tag = IRQ access = yes }` in Britain's block: British
        // troops may enter Iraq, not the other way round.
        world.access.insert(("ENG".into(), "IRQ".into()));
        assert!(world.has_access("ENG", "IRQ") && !world.has_access("IRQ", "ENG"));
        assert!(world.can_enter("ENG", Some(2), 1));
        assert!(!world.can_enter("IRQ", Some(1), 2));
    }
}
