//! Renders a lightmap level to RGB, coloured like the game: each province is
//! drawn with a named scale from `map/colorscales.csv`, indexed by the pixel's
//! shade. Country colours come from the "main color" column of
//! `db/country.csv`; terrain colours follow "Modding documentation/Map colors.txt".

use dh_data::{Provinces, Scenario, Vfs};
use dh_map::colorscale::Scale;
use dh_map::{shade_raster, ColorScales, Level, LightMap, Smoothing};
use dh_text::CsvTable;
use std::collections::HashMap;

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Mode {
    Political,
    Terrain,
}

pub struct Image {
    pub width: usize,
    pub height: usize,
    pub rgb: Vec<u8>,
}

/// Scale names are written differently in different files
/// ("LightGray" in `country.csv`, "light grey" in `colorscales.csv`).
fn scale_key(name: &str) -> String {
    name.to_ascii_lowercase()
        .replace(' ', "")
        .replace("gray", "grey")
}

fn terrain_scale(terrain: &str) -> &'static str {
    match terrain.to_ascii_lowercase().as_str() {
        "ocean" => "water",
        "plains" | "clear" => "orange",
        "urban" => "darkgrey",
        "forest" => "green",
        "jungle" => "darkgreen",
        "desert" => "yellow",
        "marsh" => "lightgreen",
        "hills" => "darkorange",
        "mountain" | "mountains" => "grey",
        _ => "black",
    }
}

pub fn render(
    vfs: &Vfs,
    level: Level,
    mode: Mode,
    scenario: Option<&Scenario>,
    smoothing: Smoothing,
) -> Result<Image, String> {
    let read = |path: &str| vfs.read(path).map_err(|e| format!("{path}: {e}"));
    let map = LightMap::parse(read(&format!("map/{}", level.file_name()))?, level)
        .map_err(|e| e.to_string())?;
    let ids = map.province_raster().map_err(|e| e.to_string())?;
    let shades = shade_raster(&map, smoothing).map_err(|e| e.to_string())?;
    let scales: HashMap<String, Scale> = ColorScales::parse(&read("map/colorscales.csv")?)
        .scales
        .into_iter()
        .map(|(k, v)| (scale_key(&k), v))
        .collect();
    let scale = |name: &str| scales.get(&scale_key(name)).copied();
    let mut warnings = Vec::new();
    let provinces = Provinces::load(vfs, &mut warnings).map_err(|e| e.to_string())?;

    let country_color: HashMap<String, String> = vfs
        .read("db/country.csv")
        .map(|b| {
            let t = CsvTable::parse_with_header(&b);
            t.rows
                .iter()
                .filter_map(|(_, r)| {
                    Some((
                        t.get(r, "country")?.to_ascii_uppercase(),
                        t.get(r, "main color")?.to_owned(),
                    ))
                })
                .collect()
        })
        .unwrap_or_default();
    let owner: HashMap<u32, &str> = scenario
        .map(|s| {
            s.countries
                .iter()
                .flat_map(|c| c.owned.iter().map(move |&p| (p, c.tag.as_str())))
                .collect()
        })
        .unwrap_or_default();

    // Resolve one scale per province id.
    let max_id = ids.iter().copied().max().unwrap_or(0) as usize;
    let fallback = scale("black").unwrap_or([[0, 0, 0]; 64]);
    let province_scale: Vec<Scale> = (0..=max_id)
        .map(|id| {
            let terrain = provinces
                .get(id as u32)
                .and_then(|p| p.fields.get("terrain"))
                .map(String::as_str)
                .unwrap_or("");
            let is_sea = terrain.eq_ignore_ascii_case("ocean");
            let name = match mode {
                _ if is_sea => "water".to_owned(),
                Mode::Terrain => terrain_scale(terrain).to_owned(),
                Mode::Political => match owner.get(&(id as u32)) {
                    Some(tag) => country_color
                        .get(*tag)
                        .cloned()
                        .unwrap_or_else(|| "white".into()),
                    None if id == 0 => "black".into(),
                    None => "lightgrey".into(),
                },
            };
            scale(&name).unwrap_or(fallback)
        })
        .collect();

    let (w, h) = map.size();
    let mut rgb = vec![0u8; w * h * 3];
    for y in 0..h {
        for x in 0..w {
            let i = y * w + x;
            let id = ids[i];
            let mut c = province_scale[id as usize][shades[i] as usize & 63];
            let right = ids[y * w + (x + 1) % w];
            let below = if y + 1 < h { ids[i + w] } else { id };
            if right != id || below != id {
                let other = if right != id { right } else { below };
                let country_border = mode == Mode::Political
                    && owner.get(&(id as u32)) != owner.get(&(other as u32));
                let f = if country_border { 0.35 } else { 0.7 };
                c = c.map(|v| (v as f32 * f) as u8);
            }
            rgb[i * 3..i * 3 + 3].copy_from_slice(&c);
        }
    }
    Ok(Image {
        width: w,
        height: h,
        rgb,
    })
}

pub fn write_png(img: &Image, path: &str) -> Result<(), String> {
    let file = std::fs::File::create(path).map_err(|e| format!("{path}: {e}"))?;
    let mut enc = png::Encoder::new(
        std::io::BufWriter::new(file),
        img.width as u32,
        img.height as u32,
    );
    enc.set_color(png::ColorType::Rgb);
    enc.set_depth(png::BitDepth::Eight);
    let mut writer = enc.write_header().map_err(|e| e.to_string())?;
    writer.write_image_data(&img.rgb).map_err(|e| e.to_string())
}
