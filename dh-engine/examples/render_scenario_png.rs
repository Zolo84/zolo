//! Політична карта зі сценарію — точно як у грі: палітра з map/Map_1/colorscales.csv,
//! шкали провінцій з ВЛАСНИКІВ (FUN_004dcb20 case 0); без жодних дампів.
//!
//! cargo run -p dh-engine --example render_scenario_png -- \
//!   <гра> <сценарій> <гравець> <x,y,w,h блоки> <zoom 0..4> <out.png>
//!
//! Приклад (Польща 1933):
//!   cargo run -p dh-engine --example render_scenario_png -- \
//!     ~/.local/share/Steam/.../Darkest\ Hour A\ HOI\ Game 1933 POL 480,30,64,48 0 /tmp/dh-1933.png

use std::collections::HashMap;
use std::path::PathBuf;

use dh_format::colorscale::{color_number, DARK_FLAG, NO_OWNER_BLOCK, WATER_BLOCK};
use dh_format::map_color::GameColorModel;
use dh_render::canvas::Canvas;
use dh_render::map_render::{MapRenderer, Viewport};

fn main() -> anyhow::Result<()> {
    let args: Vec<String> = std::env::args().collect();
    let game = args.get(1).map(PathBuf::from).unwrap_or_else(|| {
        PathBuf::from(std::env::var("HOME").unwrap())
            .join(".local/share/Steam/steamapps/common/Darkest Hour A HOI Game")
    });
    let scenario = args.get(2).cloned().unwrap_or_else(|| "1933".into());
    let player = args.get(3).cloned().unwrap_or_else(|| "POL".into());
    let view_spec = args.get(4).cloned().unwrap_or_else(|| "480,30,64,48".into());
    let zoom: u8 = args
        .get(5)
        .and_then(|s| s.parse().ok())
        .unwrap_or(0);
    let out = args
        .get(6)
        .map(PathBuf::from)
        .unwrap_or_else(|| PathBuf::from("/tmp/dh-scenario.png"));

    let paths = dh_format::GamePaths::with_custom(game);
    let map = dh_format::map::load(&paths)?;
    let prov_csv = dh_format::province::load(&paths.root.join("map/Map_1/Province.csv"))?;
    let country_db = dh_format::db::CountryDb::load(&paths)?;
    // Палітра з файлу гри (Map_1/colorscales.csv) — без дампу пам'яті!
    let color_model = GameColorModel::from_game(&paths)?;

    // Власники зі сценарію: ownedprovinces кожної країни.
    let sc = dh_format::scenario::load_scenario(
        &paths
            .mod_dir
            .join("scenarios")
            .join(format!("{scenario}.eug")),
    )?;
    let mut owner_of: HashMap<u16, String> = HashMap::new();
    for cb in &sc.countries {
        for (k, v) in &cb.body {
            if k.eq_ignore_ascii_case("ownedprovinces") {
                for id in v
                    .trim()
                    .trim_start_matches('{')
                    .trim_end_matches('}')
                    .split_whitespace()
                {
                    if let Ok(id) = id.parse::<u16>() {
                        owner_of.insert(id, cb.tag.as_str().to_string());
                    }
                }
            }
        }
    }

    // Шкали (FUN_004dcb20 case 0): вода 23|0x20, нічия 2|0x20,
    // власник → номер кольору country.csv; біт 0x20 для не-гравця.
    let mut scales = vec![WATER_BLOCK | DARK_FLAG; 3000];
    // PROV0 = 34 (2|0x20) — як у дампі живої гри.
    scales[0] = NO_OWNER_BLOCK | DARK_FLAG;
    for p in &prov_csv {
        if p.id == 0 {
            continue;
        }
        scales[p.id as usize] = if matches!(
            p.terrain,
            dh_format::Terrain::Ocean | dh_format::Terrain::Water
        ) {
            WATER_BLOCK | DARK_FLAG
        } else {
            NO_OWNER_BLOCK | DARK_FLAG
        };
    }
    for (id, tag) in &owner_of {
        let name = country_db
            .colors
            .get(tag)
            .map(String::as_str)
            .unwrap_or("White");
        let dark = if tag.eq_ignore_ascii_case(&player) {
            0
        } else {
            DARK_FLAG
        };
        let num = color_number(name);
        scales[*id as usize] = num | dark;
    }

    // Рендер в'юпорта.
    let parts: Vec<u32> = view_spec
        .split(',')
        .map(|s| s.trim().parse().unwrap_or(0))
        .collect();
    anyhow::ensure!(parts.len() == 4, "в'юпорт має бути x,y,w,h");
    let view = Viewport::new(parts[0], parts[1], parts[2], parts[3]);
    let (w, h) = view.screen_size(zoom);
    let mut canvas = Canvas::new(w, h);

    let mut renderer = MapRenderer::new(&map, zoom, view).with_province_scales(&scales);
    renderer.color_model = Some(&color_model);
    renderer.render(&mut canvas);

    let mut img = image::RgbImage::new(w, h);
    for y in 0..h {
        for x in 0..w {
            let c = canvas.buf()[(y * w + x) as usize];
            img.put_pixel(
                x,
                y,
                image::Rgb([((c >> 16) & 0xFF) as u8, ((c >> 8) & 0xFF) as u8, (c & 0xFF) as u8]),
            );
        }
    }
    img.save(&out)?;

    // Статистика кадру: топ-кольори (стінки = країни/вода).
    let mut count = HashMap::<[u8; 3], u32>::new();
    for y in 0..h {
        for x in 0..w {
            let c = canvas.buf()[(y * w + x) as usize];
            *count
                .entry([((c >> 16) & 0xFF) as u8, ((c >> 8) & 0xFF) as u8, (c & 0xFF) as u8])
                .or_insert(0) += 1;
        }
    }
    let mut v: Vec<_> = count.into_iter().collect();
    v.sort_by_key(|(_, n)| std::cmp::Reverse(*n));
    println!("збережено: {} ({}×{})", out.display(), w, h);
    println!("власників у сценарії: {}", owner_of.len());
    println!("топ-кольори кадру:");
    for ([r, g, b], n) in v.iter().take(12) {
        println!("  rgb({r},{g},{b}): {n}");
    }
    Ok(())
}