//! Канвас рендера: ARGB8888-буфер із кліпінгом, примітиви (піксель, прямокутник,
//! біт-маска для шрифтів), трейт поверхні та рендер тексту.
//!
//! Канвас не залежить від вікна/графіки — це чистий CPU-буфер `Vec<u32>` у форматі
//! ARGB8888 (`0xAARRGGBB`); усі малювальні методи відсікають геометрію за межами
//! буфера (кліпінг). GPU-поверхня тепер у [`crate::wgpu_canvas::WgpuCanvas`]
//! (wgpu/Vulkan) — вона тримає [`Canvas`] і копіює його в текстуру при `present()`.

use dh_format::fonts::{render_text, BitmapFont};

/// ARGB8888 колір: `0xAARRGGBB`.
///
/// Конструюється з `[r, g, b]` (`From<[u8; 3]>`, alpha = 0xFF) або напряму
/// з `u32` (`From<u32>`), тому всі методи канваса приймають обидва варіанти.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Color(pub u32);

impl Color {
    /// Непрозорий колір з трьох компонент (alpha = 0xFF).
    pub const fn rgb(r: u8, g: u8, b: u8) -> Self {
        Color(0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32)
    }

    /// Колір з явною альфою (старший байт — alpha).
    pub const fn argb(a: u8, r: u8, g: u8, b: u8) -> Self {
        Color(((a as u32) << 24) | ((r as u32) << 16) | ((g as u32) << 8) | b as u32)
    }
}

impl From<[u8; 3]> for Color {
    fn from(rgb: [u8; 3]) -> Self {
        Color::rgb(rgb[0], rgb[1], rgb[2])
    }
}

impl From<u32> for Color {
    fn from(v: u32) -> Self {
        Color(v)
    }
}

/// CPU-буфер кадру: `width × height` пікселів ARGB8888, рядок за рядком зверху вниз.
///
/// Кліпінг обов'язковий: будь-який примітив із координатами поза межами буфера
/// малює лише видиму частину (або нічого), ніколи не панікує.
#[derive(Debug, Clone)]
pub struct Canvas {
    width: u32,
    height: u32,
    /// Пікселі ARGB8888 у порядку (y, x): піксель (x, y) = `buf[y*width + x]`.
    buf: Vec<u32>,
}

impl Canvas {
    /// Новий порожній канвас (буфер заповнено чорним `0`).
    pub fn new(width: u32, height: u32) -> Self {
        Canvas {
            width,
            height,
            buf: vec![0; (width as usize) * (height as usize)],
        }
    }

    /// Ширина канваса в пікселях.
    pub fn width(&self) -> u32 {
        self.width
    }

    /// Висота канваса в пікселях.
    pub fn height(&self) -> u32 {
        self.height
    }

    /// Сирий буфер пікселів (для копіювання в поверхню тощо).
    pub fn buf(&self) -> &[u32] {
        &self.buf
    }

    /// Заповнює весь канвас одним кольором.
    pub fn clear(&mut self, color: impl Into<Color>) {
        self.buf.fill(color.into().0);
    }

    /// Малює піксель; поза межами канваса — порожня операція.
    pub fn set_pixel(&mut self, x: i32, y: i32, color: impl Into<Color>) {
        if x < 0 || y < 0 {
            return;
        }
        let (x, y) = (x as u32, y as u32);
        if x >= self.width || y >= self.height {
            return;
        }
        self.buf[(y * self.width + x) as usize] = color.into().0;
    }

    /// Заливає прямокутник `(x, y) × (w, h)`; частини поза межами відсікаються.
    pub fn fill_rect(&mut self, x: i32, y: i32, w: u32, h: u32, color: impl Into<Color>) {
        if w == 0 || h == 0 {
            return;
        }
        let (x0, y0, x1, y1) = clip_rect(x, y, w, h, self.width, self.height);
        if x0 >= x1 || y0 >= y1 {
            return;
        }
        let color = color.into().0;
        for py in y0..y1 {
            let row = (py * self.width) as usize;
            self.buf[row + x0 as usize..row + x1 as usize].fill(color);
        }
    }

    /// Малює біт-маску (1 = колір, 0 = прозоро), як у шрифтах: рядки зверху вниз,
    /// `ceil(width/8)` байт на рядок, біт 7 = найлівіший піксель.
    ///
    /// Відсікає і координати, і самі краї маски; замала маска (менше
    /// `stride × height` байт) у debug — паніка, у release — порожня операція.
    pub fn draw_bitmap_mask(
        &mut self,
        x: i32,
        y: i32,
        width: u32,
        height: u32,
        mask: &[u8],
        color: impl Into<Color>,
    ) {
        if width == 0 || height == 0 {
            return;
        }
        let (x0, y0, x1, y1) = clip_rect(x, y, width, height, self.width, self.height);
        if x0 >= x1 || y0 >= y1 {
            return;
        }
        let stride = (width as usize + 7) / 8;
        let need = stride * height as usize;
        debug_assert!(
            mask.len() >= need,
            "маска замала: {} байт, потрібно {need} (width={width}, height={height})",
            mask.len()
        );
        if mask.len() < need {
            return;
        }
        let color = color.into().0;
        let (ox, oy) = (x as i64, y as i64);
        for py in y0..y1 {
            // Рядок маски, що відповідає видимому рядку канваса.
            let row = &mask[((py as i64 - oy) as usize) * stride..];
            for px in x0..x1 {
                let mx = (px as i64 - ox) as usize;
                if row[mx / 8] & (0x80 >> (mx % 8)) != 0 {
                    self.buf[(py * self.width + px) as usize] = color;
                }
            }
        }
    }

    /// Рендер тексту шрифтом `font` через біт-маску [`dh_format::fonts::render_text`]:
    /// маска малюється в `(x, y)` кольором `color` із масштабом `scale` (≥1).
    pub fn draw_text(
        &mut self,
        font: &BitmapFont,
        text: &[u8],
        x: i32,
        y: i32,
        color: impl Into<Color>,
        scale: u32,
    ) {
        let (w, h, mask) = render_text(font, text, scale);
        self.draw_bitmap_mask(x, y, w, h, &mask, color);
    }
}

/// Спільний кліпінг прямокутника `(x, y) × (w, h)` за межі `(cw, ch)`.
///
/// Повертає видиму область `(x0, y0, x1, y1)` (x1/y1 — ексклюзивні), усе в
/// координатах канваса. Рахується в i64, щоб уникнути переповнення при
/// крайніх значеннях координат.
fn clip_rect(x: i32, y: i32, w: u32, h: u32, cw: u32, ch: u32) -> (u32, u32, u32, u32) {
    let x0 = (x as i64).max(0) as u32;
    let y0 = (y as i64).max(0) as u32;
    let x1 = ((x as i64 + w as i64).min(cw as i64)).max(0) as u32;
    let y1 = ((y as i64 + h as i64).min(ch as i64)).max(0) as u32;
    (x0, y0, x1, y1)
}

/// Поверхня рендера: щось, куди можна показати кадр.
pub trait RenderSurface {
    /// Показує поточний кадр (копіює канвас у поверхню й викликає swap).
    /// Може повернути помилку (втрачена поверхня, I/O тощо).
    fn present(&mut self) -> anyhow::Result<()>;
}

#[cfg(test)]
mod tests {
    use super::*;
    use dh_format::fonts::{FontEncoding, Glyph};

    const RED: [u8; 3] = [255, 0, 0];
    const GREEN: [u8; 3] = [0, 255, 0];

    /// Штучний шрифт (без файлів гри): 'A' (0x41) = гліф 2×2
    /// `#.` (пікселі: (0,0), (1,0), (0,1)).
    /// `#.`
    fn font_test() -> BitmapFont {
        let mut glyphs = std::array::from_fn(|_| None);
        glyphs[0x41] = Some(Glyph {
            w: 2,
            h: 2,
            data: vec![0b1100_0000, 0b1000_0000],
        });
        BitmapFont {
            size: 2,
            glyphs,
            encoding: FontEncoding::English,
            name: "test".into(),
            set: "root".into(),
        }
    }

    #[test]
    fn new_canvas_is_black() {
        let c = Canvas::new(3, 2);
        assert_eq!(c.width(), 3);
        assert_eq!(c.height(), 2);
        assert_eq!(c.buf().len(), 6);
        assert!(c.buf().iter().all(|&p| p == 0));
    }

    #[test]
    fn set_pixel_rgb_and_u32() {
        let mut c = Canvas::new(4, 4);
        c.set_pixel(2, 1, RED); // [u8; 3]
        c.set_pixel(0, 0, Color::rgb(0, 0, 255)); // Color
        c.set_pixel(3, 3, 0xFF00_FF00u32); // u32
        assert_eq!(c.buf()[1 * 4 + 2], 0xFFFF_0000);
        assert_eq!(c.buf()[0], 0xFF00_00FF);
        assert_eq!(c.buf()[3 * 4 + 3], 0xFF00_FF00);
    }

    #[test]
    fn set_pixel_out_of_bounds_is_noop() {
        let mut c = Canvas::new(2, 2);
        c.set_pixel(-1, 0, RED);
        c.set_pixel(0, -5, RED);
        c.set_pixel(2, 0, RED);
        c.set_pixel(0, 2, RED);
        c.set_pixel(i32::MAX, i32::MAX, RED);
        assert!(c.buf().iter().all(|&p| p == 0));
    }

    #[test]
    fn fill_rect_full_and_partial() {
        let mut c = Canvas::new(8, 8);
        c.fill_rect(2, 2, 4, 3, GREEN);
        for y in 2..5 {
            for x in 2..6 {
                assert_eq!(
                    c.buf()[y * 8 + x],
                    0xFF00_FF00,
                    "({x},{y}) має бути зеленим"
                );
            }
        }
        // Зовні прямокутника — порожньо.
        assert_eq!(c.buf()[1 * 8 + 2], 0);
        assert_eq!(c.buf()[2 * 8 + 1], 0);
        assert_eq!(c.buf()[5 * 8 + 2], 0);
        assert_eq!(c.buf()[2 * 8 + 6], 0);
    }

    #[test]
    fn fill_rect_clipping_all_sides() {
        let mut c = Canvas::new(8, 8);
        // Ліворуч/зверху за межами.
        c.fill_rect(-3, -3, 5, 5, RED);
        for y in 0..2 {
            for x in 0..2 {
                assert_eq!(c.buf()[y * 8 + x], 0xFFFF_0000);
            }
        }
        assert_eq!(c.buf()[2 * 8 + 0], 0);
        assert_eq!(c.buf()[0 * 8 + 2], 0);
        // Праворуч/знизу за межами.
        c.fill_rect(6, 6, 10, 10, GREEN);
        assert_eq!(c.buf()[6 * 8 + 6], 0xFF00_FF00);
        assert_eq!(c.buf()[7 * 8 + 7], 0xFF00_FF00);
        assert_eq!(c.buf()[5 * 8 + 6], 0);
        assert_eq!(c.buf()[6 * 8 + 5], 0);
        // Цілком поза межами.
        c.clear(0u32);
        c.fill_rect(100, 100, 5, 5, RED);
        c.fill_rect(-10, -10, 3, 3, RED);
        c.fill_rect(8, 0, 3, 3, RED);
        assert!(c.buf().iter().all(|&p| p == 0));
    }

    #[test]
    fn fill_rect_zero_size() {
        let mut c = Canvas::new(4, 4);
        c.fill_rect(1, 1, 0, 2, RED);
        c.fill_rect(1, 1, 2, 0, RED);
        assert!(c.buf().iter().all(|&p| p == 0));
    }

    #[test]
    fn draw_bitmap_mask_basic() {
        let mut c = Canvas::new(4, 4);
        // 2×2 маска: ## / #.
        let mask = [0b1100_0000, 0b1000_0000];
        c.draw_bitmap_mask(1, 0, 2, 2, &mask, RED);
        assert_eq!(c.buf()[0 * 4 + 1], 0xFFFF_0000);
        assert_eq!(c.buf()[0 * 4 + 2], 0xFFFF_0000);
        assert_eq!(c.buf()[1 * 4 + 1], 0xFFFF_0000);
        assert_eq!(c.buf()[1 * 4 + 2], 0); // (1,1) маски = 0
        assert_eq!(c.buf()[0 * 4 + 0], 0);
        assert_eq!(c.buf()[2 * 4 + 1], 0);
    }

    #[test]
    fn draw_bitmap_mask_clip_top_left() {
        let mut c = Canvas::new(3, 3);
        // Маска 2×2 у (-1,-1): видимим лишається лише піксель маски (1,1)
        // (нижній правий кут) → канвас (0,0).
        let mask = [0b1100_0000, 0b1000_0000]; // ## / #. → (1,1) = 0: нічого.
        c.draw_bitmap_mask(-1, -1, 2, 2, &mask, RED);
        assert!(c.buf().iter().all(|&p| p == 0));

        let mask2 = [0b1100_0000, 0b1100_0000]; // ## / ## → (1,1) = 1.
        c.draw_bitmap_mask(-1, -1, 2, 2, &mask2, RED);
        assert_eq!(c.buf()[0], 0xFFFF_0000);
        assert!(c.buf().iter().skip(1).all(|&p| p == 0));
    }

    #[test]
    fn draw_bitmap_mask_clip_bottom_right() {
        let mut c = Canvas::new(4, 4);
        // 3×3 маска, уся залита: ### / ### / ###
        let mask = [0b1110_0000, 0b1110_0000, 0b1110_0000];
        c.draw_bitmap_mask(2, 2, 3, 3, &mask, RED);
        // Видима область канваса: x 2..4, y 2..4 → пікселі маски (0..2, 0..2).
        for y in 2..4 {
            for x in 2..4 {
                assert_eq!(c.buf()[y * 4 + x], 0xFFFF_0000, "({x},{y})");
            }
        }
        assert_eq!(c.buf()[1 * 4 + 2], 0);
        assert_eq!(c.buf()[2 * 4 + 1], 0);
    }

    #[test]
    fn draw_bitmap_mask_totally_outside() {
        let mut c = Canvas::new(3, 3);
        let mask = [0b1110_0000];
        c.draw_bitmap_mask(5, 5, 1, 1, &mask, RED);
        c.draw_bitmap_mask(-3, 0, 1, 1, &mask, RED);
        assert!(c.buf().iter().all(|&p| p == 0));
    }

    #[test]
    fn draw_bitmap_mask_wide_bits() {
        let mut c = Canvas::new(10, 1);
        // Ширина 9 → stride = 2 байти; біт 7 другого байта = піксель 8.
        let mask = [0b1000_0000, 0b1000_0000];
        c.draw_bitmap_mask(0, 0, 9, 1, &mask, RED);
        assert_eq!(c.buf()[0], 0xFFFF_0000);
        assert_eq!(c.buf()[8], 0xFFFF_0000);
        for x in 1..8 {
            assert_eq!(c.buf()[x], 0, "x={x}");
        }
        assert_eq!(c.buf()[9], 0); // поза маскою

        // Ширина 10 → пікселі 8..15 другого байта: біт 6 = піксель 9.
        c.clear(0u32);
        let mask2 = [0b0000_0000, 0b0100_0000];
        c.draw_bitmap_mask(0, 0, 10, 1, &mask2, RED);
        assert_eq!(c.buf()[9], 0xFFFF_0000);
        assert_eq!(c.buf()[8], 0, "біт 7 другого байта = піксель 8, тут 0");
        for x in 0..8 {
            assert_eq!(c.buf()[x], 0, "x={x}");
        }
    }

    #[test]
    fn clear_fills_everything() {
        let mut c = Canvas::new(3, 2);
        c.set_pixel(0, 0, RED);
        c.clear(GREEN);
        assert!(c.buf().iter().all(|&p| p == 0xFF00_FF00));
        c.clear(0u32);
        assert!(c.buf().iter().all(|&p| p == 0));
    }

    #[test]
    fn draw_text_basic_and_scale() {
        let font = font_test();
        let mut c = Canvas::new(6, 6);
        // scale=1: гліф 2×2 у (1,1): пікселі (1,1),(2,1),(1,2).
        c.draw_text(&font, b"A", 1, 1, RED, 1);
        assert_eq!(c.buf()[1 * 6 + 1], 0xFFFF_0000);
        assert_eq!(c.buf()[1 * 6 + 2], 0xFFFF_0000);
        assert_eq!(c.buf()[2 * 6 + 1], 0xFFFF_0000);
        assert_eq!(c.buf()[2 * 6 + 2], 0);

        // scale=2 у (0,0): гліф #. → блоки 2×2: (0..2,0..2), (2..4,0..2), (0..2,2..4).
        //           #.
        let mut c2 = Canvas::new(6, 6);
        c2.draw_text(&font, b"A", 0, 0, GREEN, 2);
        let expect = [
            [true, true, true, true, false, false],
            [true, true, true, true, false, false],
            [true, true, false, false, false, false],
            [true, true, false, false, false, false],
            [false, false, false, false, false, false],
            [false, false, false, false, false, false],
        ];
        for (y, row) in expect.iter().enumerate() {
            for (x, &on) in row.iter().enumerate() {
                let got = c2.buf()[y * 6 + x] == 0xFF00_FF00;
                assert_eq!(got, on, "({x},{y})");
            }
        }
    }

    #[test]
    fn draw_text_clipping() {
        let font = font_test();
        let mut c = Canvas::new(3, 3);
        // Лівий край маски (стовпець 0) зрізається: видимим лишається
        // піксель гліфа (1,0) → канвас (0,0); (1,1) маски = 0 — не малюється.
        c.draw_text(&font, b"A", -1, 0, RED, 1);
        assert_eq!(c.buf()[0], 0xFFFF_0000);
        assert!(c.buf().iter().skip(1).all(|&p| p == 0));

        // Уся маска ліворуч від канваса — нічого не малюється.
        let mut c2 = Canvas::new(3, 3);
        c2.draw_text(&font, b"A", -3, 0, RED, 1);
        assert!(c2.buf().iter().all(|&p| p == 0));
    }

    #[test]
    fn color_conversions() {
        assert_eq!(Color::from(RED).0, 0xFFFF_0000);
        assert_eq!(Color::from(0x1234_5678u32).0, 0x1234_5678);
        assert_eq!(Color::argb(0x80, 1, 2, 3).0, 0x8001_0203);
    }
}
