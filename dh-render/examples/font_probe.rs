//! Зонд шрифтів: малює тестовий рядок реальним шрифтом гри й зберігає PNG.
//! cargo run -p dh-render --example font_probe -- [<гра>] [<out.png>]

use std::path::PathBuf;

use dh_render::canvas::Canvas;
use dh_render::text::{self, TextAlign, TextStyle};

fn main() -> anyhow::Result<()> {
    let args: Vec<String> = std::env::args().collect();
    let game = args.get(1).map(PathBuf::from).unwrap_or_else(|| {
        PathBuf::from(std::env::var("HOME").unwrap())
            .join(".local/share/Steam/steamapps/common/Darkest Hour A HOI Game")
    });
    let out = args.get(2).cloned().unwrap_or_else(|| "/tmp/font-probe.png".into());

    let paths = dh_format::GamePaths::with_custom(game);
    let fonts = dh_format::fonts::load_fonts(&paths)?;
    println!("шрифтів: {}", fonts.len());
    for f in &fonts {
        println!("  {} / {} / {}", f.name, f.set, f.size);
    }
    let font = fonts
        .iter()
        .find(|f| f.set == "root" && f.size == 14 && f.name.to_ascii_lowercase().contains("eurostile"))
        .or_else(|| fonts.first())
        .expect("немає шрифтів");
    println!("використано: {} / {} / {}", font.name, font.set, font.size);

    // Статистика гліфів: «чорнило» кожного ASCII-символа (сума встановлених
    // бітів маски). Збіги сусідніх символів = підозра на зсув таблиці.
    let ink = |c: u8| -> u32 {
        font.glyph(c)
            .map(|g| g.data.iter().map(|&b| (b as u32).count_ones()).sum())
            .unwrap_or(0)
    };
    for &ch in b"0123456789" {
        print!("{}:{} ", char::from(ch), ink(ch));
    }
    println!();
    for &ch in b"ABCDFGHIJKLMNOPQRSTUVWXYZ" {
        print!("{}:{} ", char::from(ch), ink(ch));
    }
    println!();
    // Пара збігів за значенням маски: (літера, маска-хеп) — повністю рівні?
    let mut hm: std::collections::HashMap<u32, Vec<String>> = Default::default();
    for &ch in b"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ" {
        let g = font.glyph(ch).unwrap();
        let h: u32 = g.data.iter().enumerate().map(|(i, &b)| ((b as u32) << (i % 24)) ^ (i as u32 * 31)).sum();
        hm.entry(h).or_default().push(char::from(ch).to_string());
    }
    for (h, v) in &hm {
        if v.len() > 1 {
            println!("ОДНАКОВІ гліфи ({}): {:?} (хеп {h})", v.len(), v);
        }
    }

    let mut canvas = Canvas::new(1024, 128);
    let style = TextStyle {
        color: [255, 255, 255],
        shadow: false,
        scale: 1,
        align: TextAlign::Left,
    };
    text::draw(&mut canvas, font, b"0123456789 ABCDEFGHIJKLMNOPQRSTUVWXYZ", 6, 8, &style);
    text::draw(&mut canvas, font, b"abcdefghijklmnopqrstuvwxyz running 1933", 6, 34, &style);

    // PNG: ARGB → RGB.
    let mut img = image::RgbImage::new(1024, 128);
    for y in 0..128u32 {
        for x in 0..1024u32 {
            let c = canvas.buf()[(y * 1024 + x) as usize];
            img.put_pixel(
                x,
                y,
                image::Rgb([((c >> 16) & 0xFF) as u8, ((c >> 8) & 0xFF) as u8, (c & 0xFF) as u8]),
            );
        }
    }
    img.save(&out)?;
    println!("збережено: {out}");
    Ok(())
}
