//! Mutable game state.

use dh_data::tech::Command;
use dh_data::{Diplomacy, GameDate, Scenario, Stockpiles, Techs, Unit, Vfs, Weather};
use std::collections::{BTreeMap, BTreeSet, VecDeque};

/// How a country splits its IC (`consumer`, `production`, `supplies`,
/// `reinforcement`, `upgrading`): shares of the whole.
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct IcSliders {
    pub consumer: f32,
    pub production: f32,
    pub supplies: f32,
    pub reinforcement: f32,
    pub upgrade: f32,
}

impl Default for IcSliders {
    /// The constructor's split (`0x445AF3`).
    fn default() -> Self {
        IcSliders {
            consumer: 0.4,
            production: 0.2,
            supplies: 0.4,
            reinforcement: 0.0,
            upgrade: 0.0,
        }
    }
}

#[derive(Debug, Clone)]
pub struct Country {
    pub tag: String,
    pub capital: Option<u32>,
    /// Multiplier of its leaders' skill: 1 plus the `leader_skill` of the
    /// active ministers, within 0.01..=10 (1.0 while ministers are not modelled).
    pub leader_skill: f32,
    /// Dissent, 0..=100 (land-combat.md §4.6): the scenario's `dissent`.
    pub dissent: f32,
    /// Technology applications it knows (`C+0x3608`: the scenario's
    /// `techapps`, then what it researches).
    pub techs: BTreeSet<i64>,
    /// Blueprints, deactivated technologies, research projects and slots
    /// ([`crate::research`]).
    pub research: crate::research::ResearchState,
    /// Its stacks may dig in (§4.4): set by the `allow_dig_in` command.
    pub allow_dig_in: bool,
    /// Chance of surprise in land battles (§3.7): `country[32]` (1.0),
    /// raised by `surprise` commands with `which = land`.
    pub land_surprise: f32,
    /// National stockpiles (supplies, oil, manpower…).
    pub stock: Stockpiles,
    /// What the scenario's `free = { … }` adds every day (supplies, oil,
    /// energy, metal, rare materials, money, manpower; its `ic` is
    /// [`Country::free_ic`]).
    pub free: Stockpiles,
    /// Output factors of provinces' oil, metal, energy and rare materials,
    /// of money from consumer goods and of supplies (`country[24..=29]` at
    /// the start; `industrial_modifier which = supplies` raises the last).
    pub oil_modifier: f32,
    pub metal_modifier: f32,
    pub energy_modifier: f32,
    pub rare_modifier: f32,
    pub money_modifier: f32,
    pub supply_modifier: f32,
    /// Manpower growth factor (`country[5]` at the start, raised by
    /// `relative_manpower` commands; at least 0.01).
    pub relative_manpower: f32,
    /// Energy-to-oil conversion efficiency (`C+0x37E2`: `country[22]` at the
    /// start, set by `industrial_multiplier which = energy_to_oil`); the
    /// conversion itself is not modelled yet.
    pub energy_to_oil: f32,
    /// Policy slider positions 1..=10.
    pub policy: dh_data::policy::Sliders,
    /// National (core) provinces.
    pub national: BTreeSet<u32>,
    pub peacetime_ic_mod: f32,
    pub wartime_ic_mod: f32,
    pub industrial_modifier: f32,
    /// Scenario `extra_tc` and `free = { ic }`.
    pub extra_tc: f32,
    pub free_ic: f32,
    /// Effective IC, transport capacity and supply load (logistics.md),
    /// worked out daily by [`crate::Logistics`].
    pub ic: i64,
    /// The IC of the provinces it controls and its `free` IC before any
    /// modifier, rounded (`C+0x3954`, [`World::base_ic`]): it sets the
    /// research slots. Worked out with the IC.
    pub base_ic: i64,
    pub tc: i64,
    pub load: i64,
    /// National supply efficiency: TC over load, at most 1.
    pub ese: f32,
    pub sliders: IcSliders,
    /// What `tc_mod` / `tc_occupied_mod` commands added to the transport
    /// capacity modifiers (`country[6]`, `country[7]` at the start), as
    /// fractions.
    pub tc_bonus: f32,
    pub occupied_tc_bonus: f32,
    /// Minister IDs in the ten cabinet posts.
    pub cabinet: [Option<i64>; 10],
    /// What the cabinet adds up to ([`World::load_ministers`]).
    pub ministers: crate::MinisterModifiers,
    /// The production queue, in order (`C+0x3B7E`; [`crate::production`]).
    pub production: Vec<crate::production::QueueItem>,
    /// Units the queue finished, not deployed yet (`C+0x451C`).
    pub undeployed: Vec<crate::production::Undeployed>,
    /// Build time factors of province buildings by index (`C+0xE32C`,
    /// `country[36]` at the start) and of transports and escorts
    /// (`C+0xE358`, `country[37]`); `building_prod_mod` / `convoy_prod_mod`
    /// commands lower them.
    pub building_time: [f32; 11],
    pub convoy_time: [f32; 2],
}

impl Country {
    /// A country as the game creates it, before scenario values and
    /// technologies.
    pub fn new(tag: &str) -> Self {
        let p = crate::Params::default();
        Country {
            tag: tag.to_owned(),
            capital: None,
            leader_skill: 1.0,
            dissent: 0.0,
            techs: BTreeSet::new(),
            research: crate::research::ResearchState::new(p.research_modifier),
            allow_dig_in: false,
            land_surprise: p.land_surprise,
            stock: Stockpiles::default(),
            free: Stockpiles::default(),
            oil_modifier: p.oil_modifier,
            metal_modifier: p.metal_modifier,
            energy_modifier: p.energy_modifier,
            rare_modifier: p.rare_modifier,
            money_modifier: p.money_modifier,
            supply_modifier: p.supply_modifier,
            relative_manpower: p.relative_manpower,
            energy_to_oil: p.energy_to_oil,
            policy: [5; 7],
            national: BTreeSet::new(),
            peacetime_ic_mod: 1.0,
            wartime_ic_mod: 1.0,
            industrial_modifier: 1.0,
            extra_tc: 0.0,
            free_ic: 0.0,
            ic: 0,
            base_ic: 0,
            tc: 0,
            load: 0,
            ese: 1.0,
            sliders: IcSliders::default(),
            tc_bonus: 0.0,
            occupied_tc_bonus: 0.0,
            cabinet: [None; 10],
            ministers: crate::MinisterModifiers::default(),
            production: Vec::new(),
            undeployed: Vec::new(),
            building_time: [p.building_time; 11],
            convoy_time: [p.convoy_time; 2],
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
    /// Constants from `db/misc.txt`; set them with [`World::set_params`].
    pub params: crate::Params,
    /// Weather by province id (weather.md §1); provinces past the end are clear.
    pub weather: Vec<Weather>,
    pub weather_fronts: Vec<crate::weather::WeatherFront>,
    /// The scenario's `static = yes`: weather never changes.
    pub weather_static: bool,
    /// `db/policy_effects.csv`, once loaded with [`World::load_policies`].
    pub policies: dh_data::PolicyEffects,
    /// Province IC the scenario sets, over `Province.csv`.
    pub province_ic: BTreeMap<u32, f32>,
    /// The scenario's `rules`.
    pub rules: dh_data::Rules,
    /// `db/building_costs.txt` and `db/convoy_costs.txt` (the shipped
    /// values until [`World::load_production_costs`]).
    pub production_costs: dh_data::ProductionCosts,
    /// What the production queue has built in each province, by building
    /// index (`dh_data::production::BUILDINGS`): the levels it added.
    /// Province buildings are not modelled otherwise.
    pub buildings_built: BTreeMap<u32, [f32; 11]>,
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
    /// The last friendly province the stack stood in (`+0x142`), from which
    /// ORG regain measures the supply distance (organisation.md §2).
    pub last_friendly: Option<u32>,
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
            last_friendly: None,
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
            params: crate::Params::default(),
            weather: Vec::new(),
            weather_fronts: Vec::new(),
            weather_static: false,
            policies: dh_data::PolicyEffects::default(),
            province_ic: BTreeMap::new(),
            rules: dh_data::Rules::default(),
            production_costs: dh_data::ProductionCosts::default(),
            buildings_built: BTreeMap::new(),
        }
    }

    /// Current weather of a province.
    pub fn weather_at(&self, province: u32) -> Weather {
        self.weather
            .get(province as usize)
            .copied()
            .unwrap_or_default()
    }

    pub fn set_weather(&mut self, province: u32, weather: Weather) {
        let i = province as usize;
        if i >= self.weather.len() {
            self.weather.resize(i + 1, Weather::Clear);
        }
        self.weather[i] = weather;
    }

    /// Replaces the `misc.txt` constants (e.g. with a mod's). Countries keep
    /// what technologies added to their starting values.
    pub fn set_params(&mut self, params: crate::Params) {
        let old = &self.params;
        let surprise = params.land_surprise - old.land_surprise;
        let modifiers = [
            params.oil_modifier - old.oil_modifier,
            params.metal_modifier - old.metal_modifier,
            params.energy_modifier - old.energy_modifier,
            params.rare_modifier - old.rare_modifier,
            params.money_modifier - old.money_modifier,
            params.supply_modifier - old.supply_modifier,
            params.relative_manpower - old.relative_manpower,
            params.energy_to_oil - old.energy_to_oil,
        ];
        let building_time = params.building_time - old.building_time;
        let convoy_time = params.convoy_time - old.convoy_time;
        let research = params.research_modifier - old.research_modifier;
        for c in self.countries.values_mut() {
            c.land_surprise += surprise;
            c.research.modifier = (c.research.modifier + research).max(0.01);
            for x in &mut c.building_time {
                *x += building_time;
            }
            for x in &mut c.convoy_time {
                *x += convoy_time;
            }
            for (x, d) in [
                &mut c.oil_modifier,
                &mut c.metal_modifier,
                &mut c.energy_modifier,
                &mut c.rare_modifier,
                &mut c.money_modifier,
                &mut c.supply_modifier,
                &mut c.relative_manpower,
                &mut c.energy_to_oil,
            ]
            .into_iter()
            .zip(modifiers)
            {
                *x += d;
            }
        }
        self.params = params;
    }

    /// Loads the ministers and their personalities and works out each
    /// country's cabinet modifiers, as the game does when it starts
    /// (`0x451390`); returns load warnings. A post whose minister or
    /// personality is unknown adds nothing.
    pub fn load_ministers(&mut self, vfs: &Vfs, units: &dh_data::UnitDb) -> Vec<String> {
        let mut warnings = Vec::new();
        let ministers = dh_data::Ministers::load(vfs, &mut warnings);
        let personalities = dh_data::Personalities::load(vfs).unwrap_or_default();
        for c in self.countries.values_mut() {
            let commands = c
                .cabinet
                .iter()
                .flatten()
                .filter_map(|id| ministers.by_id.get(id))
                .filter_map(|m| personalities.get(&m.personality))
                .flat_map(|p| &p.commands);
            c.ministers = crate::MinisterModifiers::from_commands(commands, units);
            c.leader_skill = c.ministers.leader_skill;
        }
        warnings.iter().map(ToString::to_string).collect()
    }

    /// Loads `db/building_costs.txt` and `db/convoy_costs.txt`; returns
    /// load warnings.
    pub fn load_production_costs(&mut self, vfs: &Vfs) -> Vec<String> {
        let mut warnings = Vec::new();
        self.production_costs = dh_data::ProductionCosts::load(vfs, &mut warnings);
        warnings.iter().map(ToString::to_string).collect()
    }

    /// Loads `db/policy_effects.csv`.
    pub fn load_policies(&mut self, vfs: &Vfs) -> std::io::Result<()> {
        self.policies = dh_data::PolicyEffects::load(vfs)?;
        Ok(())
    }

    /// Loads the constants of `db/misc.txt` as [`World::set_params`] does.
    pub fn load_misc(&mut self, vfs: &Vfs) -> std::io::Result<()> {
        let misc = dh_data::Misc::load(vfs)?;
        self.set_params(crate::Params::from_misc(&misc));
        Ok(())
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
                    stock: c.stockpiles,
                    cabinet: dh_data::ministers::cabinet_from(&c.raw),
                    policy: dh_data::policy::sliders_from(c.raw.get_block("policy")),
                    national: c.national.iter().copied().collect(),
                    peacetime_ic_mod: c.raw.get_f64("peacetime_ic_mod").unwrap_or(1.0) as f32,
                    wartime_ic_mod: c.raw.get_f64("wartime_ic_mod").unwrap_or(1.0) as f32,
                    industrial_modifier: c.raw.get_f64("industrial_modifier").unwrap_or(1.0) as f32,
                    // Read like `atoi`.
                    extra_tc: c.raw.get_f64("extra_tc").map_or(0.0, f64::trunc) as f32,
                    sliders: {
                        let d = IcSliders::default();
                        let v = |k: &str, d: f32| c.raw.get_f64(k).map_or(d, |x| x as f32);
                        IcSliders {
                            consumer: v("consumer", d.consumer),
                            production: v("production", d.production),
                            // `supplies` is the stockpile key.
                            supplies: d.supplies,
                            reinforcement: v("reinforcement", d.reinforcement),
                            upgrade: v("upgrading", d.upgrade),
                        }
                    },
                    free_ic: c
                        .raw
                        .get_block("free")
                        .and_then(|f| f.get_f64("ic"))
                        .unwrap_or(0.0) as f32,
                    // Its `transport` and `escort` are not modelled.
                    free: c
                        .raw
                        .get_block("free")
                        .map(Stockpiles::from_block)
                        .unwrap_or_default(),
                    ..Country::new(&c.tag)
                },
            );
            // Keys of the country loader over the `misc.txt` starting values
            // (assumed to replace them).
            let country = world.countries.get_mut(&c.tag).unwrap();
            if let Some(x) = c.raw.get_f64("supply_modifier") {
                country.supply_modifier = x as f32;
            }
            if let Some(x) = c.raw.get_f64("relative_manpower") {
                country.relative_manpower = x as f32;
            }
            // `0x549BE8`, `0x54B6C7`: lists only, no effects.
            let ids = |key: &str| -> BTreeSet<i64> {
                c.raw
                    .get_block(key)
                    .map(|b| b.ints().collect())
                    .unwrap_or_default()
            };
            country.research.blueprints = ids("blueprints");
            country.research.deactivated = ids("deactivate");
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
        world.rules = scenario.rules;
        world.weather_static = scenario.weather.is_static;
        world.weather_fronts = crate::weather::fronts_from(&scenario.weather);
        for p in &scenario.provinces {
            if let Some(w) = p.weather {
                world.set_weather(p.id, w);
            }
            if let Some(ic) = p.ic {
                world.province_ic.insert(p.id, ic as f32);
            }
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

    /// Applies the effects of the technologies each country starts with,
    /// as the loader of a new scenario does for `techapps` (`0x549DA0` →
    /// `0x7261E0`, research.md §5; a saved game skips it): an ID that names
    /// no application is dropped ("unknown tech"), the others' commands go
    /// through [`World::apply_tech_commands`]. `0x7261E0` handles 182 of
    /// the 299 command types (the modifiers, `deactivate` / `activate`, and
    /// some others such as `relation` or `change_policy`) and skips one-off
    /// ones (`money`, `supplies`, `dissent`, pools, `sleep*` / `wake*`,
    /// `setflag`, `war`, `steal_tech` / `gain_tech`, division builders…);
    /// the vanilla technologies use only the first kind. Call it once.
    pub fn add_techs(&mut self, techs: &Techs) {
        let tags: Vec<String> = self.countries.keys().cloned().collect();
        for tag in tags {
            let country = self.countries.get_mut(&tag).unwrap();
            country.techs.retain(|id| techs.app(*id).is_some());
            let known: Vec<i64> = country.techs.iter().copied().collect();
            for id in known {
                self.apply_tech_commands(&tag, techs.commands(id));
            }
        }
    }

    /// Applies the commands of a technology's `effects` to `tag`: at the
    /// scenario start (`0x7261E0`) and when a project completes
    /// (`0x713490`, the event command executor, which runs every type).
    /// Modelled so far: `allow_dig_in`, `surprise` for land battles,
    /// `tc_mod`, `tc_occupied_mod`, `relative_manpower` and
    /// `industrial_modifier` with `which = supplies` or `total` (each
    /// `+= value · 0.01`), `research_mod` (`+= value · 0.01f`, at least
    /// 0.01), `building_prod_mod` / `convoy_prod_mod` (`−= value · 0.01`,
    /// at least 0.1), `industrial_multiplier which = energy_to_oil` (set to
    /// `value`), and `deactivate` / `activate` (the technology `which`
    /// joins or leaves the deactivated list).
    pub fn apply_tech_commands(&mut self, tag: &str, commands: &[Command]) {
        let Some(country) = self.countries.get_mut(tag) else {
            return;
        };
        for command in commands {
            let which = command.which.as_deref().unwrap_or("");
            match command.kind.as_str() {
                "allow_dig_in" => country.allow_dig_in = true,
                "surprise" if which.eq_ignore_ascii_case("land") => {
                    country.land_surprise += (command.value.unwrap_or(0.0) * 0.01) as f32;
                }
                // Event 0x193 without `which`: added (logistics.md §2).
                "tc_mod" => country.tc_bonus += (command.value.unwrap_or(0.0) * 0.01) as f32,
                "tc_occupied_mod" => {
                    country.occupied_tc_bonus += (command.value.unwrap_or(0.0) * 0.01) as f32;
                }
                // `0x490CA0`: at least 0.01.
                "relative_manpower" => {
                    country.relative_manpower = (country.relative_manpower
                        + (command.value.unwrap_or(0.0) * 0.01) as f32)
                        .max(0.01);
                }
                // `0x490420` (`0x490780`): added as `v · 0.01f`, at least
                // 0.01 (research.md §1.4).
                "research_mod" => {
                    let v = f64::from(command.value.unwrap_or(0.0) as f32) * f64::from(0.01f32);
                    let m = &mut country.research.modifier;
                    *m = ((f64::from(*m) + v) as f32).max(0.01);
                }
                // `0x490BB0` / `0x490C00`: build time of a building
                // type or convoy kind (the `which` index assumed to
                // follow the scenario's names).
                "building_prod_mod" | "convoy_prod_mod" => {
                    let v = f64::from(command.value.unwrap_or(0.0) as f32) * f64::from(0.01f32);
                    let x = if command.kind == "building_prod_mod" {
                        country
                            .building_time
                            .get_mut(dh_data::production::building_index(which))
                    } else {
                        country
                            .convoy_time
                            .get_mut(dh_data::production::convoy_index(which))
                    };
                    if let Some(x) = x {
                        *x = ((f64::from(*x) - v) as f32).max(0.1);
                    }
                }
                // `0x48D990`: `total` raises the industrial modifier and
                // the four resource modifiers (not money); the single
                // resources' `which` names are not known.
                "industrial_modifier" if which.eq_ignore_ascii_case("supplies") => {
                    country.supply_modifier += (command.value.unwrap_or(0.0) * 0.01) as f32;
                }
                // `0x48D950`: assigned, without · 0.01.
                "industrial_multiplier" if which.eq_ignore_ascii_case("energy_to_oil") => {
                    country.energy_to_oil = command.value.unwrap_or(0.0) as f32;
                }
                "industrial_modifier" if which.eq_ignore_ascii_case("total") => {
                    let v = (command.value.unwrap_or(0.0) * 0.01) as f32;
                    for x in [
                        &mut country.industrial_modifier,
                        &mut country.oil_modifier,
                        &mut country.metal_modifier,
                        &mut country.energy_modifier,
                        &mut country.rare_modifier,
                    ] {
                        *x += v;
                    }
                }
                // DEACTIVATE_TECH (`0x48DD20`, added if missing) and
                // ACTIVATE_TECH (`0x490D40`, removed); projects go on.
                "deactivate" => {
                    if let Ok(id) = which.trim().parse() {
                        country.research.deactivated.insert(id);
                    }
                }
                "activate" => {
                    if let Ok(id) = which.trim().parse::<i64>() {
                        country.research.deactivated.remove(&id);
                    }
                }
                _ => {}
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
