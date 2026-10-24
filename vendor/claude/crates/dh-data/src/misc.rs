//! Game constants from `db/misc.txt` (`docs/spec/leaders-ministers-misc.md` §5).
//!
//! The file is a set of blocks `section = { … }` holding bare numbers; a
//! number's meaning is its position in the block. The specs write the n-th
//! number of a section as `combat[n]`, counting from 1, and so does [`Misc::get`].

use crate::Vfs;
use std::collections::BTreeMap;

pub const MISC_FILE: &str = "db/misc.txt";
/// Section names in the order the game writes them.
pub const SECTIONS: [&str; 11] = [
    "economy",
    "intelligence",
    "diplomacy",
    "combat",
    "mission",
    "country",
    "research",
    "trade",
    "ai",
    "mod",
    "map",
];

#[derive(Debug, Clone, Default, PartialEq)]
pub struct Misc {
    sections: BTreeMap<String, Vec<f64>>,
}

impl Misc {
    /// Loads `db/misc.txt`, the mod's copy shadowing the game's.
    pub fn load(vfs: &Vfs) -> std::io::Result<Self> {
        Ok(Self::parse(&vfs.read(MISC_FILE)?))
    }

    /// Reads every known section; a repeated section replaces the earlier one.
    pub fn parse(bytes: &[u8]) -> Self {
        let doc = dh_text::script::parse(bytes);
        let mut sections = BTreeMap::new();
        for field in doc.root.fields() {
            let Some(block) = field.value.as_block() else {
                continue;
            };
            if !SECTIONS.contains(&field.key.as_str()) {
                continue;
            }
            let numbers = block
                .values()
                .filter_map(|v| v.as_scalar()?.as_f64())
                .collect();
            sections.insert(field.key.clone(), numbers);
        }
        Misc { sections }
    }

    /// The `n`-th number (from 1) of a section, if the file has it.
    pub fn get(&self, section: &str, n: usize) -> Option<f64> {
        self.sections.get(section)?.get(n.checked_sub(1)?).copied()
    }

    /// Number of values read for a section.
    pub fn len(&self, section: &str) -> usize {
        self.sections.get(section).map_or(0, Vec::len)
    }

    pub fn is_empty(&self) -> bool {
        self.sections.is_empty()
    }

    /// Folder of the active map (map-distances.md §2): `map`, or `map/map_N`
    /// when `map[1]` (`MapNumber`) is N ≠ 0.
    pub fn map_dir(&self) -> String {
        match self.get("map", 1).map(|n| n as i64) {
            Some(n) if n != 0 => format!("map/map_{n}"),
            _ => "map".to_owned(),
        }
    }

    /// Whether distances come from `airdist.tbl`: `map[3]`
    /// (`DistanceCalculationModel`) is exactly 1; anything else is the old
    /// pixel model.
    pub fn real_distances(&self) -> bool {
        self.get("map", 3).map(|v| v as i64) == Some(1)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn values_are_counted_from_one_per_section() {
        let misc = Misc::parse(
            b"# header\neconomy = { 1.5 # a\n 2 }\ncombat = {\n# Land XP\n\t3.0 # was 1.0\n-0.2 .5 }\nunknown = { 9 }",
        );
        assert_eq!(misc.get("economy", 1), Some(1.5));
        assert_eq!(misc.get("economy", 2), Some(2.0));
        assert_eq!(misc.get("combat", 1), Some(3.0));
        assert_eq!(misc.get("combat", 2), Some(-0.2));
        assert_eq!(misc.get("combat", 3), Some(0.5));
        assert_eq!(misc.get("combat", 0), None);
        assert_eq!(misc.get("combat", 4), None);
        assert_eq!(misc.len("unknown"), 0);
        assert_eq!(misc.map_dir(), "map");
        assert!(!misc.real_distances());
        let full = Misc::parse(b"map = { 1 2770 1.0 29952 11520 }");
        assert_eq!(full.map_dir(), "map/map_1");
        assert!(full.real_distances());
    }
}
