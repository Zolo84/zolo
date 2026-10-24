//! Кольорові шкали політичної карти: палітра будується з файлу гри
//! `map/Map_1/colorscales.csv` (НЕ з дампу пам'яті).
//!
//! RE (re/RE-colors.md; decomp/004ddcd0_FUN_004ddcd0.c — завантажувач шкал,
//! decomp/004d7db0_FUN_004d7db0.c — генератор палітри 0xA44C34):
//!
//! - Файл: 32 блоки (по 4 контрольні точки `r;g;b;index`); порядок блоків =
//!   значення, які повертає FUN_004aee40 для назв кольорів country.csv
//!   (Black=0, Green=1, ..., DarkOrange=22, water=23, border=24, ...).
//! - Перетворення каналу кожної точки: `v' = min(0.9·(0.00234375·v² + 0.5·v), 255)`
//!   (константи _DAT_007e7f78=0.00234375, _DAT_007e3358=0.5, _DAT_007e40a8=0.9).
//! - Генератор проходить 3 сегменти між точками блоку; значення каналу на рівні
//!   `L` (idx = L − 32) — лінійна інтерполяція між сусідніми точками; порожні
//!   сегменти (однакові index) пропускаються, сегмент заповнює [start..end).
//! - Колонка c ∈ 0..31 = блок c; колонки 32..63 = той самий блок × 0.5
//!   (затемнена половина; біт 0x20 шкали — див. [`DARK_FLAG`]).
//! - Пакування RGB565: `((r>>3)<<11) | ((g>>2)<<5) | (b>>3)`.
//!
//! Рендер гри використовує лише рівні `LUT[light − off]` = 32..95 (off=15,
//! light 0..63) — межі 0..31 і 96..127 недосяжні при off=15; тут вони
//! наближені крайніми точками (TODO(RE): додаткові значення сегментів поза
//! [0..64] з кешу 0xA43018, якщо знадобляться для off≠15).

use std::path::{Path, PathBuf};

use anyhow::{bail, Context};

/// Блок colorscales.csv: назва + контрольні точки (r,g,b,index).
#[derive(Debug, Clone)]
pub struct Block {
    pub name: String,
    /// 4 точки (r, g, b, index 0..64), у порядку файлу.
    pub points: Vec<(u8, u8, u8, u8)>,
}

/// 32 блоки colorscales.csv у порядку файлу (дорівнює номеру кольору).
#[derive(Debug, Clone)]
pub struct ColorScales {
    pub blocks: Vec<Block>,
}

/// Номер блоку кольору ВОДИ (FUN_004dcb20 case 0: вода → 0x17).
pub const WATER_BLOCK: u8 = 23;
/// Номер блоку для провінції без власника (FUN_004dcb20 case 0: → 2).
pub const NO_OWNER_BLOCK: u8 = 2;
/// Біт темної половини палітри (колонка +0x20): «не видима гравцеві» провінція
/// (FUN_004e8a40: прапорець +0x46E == 0 → scale |= 0x20).
pub const DARK_FLAG: u8 = 0x20;

/// Розв'язання шляху до каталогу мапи, як у [`crate::map::load`].
pub fn resolve_map_dir(paths: &crate::GamePaths) -> PathBuf {
    let dir = paths.root.join("map/Map_1");
    if dir.exists() {
        dir
    } else {
        paths.mod_dir.join("map/Map_1")
    }
}

impl ColorScales {
    /// Читає `colorscales.csv` з каталогу мапи (напр. `map/Map_1`).
    pub fn load(map_dir: &Path) -> anyhow::Result<Self> {
        let path = map_dir.join("colorscales.csv");
        let text = std::fs::read(&path)
            .with_context(|| format!("colorscales.csv: читання {}", path.display()))?;
        let text = String::from_utf8_lossy(&text);
        let lines: Vec<&str> = text.lines().collect();

        let mut blocks: Vec<Block> = Vec::with_capacity(32);
        let mut i = 0usize;
        while i < lines.len() {
            // Блок: «Назва» (може містити ';;;'), далі рядок-заголовок
            // «red;green;blue;index», далі 4 рядки даних.
            if i + 1 < lines.len() && lines[i + 1].trim() == "red;green;blue;index" {
                let name = lines[i]
                    .split(';')
                    .next()
                    .unwrap_or("")
                    .trim()
                    .to_string();
                i += 2;
                let mut points = Vec::with_capacity(4);
                while i < lines.len() && !lines[i].trim().is_empty() {
                    let parts: Vec<&str> = lines[i].trim().split(';').collect();
                    if parts.len() < 4 || !parts[0].chars().next().is_some_and(|c| c.is_ascii_digit())
                    {
                        break;
                    }
                    let n = |s: &str| s.trim().parse::<i32>().ok();
                    let (Some(r), Some(g), Some(b), Some(idx)) =
                        (n(parts[0]), n(parts[1]), n(parts[2]), n(parts[3]))
                    else {
                        break;
                    };
                    points.push((
                        r.clamp(0, 255) as u8,
                        g.clamp(0, 255) as u8,
                        b.clamp(0, 255) as u8,
                        idx.clamp(0, 64) as u8,
                    ));
                    i += 1;
                }
                blocks.push(Block { name, points });
            } else {
                i += 1;
            }
        }

        if blocks.len() != 32 {
            bail!(
                "colorscales.csv: очікувалося 32 блоки, знайдено {} ({})",
                blocks.len(),
                path.display()
            );
        }
        for b in &blocks {
            if b.points.len() != 4 {
                bail!(
                    "colorscales.csv: блок «{}» має {} точок замість 4",
                    b.name,
                    b.points.len()
                );
            }
        }
        Ok(Self { blocks })
    }

    /// Те саме, але з [`GamePaths`] (каталог мапи резолвиться як у map::load).
    pub fn load_from_game(paths: &crate::GamePaths) -> anyhow::Result<Self> {
        Self::load(&resolve_map_dir(paths))
    }

    /// Індекс блоку за назвою (без урахування регістру), як порядок FUN_004aee40.
    pub fn index_of(&self, name: &str) -> Option<usize> {
        let n = name.trim();
        self.blocks
            .iter()
            .position(|b| b.name.eq_ignore_ascii_case(n))
    }

    /// Будує палітру 8192 × u16 (RGB565): індекс = (рівень << 6) | колонка.
    /// Колонка 0..31 — блок; 32..63 — той самий блок × 0.5 (темна половина).
    pub fn build_palette(&self) -> Vec<u16> {
        let mut pal = vec![0u16; 8192];
        for col in 0..64usize {
            let block = &self.blocks[col & 31];
            let mul = if col < 32 { 1.0 } else { 0.5 };
            let points: Vec<(u8, (f64, f64, f64))> = block
                .points
                .iter()
                .map(|&(r, g, b, idx)| (idx, (tf(r, mul), tf(g, mul), tf(b, mul))))
                .collect();
            for level in 0..128usize {
                let (r, g, b) = sample(&points, level as i32 - 32);
                pal[(level << 6) | col] = pack565(r, g, b);
            }
        }
        pal
    }
}

/// Перетворення каналу: `v' = min(0.9·(0.00234375·v² + 0.5·v)·mul, 255)`.
/// Константи з decomp/004ddcd0 (K1=0x7e7f78=0.00234375, K2=0x7e3358=0.5,
/// K3=0x7e40a8=0.9).
#[inline]
pub fn tf(v: u8, mul: f64) -> f64 {
    let v = f64::from(v);
    let x = (v * 0.00234375 + 0.5) * v * 0.9 * mul;
    x.min(255.0)
}

/// Значення каналів у контрольній точці idx: інтерполяція 3 сегментів
/// (порожні сегменти з однаковими index пропускаються), межі — крайні точки.
fn sample(points: &[(u8, (f64, f64, f64))], idx: i32) -> (f64, f64, f64) {
    let first = points.first().expect("точки є").1;
    let last = points.last().expect("точки є").1;
    if idx <= i32::from(points[0].0) {
        return first;
    }
    if idx >= i32::from(points[points.len() - 1].0) {
        return last;
    }
    for k in 0..points.len() - 1 {
        let (i0, c0) = points[k];
        let (i1, c1) = points[k + 1];
        if i0 == i1 {
            continue; // порожній сегмент
        }
        if i32::from(i0) <= idx && idx < i32::from(i1) {
            let t = f64::from(idx - i32::from(i0)) / f64::from(i1 - i0);
            return (
                c0.0 + (c1.0 - c0.0) * t,
                c0.1 + (c1.1 - c0.1) * t,
                c0.2 + (c1.2 - c0.2) * t,
            );
        }
    }
    last
}

/// RGB (float) → RGB565 (пакувальник FUN_00584270: r5<<11 | g6<<5 | b5).
#[inline]
pub fn pack565(r: f64, g: f64, b: f64) -> u16 {
    let r = (r.max(0.0).min(255.0) as u32) >> 3;
    let g = (g.max(0.0).min(255.0) as u32) >> 2;
    let b = (b.max(0.0).min(255.0) as u32) >> 3;
    ((r << 11) | (g << 5) | b) as u16
}

/// Назва кольору країни (country.csv, колонка «main color») → номер блоку
/// colorscales.csv — таблиця FUN_004aee40. Невідоме/`LightOrange` → 0x12 (18),
/// як default у грі.
pub fn color_number(name: &str) -> u8 {
    match name.trim().to_ascii_lowercase().as_str() {
        "black" => 0,
        "green" => 1,
        "orange" => 2,
        "lightblue" => 3,
        "lightgray" | "lightgrey" => 4,
        "lightbrown" => 5,
        "darkyellow" => 6,
        "yellow" => 7,
        "darkgray" | "darkgrey" => 8,
        "lightyellow" => 9,
        "gray" | "grey" => 10,
        "darkgreen" => 11,
        "blue" => 12,
        "lightred" => 13,
        "white" => 14,
        "darkbrown" => 15,
        "red" => 16,
        "lightgreen" => 17,
        "lightorange" => 18,
        "brown" => 19,
        "darkblue" => 20,
        "darkred" => 21,
        "darkorange" => 22,
        // UserColor1..6 → 0x1a..0x1f
        "usercolor1" => 0x1a,
        "usercolor2" => 0x1b,
        "usercolor3" => 0x1c,
        "usercolor4" => 0x1d,
        "usercolor5" => 0x1e,
        "usercolor6" => 0x1f,
        _ => 0x12, // default гри: значення LightOrange
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Синтетичний блок: постійний колір → колонка має бути константою
    /// (як border у реальному файлі).
    #[test]
    fn constant_block_is_constant_column() {
        let s = ColorScales {
            blocks: (0..32)
                .map(|i| Block {
                    name: format!("b{i}"),
                    points: vec![(220, 0, 0, 0), (220, 0, 0, 4), (220, 0, 0, 35), (220, 0, 0, 64)],
                })
                .collect(),
        };
        let pal = s.build_palette();
        // (220,0,0) → tf = 201.1 → 565 (200,0,0) на кожному рівні 32..96
        for lvl in 32..=96 {
            assert_eq!(pal[(lvl << 6) | 24], ((200 >> 3) << 11) | (0 << 5) | 0);
        }
        // темна колонка = ×0.5 → tf = 100.5 → 565 (96,0,0)
        assert_eq!(pal[(48 << 6) | 56], ((96 >> 3) << 11));
    }

    /// Таблиця FUN_004aee40 на реальних значеннях country.csv.
    #[test]
    fn color_numbers_match_game() {
        assert_eq!(color_number("DarkGray"), 8); // POL
        assert_eq!(color_number("DarkRed"), 21); // SOV
        assert_eq!(color_number("Blue"), 12); // FRA
        assert_eq!(color_number("LightRed"), 13); // ENG
        assert_eq!(color_number("Gray"), 10); // GER
        assert_eq!(color_number("DarkGreen"), 11); // CZE
        assert_eq!(color_number("DarkYellow"), 6); // LIT/HUN
        assert_eq!(color_number("White"), 14); // EST
        assert_eq!(color_number("Black"), 0);
        assert_eq!(color_number("DarkOrange"), 22); // DEN/ROM
        // невідоме і LightOrange → 0x12
        assert_eq!(color_number("LightOrange"), 0x12);
        assert_eq!(color_number("Whatever"), 0x12);
        // UserColor
        assert_eq!(color_number("UserColor1"), 0x1a);
        assert_eq!(color_number("UserColor6"), 0x1f);
    }

    /// Реальний файл гри: 32 блоки, очікувані назви/порядок;
    /// згенерована палітра має збігатися з дампом пам'яті (data/palette565.bin)
    /// у межах ±1 кроку 565.
    #[test]
    #[ignore = "потребує встановленої гри (DH_GAME_DIR або Steam)"]
    fn generated_palette_matches_memory_dump() -> anyhow::Result<()> {
        let paths = match std::env::var("DH_GAME_DIR") {
            Ok(p) => crate::GamePaths::with_custom(PathBuf::from(p)),
            Err(_) => crate::GamePaths::from_steam()?,
        };
        let scales = ColorScales::load_from_game(&paths)?;
        assert_eq!(scales.blocks.len(), 32);
        // порядок назв (регістр як у файлі)
        let expected = [
            "Black",
            "Green",
            "Orange",
            "light blue",
            "light grey",
            "light brown",
            "dark yellow",
            "yellow",
            "dark grey",
            "light yellow",
            "grey",
            "dark green",
            "blue",
            "light red",
            "white",
            "dark brown",
            "red",
            "light green",
            "light orange",
            "brown",
            "dark blue",
            "dark red",
            "dark orange",
            "water",
            "border",
            "border outline",
        ];
        for (i, name) in expected.iter().enumerate() {
            assert!(
                scales.blocks[i].name.eq_ignore_ascii_case(name),
                "блок {i}: «{}» ≠ «{name}»",
                scales.blocks[i].name
            );
        }
        // вода = блок 23
        assert_eq!(scales.index_of("water"), Some(23));

        let pal = scales.build_palette();
        let dump = std::fs::read(
            Path::new(env!("CARGO_MANIFEST_DIR")).join("data/palette565.bin"),
        )?;
        assert_eq!(dump.len(), 16384);
        let dumped: Vec<u16> = dump
            .chunks_exact(2)
            .map(|c| u16::from_le_bytes([c[0], c[1]]))
            .collect();

        let mut near = 0usize;
        let mut exact = 0usize;
        let mut total = 0usize;
        for col in 0..64usize {
            for lvl in 32..=96usize {
                let a = dumped[(lvl << 6) | col];
                let b = pal[(lvl << 6) | col];
                let ab = ((a >> 11) & 0x1F, (a >> 5) & 0x3F, a & 0x1F);
                let bb = ((b >> 11) & 0x1F, (b >> 5) & 0x3F, b & 0x1F);
                total += 1;
                if a == b {
                    exact += 1;
                }
                if [ab.0, ab.1, ab.2]
                    .iter()
                    .zip([bb.0, bb.1, bb.2])
                    .all(|(x, y)| (i32::from(*x) - i32::from(y)).abs() <= 1)
                {
                    near += 1;
                }
            }
        }
        let pct = 100 * near / total;
        println!("палітра: точних {exact}/{total}, ±1 крок=0x{near}/{total} ({pct}%)");
        assert!(pct >= 90, "замало збігів із дампом: {pct}%");
        Ok(())
    }
}