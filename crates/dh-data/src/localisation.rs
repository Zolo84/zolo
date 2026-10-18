//! Localised strings from `config/*.csv` (`KEY;English;French;...;X`).

use crate::Vfs;
use dh_text::CsvTable;
use std::collections::HashMap;

/// Column indices of the languages shipped with the game.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Language {
    English = 1,
    French = 2,
    German = 3,
    Polish = 4,
    Spanish = 5,
    Italian = 6,
}

#[derive(Debug, Default)]
pub struct Localisation {
    strings: HashMap<String, String>,
}

impl Localisation {
    /// Loads every CSV under `config/`. Later files override earlier ones,
    /// matching the alphabetical load order of the engine.
    pub fn load(vfs: &Vfs, lang: Language) -> Self {
        let mut loc = Localisation::default();
        for file in vfs.list_files("config") {
            if file.to_ascii_lowercase().ends_with(".csv") {
                if let Ok(bytes) = vfs.read(&file) {
                    loc.add_table(&CsvTable::parse(&bytes), lang);
                }
            }
        }
        loc
    }

    pub fn add_table(&mut self, table: &CsvTable, lang: Language) {
        for (_, row) in &table.rows {
            // Untranslated cells are empty, and the trailing `X` marks the end of the record.
            let pick = |i: usize| {
                row.get(i)
                    .filter(|t| !t.is_empty() && !(i + 1 == row.len() && t.as_str() == "X"))
            };
            let (Some(key), Some(text)) = (row.first(), pick(lang as usize).or_else(|| pick(1)))
            else {
                continue;
            };
            if !key.is_empty() {
                self.strings.insert(key.to_ascii_uppercase(), text.clone());
            }
        }
    }

    pub fn get(&self, key: &str) -> Option<&str> {
        self.strings
            .get(&key.to_ascii_uppercase())
            .map(String::as_str)
    }

    /// The localised string, or the key itself (what the engine shows for missing keys).
    pub fn text<'a>(&'a self, key: &'a str) -> &'a str {
        self.get(key).unwrap_or(key)
    }

    pub fn len(&self) -> usize {
        self.strings.len()
    }

    pub fn is_empty(&self) -> bool {
        self.strings.is_empty()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn looks_up_case_insensitively() {
        let mut loc = Localisation::default();
        loc.add_table(
            &CsvTable::parse(b"GER;Germany;Allemagne;Deutschland;X\nPROV1;Berlin;X\n"),
            Language::German,
        );
        assert_eq!(loc.text("ger"), "Deutschland");
        assert_eq!(loc.text("PROV1"), "Berlin"); // falls back to English
        assert_eq!(loc.text("NOPE"), "NOPE");
    }
}
