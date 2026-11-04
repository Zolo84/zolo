//! Ministers (`db/ministers/*.csv`), their personalities
//! (`db/ministers/minister_personalities.txt`) and a scenario's cabinet
//! (`docs/spec/leaders-ministers-misc.md` §4).

use crate::{Vfs, Warning};
use dh_text::Block;
use std::collections::BTreeMap;

pub const MINISTERS_DIR: &str = "db/ministers";
pub const MINISTERS_LIST: &str = "db/ministers.txt";
pub const PERSONALITIES_FILE: &str = "db/ministers/minister_personalities.txt";
pub const RANDOM_NAMES_FILE: &str = "db/randomleaders.csv";

/// Cabinet posts: their scenario keys, in the game's order, and their names
/// in the CSV files.
pub const POSTS: [(&str, &str); 10] = [
    ("headofstate", "Head of State"),
    ("headofgovernment", "Head of Government"),
    ("foreignminister", "Foreign Minister"),
    ("armamentminister", "Minister of Armament"),
    ("ministerofsecurity", "Minister of Security"),
    ("ministerofintelligence", "Head of Military Intelligence"),
    ("chiefofstaff", "Chief of Staff"),
    ("chiefofarmy", "Chief of Army"),
    ("chiefofnavy", "Chief of Navy"),
    ("chiefofair", "Chief of Air Force"),
];

/// Group headers of a minister file (`;Name;…` rows, the name in the
/// second column, matched case-insensitively at its start; `0x76DD15`) and
/// the group number the rows after them get (`m+0x84`). Rows before any
/// header are in group 0, the starting cabinet; rows in groups 1..=7 (the
/// A, B and shadow cabinets) are not loaded at all (`0x76D30B`). All but
/// two shipped files (USA, ALS) have a `;Replacements` row right under the
/// header line, so their ministers are in group 8.
pub const GROUPS: [(&str, u8); 9] = [
    ("A Cabinet -", 1),
    ("B Cabinet -", 2),
    ("Shadow Fascist Cabinet", 3),
    ("Shadow Communist Cabinet", 4),
    ("Shadow CE Cabinet", 5),
    ("Shadow RS Cabinet", 6),
    ("Shadow LC Cabinet", 7),
    ("Shadow Democratic Cabinet", 7),
    ("Replacements", 8),
];

#[derive(Debug, Clone, PartialEq)]
pub struct Minister {
    pub id: i64,
    pub country: String,
    /// Index into [`POSTS`], if the post is recognised.
    pub post: Option<usize>,
    pub name: String,
    pub start_year: i32,
    /// End and retirement years (`+0x1E`, `+0x22`): 3000, the
    /// constructor's, unless the file has the columns.
    pub end_year: i32,
    pub retirement_year: i32,
    /// The group of [`GROUPS`] the row is in.
    pub group: u8,
    /// Ideology code (`NS`, `FA`, …).
    pub ideology: String,
    /// Personality as written, lower-cased.
    pub personality: String,
    pub loyalty: String,
}

#[derive(Debug, Clone, Default)]
pub struct Ministers {
    pub by_id: BTreeMap<i64, Minister>,
    /// IDs in load order (the game's global list, `0xD61340+0x167BE`):
    /// files in turn, rows in file order, a repeated ID where it first
    /// came.
    pub order: Vec<i64>,
}

impl Ministers {
    /// Loads the files `db/ministers.txt` names, or else every CSV in
    /// `db/ministers` (a mod's file shadowing the game's).
    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> Self {
        let files: Vec<String> = match vfs.read(MINISTERS_LIST) {
            Ok(bytes) => dh_text::encoding::decode(&bytes)
                .lines()
                .filter(|l| !l.trim().is_empty() && !l.starts_with('#'))
                .map(|l| format!("{MINISTERS_DIR}/{}", l.trim()))
                .collect(),
            Err(_) => vfs
                .list_files(MINISTERS_DIR)
                .into_iter()
                .filter(|f| f.to_ascii_lowercase().ends_with(".csv"))
                .collect(),
        };
        let mut ministers = Ministers::default();
        for file in files {
            match vfs.read(&file) {
                Ok(bytes) => ministers.add_file(&file, &bytes, warnings),
                Err(e) => warnings.push(Warning {
                    file,
                    line: 0,
                    message: e.to_string(),
                }),
            }
        }
        ministers
    }

    /// One file: line 1 names the country and gives the column layout
    /// (old: pool year − 1900; new: start and end year; with retirement:
    /// also a retirement year); every later line with a numeric ID is a
    /// minister.
    pub fn add_file(&mut self, file: &str, bytes: &[u8], warnings: &mut Vec<Warning>) {
        let table = dh_text::CsvTable::parse(bytes);
        let mut rows = table.rows.iter();
        let Some((_, header)) = rows.next() else {
            return;
        };
        let Some(tag) = header.first().filter(|t| !t.is_empty()) else {
            return;
        };
        let tag = tag.to_ascii_uppercase();
        let has = |name: &str| header.iter().any(|h| h.eq_ignore_ascii_case(name));
        // Columns after the name: years, then ideology, personality, loyalty.
        let (years, rest) = if has("Retirement Year") {
            (3, 6)
        } else if has("Start Year") {
            (2, 5)
        } else {
            (1, 4)
        };
        let mut group = 0;
        for (line, row) in rows {
            let Some(Ok(id)) = row.first().map(|s| s.parse::<i64>()) else {
                let name = row.get(1).map_or("", |s| s.trim());
                if let Some((_, g)) = GROUPS.iter().find(|(h, _)| {
                    name.get(..h.len())
                        .is_some_and(|p| p.eq_ignore_ascii_case(h))
                }) {
                    group = *g;
                }
                continue;
            };
            // The A, B and shadow cabinets are skipped (`0x76D30B`).
            if (1..=7).contains(&group) {
                continue;
            }
            if row.len() < rest + 3 {
                warnings.push(Warning {
                    file: file.to_owned(),
                    line: *line,
                    message: format!("minister {id}: {} columns", row.len()),
                });
                continue;
            }
            let num = |i: usize, d: i32| row.get(i).and_then(|s| s.parse().ok()).unwrap_or(d);
            let start = if years == 1 {
                1900 + num(3, 36)
            } else {
                num(3, 1936)
            };
            let post = POSTS
                .iter()
                .position(|(_, n)| n.eq_ignore_ascii_case(&row[1]));
            // A repeated ID keeps the first record (`0x76D721`).
            if !self.by_id.contains_key(&id) {
                self.order.push(id);
            }
            self.by_id.entry(id).or_insert(Minister {
                id,
                country: tag.clone(),
                post,
                name: row[2].clone(),
                start_year: start,
                end_year: if years >= 2 { num(4, 3000) } else { 3000 },
                retirement_year: if years >= 3 { num(5, 3000) } else { 3000 },
                group,
                ideology: row[rest].to_ascii_uppercase(),
                personality: row[rest + 1].to_ascii_lowercase(),
                loyalty: row[rest + 2].clone(),
            });
        }
    }
}

/// One effect of a personality: `command = { type which when value }`.
#[derive(Debug, Clone, PartialEq)]
pub struct MinisterCommand {
    pub kind: String,
    pub which: Option<String>,
    pub when: Option<String>,
    pub value: f64,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Personality {
    /// Lower-cased `trait`, as minister files name it.
    pub name: String,
    pub id: Option<i64>,
    /// The post of `position` (an index into [`POSTS`]); none for `all`
    /// and `generic` (`0xA`), and when the key is missing (the file's
    /// comment calls `all` the default).
    pub position: Option<usize>,
    /// `value` (`+0x2E`, `atoi`): −1 never assassinate, 0 (also when
    /// missing) worked out from the commands when the game starts.
    pub value: i64,
    pub commands: Vec<MinisterCommand>,
}

impl Personality {
    /// What the personality is worth (`+0x2E` once the game has started,
    /// `0x77FE40`): its `value`, or for 0 the worth of its commands
    /// ([`commands_value`]) within −1..=10000 (`0x767550`).
    pub fn worth(&self) -> i64 {
        if self.value != 0 {
            self.value
        } else {
            commands_value(&self.commands).clamp(-1, 10000)
        }
    }
}

/// The command types as the value function numbers them (`0x76607B`).
const COMMAND_TYPES: [&str; 20] = [
    "research",
    "resource",
    "production",
    "province",
    "unit",
    "extra",
    "diplomacy_chances",
    "diplomacy_cost",
    "intelligence_chances",
    "intelligence_cost",
    "intelligence_report",
    "intelligence_network",
    "leader_skill",
    "dissent",
    "tc_mod",
    "detection",
    "belligerence",
    "populationgrowth",
    "supply_consumption",
    "stockpile",
];

/// `when` numbers (`0x76625E`); a missing one is 0x12.
const WHENS: [&str; 18] = [
    "weak_target",
    "same_alignment",
    "opposite_alignment",
    "democracies",
    "dictatorships",
    "close_government_type",
    "non_national",
    "national",
    "all",
    "time",
    "cost",
    "organisation",
    "morale",
    "attack",
    "defence",
    "speed",
    "war",
    "peace",
];
const WHEN_UNSET: u32 = 0x12;

/// `which` numbers the value function tells apart (`0x763DA0`): 0..=0x22
/// and the diplomatic and spy missions from 0x13A; a missing one is 0x161.
/// Unit and brigade types (0x23..=0x139) are all alike to it.
const WHICHS: [(&str, u32); 37] = [
    ("all", 0),
    ("land", 1),
    ("navy", 2),
    ("air", 3),
    ("convoy", 4),
    ("peace", 6),
    ("war", 7),
    ("industry", 0xA),
    ("consumer", 0x14),
    ("production", 0x15),
    ("supplies", 0x16),
    ("reinforcement", 0x17),
    ("upgrading", 0x18),
    ("alliance", 0x13A),
    ("declare_war", 0x13B),
    ("offer_alliance", 0x13C),
    ("bring_to_alliance", 0x13D),
    ("join_alliance", 0x13E),
    ("leave_alliance", 0x13F),
    ("ban_from_alliance", 0x140),
    ("influence_nation", 0x141),
    ("ask_for_military_access", 0x142),
    ("cancel_military_access", 0x143),
    ("revoke_military_access", 0x144),
    ("assume_military_control", 0x145),
    ("cancel_military_control", 0x146),
    ("send_expeditionary_force", 0x147),
    ("guarantee_independence", 0x148),
    ("annex_nation", 0x149),
    ("demand_territory", 0x14A),
    ("trade", 0x14B),
    ("offer_non_aggression", 0x14C),
    ("cancel_non_aggression", 0x14D),
    ("offer_trade_agreement", 0x14E),
    ("cancel_trade_agreement", 0x14F),
    ("cancel_peace_treaty", 0x150),
    ("sue_for_peace", 0x151),
];
const WHICH_UNSET: u32 = 0x161;
/// Any other `which` the function does not single out (a unit type, a
/// resource, a building, a later mission…).
const WHICH_OTHER: u32 = 0x100;

/// The spy missions steal_blueprint … disrupt_techteam (0x155..=0x15D).
const SPY_MISSIONS: [&str; 9] = [
    "steal_blueprint",
    "minister_assassination",
    "smear_campaign",
    "coup",
    "sabotage_industry",
    "nuclear_sabotage",
    "found_partisans",
    "massmedia",
    "disrupt_techteam",
];

fn which_number(which: Option<&str>) -> u32 {
    let Some(w) = which else {
        return WHICH_UNSET;
    };
    let w = w.trim();
    if let Some((_, n)) = WHICHS.iter().find(|(k, _)| k.eq_ignore_ascii_case(w)) {
        return *n;
    }
    match SPY_MISSIONS.iter().position(|k| k.eq_ignore_ascii_case(w)) {
        Some(i) => 0x155 + i as u32,
        None => WHICH_OTHER,
    }
}

/// The defaults the command parser fills in (`0x765DD0`,
/// ministers.md §1.3), as numbers.
fn normalised(kind: usize, which: u32, when: u32) -> (u32, u32) {
    let (mut which, mut when) = (which, when);
    let unset_which = which == WHICH_UNSET;
    let unset_when = when == WHEN_UNSET;
    match kind {
        0 => {
            if unset_which {
                which = 0;
            }
            if unset_when {
                when = 9;
            }
        }
        1 | 10 if unset_which => which = 0,
        2 => {
            if unset_which {
                which = 0x15;
            }
            if which == 0x15 && unset_when {
                when = 7;
            }
        }
        3 | 5 | 19 => {
            if unset_which {
                which = 0;
            }
            if unset_when {
                when = 8;
            }
        }
        4 => {
            if unset_when {
                when = 8;
            }
            if unset_which && when != 15 {
                which = 0;
            }
        }
        6 if unset_when => when = 8,
        7 => {
            if unset_which {
                which = 0;
            }
            if unset_when {
                when = 8;
            }
        }
        8 | 9 => {
            if unset_which {
                which = 0;
            }
            if unset_when {
                when = 6;
            }
        }
        11 if unset_which && unset_when => which = 0,
        17 if unset_when => when = 7,
        _ => {}
    }
    (which, when)
}

/// `0x768E50`: the worth of a list of personality commands, a sum over
/// them in file order of weighted `value`s by type, `which` and `when`
/// (the x87 code works in double precision; the values it stores to
/// memory are rounded to `f32`, and the total, rounded to `f32`, is
/// rounded to the nearest integer, ties to even). A national `production`
/// command *replaces* the sum so far (by twice its `value · 400`), and a
/// `supplies` one by `value · 400`; consumer goods, reinforcement and
/// upgrading take `value · 400` off.
pub fn commands_value(commands: &[MinisterCommand]) -> i64 {
    if commands.is_empty() {
        return 0;
    }
    const THIRD: f64 = 0.333_333_343_267_440_8; // f32 1/3
    const SIXTH: f64 = 0.166_666_671_633_720_4; // f32 1/6
    let f32r = |x: f64| f64::from(x as f32);
    let mut s = 0.0f64;
    for c in commands {
        let Some(kind) = COMMAND_TYPES.iter().position(|t| *t == c.kind) else {
            continue;
        };
        let when = c
            .when
            .as_deref()
            .and_then(|w| WHENS.iter().position(|k| k.eq_ignore_ascii_case(w.trim())))
            .map_or(WHEN_UNSET, |i| i as u32);
        let (which, when) = normalised(kind, which_number(c.which.as_deref()), when);
        let v = f64::from(c.value as f32);
        // Time and cost count half, attack, defence and organisation
        // fully, morale half (units and brigades).
        let by_when = |s: &mut f64, x: f64, speed: bool| match when {
            8 => *s -= x,
            9 | 10 => *s -= x * 0.5,
            11 | 13 | 14 => *s += x,
            12 => *s += x * 0.5,
            15 if speed => *s += x * 5.0,
            _ => {}
        };
        match kind {
            // research: faster is better; time counts double, `all` nine
            // categories.
            0 => {
                let mut x = v * 100.0;
                if when == 9 {
                    x += x;
                }
                if which == 0 {
                    x *= 9.0;
                }
                s -= x;
            }
            1 => {
                let x = v * 200.0;
                s += if which == 0 { x * 5.0 } else { x };
            }
            2 => {
                let x = v * 100.0;
                if which == 0x15 && when == 6 {
                    s += x + x;
                } else {
                    let t = f32r(x * 4.0);
                    match which {
                        0x14 | 0x17 | 0x18 => s -= t,
                        0x15 => s = t + t,
                        0x16 => s = t,
                        _ => {}
                    }
                }
            }
            3 => {
                let mut x = v * 100.0;
                if which == 0 {
                    x *= 10.0;
                }
                match when {
                    8 => s -= x,
                    9 | 10 => s -= x * 0.5,
                    _ => {}
                }
            }
            4 => {
                let k = match which {
                    0 => 31.0,
                    1 => 12.0,
                    2 => 10.0,
                    3 => 9.0,
                    _ => 1.0,
                };
                by_when(&mut s, v * 100.0 * k, true);
            }
            5 => {
                let k = match which {
                    0 => 26.0,
                    1 => 13.0,
                    2 => 12.0,
                    _ => 1.0,
                };
                by_when(&mut s, v * 100.0 * THIRD * k, false);
            }
            // diplomacy_chances: the mission's chance as written (×100 for
            // assume_military_control), a sixth unless `when = all`; only
            // alliance, influence, access, military control, demand
            // territory, trade, non-aggression and peace count.
            6 => {
                let mut x = v;
                if when != 8 {
                    x *= SIXTH;
                }
                if which == 0x145 {
                    x *= 100.0;
                }
                if matches!(
                    which,
                    0x13A | 0x141 | 0x142 | 0x145 | 0x14A | 0x14B | 0x14C | 0x151
                ) {
                    s += x;
                }
            }
            // diplomacy_cost: cheaper is better, `national` the other way,
            // a sixth for a `when` other than `all`.
            7 => {
                let mut t = f32r(v * -100.0 * THIRD);
                if when == 7 {
                    t = -t;
                } else if when != 8 {
                    t = f32r(t * SIXTH);
                }
                s += t * match which {
                    0 => 10.0,
                    0x13B..=0x13E => 2.0,
                    0x141 => 4.0,
                    0x14B => 3.0,
                    0x13F..=0x154 => 1.0,
                    _ => 0.0,
                };
            }
            8 | 9 => {
                let mut t = if kind == 8 {
                    f32r(v * 5.0)
                } else {
                    f32r(v * -100.0 * 0.5)
                };
                if when == 7 {
                    t = f32r(-(t + t));
                }
                match which {
                    0 => s += t * 9.0,
                    0x155..=0x15D => s += t,
                    _ => {}
                }
            }
            10 => {
                let x = v * 5.0;
                s += if which == 0 { x * 3.0 } else { x };
            }
            11 => {
                let x = v + v;
                if which != WHICH_UNSET {
                    let x = x * -100.0;
                    s += if which == 0 { x * 3.0 } else { x };
                } else {
                    let x = x * 3.0;
                    match when {
                        6 | 7 => s += x,
                        8 => s += x + x,
                        _ => {}
                    }
                }
            }
            12 | 14 => s += v * 100.0 * 5.0,
            13 => s += 2.0 * (v * -100.0),
            15 => match which {
                1 | 4 => s += v * 8.0,
                2 => s += v * 8.0 * 100.0,
                _ => {}
            },
            16 if matches!(which, 6 | 7 | 0x13B) => s -= v * 100.0,
            17 => {
                let x = v * 100.0;
                s += if when == 7 { x * 4.0 } else { x + x };
            }
            18 => s += v * -100.0 * 4.0,
            19 => {
                let mut x = (v - 1.0) * 100.0;
                x *= if when == 16 || when == 17 { 0.25 } else { 0.5 };
                s += x * if which == 0xA || which == 0x16 {
                    0.25
                } else {
                    0.5
                };
            }
            _ => {}
        }
    }
    f64::from(s as f32).round_ties_even() as i64
}

#[derive(Debug, Clone, Default)]
pub struct Personalities {
    pub by_name: BTreeMap<String, Personality>,
    /// The one with `position = generic` (`0xD59098`): what a minister
    /// whose personality is unknown gets.
    pub generic: Option<String>,
}

impl Personalities {
    pub fn load(vfs: &Vfs) -> std::io::Result<Self> {
        Ok(Self::parse(&vfs.read(PERSONALITIES_FILE)?))
    }

    pub fn parse(bytes: &[u8]) -> Self {
        let doc = dh_text::script::parse(bytes);
        let mut by_name = BTreeMap::new();
        let mut generic = None;
        for b in doc.root.get_all("minister").filter_map(|v| v.as_block()) {
            let Some(name) = b.get_str("trait") else {
                continue;
            };
            let name = name.to_ascii_lowercase();
            // A repeated `position` overwrites the first.
            let position = b
                .get_all("position")
                .filter_map(|v| v.as_scalar())
                .last()
                .map(|v| v.as_str().trim().to_ascii_lowercase());
            if position.as_deref() == Some("generic") {
                generic = Some(name.clone());
            }
            let position = position.and_then(|p| POSTS.iter().position(|(k, _)| *k == p));
            let lower = |s: &str| s.to_ascii_lowercase();
            let commands = b
                .get_all("command")
                .filter_map(|v| v.as_block())
                .filter_map(|c| {
                    Some(MinisterCommand {
                        kind: lower(c.get_str("type")?),
                        which: c.get_str("which").map(lower),
                        when: c.get_str("when").map(lower),
                        value: c.get_f64("value").unwrap_or(0.0),
                    })
                })
                .collect();
            by_name.insert(
                name.clone(),
                Personality {
                    name,
                    id: b.get_i64("id"),
                    position,
                    value: b.get_str("value").map_or(0, crate::events::atoi),
                    commands,
                },
            );
        }
        Personalities { by_name, generic }
    }

    pub fn get(&self, name: &str) -> Option<&Personality> {
        self.by_name.get(&name.to_ascii_lowercase())
    }
}

/// `db/randomleaders.csv`: `TAG;name` rows, the names of each tag in file
/// order (what the game names a minister it makes up after; `0x5B5980`).
pub fn random_names(vfs: &Vfs) -> BTreeMap<String, Vec<String>> {
    vfs.read(RANDOM_NAMES_FILE)
        .map(|b| parse_random_names(&b))
        .unwrap_or_default()
}

pub fn parse_random_names(bytes: &[u8]) -> BTreeMap<String, Vec<String>> {
    let mut names: BTreeMap<String, Vec<String>> = BTreeMap::new();
    for (_, row) in dh_text::CsvTable::parse(bytes).rows {
        if let (Some(tag), Some(name)) = (row.first(), row.get(1)) {
            if !tag.is_empty() && !name.is_empty() {
                names
                    .entry(tag.to_ascii_uppercase())
                    .or_default()
                    .push(name.clone());
            }
        }
    }
    names
}

/// Minister IDs of a scenario country block's cabinet, in [`POSTS`] order.
pub fn cabinet_from(b: &Block) -> [Option<i64>; 10] {
    let mut c = [None; 10];
    for (slot, (key, _)) in c.iter_mut().zip(POSTS) {
        *slot = b.get_block(key).and_then(|t| t.get_i64("id"));
    }
    c
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn old_and_new_layouts() {
        let mut m = Ministers::default();
        let mut w = Vec::new();
        m.add_file(
            "a.csv",
            b"GER;Ruling Cabinet - Start;Name;Pool;Ideology;Personality;Loyalty;Picturename;x\n\
              5;Minister of Security;Wilhelm Frick;36;NS;Prince of Terror;High;M5;x\n\
              ;Replacements;;;;;;;x\n\
              2;Head of Government;Rudolf Hess;36;NS;Silent Workhorse;High;M40;x\n\
              5;Head of State;Somebody Else;40;FA;Barking Buffoon;High;M5;x\n\
              ;Shadow Fascist Cabinet;;;;;;;x\n\
              6;Head of State;Shadow;36;FA;Barking Buffoon;High;M6;x\n",
            &mut w,
        );
        m.add_file(
            "b.csv",
            b"GER;Ruling Cabinet - Start;Name;Start Year;End Year;Retirement Year;Ideology;Personality;Loyalty;Picturename;X\n\
              1;Head of State;Adolf Hitler;1933;1964;1999;NS;Paranoid megalomaniac;High;2634;X\n",
            &mut w,
        );
        assert!(w.is_empty(), "{w:?}");
        let hess = &m.by_id[&2];
        assert_eq!((hess.post, hess.start_year), (Some(1), 1936));
        assert_eq!(hess.personality, "silent workhorse");
        // The constructor's end and retirement years; the group of the
        // header above the row; a repeated ID keeps its first record and
        // place.
        assert_eq!((hess.end_year, hess.retirement_year), (3000, 3000));
        assert_eq!((m.by_id[&5].group, hess.group), (0, 8));
        assert_eq!(m.by_id[&5].name, "Wilhelm Frick");
        assert_eq!(m.order, [5, 2, 1]);
        assert!(!m.by_id.contains_key(&6), "a shadow cabinet is not loaded");
        let hitler = &m.by_id[&1];
        assert_eq!(
            (hitler.post, hitler.start_year, hitler.end_year),
            (Some(0), 1933, 1964)
        );
        assert_eq!(hitler.ideology, "NS");
    }

    #[test]
    fn personality_commands() {
        let p = Personalities::parse(
            br#"minister = { trait = "Silent Workhorse" id = 69 position = HeadOfGovernment value = -1
                command = { type = production which = production value = 0.0500 }
                command = { type = diplomacy_cost value = 0.2000 } }
                minister = { trait = "Generic" id = 0 position = generic value = -1 }
                minister = { trait = "Any" id = 1 position = all }"#,
        );
        let s = p.get("SILENT WORKHORSE").unwrap();
        assert_eq!((s.position, s.value), (Some(1), -1));
        assert_eq!(p.generic.as_deref(), Some("generic"));
        assert_eq!(p.get("generic").unwrap().position, None);
        assert_eq!(
            (p.get("any").unwrap().position, p.get("any").unwrap().value),
            (None, 0)
        );
        assert_eq!(s.commands.len(), 2);
        assert_eq!(s.commands[0].kind, "production");
        assert_eq!(s.commands[0].which.as_deref(), Some("production"));
        assert_eq!(s.commands[0].value, 0.05);
    }

    #[test]
    fn random_names_by_tag() {
        let n = parse_random_names(b"FRA;Maurepas\nFRA;Crussol\nger;Weber\n;Nobody\n");
        assert_eq!(n["FRA"], ["Maurepas", "Crussol"]);
        assert_eq!(n["GER"], ["Weber"]);
        assert_eq!(n.len(), 2);
    }
}
