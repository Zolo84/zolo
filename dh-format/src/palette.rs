//! Палітри: palette.act (глобальна), *_palette.bmp (територіальні), 256×4 BGR→RGB.
//! RE: re/RE-graphics.md §3 (CPalette): палітра = 256 × PALETTEENTRY-записів (4 байти)
//! на зсуві +0x104 (клас 0x110A байт); `LoadPalette` кешує через шлях `gfx\palette\%s`,
//! глобальна палітра — `palette.act` (Adobe Color Table), територіальні — `*_palette.bmp`
//! (Plains/trees/Mountain/Desert/Marsh/hills/djungle), стрілки — `T_MAP_ARROWS.bmp` + `arrow.bmp`.
//!
//! Перевірено на реальних файлах гри:
//! - `gfx/palette/Palette.act` — рівно 768 байт = 256×3, порядок R,G,B (обмін НЕ потрібен).
//! - `gfx/palette/beach_palette.bmp` (8-бітний BMP, biClrUsed=16): записи палітри в файлі
//!   лежать як (B,G,R,reserved) — наприклад (0,255,0,0) і (0,0,255,0); отже з файлу читаємо
//!   BGR і міняємо R↔B, щоб отримати RGB. У грі DirectDraw робить той самий обмін
//!   (BGR→RGB) після читання BMP — див. RE §3.

use std::collections::BTreeMap;
use std::path::{Path, PathBuf};

use anyhow::{bail, Context};

use crate::GamePaths;

/// 256-кольорова палітра; кожен колір — `[R, G, B]` (звичайний порядок RGB).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Palette {
    /// Рівно 256 записів. Індекс = індекс пікселя в 8-бітних зображеннях.
    pub colors: Vec<[u8; 3]>,
}

impl Default for Palette {
    /// Чорна палітра (усі 256 кольорів = (0,0,0)) — для заповнення незаданих індексів.
    fn default() -> Self {
        Self {
            colors: vec![[0, 0, 0]; 256],
        }
    }
}

/// Adobe Color Table (.act): 256×3 байти, записи в порядку R,G,B (без обміну).
///
/// Опційно, після 768 байт, ідуть 4 байти прозорості (u16 індекс + u16 кількість,
/// little-endian) — у файлах гри відсутні (`Palette.act` = рівно 768 байт),
/// тому хвіст ігнорується; валідується лише достатня довжина.
pub fn load_act(path: &Path) -> anyhow::Result<Palette> {
    let data = std::fs::read(path).with_context(|| format!("читання .act: {}", path.display()))?;
    if data.len() < 768 {
        bail!(
            "palette.act замалий: {} байт, потрібно >= 768 (256×3): {}",
            data.len(),
            path.display()
        );
    }
    // bytes 768..772 — опційний блок прозорості (індекс, кількість): тут не зберігається.
    let mut colors = Vec::with_capacity(256);
    for i in 0..256 {
        colors.push([data[i * 3], data[i * 3 + 1], data[i * 3 + 2]]);
    }
    Ok(Palette { colors })
}

/// 8-бітний BMP: витягує палітру (до 256 записів) у порядку RGB.
///
/// Палітра BMP у файлі зберігається як RGBQUAD `(B, G, R, reserved)` — перевірено
/// на реальних файлах (`*_palette.bmp`), тому після читання міняємо R↔B.
/// Підтримується тільки BITMAPINFOHEADER (biSize=40) із BI_RGB без стиснення;
/// якщо biClrUsed=0 — береться 256 записів; якщо файл містить менше (напр. 16
/// у beach_palette.bmp) — решта заповнюється чорним, до 256.
pub fn load_bmp_palette(path: &Path) -> anyhow::Result<Palette> {
    let data = std::fs::read(path).with_context(|| format!("читання BMP: {}", path.display()))?;
    if data.len() < 54 || &data[0..2] != b"BM" {
        bail!("не BMP-файл (сигнатура 'BM'): {}", path.display());
    }
    let pixel_off = u32::from_le_bytes(data[10..14].try_into().unwrap()) as usize;
    let hdr_size = u32::from_le_bytes(data[14..18].try_into().unwrap()) as usize;
    if hdr_size < 40 {
        bail!(
            "непідтримуваний BMP-заголовок (biSize={hdr_size}): {}",
            path.display()
        );
    }
    let bpp = u16::from_le_bytes(data[28..30].try_into().unwrap());
    if bpp != 8 {
        bail!(
            "палітровий BMP має бути 8-бітним (bpp={bpp}): {}",
            path.display()
        );
    }
    let compression = u32::from_le_bytes(data[30..34].try_into().unwrap());
    if compression != 0 {
        bail!(
            "стиснені BMP не підтримуються (biCompression={compression}): {}",
            path.display()
        );
    }
    let clr_used = u32::from_le_bytes(data[46..50].try_into().unwrap()) as usize;
    let pal_off = 14 + hdr_size;
    if pixel_off < pal_off {
        bail!(
            "BMP пошкоджено (зміщення пікселів {pixel_off} < палітри {pal_off}): {}",
            path.display()
        );
    }
    // Скільки записів можна прочитати: за заголовком (biClrUsed або 256 для 8-біт)
    // і за фактичним простором до даних пікселів.
    let hint = if clr_used > 0 { clr_used } else { 256 };
    let avail = (pixel_off - pal_off) / 4;
    let n = hint.min(avail).min(256);
    let mut colors = vec![[0, 0, 0]; 256];
    for i in 0..n {
        let e = pal_off + i * 4;
        // Файл: B,G,R,reserved → у пам'ять: [R,G,B].
        colors[i] = [data[e + 2], data[e + 1], data[e]];
    }
    Ok(Palette { colors })
}

/// Глобальна палітра гри: `gfx/palette/palette.act`.
///
/// Спочатку шукає в mod-каталозі (`Mods/<mod>/gfx/palette/`), потім у корені гри.
/// На Linux регістр має значення, а реальний файл називається `Palette.act` —
/// тому перебираються варіанти регістру імені.
pub fn load_default(paths: &GamePaths) -> anyhow::Result<Palette> {
    let mut tried = Vec::new();
    for base in [&paths.mod_dir, &paths.root] {
        let dir = base.join("gfx/palette");
        if !dir.is_dir() {
            continue;
        }
        for name in ["palette.act", "Palette.act", "PALETTE.ACT"] {
            let p = dir.join(name);
            if p.is_file() {
                return load_act(&p);
            }
            tried.push(p);
        }
    }
    bail!(
        "palette.act не знайдено (шукав: {})",
        tried
            .iter()
            .map(|p| p.display().to_string())
            .collect::<Vec<_>>()
            .join(", ")
    )
}

/// Колір за індексом (0..256); `None`, якщо індекс поза межами.
pub fn index_to_rgb(pal: &Palette, i: usize) -> Option<[u8; 3]> {
    pal.colors.get(i).copied()
}

/// Найближчий колір палітри до `rgb` (простий лінійний пошук за
/// квадратом евклідової відстані). Повертає індекс 0..256.
pub fn rgb_to_index(pal: &Palette, rgb: [u8; 3]) -> usize {
    let mut best = 0usize;
    let mut best_d = u32::MAX;
    for (i, c) in pal.colors.iter().enumerate() {
        let dr = c[0] as i32 - rgb[0] as i32;
        let dg = c[1] as i32 - rgb[1] as i32;
        let db = c[2] as i32 - rgb[2] as i32;
        let d = (dr * dr + dg * dg + db * db) as u32;
        if d < best_d {
            best_d = d;
            best = i;
            if d == 0 {
                break;
            }
        }
    }
    best
}

/// Усі територіальні палітри гри: `*_palette.bmp` з `gfx/map/` та `gfx/palette/`
/// (рекурсивно, включно з підкаталогами flags/shields/units/landscape).
///
/// Ключ запису — ім'я файлу без суфікса `_palette` (напр. `landscape`, `beach`,
/// `flag`), значення — сама палітра. Спершу скануються кореневі `gfx/*`, потім
/// mod-каталог `Mods/<mod>/gfx/*` — записи mod-у перекривають кореневі з тим
/// самим ключем. Результат відсортований за ключем для детермінованості.
pub fn map_terrain_palettes(paths: &GamePaths) -> anyhow::Result<Vec<(String, Palette)>> {
    let mut out: BTreeMap<String, Palette> = BTreeMap::new();
    for base in [&paths.root, &paths.mod_dir] {
        for sub in ["gfx/map", "gfx/palette"] {
            let dir = base.join(sub);
            if !dir.is_dir() {
                continue;
            }
            for path in scan_bmps(&dir)? {
                if let Some(key) = palette_key(&path) {
                    let pal = load_bmp_palette(&path)
                        .with_context(|| format!("палітра місцевості: {}", path.display()))?;
                    out.insert(key, pal);
                }
            }
        }
    }
    Ok(out.into_iter().collect())
}

/// Палітри місцевості для тайлів tiles.bmp, індексовані типом терену як у
/// FUN_00417740 (строки `s_*_palette_bmp`): 0=landscape (Plains), 1=trees (Forest),
/// 2=mountain, 3=desert, 4=marsh, 5=hills, 6=djungle.
///
/// Відсутні файли замінюються landscape (у встановленій грі окремих
/// `trees_palette.bmp`/`*_d.bmp` немає — тайли вже зібрані в tiles.bmp як індекси).
#[derive(Debug, Clone)]
pub struct TerrainPalettes {
    /// 7 палітр за індексом типу місцевості (0..=6), кожна 256 кольорів RGB.
    pub palettes: Vec<Palette>,
}

impl TerrainPalettes {
    pub fn load(paths: &GamePaths) -> anyhow::Result<Self> {
        let map = map_terrain_palettes(paths)?;
        let by_name: BTreeMap<&str, &Palette> = map.iter().map(|(k, v)| (k.as_str(), v)).collect();
        let get = |names: &[&str]| -> Option<Palette> {
            names
                .iter()
                .find_map(|n| by_name.get(*n))
                .map(|p| (*p).clone())
        };
        let landscape = get(&["landscape", "plains"])
            .context("жодна палітра місцевості (landscape_palette.bmp) не знайдена")?;
        let mut palettes = Vec::with_capacity(7);
        palettes.push(landscape.clone()); // 0 Plains
        palettes.push(get(&["trees", "landscape"]).unwrap_or_else(|| landscape.clone())); // 1 Forest
        palettes.push(get(&["mountain"]).unwrap_or_else(|| landscape.clone())); // 2
        palettes.push(get(&["desert"]).unwrap_or_else(|| landscape.clone())); // 3
        palettes.push(get(&["marsh"]).unwrap_or_else(|| landscape.clone())); // 4
        palettes.push(get(&["hills"]).unwrap_or_else(|| landscape.clone())); // 5
        palettes.push(get(&["djungle"]).unwrap_or_else(|| landscape.clone())); // 6
        Ok(Self { palettes })
    }

    /// Колір RGB за індексом типу місцевості (0..=6) та індексом палітри пікселя.
    #[inline]
    pub fn color(&self, terrain: usize, pal_idx: usize) -> [u8; 3] {
        self.palettes
            .get(terrain.min(6))
            .and_then(|p| p.colors.get(pal_idx.min(255)))
            .copied()
            .unwrap_or([0, 0, 0])
    }
}

/// Рекурсивний пошук усіх *.bmp у каталозі (без сортування всередині рівня —
/// порядок визначає зовнішній BTreeMap за ключем).
fn scan_bmps(dir: &Path) -> anyhow::Result<Vec<PathBuf>> {
    let mut out = Vec::new();
    let mut stack = vec![dir.to_path_buf()];
    while let Some(d) = stack.pop() {
        let rd = std::fs::read_dir(&d)
            .with_context(|| format!("сканування каталогу: {}", d.display()))?;
        for ent in rd {
            let ent = ent.with_context(|| format!("читання каталогу: {}", d.display()))?;
            let p = ent.path();
            let ft = ent
                .file_type()
                .with_context(|| format!("тип файлу: {}", p.display()))?;
            if ft.is_dir() {
                stack.push(p);
            } else if ft.is_file() && p.extension().is_some_and(|e| e.eq_ignore_ascii_case("bmp")) {
                out.push(p);
            }
        }
    }
    Ok(out)
}

/// Ключ палітри зі шляху `.../<ключ>_palette.bmp`; `None`, якщо ім'я не підходить.
fn palette_key(path: &Path) -> Option<String> {
    let name = path.file_name()?.to_str()?;
    let lower = name.to_ascii_lowercase();
    lower
        .strip_suffix("_palette.bmp")
        .map(|stem| stem.to_string())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn act_roundtrip() {
        let dir = std::env::temp_dir().join("dh_pal_test");
        std::fs::create_dir_all(&dir).unwrap();
        // 256×3 + опційний блок прозорості (індекс 5, 1 колір) — має ігноруватися.
        let mut raw = Vec::with_capacity(772);
        for i in 0..256 {
            raw.extend_from_slice(&[i as u8, 255 - i as u8, (i * 7) as u8]);
        }
        raw.extend_from_slice(&[5, 0, 1, 0]);
        let p = dir.join("t.act");
        std::fs::write(&p, &raw).unwrap();
        let pal = load_act(&p).unwrap();
        assert_eq!(pal.colors.len(), 256);
        assert_eq!(pal.colors[0], [0, 255, 0]);
        assert_eq!(pal.colors[255], [255, 0, 249]); // 255*7 = 1785 & 0xFF = 249
        std::fs::remove_dir_all(&dir).unwrap();
    }

    #[test]
    fn lookup_helpers() {
        let pal = Palette {
            colors: (0..256).map(|i| [i as u8, 0, 255 - i as u8]).collect(),
        };
        assert_eq!(index_to_rgb(&pal, 0), Some([0, 0, 255]));
        assert_eq!(index_to_rgb(&pal, 256), None);
        // Точний збіг має знайти саме цей індекс; поруч із ним — найближчий.
        assert_eq!(rgb_to_index(&pal, [10, 0, 245]), 10);
        assert!(rgb_to_index(&pal, [11, 0, 245]) <= 11);
        assert_eq!(rgb_to_index(&pal, [0, 0, 255]), 0);
    }

    /// Перевірка на реальній установці гри (Steam); пропускається звичайним `cargo test`.
    #[test]
    #[ignore]
    fn load_default_real_game() {
        let paths = GamePaths::from_steam().expect("Steam-установка гри");
        let pal = load_default(&paths).expect("palette.act має існувати");
        assert_eq!(
            pal.colors.len(),
            256,
            "палітра має містити рівно 256 кольорів"
        );
        // Реальний Palette.act: 768 байт, перший колір (0,0,0).
        let bmps = map_terrain_palettes(&paths).expect("сканування *_palette.bmp");
        assert!(!bmps.is_empty(), "має бути хоча б одна *_palette.bmp");
        assert!(bmps.iter().any(|(k, _)| k == "landscape"));
    }
}
