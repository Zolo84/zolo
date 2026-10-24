//! Звірка GPU-рендера (wgpu_map) з CPU-рендером (map_render) — байт-у-байт.
//!
//! cargo run -p dh-render --example gpu_compare_png -- \
//!   <гра> <сценарій> <гравець> <x,y,w,h блоки> <zoom -3..4> <out_base>
//!
//! Друкує кількість відмінних пікселів CPU vs GPU і зберігає обидва PNG
//! (<out_base>.cpu.png, <out_base>.gpu.png). Очікування: 0 відмінностей.

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
    let view_spec = args
        .get(4)
        .cloned()
        .unwrap_or_else(|| "400,10,16,16".into());
    let zoom: i8 = args.get(5).and_then(|s| s.parse().ok()).unwrap_or(0).clamp(
        dh_render::map_render::ZOOM_MIN,
        dh_render::map_render::ZOOM_MAX,
    );
    let out_base = args
        .get(6)
        .map(PathBuf::from)
        .unwrap_or_else(|| PathBuf::from("/tmp/gpu-cmp"));

    let paths = dh_format::GamePaths::with_custom(game);
    let map = dh_format::map::load(&paths)?;
    let prov_csv = dh_format::province::load(&paths.root.join("map/Map_1/Province.csv"))?;
    let country_db = dh_format::db::CountryDb::load(&paths)?;
    let color_model = GameColorModel::from_game(&paths)?;

    // А4: єдиний завантажувач (dh-data через VFS + конвертація).
    let sc = dh_format::scenario::load_from_install(&paths.root, &scenario)?;
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

    let mut scales = vec![WATER_BLOCK | DARK_FLAG; 3000];
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
        scales[*id as usize] = color_number(name) | dark;
    }

    let parts: Vec<u32> = view_spec
        .split(',')
        .map(|s| s.trim().parse().unwrap_or(0))
        .collect();
    anyhow::ensure!(parts.len() == 4, "в'юпорт має бути x,y,w,h");
    let view = Viewport::new(parts[0], parts[1], parts[2], parts[3]);
    let (w, h) = view.screen_size(zoom);
    // Діагностика декодера L4 (DH_GPU_DEBUG=1): тайл (0,0) — рядки 0 і 1.
    if std::env::var("DH_GPU_DEBUG").is_ok() && zoom < 0 {
        if let Some(l4) = map.lightmap.get(3) {
            if let Ok(ti) = l4.decode_tile(0, 0) {
                println!(
                    "L4 tile (0,0): prov_ids len {}, row0 [0..4]={:?}, row1 [32..36]={:?}",
                    ti.prov_ids.len(),
                    &ti.prov_ids[0..4],
                    &ti.prov_ids[32..36]
                );
            } else {
                println!("L4 tile (0,0): decode FAILED");
            }
        }
    }

    // ---- CPU-рендер (еталон).
    let mut cpu = Canvas::new(w, h);
    let renderer = MapRenderer::new(&map, zoom, view).with_province_scales(&scales);
    let mut renderer = renderer;
    renderer.color_model = Some(&color_model);
    renderer.render(&mut cpu);
    let cpu_png: Vec<u8> = canvas_to_rgba(&cpu);
    let p = format!("{}.cpu.png", out_base.display());
    save_png(&p, w, h, &cpu_png)?;

    // ---- GPU-рендер (headless) + readback.
    let mut gpu = dh_render::wgpu_map::GpuRenderer::new_headless()?;
    gpu.set_map(&map)?;
    gpu.set_color_model(&color_model)?;
    gpu.set_scales(&scales);
    gpu.set_view(zoom, view);
    // Діагностика упаковки region (DH_GPU_DEBUG=1): унікальність рядків 0..3.
    if std::env::var("DH_GPU_DEBUG").is_ok() {
        for r in 0..4u32 {
            let row = gpu.debug_region_row(r, 8);
            println!("region row {r} (первые 8): {row:?}");
        }
    }
    let (gw, gh, gpu_png) = gpu.render_offscreen()?;
    anyhow::ensure!(
        (gw, gh) == (w, h),
        "розміри не збігаються: GPU {gw}x{gh} vs CPU {w}x{h}"
    );
    let p = format!("{}.gpu.png", out_base.display());
    save_png(&p, w, h, &gpu_png)?;

    // ---- Порівняння по RGB.
    let mut diff = 0u64;
    let mut max_delta = 0i32;
    for i in 0..(w as usize * h as usize) {
        let a = &cpu_png[i * 4..i * 4 + 3];
        let b = &gpu_png[i * 4..i * 4 + 3];
        if a != b {
            diff += 1;
            for c in 0..3 {
                max_delta = max_delta.max((a[c] as i32 - b[c] as i32).abs());
            }
        }
    }
    let total = (w as u64) * (h as u64);
    println!(
        "звірка zoom {zoom}, в'юпорт {view_spec}: {diff}/{total} пікселів відрізняються ({:.4}%), макс. дельта {max_delta}",
        diff as f64 * 100.0 / total as f64
    );
    if diff > 0 {
        // Перші кілька розбіжностей для аналізу.
        let mut shown = 0;
        for i in 0..(w as usize * h as usize) {
            let a = &cpu_png[i * 4..i * 4 + 3];
            let b = &gpu_png[i * 4..i * 4 + 3];
            if a != b {
                let x = i % w as usize;
                let y = i / w as usize;
                println!("  ({x},{y}): CPU rgb{a:?} vs GPU rgb{b:?}");
                shown += 1;
                if shown >= 8 {
                    break;
                }
            }
        }
        std::process::exit(1);
    }
    println!("OK: GPU-рендер байт-у-байт збігається з CPU.");
    Ok(())
}

/// Canvas ARGB8888 → RGBA8 bytes.
fn canvas_to_rgba(c: &Canvas) -> Vec<u8> {
    let w = c.width() as usize;
    let h = c.height() as usize;
    let mut rgba = vec![0u8; w * h * 4];
    for (i, &px) in c.buf().iter().take(w * h).enumerate() {
        rgba[i * 4] = ((px >> 16) & 0xFF) as u8;
        rgba[i * 4 + 1] = ((px >> 8) & 0xFF) as u8;
        rgba[i * 4 + 2] = (px & 0xFF) as u8;
        rgba[i * 4 + 3] = 0xFF;
    }
    rgba
}

fn save_png(path: &str, w: u32, h: u32, rgba: &[u8]) -> anyhow::Result<()> {
    let img = image::RgbaImage::from_raw(w, h, rgba.to_vec()).expect("png розмір");
    img.save(path)?;
    println!("збережено: {path} ({w}×{h})");
    Ok(())
}
