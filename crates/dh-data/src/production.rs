//! Production: what a scenario's countries already have in their
//! production queue (the `division_development`, `brigade_development`,
//! `province_development` and `convoy_development` blocks of a country,
//! production.md §4.2) and the costs of province buildings and convoys
//! (`db/building_costs.txt`, `db/convoy_costs.txt`, §5).
//!
//! The values are kept as written; what the game works out from them when
//! it loads the scenario (days per unit, progress from the date, manpower
//! and cost when missing) is the simulation's job.

use crate::{load_script, Brigade, GameDate, TypeId, Vfs, Warning};
use dh_text::Block;

pub const BUILDING_COSTS_FILE: &str = "db/building_costs.txt";
pub const CONVOY_COSTS_FILE: &str = "db/convoy_costs.txt";

/// Province buildings by the game's index, as a scenario's
/// `province_development` (`0x4F4AB0`) and the technologies'
/// `building_prod_mod` name them: 1 ic … 10 rocket_test. Index 0 is the
/// "all" slot of the ministers' table; an unknown name reads as 0.
pub const BUILDINGS: [&str; 11] = [
    "",
    "ic",
    "coastal_fort",
    "land_fort",
    "flak",
    "infrastructure",
    "air_base",
    "naval_base",
    "radar_station",
    "nuclear_reactor",
    "rocket_test",
];

/// The same buildings as `db/building_costs.txt` names them (`0x4D0100`).
pub const BUILDING_COST_KEYS: [&str; 11] = [
    "",
    "ic",
    "coastalfort",
    "landfort",
    "anti_air",
    "infra",
    "air_base",
    "naval_base",
    "radar_station",
    "nuclear_reactor",
    "rocket_test",
];

/// The IC building, which gets no series discount and no gearing bonus.
pub const IC_BUILDING: usize = 1;

/// Convoy kinds: `transports` 0, `escorts` 1 (`0x4F5850`; any other name
/// reads as 2).
pub const TRANSPORTS: usize = 0;
pub const ESCORTS: usize = 1;

/// A building's index by its scenario or technology name; 0 when unknown.
pub fn building_index(name: &str) -> usize {
    BUILDINGS
        .iter()
        .skip(1)
        .position(|b| b.eq_ignore_ascii_case(name))
        .map_or(0, |i| i + 1)
}

/// A convoy kind by its scenario name: transports 0, escorts 1, else 2.
pub fn convoy_index(name: &str) -> usize {
    if name.eq_ignore_ascii_case("transports") {
        TRANSPORTS
    } else if name.eq_ignore_ascii_case("escorts") {
        ESCORTS
    } else {
        2
    }
}

/// What a queue item builds.
#[derive(Debug, Clone, PartialEq)]
pub enum Build {
    /// A division of type `kind` (lower case) and model `model`, with up
    /// to five brigades: slot 0 is `extra` / `brigade_model`, slots 1..=4
    /// `extra1..4` / `brigade_model1..4` (models default to 0).
    Division {
        kind: String,
        model: i64,
        brigades: [Option<Brigade>; 5],
    },
    /// A brigade to attach later.
    Brigade { kind: String, model: i64 },
    /// A province building, by its index in [`BUILDINGS`].
    Building(usize),
    /// Convoys: [`TRANSPORTS`], [`ESCORTS`] or 2 (unknown).
    Convoy(usize),
}

/// An item's `date`, as the file writes it: month and day count from 0.
/// Missing fields are 0 (the item constructor's year 0, `0x4F0B50`).
#[derive(Debug, Clone, Copy, Default, PartialEq, Eq)]
pub struct ItemDate {
    pub year: i32,
    pub month: i32,
    pub day: i32,
}

impl ItemDate {
    /// `{ year = … month = … day = … }`; the month is a name or a number
    /// counted from 0.
    pub fn from_block(b: &Block) -> Self {
        let month = match b.get_scalar("month") {
            None => 0,
            Some(m) => m.as_i64().map_or_else(
                || crate::date::month_from_name(m.as_str()).map_or(0, |n| i32::from(n) - 1),
                |n| n as i32,
            ),
        };
        ItemDate {
            year: b.get_i64("year").unwrap_or(0) as i32,
            month,
            day: b.get_i64("day").unwrap_or(0) as i32,
        }
    }

    /// Days from `now` to this date as the item parsers count them
    /// (`0x4F38C6`): years of 360 days and months of 30.
    pub fn days_from(&self, now: GameDate) -> i64 {
        360 * (i64::from(self.year) - i64::from(now.year))
            + 30 * (i64::from(self.month) - (i64::from(now.month) - 1))
            + (i64::from(self.day) - (i64::from(now.day) - 1))
    }
}

/// One item of a country's production queue as a scenario (or a saved
/// game) writes it (production.md §1: the item fields `+0x04..+0x86`).
/// Absent keys take the parsers' defaults.
#[derive(Debug, Clone, PartialEq)]
pub struct Development {
    pub build: Build,
    pub id: Option<TypeId>,
    pub name: String,
    /// IC a day (`cost`); 0 when missing or not above 0 (the parser
    /// rejects those).
    pub cost: f64,
    /// When the current unit is due (`date`).
    pub date: ItemDate,
    /// Province of a building (`location`); 0: none.
    pub location: u32,
    /// Waiting for manpower (`halted`).
    pub halted: bool,
    /// Every unit of the series gets the newest model (`upgrade`).
    pub upgrade: bool,
    /// The AI raises the models daily (`new_model`; default yes).
    pub new_model: bool,
    /// A human player's cost follows the modifiers daily (`unitcost`;
    /// default yes).
    pub unitcost: bool,
    /// Manpower per unit (`manpower`); 0: work it out.
    pub manpower: f64,
    /// Units in the series (`size`, default 1) and how many are done.
    pub size: i64,
    pub done: i64,
    /// Finished buildings or convoys not placed yet (`state`).
    pub state: i64,
    /// The continuity accumulator (`progress`).
    pub progress: f64,
    /// Progress of the current unit (`total_progress`): a share, or days
    /// when above 1.5.
    pub total_progress: f64,
    /// Days left (`days`, for display) and days per unit
    /// (`days_for_first`); both default to 1.
    pub days: i64,
    pub days_for_first: i64,
    pub gearing_bonus: f64,
    /// `speed` (default 1; no use found).
    pub speed: i64,
}

/// The four item blocks of a country, in the order of [`Development::kind_of`].
pub const DEVELOPMENT_KEYS: [&str; 4] = [
    "division_development",
    "brigade_development",
    "province_development",
    "convoy_development",
];

impl Development {
    /// The kind of item a country block's key starts (`0x5494D0`), as the
    /// index of [`DEVELOPMENT_KEYS`].
    pub fn kind_of(key: &str) -> Option<usize> {
        DEVELOPMENT_KEYS
            .iter()
            .position(|k| k.eq_ignore_ascii_case(key))
    }

    /// Reads an item block of the given kind (an index of
    /// [`DEVELOPMENT_KEYS`]).
    pub fn from_block(kind: usize, b: &Block) -> Option<Self> {
        let lower = |key: &str| b.get_str(key).unwrap_or("").to_ascii_lowercase();
        let int = |key: &str, default: i64| b.get_i64(key).unwrap_or(default);
        let flag = |key: &str, default: bool| b.get_bool(key).unwrap_or(default);
        let num = |key: &str| b.get_f64(key).unwrap_or(0.0);
        let build = match kind {
            0 => {
                let slot = |extra: &str, model: &str| {
                    let kind = b.get_str(extra)?;
                    (!kind.eq_ignore_ascii_case("none")).then(|| Brigade {
                        kind: kind.to_ascii_lowercase(),
                        model: Some(int(model, 0)),
                    })
                };
                Build::Division {
                    kind: lower("type"),
                    model: int("model", 0),
                    brigades: [
                        slot("extra", "brigade_model"),
                        slot("extra1", "brigade_model1"),
                        slot("extra2", "brigade_model2"),
                        slot("extra3", "brigade_model3"),
                        slot("extra4", "brigade_model4"),
                    ],
                }
            }
            1 => Build::Brigade {
                kind: lower("type"),
                model: int("model", 0),
            },
            // The parser starts a building at type 1 (`0x4F4AD0`).
            2 => Build::Building(b.get_str("type").map_or(1, building_index)),
            3 => Build::Convoy(convoy_index(b.get_str("type").unwrap_or(""))),
            _ => return None,
        };
        Some(Development {
            build,
            id: b.get_block("id").and_then(TypeId::from_block),
            name: b.get_str("name").unwrap_or_default().to_owned(),
            cost: num("cost").max(0.0),
            date: b
                .get_block("date")
                .map(ItemDate::from_block)
                .unwrap_or_default(),
            location: u32::try_from(int("location", 0)).unwrap_or(0),
            halted: flag("halted", false),
            upgrade: flag("upgrade", false),
            new_model: flag("new_model", true),
            unitcost: flag("unitcost", true),
            manpower: num("manpower"),
            size: int("size", 1),
            done: int("done", 0),
            state: int("state", 0),
            progress: num("progress"),
            total_progress: num("total_progress"),
            days: int("days", 1),
            days_for_first: int("days_for_first", 1),
            gearing_bonus: num("gearing_bonus"),
            speed: int("speed", 1),
        })
    }

    /// The items of a country block, in file order (the queue's order:
    /// each is appended).
    pub fn all_in(country: &Block) -> Vec<Self> {
        country
            .fields()
            .filter_map(|f| Self::from_block(Self::kind_of(&f.key)?, f.value.as_block()?))
            .collect()
    }
}

/// IC a day, build time in days, manpower per unit and size of a building
/// or convoy type. A building's size is what one unit adds to the
/// province's level; a convoy's, how many convoys one unit brings.
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct BuildCost {
    pub cost: f32,
    pub buildtime: i32,
    pub manpower: f32,
    pub size: f32,
}

/// `db/building_costs.txt` by building index ([`BUILDINGS`]) and
/// `db/convoy_costs.txt` by convoy kind.
#[derive(Debug, Clone, PartialEq)]
pub struct ProductionCosts {
    pub buildings: [BuildCost; 11],
    pub convoys: [BuildCost; 2],
}

impl Default for ProductionCosts {
    /// The shipped files' values.
    fn default() -> Self {
        let c = |cost, buildtime, manpower, size| BuildCost {
            cost,
            buildtime,
            manpower,
            size,
        };
        ProductionCosts {
            buildings: [
                BuildCost::default(),
                c(5.0, 360, 1.0, 1.0),
                c(4.0, 1000, 0.0, 1.0),
                c(5.0, 1200, 0.0, 1.0),
                c(3.0, 60, 0.5, 1.0),
                c(1.0, 360, 0.0, 0.1),
                c(1.0, 180, 0.0, 1.0),
                c(5.0, 180, 0.0, 1.0),
                c(2.0, 180, 0.5, 1.0),
                c(50.0, 180, 5.0, 1.0),
                c(20.0, 180, 1.0, 1.0),
            ],
            convoys: [c(4.0, 75, 1.0, 10.0), c(4.0, 80, 1.0, 10.0)],
        }
    }
}

impl ProductionCosts {
    /// Reads both files; what they lack is 0 (as in the game's tables), a
    /// missing file a warning.
    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> Self {
        let mut costs = ProductionCosts {
            buildings: [BuildCost::default(); 11],
            convoys: [BuildCost::default(); 2],
        };
        for (file, buildings) in [(BUILDING_COSTS_FILE, true), (CONVOY_COSTS_FILE, false)] {
            match load_script(vfs, file, warnings) {
                Ok(root) if buildings => costs.read_buildings(&root),
                Ok(root) => costs.read_convoys(&root),
                Err(e) => warnings.push(Warning {
                    file: file.to_owned(),
                    line: 0,
                    message: e.to_string(),
                }),
            }
        }
        costs
    }

    /// Blocks of `building_costs.txt` (`0x4D0300`): `cost`, `buildtime`
    /// (an integer), `manpower` and `size`; an unknown name fills slot 0.
    pub fn read_buildings(&mut self, root: &Block) {
        for f in root.fields() {
            let Some(b) = f.value.as_block() else {
                continue;
            };
            let i = BUILDING_COST_KEYS
                .iter()
                .skip(1)
                .position(|k| k.eq_ignore_ascii_case(&f.key))
                .map_or(0, |i| i + 1);
            read_cost(&mut self.buildings[i], b, false);
        }
    }

    /// Blocks `transports` and `escorts` of `convoy_costs.txt` (`0x4F5620`);
    /// `size` is an integer there.
    pub fn read_convoys(&mut self, root: &Block) {
        for f in root.fields() {
            let Some(b) = f.value.as_block() else {
                continue;
            };
            if let Some(c) = self.convoys.get_mut(convoy_index(&f.key)) {
                read_cost(c, b, true);
            }
        }
    }
}

fn read_cost(c: &mut BuildCost, b: &Block, integer_size: bool) {
    for f in b.fields() {
        let Some(v) = f.value.as_scalar().and_then(|s| s.as_f64()) else {
            continue;
        };
        match f.key.to_ascii_lowercase().as_str() {
            "cost" => c.cost = v as f32,
            // `atoi` into 16 bits.
            "buildtime" => c.buildtime = i32::from(v.trunc() as i16),
            "manpower" => c.manpower = v as f32,
            "size" if integer_size => c.size = f32::from(v.trunc() as i16),
            "size" => c.size = v as f32,
            _ => {}
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn reads_a_country_queue_in_order() {
        let doc = dh_text::script::parse_str(
            r#"country = { tag = GER
                division_development = { name = "KMS Admiral Graf Spee" type = heavy_cruiser
                    model = 3 cost = 5.6 id = { type = 14500 id = 90 }
                    date = { year = 1936 month = january day = 6 } }
                province_development = { id = { type = 30151 id = 1000 } name = "" progress = 0.5
                    location = 1552 cost = 15.0 date = { year = 1946 month = march day = 14 hour = 0 }
                    manpower = 0.0 total_progress = 0.0 size = 2 done = 0 days = 351
                    days_for_first = 180 type = nuclear_reactor }
                landunit = { name = "x" }
                brigade_development = { type = Artillery model = 2 cost = -1 halted = yes }
                division_development = { type = infantry extra = anti_tank brigade_model = 1
                    extra3 = engineer new_model = no }
                convoy_development = { type = escorts size = 3 }
            }"#,
        );
        let country = doc.root.get_block("country").unwrap();
        let items = Development::all_in(country);
        assert_eq!(items.len(), 5);
        let spee = &items[0];
        assert_eq!(spee.name, "KMS Admiral Graf Spee");
        assert_eq!(
            spee.build,
            Build::Division {
                kind: "heavy_cruiser".into(),
                model: 3,
                brigades: [None, None, None, None, None],
            }
        );
        assert_eq!(spee.cost, 5.6);
        assert_eq!(
            spee.id,
            Some(TypeId {
                kind: 14500,
                id: 90
            })
        );
        assert_eq!(
            spee.date,
            ItemDate {
                year: 1936,
                month: 0,
                day: 6
            }
        );
        // The scenario starts on `day = 0` of January: six days to go.
        assert_eq!(spee.date.days_from(GameDate::new(1936, 1, 1)), 6);
        assert_eq!(
            ItemDate {
                year: 1936,
                month: 2,
                day: 1
            }
            .days_from(GameDate::new(1936, 1, 1)),
            61
        );
        // Defaults of the parsers.
        assert_eq!((spee.size, spee.done, spee.days_for_first), (1, 0, 1));
        assert!(spee.new_model && spee.unitcost && !spee.halted && !spee.upgrade);

        let reactor = &items[1];
        assert_eq!(reactor.build, Build::Building(9));
        assert_eq!(
            (reactor.location, reactor.size, reactor.days),
            (1552, 2, 351)
        );
        assert_eq!((reactor.progress, reactor.days_for_first), (0.5, 180));

        let brigade = &items[2];
        assert_eq!(
            brigade.build,
            Build::Brigade {
                kind: "artillery".into(),
                model: 2
            }
        );
        assert_eq!(brigade.cost, 0.0, "not above 0: worked out later");
        assert!(brigade.halted);

        let Build::Division { brigades, .. } = &items[3].build else {
            panic!("{:?}", items[3].build);
        };
        let slot = |kind: &str, model| {
            Some(Brigade {
                kind: kind.into(),
                model: Some(model),
            })
        };
        assert_eq!(
            brigades,
            &[slot("anti_tank", 1), None, None, slot("engineer", 0), None]
        );
        assert!(!items[3].new_model);
        assert_eq!(items[3].date, ItemDate::default());

        assert_eq!(items[4].build, Build::Convoy(ESCORTS));
        assert_eq!(items[4].size, 3);
        assert_eq!(building_index("land_fort"), 3);
        assert_eq!(building_index("landfort"), 0);
        assert_eq!(convoy_index("convoys"), 2);
    }

    #[test]
    fn reads_building_and_convoy_costs() {
        let mut costs = ProductionCosts {
            buildings: [BuildCost::default(); 11],
            convoys: [BuildCost::default(); 2],
        };
        let doc = dh_text::script::parse_str(
            "ic = { cost = 5 buildtime = 360 manpower = 1 size = 1 }\n\
             infra = { cost = 1 buildtime = 360.7 manpower = 0 size = 0.1 }\n\
             anti_air = { cost = 3 buildtime = 60 manpower = 0.5 size = 1 }",
        );
        costs.read_buildings(&doc.root);
        let doc = dh_text::script::parse_str(
            "transports = { cost = 4 buildtime = 75 manpower = 1 size = 10.5 }\n\
             escorts = { cost = 4 buildtime = 80 manpower = 1 size = 10 }",
        );
        costs.read_convoys(&doc.root);
        let d = ProductionCosts::default();
        assert_eq!(costs.buildings[1], d.buildings[1]);
        assert_eq!(costs.buildings[5], d.buildings[5], "360.7 reads as 360");
        assert_eq!(costs.buildings[4], d.buildings[4]);
        assert_eq!(costs.buildings[2], BuildCost::default());
        assert_eq!(costs.convoys, d.convoys, "10.5 reads as 10");
    }
}
