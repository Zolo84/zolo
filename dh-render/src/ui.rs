//! Інтерфейс гри: завантаження BMP-зображень UI (gfx/SKINS, gfx/interface).
//!
//! Формат інтерфейсних BMP гри — стандартні Windows BMP: 24-біт (BGR) або
//! 8-біт із власною палітрою, bottom-up. Зображення зберігається як ARGB
//! (α=255; альфа-канали в грі не використовуються).

use anyhow::{bail, Context, Result};

/// Завантажене зображення інтерфейсу (ARGB8888, α=255).
#[derive(Debug, Clone)]
pub struct UiImage {
    pub w: u32,
    pub h: u32,
    /// Пікселі ARGB8888, рядок за рядком зверху вниз (як [`crate::canvas::Canvas`]).
    pub rgba: Vec<u32>,
}

impl UiImage {
    /// Малює зображення в канвас у позицію (x, y) (із кліпінгом).
    pub fn draw(&self, canvas: &mut crate::canvas::Canvas, x: i32, y: i32) {
        canvas.blit(x, y, self.w, self.h, &self.rgba);
    }
}

/// Завантажує BMP інтерфейсу: 24-біт (BGR, bottom-up) або 8-біт (палітра BGRX).
pub fn load_bmp(path: &std::path::Path) -> Result<UiImage> {
    let raw = std::fs::read(path).with_context(|| format!("інтерфейс: {}", path.display()))?;
    if raw.len() < 54 {
        bail!("{}: замалий BMP", path.display());
    }
    let px_off = u32::from_le_bytes(raw[10..14].try_into()?) as usize;
    let width = i32::from_le_bytes(raw[18..22].try_into()?);
    let height = i32::from_le_bytes(raw[22..26].try_into()?);
    let bpp = u16::from_le_bytes(raw[28..30].try_into()?);
    let compr = u32::from_le_bytes(raw[30..34].try_into()?);
    if width <= 0 || height == 0 {
        bail!("{}: некоректний розмір", path.display());
    }
    if compr != 0 {
        bail!("{}: стиснення {compr} не підтримується", path.display());
    }
    let w = width as u32;
    let h = height.unsigned_abs();
    let bottom_up = height > 0;
    let mut rgba = vec![0xFF00_0000u32; (w * h) as usize];
    let stride = ((w as usize * bpp as usize / 8 + 3) / 4) * 4;
    match bpp {
        24 => {
            for y in 0..h {
                let src_y = if bottom_up { h - 1 - y } else { y };
                let row = &raw[px_off + src_y as usize * stride..];
                let dst = y as usize * w as usize;
                for x in 0..w as usize {
                    let o = x * 3;
                    rgba[dst + x] = 0xFF00_0000
                        | ((row[o + 2] as u32) << 16)
                        | ((row[o + 1] as u32) << 8)
                        | row[o] as u32;
                }
            }
        }
        8 => {
            let mut pal = [0u32; 256];
            for i in 0..256 {
                let o = 54 + i * 4;
                pal[i] = 0xFF00_0000
                    | ((raw[o + 2] as u32) << 16)
                    | ((raw[o + 1] as u32) << 8)
                    | raw[o] as u32;
            }
            for y in 0..h {
                let src_y = if bottom_up { h - 1 - y } else { y };
                let row = &raw[px_off + src_y as usize * stride..];
                let dst = y as usize * w as usize;
                for x in 0..w as usize {
                    rgba[dst + x] = pal[row[x] as usize];
                }
            }
        }
        _ => bail!("{}: {bpp}-біт BMP не підтримується", path.display()),
    }
    Ok(UiImage { w, h, rgba })
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Синтетичний 2×2 24-біт BMP (BGR): пікселі (3,5,7), (255,0,0), (0,255,0), (0,0,255).
    #[test]
    fn load_bmp_24bit() {
        let mut raw = vec![0u8; 54 + 16];
        raw[0..2].copy_from_slice(b"BM");
        let size = raw.len() as u32;
        raw[2..6].copy_from_slice(&size.to_le_bytes());
        raw[10..14].copy_from_slice(&54u32.to_le_bytes());
        raw[18..22].copy_from_slice(&2i32.to_le_bytes());
        raw[22..26].copy_from_slice(&2i32.to_le_bytes()); // bottom-up (height > 0)
        raw[26..28].copy_from_slice(&1u16.to_le_bytes());
        raw[28..30].copy_from_slice(&24u16.to_le_bytes());
        // Синтетичний 2×2 24-біт BMP (bottom-up: рядок 0 у файлі = нижній).
        // Пікселі (байти B,G,R → RGB):
        //   рядок файлу 0 (нижній, y=1): [255,0,0]→(0,0,255), [0,255,0]→(0,255,0)
        //   рядок файлу 1 (верхній, y=0): [7,5,3]→(3,5,7), [0,0,255]→(255,0,0)
        let o = 54;
        raw[o + 0..o + 3].copy_from_slice(&[255, 0, 0]); // → (0,0,255)  (x0,y1)
        raw[o + 3..o + 6].copy_from_slice(&[0, 255, 0]); // → (0,255,0)  (x1,y1)
        raw[o + 8..o + 11].copy_from_slice(&[7, 5, 3]); //  → (3,5,7)    (x0,y0)
        raw[o + 11..o + 14].copy_from_slice(&[0, 0, 255]); // → (255,0,0) (x1,y0)
        let dir = std::env::temp_dir().join("dh-ui-test.bmp");
        std::fs::write(&dir, &raw).unwrap();
        let img = load_bmp(&dir).unwrap();
        assert_eq!((img.w, img.h), (2, 2));
        assert_eq!(img.rgba[0], 0xFF03_0507); // (3,5,7)
        assert_eq!(img.rgba[1], 0xFFFF_0000); // (255,0,0)
        assert_eq!(img.rgba[2], 0xFF00_00FF); // (0,0,255)
        assert_eq!(img.rgba[3], 0xFF00_FF00); // (0,255,0)
    }
}
