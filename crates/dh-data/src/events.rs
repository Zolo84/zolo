//! Events: the event files a scenario names (`event = "db\events\….txt"`
//! lines of the `.eug` and of the files it includes), each event's
//! trigger tree, dates and actions with their commands (reverse-engineering
//! notes `re/events/events.md` §1, §3, §4.1, §5.1, with the corrections of
//! their independent review `events-verify.md`).
//!
//! The game reads a file with `0x6FFA60`: the mod's copy when there is one
//! (the [`Vfs`] layers it), a missing file is only logged ("missing
//! eventdatabase"); top-level `event = { … }` blocks become events (parser
//! `0x70F080`), `include = "…"` reads another event file in place, and
//! anything else ends the file there ("unknown data defined in event
//! database", `0x6FFCB2`). Keys are case-insensitive. An event's actions
//! (`action_a` … `action_d` and `action`) are kept in file order: the
//! letter is only a name, an action's index is its position.
//!
//! Triggers are typed for the keys the notes trace ([`Trigger`]); a key the
//! game knows but whose evaluation is not traced is kept as
//! [`Trigger::Unknown`], and a key the game does not know at all (such as
//! `hour`) creates no node, as in `0x72B8F0` ("Unknown trigger type");
//! those are counted in [`EventDb::dropped_triggers`].

use crate::{load_script, Vfs, Warning};
use dh_text::{Block, Item, Value};
use std::collections::BTreeMap;

/// Trigger keys the game's trigger parser (`0x72B8F0`) knows, lower case
/// (`re/events/trigmap.txt`, and `under_attack`, token 0x10, case
/// `0x72B976`); a key outside them and the division types creates no node.
pub const TRIGGER_KEYS: [&str; 95] = [
    "under_attack",
    "convoypool",
    "escortpool",
    "is_tech_active",
    "attack",
    "dissent",
    "range",
    "ic",
    "puppet",
    "ispuppet",
    "country",
    "core",
    "province_revoltrisk",
    "money",
    "year",
    "month",
    "day",
    "control",
    "major",
    "capital",
    "leader",
    "relation",
    "war",
    "atwar",
    "alliance",
    "air",
    "trade",
    "embargo",
    "non_aggression",
    "participant",
    "owned",
    "continent",
    "exists",
    "manpower",
    "land_percentage",
    "naval_percentage",
    "air_percentage",
    "vp",
    "division_in_province",
    "event",
    "ai",
    "area",
    "region",
    "allies",
    "axis",
    "comintern",
    "rare_materials",
    "energy",
    "metal",
    "oil",
    "army",
    "navy",
    "policy",
    "minister",
    "guarantee",
    "belligerence",
    "access",
    "difficulty",
    "technology",
    "tech_team",
    "intelligence",
    "supplies",
    "nuke",
    "domestic",
    "building",
    "flag",
    "local_flag",
    "and",
    "or",
    "not",
    "can_change_policy",
    "headofstate",
    "headofgovernment",
    "incabinet",
    "random",
    "intel_diff",
    "government",
    "nuclear_reactor",
    "rocket_test",
    "ideology",
    "lost_vp",
    "lost_national",
    "lost_ic",
    "garrison",
    "research_mod",
    "division_exists",
    "stockpile",
    "import",
    "export",
    "resource_shortage",
    "military_control",
    "nuked",
    "claims",
    "alliance_leader",
    "losses",
];

/// Most nested includes followed (the game has no limit; this only stops
/// a cycle).
const MAX_INCLUDE_DEPTH: usize = 16;

/// A date as an event stores it (`0x54EE70`, notes §5.3): the game's
/// calendar of twelve 30-day months, month and day zero-based. A missing
/// date is year 0.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash, Default)]
pub struct EventDate {
    pub year: i32,
    /// 0..=11 for month names; a number is taken as written (`atoi`).
    pub month: i32,
    /// 0..=29: `day` is clamped (`day = 30` is the 30th, index 29).
    pub day: i32,
    /// 0..=23 (clamped).
    pub hour: i32,
}

impl EventDate {
    /// Reads `{ year = … month = … day = … hour = … }`: `month` is a name
    /// (`january` … `december` → 0..=11) or `atoi`, `day` is clamped to
    /// 0..=29 and `hour` to 0..=23; a missing key is 0.
    pub fn from_block(b: &Block) -> Self {
        let month = match b.get_str("month") {
            Some(m) => crate::date::month_from_name(m)
                .map(|n| i32::from(n) - 1)
                .unwrap_or_else(|| atoi(m) as i32),
            None => 0,
        };
        EventDate {
            year: atoi(b.get_str("year").unwrap_or("")) as i32,
            month,
            day: (atoi(b.get_str("day").unwrap_or("")) as i32).clamp(0, 29),
            hour: (atoi(b.get_str("hour").unwrap_or("")) as i32).clamp(0, 23),
        }
    }

    /// Whether the date is set (year above 0).
    pub fn is_set(&self) -> bool {
        self.year > 0
    }

    /// Days since year 0 on the game's 360-day calendar.
    pub fn day_number(&self) -> i64 {
        (i64::from(self.year) * 12 + i64::from(self.month)) * 30 + i64::from(self.day)
    }
}

/// The argument of `ai`, `atwar` and `ispuppet`: `yes`, `no` or a
/// country tag (upper case).
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Subject {
    Yes,
    No,
    Tag(String),
}

impl Subject {
    fn parse(s: &str) -> Self {
        if s.eq_ignore_ascii_case("yes") {
            Subject::Yes
        } else if s.eq_ignore_ascii_case("no") {
            Subject::No
        } else {
            Subject::Tag(s.to_ascii_uppercase())
        }
    }
}

/// `flag = name` / `flag = { which = name when = W value = V }`
/// (`0x7330B0`): compare the flag's value `cur` with `value` by `when`:
/// −2 `cur < V`, −1 `cur <= V`, 0 `cur == V`, 1 `cur >= V`, 2 `cur > V`,
/// anything else false. Both default to 1.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct FlagTest {
    pub name: String,
    pub when: i64,
    pub value: i64,
}

impl FlagTest {
    pub fn holds(&self, cur: i64) -> bool {
        match self.when {
            -2 => cur < self.value,
            -1 => cur <= self.value,
            0 => cur == self.value,
            1 => cur >= self.value,
            2 => cur > self.value,
            _ => false,
        }
    }
}

/// The relations `{ country = A country = B }` test (notes §3.3).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PairKind {
    Alliance,
    War,
    Access,
    NonAggression,
    Guarantee,
    Trade,
    /// A is a puppet of B.
    Puppet,
}

/// `data` of `control` / `owned` and `country` of `garrison` (notes §3.4).
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Whose {
    /// A country tag.
    Tag(String),
    /// The country the event is checked for (`-1`, `0` for provinces, or
    /// missing).
    This,
    /// Anybody (`garrison` with `country = 0`).
    Any,
    /// At war with the country and without a non-aggression pact (`-2`).
    Enemy,
    /// Friendly to the country (`-3`).
    Friendly,
}

impl Whose {
    /// `zero_is_any`: `garrison` reads 0 as anybody, `control` / `owned`
    /// as the country itself.
    fn parse(s: Option<&str>, zero_is_any: bool) -> Self {
        let Some(s) = s.map(str::trim) else {
            return Whose::This;
        };
        match s.parse::<i64>() {
            Ok(0) if zero_is_any => Whose::Any,
            Ok(-2) => Whose::Enemy,
            Ok(-3) => Whose::Friendly,
            Ok(_) => Whose::This,
            Err(_) => Whose::Tag(s.to_ascii_uppercase()),
        }
    }
}

/// Unit kind a `garrison` counts.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum GarrisonKind {
    All,
    Land,
    Air,
    Naval,
}

/// `garrison = { country = X province = P type = … size = N area = A }`
/// (`0x73AB90`).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Garrison {
    pub owner: Whose,
    pub province: i64,
    pub kind: GarrisonKind,
    /// Divisions needed (default 0).
    pub size: i64,
    /// 0: the province; 1 its area, 2 its region, 3 a list (not traced).
    pub area: i64,
}

/// A trigger node (notes §3). Leaves test the country the event is
/// checked for, `C`.
#[derive(Debug, Clone, PartialEq)]
pub enum Trigger {
    /// Every child holds; empty holds (also an event's top level).
    And(Vec<Trigger>),
    /// Some child holds; empty fails.
    Or(Vec<Trigger>),
    /// No child holds (NOR); empty holds.
    Not(Vec<Trigger>),
    /// Current year, month (0..=11) or day (0..=29) at least N.
    Year(i64),
    Month(i64),
    Day(i64),
    /// `C.dissent >= N`.
    Dissent(f64),
    /// `rand() % 100 <= N` after reseeding from a real-time counter.
    Random(i64),
    /// `ai = yes/no` (C is AI-controlled) / `ai = TAG`.
    Ai(Subject),
    /// `atwar = yes/no` (C at war with anyone) / `atwar = TAG` (TAG at war
    /// with anyone).
    AtWar(Subject),
    /// `ispuppet = yes` (C has an overlord) / `= TAG`; `= no` never holds.
    IsPuppet(Subject),
    Exists(String),
    /// C is this country.
    Country(String),
    /// `event = N`: N has happened (it is in the history and not slept).
    Event(i64),
    /// `event = { id = N days = D }`: N fired with `save_date` at least D
    /// days ago.
    EventDays {
        id: i64,
        days: i64,
    },
    Flag(FlagTest),
    LocalFlag(FlagTest),
    /// Minister ID exists, has started and is alive (any country).
    Minister(i64),
    /// Leader ID is alive, awake and assigned (any country).
    Leader(i64),
    HeadOfState(i64),
    HeadOfGovernment(i64),
    InCabinet(i64),
    /// `government = fascist/communist/democratic` or `{ type country }`.
    Government {
        kind: String,
        country: Option<String>,
    },
    /// `ideology = name` or `{ type country }`.
    Ideology {
        kind: String,
        country: Option<String>,
    },
    /// `{ country = A country = B }`; a missing country is C.
    Pair {
        kind: PairKind,
        first: Option<String>,
        second: Option<String>,
    },
    /// `control` (`owned: false`) or `owned = { province = P data = X }`.
    Province {
        owned: bool,
        province: i64,
        whose: Whose,
    },
    Garrison(Garrison),
    /// `C.manpower > N` (strictly).
    Manpower(f64),
    /// The technology is known (by `country`, else C).
    Technology {
        country: Option<String>,
        id: i64,
    },
    /// The technology is not deactivated for C.
    IsTechActive(i64),
    /// Relation of C towards `which` at least `value`.
    Relation {
        which: Option<String>,
        value: f64,
    },
    Difficulty(i64),
    /// Policy slider (1..=10 scale of the files) at least `value`.
    Domestic {
        slider: String,
        value: f64,
    },
    CanChangePolicy {
        slider: String,
        value: f64,
    },
    /// Belligerence of `country` (else C) at least `value`.
    Belligerence {
        country: Option<String>,
        value: f64,
    },
    /// TAG is at war, attacking C.
    Attack(String),
    /// `under_attack = TAG` (`0x739450`): TAG (C when the tag is not a
    /// country) exists, is at war and defends in some war.
    UnderAttack(String),
    /// Share (percent) of `country`'s owned national provinces it does not
    /// control.
    LostNational {
        country: Option<String>,
        value: f64,
    },
    LandPercentage {
        country: Option<String>,
        value: f64,
    },
    /// `<division type> = N`: divisions of that type (evaluation not
    /// traced).
    Divisions {
        kind: String,
        value: Value,
    },
    /// A key the game knows whose evaluation is not traced.
    Unknown {
        key: String,
        value: Value,
    },
}

impl Trigger {
    /// The children of a trigger block (`0x72B8F0`); unknown keys go to
    /// `dropped`.
    pub fn parse_block(b: &Block, dropped: &mut BTreeMap<String, usize>) -> Vec<Trigger> {
        b.fields()
            .filter_map(|f| Trigger::parse(&f.key, &f.value, dropped))
            .collect()
    }

    fn parse(key: &str, value: &Value, dropped: &mut BTreeMap<String, usize>) -> Option<Trigger> {
        let key = key.to_ascii_lowercase();
        let scalar = value.as_scalar().map(|s| s.as_str());
        let block = value.as_block();
        let int = || atoi(scalar.unwrap_or(""));
        let float = || atof(scalar.unwrap_or(""));
        let tag = || scalar.unwrap_or("").to_ascii_uppercase();
        let get = |k: &str| block.and_then(|b| b.get_str(k));
        let country = || get("country").map(str::to_ascii_uppercase);
        let children = |dropped: &mut BTreeMap<String, usize>| {
            block.map_or_else(Vec::new, |b| Trigger::parse_block(b, dropped))
        };
        let pair = |kind| {
            let mut tags = block
                .into_iter()
                .flat_map(|b| b.get_all("country"))
                .filter_map(|v| Some(v.as_scalar()?.as_str().to_ascii_uppercase()));
            Trigger::Pair {
                kind,
                first: tags.next(),
                second: tags.next(),
            }
        };
        let kind_and_country = || match block {
            Some(b) => (
                b.get_str("type").unwrap_or("").to_ascii_lowercase(),
                b.get_str("country").map(str::to_ascii_uppercase),
            ),
            None => (scalar.unwrap_or("").to_ascii_lowercase(), None),
        };
        let country_value = || (country(), atof(get("value").unwrap_or("")));
        let t = match key.as_str() {
            "and" => Trigger::And(children(dropped)),
            "or" => Trigger::Or(children(dropped)),
            "not" => Trigger::Not(children(dropped)),
            "year" => Trigger::Year(int()),
            "month" => Trigger::Month(
                scalar
                    .and_then(crate::date::month_from_name)
                    .map_or_else(int, |m| i64::from(m) - 1),
            ),
            "day" => Trigger::Day(int()),
            "dissent" => Trigger::Dissent(float()),
            "random" => Trigger::Random(int()),
            "ai" => Trigger::Ai(Subject::parse(scalar.unwrap_or(""))),
            "atwar" => Trigger::AtWar(Subject::parse(scalar.unwrap_or(""))),
            "ispuppet" => Trigger::IsPuppet(Subject::parse(scalar.unwrap_or(""))),
            "exists" => Trigger::Exists(tag()),
            "country" => Trigger::Country(tag()),
            "event" => match block {
                Some(b) => Trigger::EventDays {
                    id: atoi(b.get_str("id").unwrap_or("")),
                    days: atoi(b.get_str("days").unwrap_or("")),
                },
                None => Trigger::Event(int()),
            },
            "flag" | "local_flag" => {
                let test = match block {
                    Some(b) => FlagTest {
                        name: b.get_str("which").unwrap_or("").to_owned(),
                        when: b.get_str("when").map_or(1, atoi),
                        value: b.get_str("value").map_or(1, atoi),
                    },
                    None => FlagTest {
                        name: scalar.unwrap_or("").to_owned(),
                        when: 1,
                        value: 1,
                    },
                };
                if key == "flag" {
                    Trigger::Flag(test)
                } else {
                    Trigger::LocalFlag(test)
                }
            }
            "minister" => Trigger::Minister(int()),
            "leader" => Trigger::Leader(int()),
            "headofstate" => Trigger::HeadOfState(int()),
            "headofgovernment" => Trigger::HeadOfGovernment(int()),
            "incabinet" => Trigger::InCabinet(int()),
            "government" => {
                let (kind, country) = kind_and_country();
                Trigger::Government { kind, country }
            }
            "ideology" => {
                let (kind, country) = kind_and_country();
                Trigger::Ideology { kind, country }
            }
            "alliance" => pair(PairKind::Alliance),
            "war" => pair(PairKind::War),
            "access" => pair(PairKind::Access),
            "non_aggression" => pair(PairKind::NonAggression),
            "guarantee" => pair(PairKind::Guarantee),
            "trade" => pair(PairKind::Trade),
            "puppet" => pair(PairKind::Puppet),
            "control" | "owned" => Trigger::Province {
                owned: key == "owned",
                province: atoi(get("province").unwrap_or("")),
                whose: Whose::parse(get("data"), false),
            },
            "garrison" => Trigger::Garrison(Garrison {
                owner: Whose::parse(get("country"), true),
                province: atoi(get("province").unwrap_or("")),
                kind: match get("type").map(str::to_ascii_lowercase).as_deref() {
                    Some("land") => GarrisonKind::Land,
                    Some("air") => GarrisonKind::Air,
                    Some("naval") => GarrisonKind::Naval,
                    _ => GarrisonKind::All,
                },
                size: atoi(get("size").unwrap_or("")),
                area: match get("area") {
                    Some(a) if a.eq_ignore_ascii_case("yes") => 1,
                    Some(a) => atoi(a),
                    None => 0,
                },
            }),
            "manpower" => Trigger::Manpower(float()),
            "technology" => match block {
                Some(b) => Trigger::Technology {
                    country: country(),
                    id: atoi(b.get_str("value").unwrap_or("")),
                },
                None => Trigger::Technology {
                    country: None,
                    id: int(),
                },
            },
            "is_tech_active" => Trigger::IsTechActive(int()),
            "relation" => Trigger::Relation {
                which: get("which").map(str::to_ascii_uppercase),
                value: atof(get("value").unwrap_or("")),
            },
            "difficulty" => Trigger::Difficulty(int()),
            "domestic" | "can_change_policy" => {
                let slider = get("type").unwrap_or("").to_ascii_lowercase();
                let value = atof(get("value").unwrap_or(""));
                if key == "domestic" {
                    Trigger::Domestic { slider, value }
                } else {
                    Trigger::CanChangePolicy { slider, value }
                }
            }
            "belligerence" => {
                let (country, value) = country_value();
                Trigger::Belligerence { country, value }
            }
            "attack" => Trigger::Attack(tag()),
            "under_attack" => Trigger::UnderAttack(tag()),
            "lost_national" => {
                let (country, value) = country_value();
                Trigger::LostNational { country, value }
            }
            "land_percentage" => {
                let (country, value) = country_value();
                Trigger::LandPercentage { country, value }
            }
            k if TRIGGER_KEYS.contains(&k) => Trigger::Unknown {
                key,
                value: value.clone(),
            },
            k if crate::unitdb::DIVISION_TYPES.contains(&k) => Trigger::Divisions {
                kind: key,
                value: value.clone(),
            },
            _ => {
                *dropped.entry(key).or_default() += 1;
                return None;
            }
        };
        Some(t)
    }

    /// The trigger's key (`and`, `flag`, …; a division type or the
    /// unknown key itself).
    pub fn key(&self) -> &str {
        match self {
            Trigger::And(_) => "and",
            Trigger::Or(_) => "or",
            Trigger::Not(_) => "not",
            Trigger::Year(_) => "year",
            Trigger::Month(_) => "month",
            Trigger::Day(_) => "day",
            Trigger::Dissent(_) => "dissent",
            Trigger::Random(_) => "random",
            Trigger::Ai(_) => "ai",
            Trigger::AtWar(_) => "atwar",
            Trigger::IsPuppet(_) => "ispuppet",
            Trigger::Exists(_) => "exists",
            Trigger::Country(_) => "country",
            Trigger::Event(_) | Trigger::EventDays { .. } => "event",
            Trigger::Flag(_) => "flag",
            Trigger::LocalFlag(_) => "local_flag",
            Trigger::Minister(_) => "minister",
            Trigger::Leader(_) => "leader",
            Trigger::HeadOfState(_) => "headofstate",
            Trigger::HeadOfGovernment(_) => "headofgovernment",
            Trigger::InCabinet(_) => "incabinet",
            Trigger::Government { .. } => "government",
            Trigger::Ideology { .. } => "ideology",
            Trigger::Pair { kind, .. } => match kind {
                PairKind::Alliance => "alliance",
                PairKind::War => "war",
                PairKind::Access => "access",
                PairKind::NonAggression => "non_aggression",
                PairKind::Guarantee => "guarantee",
                PairKind::Trade => "trade",
                PairKind::Puppet => "puppet",
            },
            Trigger::Province { owned: true, .. } => "owned",
            Trigger::Province { owned: false, .. } => "control",
            Trigger::Garrison(_) => "garrison",
            Trigger::Manpower(_) => "manpower",
            Trigger::Technology { .. } => "technology",
            Trigger::IsTechActive(_) => "is_tech_active",
            Trigger::Relation { .. } => "relation",
            Trigger::Difficulty(_) => "difficulty",
            Trigger::Domestic { .. } => "domestic",
            Trigger::CanChangePolicy { .. } => "can_change_policy",
            Trigger::Belligerence { .. } => "belligerence",
            Trigger::Attack(_) => "attack",
            Trigger::UnderAttack(_) => "under_attack",
            Trigger::LostNational { .. } => "lost_national",
            Trigger::LandPercentage { .. } => "land_percentage",
            Trigger::Divisions { kind, .. } => kind,
            Trigger::Unknown { key, .. } => key,
        }
    }
}

/// One `command = { … }` of an action (`0x70BFB0`, notes §5.1). The
/// parameters keep their text: the game turns a country tag into its
/// index and reads the rest by the command's type (names of sliders,
/// resources, unit types…) or with `atof`.
#[derive(Debug, Clone, PartialEq)]
pub struct Command {
    /// `type`, lower case.
    pub kind: String,
    pub which: Option<String>,
    pub value: Option<String>,
    pub when: Option<String>,
    pub where_: Option<String>,
    /// The command's own `trigger` (`cmd+0x13E`): a false one makes the
    /// command invalid.
    pub trigger: Option<Trigger>,
    pub line: u32,
}

impl Command {
    fn from_block(b: &Block, line: u32, dropped: &mut BTreeMap<String, usize>) -> Self {
        let text = |k: &str| b.get_str(k).map(str::to_owned);
        let triggers: Vec<Trigger> = b
            .get_all("trigger")
            .filter_map(|v| v.as_block())
            .flat_map(|t| Trigger::parse_block(t, dropped))
            .collect();
        let has_trigger = b.get_all("trigger").any(|v| v.as_block().is_some());
        Command {
            kind: b.get_str("type").unwrap_or("").to_ascii_lowercase(),
            which: text("which"),
            value: text("value"),
            when: text("when"),
            where_: text("where"),
            trigger: has_trigger.then_some(Trigger::And(triggers)),
            line,
        }
    }

    /// `which` as a number (`atof`; 0 when missing or not a number).
    pub fn which_num(&self) -> f64 {
        atof(self.which.as_deref().unwrap_or(""))
    }

    /// `value` as a number (`atof`).
    pub fn value_num(&self) -> f64 {
        atof(self.value.as_deref().unwrap_or(""))
    }

    pub fn when_num(&self) -> f64 {
        atof(self.when.as_deref().unwrap_or(""))
    }

    pub fn where_num(&self) -> f64 {
        atof(self.where_.as_deref().unwrap_or(""))
    }

    /// The command as a technology's `effects` hold it, for the commands
    /// both kinds share.
    pub fn to_tech(&self) -> crate::tech::Command {
        crate::tech::Command {
            kind: self.kind.clone(),
            which: self.which.clone(),
            value: self.value.as_deref().and_then(|v| v.trim().parse().ok()),
        }
    }
}

/// An action (`0x710100`): `ai_chance` (−1 when missing), its name, an
/// optional trigger and its commands in file order.
#[derive(Debug, Clone, PartialEq)]
pub struct Action {
    pub name: String,
    pub ai_chance: i64,
    pub trigger: Option<Trigger>,
    pub commands: Vec<Command>,
}

impl Action {
    fn from_block(b: &Block, dropped: &mut BTreeMap<String, usize>) -> Self {
        let mut a = Action {
            name: String::new(),
            ai_chance: -1,
            trigger: None,
            commands: Vec::new(),
        };
        for f in b.fields() {
            match f.key.to_ascii_lowercase().as_str() {
                "ai_chance" => a.ai_chance = atoi(scalar(&f.value)),
                "name" => a.name = scalar(&f.value).to_owned(),
                "trigger" => {
                    if let Some(t) = f.value.as_block() {
                        let mut children = match a.trigger.take() {
                            Some(Trigger::And(c)) => c,
                            _ => Vec::new(),
                        };
                        children.extend(Trigger::parse_block(t, dropped));
                        a.trigger = Some(Trigger::And(children));
                    }
                }
                "command" => {
                    if let Some(c) = f.value.as_block() {
                        a.commands.push(Command::from_block(c, f.line, dropped));
                    }
                }
                // "unknown lhs in command": skipped.
                _ => {}
            }
        }
        a
    }
}

/// An event (object of 0x23C0 bytes, constructor `0x70C9F0`, parser
/// `0x70F080`; notes §1.2).
#[derive(Debug, Clone, PartialEq)]
pub struct Event {
    pub id: i64,
    /// The file it comes from and the line of its `event` key.
    pub file: String,
    pub line: u32,
    pub name: String,
    pub desc: String,
    /// Default `events_empty`.
    pub picture: String,
    pub style: i64,
    /// `country`: only this country (upper case); none means any.
    pub country: Option<String>,
    /// `tag` list: these countries, when there is no `country`.
    pub tags: Vec<String>,
    /// `all = yes` (used by the `trigger` command).
    pub all: bool,
    /// The top-level trigger: [`Trigger::And`], empty holds.
    pub trigger: Trigger,
    pub date: EventDate,
    pub deathdate: EventDate,
    /// Days (`atoi`).
    pub offset: i64,
    pub random: bool,
    pub persistent: bool,
    pub invention: bool,
    /// `province` (−1 when missing).
    pub province: i64,
    /// `save_date = yes`: the day it fires is kept for
    /// `event = { id days }`.
    pub save_date: bool,
    pub one_action: bool,
    /// `name = "AI_EVENT"`: no news or logs.
    pub ai_event: bool,
    /// In file order (`action_a` … `action_d`, `action`).
    pub actions: Vec<Action>,
}

impl Event {
    fn new(file: &str, line: u32) -> Self {
        Event {
            id: 0,
            file: file.to_owned(),
            line,
            name: String::new(),
            desc: String::new(),
            picture: "events_empty".to_owned(),
            style: 0,
            country: None,
            tags: Vec::new(),
            all: false,
            trigger: Trigger::And(Vec::new()),
            date: EventDate::default(),
            deathdate: EventDate::default(),
            offset: 0,
            random: false,
            persistent: false,
            invention: false,
            province: -1,
            save_date: false,
            one_action: false,
            ai_event: false,
            actions: Vec::new(),
        }
    }

    /// Parses an `event = { … }` block. An unknown key ("unknown lhs in
    /// game-event") ends the parse there (`0x70F080` returns −2; the
    /// event is still added), with a warning.
    pub fn from_block(
        b: &Block,
        file: &str,
        line: u32,
        dropped: &mut BTreeMap<String, usize>,
        warnings: &mut Vec<Warning>,
    ) -> Self {
        let mut e = Event::new(file, line);
        let yes = |v: &Value| scalar(v).eq_ignore_ascii_case("yes");
        for f in b.fields() {
            let key = f.key.to_ascii_lowercase();
            match key.as_str() {
                "id" => e.id = atoi(scalar(&f.value)),
                "name" => {
                    e.name = scalar(&f.value).to_owned();
                    e.ai_event = e.name == "AI_EVENT";
                }
                "desc" => e.desc = scalar(&f.value).to_owned(),
                "picture" => e.picture = scalar(&f.value).to_owned(),
                "style" => e.style = atoi(scalar(&f.value)),
                "province" => e.province = atoi(scalar(&f.value)),
                "persistent" => e.persistent = yes(&f.value),
                "invention" => e.invention = yes(&f.value),
                "random" => e.random = yes(&f.value),
                "save_date" => e.save_date = yes(&f.value),
                "one_action" => e.one_action = yes(&f.value),
                "all" => e.all = yes(&f.value),
                "offset" => e.offset = atoi(scalar(&f.value)),
                "date" | "deathdate" => {
                    let d = f
                        .value
                        .as_block()
                        .map(EventDate::from_block)
                        .unwrap_or_default();
                    if key == "date" {
                        e.date = d;
                    } else {
                        e.deathdate = d;
                    }
                }
                "country" => {
                    let tag = scalar(&f.value).trim();
                    e.country = (!tag.is_empty()).then(|| tag.to_ascii_uppercase());
                }
                "tag" => match &f.value {
                    Value::Block(list) => e.tags.extend(
                        list.values()
                            .filter_map(|v| Some(v.as_scalar()?.as_str().to_ascii_uppercase())),
                    ),
                    Value::Scalar(s) => e.tags.push(s.as_str().to_ascii_uppercase()),
                },
                "trigger" => {
                    if let (Some(t), Trigger::And(children)) = (f.value.as_block(), &mut e.trigger)
                    {
                        children.extend(Trigger::parse_block(t, dropped));
                    }
                }
                "action_a" | "action_b" | "action_c" | "action_d" | "action" => {
                    if let Some(a) = f.value.as_block() {
                        e.actions.push(Action::from_block(a, dropped));
                    }
                }
                // Decisions are off in the shipped `misc.txt` (`mod[16]`);
                // without them these keys change nothing.
                "decision" | "decision_trigger" | "decision_desc" | "decision_picture" => {}
                _ => {
                    warnings.push(Warning {
                        file: file.to_owned(),
                        line: f.line,
                        message: format!("unknown lhs in game-event {}: {}", e.id, f.key),
                    });
                    break;
                }
            }
        }
        e
    }

    /// When it stops being scheduled (`0x711D10`): the `deathdate` when
    /// it is after the date, else the date plus `offset` days.
    pub fn last_day(&self) -> i64 {
        if self.deathdate > self.date {
            self.deathdate.day_number()
        } else {
            self.date.day_number() + self.offset
        }
    }

    /// Year of [`Event::last_day`] (0 when neither date is set).
    pub fn last_year(&self) -> i64 {
        if self.deathdate > self.date {
            i64::from(self.deathdate.year)
        } else {
            (self.date.day_number() + self.offset).div_euclid(360)
        }
    }
}

/// The events of a scenario in load order (the manager's list `M+0x08`).
#[derive(Debug, Clone, Default)]
pub struct EventDb {
    pub events: Vec<Event>,
    /// Every file named, in order, including missing ones (`M.files`).
    pub files: Vec<String>,
    /// Files that could not be read.
    pub missing: Vec<String>,
    /// Trigger keys the game does not know, with how often they occur
    /// (no node is created for them).
    pub dropped_triggers: BTreeMap<String, usize>,
    by_id: BTreeMap<i64, usize>,
}

impl EventDb {
    /// Loads the files named by `event = "…"` items of a scenario's root
    /// (its includes spliced in, as [`crate::Scenario::load`] keeps it),
    /// in order.
    pub fn load(vfs: &Vfs, scenario_root: &Block, warnings: &mut Vec<Warning>) -> Self {
        let mut db = EventDb::default();
        for f in scenario_root.fields() {
            if f.key.eq_ignore_ascii_case("event") {
                if let Some(path) = f.value.as_scalar() {
                    db.load_file(vfs, path.as_str(), warnings);
                }
            }
        }
        db
    }

    /// Reads one event file and the files it includes (`0x6FFA60`).
    pub fn load_file(&mut self, vfs: &Vfs, path: &str, warnings: &mut Vec<Warning>) {
        self.load_nested(vfs, path, 0, warnings);
    }

    fn load_nested(&mut self, vfs: &Vfs, path: &str, depth: usize, warnings: &mut Vec<Warning>) {
        self.files.push(path.to_owned());
        if depth > MAX_INCLUDE_DEPTH {
            warnings.push(Warning {
                file: path.to_owned(),
                line: 0,
                message: "event includes nested too deeply".into(),
            });
            return;
        }
        let root = match load_script(vfs, path, warnings) {
            Ok(root) => root,
            Err(_) => {
                self.missing.push(path.to_owned());
                warnings.push(Warning {
                    file: path.to_owned(),
                    line: 0,
                    message: format!("missing eventdatabase:{path}"),
                });
                return;
            }
        };
        for item in &root.items {
            let Item::Field(f) = item else { continue };
            if f.key.eq_ignore_ascii_case("event") {
                if let Some(b) = f.value.as_block() {
                    let e =
                        Event::from_block(b, path, f.line, &mut self.dropped_triggers, warnings);
                    self.push(e);
                }
            } else if f.key.eq_ignore_ascii_case("include") {
                if let Some(inner) = f.value.as_scalar() {
                    self.load_nested(vfs, inner.as_str(), depth + 1, warnings);
                }
            } else {
                warnings.push(Warning {
                    file: path.to_owned(),
                    line: f.line,
                    message: format!("unknown data defined in event database: {}", f.key),
                });
                break;
            }
        }
    }

    /// Parses event blocks from text (for tests and tools).
    pub fn add_text(&mut self, file: &str, text: &str, warnings: &mut Vec<Warning>) {
        let doc = dh_text::script::parse_str(text);
        for f in doc.root.fields() {
            if let (true, Some(b)) = (f.key.eq_ignore_ascii_case("event"), f.value.as_block()) {
                let e = Event::from_block(b, file, f.line, &mut self.dropped_triggers, warnings);
                self.push(e);
            }
        }
    }

    /// Appends an event (`0x700D50` keeps every one; a lookup by ID finds
    /// the first, assumed: the notes leave first or last open).
    pub fn push(&mut self, e: Event) {
        self.by_id.entry(e.id).or_insert(self.events.len());
        self.events.push(e);
    }

    /// Index of the event with this ID.
    pub fn index_of(&self, id: i64) -> Option<usize> {
        self.by_id.get(&id).copied()
    }

    pub fn get(&self, id: i64) -> Option<&Event> {
        self.index_of(id).map(|i| &self.events[i])
    }

    /// Number of distinct IDs.
    pub fn distinct_ids(&self) -> usize {
        self.by_id.len()
    }
}

fn scalar(v: &Value) -> &str {
    v.as_scalar().map_or("", |s| s.as_str())
}

/// C `atoi`: leading blanks, sign and digits, else 0.
pub fn atoi(s: &str) -> i64 {
    let s = s.trim_start();
    let (sign, digits) = match s.strip_prefix('-') {
        Some(rest) => (-1, rest),
        None => (1, s.strip_prefix('+').unwrap_or(s)),
    };
    let end = digits
        .find(|c: char| !c.is_ascii_digit())
        .unwrap_or(digits.len());
    digits[..end].parse::<i64>().map_or(0, |v| sign * v)
}

/// C `atof`: the longest leading decimal number, else 0.
pub fn atof(s: &str) -> f64 {
    let s = s.trim_start();
    let b = s.as_bytes();
    let mut i = 0;
    if matches!(b.first(), Some(b'+' | b'-')) {
        i += 1;
    }
    let digits = |i: &mut usize| {
        let start = *i;
        while b.get(*i).is_some_and(u8::is_ascii_digit) {
            *i += 1;
        }
        *i > start
    };
    let mut any = digits(&mut i);
    if b.get(i) == Some(&b'.') {
        i += 1;
        any |= digits(&mut i);
    }
    if !any {
        return 0.0;
    }
    if matches!(b.get(i), Some(b'e' | b'E')) {
        let mut j = i + 1;
        if matches!(b.get(j), Some(b'+' | b'-')) {
            j += 1;
        }
        if digits(&mut j) {
            i = j;
        }
    }
    s[..i].parse().unwrap_or(0.0)
}

#[cfg(test)]
mod tests {
    use super::*;

    const RHINELAND: &str = r#"
event = {
	id = 2060
	random = no
	country = GER
	trigger = {
		ai = yes
		NOT = {
			war = { country = GER country = FRA }
			alliance = { country = GER country = FRA }
		}
		under_attack = FRA
		Hour = 3
	}
	name = "EVT_2000_NAME"
	desc = "EVT_2000_DESC"
	style = 0
	picture = "Rhineland"
	date = { day = 6 month = march year = 1936 }
	action_a = {
		name = "OK"
		command = { type = relation which = FRA value = -15 }
		command = { type = trigger which = 51 } # UK Gears up for war
		command = { type = ai which = "switch/GER_Rhine.ai" }
		command = { type = Domestic which = defense_lobby value = 1 trigger = { year = 1937 } }
	}
}
event = {
	id = 2061
	country = GER
	persistent = yes
	date = { day = 0 month = january year = 1936 }
	offset = 45
	deathdate = { day = 30 month = december year = 1963 }
	action_b = { name = B ai_chance = 30 command = { type = dissent value = 3 } }
	action_a = { name = A trigger = { flag = { which = x when = 0 value = 2 } } }
	ACTION = { }
	bogus = 1
	tag = { ITA }
}
"#;

    #[test]
    fn parses_events_with_triggers_and_actions() {
        let mut db = EventDb::default();
        let mut warnings = Vec::new();
        db.add_text("germany.txt", RHINELAND, &mut warnings);
        assert_eq!(db.events.len(), 2);
        let e = db.get(2060).unwrap();
        assert_eq!(e.country.as_deref(), Some("GER"));
        assert_eq!(
            e.date,
            EventDate {
                year: 1936,
                month: 2,
                day: 6,
                hour: 0
            }
        );
        assert!(!e.deathdate.is_set() && e.offset == 0 && !e.random && !e.persistent);
        assert_eq!(e.picture, "Rhineland");
        // `hour` is no trigger of the game: no node.
        let Trigger::And(top) = &e.trigger else {
            panic!("top level is an AND")
        };
        assert_eq!(top.len(), 3);
        assert_eq!(top[2], Trigger::UnderAttack("FRA".into()));
        assert_eq!(top[0], Trigger::Ai(Subject::Yes));
        assert_eq!(
            top[1],
            Trigger::Not(vec![
                Trigger::Pair {
                    kind: PairKind::War,
                    first: Some("GER".into()),
                    second: Some("FRA".into())
                },
                Trigger::Pair {
                    kind: PairKind::Alliance,
                    first: Some("GER".into()),
                    second: Some("FRA".into())
                },
            ])
        );
        assert_eq!(db.dropped_triggers.get("hour"), Some(&1));
        let a = &e.actions[0];
        assert_eq!((a.ai_chance, a.name.as_str()), (-1, "OK"));
        let kinds: Vec<_> = a.commands.iter().map(|c| c.kind.as_str()).collect();
        assert_eq!(kinds, ["relation", "trigger", "ai", "domestic"]);
        assert_eq!(a.commands[0].value_num(), -15.0);
        assert_eq!(a.commands[1].which_num(), 51.0);
        assert_eq!(a.commands[2].which.as_deref(), Some("switch/GER_Rhine.ai"));
        assert_eq!(
            a.commands[3].trigger,
            Some(Trigger::And(vec![Trigger::Year(1937)]))
        );

        // Actions in file order whatever their letter; `bogus` ends the
        // parse, so `tag` is lost.
        let e = db.get(2061).unwrap();
        assert!(e.persistent);
        assert_eq!(e.deathdate.day, 29, "day = 30 is clamped");
        let names: Vec<_> = e.actions.iter().map(|a| a.name.as_str()).collect();
        assert_eq!(names, ["B", "A", ""]);
        assert_eq!(e.actions[0].ai_chance, 30);
        assert_eq!(
            e.actions[1].trigger,
            Some(Trigger::And(vec![Trigger::Flag(FlagTest {
                name: "x".into(),
                when: 0,
                value: 2
            })]))
        );
        assert!(e.tags.is_empty());
        assert_eq!(warnings.len(), 1);
        assert!(warnings[0].message.contains("bogus"));
        // Last day: deathdate after the date.
        assert_eq!(e.last_day(), (1963 * 12 + 11) * 30 + 29);
        assert_eq!(db.get(2060).unwrap().last_year(), 1936);
    }

    #[test]
    fn typed_triggers() {
        let doc = dh_text::script::parse_str(
            "trigger = { year = 1938 month = june day = 3 flag = abc local_flag = { which = l when = -1 value = 4 }
               event = 12 event = { id = 5 days = 30 } control = { province = 75 data = -2 }
               owned = { province = 76 } garrison = { country = 0 province = 75 type = land size = 2 }
               technology = { country = ger value = 1010 } relation = { which = FRA value = 50 }
               ispuppet = no atwar = AUS major = yes carrier = 2 Hour = 5
               belligerence = { value = 10 } domestic = { type = Democratic value = 7 } }",
        );
        let mut dropped = BTreeMap::new();
        let t = Trigger::parse_block(doc.root.get_block("trigger").unwrap(), &mut dropped);
        let keys: Vec<_> = t.iter().map(Trigger::key).collect();
        assert_eq!(
            keys,
            [
                "year",
                "month",
                "day",
                "flag",
                "local_flag",
                "event",
                "event",
                "control",
                "owned",
                "garrison",
                "technology",
                "relation",
                "ispuppet",
                "atwar",
                "major",
                "carrier",
                "belligerence",
                "domestic"
            ]
        );
        assert_eq!(t[1], Trigger::Month(5));
        assert_eq!(
            t[4],
            Trigger::LocalFlag(FlagTest {
                name: "l".into(),
                when: -1,
                value: 4
            })
        );
        assert_eq!(t[6], Trigger::EventDays { id: 5, days: 30 });
        assert_eq!(
            t[7],
            Trigger::Province {
                owned: false,
                province: 75,
                whose: Whose::Enemy
            }
        );
        assert_eq!(
            t[8],
            Trigger::Province {
                owned: true,
                province: 76,
                whose: Whose::This
            }
        );
        assert_eq!(
            t[9],
            Trigger::Garrison(Garrison {
                owner: Whose::Any,
                province: 75,
                kind: GarrisonKind::Land,
                size: 2,
                area: 0
            })
        );
        assert_eq!(
            t[10],
            Trigger::Technology {
                country: Some("GER".into()),
                id: 1010
            }
        );
        assert_eq!(t[12], Trigger::IsPuppet(Subject::No));
        assert_eq!(t[13], Trigger::AtWar(Subject::Tag("AUS".into())));
        assert!(matches!(t[14], Trigger::Unknown { .. }));
        assert!(matches!(t[15], Trigger::Divisions { .. }));
        assert_eq!(
            t[16],
            Trigger::Belligerence {
                country: None,
                value: 10.0
            }
        );
        assert_eq!(
            t[17],
            Trigger::Domestic {
                slider: "democratic".into(),
                value: 7.0
            }
        );
        // `hour` is not a trigger of the game.
        assert_eq!(dropped.get("hour"), Some(&1));
    }

    #[test]
    fn c_number_parsing() {
        assert_eq!(atoi(" -12abc"), -12);
        assert_eq!(atoi("x"), 0);
        assert_eq!(atof("2.5e1x"), 25.0);
        assert_eq!(atof("-.5"), -0.5);
        assert_eq!(atof("GER"), 0.0);
        assert_eq!(atof("1e"), 1.0);
    }

    #[test]
    fn loads_files_with_includes_and_reports_missing_ones() {
        let dir = std::env::temp_dir().join(format!("dh-data-events-{}", std::process::id()));
        let _ = std::fs::remove_dir_all(&dir);
        std::fs::create_dir_all(dir.join("db/events")).unwrap();
        std::fs::write(
            dir.join("db/events/A.txt"),
            "event = { id = 1 }\ninclude = \"db\\events\\b.txt\"\nevent = { id = 3 }\nfoo = 1\nevent = { id = 4 }\n",
        )
        .unwrap();
        std::fs::write(dir.join("db/events/b.txt"), "event = { id = 2 }\n").unwrap();
        let root = dh_text::script::parse_str(
            "event = \"db\\events\\a.txt\"\nevent = \"db\\events\\none.txt\"\ncountry = { tag = GER }",
        )
        .root;
        let mut warnings = Vec::new();
        let db = EventDb::load(&Vfs::new(&dir), &root, &mut warnings);
        // `foo` ends the file: event 4 is not read.
        let ids: Vec<_> = db.events.iter().map(|e| e.id).collect();
        assert_eq!(ids, [1, 2, 3]);
        assert_eq!(db.files.len(), 3);
        assert_eq!(db.missing, ["db\\events\\none.txt"]);
        let msgs: Vec<_> = warnings.iter().map(|w| w.message.as_str()).collect();
        assert_eq!(
            msgs,
            [
                "unknown data defined in event database: foo",
                "missing eventdatabase:db\\events\\none.txt"
            ]
        );
        std::fs::remove_dir_all(dir).unwrap();
    }
}
