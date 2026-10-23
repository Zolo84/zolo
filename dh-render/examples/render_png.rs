//! Швидка перевірка рендера: малює мапу у PNG (для налагодження без вікна).
//! Запуск: cargo run -p dh-render --example render_png -- <корінь гри> <вихід.png>
use std::path::PathBuf;

fn main() -> anyhow::Result<()> {
    let args: Vec<String> = std::env::args().collect();
    let game = args.get(1).map(PathBuf::from).unwrap_or_else(|| {
        PathBuf::from(std::env::var("HOME").unwrap())
            .join(".local/share/Steam/steamapps/common/Darkest Hour A HOI Game")
    });
    let out = args.get(2).map(PathBuf::from).unwrap_or_else(|| PathBuf::from("/tmp/dh-render-out.png"));

    let paths = dh_format::GamePaths::with_custom(game);
    let map = dh_format::map::load(&paths)?;
    println!("мапа: {}x{}, провінцій {}", map.map_w, map.map_h, map.prov_count);

    // канвас 1280x720 — куточок Північної Атлантики (Ісландія/Британія)
    let mut canvas = dh_render::canvas::Canvas::new(1280, 720);
    let view = dh_render::map_render::Viewport::new(340, 6, 40, 22);
    let mut r = dh_render::map_render::MapRenderer::new(&map, 0, view);
    r.render(&mut canvas);

    // запиши PNG (ARGB → RGB)
    let mut img = image::RgbImage::new(1280, 720);
    for y in 0..720 {
        for x in 0..1280 {
            let px = canvas.buf()[(y * 1280 + x) as usize];
            img.put_pixel(x, y, image::Rgb([(px >> 16) as u8, (px >> 8) as u8, px as u8]));
        }
    }
    img.save(&out)?;
    println!("збережено: {}", out.display());
    Ok(())
}