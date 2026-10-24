//! Міні-карта всієї мапи через точну модель кольору (color_exact).
//! cargo run -p dh-render --example render_png_exact -- <corinь-гри> <вихід.png>
use std::path::PathBuf;

fn main() -> anyhow::Result<()> {
    let args: Vec<String> = std::env::args().collect();
    let game = args.get(1).map(PathBuf::from).unwrap_or_else(|| {
        PathBuf::from(std::env::var("HOME").unwrap())
            .join(".local/share/Steam/steamapps/common/Darkest Hour A HOI Game")
    });
    let out = args.get(2).map(PathBuf::from).unwrap_or_else(|| PathBuf::from("/tmp/dh-exact-minimap.png"));

    let paths = dh_format::GamePaths::with_custom(game);
    let map = dh_format::map::load(&paths)?;
    let color_model = dh_format::map_color::GameColorModel::load(
        &PathBuf::from(concat!(env!("CARGO_MANIFEST_DIR"), "/../dh-format/data")),
    )?;

    // Міні-карта: 1 піксель = 1 блок; колір — центральний піксель lightmap через color_exact.
    let mut img = image::RgbImage::new(936, 360);
    let mut count = std::collections::HashMap::<[u8; 3], u32>::new();
    if let Some(l1) = map.lightmap.first() {
        for by in 0..360u32 {
            for bx in 0..936u32 {
                let [r, g, b] = match l1.decode_tile(bx, by) {
                    Ok(ti) => color_model.color_exact(
                        ti.prov_ids[16 * 32 + 16] as usize,
                        ti.light_vals[16 * 32 + 16],
                    ),
                    Err(_) => color_model.water_color(15),
                };
                img.put_pixel(bx, by, image::Rgb([r, g, b]));
                *count.entry([r, g, b]).or_insert(0) += 1;
            }
        }
    }
    img.save(&out)?;
    let mut v: Vec<_> = count.into_iter().collect();
    v.sort_by_key(|(_, n)| std::cmp::Reverse(*n));
    println!("збережено: {}", out.display());
    println!("топ-кольори міні-карти (точні):");
    for ([r, g, b], n) in v.iter().take(10) {
        println!("  rgb({r},{g},{b}): {n} блоків");
    }
    Ok(())
}