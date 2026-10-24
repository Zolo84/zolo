//! Difficulty modifiers from `db/difficulty.csv` (`docs/spec/land-combat.md`
//! §4.6): percentages by difficulty level for human and AI countries, plus
//! one block per alliance.
//!
//! After a header line the file is a run of blocks: a line naming the block
//! (`HUMAN`, `AI`, `AXIS`, `ALLIES`, `COMINTERN`, `NEUTRAL`), then one line
//! per category (`INDUSTRY`, …, `COMBAT`, …) with a value for each level
//! `VERYEASY`..`VERYHARD`, read like `atoi` (empty is 0).

use crate::diplomacy::Faction;
use crate::Vfs;
use dh_text::CsvTable;
use std::collections::BTreeMap;

pub const DIFFICULTY_FILE: &str = "db/difficulty.csv";
/// Block names.
pub const BLOCKS: [&str; 6] = ["HUMAN", "AI", "AXIS", "ALLIES", "COMINTERN", "NEUTRAL"];
/// Difficulty level of a new game (`NORMAL`); levels run 0..=4.
pub const NORMAL: usize = 2;

#[derive(Debug, Clone, Default, PartialEq)]
pub struct Difficulty {
    /// `(block, category)` → percent at each level.
    values: BTreeMap<(String, String), [i32; 5]>,
}

impl Difficulty {
    pub fn load(vfs: &Vfs) -> std::io::Result<Self> {
        Ok(Self::parse(&vfs.read(DIFFICULTY_FILE)?))
    }

    pub fn parse(bytes: &[u8]) -> Self {
        let table = CsvTable::parse_with_header(bytes);
        let mut values = BTreeMap::new();
        let mut block: Option<String> = None;
        for (_, row) in &table.rows {
            let name = row
                .first()
                .map_or(String::new(), |s| s.to_ascii_uppercase());
            if BLOCKS.contains(&name.as_str()) {
                block = Some(name);
                continue;
            }
            let Some(block) = &block else {
                continue;
            };
            let category = match name.as_str() {
                "ORGANIZATION" => "ORGANISATION".to_owned(),
                _ => name,
            };
            let mut levels = [0; 5];
            for (i, v) in levels.iter_mut().enumerate() {
                *v = row.get(i + 1).map_or(0, |s| atoi(s));
            }
            values.insert((block.clone(), category), levels);
        }
        Difficulty { values }
    }

    /// Percent for a block, category and level; 0 when the file lacks it.
    pub fn get(&self, block: &str, category: &str, level: usize) -> i32 {
        self.values
            .get(&(block.to_owned(), category.to_owned()))
            .and_then(|l| l.get(level))
            .copied()
            .unwrap_or(0)
    }

    /// A country's modifier as a fraction (`0x76B8B0`): the `HUMAN` or `AI`
    /// value plus that of its alliance (`NEUTRAL` outside the three
    /// factions), at least −99 %.
    pub fn modifier(
        &self,
        category: &str,
        level: usize,
        human: bool,
        faction: Option<Faction>,
    ) -> f32 {
        let player = if human { "HUMAN" } else { "AI" };
        let alliance = match faction {
            Some(Faction::Axis) => "AXIS",
            Some(Faction::Allies) => "ALLIES",
            Some(Faction::Comintern) => "COMINTERN",
            Some(Faction::Other) | None => "NEUTRAL",
        };
        let sum = self.get(player, category, level) + self.get(alliance, category, level);
        sum.max(-99) as f32 * 0.01
    }
}

/// The leading integer of a field, 0 if there is none.
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

#[cfg(test)]
mod tests {
    use super::*;

    const CSV: &str = "CATEGORY;VERYEASY;EASY;NORMAL;HARD;VERYHARD;BLANK;X\n\
        HUMAN;;;;;;;X\n\
        COMBAT;10;5;0;-5;-10;;X\n\
        ORGANIZATION;30;15;0;-15;-30;;X\n\
        #;;;;;;;X\n\
        AI;;;;;;;X\n\
        COMBAT;-20;-10;0;10;20x;;X\n\
        AXIS;;;;;;;X\n\
        COMBAT;-90;0;0;;7;;X\n";

    #[test]
    fn reads_blocks_and_combines_player_and_alliance() {
        let d = Difficulty::parse(CSV.as_bytes());
        assert_eq!(d.get("HUMAN", "COMBAT", 0), 10);
        assert_eq!(d.get("HUMAN", "ORGANISATION", 4), -30);
        assert_eq!(d.get("AI", "COMBAT", 4), 20);
        assert_eq!(d.get("AXIS", "COMBAT", 3), 0);
        assert_eq!(d.get("NEUTRAL", "COMBAT", 4), 0);
        let close = |a: f32, b: f32| (a - b).abs() < 1e-6;
        assert!(close(d.modifier("COMBAT", 4, false, None), 0.2));
        assert!(close(d.modifier("COMBAT", 4, true, None), -0.1));
        assert!(close(
            d.modifier("COMBAT", 4, false, Some(Faction::Axis)),
            0.27
        ));
        assert_eq!(
            d.modifier("COMBAT", NORMAL, false, Some(Faction::Other)),
            0.0
        );
        // The sum is limited to −99 %.
        assert!(close(
            d.modifier("COMBAT", 0, false, Some(Faction::Axis)),
            -0.99
        ));
    }
}
