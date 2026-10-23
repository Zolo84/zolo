//! Weather and climate names, and the weather a scenario sets up
//! (`docs/spec/scenario.md` §4.4.4, `docs/spec/weather.md`).

use dh_text::Block;

/// Weather of a province, in the game's order (province field `+0x3AC`).
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash, Default)]
pub enum Weather {
    #[default]
    Clear = 0,
    Frozen = 1,
    Raining = 2,
    Snowing = 3,
    Storm = 4,
    Blizzard = 5,
    Muddy = 6,
}

impl Weather {
    pub const ALL: [Weather; 7] = [
        Weather::Clear,
        Weather::Frozen,
        Weather::Raining,
        Weather::Snowing,
        Weather::Storm,
        Weather::Blizzard,
        Weather::Muddy,
    ];

    /// Name as scenarios write it (`clear`, …), any case.
    pub fn from_name(name: &str) -> Option<Self> {
        Self::ALL
            .into_iter()
            .find(|w| w.name().eq_ignore_ascii_case(name))
    }

    pub fn name(self) -> &'static str {
        [
            "clear", "frozen", "raining", "snowing", "storm", "blizzard", "muddy",
        ][self as usize]
    }

    /// Suffix of the weather rows of `modifiers.csv` (`ATT_CLEAR`, `MOV_SNOW`…).
    pub fn modifier_suffix(self) -> &'static str {
        [
            "CLEAR", "FROZEN", "RAIN", "SNOW", "STORM", "BLIZZARD", "MUDDY",
        ][self as usize]
    }
}

/// Climate of a province (`Province.csv` column `Climate`), in the order of
/// the game's `CLIMATE_*` names; `None` is `-`.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash, Default)]
pub enum Climate {
    #[default]
    None = 0,
    Arctic = 1,
    Subarctic = 2,
    Temperate = 3,
    Muddy = 4,
    Mediterranean = 5,
    Subtropical = 6,
    Tropical = 7,
    Arid = 8,
}

impl Climate {
    pub const ALL: [Climate; 9] = [
        Climate::None,
        Climate::Arctic,
        Climate::Subarctic,
        Climate::Temperate,
        Climate::Muddy,
        Climate::Mediterranean,
        Climate::Subtropical,
        Climate::Tropical,
        Climate::Arid,
    ];

    /// Reads a `Climate` cell; anything unknown (including `-`) is `None`.
    pub fn from_name(name: &str) -> Self {
        let name = name.trim();
        Self::ALL
            .into_iter()
            .find(|c| c.name().eq_ignore_ascii_case(name))
            .unwrap_or(Climate::None)
    }

    pub fn name(self) -> &'static str {
        [
            "-",
            "Arctic",
            "Subarctic",
            "Temperate",
            "Muddy",
            "Mediterranean",
            "Subtropical",
            "Tropical",
            "Arid",
        ][self as usize]
    }
}

/// A weather front a scenario places (`weather.pattern`).
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct WeatherPattern {
    /// `id = { type id }`.
    pub id: Option<(i64, i64)>,
    pub provinces: Vec<u32>,
    pub centre: Option<u32>,
    pub speed: i64,
    pub heading: String,
}

/// The scenario's `weather` block (inside `globaldata`, or at the top level).
#[derive(Debug, Clone, PartialEq, Eq, Default)]
pub struct WeatherSetup {
    /// `static = yes`: the weather does not change.
    pub is_static: bool,
    pub patterns: Vec<WeatherPattern>,
}

impl WeatherSetup {
    pub fn from_block(b: &Block) -> Self {
        WeatherSetup {
            is_static: b.get_bool("static").unwrap_or(false),
            patterns: b
                .get_all("pattern")
                .filter_map(|v| v.as_block())
                .map(|p| WeatherPattern {
                    id: p
                        .get_block("id")
                        .and_then(|id| Some((id.get_i64("type")?, id.get_i64("id")?))),
                    provinces: p
                        .get_block("provinces")
                        .map(|l| l.ints().filter_map(|i| u32::try_from(i).ok()).collect())
                        .unwrap_or_default(),
                    centre: p.get_i64("centre").and_then(|c| u32::try_from(c).ok()),
                    speed: p.get_i64("speed").unwrap_or(0),
                    heading: p.get_str("heading").unwrap_or("").to_owned(),
                })
                .collect(),
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn names_round_trip() {
        for w in Weather::ALL {
            assert_eq!(Weather::from_name(&w.name().to_uppercase()), Some(w));
        }
        assert_eq!(Weather::from_name("sunny"), None);
        assert_eq!(Climate::from_name("Mediterranean"), Climate::Mediterranean);
        assert_eq!(Climate::from_name("-"), Climate::None);
        assert_eq!(Climate::from_name(""), Climate::None);
    }

    #[test]
    fn scenario_pattern() {
        let doc = dh_text::script::parse(
            br#"weather = { pattern = { id = { type = 9430 id = 4 }
                provinces = { 48 49 45 } centre = 71 speed = 0 heading = "northwest" } }"#,
        );
        let setup = WeatherSetup::from_block(doc.root.get_block("weather").unwrap());
        assert!(!setup.is_static);
        assert_eq!(
            setup.patterns,
            [WeatherPattern {
                id: Some((9430, 4)),
                provinces: vec![48, 49, 45],
                centre: Some(71),
                speed: 0,
                heading: "northwest".into(),
            }]
        );
    }
}
