//! The production queue (`docs/spec/production.md`; economy.md §8):
//! divisions, brigades, province buildings and convoys a country builds
//! with the IC on its production slider.
//!
//! Each item ([`QueueItem`]) builds a series of `size` units, one after the
//! other, at `ic` IC a day for `days` days per unit (§2). A day
//! ([`World::run_production`], from [`crate::Economy`] after consumer
//! goods, `0x4846C0`):
//! 1. buildings finished the day before go into their province (§3.1);
//! 2. items waiting for manpower take it from the pool when there is
//!    enough;
//! 3. the slider's IC, `min(f32(production · IC), resource limit)`, goes to
//!    the items in queue order, each up to its need; the resources of what
//!    is used are spent, the rest of the IC is lost (§3.1, `0x4F1010`);
//! 4. a finished division or brigade goes to the country's undeployed pool
//!    ([`Country::undeployed`]), convoys to its transports or escorts, and
//!    the next unit of the series waits for manpower and builds faster by
//!    the gearing bonus; an item whose series is done leaves the queue.
//!
//! Every hour ([`World::production_hour`], `0x483D70`; at 00:00 after the
//! day's production) the undeployed pool and the divisions being built
//! draw supplies, and the AI's items take a lower cost or time when the
//! modifiers allow it (§2.5). The game starts at 00:00, so 23 hours come
//! before the first day's production.
//!
//! A scenario's queue comes in with [`World::load_production`] (§4.2).
//!
//! Every country is the AI's, so these rules of human players are left
//! out: a brigade slower than its division lengthens the division's time
//! and brigades add to its IC (`0x466B00`, `0x466C20`); the hourly
//! recomputation follows the modifiers both ways (`unitcost`); the gearing
//! bonus is lost on a day the continuity accumulator stays below 0.999
//! (`0x4F1010`); the automatic slider and messages.
//!
//! Not modelled yet: technology deltas of models' cost, build time and
//! manpower (`C+0x4670`, `C+0x48A0`; 0 here); which models a country may
//! build, so the AI's daily model upgrade (`new_model`), `upgrade` series
//! and brigade model −1 ("newest") are not applied (model −1 reads as
//! model 0); the per-type strength cap (`C+0x40A2`, which a scenario block
//! may set; 100 here);
//! deploying the undeployed pool (its brigades draw no supplies here);
//! province buildings themselves: what the queue builds is recorded in
//! [`World::buildings_built`] (levels capped by [`building_limit`] counting
//! only those), not added to the provinces or their IC, and the levels'
//! growth towards the new maximum (`economy[53]`) is not modelled; whether a
//! building fits a province (`0x49FA30`: any province the country controls
//! does) and the AI's random choice of another province (the capital or the
//! first controlled province here); reserved resources in the resource
//! limit (0); adding to and reordering the queue (the AI's production
//! planner; [`World::add_production`] queues an order without the
//! infrastructure time penalty, which the next hourly recomputation would
//! remove anyway, and without merging buildings).
//!
//! The game computes on the x87 at double precision and rounds to single
//! precision where it stores; the code does the same.

use crate::ministers::{COST, TIME};
use crate::{MinisterModifiers, World};
use dh_data::production::{Build, Development, ProductionCosts, ESCORTS, IC_BUILDING, TRANSPORTS};
use dh_data::unitdb::Model;
use dh_data::{Branch, Brigade, Division, GameDate, Scenario, TypeId, UnitDb};

/// A division type's strength cap in percent (`C+0x40A2[type]`, 100 from
/// the country constructor; the scenario's strength-cap block, not read,
/// may change it): the new division's strength, and a factor of its
/// manpower.
pub const STRENGTH_PERCENT: f32 = 100.0;

/// Continuity a fully funded day adds (`0x7E8410`, a double), its cap, and
/// what the accumulator must exceed for a day to count (`0x7E840C`).
const CONTINUITY_PER_DAY: f64 = 1.2;
const CONTINUITY_MAX: f32 = 3.0;
const CONTINUITY_DAY: f32 = 0.999;

/// Minister rows of the division types convoys take their time and cost
/// from: destroyer (`0x19`) for escorts, transport (`0x1E`) otherwise.
const ESCORT_TYPE: &str = "destroyer";
const TRANSPORT_TYPE: &str = "transport";

/// `fistp`: the FPU's default rounding, half to even.
fn fistp(x: f32) -> i32 {
    f64::from(x).round_ties_even() as i32
}

/// What technologies add to a model's cost, build time and manpower
/// (`C+0x4670[type]` for divisions, `C+0x48A0[type]` for brigades). Not
/// modelled yet: always 0.
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct ModelDelta {
    pub cost: f32,
    pub buildtime: i32,
    pub manpower: f32,
}

/// A model's IC a day, build time and manpower (`+0x0C`, `+0x10`, `+0x14`);
/// an unknown model counts as all 0.
#[derive(Debug, Clone, Copy, Default, PartialEq)]
struct ModelCost {
    cost: f32,
    buildtime: i32,
    manpower: f32,
}

impl ModelCost {
    fn of(model: Option<&Model>) -> Self {
        model.map_or_else(Self::default, |m| ModelCost {
            cost: m.get("cost") as f32,
            buildtime: m.get("buildtime") as i32,
            manpower: m.get("manpower") as f32,
        })
    }
}

/// A unit the production queue finished, waiting in its country's
/// undeployed pool (`C+0x451C`, `0x478610`) to be put on the map (not
/// modelled).
#[derive(Debug, Clone)]
pub enum Undeployed {
    /// A division with its brigades.
    Division(Division),
    /// A brigade to attach to a division.
    Brigade { name: String, brigade: Brigade },
}

/// One item of a production queue (production.md §1): a series of
/// `size` units of what [`QueueItem::build`] says.
#[derive(Debug, Clone, PartialEq)]
pub struct QueueItem {
    pub name: String,
    pub id: Option<TypeId>,
    pub build: Build,
    /// Province of a building (`+0x16`); 0: none yet.
    pub location: u32,
    /// Days per unit, before the gearing bonus (`+0x24`).
    pub days: i32,
    /// IC a day (`+0x28`).
    pub ic: f32,
    /// Units in the series and units done (`+0x30`, `+0x34`).
    pub size: i32,
    pub done: i32,
    /// Finished buildings or convoys not placed yet (`+0x38`).
    pub state: i32,
    /// The current unit waits for its manpower (`+0x3C`).
    pub halted: bool,
    /// Continuity accumulator (`+0x3E`): `1.2 · funded` a day, at most 3,
    /// less 1 for each day that counts.
    pub continuity: f32,
    /// Share of the need funded on the last day (`+0x42`).
    pub funded: f32,
    /// Progress of the current unit, 0..=1 (`+0x46`).
    pub progress: f32,
    /// Manpower per unit (`+0x4A`).
    pub manpower: f32,
    /// Gearing bonus (`+0x4E`): the share by which a unit's time shrinks.
    pub gearing: f32,
    /// `upgrade`, `new_model`, `unitcost` (`+0x56..+0x58`); kept, not used.
    pub upgrade: bool,
    pub new_model: bool,
    pub unitcost: bool,
}

impl QueueItem {
    /// An order of `size` units as the AI sends it (`0x679600` →
    /// `0x477EF0`): days per unit, IC a day and manpower per unit from
    /// `rates`. [`World::add_production`] queues it.
    pub fn new(name: &str, build: Build, size: i32, rates: &Rates) -> Self {
        QueueItem {
            name: name.to_owned(),
            id: None,
            days: rates.days(&build, 1),
            ic: rates.ic(&build) as f32,
            manpower: rates.manpower(&build),
            build,
            location: 0,
            size: size.max(0),
            done: 0,
            state: 0,
            halted: false,
            continuity: 0.0,
            funded: 1.0,
            progress: 0.0,
            gearing: 0.0,
            upgrade: false,
            new_model: true,
            unitcost: true,
        }
    }

    /// An item of a scenario as the item parsers leave it (`0x4F3210` and
    /// its brigade, building and convoy twins, outside saved games, §4.2):
    /// days per unit worked out anew; progress `1 − R / days` when the
    /// `date` is `R < days` days away; manpower worked out when 0; IC worked
    /// out when not above 0; progress above 1.5 counts days. The manpower
    /// pool is not touched.
    pub fn from_scenario(d: &Development, rates: &Rates, now: GameDate) -> Self {
        let mut item = QueueItem {
            name: d.name.clone(),
            id: d.id,
            build: d.build.clone(),
            location: d.location,
            days: d.days_for_first as i32,
            ic: d.cost as f32,
            size: d.size as i32,
            done: d.done as i32,
            state: d.state as i32,
            halted: d.halted,
            continuity: d.progress as f32,
            funded: 1.0,
            progress: d.total_progress as f32,
            manpower: d.manpower as f32,
            gearing: d.gearing_bonus as f32,
            upgrade: d.upgrade,
            new_model: d.new_model,
            unitcost: d.unitcost,
        };
        item.days = rates.days(&item.build, 1);
        let r = d.date.days_from(now);
        if r < i64::from(item.days) {
            item.progress = (1.0 - r as f64 / f64::from(item.days)) as f32;
        }
        if item.manpower == 0.0 {
            item.manpower = rates.manpower(&item.build);
        }
        if item.ic <= 0.0 {
            item.ic = rates.ic(&item.build) as f32;
        }
        if f64::from(item.progress) > 1.5 {
            item.progress = (f64::from(item.progress) / f64::from(item.days)) as f32;
        }
        item
    }

    /// Every unit of the series is done (`0x4F2140`).
    pub fn series_done(&self) -> bool {
        self.done == self.size
    }

    fn unit_ready(&self) -> bool {
        self.progress >= 1.0 && self.done < self.size
    }

    /// A day's progress with `frac` of the need funded (`0x4F1010`), as for
    /// the AI (the gearing bonus is never lost). Returns whether the
    /// continuity accumulator let the day count.
    pub fn advance(&mut self, frac: f32) -> bool {
        self.funded = frac;
        let continuity = f64::from(frac) * CONTINUITY_PER_DAY + f64::from(self.continuity);
        self.continuity = continuity as f32;
        let days = f64::from(self.days) * (1.0 - f64::from(self.gearing));
        let progress = f64::from(frac) / days + f64::from(self.progress);
        self.progress = if progress > 1.0 { 1.0 } else { progress as f32 };
        if continuity > f64::from(CONTINUITY_MAX) {
            self.continuity = CONTINUITY_MAX;
        }
        if self.continuity > CONTINUITY_DAY {
            let x = f64::from(self.continuity) - 1.0;
            self.continuity = if x < 0.0 { 0.0 } else { x as f32 };
            true
        } else {
            false
        }
    }

    /// A unit is ready (`0x4F2620`): progress less 1, the next unit waits
    /// for manpower, and the gearing bonus grows by `increment` up to
    /// `cap` (not for IC buildings).
    pub fn finish_unit(&mut self, cap: f64, increment: f32) {
        let x = f64::from(self.progress) - 1.0;
        self.progress = if x < 0.0 { 0.0 } else { x as f32 };
        self.halted = true;
        if self.build != Build::Building(IC_BUILDING) {
            let g = f64::from(increment) + f64::from(self.gearing);
            self.gearing = if g > cap { cap as f32 } else { g as f32 };
        }
    }
}

/// What the production formulas of a country read (production.md §2.1):
/// models, building and convoy costs, the cabinet's tables, the policy's
/// `MODIFIER_PRODUCTION_TIME`, `MODIFIER_PRODUCTION_COST` and
/// `MODIFIER_GEARING_BONUS`, `economy[8]`, `economy[9]` and the country's
/// building and convoy time factors.
#[derive(Debug, Clone)]
pub struct Rates<'a> {
    pub units: &'a UnitDb,
    pub costs: &'a ProductionCosts,
    pub ministers: &'a MinisterModifiers,
    /// Policy factors (`P.+0x72`, `P.+0x76`, `P.+0x42`).
    pub time: f32,
    pub cost: f32,
    pub gearing: f32,
    /// `economy[8]`, `economy[9]`.
    pub max_gearing_bonus: f32,
    pub gearing_increment: f32,
    /// The country's `C+0xE32C`, `C+0xE358`.
    pub building_time: [f32; 11],
    pub convoy_time: [f32; 2],
}

impl Rates<'_> {
    fn division_model(&self, kind: &str, model: i64) -> ModelCost {
        ModelCost::of(self.units.division_model(kind, Some(model)))
    }

    fn brigade_model(&self, kind: &str, model: i64) -> ModelCost {
        ModelCost::of(self.units.brigade_model(kind, Some(model)))
    }

    /// Technology deltas of a division or brigade type: not modelled.
    fn delta(&self, _kind: &str) -> ModelDelta {
        ModelDelta::default()
    }

    /// The gearing bonus at most: `MODIFIER_GEARING_BONUS − economy[8]`.
    pub fn gearing_cap(&self) -> f64 {
        f64::from(self.gearing) - f64::from(self.max_gearing_bonus)
    }

    /// Days for `n` units from a first one's `t1` (the tail of `0x466B00`):
    /// the k-th next unit takes `1 − k · economy[9]` of `t1`, at least
    /// `1 − MODIFIER_GEARING_BONUS + economy[8]` (without `discount`, all
    /// of it); in all at least 1 day, rounded to the nearest.
    fn series(&self, t1: f64, n: i32, discount: bool) -> i32 {
        let t1f = t1 as f32;
        let min = (1.0 - f64::from(self.gearing) + f64::from(self.max_gearing_bonus)) as f32;
        let mut total = t1;
        for k in 1..n {
            let mut f = 1.0 - f64::from(k) * f64::from(self.gearing_increment);
            if f < f64::from(min) {
                f = f64::from(min);
            }
            if !discount {
                f = 1.0;
            }
            total += f * f64::from(t1f);
        }
        fistp(if total < 1.0 { 1.0 } else { total as f32 })
    }

    /// Days for `n` divisions (`0x466B00`, the AI's: brigades do not
    /// lengthen it): build time · the cabinet's TIME, then · the policy's.
    pub fn division_days(&self, kind: &str, model: i64, n: i32) -> i32 {
        let bt = self.division_model(kind, model).buildtime + self.delta(kind).buildtime;
        let t = (f64::from(bt) * f64::from(self.ministers.unit(kind)[TIME])) as f32;
        self.series(f64::from(self.time) * f64::from(t), n, true)
    }

    /// Days for `n` brigades (`0x466FA0`).
    pub fn brigade_days(&self, kind: &str, model: i64, n: i32) -> i32 {
        let bt = self.brigade_model(kind, model).buildtime + self.delta(kind).buildtime;
        let t1 =
            f64::from(bt) * f64::from(self.ministers.brigade(kind)[TIME]) * f64::from(self.time);
        self.series(t1, n, true)
    }

    /// Days for `n` buildings of index `b` (`0x467070`): IC buildings get
    /// no series discount.
    pub fn building_days(&self, b: usize, n: i32) -> i32 {
        let t1 = f64::from(self.building_time[b])
            * f64::from(self.costs.buildings[b].buildtime)
            * f64::from(self.time)
            * f64::from(self.ministers.buildings[b][TIME]);
        self.series(t1, n, b != IC_BUILDING)
    }

    /// Days for `n` convoy units (`0x467130`); an unknown kind reads the
    /// escorts' tables.
    pub fn convoy_days(&self, t: usize, n: i32) -> i32 {
        let k = t.min(ESCORTS);
        let row = if t == ESCORTS {
            ESCORT_TYPE
        } else {
            TRANSPORT_TYPE
        };
        let t1 = f64::from(self.convoy_time[k])
            * f64::from(self.costs.convoys[k].buildtime)
            * f64::from(self.time)
            * f64::from(self.ministers.unit(row)[TIME]);
        self.series(t1, n, true)
    }

    /// Days for `n` units of an item.
    pub fn days(&self, build: &Build, n: i32) -> i32 {
        match build {
            Build::Division { kind, model, .. } => self.division_days(kind, *model, n),
            Build::Brigade { kind, model } => self.brigade_days(kind, *model, n),
            Build::Building(b) => self.building_days(*b, n),
            Build::Convoy(t) => self.convoy_days(*t, n),
        }
    }

    /// A division's IC a day without brigades (`0x467200`): cost · the
    /// cabinet's COST · the policy's, at least 0.
    pub fn division_ic(&self, kind: &str, model: i64) -> f64 {
        let c = f64::from(self.delta(kind).cost) + f64::from(self.division_model(kind, model).cost);
        (c * f64::from(self.ministers.unit(kind)[COST]) * f64::from(self.cost)).max(0.0)
    }

    /// A brigade's IC a day (`0x467260`).
    pub fn brigade_ic(&self, kind: &str, model: i64) -> f64 {
        let c = f64::from(self.delta(kind).cost) + f64::from(self.brigade_model(kind, model).cost);
        (c * f64::from(self.ministers.brigade(kind)[COST]) * f64::from(self.cost)).max(0.0)
    }

    /// A building's IC a day (`0x4672C0`): no policy factor.
    pub fn building_ic(&self, b: usize) -> f64 {
        f64::from(self.costs.buildings[b].cost) * f64::from(self.ministers.buildings[b][COST])
    }

    /// A convoy unit's IC a day (`0x4672E0`): no policy factor.
    pub fn convoy_ic(&self, t: usize) -> f64 {
        let row = if t == ESCORTS {
            ESCORT_TYPE
        } else {
            TRANSPORT_TYPE
        };
        f64::from(self.costs.convoys[t.min(ESCORTS)].cost)
            * f64::from(self.ministers.unit(row)[COST])
    }

    /// An item's IC a day; for a division `0x466C20`, which for the AI is
    /// the division's alone (its brigades come free), rounded to single
    /// precision.
    pub fn ic(&self, build: &Build) -> f64 {
        match build {
            Build::Division { kind, model, .. } => f64::from(self.division_ic(kind, *model) as f32),
            Build::Brigade { kind, model } => self.brigade_ic(kind, *model),
            Build::Building(b) => self.building_ic(*b),
            Build::Convoy(t) => self.convoy_ic(*t),
        }
    }

    /// A division's manpower with its first brigade (`0x467310`): the
    /// model's, at least 0.001, plus the brigade's, times
    /// [`STRENGTH_PERCENT`] · 0.01.
    pub fn division_manpower(&self, kind: &str, model: i64, brigade: Option<&Brigade>) -> f64 {
        let s = f64::from(self.delta(kind).manpower)
            + f64::from(self.division_model(kind, model).manpower);
        let mut m = if s < f64::from(0.001f32) {
            0.001f32
        } else {
            s as f32
        };
        if let Some(b) = brigade {
            m = (self.brigade_manpower(&b.kind, b.model.unwrap_or(0)) + f64::from(m)) as f32;
        }
        f64::from(STRENGTH_PERCENT) * f64::from(m) * f64::from(0.01f32)
    }

    /// A brigade's manpower (`0x4673A0`).
    pub fn brigade_manpower(&self, kind: &str, model: i64) -> f64 {
        f64::from(self.delta(kind).manpower) + f64::from(self.brigade_model(kind, model).manpower)
    }

    /// Manpower per unit as the item parsers work it out (§4.2): a
    /// division's with its first brigade, then each other brigade's added
    /// in single precision; a building's or convoy's from its table.
    pub fn manpower(&self, build: &Build) -> f32 {
        match build {
            Build::Division {
                kind,
                model,
                brigades,
            } => {
                let mut m = self.division_manpower(kind, *model, brigades[0].as_ref()) as f32;
                for b in brigades[1..].iter().flatten() {
                    let x = self.brigade_manpower(&b.kind, b.model.unwrap_or(0));
                    m = (x + f64::from(m)) as f32;
                }
                m
            }
            Build::Brigade { kind, model } => self.brigade_manpower(kind, *model) as f32,
            Build::Building(b) => self.costs.buildings[*b].manpower,
            Build::Convoy(t) => self.costs.convoys[(*t).min(ESCORTS)].manpower,
        }
    }
}

/// What happens to an item after the day's production.
#[derive(Debug, Clone, Copy, PartialEq)]
enum Fate {
    Keep,
    Remove,
    /// Cancelled (`0x13D`): its manpower comes back unless still waiting.
    Cancel,
}

impl World {
    /// The production rates of `tag` with its cabinet, policy and
    /// modifiers.
    pub fn production_rates<'a>(&'a self, tag: &str, units: &'a UnitDb) -> Option<Rates<'a>> {
        let c = self.countries.get(tag)?;
        Some(self.rates_with(c, &c.ministers, units))
    }

    fn rates_with<'a>(
        &'a self,
        c: &crate::Country,
        ministers: &'a MinisterModifiers,
        units: &'a UnitDb,
    ) -> Rates<'a> {
        let policy = |name| self.policies.factor(name, &c.policy);
        Rates {
            units,
            costs: &self.production_costs,
            ministers,
            time: policy("MODIFIER_PRODUCTION_TIME"),
            cost: policy("MODIFIER_PRODUCTION_COST"),
            gearing: policy("MODIFIER_GEARING_BONUS"),
            max_gearing_bonus: self.params.max_gearing_bonus,
            gearing_increment: self.params.gearing_increment,
            building_time: c.building_time,
            convoy_time: c.convoy_time,
        }
    }

    /// Puts each country's scenario queue ([`dh_data::CountrySetup::production`])
    /// into its production queue, as [`QueueItem::from_scenario`] reads
    /// them on the scenario's start date. The game parses them before it
    /// works out the cabinets (`0x451390` runs when the game starts), so
    /// the ministers' factors are 1 here; call it after
    /// [`World::load_policies`], [`World::load_misc`] and
    /// [`World::load_production_costs`].
    pub fn load_production(&mut self, scenario: &Scenario, units: &UnitDb) {
        let ministers = MinisterModifiers::default();
        let now = self.date;
        for setup in &scenario.countries {
            let Some(c) = self.countries.get(&setup.tag) else {
                continue;
            };
            let rates = self.rates_with(c, &ministers, units);
            let queue: Vec<QueueItem> = setup
                .production
                .iter()
                .map(|d| QueueItem::from_scenario(d, &rates, now))
                .collect();
            self.countries.get_mut(&setup.tag).unwrap().production = queue;
        }
    }

    /// What the resources of `tag` can feed (`0x44AC30`): the least of
    /// `f32(energy / 2)`, `f32(2 · rare materials)` and metal, at least 0
    /// (no resources are reserved).
    pub fn resource_limit(&self, tag: &str) -> f64 {
        let Some(c) = self.countries.get(tag) else {
            return 0.0;
        };
        let s = &c.stock;
        let energy = f64::from((s.energy * 0.5) as f32);
        let rare = f64::from((s.rare_materials * 2.0) as f32);
        let mut x = s.metal;
        if energy < x {
            x = energy;
        }
        if rare < x {
            x = rare;
        }
        x.max(0.0)
    }

    /// Whether the resources of `tag` suffice for `x` IC (`0x44ACB0`): the
    /// limit, truncated, at least `x`.
    pub fn resources_suffice(&self, tag: &str, x: f32) -> bool {
        self.resource_limit(tag).trunc() >= f64::from(x)
    }

    /// The IC a day the queue of `tag` asks for (`0x44AB10`): the items
    /// neither done nor waiting for manpower, summed in single precision.
    pub fn production_need(&self, tag: &str) -> f32 {
        self.countries.get(tag).map_or(0.0, |c| {
            c.production
                .iter()
                .filter(|i| !i.series_done() && !i.halted)
                .fold(0.0f32, |s, i| (f64::from(i.ic) + f64::from(s)) as f32)
        })
    }

    /// One day of the production queue of `tag` (`0x4846C0`,
    /// production.md §3.1); with the scenario's `production` rule off, only
    /// buildings finished earlier are placed. The models are not needed:
    /// the IC and days are the items' own.
    pub fn run_production(&mut self, tag: &str) {
        if !self.countries.contains_key(tag) {
            return;
        }
        self.place_buildings(tag);
        if self.rules.production {
            self.take_waiting_manpower(tag);
            self.fund_queue(tag);
            self.finish_units(tag);
        }
    }

    /// The production part of an hour of `tag` (`0x483D70`, every hour; at
    /// 00:00 after the day's production): the divisions of the undeployed
    /// pool (logistics.md A4.2) and the divisions being built draw the
    /// hour's supplies from the national stockpile, and each item's days
    /// and IC are recomputed (§2.5), as for the AI: only a lower value is
    /// taken.
    ///
    /// A pool division needs what `0x4FD570` gives a division without a
    /// stack: its supply consumption · the cabinet's `supply_consumption`,
    /// times `economy[63]` (land), `economy[71]` (naval) or `economy[67]`
    /// (air), land and air by their strength share. A division being built
    /// (not waiting for manpower, some progress) needs its model's supply
    /// consumption, half of it for naval types.
    pub fn production_hour(&mut self, units: &UnitDb, tag: &str) {
        let Some(c) = self.countries.get(tag) else {
            return;
        };
        let p = &self.params;
        let consumption = f64::from(c.ministers.supply_consumption);
        let mut draws = Vec::new();
        for u in &c.undeployed {
            let Undeployed::Division(d) = u else {
                continue;
            };
            let Some(stats) = units.division_stats(d) else {
                continue;
            };
            let max = d.max_strength.unwrap_or(100.0);
            let share = d.strength.unwrap_or(100.0) / max;
            let s = (stats.get("supplyconsumption") * max * f64::from(0.01f32)) as f32;
            let s = f64::from((f64::from(s) * consumption) as f32);
            let need = match stats.branch {
                Branch::Land => f64::from((s * share) as f32) * f64::from(p.supply_idle),
                Branch::Naval => s * f64::from(p.naval_supply_port),
                Branch::Air => f64::from((s * share) as f32) * f64::from(p.air_supply_base),
            };
            draws.push(need as f32);
        }
        for item in &c.production {
            let Build::Division { kind, model, .. } = &item.build else {
                continue;
            };
            if item.halted || item.progress <= 0.0 {
                continue;
            }
            let model = units.division_model(kind, Some(*model));
            let x = model.map_or(0.0, |m| m.get("supplyconsumption")) as f32;
            let naval = units
                .divisions
                .get(kind.as_str())
                .is_some_and(|d| d.branch == Branch::Naval);
            draws.push(if naval {
                (f64::from(x) * 0.5) as f32
            } else {
                x
            });
        }
        for x in draws {
            self.draw_supplies(tag, x, true);
        }
        self.update_queue_costs(units, tag);
    }

    /// The gearing bonus cap of `tag` (`MODIFIER_GEARING_BONUS −
    /// economy[8]`) and its increment per unit (`economy[9]`).
    fn gearing_of(&self, tag: &str) -> (f64, f32) {
        let g = self
            .policies
            .factor("MODIFIER_GEARING_BONUS", &self.countries[tag].policy);
        let cap = f64::from(g) - f64::from(self.params.max_gearing_bonus);
        (cap, self.params.gearing_increment)
    }

    /// Appends an order to the queue of `tag` (`0x477EF0`): the first
    /// unit's manpower is taken now if the pool has it, otherwise the item
    /// waits for it.
    pub fn add_production(&mut self, tag: &str, mut item: QueueItem) {
        let Some(c) = self.countries.get_mut(tag) else {
            return;
        };
        if c.stock.manpower >= f64::from(item.manpower) {
            c.stock.manpower = (c.stock.manpower - f64::from(item.manpower)).max(0.0);
            item.halted = false;
        } else {
            item.halted = true;
        }
        c.production.push(item);
    }

    fn take_queue(&mut self, tag: &str) -> Vec<QueueItem> {
        std::mem::take(&mut self.countries.get_mut(tag).unwrap().production)
    }

    fn put_queue(&mut self, tag: &str, queue: Vec<QueueItem>) {
        self.countries.get_mut(tag).unwrap().production = queue;
    }

    /// Where a building of `tag` goes (`0x49FA30` taken as "a province
    /// the country controls"): `preferred` if it can, else the capital,
    /// else the first province it controls.
    fn building_site(&self, tag: &str, preferred: u32) -> Option<u32> {
        let controls = |p: u32| self.controller.get(&p).is_some_and(|c| c == tag);
        if preferred != 0 && controls(preferred) {
            return Some(preferred);
        }
        let capital = self.countries.get(tag).and_then(|c| c.capital);
        capital.filter(|&p| controls(p)).or_else(|| {
            self.controller
                .iter()
                .find(|(_, c)| c.as_str() == tag)
                .map(|(&p, _)| p)
        })
    }

    /// A finished building goes into province `p` (`0x13C` → `0x4792B0`):
    /// its level grows by the type's size up to the type's limit
    /// ([`building_limit`]; only the levels the queue built count); an item
    /// with its own province counts the unit done, one unit fewer waits to
    /// be placed. With no room the unit is lost and the item loses its
    /// province. Returns whether the item is through.
    fn place_building(&mut self, item: &mut QueueItem, b: usize, p: u32) -> bool {
        let levels = self.buildings_built.entry(p).or_insert([0.0; 11]);
        let limit = building_limit(b);
        let room = f64::from(limit) - f64::from(levels[b]);
        let inc = f64::from(self.production_costs.buildings[b].size).min(room);
        if inc > 0.0 {
            let level = (f64::from(levels[b]) + inc) as f32;
            levels[b] = level.min(limit).max(0.0);
            if item.location != 0 {
                item.done = (item.done + 1).max(0);
            }
            item.state = (item.state - 1).max(0);
        } else if item.location != 0 {
            item.location = 0;
        }
        item.done == item.size && item.state <= 0
    }

    /// Buildings finished the day before go into their province, before
    /// the day's production (`0x48529C..0x485549`); one with no province
    /// (or none it can go to) goes to the capital or the first province
    /// the country controls.
    fn place_buildings(&mut self, tag: &str) {
        let (cap, increment) = self.gearing_of(tag);
        let mut queue = self.take_queue(tag);
        let mut keep = Vec::with_capacity(queue.len());
        for mut item in queue.drain(..) {
            let Build::Building(b) = item.build else {
                keep.push(item);
                continue;
            };
            let mut through = false;
            if item.progress >= 1.0 {
                if item.done < item.size {
                    item.finish_unit(cap, increment);
                    if let Some(p) = self.building_site(tag, item.location) {
                        through = self.place_building(&mut item, b, p);
                    }
                }
            } else if item.state > 0 {
                if let Some(p) = self.building_site(tag, 0) {
                    through = self.place_building(&mut item, b, p);
                }
            }
            if !through {
                keep.push(item);
            }
        }
        self.put_queue(tag, keep);
    }

    /// Items whose unit waits for manpower take it when the pool has
    /// enough (`0x4855FE`).
    fn take_waiting_manpower(&mut self, tag: &str) {
        let c = self.countries.get_mut(tag).unwrap();
        for item in &mut c.production {
            if !item.series_done() && item.halted && f64::from(item.manpower) <= c.stock.manpower {
                c.stock.manpower = (c.stock.manpower - f64::from(item.manpower)).max(0.0);
                item.halted = false;
            }
        }
    }

    /// The day's IC goes to the queue in order (`0x485666..0x485739`,
    /// economy.md §8).
    fn fund_queue(&mut self, tag: &str) {
        let c = &self.countries[tag];
        let mut ic = (f64::from(c.sliders.production) * c.ic as f64) as f32;
        let limit = self.resource_limit(tag);
        if limit < f64::from(ic) {
            ic = limit as f32;
        }
        let mut queue = self.take_queue(tag);
        for item in &mut queue {
            if item.series_done() {
                continue;
            }
            if item.halted {
                item.advance(0.0);
                continue;
            }
            if item.ic <= 0.0 {
                continue;
            }
            let x = f64::from(ic) / f64::from(item.ic);
            let frac = if x > 1.0 { 1.0 } else { x as f32 };
            let used = (f64::from(frac) * f64::from(item.ic)) as f32;
            if self.resources_suffice(tag, used) {
                self.spend_resources(tag, used);
                ic = (f64::from(ic) - f64::from(used)) as f32;
                item.advance(frac);
            } else {
                item.advance(0.0);
            }
        }
        self.put_queue(tag, queue);
    }

    /// After the day's production (`0x485741..0x485BC3`): buildings in
    /// provinces the country no longer controls are cancelled; finished
    /// divisions and brigades go to the undeployed pool (`0x478610`),
    /// convoys to the transports or escorts (`0x4792B0`), buildings with
    /// no province wait to be placed; an item whose series is done leaves
    /// the queue.
    fn finish_units(&mut self, tag: &str) {
        let (cap, increment) = self.gearing_of(tag);
        let policy = &self.countries[tag].policy;
        let experience =
            ((self.policies.factor("MODIFIER_MP_EXPERIENCE", policy) - 1.0) * 100.0).max(0.0);
        let convoy_size = self.production_costs.convoys.map(|c| c.size);
        let mut queue = self.take_queue(tag);
        let mut fates = Vec::with_capacity(queue.len());
        let mut pool = Vec::new();
        let (mut transports, mut escorts) = (0.0f64, 0.0f64);
        for item in &mut queue {
            let mut fate = Fate::Keep;
            if matches!(item.build, Build::Building(_))
                && item.location != 0
                && self.controller.get(&item.location).is_none_or(|c| c != tag)
            {
                fate = Fate::Cancel;
            }
            if item.unit_ready() {
                match item.build {
                    Build::Division { .. } | Build::Brigade { .. } => {
                        item.finish_unit(cap, increment);
                        pool.push(new_unit(item, experience));
                        item.done += 1;
                        if item.done == item.size {
                            fate = Fate::Remove;
                        }
                    }
                    Build::Convoy(t) => {
                        item.finish_unit(cap, increment);
                        let n = f64::from(convoy_size[t.min(ESCORTS)].trunc());
                        if t == TRANSPORTS {
                            transports += n;
                        } else {
                            escorts += n;
                        }
                        item.done = (item.done + 1).max(0);
                        item.state = (item.state - 1).max(0);
                        if item.done == item.size && item.state <= 0 {
                            fate = Fate::Remove;
                        }
                    }
                    Build::Building(_) if item.location == 0 => {
                        item.finish_unit(cap, increment);
                        item.state += 1;
                        item.done += 1;
                    }
                    Build::Building(_) => {}
                }
            }
            fates.push(fate);
        }
        let c = self.countries.get_mut(tag).unwrap();
        c.undeployed.extend(pool);
        c.stock.transports += transports;
        c.stock.escorts += escorts;
        let mut kept = Vec::with_capacity(queue.len());
        for (item, fate) in queue.into_iter().zip(fates) {
            match fate {
                Fate::Keep => kept.push(item),
                Fate::Remove => {}
                Fate::Cancel => {
                    if !item.halted {
                        c.stock.manpower += f64::from(item.manpower);
                    }
                }
            }
        }
        c.production = kept;
    }

    /// The recomputation of each item's days and IC (`0x483E94`), as for
    /// the AI: only a lower value is taken.
    fn update_queue_costs(&mut self, units: &UnitDb, tag: &str) {
        let mut queue = self.take_queue(tag);
        {
            let c = &self.countries[tag];
            let rates = self.rates_with(c, &c.ministers, units);
            for item in &mut queue {
                let days = rates.days(&item.build, 1);
                let ic = rates.ic(&item.build);
                if days < item.days {
                    item.days = days;
                }
                if ic < f64::from(item.ic) {
                    item.ic = ic as f32;
                }
            }
        }
        self.put_queue(tag, queue);
    }
}

/// The highest level of a building type (`0x4D0BF0`): 10, infrastructure
/// 1, IC (and anything else) 100.
pub fn building_limit(b: usize) -> f32 {
    match b {
        5 => 1.0,
        2..=10 => 10.0,
        _ => 100.0,
    }
}

/// The unit a finished division or brigade item puts in the pool
/// (`0x478610`): full strength, organisation from its model, experience
/// from the policy's `MODIFIER_MP_EXPERIENCE`.
fn new_unit(item: &QueueItem, experience: f32) -> Undeployed {
    match &item.build {
        Build::Division {
            kind,
            model,
            brigades,
        } => Undeployed::Division(Division {
            id: None,
            name: item.name.clone(),
            kind: kind.clone(),
            model: Some(*model),
            strength: Some(f64::from(STRENGTH_PERCENT)),
            max_strength: Some(f64::from(STRENGTH_PERCENT)),
            organisation: None,
            experience: Some(f64::from(experience)),
            brigades: brigades.iter().flatten().cloned().collect(),
            locked: false,
            no_supplies: false,
            no_fuel: false,
            raw: Default::default(),
        }),
        Build::Brigade { kind, model } => Undeployed::Brigade {
            name: item.name.clone(),
            brigade: Brigade {
                kind: kind.clone(),
                model: Some(*model),
            },
        },
        _ => unreachable!("only divisions and brigades join the pool"),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::Country;
    use dh_data::production::{ItemDate, TRANSPORTS};
    use dh_data::unitdb::{BrigadeClass, DivisionClass};
    use dh_data::Branch;

    fn model(pairs: &[(&str, f64)]) -> Model {
        Model {
            stats: pairs.iter().map(|(k, v)| (k.to_string(), *v)).collect(),
        }
    }

    /// Infantry: cost 6, 100 days, manpower 1, supplies 1.2 a day;
    /// artillery brigades: cost 1,
    /// 150 days, manpower 0.5; engineers: cost 0.5, 50 days, manpower 0.25.
    fn units() -> UnitDb {
        let mut db = UnitDb::default();
        db.divisions.insert(
            "infantry".into(),
            DivisionClass {
                name: "infantry".into(),
                branch: Branch::Land,
                models: vec![model(&[
                    ("cost", 6.0),
                    ("buildtime", 100.0),
                    ("manpower", 1.0),
                    ("supplyconsumption", 1.2),
                ])],
                allowed_brigades: vec![],
                max_brigades: 1,
            },
        );
        for (name, cost, time, mp) in [
            ("artillery", 1.0, 150.0, 0.5),
            ("engineer", 0.5, 50.0, 0.25),
        ] {
            db.brigades.insert(
                name.into(),
                BrigadeClass {
                    name: name.into(),
                    branch: Branch::Land,
                    models: vec![model(&[
                        ("cost", cost),
                        ("buildtime", time),
                        ("manpower", mp),
                    ])],
                },
            );
        }
        db
    }

    fn rates<'a>(
        units: &'a UnitDb,
        costs: &'a ProductionCosts,
        ministers: &'a MinisterModifiers,
    ) -> Rates<'a> {
        Rates {
            units,
            costs,
            ministers,
            time: 1.0,
            cost: 1.0,
            gearing: 1.0,
            max_gearing_bonus: 0.65,
            gearing_increment: 0.05,
            building_time: [1.0; 11],
            convoy_time: [1.0; 2],
        }
    }

    fn infantry(brigades: [Option<&str>; 5]) -> Build {
        Build::Division {
            kind: "infantry".into(),
            model: 0,
            brigades: brigades.map(|b| {
                b.map(|k| Brigade {
                    kind: k.into(),
                    model: Some(0),
                })
            }),
        }
    }

    #[test]
    fn series_get_cheaper_down_to_the_gearing_floor() {
        let (units, costs, m) = (
            units(),
            ProductionCosts::default(),
            MinisterModifiers::default(),
        );
        let mut r = rates(&units, &costs, &m);
        assert_eq!(r.division_days("infantry", 0, 1), 100);
        // 100 + 95 + 90.
        assert_eq!(r.division_days("infantry", 0, 3), 285);
        // Down to 0.65 of the first: 100 + 95 + … + 70 + 3 · 65.
        assert_eq!(r.division_days("infantry", 0, 10), 790);
        // A gearing policy of 0.96 raises the floor to 0.69.
        r.gearing = 0.96;
        assert_eq!(r.division_days("infantry", 0, 10), 802);
        // IC buildings get no discount; infrastructure does.
        assert_eq!(r.building_days(IC_BUILDING, 3), 1080);
        assert_eq!(r.building_days(5, 3), 360 + 342 + 324);
        // Transports 75 days, escorts 80; the policy's time, halves to even.
        assert_eq!(
            (r.convoy_days(TRANSPORTS, 1), r.convoy_days(ESCORTS, 1)),
            (75, 80)
        );
        r.time = 0.5;
        assert_eq!(r.convoy_days(TRANSPORTS, 1), 38, "37.5");
        assert_eq!(r.brigade_days("engineer", 0, 1), 25);
        assert_eq!(r.building_days(IC_BUILDING, 1), 180);
        // At least a day.
        assert_eq!(r.division_days("unknown", 0, 1), 1);
        // The AI's brigades neither lengthen a division nor cost IC.
        r.time = 1.0;
        let d = infantry([Some("artillery"), None, None, None, None]);
        assert_eq!((r.days(&d, 1), r.ic(&d)), (100, 6.0));
    }

    #[test]
    fn cabinet_and_policy_scale_cost_and_time() {
        let (units, costs) = (units(), ProductionCosts::default());
        let mut m = MinisterModifiers::default();
        m.divisions
            .insert("infantry".into(), [0.9, 0.8, 0.0, 0.0, 0.0, 0.0]);
        m.buildings[IC_BUILDING] = [0.5, 2.0];
        let mut r = rates(&units, &costs, &m);
        r.cost = 0.85;
        assert_eq!(r.division_days("infantry", 0, 1), 90);
        assert!((r.division_ic("infantry", 0) - 6.0 * 0.8 * 0.85).abs() < 1e-6);
        // Buildings and convoys take no policy cost factor.
        assert_eq!(
            (r.building_days(IC_BUILDING, 1), r.building_ic(IC_BUILDING)),
            (180, 10.0)
        );
        assert_eq!(r.convoy_ic(ESCORTS), 4.0);
        assert_eq!(r.brigade_ic("artillery", 0), f64::from(0.85f32));
    }

    #[test]
    fn manpower_of_a_division_and_its_brigades() {
        let (units, costs, m) = (
            units(),
            ProductionCosts::default(),
            MinisterModifiers::default(),
        );
        let r = rates(&units, &costs, &m);
        // 1 + 0.5 (slot 0, through the strength percentage) + 0.25.
        let d = infantry([Some("artillery"), None, Some("engineer"), None, None]);
        assert_eq!(r.manpower(&d), 1.75);
        assert_eq!(r.manpower(&infantry([None; 5])), 1.0);
        assert_eq!(r.manpower(&Build::Building(IC_BUILDING)), 1.0);
        assert_eq!(r.manpower(&Build::Convoy(ESCORTS)), 1.0);
        // An unknown model needs 0.001 at least.
        let unknown = Build::Division {
            kind: "x".into(),
            model: 0,
            brigades: Default::default(),
        };
        assert!((r.manpower(&unknown) - 0.001).abs() < 1e-9);
    }

    fn item(days: i32, ic: f32, progress: f32) -> QueueItem {
        QueueItem {
            name: "x".into(),
            id: None,
            build: infantry([None; 5]),
            location: 0,
            days,
            ic,
            size: 1,
            done: 0,
            state: 0,
            halted: false,
            continuity: 0.0,
            funded: 1.0,
            progress,
            manpower: 1.0,
            gearing: 0.0,
            upgrade: false,
            new_model: true,
            unitcost: true,
        }
    }

    #[test]
    fn progress_and_the_continuity_accumulator() {
        let mut i = item(10, 1.0, 0.0);
        assert!(i.advance(1.0));
        assert_eq!(i.progress, 0.1);
        assert_eq!(i.continuity, (f64::from(1.2f32) - 1.0) as f32);
        // Half funded: 0.2 + 0.6 stays below 0.999, the day does not count
        // (the AI keeps its gearing bonus).
        i.gearing = 0.2;
        assert!(!i.advance(0.5));
        assert_eq!(i.continuity, 0.8000001);
        let days = 10.0 * (1.0 - f64::from(0.2f32));
        assert_eq!(i.progress, (0.5 / days + f64::from(0.1f32)) as f32);
        assert_eq!(i.gearing, 0.2);
        // At most 1 and 3.
        i.continuity = 2.9;
        i.progress = 0.99;
        assert!(i.advance(1.0));
        assert_eq!((i.progress, i.continuity), (1.0, 2.0));
        assert_eq!(i.funded, 1.0);

        // A unit done: progress less 1, the next waits for manpower, the
        // gearing bonus grows up to its cap.
        i.progress = 1.0;
        i.finish_unit(0.35, 0.05);
        assert_eq!((i.progress, i.halted), (0.0, true));
        assert_eq!(i.gearing, 0.25);
        i.finish_unit(0.27, 0.05);
        assert_eq!(i.gearing, 0.27);
        let mut ic = item(10, 1.0, 1.0);
        ic.build = Build::Building(IC_BUILDING);
        ic.finish_unit(0.35, 0.05);
        assert_eq!(ic.gearing, 0.0, "no gearing for IC");
    }

    #[test]
    fn scenario_items_start_from_their_date() {
        let (units, costs, m) = (
            units(),
            ProductionCosts::default(),
            MinisterModifiers::default(),
        );
        let r = rates(&units, &costs, &m);
        let doc = dh_text::script::parse_str(
            "division_development = { type = infantry extra = artillery cost = 1.5
                date = { year = 1936 month = january day = 6 } }
             division_development = { type = infantry total_progress = 25 days_for_first = 7
                date = { year = 1937 month = january day = 0 } }
             convoy_development = { type = transports date = { year = 1936 month = february day = 0 } }",
        );
        let items = Development::all_in(&doc.root);
        let now = GameDate::new(1936, 1, 1);
        let a = QueueItem::from_scenario(&items[0], &r, now);
        assert_eq!(a.days, 100);
        assert_eq!(a.progress, (1.0 - 6.0 / 100.0f64) as f32);
        assert_eq!((a.ic, a.manpower), (1.5, 1.5), "the file's cost");
        // A year away: progress as written, in days (25 / 100); IC and
        // manpower worked out.
        let b = QueueItem::from_scenario(&items[1], &r, now);
        assert_eq!(
            (b.days, b.progress, b.ic, b.manpower),
            (100, 0.25, 6.0, 1.0)
        );
        let c = QueueItem::from_scenario(&items[2], &r, now);
        assert_eq!((c.days, c.ic, c.manpower), (75, 4.0, 1.0));
        assert_eq!(c.progress, (1.0 - 30.0 / 75.0f64) as f32);
        assert_eq!(
            items[2].date,
            ItemDate {
                year: 1936,
                month: 1,
                day: 0
            }
        );
    }

    /// AAA (capital 1) controls provinces 1 and 2, has 100 IC, 10 % of it
    /// on production, plenty of resources and 10 manpower.
    fn world() -> World {
        let mut w = World::empty(GameDate::new(1936, 1, 1));
        let mut c = Country::new("AAA");
        c.capital = Some(1);
        c.ic = 100;
        c.sliders.production = 0.1;
        c.stock.metal = 1000.0;
        c.stock.energy = 1000.0;
        c.stock.rare_materials = 1000.0;
        c.stock.manpower = 10.0;
        w.countries.insert("AAA".into(), c);
        for p in [1, 2] {
            w.owner.insert(p, "AAA".into());
            w.controller.insert(p, "AAA".into());
        }
        w
    }

    fn queue(w: &mut World) -> &mut Vec<QueueItem> {
        &mut w.countries.get_mut("AAA").unwrap().production
    }

    #[test]
    fn the_ic_goes_to_the_queue_in_order() {
        let mut w = world();
        let mut waiting = item(10, 6.0, 0.0);
        waiting.halted = true;
        waiting.manpower = 20.0;
        let mut done = item(10, 6.0, 0.0);
        done.done = 1;
        *queue(&mut w) = vec![item(10, 6.0, 0.0), waiting, done, item(10, 6.0, 0.0)];
        w.run_production("AAA");
        let q = &w.countries["AAA"].production;
        // 10 IC: 6 to the first, the waiting item none, 4 to the last.
        assert_eq!((q[0].funded, q[0].progress), (1.0, 0.1));
        assert_eq!((q[1].funded, q[1].progress, q[1].halted), (0.0, 0.0, true));
        assert_eq!((q[2].funded, q[2].progress), (1.0, 0.0), "untouched");
        assert_eq!(q[3].funded, (4.0f64 / 6.0) as f32);
        let s = w.countries["AAA"].stock;
        assert!((s.metal - 990.0).abs() < 1e-4 && (s.energy - 980.0).abs() < 1e-4);
        assert!((s.rare_materials - 995.0).abs() < 1e-4);
        assert_eq!(s.manpower, 10.0);
        // Its need counts neither the waiting nor the finished items.
        assert_eq!(w.production_need("AAA"), 12.0);

        // The resource limit caps the day's IC: 5.5 metal leave 5.5 IC,
        // but the check truncates it to 5 IC, too little for 5.5.
        let mut w = world();
        w.countries.get_mut("AAA").unwrap().stock.metal = 5.5;
        *queue(&mut w) = vec![item(10, 6.0, 0.0)];
        w.run_production("AAA");
        let c = &w.countries["AAA"];
        assert_eq!((c.production[0].funded, c.stock.metal), (0.0, 5.5));
        w.countries.get_mut("AAA").unwrap().stock.metal = 5.0;
        w.run_production("AAA");
        let c = &w.countries["AAA"];
        assert_eq!(c.production[0].funded, (5.0f64 / 6.0) as f32);
        assert_eq!(c.stock.metal, 0.0);

        // Without the production rule nothing advances.
        let mut w = world();
        w.rules.production = false;
        *queue(&mut w) = vec![item(10, 6.0, 0.0)];
        w.run_production("AAA");
        assert_eq!(w.countries["AAA"].production[0].progress, 0.0);
    }

    #[test]
    fn finished_divisions_join_the_pool_and_the_series_goes_on() {
        let mut w = world();
        w.policies = dh_data::PolicyEffects::parse(
            b"#_POLICY_DEMOCRATIC_;1;2;3;4;5;6;7;8;9;10;x\n\
              MODIFIER_MP_EXPERIENCE;0.1;0.1;0.1;0.1;0.1;0.1;0.1;0.1;0.1;0.1;x\n",
        );
        let mut i = item(10, 6.0, 0.95);
        i.size = 2;
        i.manpower = 6.0;
        i.build = infantry([Some("artillery"), None, None, Some("engineer"), None]);
        *queue(&mut w) = vec![i];
        w.run_production("AAA");
        let c = &w.countries["AAA"];
        let i = &c.production[0];
        assert_eq!((i.done, i.progress, i.halted), (1, 0.0, true));
        assert_eq!(i.gearing, 0.05);
        let [Undeployed::Division(d)] = c.undeployed.as_slice() else {
            panic!("{:?}", c.undeployed);
        };
        assert_eq!(
            (d.kind.as_str(), d.strength, d.max_strength),
            ("infantry", Some(100.0), Some(100.0))
        );
        let brigades: Vec<&str> = d.brigades.iter().map(|b| b.kind.as_str()).collect();
        assert_eq!(brigades, ["artillery", "engineer"]);
        assert!((d.experience.unwrap() - 10.0).abs() < 1e-4);

        // The next unit takes its manpower and builds 5 % faster.
        w.run_production("AAA");
        let c = &w.countries["AAA"];
        assert_eq!(c.stock.manpower, 4.0);
        let i = &c.production[0];
        assert!(!i.halted);
        assert_eq!(
            i.progress,
            (1.0 / (10.0 * (1.0 - f64::from(0.05f32)))) as f32
        );
        // Done: the item leaves the queue.
        queue(&mut w)[0].progress = 1.0;
        w.run_production("AAA");
        let c = &w.countries["AAA"];
        assert!(c.production.is_empty());
        assert_eq!(c.undeployed.len(), 2);

        // Without the manpower a unit waits and its day does not count.
        let mut w = world();
        let mut i = item(10, 6.0, 0.5);
        i.halted = true;
        i.manpower = 11.0;
        *queue(&mut w) = vec![i];
        w.run_production("AAA");
        let i = &w.countries["AAA"].production[0];
        assert_eq!((i.halted, i.progress, i.funded), (true, 0.5, 0.0));
    }

    #[test]
    fn buildings_and_convoys() {
        let mut w = world();
        w.countries.get_mut("AAA").unwrap().sliders.production = 1.0;
        let mut fort = item(20, 5.0, 0.95);
        fort.build = Build::Building(3);
        fort.location = 2;
        let mut lost = fort.clone();
        lost.location = 3;
        lost.manpower = 2.0;
        let mut anywhere = fort.clone();
        anywhere.location = 0;
        let mut transports = item(75, 4.0, 0.99);
        transports.build = Build::Convoy(TRANSPORTS);
        w.controller.insert(3, "BBB".into());
        *queue(&mut w) = vec![fort, lost, anywhere, transports];
        w.run_production("AAA");
        let c = &w.countries["AAA"];
        // The fort in a province AAA does not control is cancelled and its
        // manpower comes back; the convoys are done; the fort without a
        // province waits to be placed; the other waits for the next day.
        assert_eq!(c.stock.manpower, 12.0);
        assert_eq!(c.stock.transports, 10.0);
        assert_eq!(c.production.len(), 2);
        assert_eq!((c.production[0].progress, c.production[0].done), (1.0, 0));
        assert_eq!((c.production[1].state, c.production[1].done), (1, 1));
        assert!(w.buildings_built.is_empty());
        w.run_production("AAA");
        // Both placed before the day's production: in province 2 and in the
        // capital.
        assert!(w.countries["AAA"].production.is_empty());
        assert_eq!(w.buildings_built[&2][3], 1.0);
        assert_eq!(w.buildings_built[&1][3], 1.0);
    }

    #[test]
    fn building_levels_stop_at_the_limit() {
        let mut w = world();
        w.buildings_built.insert(2, {
            let mut l = [0.0; 11];
            l[5] = 0.95;
            l
        });
        let mut infra = item(360, 1.0, 0.0);
        infra.build = Build::Building(5);
        infra.location = 2;
        infra.size = 3;
        // 0.05 of room for a size of 0.1: the level reaches 1.
        assert!(!w.place_building(&mut infra, 5, 2));
        assert_eq!((w.buildings_built[&2][5], infra.done), (1.0, 1));
        // No room: the unit is lost and the item has no province any more.
        assert!(!w.place_building(&mut infra, 5, 2));
        assert_eq!((infra.done, infra.location), (1, 0));
        assert_eq!(
            (building_limit(1), building_limit(3), building_limit(5)),
            (100.0, 10.0, 1.0)
        );
    }

    #[test]
    fn every_hour_the_ai_takes_lower_costs_and_supplies_are_drawn() {
        let units = units();
        let mut w = world();
        let mut waiting = item(10, 6.0, 0.5);
        waiting.halted = true;
        *queue(&mut w) = vec![item(400, 9.0, 0.0), item(50, 1.5, 0.5), waiting];
        w.countries.get_mut("AAA").unwrap().stock.supplies = 10.0;
        w.production_hour(&units, "AAA");
        let c = &w.countries["AAA"];
        let q = &c.production;
        assert_eq!((q[0].days, q[0].ic), (100, 6.0));
        assert_eq!((q[1].days, q[1].ic), (50, 1.5));
        // Only the division with progress that is not waiting for its
        // manpower draws: 1.2 a day.
        let hour = f64::from(1.2f32 * (1.0f32 / 24.0));
        assert!(
            (c.stock.supplies - (10.0 - hour)).abs() < 1e-6,
            "{}",
            c.stock.supplies
        );

        // A pool division draws its day's supplies at rest (economy[63]).
        let mut w = world();
        w.countries.get_mut("AAA").unwrap().stock.supplies = 10.0;
        let mut done = item(10, 6.0, 1.0);
        done.halted = true;
        w.countries.get_mut("AAA").unwrap().undeployed = vec![new_unit(&done, 0.0)];
        w.params.supply_idle = 0.5;
        w.production_hour(&units, "AAA");
        let hour = f64::from(0.6f32 * (1.0f32 / 24.0));
        let s = w.countries["AAA"].stock.supplies;
        assert!((s - (10.0 - hour)).abs() < 1e-6, "{s}");
    }

    #[test]
    fn orders_take_manpower_when_there_is_enough() {
        let (units, costs, m) = (
            units(),
            ProductionCosts::default(),
            MinisterModifiers::default(),
        );
        let r = rates(&units, &costs, &m);
        let mut w = world();
        let order = QueueItem::new("1. ID", infantry([None; 5]), 3, &r);
        assert_eq!((order.days, order.ic, order.manpower), (100, 6.0, 1.0));
        w.add_production("AAA", order.clone());
        w.countries.get_mut("AAA").unwrap().stock.manpower = 0.5;
        w.add_production("AAA", order);
        let c = &w.countries["AAA"];
        assert_eq!(c.stock.manpower, 0.5);
        assert!(!c.production[0].halted && c.production[1].halted);
    }
}
