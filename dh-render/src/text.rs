//! Кольоровий текст: стилізований рендер [`BitmapFont`] на канвасі.
//!
//! Текст передається сирими байтами (однобайтове кодування шрифту, як у
//! `dh-format`: кожен байт = код символа; кирилиця набору `7/` — байти CP1251
//! 0xC0..0xFF). `\n` і `\r` переводять рядок; крок рядка = `size · scale`.
//! Масштаб `scale` ≥ 1 (0 трактується як 1).
//!
//! Колірні теги (проста версія оригінального движка): байт `0xA7` (`§`) +
//! літера змінює колір решти рядка — `§W` білий, `§R` червоний, `§G` зелений,
//! `§Y` жовтий, `§r` — скидання до [`TextStyle::color`]. Тег займає 2 байти і
//! не додає ширини; на початку кожного рядка колір = `style.color`; невідомий
//! код після `§` пропускається без зміни кольору. Escape-`%` оригіналу тут не
//! підтримується (проста версія за завданням).
//!
//! Малювання: кожен сегмент рядка однакового кольору рендериться в біт-маску
//! [`dh_format::fonts::render_text`] і блітиться через
//! [`Canvas::draw_bitmap_mask`]; тінь — чорна копія маски зі зсувом (1, 1).

use dh_format::fonts::{render_text, BitmapFont};

use crate::canvas::Canvas;

/// Байт-маркер колірного тега: `0xA7` = `§` (як в оригінальному движку).
const TAG: u8 = 0xA7;

/// Колір тіні: чорний (як у грі).
const SHADOW_COLOR: [u8; 3] = [0, 0, 0];

/// Горизонтальне вирівнювання рядків текстового блока.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TextAlign {
    /// Лівий край кожного рядка на `x` (за замовчуванням).
    Left,
    /// Блок центрується відносно своєї найширшої лінії.
    Center,
    /// Правий край блока на `x`.
    Right,
}

/// Стиль тексту: колір, тінь, масштаб, вирівнювання.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TextStyle {
    /// Основний колір чорнила (RGB, без альфи).
    pub color: [u8; 3],
    /// Чорна тінь зі зсувом (1, 1) під текстом.
    pub shadow: bool,
    /// Масштаб гліфів (≥ 1; 0 = 1).
    pub scale: u32,
    /// Вирівнювання рядків блока.
    pub align: TextAlign,
}

impl Default for TextStyle {
    fn default() -> Self {
        Self {
            color: [255, 255, 255],
            shadow: false,
            scale: 1,
            align: TextAlign::Left,
        }
    }
}

/// Розміри тексту: `(ширина, висота)` — як їх намалює [`draw`].
///
/// Ширина = максимум по рядках, висота = кількість рядків × `size · scale`;
/// колірні теги `§X` ширини не додають. Порожній текст = один порожній рядок
/// (висота `size · scale`) — та сама угода, що в [`render_text`].
pub fn measure(font: &BitmapFont, text: &[u8], scale: u32) -> (u32, u32) {
    let scale = scale.max(1);
    let mut line_w = 0u32;
    let mut width = 0u32;
    let mut lines = 1u32;
    let mut i = 0;
    while i < text.len() {
        let b = text[i];
        if b == TAG && i + 1 < text.len() {
            i += 1; // тег: 2 байти з нульовою шириною
        } else if b == b'\n' || b == b'\r' {
            width = width.max(line_w);
            line_w = 0;
            lines += 1;
        } else {
            line_w += font.advance(b) * scale;
        }
        i += 1;
    }
    width = width.max(line_w);
    (width, lines * font.size * scale)
}

/// Малює текст на канвасі в `(x, y)` (верхній лівий кут першого рядка) зі
/// стилем `style`: переноси рядків, вирівнювання, тінь і колірні теги.
pub fn draw(canvas: &mut Canvas, font: &BitmapFont, text: &[u8], x: i32, y: i32, style: &TextStyle) {
    let scale = style.scale.max(1);
    let line_step = font.size * scale;

    // Розбиваємо на рядки й рахуємо їхні ширини (теги не враховуються);
    // найширший рядок — опорна ширина для Center/Right.
    let mut lines: Vec<(&[u8], u32)> = Vec::new();
    let mut start = 0;
    let mut max_w = 0u32;
    for i in 0..=text.len() {
        let is_end = i == text.len();
        let is_nl = !is_end && (text[i] == b'\n' || text[i] == b'\r');
        if is_end || is_nl {
            let line = &text[start..i];
            let w = line_width(font, line, scale);
            max_w = max_w.max(w);
            lines.push((line, w));
            start = i + 1;
        }
    }

    let mut line_y = y;
    for (line, w) in lines {
        let off_x = match style.align {
            TextAlign::Left => 0i32,
            TextAlign::Center => ((max_w - w) / 2) as i32,
            TextAlign::Right => (max_w - w) as i32,
        };
        draw_line(canvas, font, line, x + off_x, line_y, style, scale);
        line_y += line_step as i32;
    }
}

/// Зручна обгортка [`draw`] для вже відформатованого рядка (String/&str):
/// `draw_fmt(canvas, font, &format!("День {}", n), x, y, &style)`.
pub fn draw_fmt(
    canvas: &mut Canvas,
    font: &BitmapFont,
    text: impl AsRef<[u8]>,
    x: i32,
    y: i32,
    style: &TextStyle,
) {
    draw(canvas, font, text.as_ref(), x, y, style);
}

/// Ширина одного рядка без тегів: сума кроків символів · scale.
fn line_width(font: &BitmapFont, line: &[u8], scale: u32) -> u32 {
    let mut w = 0u32;
    let mut i = 0;
    while i < line.len() {
        if line[i] == TAG && i + 1 < line.len() {
            i += 1; // тег: 2 байти, нульова ширина
        } else {
            w += font.advance(line[i]) * scale;
        }
        i += 1;
    }
    w
}

/// Колір тега `§X`; `None` = невідомий код (тег пропускається без зміни
/// кольору), `§r` = скидання до `style.color`.
fn tag_color(letter: u8, style_color: [u8; 3]) -> Option<[u8; 3]> {
    match letter {
        b'W' => Some([255, 255, 255]),
        b'R' => Some([255, 0, 0]),
        b'G' => Some([0, 255, 0]),
        b'Y' => Some([255, 255, 0]),
        b'r' => Some(style_color),
        _ => None,
    }
}

/// Малює один рядок (без `\n`/`\r`), розбиваючи його на сегменти однакового
/// кольору: тег `§X` завершує поточний сегмент, наступний малюється новим
/// кольором. Повертає намальовану ширину (для кроку курсора).
fn draw_line(
    canvas: &mut Canvas,
    font: &BitmapFont,
    line: &[u8],
    x: i32,
    y: i32,
    style: &TextStyle,
    scale: u32,
) {
    let mut color = style.color;
    let mut seg_start = 0usize;
    let mut seg_x = x;
    let mut i = 0;
    while i < line.len() {
        if line[i] == TAG && i + 1 < line.len() {
            let new = tag_color(line[i + 1], style.color);
            if new != Some(color) {
                // колір змінився (або тег невідомий) → закриваємо сегмент
                seg_x += blit_segment(canvas, font, &line[seg_start..i], seg_x, y, color, style.shadow, scale) as i32;
                seg_start = i + 2;
            } else {
                // тег з тим самим кольором — просто пропускаємо обидва байти
                seg_start = i + 2;
            }
            if let Some(c) = new {
                color = c;
            }
            i += 1; // літера тега; разом із кінцевим i += 1 = +2 байти
        }
        i += 1;
    }
    blit_segment(canvas, font, &line[seg_start..], seg_x, y, color, style.shadow, scale);
}

/// Рендерить сегмент у маску й блітить її кольором (тінь — чорною копією зі
/// зсувом (1, 1)). Повертає ширину сегмента (суму кроків · scale).
fn blit_segment(
    canvas: &mut Canvas,
    font: &BitmapFont,
    seg: &[u8],
    x: i32,
    y: i32,
    color: [u8; 3],
    shadow: bool,
    scale: u32,
) -> u32 {
    if seg.is_empty() {
        return 0;
    }
    let (w, h, mask) = render_text(font, seg, scale);
    if shadow {
        canvas.draw_bitmap_mask(x + 1, y + 1, w, h, &mask, SHADOW_COLOR);
    }
    canvas.draw_bitmap_mask(x, y, w, h, &mask, color);
    w
}

#[cfg(test)]
mod tests {
    use super::*;
    use dh_format::fonts::{FontEncoding, Glyph};

    const WHITE: u32 = 0xFF_FF_FF_FF;
    const RED: u32 = 0xFF_FF_00_00;
    const GREEN: u32 = 0xFF_00_FF_00;
    const YELLOW: u32 = 0xFF_FF_FF_00;
    const BLUE: u32 = 0xFF_00_00_FF;
    const SHADOW: u32 = 0xFF_00_00_00;
    const EMPTY: u32 = 0x00_00_00_00;

    /// Штучний шрифт (без файлів гри): клітинка 2×2, гліфи — суцільні смуги
    /// чорнила заданої ширини на всю висоту (зручно перевіряти позиції).
    /// `'A'` — виняток: `## / #.` (порожній піксель (1,1)), як у canvas.
    fn strip_font(widths: &[(u8, u8)]) -> BitmapFont {
        let mut glyphs = std::array::from_fn(|_| None);
        for &(code, w) in widths {
            let w = usize::from(w.max(1));
            let stride = (w + 7) / 8;
            let mut data = vec![0u8; stride * 2];
            for row in 0..2 {
                for c in 0..w {
                    data[row * stride + c / 8] |= 0x80 >> (c % 8);
                }
            }
            glyphs[code as usize] = Some(Glyph {
                w: w as u8,
                h: 2,
                data,
            });
        }
        BitmapFont {
            size: 2,
            glyphs,
            encoding: FontEncoding::English,
            name: "test".into(),
            set: "root".into(),
        }
    }

    /// A: ## / #. (ширина 2), B: ###/### (3), C: # (1),
    /// 0xC0 'А': ##/## (2), 0xC1 'Б': ###/### (3) — кирилиця набору 7/.
    fn font10() -> BitmapFont {
        let mut f = strip_font(&[(b'A', 2), (b'B', 3), (b'C', 1), (0xC0, 2), (0xC1, 3)]);
        // 'A' з порожнім кутом (1,1) поверх смуги
        f.glyphs[b'A' as usize] = Some(Glyph {
            w: 2,
            h: 2,
            data: vec![0b1100_0000, 0b1000_0000],
        });
        f
    }

    /// Піксель канваса (ARGB) за координатами.
    fn px(c: &Canvas, x: i32, y: i32) -> u32 {
        c.buf()[y as usize * c.width() as usize + x as usize]
    }

    // ---------- measure ----------

    #[test]
    fn measure_single_line_and_scale() {
        let f = font10();
        assert_eq!(measure(&f, b"AB", 1), (5, 2));
        assert_eq!(measure(&f, b"AB", 2), (10, 4));
        assert_eq!(measure(&f, b"", 1), (0, 2), "порожній текст = один порожній рядок");
        // пробіл 0x20: гліфа немає → крок = size
        assert_eq!(measure(&f, b"A B", 1), (2 + 2 + 3, 2));
    }

    #[test]
    fn measure_multiline_and_cr() {
        let f = font10();
        assert_eq!(measure(&f, b"AB\nC", 1), (5, 4));
        assert_eq!(measure(&f, b"AB\nBC", 1), (5, 4)); // AB=5, BC=4
        assert_eq!(measure(&f, b"AB\rBC", 1), (5, 4)); // \r теж переносить рядок
    }

    #[test]
    fn measure_ignores_color_tags() {
        let f = font10();
        assert_eq!(measure(&f, b"\xA7RAB", 1), (5, 2));
        assert_eq!(measure(&f, b"A\xA7GB", 1), (5, 2));
        assert_eq!(measure(&f, b"A\xA7xB", 1), (5, 2), "невідомий тег — теж 2 байти без ширини");
        // самотній § наприкінці: літери немає → звичайний байт (гліфа немає → крок size)
        assert_eq!(measure(&f, b"AB\xA7", 1), (2 + 3 + 2, 2));
    }

    #[test]
    fn measure_cyrillic_bytes() {
        let f = font10(); // 0xC0 'А', 0xC1 'Б' з набору 7/
        assert_eq!(measure(&f, &[0xC0, 0xC1], 1), (5, 2));
        assert_eq!(measure(&f, &[0xC0, 0xC1], 3), (15, 6));
    }

    // ---------- draw ----------

    #[test]
    fn draw_basic_pixels() {
        let f = font10();
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"AB", 0, 0, &TextStyle::default());
        // A: ## / #. на x 0..1
        assert_eq!(px(&c, 0, 0), WHITE);
        assert_eq!(px(&c, 1, 0), WHITE);
        assert_eq!(px(&c, 0, 1), WHITE);
        assert_eq!(px(&c, 1, 1), EMPTY, "(1,1) гліфа A порожній");
        // B: суцільна смуга на x 2..4
        assert_eq!(px(&c, 2, 0), WHITE);
        assert_eq!(px(&c, 4, 1), WHITE);
        assert_eq!(px(&c, 5, 0), EMPTY);
        assert_eq!(px(&c, 0, 2), EMPTY, "нижче рядка");
    }

    #[test]
    fn draw_multiline_and_newline() {
        let f = font10();
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"AB\nC", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), WHITE);
        assert_eq!(px(&c, 0, 2), WHITE, "рядок 2 починається з y = size·scale");
        assert_eq!(px(&c, 1, 2), EMPTY, "C шириною 1 — лише x=0");
        assert_eq!(px(&c, 0, 4), EMPTY, "третій рядок відсутній");
    }

    #[test]
    fn draw_scale_stretches_glyph() {
        let f = font10();
        let style = TextStyle { scale: 2, ..TextStyle::default() };
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"C", 0, 0, &style);
        // C: смуга 1×2 → блок 2×4
        assert_eq!(px(&c, 0, 0), WHITE);
        assert_eq!(px(&c, 1, 0), WHITE);
        assert_eq!(px(&c, 1, 1), WHITE);
        assert_eq!(px(&c, 0, 3), WHITE);
        assert_eq!(px(&c, 2, 0), EMPTY);
        assert_eq!(px(&c, 0, 4), EMPTY);
    }

    #[test]
    fn draw_alignment_center_and_right() {
        let f = font10();
        // Найширший рядок "AB" (5), рядок "B" (3).
        // Center: "B" зсунуто на (5-3)/2 = 1.
        let style = TextStyle { align: TextAlign::Center, ..TextStyle::default() };
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"B\nAB", 0, 0, &style);
        assert_eq!(px(&c, 0, 0), EMPTY);
        assert_eq!(px(&c, 1, 0), WHITE);
        assert_eq!(px(&c, 3, 0), WHITE);
        assert_eq!(px(&c, 4, 0), EMPTY);
        assert_eq!(px(&c, 0, 2), WHITE, "рядок опорної ширини — без зсуву");
        assert_eq!(px(&c, 4, 2), WHITE);

        // Right: "B" зсунуто на 2.
        let style = TextStyle { align: TextAlign::Right, ..TextStyle::default() };
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"B\nAB", 0, 0, &style);
        assert_eq!(px(&c, 0, 0), EMPTY);
        assert_eq!(px(&c, 1, 0), EMPTY);
        assert_eq!(px(&c, 2, 0), WHITE);
        assert_eq!(px(&c, 4, 0), WHITE);
        assert_eq!(px(&c, 5, 0), EMPTY);
        assert_eq!(px(&c, 0, 2), WHITE);

        // Left (за замовчуванням) — без зсуву.
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"B\nAB", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), WHITE);
        assert_eq!(px(&c, 3, 0), EMPTY);
    }

    #[test]
    fn draw_shadow_offset() {
        let f = font10();
        let style = TextStyle { shadow: true, ..TextStyle::default() };
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"C", 5, 5, &style);
        assert_eq!(px(&c, 5, 5), WHITE, "чорнило на місці");
        assert_eq!(px(&c, 5, 6), WHITE, "C — колонка, чорнило на обох рядках");
        assert_eq!(px(&c, 6, 6), SHADOW, "тінь зсувом (1,1)");
        assert_eq!(px(&c, 6, 7), SHADOW, "тінь на обох рядках гліфа");
        assert_eq!(px(&c, 7, 6), EMPTY, "C шириною 1 — тінь лише на x=6");
        assert_eq!(px(&c, 6, 5), EMPTY, "праворуч від чорнила тіні немає");

        // Без прапора тіні (6,6) порожній.
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"C", 5, 5, &TextStyle::default());
        assert_eq!(px(&c, 6, 6), EMPTY);
    }

    #[test]
    fn draw_color_tags() {
        let f = font10();
        // §R — решта рядка червона
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"A\xA7RBC", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), WHITE, "A до тега — колір стилю");
        assert_eq!(px(&c, 2, 0), RED, "B після §R");
        assert_eq!(px(&c, 5, 0), RED, "C — тег діє на решту рядка");
        assert_eq!(px(&c, 6, 0), EMPTY, "тег ширини не додав");

        // §Y, §G
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"\xA7YB", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), YELLOW);
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"\xA7GB", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), GREEN);

        // §r — скидання до style.color
        let style = TextStyle { color: [0, 0, 255], ..TextStyle::default() };
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"A\xA7R\xA7rB", 0, 0, &style);
        assert_eq!(px(&c, 0, 0), BLUE);
        assert_eq!(px(&c, 2, 0), BLUE, "після §r знову колір стилю");

        // колір скидається на початку кожного рядка
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"A\xA7R\nB", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), WHITE, "A до тега — колір стилю");
        assert_eq!(px(&c, 0, 2), WHITE, "новий рядок — колір стилю");
        // §R наприкінці рядка не впливає на наступний рядок
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"\xA7RB\nA", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), RED, "рядок 1 після §R червоний");
        assert_eq!(px(&c, 0, 2), WHITE, "рядок 2 знову білий");

        // невідомий тег — пропускається без зміни кольору
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"A\xA7xB", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), WHITE);
        assert_eq!(px(&c, 2, 0), WHITE, "B після тега, x=2");
        assert_eq!(px(&c, 4, 0), WHITE, "B шириною 3: x 2..4");
        assert_eq!(px(&c, 5, 0), EMPTY);
    }

    #[test]
    fn draw_cyrillic() {
        let f = font10(); // 0xC0 'А' (смуга 2), 0xC1 'Б' (смуга 3) — набір 7/
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, &[0xC0, 0xC1], 1, 1, &TextStyle::default());
        assert_eq!(px(&c, 1, 1), WHITE);
        assert_eq!(px(&c, 2, 1), WHITE);
        assert_eq!(px(&c, 2, 2), WHITE);
        assert_eq!(px(&c, 3, 2), WHITE, "'Б' починається після 'А' (x=1+2)");
        assert_eq!(px(&c, 6, 2), EMPTY, "рядок закінчується на x=5");
    }

    #[test]
    fn draw_clips_out_of_canvas() {
        let f = font10();
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"AB", -3, 12, &TextStyle::default());
        // A: x -3..-2 поза межами; B: x -1..1 → видимі колонки 0..1
        assert_eq!(px(&c, 0, 12), WHITE);
        assert_eq!(px(&c, 1, 13), WHITE);
        assert_eq!(px(&c, 2, 12), EMPTY);
        assert_eq!(px(&c, 0, 14), EMPTY);
    }

    #[test]
    fn measure_matches_drawn_extent() {
        let f = font10();
        let style = TextStyle { scale: 2, ..TextStyle::default() };
        let (w, h) = measure(&f, b"AB\nB", 2);
        assert_eq!((w, h), (10, 8), "AB=10, B=6; 2 рядки × 4");
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"AB\nB", 0, 0, &style);
        assert_eq!(px(&c, 9, 0), WHITE, "останній піксель рядка 1 (x = w-1)");
        assert_eq!(px(&c, 10, 0), EMPTY);
        assert_eq!(px(&c, 0, 3), WHITE, "останній рядок пікселів рядка 1");
        assert_eq!(px(&c, 0, 4), WHITE, "рядок 2");
        assert_eq!(px(&c, 5, 4), WHITE);
        assert_eq!(px(&c, 6, 4), EMPTY);
        assert_eq!(px(&c, 0, 8), EMPTY, "нижче h");
    }

    #[test]
    fn draw_fmt_accepts_string_and_str() {
        let f = font10();
        let mut c = Canvas::new(16, 16);
        draw_fmt(&mut c, &f, String::from("AC"), 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), WHITE);
        assert_eq!(px(&c, 2, 0), WHITE, "C після A (x=2)");
        assert_eq!(px(&c, 3, 0), EMPTY);

        let mut c = Canvas::new(16, 16);
        draw_fmt(&mut c, &f, "BA", 0, 0, &TextStyle::default());
        assert_eq!(px(&c, 0, 0), WHITE);
        assert_eq!(px(&c, 3, 0), WHITE, "A після B (x=3)");
        assert_eq!(px(&c, 5, 0), EMPTY);
    }

    #[test]
    fn draw_empty_and_tag_only_text() {
        let f = font10();
        let mut c = Canvas::new(16, 16);
        draw(&mut c, &f, b"", 0, 0, &TextStyle::default());
        draw(&mut c, &f, b"\xA7R", 4, 4, &TextStyle::default());
        assert!(c.buf().iter().all(|&p| p == EMPTY), "нічого не малюється");
    }
}
