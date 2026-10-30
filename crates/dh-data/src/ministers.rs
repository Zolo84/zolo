//! Ministers (`db/ministers/*.csv`), their personalities
//! (`db/ministers/minister_personalities.txt`) and a scenario's cabinet
//! (`docs/spec/leaders-ministers-misc.md` §4).

use crate::{Vfs, Warning};
use dh_text::Block;
use std::collections::BTreeMap;

pub const MINISTERS_DIR: &str = "db/ministers";
pub const MINISTERS_LIST: &str = "db/ministers.txt";
pub const PERSONALITIES_FILE: &str = "db/ministers/minister_personalities.txt";

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

#[derive(Debug, Clone, PartialEq)]
pub struct Minister {
    pub id: i64,
    pub country: String,
    /// Index into [`POSTS`], if the post is recognised.
    pub post: Option<usize>,
    pub name: String,
    pub start_year: i32,
    pub end_year: i32,
    /// Ideology code (`NS`, `FA`, …).
    pub ideology: String,
    /// Personality as written, lower-cased.
    pub personality: String,
    pub loyalty: String,
}

#[derive(Debug, Clone, Default)]
pub struct Ministers {
    pub by_id: BTreeMap<i64, Minister>,
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
        for (line, row) in rows {
            let Some(Ok(id)) = row.first().map(|s| s.parse::<i64>()) else {
                continue;
            };
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
            self.by_id.entry(id).or_insert(Minister {
                id,
                country: tag.clone(),
                post,
                name: row[2].clone(),
                start_year: start,
                end_year: if years >= 2 { num(4, 1970) } else { 1970 },
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
    pub commands: Vec<MinisterCommand>,
}

#[derive(Debug, Clone, Default)]
pub struct Personalities {
    pub by_name: BTreeMap<String, Personality>,
}

impl Personalities {
    pub fn load(vfs: &Vfs) -> std::io::Result<Self> {
        Ok(Self::parse(&vfs.read(PERSONALITIES_FILE)?))
    }

    pub fn parse(bytes: &[u8]) -> Self {
        let doc = dh_text::script::parse(bytes);
        let mut by_name = BTreeMap::new();
        for b in doc.root.get_all("minister").filter_map(|v| v.as_block()) {
            let Some(name) = b.get_str("trait") else {
                continue;
            };
            let name = name.to_ascii_lowercase();
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
                    commands,
                },
            );
        }
        Personalities { by_name }
    }

    pub fn get(&self, name: &str) -> Option<&Personality> {
        self.by_name.get(&name.to_ascii_lowercase())
    }
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
              ;Replacements;;;;;;;x\n\
              2;Head of Government;Rudolf Hess;36;NS;Silent Workhorse;High;M40;x\n",
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
            br#"minister = { trait = "Silent Workhorse" id = 69 position = HeadOfGovernment
                command = { type = production which = production value = 0.0500 }
                command = { type = diplomacy_cost value = 0.2000 } }"#,
        );
        let s = p.get("SILENT WORKHORSE").unwrap();
        assert_eq!(s.commands.len(), 2);
        assert_eq!(s.commands[0].kind, "production");
        assert_eq!(s.commands[0].which.as_deref(), Some("production"));
        assert_eq!(s.commands[0].value, 0.05);
    }
}
