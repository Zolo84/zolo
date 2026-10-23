//! Бітмап-шрифти Darkest Hour (`gfx/fonts`).
//!
//! Формат (RE-аналіз: `re/RE-fonts.md`):
//! - Файл — класичний 8-бітний палітровий BMP, bottom-up (height > 0), без
//!   стиснення; розмір W × (≤223·W): один стовпець квадратних клітинок W×W,
//!   де W = ширина зображення = номінальний розмір шрифту (8/10/14/18/20/24).
//! - Клітинка k (зверху зображення) = символ `0x21 + k`; усього ≤ 223 клітинки,
//!   тобто коди 0x21..=0xFF. Решта рядків (хвіст файлу) ігнорується.
//! - Прозорість = індекс пікселя 0xFF; будь-який інший індекс = чорнило
//!   (палітра для маски не потрібна).
//! - Гліфи вирівняні **донизу** клітинки; ширина символа = права колонка
//!   чорнила + 1 (порожня клітинка → 1) — шрифт пропорційний.
//! - Каталоги: файли прямо в `gfx/fonts/` = англійський набір (мова 0, fallback
//!   `gfx\fonts\%s`), підпапки = номери мов із `settings.cfg`: `5/` = польська
//!   (CP1250 + Ą Ź Ż ą ż), `7/` = кирилиця CP1251 (А..я = 0xC0..0xFF, українські
//!   І=0xB2, Ї=0xAF, Є=0xAA, ґ=0xB4; 0xBF 'ї' = чорний квадрат-заглушка).
//!
//! Гліфи зберігаються за **сирим байтом** коду символа (`glyphs[byte]`) — як в
//! оригінальному движку, що малює текст побайтово (`table[code]`). Тому
//! перекодування з CP1251/CP1250 в Unicode не потрібне: `FontEncoding` — лише
//! метадані про мову набору, а індекс гліфа = сам байт рядка.

use std::path::Path;

use crate::GamePaths;

/// Мова/кодування набору шрифтів (впливає лише на інтерпретацію байтів;
/// мапа гліфів завжди «сирий байт → гліф»).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum FontEncoding {
    /// Англійський набір (мова 0): файли прямо в `gfx/fonts/`. Байти 0x21..0xFF
    /// у порядку CP1250; кирилиці немає (в euro14 — 27 порожніх клітинок).
    English,
    /// Польський набір (`5/`): CP1250 + польські літери
    /// (Ą=0xA5, Ź=0x8F, Ż=0xAF, ą=0xB9, ż=0xBF).
    Polish1250,
    /// Кириличний набір (`7/`): CP1251 — А..я = 0xC0..0xFF, українські
    /// І=0xB2, Ї=0xAF, Є=0xAA, ґ=0xB4; 'ї'=0xBF — квадрат-заглушка.
    Russian1251,
}

impl FontEncoding {
    /// Кодування за іменем підпапки `gfx/fonts` (номер мови з `settings.cfg`;
    /// невідомі номери вантажаться як сирий набір — мапа байтів однакова).
    pub fn from_dir_name(name: &str) -> FontEncoding {
        match name {
            "5" => FontEncoding::Polish1250,
            "7" => FontEncoding::Russian1251,
            _ => FontEncoding::English,
        }
    }
}

/// Один гліф: бітові рядки (1 = чорнило) для прямого рендера.
///
/// Завжди повна висота клітинки (гліф вирівняний донизу — верхні рядки можуть
/// бути порожні), ширина обрізана по правій колонці чорнила. Рядок = `ceil(w/8)`
/// байт, біт 7 = найлівіший піксель.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Glyph {
    /// Ширина = права колонка чорнила + 1; порожня клітинка → 1 (як у движку).
    pub w: u8,
    /// Висота = сторона клітинки (номінальний розмір шрифту W).
    pub h: u8,
    /// Бітові рядки: `ceil(w/8)` байт на рядок, рядки зверху вниз.
    pub data: Vec<u8>,
}

impl Glyph {
    /// Чи немає в гліфі жодного пікселя чорнила.
    pub fn is_empty(&self) -> bool {
        self.data.iter().all(|&b| b == 0)
    }

    /// Піксель (x, y) гліфа: 1 = чорнило.
    pub fn bit_at(&self, x: u32, y: u32) -> bool {
        debug_assert!(x < u32::from(self.w) && y < u32::from(self.h));
        let stride = (usize::from(self.w) + 7) / 8;
        let row = &self.data[y as usize * stride..(y as usize + 1) * stride];
        row[x as usize / 8] & (0x80 >> (x % 8)) != 0
    }
}

/// Бітмап-шрифт: слот `glyphs[byte]` = гліф символа з кодом `byte`.
///
/// Заповнюються коди 0x21..=0xFF (з клітинок BMP); `None` = гліфа немає
/// (0x00..0x20 і, для неповних файлів на кшталт root/eurostilecond10, хвіст
/// 0xF3..0xFF) — крок тоді = `size`, як у движку.
#[derive(Debug, Clone, PartialEq)]
pub struct BitmapFont {
    /// Номінальний розмір шрифту = ширина зображення = сторона клітинки W.
    pub size: u32,
    /// Гліфи за сирим байтом коду (0..255).
    pub glyphs: [Option<Glyph>; 256],
    /// Мова/кодування набору (root / 5 / 7).
    pub encoding: FontEncoding,
    /// Ім'я файлу без розширення, напр. `eurostilecond14`.
    pub name: String,
    /// Каталог набору: `root` (файли прямо в `gfx/fonts`), `5`, `7`, ...
    pub set: String,
}

impl BitmapFont {
    pub fn glyph(&self, byte: u8) -> Option<&Glyph> {
        self.glyphs[byte as usize].as_ref()
    }

    /// Крок курсора після символа: ширина гліфа, або `size` якщо гліфа немає
    /// (пробіл 0x20 → `size` — як в оригінальному рендерері).
    pub fn advance(&self, byte: u8) -> u32 {
        self.glyph(byte)
            .map(|g| u32::from(g.w))
            .filter(|&w| w > 0)
            .unwrap_or(self.size)
    }
}

/// Завантажує всі шрифти з `<root>/gfx/fonts`: `*.bmp` на верхньому рівні =
/// англійський набір (root), `*.bmp` у підпапках `5/`, `7/`, ... = мовні набори
/// (ім'я підпапки = номер мови з `settings.cfg`). Не-BMP файли (напр. `*.txt`)
/// пропускаються; биті BMP — з `log::warn!`, але завантаження триває.
pub fn load_fonts(paths: &GamePaths) -> anyhow::Result<Vec<BitmapFont>> {
    let fonts_dir = paths.root.join("gfx").join("fonts");

    let mut top_files: Vec<std::path::PathBuf> = Vec::new();
    let mut subdirs: Vec<std::path::PathBuf> = Vec::new();
    for entry in std::fs::read_dir(&fonts_dir)? {
        let entry = match entry {
            Ok(e) => e,
            Err(e) => {
                log::warn!("gfx/fonts: пропускаю запис: {e}");
                continue;
            }
        };
        let p = entry.path();
        if p.is_dir() {
            subdirs.push(p);
        } else if is_bmp(&p) {
            top_files.push(p);
        }
    }
    top_files.sort();
    subdirs.sort();

    let mut fonts = Vec::new();
    for path in top_files {
        match load_bmp_font(&path, FontEncoding::English, "root") {
            Ok(f) => fonts.push(f),
            Err(e) => log::warn!("пропускаю {:?}: {e:#}", path),
        }
    }
    for dir in subdirs {
        let set = dir
            .file_name()
            .and_then(|n| n.to_str())
            .unwrap_or("?")
            .to_string();
        let encoding = FontEncoding::from_dir_name(&set);
        let mut files: Vec<std::path::PathBuf> = std::fs::read_dir(&dir)
            .map_err(|e| anyhow::anyhow!("gfx/fonts/{set}: {e}"))?
            .filter_map(|e| e.ok())
            .map(|e| e.path())
            .filter(|p| is_bmp(p))
            .collect();
        files.sort();
        for path in files {
            match load_bmp_font(&path, encoding, &set) {
                Ok(f) => fonts.push(f),
                Err(e) => log::warn!("пропускаю {:?}: {e:#}", path),
            }
        }
    }
    Ok(fonts)
}

fn is_bmp(p: &Path) -> bool {
    p.extension()
        .is_some_and(|e| e.eq_ignore_ascii_case("bmp"))
}

/// Парсить один файл шрифту: 8-бітний палітровий BMP → BitmapFont.
fn load_bmp_font(path: &Path, encoding: FontEncoding, set: &str) -> anyhow::Result<BitmapFont> {
    let bytes = std::fs::read(path)?;
    let (w, h, pixels) = parse_8bpp_bmp(&bytes)?;
    let name = path
        .file_stem()
        .and_then(|s| s.to_str())
        .unwrap_or("?")
        .to_string();

    // Стовпець квадратних клітинок: клітинка k (зверху) = символ 0x21+k.
    // Зайві рядки хвоста файлу (root-версії) не читаються.
    let cells = (h / w).min(223);
    let glyphs = std::array::from_fn(|_| None);
    let mut font = BitmapFont {
        size: w as u32,
        glyphs,
        encoding,
        name,
        set: set.to_string(),
    };
    for k in 0..cells {
        let code = 0x21usize + k;
        font.glyphs[code] = Some(glyph_from_cell(&pixels, w, k));
    }
    Ok(font)
}

/// Гліф із клітинки k (рядки `k*w..(k+1)*w` топ-даун буфера):
/// чорнило = байт != 0xFF, ширина = права колонка чорнила + 1 (порожня → 1).
fn glyph_from_cell(pixels: &[u8], w: usize, k: usize) -> Glyph {
    let mut rightmost: i32 = -1;
    for row in 0..w {
        let base = (k * w + row) * w;
        for col in 0..w {
            if pixels[base + col] != 0xFF {
                rightmost = rightmost.max(col as i32);
            }
        }
    }
    let gw = if rightmost < 0 { 1 } else { (rightmost + 1) as usize };
    let stride = (gw + 7) / 8;
    let mut data = vec![0u8; stride * w];
    for row in 0..w {
        let base = (k * w + row) * w;
        for col in 0..gw {
            if pixels[base + col] != 0xFF {
                data[row * stride + col / 8] |= 0x80 >> (col % 8);
            }
        }
    }
    Glyph { w: gw as u8, h: w as u8, data }
}

/// Чесний розбір 8-бітного палітрового BMP (bottom-up, biCompression=0).
/// Повертає (ширина, висота, пікселі top-down, крок = ширина — без падінгу).
/// Палітра не потрібна: маска = «індекс != 0xFF».
fn parse_8bpp_bmp(bytes: &[u8]) -> anyhow::Result<(usize, usize, Vec<u8>)> {
    if bytes.len() < 54 || &bytes[0..2] != b"BM" {
        anyhow::bail!("не BMP (немає сигнатури 'BM')");
    }
    let u16at = |o: usize| u16::from_le_bytes(bytes[o..o + 2].try_into().unwrap());
    let u32at = |o: usize| u32::from_le_bytes(bytes[o..o + 4].try_into().unwrap());
    let i32at = |o: usize| i32::from_le_bytes(bytes[o..o + 4].try_into().unwrap());

    let bi_size = u32at(14);
    if bi_size < 40 {
        anyhow::bail!("BITMAPINFOHEADER замалий (biSize={bi_size})");
    }
    let off_bits = u32at(10) as usize;
    let width = i32at(18);
    let height = i32at(22);
    let planes = u16at(26);
    let bpp = u16at(28);
    let compression = u32at(30);

    if planes != 1 {
        anyhow::bail!("planes={planes} != 1");
    }
    if bpp != 8 {
        anyhow::bail!("не 8-бітний палітровий (bpp={bpp})");
    }
    if compression != 0 {
        anyhow::bail!("стиснення biCompression={compression} не підтримується");
    }
    if width <= 0 || height <= 0 {
        anyhow::bail!("очікується bottom-up BMP (width,height > 0): {width}×{height}");
    }
    let (w, h) = (width as usize, height as usize);

    // 8 біт/піксель: рядок у файлі вирівняний до 4 байт.
    let row_stride = (w + 3) / 4 * 4;
    let need = off_bits + row_stride * h;
    if bytes.len() < need {
        anyhow::bail!(
            "файл замалий: {} байт < {need} (очікувано {}×{}, offBits={off_bits})",
            bytes.len(),
            w,
            h
        );
    }

    // bottom-up → top-down: рядок r зображення = рядок (h-1-r) файлу.
    let mut pixels = vec![0u8; w * h];
    for r in 0..h {
        let src = off_bits + (h - 1 - r) * row_stride;
        pixels[r * w..(r + 1) * w].copy_from_slice(&bytes[src..src + w]);
    }
    Ok((w, h, pixels))
}

/// Рендер тексту в бітову маску (1 = піксель) з масштабом `scale` (≥1).
///
/// Повертає `(width, height, mask)`: mask = рядки по `ceil(width/8)` байт,
/// біт 7 = найлівіший піксель (та сама угода, що в [`Glyph::data`]).
///
/// - кожен байт тексту = код символа напряму (однобайтове кодування шрифту);
/// - `\n` і `\r` — новий рядок: y += size·scale, x = 0;
/// - відсутні коди та пробіл 0x20: крок = size (нічого не малюється);
/// - крок пропорційний: ширина гліфа (права колонка чорнила + 1) · scale.
///
/// Колірні теги `§X` і escape-`%` — задача кольорового рендера поверхні, тут
/// не обробляються (маска зберігає лише форму).
pub fn render_text(font: &BitmapFont, text: &[u8], scale: u32) -> (u32, u32, Vec<u8>) {
    let scale = scale.max(1);
    let line_step = font.size * scale;

    // Розміри: ширина = максимум по рядках, висота = кількість рядків × крок.
    let mut line_width = 0u32;
    let mut width = 0u32;
    let mut lines = 1u32;
    for &b in text {
        if b == b'\n' || b == b'\r' {
            width = width.max(line_width);
            line_width = 0;
            lines += 1;
        } else {
            line_width += font.advance(b) * scale;
        }
    }
    width = width.max(line_width);
    let height = lines * line_step;
    let stride = (width as usize + 7) / 8;
    let mut mask = vec![0u8; stride * height as usize];

    // Малювання гліфів.
    let mut x = 0u32;
    let mut y = 0u32;
    for &b in text {
        if b == b'\n' || b == b'\r' {
            x = 0;
            y += line_step;
            continue;
        }
        let adv = font.advance(b);
        if let Some(g) = font.glyph(b) {
            let gstride = (usize::from(g.w) + 7) / 8;
            for r in 0..u32::from(g.h) {
                let row = &g.data[r as usize * gstride..(r as usize + 1) * gstride];
                for c in 0..u32::from(g.w) {
                    if row[c as usize / 8] & (0x80 >> (c % 8)) == 0 {
                        continue;
                    }
                    // піксель гліфа → блок scale×scale у маску
                    for dy in 0..scale {
                        for dx in 0..scale {
                            let px = x + c * scale + dx;
                            let py = y + r * scale + dy;
                            mask[py as usize * stride + px as usize / 8] |= 0x80 >> (px % 8);
                        }
                    }
                }
            }
        }
        x += adv * scale;
    }
    (width, height, mask)
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Інтеграційний тест на реальних файлах гри (потрібен Steam-інсталятор).
    /// Запуск: `cargo test -p dh-format -- --ignored fonts`
    fn game_fonts() -> Vec<BitmapFont> {
        let paths = GamePaths::from_steam().expect("гра не знайдена (Steam)");
        load_fonts(&paths).expect("завантаження шрифтів")
    }

    fn find<'a>(fonts: &'a [BitmapFont], set: &str, name: &str) -> &'a BitmapFont {
        fonts
            .iter()
            .find(|f| f.set == set && f.name == name)
            .unwrap_or_else(|| panic!("шрифт {set}/{name} не знайдено"))
    }

    /// Кількість наборів і файлів: 8 імен × {root, 5, 7} = 24 шрифти.
    #[test]
    #[ignore = "потребує встановленої гри (Steam: Darkest Hour A HOI Game)"]
    fn loads_all_24_font_files() {
        let fonts = game_fonts();
        assert!(
            fonts.len() >= 24,
            "очікувано ≥24 шрифти (8 імен × root/5/7), знайдено {}",
            fonts.len()
        );
        assert!(fonts.iter().any(|f| f.set == "root" && f.name == "eurostilecond14"));
        assert!(fonts.iter().any(|f| f.set == "5" && f.name == "eurostilecond14"));
        assert!(fonts.iter().any(|f| f.set == "7" && f.name == "eurostilecond14"));
    }

    /// root/eurostilecond14.bmp: ≈223 клітинки, 'A' не порожній, 'i' < 'm'.
    #[test]
    #[ignore = "потребує встановленої гри (Steam: Darkest Hour A HOI Game)"]
    fn root_eurostilecond14_cells_and_proportional_widths() {
        let fonts = game_fonts();
        let f = find(&fonts, "root", "eurostilecond14");
        assert_eq!(f.size, 14, "W = ширина зображення = 14");
        assert_eq!(f.encoding, FontEncoding::English);

        let cells = f.glyphs.iter().filter(|g| g.is_some()).count();
        assert!(
            (220..=223).contains(&cells),
            "очікувано ≈223 клітинки (0x21..=0xFF), знайдено {cells}"
        );

        // 'A' (0x41) — клітинка 0x21-0x41+... не порожня
        let a = f.glyph(b'A').expect("гліф 'A'");
        assert!(!a.is_empty(), "'A' не має чорнила");
        assert_eq!(a.h, 14, "висота гліфа = висота клітинки");

        // пропорційність: 'i' вужче за 'm' (RE: root/еuro14 'i'→3, 'm'→8)
        let i_w = f.glyph(b'i').expect("гліф 'i'").w;
        let m_w = f.glyph(b'm').expect("гліф 'm'").w;
        assert!(i_w < m_w, "'i' (w={i_w}) має бути вужчим за 'm' (w={m_w})");
    }

    /// Кириличний набір 7/: українські літери на місцях CP1251.
    #[test]
    #[ignore = "потребує встановленої гри (Steam: Darkest Hour A HOI Game)"]
    fn russian_set_has_ukrainian_glyphs() {
        let fonts = game_fonts();
        let f = find(&fonts, "7", "eurostilecond14");
        assert_eq!(f.encoding, FontEncoding::Russian1251);
        // А=0xC0, І=0xB2, Є=0xAA — не порожні
        for code in [0xC0u8, 0xB2, 0xAA] {
            let g = f.glyph(code).unwrap_or_else(|| panic!("гліф 0x{code:02X}"));
            assert!(!g.is_empty(), "гліф 0x{code:02X} порожній");
        }
    }

    /// render_text: розміри, маска, пропорційність і масштаб.
    #[test]
    #[ignore = "потребує встановленої гри (Steam: Darkest Hour A HOI Game)"]
    fn render_text_mask_and_scale() {
        let fonts = game_fonts();
        let f = find(&fonts, "root", "eurostilecond14");

        let (w, h, mask) = render_text(f, b"TEST", 1);
        assert_eq!(h, 14);
        let exp_w: u32 = b"TEST".iter().map(|&b| f.advance(b)).sum();
        assert_eq!(w, exp_w);
        assert_eq!(mask.len(), ((w as usize + 7) / 8) * h as usize);
        assert!(mask.iter().any(|&b| b != 0), "маска має містити чорнило");

        // масштаб ×2 → ширина ×2, висота ×2
        let (w2, h2, mask2) = render_text(f, b"TEST", 2);
        assert_eq!((w2, h2), (w * 2, h * 2));
        assert_eq!(mask2.len(), ((w2 as usize + 7) / 8) * h2 as usize);

        // пробіл → крок size; новий рядок
        let (w3, h3, _) = render_text(f, b"A A\nB", 1);
        assert_eq!(h3, 14 * 2);
        let w_a = f.advance(b'A');
        assert_eq!(w3, (w_a + f.size + w_a).max(f.advance(b'B')));

        // багаторядковість: ширина = максимум по рядках, висота = рядки × крок
        let (w4, h4, _) = render_text(f, b"AB\nCDEF", 1);
        let exp4: u32 = b"CDEF".iter().map(|&b| f.advance(b)).sum();
        assert_eq!(w4, exp4);
        assert_eq!(h4, 28);
    }
}
