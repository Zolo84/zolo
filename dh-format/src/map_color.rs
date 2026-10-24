//! Точна модель кольору політичної карти з `Darkest Hour.exe`.
//!
//! RE (див. `decomp/004dc010_FUN_004dc010.c` + живий дамп пам'яті під Wine,
//! сесія 2026-10-24): рендер провінцій використовує готову 16-бітну палітру
//! і таблицю освітлення:
//!
//! ```text
//! колір = palette565[ (LUT[light - off] << 6) | scale ]
//! ```
//!
//! де:
//! - `light` — значення освітлення 0..63 з lightmap (L1);
//! - `off`   — поле провінції +0x13E (у грі стабільно 15);
//! - `scale` — поле провінції +0x142 — індекс колірної шкали країни/терену;
//! - `LUT`   — таблиця 0xAA41CB: `LUT[i] = clamp(i + 47, 4, 127)`;
//! - `palette565` — палітра 0xA44C34: 16-біт RGB565, індекс = (рівень << 6) | шкала.
//!
//! Дані дампу знято з живої гри (сценарій 1933, режим Poland):
//! - палітра: `/tmp/dh-pal-game-full.bin` → `data/palette565.bin` (перші 16384 байт);
//! - LUT з контекстом від'ємних індексів: `data/lut.bin` (320 байт: [-64..255]);
//! - шкали провінцій: `data/prov_colors.csv` (id;off;scale, 2769 рядків).
//!
//! Контрольні збіги з екраном гри:
//! - море: шкала 55 (23|0x20) — колонка 55 дампу: (49,73,82) на екрані
//!   = LUT 85-86 → (48,72,80); при LUT 95-96 → (48,64,72) (темна бірюза).
//!   Стара версія «океан = шкала 12» — хибна (походила з інтернет-скріншота);
//! - Польща на скріні (189,174,115) → палітра (184,172,112): шкала 8, LUT 51-52;
//! - Англія (Лондон id 19) = шкала 48 → темно-червоний; Франція (Париж 56) = шкала 44 → синій.

use std::path::Path;

use anyhow::{bail, Context};

/// Шкала моря: блок води (23) | біт «не видиме» (0x20) = 55 — саме її несуть
/// усі морські провінції в дампі (607 записів), і саме колонці 55 відповідає
/// екранний колір моря ((49,73,82) ≈ (48,72,80) при LUT 85-86). Стара версія
/// «вода = шкала 12» — хибна (походила з інтернет-скріншота, не з живих записів).
pub const WATER_SCALE: u8 = crate::colorscale::WATER_BLOCK | crate::colorscale::DARK_FLAG;

/// 16-бітна палітра гри: 8192 записи RGB565 (індекс = (рівень << 6) | шкала).
#[derive(Debug, Clone)]
pub struct GameColorModel {
    /// `palette565.bin`: 16384 байти = 8192 × u16 LE (RGB565).
    palette: Vec<u16>,
    /// `lut.bin`: 320 байт — LUT з контекстом: lut[64..] = індекси 0..255,
    /// lut[0..64] = від'ємні індекси (-64..-1). LUT[i] = clamp(i+47, 4, 127).
    lut: Vec<u8>,
    /// Шкали/зсуви провінцій: [id] = (off, scale).
    prov: Vec<(i8, u8)>,
}

impl GameColorModel {
    /// Модель із ФАЙЛІВ ГРИ (без дампів пам'яті):
    /// - палітра 8192×RGB565 будується з `map/Map_1/colorscales.csv`
    ///   ([`crate::colorscale::ColorScales::build_palette`]);
    /// - LUT генерується за формулою `LUT[i] = clamp(i + 47, 4, 127)`
    ///   (RE-colors.md §3: таблиця 0xAA41CB);
    /// - шкали провінцій тут порожні — рендерер передає їх окремо
    ///   (MapRenderer::prov_scales), бо шкала залежить від ВЛАСНИКА
    ///   (FUN_004dcb20 case 0), а не від самої провінції.
    pub fn from_game(paths: &crate::GamePaths) -> anyhow::Result<Self> {
        let scales = crate::colorscale::ColorScales::load_from_game(paths)?;
        let palette = scales.build_palette();
        let mut lut = Vec::with_capacity(320);
        for i in -64i32..=255 {
            lut.push((i + 47).clamp(4, 127) as u8);
        }
        Ok(Self {
            palette,
            lut,
            prov: Vec::new(),
        })
    }

    /// Завантаження з файлів даних, згенерованих із дампу пам'яті гри.
    pub fn load(data_dir: &Path) -> anyhow::Result<Self> {
        let pal = std::fs::read(data_dir.join("palette565.bin"))
            .context("палітра palette565.bin (дамп 0xA44C34)")?;
        if pal.len() != 16384 {
            bail!("palette565.bin: очікувалося 16384 байти, отримано {}", pal.len());
        }
        let palette = pal
            .chunks_exact(2)
            .map(|c| u16::from_le_bytes([c[0], c[1]]))
            .collect::<Vec<_>>();

        let lutbuf = std::fs::read(data_dir.join("lut.bin"))
            .context("LUT lut.bin (дамп 0xAA41CB + контекст)")?;
        if lutbuf.len() != 320 {
            bail!("lut.bin: очікувалося 320 байтів, отримано {}", lutbuf.len());
        }
        let lut = lutbuf;

        let csv = std::fs::read_to_string(data_dir.join("prov_colors.csv"))
            .context("prov_colors.csv (scale/off провінцій)")?;
        let mut prov = Vec::with_capacity(2770);
        for line in csv.lines() {
            let mut it = line.split(';');
            let (Ok(_id), Ok(off), Ok(scale)) = (
                it.next().unwrap_or("").parse::<u32>(),
                it.next().unwrap_or("").parse::<i32>(),
                it.next().unwrap_or("").parse::<i32>(),
            ) else {
                continue;
            };
            prov.push((off.clamp(-128, 127) as i8, scale.clamp(0, 63) as u8));
        }
        if prov.len() < 2769 {
            bail!(
                "prov_colors.csv: очікувалося >= 2769 записів, отримано {}",
                prov.len()
            );
        }
        Ok(Self {
            palette,
            lut,
            prov,
        })
    }

    /// Точний колір провінції за світлом lightmap-пікселя (0..63).
    ///
    /// Формула гри: `palette565[(LUT[light - off] << 6) | (scale)]`,
    /// з відсіканням LUT-індексу до [-64..255] (запис у межах дампу).
    #[inline]
    pub fn color(&self, prov_id: usize, light: u8) -> [u8; 3] {
        let (off, scale) = self
            .prov
            .get(prov_id)
            .copied()
            .unwrap_or((15, 0));
        self.color_raw(light as i32 - off as i32, scale)
    }

    /// Колір пікселя з даними дампу: шкала береться ЯК Є із запису провінції —
    /// море в дампі несе 55 (23|0x20) і рендериться саме колонкою 55 (старий
    /// спецвипадок «море → шкала 12» не потрібен і був хибним). Невідомий id
    /// (лише PROV0 — пікселів на мапі не має) → колір моря.
    /// light — значення 0..63 з lightmap.
    #[inline]
    pub fn color_exact(&self, prov_id: usize, light: u8) -> [u8; 3] {
        match self.prov.get(prov_id).copied() {
            Some((off, scale)) => self.color_raw(light as i32 - off as i32, scale),
            None => self.color_raw(light as i32 - 15, WATER_SCALE),
        }
    }

    /// Колір моря (шкала 55 = 23|0x20, темна бірюза) за світлом lightmap-пікселя.
    #[inline]
    pub fn water_color(&self, light: u8) -> [u8; 3] {
        self.color_raw(light as i32 - 15, WATER_SCALE)
    }

    /// Колір за шкалою з політичної карти гри (FUN_004dcb20 → FUN_004e8a40):
    /// `колір = palette[(LUT[light − off] << 6) | scale]`, off стабільно 15.
    /// Шкала береться із зовнішньої таблиці (власник → номер кольору з
    /// country.csv; вода = 23|0x20; без власника = 2|0x20) — див.
    /// [`crate::colorscale`] та MapRenderer::prov_scales.
    #[inline]
    pub fn color_scale(&self, scale: u8, light: u8) -> [u8; 3] {
        self.color_raw(light as i32 - 15, scale)
    }

    /// Колір за чистим LUT-індексом (для налагодження/тестів).
    #[inline]
    pub fn color_raw(&self, lut_index: i32, scale: u8) -> [u8; 3] {
        let lut = self.lut_value(lut_index) as usize;
        let idx = ((lut << 6) | (scale as usize & 0x3F)) & 0x1FFF;
        rgb565(self.palette[idx])
    }

    /// LUT[light - off] з обмеженням індексу до [-64..255] (дамп LUT має 320 байт:
    /// [-64..-1] у [0..64], [0..255] у [64..320]).
    #[inline]
    fn lut_value(&self, i: i32) -> u8 {
        let clamped = i.clamp(-64, 255);
        match clamped {
            -64..=-1 => self.lut[(clamped + 64) as usize],
            0..=255 => self.lut[(clamped + 64) as usize],
            _ => unreachable!(),
        }
    }

    /// Шкала кольору провінції (поле +0x142) — для налагодження.
    pub fn scale_of(&self, prov_id: usize) -> u8 {
        self.prov.get(prov_id).map(|(_, s)| *s).unwrap_or(0)
    }

    /// Зсув освітлення провінції (поле +0x13E) — для налагодження.
    pub fn off_of(&self, prov_id: usize) -> i8 {
        self.prov.get(prov_id).map(|(o, _)| *o).unwrap_or(15)
    }

    /// Чи містить палітра колір (для перевірки дампу).
    pub fn has_color(&self, r: u8, g: u8, b: u8) -> bool {
        let target = to_rgb565([r, g, b]);
        self.palette.contains(&target)
    }
}

/// RGB → RGB565 (округлення 8-біт до 5/6/5 біт).
#[inline]
pub fn to_rgb565([r, g, b]: [u8; 3]) -> u16 {
    (((r as u16 >> 3) & 0x1F) << 11) | (((g as u16 >> 2) & 0x3F) << 5) | ((b as u16 >> 3) & 0x1F)
}

/// RGB565 → RGB (5/6/5 біт → повні 8 біт зі «зміщенням» вгору, як у грі).
#[inline]
pub fn rgb565(v: u16) -> [u8; 3] {
    let r = ((v >> 11) & 0x1F) as u8;
    let g = ((v >> 5) & 0x3F) as u8;
    let b = (v & 0x1F) as u8;
    [r * 8, g * 4, b * 8]
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn lut_clamp_matches_dump() {
        // Дамп: LUT[-64..-1] = 4,4,...,4,5,6,...,46; LUT[0..] = 47,48,...,127,127,...
        let m = GameColorModel::load(Path::new(concat!(env!("CARGO_MANIFEST_DIR"), "/data")))
            .expect("дані двигуна в data/");
        assert_eq!(m.lut_value(-64), 4);
        assert_eq!(m.lut_value(-43), 4);
        assert_eq!(m.lut_value(-42), 5);
        assert_eq!(m.lut_value(-1), 46);
        assert_eq!(m.lut_value(0), 47);
        assert_eq!(m.lut_value(1), 48);
        assert_eq!(m.lut_value(80), 127);
        assert_eq!(m.lut_value(255), 127);
        // за межами: clamp
        assert_eq!(m.lut_value(-100), 4);
        assert_eq!(m.lut_value(300), 127);
    }

    #[test]
    fn ocean_color_matches_dump() {
        // Море: шкала 55 (23|0x20). Колонка 55 дампу: рядок 38 → (48,72,80)
        // (живий екран (49,73,82) = рядки 36-39, та сама родина), рядок 56 →
        // (40,56,64), рядок 96 → (8,16,16). color_raw() сам застосовує LUT:
        // рядок R досягається індексом i = R − 47.
        let m = GameColorModel::load(Path::new(concat!(env!("CARGO_MANIFEST_DIR"), "/data")))
            .expect("дані двигуна в data/");
        assert_eq!(WATER_SCALE, 55);
        assert_eq!(m.color_raw(-9, 55), [48, 72, 80]); // LUT(-9)=38
        assert_eq!(m.color_raw(9, 55), [40, 56, 64]); // LUT(9)=56
        assert_eq!(m.color_raw(49, 55), [8, 16, 16]); // LUT(49)=96
        // Морська провінція з дампу (id 2725 = Балтика, off=15, scale=55):
        // light 24 → LUT[9] = 56 → рядок 56 колонки 55 = (40,56,64).
        assert_eq!(m.scale_of(2725), 55);
        assert_eq!(m.color_exact(2725, 24), [40, 56, 64]);
        // PROV0 у дампі = (15, 34) — рендериться як 2|0x20, без спецвипадку.
        assert_eq!(m.scale_of(0), 34);
        // Старий «океан блакитний» колір (шкала 12) лишається лише як факт
        // палітри — море ним НЕ рендериться.
        let old = m.color_raw(0, 12); // LUT(0)=47 → рядок 47 шкали 12
        assert!(old[2] > 180, "шкала 12 справді блакитна: {old:?}");
        assert_ne!(old, m.color_raw(-9, 55));
    }

    #[test]
    fn poland_yellow_matches_screen() {
        // Скрін гри: Польща (189,174,115) → 565 → (184,172,112) = шкала 8, LUT 51-52.
        let m = GameColorModel::load(Path::new(concat!(env!("CARGO_MANIFEST_DIR"), "/data")))
            .expect("дані двигуна в data/");
        let c = m.color_raw(4, 8); // LUT[4] = 51 → (51<<6)|8 = 3272
        assert_eq!(c, [184, 172, 112]);
        let c2 = m.color_raw(5, 8); // LUT[5] = 52 — палітра з кроком 2: той самий колір
        assert_eq!(c2, [184, 172, 112]);
        let c3 = m.color_raw(9, 8); // LUT[9] = 56 → (168,160,104) — темніший жовтий
        assert_eq!(c3, [168, 160, 104]);
        assert!(c[0] > 150 && c[1] > 130 && c[2] < 140, "жовтий: {c:?}");
    }

    #[test]
    fn prov_scales_sane() {
        let m = GameColorModel::load(Path::new(concat!(env!("CARGO_MANIFEST_DIR"), "/data")))
            .expect("дані двигуна в data/");
        // Лондон id 19 — Англія (темно-червоний), Париж 56 — Франція (синій).
        assert_eq!(m.scale_of(19), 48);
        assert_eq!(m.scale_of(56), 44);
        assert_eq!(m.off_of(19), 15);
        assert_eq!(m.off_of(56), 15);
        // Усі scale у межах 0..63 (без сміття).
        for (i, (off, scale)) in m.prov.iter().take(2769).enumerate() {
            assert!((-16..=15).contains(off), "prov {i}: off={off}");
            assert!((0..=63).contains(scale), "prov {i}: scale={scale}");
        }
    }
}