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

    /// Keyword in scenarios and saves (`0x75EAD0`, `0x75EB50`): frozen is
    /// `winter`; the word `frozen` is not accepted.
    pub fn name(self) -> &'static str {
        [
            "clear", "winter", "raining", "snowing", "storm", "blizzard", "muddy",
        ][self as usize]
    }

    /// Frozen, snowing or blizzard (`0x4E8210`): precipitation here falls as snow.
    pub fn is_cold(self) -> bool {
        matches!(self, Weather::Frozen | Weather::Snowing | Weather::Blizzard)
    }

    /// Raining, snowing, storm or blizzard (`0x4E8230`).
    pub fn is_precipitation(self) -> bool {
        matches!(
            self,
            Weather::Raining | Weather::Snowing | Weather::Storm | Weather::Blizzard
        )
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
    pub speed: Option<i64>,
    /// 0 north … 7 northwest. The game only reads a bare word: a quoted
    /// heading (as in the shipped `ardennes.eug`) is ignored (`0x5344C9`).
    pub heading: Option<u8>,
    /// `special = yes`: made like `start_pattern` does, outside the count of
    /// natural fronts.
    pub special: bool,
}

/// Heading words in the game's order (`0x75FBAD`).
pub const HEADINGS: [&str; 8] = [
    "north",
    "northeast",
    "east",
    "southeast",
    "south",
    "southwest",
    "west",
    "northwest",
];

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
                    speed: p.get_i64("speed"),
                    heading: p
                        .get_scalar("heading")
                        .filter(|h| !h.quoted)
                        .and_then(|h| {
                            HEADINGS
                                .iter()
                                .position(|w| w.eq_ignore_ascii_case(h.as_str()))
                        })
                        .map(|i| i as u8),
                    special: p.get_bool("special").unwrap_or(false),
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
        assert_eq!(Weather::from_name("frozen"), None);
        assert_eq!(Weather::from_name("winter"), Some(Weather::Frozen));
        assert_eq!(Climate::from_name("Mediterranean"), Climate::Mediterranean);
        assert_eq!(Climate::from_name("-"), Climate::None);
        assert_eq!(Climate::from_name(""), Climate::None);
    }

    #[test]
    fn scenario_pattern() {
        let doc = dh_text::script::parse(
            br#"weather = { pattern = { id = { type = 9430 id = 4 }
                provinces = { 48 49 45 } centre = 71 speed = 0 heading = "northwest" }
                pattern = { heading = southwest special = yes } }"#,
        );
        let setup = WeatherSetup::from_block(doc.root.get_block("weather").unwrap());
        assert!(!setup.is_static);
        assert_eq!(
            setup.patterns,
            [
                WeatherPattern {
                    id: Some((9430, 4)),
                    provinces: vec![48, 49, 45],
                    centre: Some(71),
                    speed: Some(0),
                    heading: None,
                    special: false,
                },
                WeatherPattern {
                    heading: Some(5),
                    special: true,
                    ..Default::default()
                }
            ]
        );
    }
}
