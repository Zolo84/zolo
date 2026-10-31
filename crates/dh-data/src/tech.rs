//! Technology applications from the nine `db/tech/*_tech.txt` files
//! (`docs/spec/tech-commands.md` §2.1, §3.2; research.md §1.1): what the
//! research system needs of each application (category, historical year,
//! components, requirements) and the commands of its `effects`. The first
//! application with a given ID wins (§3.2.4).

use crate::{load_script, Vfs, Warning};
use dh_text::Block;
use std::collections::BTreeMap;

/// The technology files in load order; a mod may replace any of them.
pub const TECH_FILES: [&str; 9] = [
    "db/tech/infantry_tech.txt",
    "db/tech/armor_tech.txt",
    "db/tech/naval_tech.txt",
    "db/tech/aircraft_tech.txt",
    "db/tech/industry_tech.txt",
    "db/tech/land_doctrines_tech.txt",
    "db/tech/secret_weapons_tech.txt",
    "db/tech/naval_doctrines_tech.txt",
    "db/tech/air_doctrines_tech.txt",
];

/// Technology categories by index (`T+0x7E`, set from the `category` of
/// the application's `technology` group): the order of the ministers'
/// `research which` and of the AI file's category weights.
pub const CATEGORIES: [&str; 9] = [
    "infantry",
    "armor",
    "naval",
    "aircraft",
    "industry",
    "land_doctrines",
    "secret_weapons",
    "naval_doctrines",
    "air_doctrines",
];

/// The named research types (specialities) by index (`0x75C380`, 0-based);
/// `rt_user_1` … `rt_user_60` follow as 49 … 108 ([`SPECIALITY_COUNT`]).
pub const SPECIALITIES: [&str; 49] = [
    "artillery",
    "mechanics",
    "electronics",
    "chemistry",
    "training",
    "general_equipment",
    "rocketry",
    "naval_engineering",
    "aeronautics",
    "nuclear_physics",
    "nuclear_engineering",
    "management",
    "industrial_engineering",
    "mathematics",
    "small_unit_tactics",
    "large_unit_tactics",
    "centralized_execution",
    "decentralized_execution",
    "technical_efficiency",
    "individual_courage",
    "infantry_focus",
    "combined_arms_focus",
    "large_unit_focus",
    "naval_artillery",
    "naval_training",
    "aircraft_testing",
    "fighter_tactics",
    "bomber_tactics",
    "carrier_tactics",
    "submarine_tactics",
    "large_taskforce_tactics",
    "small_taskforce_tactics",
    "seamanship",
    "piloting",
    "avionics",
    "munitions",
    "vehicle_engineering",
    "carrier_design",
    "submarine_design",
    "fighter_design",
    "bomber_design",
    "mountain_training",
    "airborne_training",
    "marine_training",
    "maneuver_tactics",
    "blitzkrieg_tactics",
    "static_defense_tactics",
    "medicine",
    "cavalry_tactics",
];

/// Named types plus `rt_user_1..=60`: the team's speciality flags
/// (`TT+0x1A..`, 109 bytes).
pub const SPECIALITY_COUNT: usize = SPECIALITIES.len() + 60;
/// What an unknown research type reads as (`0x75C380` logs an error).
pub const GENERAL_EQUIPMENT: usize = 5;
/// Types whose daily progress gains the level of a rocket test site or a
/// nuclear reactor and ignores the post-historical bonus (research.md §3).
pub const ROCKETRY: usize = 6;
pub const NUCLEAR_PHYSICS: usize = 9;
pub const NUCLEAR_ENGINEERING: usize = 10;
/// Components kept per application (`0x5631EF`: an eighth one and later
/// are dropped).
pub const MAX_COMPONENTS: usize = 7;

/// A category by name, case-insensitively.
pub fn category_index(name: &str) -> Option<usize> {
    CATEGORIES.iter().position(|c| c.eq_ignore_ascii_case(name))
}

/// A research type by name (`0x75C380`), case-insensitively; `None` when
/// unknown (the game then takes [`GENERAL_EQUIPMENT`]).
pub fn speciality_index(name: &str) -> Option<usize> {
    let name = name.to_ascii_lowercase();
    if let Some(i) = SPECIALITIES.iter().position(|s| *s == name) {
        return Some(i);
    }
    let n: usize = name.strip_prefix("rt_user_")?.parse().ok()?;
    (1..=60).contains(&n).then_some(SPECIALITIES.len() + n - 1)
}

/// One research step of an application (`component = { … }`; `0x75A390`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Component {
    /// Research type index ([`speciality_index`]; unknown →
    /// [`GENERAL_EQUIPMENT`]).
    pub kind: usize,
    /// `difficulty`, read like `atoi`.
    pub difficulty: i32,
    /// `double_time = yes`: the step needs 200 points instead of 100.
    pub double_time: bool,
}

impl Component {
    /// Points the step needs (`0x75A786`): 100, or 200 with `double_time`.
    pub fn points(&self) -> i32 {
        if self.double_time {
            200
        } else {
            100
        }
    }
}

/// What research needs of an application (`docs/spec/research.md` §1.1).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Application {
    pub id: i64,
    /// `name` (a localisation key).
    pub name: String,
    /// Index into [`CATEGORIES`] (an unknown group category reads as 0,
    /// assumed).
    pub category: usize,
    /// Historical `year`, read like `atoi` (0 when missing).
    pub year: i32,
    /// At most [`MAX_COMPONENTS`], in file order.
    pub components: Vec<Component>,
    /// Every one of these must be known (`required`, all such blocks).
    pub required: Vec<i64>,
    /// At least one of these must be known, when any (`or_required`).
    pub or_required: Vec<i64>,
}

/// One `command = { type = … which = … value = … }` of an `effects` block
/// (§3.3); `when`, `where` and triggers are not kept yet.
#[derive(Debug, Clone, PartialEq)]
pub struct Command {
    /// `type`, lower case.
    pub kind: String,
    /// `which` as written (a word or a number).
    pub which: Option<String>,
    pub value: Option<f64>,
}

impl Command {
    fn from_block(b: &Block) -> Option<Self> {
        Some(Command {
            kind: b.get_str("type")?.to_ascii_lowercase(),
            which: b.get_str("which").map(str::to_owned),
            value: b.get_f64("value"),
        })
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct Techs {
    /// Commands of each application, by application ID, in file order.
    pub effects: BTreeMap<i64, Vec<Command>>,
    /// The applications by ID.
    pub apps: BTreeMap<i64, Application>,
    /// Application IDs of each category in load order: the game's nine
    /// category objects (`0xD4C378 + 0x54·k`, list `+0x46`), which the
    /// researchable filter walks.
    pub by_category: [Vec<i64>; 9],
}

impl Techs {
    /// Reads every file of [`TECH_FILES`]; a missing one is a warning.
    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> Self {
        let mut techs = Techs::default();
        for file in TECH_FILES {
            match load_script(vfs, file, warnings) {
                Ok(root) => techs.add(&root),
                Err(e) => warnings.push(Warning {
                    file: file.to_owned(),
                    line: 0,
                    message: e.to_string(),
                }),
            }
        }
        techs
    }

    /// Adds the applications of a file's `technology` groups; IDs already
    /// known keep their first definition.
    pub fn add(&mut self, root: &Block) {
        for group in blocks(root, "technology") {
            let category = group
                .get_str("category")
                .and_then(category_index)
                .unwrap_or(0);
            for app in blocks(group, "application") {
                let Some(id) = app.get_i64("id") else {
                    continue;
                };
                if self.apps.contains_key(&id) {
                    continue;
                }
                let commands = blocks(app, "effects")
                    .flat_map(|e| blocks(e, "command"))
                    .filter_map(Command::from_block)
                    .collect();
                self.effects.entry(id).or_insert(commands);
                let ids =
                    |key: &str| -> Vec<i64> { blocks(app, key).flat_map(|b| b.ints()).collect() };
                let components = blocks(app, "component")
                    .take(MAX_COMPONENTS)
                    .map(|c| Component {
                        kind: c
                            .get_str("type")
                            .and_then(speciality_index)
                            .unwrap_or(GENERAL_EQUIPMENT),
                        difficulty: atoi(c.get_str("difficulty")),
                        double_time: c
                            .get_str("double_time")
                            .is_some_and(|v| v.eq_ignore_ascii_case("yes")),
                    })
                    .collect();
                self.apps.insert(
                    id,
                    Application {
                        id,
                        name: app.get_str("name").unwrap_or_default().to_owned(),
                        category,
                        year: atoi(app.get_str("year")),
                        components,
                        required: ids("required"),
                        or_required: ids("or_required"),
                    },
                );
                self.by_category[category].push(id);
            }
        }
    }

    /// Commands of an application; none for an unknown ID.
    pub fn commands(&self, id: i64) -> &[Command] {
        self.effects.get(&id).map_or(&[], Vec::as_slice)
    }

    pub fn app(&self, id: i64) -> Option<&Application> {
        self.apps.get(&id)
    }
}

fn blocks<'a>(b: &'a Block, key: &'a str) -> impl Iterator<Item = &'a Block> + 'a {
    b.get_all(key).filter_map(|v| v.as_block())
}

/// C `atoi`: leading sign and digits, else 0.
fn atoi(s: Option<&str>) -> i32 {
    let s = s.unwrap_or("").trim_start();
    let (sign, digits) = match s.strip_prefix('-') {
        Some(rest) => (-1, rest),
        None => (1, s.strip_prefix('+').unwrap_or(s)),
    };
    let end = digits
        .find(|c: char| !c.is_ascii_digit())
        .unwrap_or(digits.len());
    digits[..end].parse::<i32>().map_or(0, |v| sign * v)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn keeps_the_commands_of_each_application() {
        let mut techs = Techs::default();
        techs.add(
            &dh_text::script::parse_str(
                "technology = { id = 5 category = industry
                   application = { id = 5080 name = X
                     component = { id = 5081 type = management difficulty = 5 }
                     effects = { command = { type = Allow_Dig_In }
                                 command = { type = allow_building which = land_fort } } }
                   application = { id = 5350 effects = { command = { type = surprise which = land value = 15 } } }
                   application = { id = 5090 } }",
            )
            .root,
        );
        // A second definition of 5080 is ignored.
        techs.add(
            &dh_text::script::parse_str(
                "technology = { application = { id = 5080 effects = { command = { type = coal } } } }",
            )
            .root,
        );
        let kinds: Vec<&str> = techs
            .commands(5080)
            .iter()
            .map(|c| c.kind.as_str())
            .collect();
        assert_eq!(kinds, ["allow_dig_in", "allow_building"]);
        assert_eq!(techs.commands(5080)[1].which.as_deref(), Some("land_fort"));
        assert_eq!(
            techs.commands(5350),
            [Command {
                kind: "surprise".into(),
                which: Some("land".into()),
                value: Some(15.0),
            }]
        );
        assert!(techs.commands(5090).is_empty());
        assert!(techs.commands(1).is_empty());
    }

    #[test]
    fn applications_keep_what_research_needs() {
        let mut techs = Techs::default();
        techs.add(
            &dh_text::script::parse_str(
                "technology = { id = 5 category = Industry
                   application = { id = 5050 name = TECH_APP_INDUSTRY_5_NAME year = 1936
                     component = { id = 5051 type = chemistry difficulty = 5 }
                     component = { id = 5055 type = Industrial_Engineering difficulty = 7 double_time = yes }
                     component = { id = 5056 type = no_such_type difficulty = 2x }
                     component = { type = rt_user_60 }
                     component = { type = rocketry } component = { type = rocketry }
                     component = { type = rocketry } component = { type = artillery }
                     required = { }
                     effects = { command = { type = industrial_modifier which = total value = 5 } } }
                   application = { id = 5060 year = 1937
                     required = { 5050 } required = { 5040 } or_required = { 1 2 } } }
                 technology = { category = air_doctrines application = { id = 9010 } }",
            )
            .root,
        );
        let a = techs.app(5050).unwrap();
        assert_eq!((a.category, a.year), (4, 1936));
        assert_eq!(a.name, "TECH_APP_INDUSTRY_5_NAME");
        assert_eq!(a.components.len(), MAX_COMPONENTS, "the eighth is dropped");
        assert_eq!(
            a.components[..2],
            [
                Component {
                    kind: 3,
                    difficulty: 5,
                    double_time: false
                },
                Component {
                    kind: 12,
                    difficulty: 7,
                    double_time: true
                }
            ]
        );
        assert_eq!(a.components[1].points(), 200);
        // Unknown types are general equipment; `difficulty` reads like `atoi`.
        assert_eq!((a.components[2].kind, a.components[2].difficulty), (5, 2));
        assert_eq!(a.components[3].kind, 108);
        assert!(a.required.is_empty() && a.or_required.is_empty());
        let b = techs.app(5060).unwrap();
        assert_eq!(b.required, [5050, 5040]);
        assert_eq!(b.or_required, [1, 2]);
        assert_eq!(techs.by_category[4], [5050, 5060]);
        assert_eq!(techs.by_category[8], [9010]);
        assert_eq!(speciality_index("nuclear_engineering"), Some(10));
        assert_eq!(speciality_index("rt_user_1"), Some(49));
        assert_eq!(speciality_index("rt_user_61"), None);
    }
}
