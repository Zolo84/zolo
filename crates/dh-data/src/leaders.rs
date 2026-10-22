//! Leaders (generals, admirals, air marshals) from `db/leaders/*.csv`
//! (`docs/spec/leaders-ministers-misc.md` §3).
//!
//! Each file starts with a header line, which is skipped unread, followed by
//! one leader per line: `Name;ID;Country;Rank 3 Year;Rank 2 Year;Rank 1 Year;
//! Rank 0 Year;Ideal Rank;Max Skill;Traits;Skill;Experience;Loyalty;Type;
//! Picture;Start Year;End Year[;Retirement Year];x`. When `db/leaders.txt`
//! exists, only the files it lists are read. Values are kept as the files
//! have them; what the game does with them at run time (stored rank, skill
//! clamping, command limits) is in `dh-sim`.

use crate::{Branch, Vfs, Warning};
use dh_text::CsvTable;
use std::collections::BTreeMap;

pub const LEADERS_DIR: &str = "db/leaders";
/// Optional list of the files under [`LEADERS_DIR`] to read, one per line.
pub const LEADERS_LIST: &str = "db/leaders.txt";

/// Bits of the `Traits` column (§3.5), as masks.
pub mod traits {
    pub const LOGISTICS_WIZARD: u32 = 1 << 0;
    pub const DEFENSIVE_DOCTRINE: u32 = 1 << 1;
    pub const OFFENSIVE_DOCTRINE: u32 = 1 << 2;
    pub const WINTER_SPECIALIST: u32 = 1 << 3;
    pub const TRICKSTER: u32 = 1 << 4;
    pub const ENGINEER: u32 = 1 << 5;
    pub const FORTRESS_BUSTER: u32 = 1 << 6;
    pub const PANZER_LEADER: u32 = 1 << 7;
    pub const COMMANDO: u32 = 1 << 8;
    pub const OLD_GUARD: u32 = 1 << 9;
    pub const SEA_WOLF: u32 = 1 << 10;
    pub const BLOCKADE_RUNNER: u32 = 1 << 11;
    pub const SUPERIOR_TACTICIAN: u32 = 1 << 12;
    pub const SPOTTER: u32 = 1 << 13;
    pub const TANK_BUSTER: u32 = 1 << 14;
    pub const CARPET_BOMBER: u32 = 1 << 15;
    pub const NIGHT_FLYER: u32 = 1 << 16;
    pub const FLEET_DESTROYER: u32 = 1 << 17;
    // Terrain traits (land combat row 11).
    pub const DESERT_FOX: u32 = 1 << 18;
    pub const JUNGLE_RAT: u32 = 1 << 19;
    pub const URBAN_WARFARE: u32 = 1 << 20;
    pub const RANGER: u32 = 1 << 21;
    pub const MOUNTAINEER: u32 = 1 << 22;
    pub const HILLS_FIGHTER: u32 = 1 << 23;
    // Combat event traits, in the order of the seven combat events.
    pub const COUNTER_ATTACKER: u32 = 1 << 24;
    pub const ASSAULTER: u32 = 1 << 25;
    pub const ENCIRCLER: u32 = 1 << 26;
    pub const AMBUSHER: u32 = 1 << 27;
    pub const DISCIPLINED: u32 = 1 << 28;
    pub const ELASTIC_DEFENCE: u32 = 1 << 29;
    pub const BLITZER: u32 = 1 << 30;
}

/// One CSV record. Unparsable numbers fall back to the defaults the spec
/// lists for the reference editor (§3.3).
#[derive(Debug, Clone, PartialEq)]
pub struct Leader {
    pub id: i64,
    pub name: String,
    /// Country tag, upper case.
    pub country: String,
    /// Year the leader reaches each rank, indexed by rank (0 = highest): the
    /// columns `Rank 0 Year` … `Rank 3 Year`, which the file holds in reverse.
    pub rank_years: [i32; 4],
    /// `Ideal Rank` (0..=3); the game reads and ignores it.
    pub ideal_rank: Option<u8>,
    pub max_skill: i32,
    /// Bit mask of [`traits`].
    pub traits: u32,
    pub skill: i32,
    pub experience: f32,
    pub loyalty: i32,
    /// `Type`: 0 army, 1 navy, 2 air.
    pub branch: Option<Branch>,
    pub picture: String,
    pub start_year: i32,
    pub end_year: i32,
    /// Only in files written for `EnableRetirementYearLeaders`, before the `x`.
    pub retirement_year: Option<i32>,
}

impl Leader {
    pub fn has_trait(&self, mask: u32) -> bool {
        self.traits & mask != 0
    }

    /// Parses a record; rows with too few fields, no name, a bad ID or no
    /// country are skipped with the returned message.
    fn from_row(row: &[String]) -> Result<Self, String> {
        // 18 fields, or 19 with a retirement year; the trailing `x` may be missing.
        if row.len() < 17 {
            return Err(format!("expected 18 fields, found {}", row.len()));
        }
        let int = |i: usize, default: i32| row[i].parse::<i32>().unwrap_or(default);
        let name = row[0].clone();
        if name.is_empty() {
            return Err("leader without a name".into());
        }
        let id = row[1]
            .parse::<i64>()
            .map_err(|_| format!("bad leader id {:?}", row[1]))?;
        let country = row[2].to_ascii_uppercase();
        if country.is_empty() {
            return Err(format!("leader {id} without a country"));
        }
        Ok(Leader {
            id,
            name,
            country,
            rank_years: [int(6, 1990), int(5, 1990), int(4, 1990), int(3, 1990)],
            ideal_rank: row[7].parse::<u8>().ok().filter(|&r| r <= 3),
            max_skill: int(8, 0),
            traits: row[9].parse().unwrap_or(0),
            skill: int(10, 0),
            experience: row[11].parse().unwrap_or(0.0),
            loyalty: int(12, 0),
            branch: match row[13].as_str() {
                "0" => Some(Branch::Land),
                "1" => Some(Branch::Naval),
                "2" => Some(Branch::Air),
                _ => None,
            },
            picture: row[14].clone(),
            start_year: int(15, 1930),
            end_year: int(16, 1970),
            retirement_year: row.get(17).and_then(|v| v.parse().ok()),
        })
    }
}

#[derive(Debug, Default)]
pub struct Leaders {
    pub by_id: BTreeMap<i64, Leader>,
}

impl Leaders {
    /// Reads the files named by `db/leaders.txt`, or else every CSV under
    /// `db/leaders` (a mod's file shadows the base file of the same name).
    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> std::io::Result<Self> {
        let files: Vec<(String, u32)> = if vfs.exists(LEADERS_LIST) {
            let text = dh_text::encoding::decode(&vfs.read(LEADERS_LIST)?);
            // One name per line, relative to the directory; lines are not trimmed.
            text.lines()
                .enumerate()
                .filter(|(_, l)| !l.is_empty() && !l.starts_with('#'))
                .map(|(i, l)| (format!("{LEADERS_DIR}/{l}"), i as u32 + 1))
                .collect()
        } else {
            vfs.list_files(LEADERS_DIR)
                .into_iter()
                .filter(|f| f.to_ascii_lowercase().ends_with(".csv"))
                .map(|f| (f, 0))
                .collect()
        };
        let mut leaders = Leaders::default();
        for (file, line) in files {
            match vfs.read(&file) {
                Ok(bytes) => leaders.add_table(&file, &CsvTable::parse(&bytes), warnings),
                Err(e) => warnings.push(Warning {
                    file: LEADERS_LIST.into(),
                    line,
                    message: e.to_string(),
                }),
            }
        }
        Ok(leaders)
    }

    /// Adds the records of one file. The first ID read wins over later
    /// duplicates (assumed; the shipped files have none).
    pub fn add_table(&mut self, file: &str, table: &CsvTable, warnings: &mut Vec<Warning>) {
        // Line 1 is the header, whatever it says.
        for (line, row) in table.rows.iter().filter(|(line, _)| *line > 1) {
            let warn = |message: String| Warning {
                file: file.to_owned(),
                line: *line,
                message,
            };
            match Leader::from_row(row) {
                Ok(leader) if self.by_id.contains_key(&leader.id) => {
                    warnings.push(warn(format!("duplicate leader id {}", leader.id)))
                }
                Ok(leader) => {
                    self.by_id.insert(leader.id, leader);
                }
                Err(message) => warnings.push(warn(message)),
            }
        }
    }

    pub fn get(&self, id: i64) -> Option<&Leader> {
        self.by_id.get(&id)
    }

    /// Leaders whose CSV country is `tag`, by ID.
    pub fn of_country<'a>(&'a self, tag: &'a str) -> impl Iterator<Item = &'a Leader> + 'a {
        self.by_id.values().filter(move |l| l.country == tag)
    }

    pub fn len(&self) -> usize {
        self.by_id.len()
    }

    pub fn is_empty(&self) -> bool {
        self.by_id.is_empty()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_records_and_skips_bad_ones() {
        let table = CsvTable::parse(
            b"Name;ID;Country;Rank 3 Year;Rank 2 Year;Rank 1 Year;Rank 0 Year;Ideal Rank;Max Skill;Traits;Skill;Experience;Loyalty;Type;Picture;Start Year;End Year;x\n\
              Abraham;1;ger;1943;1944;1990;1990;3;5;288;2;0;5 ;0;L1;1943;1960;x\n\
              Retired;2;GER;1930;1931;1932;1933;;4;0;01;0;0;2;L2;1930;1945;1944;x\n\
              ;3;GER;1930;1990;1990;1990;3;5;0;2;0;5;0;L3;1930;1960;x\n\
              Nobody;x;GER;1930;1990;1990;1990;3;5;0;2;0;5;0;L4;1930;1960;x\n\
              Short;5;GER;1930\n\
              Again;1;GER;1930;1990;1990;1990;3;5;0;2;0;5;0;L1;1930;1960;x\n",
        );
        let mut warnings = Vec::new();
        let mut leaders = Leaders::default();
        leaders.add_table("db/leaders/german.csv", &table, &mut warnings);
        assert_eq!(leaders.len(), 2);
        let a = leaders.get(1).unwrap();
        assert_eq!(
            (a.name.as_str(), a.country.as_str(), a.rank_years),
            ("Abraham", "GER", [1990, 1990, 1944, 1943])
        );
        assert_eq!((a.ideal_rank, a.max_skill, a.skill), (Some(3), 5, 2));
        assert!(a.has_trait(traits::ENGINEER) && a.has_trait(traits::COMMANDO));
        assert!(!a.has_trait(traits::OLD_GUARD));
        assert_eq!(
            (a.loyalty, a.branch, a.end_year),
            (5, Some(Branch::Land), 1960)
        );
        assert_eq!(a.retirement_year, None);
        let b = leaders.get(2).unwrap();
        assert_eq!(
            (b.ideal_rank, b.skill, b.branch),
            (None, 1, Some(Branch::Air))
        );
        assert_eq!(b.retirement_year, Some(1944));
        let lines: Vec<u32> = warnings.iter().map(|w| w.line).collect();
        assert_eq!(lines, [4, 5, 6, 7]);
        assert_eq!(leaders.of_country("GER").count(), 2);
    }
}
