//! Швидка перевірка рендера: малює мапу у PNG (для налагодження без вікна).
//! Запуск: cargo run -p dh-render --example render_png -- <корінь гри> <вихід.png>
use std::path::PathBuf;

fn main() -> anyhow::Result<()> {
    let args: Vec<String> = std::env::args().collect();
    let game = args.get(1).map(PathBuf::from).unwrap_or_else(|| {
        PathBuf::from(std::env::var("HOME").unwrap())
            .join(".local/share/Steam/steamapps/common/Darkest Hour A HOI Game")
    });
    let out = args
        .get(2)
        .map(PathBuf::from)
        .unwrap_or_else(|| PathBuf::from("/tmp/dh-render-out.png"));
    // Необов'язковий в'юпорт: x y w h (блоки 32×32). Дефолт — Північна Атлантика.
    let view: Option<Vec<u32>> = args.get(3).map(|s| s.split(',').map(|v| v.parse().unwrap_or(0)).collect());
    // Необов'язковий сценарій (ім'я .eug у scenarios/): політична карта за власниками.
    let scenario = args.get(4).cloned();

    let paths = dh_format::GamePaths::with_custom(game);
    let map = dh_format::map::load(&paths)?;
    let provinces = dh_format::province::load(&paths.root.join("map/Map_1/Province.csv"))?;
    println!(
        "мапа: {}x{}, провінцій {} (csv {})",
        map.map_w,
        map.map_h,
        map.prov_count,
        provinces.len()
    );

    // Таблиця кольорів провінцій: id → ARGB. Фон — вода (135,172,216 = colorscales water).
    let mut prov_colors = vec![0xFF87_ACD8u32; 3000];
    for p in &provinces {
        let (r, g, b) = dh_format::province::terrain_color(p.terrain);
        prov_colors[p.id as usize] =
            0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32;
    }

    // Політична карта: власник (з .eug) → колір країни (country.csv + colorscales.csv).
    if let Some(sc_name) = &scenario {
        let sc_path = paths.mod_dir.join("scenarios").join(format!("{sc_name}.eug"));
        let sc = dh_format::scenario::load_scenario(&sc_path)?;
        let country_db = dh_format::db::CountryDb::load(&paths)?;
        let scales = dh_format::db::ColorScales::load(&paths)?;
        let mut n_owned = 0;
        for cb in &sc.countries {
            let color = country_db.color_of(&cb.tag);
            for (k, v) in &cb.body {
                if k.eq_ignore_ascii_case("ownedprovinces") {
                    let ids = v
                        .split(|c: char| !c.is_ascii_digit())
                        .filter_map(|s| s.parse::<u16>().ok());
                    let (r, g, b) = color;
                    for id in ids {
                        if (id as usize) < prov_colors.len() {
                            prov_colors[id as usize] =
                                0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32;
                            n_owned += 1;
                        }
                    }
                }
            }
        }
        println!("політична карта: {n_owned} провінцій зафарбовано");
    }

    // Міні-карта всієї мапи: 1 піксель = 1 блок 32×32 (якщо в'юпорт не задано).
    let use_minimap = view.is_none() || (view.as_ref().map(|v| v.len()) != Some(4));
    let (vx, vy, vw, vh) = match &view {
        Some(v) if v.len() == 4 => (v[0], v[1], v[2], v[3]),
        _ => (0, 0, 936, 360),
    };
    if use_minimap {
        // Міні-карта: для кожного блока — колір центрального пікселя lightmap
        // (провінція блока), вода — колір water.
        let mut img = image::RgbImage::new(936, 360);
        let colors = &prov_colors;
        if let Some(l1) = map.lightmap.first() {
            for by in 0..360u32 {
                for bx in 0..936u32 {
                    let color = match l1.decode_tile(bx, by) {
                        Ok(ti) => {
                            let p = &ti.prov_ids[16 * 32 + 16];
                            colors[*p as usize]
                        }
                        Err(_) => 0xFF87_ACD8,
                    };
                    img.put_pixel(
                        bx,
                        by,
                        image::Rgb([(color >> 16) as u8, (color >> 8) as u8, color as u8]),
                    );
                }
            }
        }
        img.save(&out)?;
        println!("міні-карта збережена: {}", out.display());
        return Ok(());
    }

    // канвас 1280x720
    let mut canvas = dh_render::canvas::Canvas::new(1280, 720);
    let view = dh_render::map_render::Viewport::new(vx, vy, vw.max(1), vh.max(1));
    let mut r = dh_render::map_render::MapRenderer::new(&map, 0, view);
    r.prov_colors = Some(&prov_colors);
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