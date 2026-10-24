//! Бази даних гри.
//! RE: re/RE-scripts.md (структури), re/RE-eug-format.md (країни),
//!     re/RE-mapformats-full.md (colorscales.csv).

use std::collections::HashMap;
use std::path::Path;

use anyhow::Context;

use crate::Tag;

/// Колір країни (RGB) — з colorscales.csv за назвою кольору з country.csv.
/// RE: colorscales.csv має блоки «Назва;;;» + 4 точки градієнта (index 0/20/40/64);
/// базовий колір = точка з index=0.
#[derive(Debug, Clone, Default)]
pub struct CountryDb {
    /// Код країни (3 літери) → назва кольору (з country.csv, колонка 2).
    pub colors: HashMap<String, String>,
}

impl CountryDb {
    pub fn load(paths: &crate::GamePaths) -> anyhow::Result<Self> {
        let mut s = Self::default();
        let p = paths
            .mod_dir
            .join("db/country.csv");
        if p.is_file() {
            for line in std::fs::read_to_string(&p)?.lines() {
                let mut it = line.split(';');
                let Some(code) = it.next() else { continue };
                let code = code.trim();
                if code.is_empty() || code.eq_ignore_ascii_case("country") {
                    continue;
                }
                let color = it.next().unwrap_or("White").trim().to_string();
                s.colors.insert(code.to_string(), color);
            }
        }
        Ok(s)
    }

    /// Колір країни RGB за назвою кольору з country.csv — ВБУДОВАНА палітра exe
    /// (FUN_0044a740 / country_color). Це 8-бітні «еталонні» значення для UI
    /// (прапорці/легенди), НЕ фінальні пікселі карти: рендер політичної карти
    /// йде через runtime-палітру з colorscales.csv ([`crate::colorscale`])
    /// з номером блоку з FUN_004aee40 (див. [`crate::colorscale::color_number`]).
    pub fn color_of(&self, tag: &Tag) -> (u8, u8, u8) {
        let name = self.colors.get(tag.as_str());
        match name {
            Some(n) => country_color(n),
            None => (255, 192, 96), // країна без запису в country.csv → default
        }
    }
}

/// Вбудована палітра кольорів країн (Darkest Hour.exe FUN_0044a740).
/// Значення розшифровано з дизасемблера: switch по індексу з FUN_004aee40
/// (назва кольору з db/country.csv → 0..0x16), запис [esp+8]=R,[esp+9]=G,[esp+10]=B.
/// Індекси >= 0x17 (UserColor1..6) → default 0x60c0ff = (255,192,96).
pub fn country_color(name: &str) -> (u8, u8, u8) {
    // Індекс назви як у FUN_004aee40 (порядок return-значень; невідоме
    // і UserColor1..6 → default, як у switch FUN_0044a740: eax > 0x16 → 0x60c0ff).
    let idx = match name.trim() {
        "LightOrange" => 0x12,
        "Black" => 0,
        "Green" => 1,
        "Orange" => 2,
        "LightBlue" => 3,
        "LightGray" => 4,
        "LightBrown" => 5,
        "DarkYellow" => 6,
        "Yellow" => 7,
        "DarkGray" => 8,
        "LightYellow" => 9,
        "Gray" => 10,
        "DarkGreen" => 0xb,
        "Blue" => 0xc,
        "LightRed" => 0xd,
        "White" => 0xe,
        "DarkBrown" => 0xf,
        "Red" => 0x10,
        "LightGreen" => 0x11,
        "Brown" => 0x13,
        "DarkBlue" => 0x14,
        "DarkRed" => 0x15,
        "DarkOrange" => 0x16,
        _ => u8::MAX, // UserColor1..6 / невідомі → default
    };
    match idx {
        0x00 => (0, 0, 0),       // Black
        0x01 => (64, 255, 64),   // Green
        0x02 => (192, 160, 0),   // Orange
        0x03 => (96, 192, 255),  // LightBlue
        0x04 => (212, 212, 212), // LightGray
        0x05 => (255, 192, 128), // LightBrown
        0x06 => (96, 96, 0),     // DarkYellow
        0x07 => (255, 255, 0),   // Yellow
        0x08 => (160, 160, 160), // DarkGray
        0x09 => (255, 255, 0),   // LightYellow (той самий case, що Yellow)
        0x0a => (192, 192, 192), // Gray
        0x0b => (0, 140, 0),     // DarkGreen
        0x0c => (0, 0, 255),     // Blue
        0x0d => (255, 128, 128), // LightRed
        0x0e => (255, 255, 255), // White
        0x0f => (128, 64, 32),   // DarkBrown
        0x10 => (255, 0, 0),     // Red
        0x11 => (128, 255, 96),  // LightGreen
        0x12 => (255, 192, 0),   // LightOrange
        0x13 => (160, 128, 64),  // Brown
        0x14 => (0, 0, 128),     // DarkBlue
        0x15 => (128, 0, 0),     // DarkRed
        0x16 => (255, 160, 0),   // DarkOrange
        _ => (255, 192, 96),     // UserColor1..6 / default (0x60c0ff)
    }
}

/// colorscales.csv: назва кольору → базовий RGB (градієнт index=0).
/// RE: файл map/Map_1/colorscales.csv — ЦЕ джерело кольорів політичної карти:
/// гра будує з нього runtime-палітру 8192×RGB565 (FUN_004ddcd0 читає шкали →
/// FUN_004d7db0 генерує). Авторитетна реалізація — модуль [`crate::colorscale`]
/// (`ColorScales::build_palette`); цей хелпер лишається для швидкого доступу до
/// базових значень блоку (перевірки/інструменти). УВАГА: `map/colorscales.csv`
/// (без `Map_1`) — застарілий HoI2-файл, гра його для рендера НЕ використовує.
#[derive(Debug, Clone, Default)]
pub struct ColorScales {
    pub colors: HashMap<String, (u8, u8, u8)>,
}

impl ColorScales {
    pub fn load(paths: &crate::GamePaths) -> anyhow::Result<Self> {
        Self::load_from(&paths.root.join("map/Map_1/colorscales.csv"))
    }

    fn norm(name: &str) -> String {
        name.chars().filter(|c| !c.is_whitespace()).flat_map(|c| c.to_lowercase()).collect()
    }

    pub fn load_from(p: &Path) -> anyhow::Result<Self> {
        let mut s = Self::default();
        let raw = std::fs::read_to_string(p)
            .with_context(|| format!("colorscales.csv: {}", p.display()))?;
        let mut name: Option<String> = None;
        for line in raw.lines() {
            let t = line.trim();
            if t.is_empty() {
                continue;
            }
            let parts: Vec<&str> = t.split(';').collect();
            if t.ends_with(";;;") || (parts.len() == 4 && parts[1].is_empty() && parts[2].is_empty())
            {
                name = Some(Self::norm(parts[0].trim()));
            } else if let (Some(n), Some(r), Some(g), Some(b), Some(idx)) = (
                name.as_ref(),
                parts.first().and_then(|v| v.trim().parse::<u8>().ok()),
                parts.get(1).and_then(|v| v.trim().parse::<u8>().ok()),
                parts.get(2).and_then(|v| v.trim().parse::<u8>().ok()),
                parts.get(3).and_then(|v| v.trim().parse::<i32>().ok()),
            ) {
                if idx == 0 {
                    s.colors.insert(n.clone(), (r, g, b));
                    name = None;
                }
            }
        }
        Ok(s)
    }

    pub fn lookup(&self, name: &str) -> Option<(u8, u8, u8)> {
        self.colors.get(&Self::norm(name)).copied()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn colorscales_parse() {
        let p = std::env::var("DH_GAME_DIR").map(std::path::PathBuf::from);
        let Ok(p) = p else { return };
        let paths = crate::GamePaths::with_custom(p);
        let cs = ColorScales::load(&paths).unwrap();
        assert_eq!(cs.lookup("blue"), Some((188, 217, 252)));
        assert!(cs.lookup("darkred").is_some());
        assert!(cs.colors.len() > 20);
    }

    #[test]
    fn palette_constants() {
        // Значення з дизасемблера FUN_0044a740 / FUN_004aee40.
        assert_eq!(country_color("Black"), (0, 0, 0));
        assert_eq!(country_color("Green"), (64, 255, 64));
        assert_eq!(country_color("LightBlue"), (96, 192, 255));
        assert_eq!(country_color("DarkRed"), (128, 0, 0));
        assert_eq!(country_color("LightRed"), (255, 128, 128));
        assert_eq!(country_color("Gray"), (192, 192, 192));
        assert_eq!(country_color("Yellow"), (255, 255, 0));
        assert_eq!(country_color("DarkBlue"), (0, 0, 128));
        assert_eq!(country_color("UserColor1"), (255, 192, 96));
    }

    #[test]
    #[ignore]
    fn country_colors_real() {
        let dir = std::env::var("DH_GAME_DIR").unwrap();
        let paths = crate::GamePaths::with_custom(std::path::PathBuf::from(dir));
        let db = CountryDb::load(&paths).unwrap();
        assert_eq!(db.colors.get("GER").map(|s| s.as_str()), Some("Gray"));
        assert_eq!(db.color_of(&Tag("GER".into())), (192, 192, 192));
        assert_eq!(db.color_of(&Tag("SOV".into())), (128, 0, 0));
    }
}