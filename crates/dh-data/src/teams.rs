//! Tech teams (`db/tech/teams/*.csv`; `docs/spec/research.md` §1.2): one
//! file per country, read by `0x76CB60`.
//!
//! Line 1 names the country in its first column (the rest is the column
//! layout `Name;Pic Name;Skill;Start Year;End Year;Speciality1..32`); every
//! later line is a team: ID (`atoi`), name, picture, skill (`atof`), start
//! and end year (`atoi`, below 100 → + 1900), then up to 32 speciality
//! columns of which the first six non-empty ones count (the editor shows
//! all 32). An unknown speciality counts as general equipment (with an
//! error in the log), and a repeated ID keeps the first record.

use crate::tech::{speciality_index, GENERAL_EQUIPMENT};
use crate::{Vfs, Warning};
use std::collections::BTreeMap;

pub const TEAMS_DIR: &str = "db/tech/teams";
/// Optional list of team files (`0x76C8F0`), one per line; its names are
/// taken to be in [`TEAMS_DIR`] (assumed).
pub const TEAMS_LIST: &str = "db/teams.txt";
/// Specialities a team keeps (`0x76CF02`).
pub const MAX_SPECIALITIES: usize = 6;
/// Speciality columns read (`0x76CED8`).
const SPECIALITY_COLUMNS: usize = 32;

#[derive(Debug, Clone, PartialEq)]
pub struct TechTeam {
    pub id: i64,
    /// The tag of the file's first line (`TT+0xC8`).
    pub country: String,
    pub name: String,
    pub picture: String,
    /// As written; the game keeps it within 1..=`MaxTechTeamSkill`
    /// (`0x75AEC0`, see [`TechTeam::skill_within`]).
    pub skill: f32,
    /// The team works from `start_year` until the year before `end_year`
    /// (`0x75CD00`).
    pub start_year: i32,
    pub end_year: i32,
    /// Research type indices (`dh_data::tech::SPECIALITIES`), at most
    /// [`MAX_SPECIALITIES`].
    pub specialities: Vec<usize>,
}

impl TechTeam {
    /// Whether the team has the speciality (`TT+0x1A+kind`).
    pub fn has(&self, kind: usize) -> bool {
        self.specialities.contains(&kind)
    }

    /// The skill as `0x75AEC0` stores it: above `max` → `max`, else below 1
    /// → 1.
    pub fn skill_within(&self, max: f32) -> f32 {
        if max < self.skill {
            max
        } else if self.skill < 1.0 {
            1.0
        } else {
            self.skill
        }
    }

    /// Whether the team can work in `year` (`0x75CD00`, without the
    /// sleep flag): `start_year <= year < end_year`.
    pub fn available(&self, year: i32) -> bool {
        self.start_year <= year && self.end_year > year
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct TechTeams {
    pub by_id: BTreeMap<i64, TechTeam>,
    /// Team IDs of each country in load order (the country's team list,
    /// `C+0x167D0`).
    pub by_country: BTreeMap<String, Vec<i64>>,
}

impl TechTeams {
    /// Loads the files [`TEAMS_LIST`] names, or else every CSV in
    /// [`TEAMS_DIR`] (a mod's file shadowing the game's).
    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> Self {
        let files: Vec<String> = match vfs.read(TEAMS_LIST) {
            Ok(bytes) => dh_text::encoding::decode(&bytes)
                .lines()
                .filter(|l| !l.trim().is_empty() && !l.starts_with('#'))
                .map(|l| format!("{TEAMS_DIR}/{}", l.trim()))
                .collect(),
            Err(_) => vfs
                .list_files(TEAMS_DIR)
                .into_iter()
                .filter(|f| f.to_ascii_lowercase().ends_with(".csv"))
                .collect(),
        };
        let mut teams = TechTeams::default();
        for file in files {
            match vfs.read(&file) {
                Ok(bytes) => teams.add_file(&file, &bytes, warnings),
                Err(e) => warnings.push(Warning {
                    file,
                    line: 0,
                    message: e.to_string(),
                }),
            }
        }
        teams
    }

    /// One country's file.
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
        for (line, row) in rows {
            let Some(first) = row.first().filter(|s| !s.is_empty()) else {
                continue;
            };
            let id = i64::from(atoi(first));
            if self.by_id.contains_key(&id) {
                continue;
            }
            let field = |i: usize| row.get(i).map_or("", String::as_str);
            let year = |i: usize| {
                let y = atoi(field(i));
                if y < 100 {
                    y + 1900
                } else {
                    y
                }
            };
            // A repeated speciality still uses up one of the six.
            let mut specialities = Vec::new();
            let mut counted = 0;
            for name in (6..6 + SPECIALITY_COLUMNS).map(field) {
                if name.is_empty() || counted >= MAX_SPECIALITIES {
                    continue;
                }
                counted += 1;
                let kind = speciality_index(name).unwrap_or_else(|| {
                    warnings.push(Warning {
                        file: file.to_owned(),
                        line: *line,
                        message: format!("team {id}: unknown research type {name:?}"),
                    });
                    GENERAL_EQUIPMENT
                });
                if !specialities.contains(&kind) {
                    specialities.push(kind);
                }
            }
            self.by_id.insert(
                id,
                TechTeam {
                    id,
                    country: tag.clone(),
                    name: field(1).to_owned(),
                    picture: field(2).to_owned(),
                    skill: atof(field(3)) as f32,
                    start_year: year(4),
                    end_year: year(5),
                    specialities,
                },
            );
            self.by_country.entry(tag.clone()).or_default().push(id);
        }
    }

    /// A country's teams in load order.
    pub fn of<'a>(&'a self, tag: &str) -> impl Iterator<Item = &'a TechTeam> + 'a {
        self.by_country
            .get(tag)
            .into_iter()
            .flatten()
            .filter_map(|id| self.by_id.get(id))
    }
}

/// C `atoi`: optional sign and leading digits, else 0.
fn atoi(s: &str) -> i32 {
    let s = s.trim_start();
    let (sign, digits) = match s.strip_prefix('-') {
        Some(rest) => (-1, rest),
        None => (1, s.strip_prefix('+').unwrap_or(s)),
    };
    let end = digits
        .find(|c: char| !c.is_ascii_digit())
        .unwrap_or(digits.len());
    digits[..end].parse::<i32>().map_or(0, |v| sign * v)
}

/// C `atof` on the leading number, else 0.
fn atof(s: &str) -> f64 {
    let s = s.trim_start();
    let end = s
        .char_indices()
        .take_while(|&(i, c)| c.is_ascii_digit() || c == '.' || (i == 0 && (c == '-' || c == '+')))
        .last()
        .map_or(0, |(i, c)| i + c.len_utf8());
    s[..end].parse().unwrap_or(0.0)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn teams_keep_six_specialities_and_full_years() {
        // Six leading columns, 32 speciality columns, the end marker.
        let row = |head: &str, specs: &[&str]| {
            let mut fields: Vec<&str> = head.split(';').collect();
            fields.extend(specs);
            fields.resize(6 + 32, "");
            fields.push("x");
            fields.join(";") + "\n"
        };
        let csv = row(
            "GER;Name;Pic Name;Skill;Start Year;End Year",
            &["Speciality1"],
        ) + &row(
            "3;I.G. Farben;T3;9;1930;1970",
            &[
                "chemistry",
                "industrial_engineering",
                "general_equipment",
                "management",
                "technical_efficiency",
            ],
        ) + "# a comment\n"
            + &row(";;;;;", &[])
            + &row(
                "8;Krupp;T7;12.5;30;70",
                &[
                    "",
                    "artillery",
                    "MECHANICS",
                    "nonsense",
                    "rocketry",
                    "electronics",
                    "mathematics",
                    "training",
                ],
            )
            + &row("3;Duplicate;T3;1;1930;1970", &[]);
        let mut teams = TechTeams::default();
        let mut warnings = Vec::new();
        teams.add_file("teams_ger.csv", csv.as_bytes(), &mut warnings);
        assert_eq!(teams.by_country["GER"], [3, 8]);
        let farben = &teams.by_id[&3];
        assert_eq!(farben.name, "I.G. Farben");
        assert_eq!(
            (farben.skill, farben.start_year, farben.end_year),
            (9.0, 1930, 1970)
        );
        assert_eq!(farben.specialities, [3, 12, 5, 11, 18]);
        assert!(farben.has(12) && !farben.has(0));
        // Empty columns are skipped, the seventh is dropped, an unknown one
        // is general equipment; years below 100 count from 1900.
        let krupp = &teams.by_id[&8];
        assert_eq!(krupp.specialities, [0, 1, 5, 6, 2, 13]);
        assert_eq!(warnings.len(), 1, "{warnings:?}");
        assert_eq!((krupp.start_year, krupp.end_year), (1930, 1970));
        assert_eq!(krupp.skill_within(10.0), 10.0);
        assert!(krupp.available(1969) && !krupp.available(1970) && !krupp.available(1929));
        let mut weak = krupp.clone();
        weak.skill = 0.5;
        assert_eq!(weak.skill_within(10.0), 1.0);
        assert_eq!(teams.of("GER").map(|t| t.id).collect::<Vec<_>>(), [3, 8]);
    }
}
