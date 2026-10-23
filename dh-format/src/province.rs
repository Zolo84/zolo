//! Province.csv — перелік провінцій (2771 рядків даних, ';').
//!
//! Структура (RE: re/RE-mapformats-full.md):
//!   Id;Name;Area;Region;Continent;Climate;Terrain;SizeModifier;AirCapacity;
//!   Infrastructure;City;Beaches;Port Allowed;Port Seazone;IC;Manpower;Oil;
//!   Metal;Energy;Rare Materials; + 8 пар координат (City/Army/Port/Beach/Fort/
//!   AA/Counter/Terrain-варіанти) + Fill coord X/Y + 'X'.
//! Координати — у пікселях пів-масштабу мапи (0..14976×5760; повний масштаб ×2).
//! Рядки даних: PROV0 (id 0) + провінції 1..2769 + «привид» id=-1 в кінці файлу.

use std::io::BufRead;
use std::path::Path;

use anyhow::Context;
use log::{debug, warn};

use crate::{BBox, Climate, ProvinceCsv, ProvinceResources, Terrain};

/// Індекси колонок Province.csv (0-based; рядок 0 — заголовок).
mod col {
    pub const ID: usize = 0;
    pub const NAME: usize = 1;
    pub const AREA: usize = 2;
    pub const REGION: usize = 3;
    pub const CONTINENT: usize = 4;
    pub const CLIMATE: usize = 5;
    pub const TERRAIN: usize = 6;
    pub const INFRASTRUCTURE: usize = 9;
    pub const IC: usize = 14;
    pub const MANPOWER: usize = 15;
    pub const OIL: usize = 16;
    pub const METAL: usize = 17;
    pub const ENERGY: usize = 18;
    pub const RARE: usize = 19;
    pub const CITY_X: usize = 20;
    pub const CITY_Y: usize = 21;
}

/// Читає Province.csv: розділювач ';', UTF-8 BOM і рядок-заголовок ігноруються.
///
/// Повертає 2770 записів: PROV0 (id 0) + провінції 1..2769. Рядок-«привид» з
/// id=-1 (останній у файлі) пропускається — негативний id не вміщується в
/// [`ProvinceId`](u16); так само пропускаються будь-які рядки з некоректним id.
pub fn load(path: &Path) -> anyhow::Result<Vec<ProvinceCsv>> {
    let file = std::fs::File::open(path)
        .with_context(|| format!("Province.csv: відкрити {}", path.display()))?;
    let mut lines = std::io::BufReader::new(file).lines();

    // Рядок-заголовок; BOM зрізається `lines()` лише він і є першим рядком —
    // убираємо його тут же (std::io::BufRead::lines() лишає BOM як \u{feff}).
    let header = lines
        .next()
        .context("Province.csv: файл порожній (немає заголовка)")??;
    let header = header.trim_start_matches('\u{feff}');
    debug!("Province.csv: заголовок: {header}");

    let mut out: Vec<ProvinceCsv> = Vec::with_capacity(2771);
    for (i, line) in lines.enumerate() {
        let line = line.with_context(|| format!("Province.csv: рядок {}", i + 2))?;
        let f: Vec<&str> = line.split(';').collect();
        let cell = |idx: usize| f.get(idx).copied().unwrap_or("");

        let Some(id) = cell(col::ID).trim().parse::<u16>().ok() else {
            warn!(
                "Province.csv: рядок {}: пропущено — некоректний id '{}' (рядок-«привид»?)",
                i + 2,
                cell(col::ID)
            );
            continue;
        };

        let province = ProvinceCsv {
            id,
            name: cell(col::NAME).to_string(),
            area: cell(col::AREA).to_string(),
            region: cell(col::REGION).to_string(),
            continent: cell(col::CONTINENT).to_string(),
            climate: parse_climate(cell(col::CLIMATE)),
            terrain: parse_terrain(cell(col::TERRAIN)),
            ic: num_f32(cell(col::IC)),
            manpower: num_f32(cell(col::MANPOWER)),
            resources: ProvinceResources {
                ic: num_f32(cell(col::IC)),
                manpower: num_f32(cell(col::MANPOWER)),
                oil: num_f32(cell(col::OIL)),
                metal: num_f32(cell(col::METAL)),
                energy: num_f32(cell(col::ENERGY)),
                rare_materials: num_f32(cell(col::RARE)),
                infrastructure: num_u8(cell(col::INFRASTRUCTURE)),
            },
            city_x: num_i32(cell(col::CITY_X)),
            city_y: num_i32(cell(col::CITY_Y)),
            // TODO: справжні bbox провінцій лежать у map/Map_1/boundbox.tbl
            // (запис 0 = розмір мапи; пів-масштаб 0..14976×5760 — RE-mapformats,
            // розділ boundbox). У CSV bbox-колонок немає — лише точки-іконки
            // (місто, армія, порт, пляж, форт, ППО, counter, terrain-варіанти,
            // fill). Можна вивести наближений bbox як min/max цих точок,
            // але поки що нулі — read boundbox.tbl у dh-format::map.
            bbox_small: BBox {
                x1: 0,
                y1: 0,
                x2: 0,
                y2: 0,
            },
        };
        out.push(province);
    }
    Ok(out)
}

/// Терен за назвою з CSV. Незнайомі значення → [`Terrain::Unknown`], не панікує.
fn parse_terrain(raw: &str) -> Terrain {
    match raw.trim() {
        "Plains" => Terrain::Plains,
        "Hills" => Terrain::Hills,
        "Mountain" | "Mountains" => Terrain::Mountain,
        "Forest" | "trees" => Terrain::Forest,
        "Jungle" | "djungle" => Terrain::Jungle,
        "Marsh" => Terrain::Marsh,
        "Desert" => Terrain::Desert,
        "Ocean" => Terrain::Ocean,
        "Water" => Terrain::Water,
        "Urban" => Terrain::Urban,
        "Subarctic" | "Arctic" => Terrain::Subarctic,
        other => {
            debug!("Province.csv: невідомий терен '{other}' → Terrain::Unknown");
            Terrain::Unknown(0)
        }
    }
}

/// Клімат за назвою з CSV (точне зіставлення з enum). Інше (наприклад реальні
/// у файлі Mediterranean/Subtropical/Tropical/Muddy, '-', порожньо) →
/// [`Climate::Unknown`] зі збереженням рядка, не панікує.
fn parse_climate(raw: &str) -> Climate {
    match raw.trim() {
        "Arctic" => Climate::Arctic,
        "Subarctic" => Climate::Subarctic,
        "Continental" => Climate::Continental,
        "Temperate" => Climate::Temperate,
        "Arid" => Climate::Arid,
        "Tropic" => Climate::Tropic,
        other => Climate::Unknown(other.to_string()),
    }
}

fn num_f32(raw: &str) -> f32 {
    raw.trim().parse().unwrap_or(0.0)
}

fn num_u8(raw: &str) -> u8 {
    raw.trim().parse().unwrap_or(0)
}

fn num_i32(raw: &str) -> i32 {
    raw.trim().parse().unwrap_or(0)
}

/// Приблизний колір терену (R, G, B) для попереднього рендера стратегічної
/// карти. TODO: пізніше звірити/оптимізувати з палітрами гри (tiles.bmp,
/// colorscales.csv — RE-mapformats розділи 5-6).
pub fn terrain_color(t: Terrain) -> (u8, u8, u8) {
    match t {
        Terrain::Ocean => (135, 172, 216),
        Terrain::Water => (135, 172, 216),
        Terrain::Plains => (132, 178, 96),
        Terrain::Hills => (172, 162, 102),
        Terrain::Mountain => (142, 128, 114),
        Terrain::Forest => (64, 128, 64),
        Terrain::Jungle => (48, 114, 48),
        Terrain::Marsh => (116, 150, 128),
        Terrain::Desert => (218, 206, 152),
        Terrain::Subarctic => (210, 214, 218),
        Terrain::Urban => (158, 150, 142),
        Terrain::Unknown(_) => (232, 96, 216), // «магента» — підсвітити невідоме
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::GamePaths;

    /// Справжній Province.csv із встановленої гри (Steam). У файлі 2771 рядків
    /// даних: PROV0 + провінції 1..2769 + «привид» id=-1; привид пропускається
    /// (не вміщується в u16), тож парсер повертає 2770 записів.
    #[test]
    #[ignore = "потребує гри за стандартним Steam-шляхом (GamePaths::from_steam)"]
    fn load_real_province_csv() {
        let root = GamePaths::from_steam().expect("гра не знайдена").root;
        let csv = root.join("map/Map_1/Province.csv");
        let provs = load(&csv).expect("load Province.csv");

        assert_eq!(
            provs.len(),
            2770,
            "2771 рядків даних − «привид» id=-1 = 2770"
        );
        assert!(provs.iter().any(|p| p.id == 0), "PROV0 (id 0) присутній");
        assert_eq!(provs.iter().map(|p| p.id).max(), Some(2769));

        let p1 = provs.iter().find(|p| p.id == 1).expect("провінція 1");
        // Колонка Name у CSV — це ключ "PROV1" (імена див. province_names.csv);
        // людська назва Ісландії лежить у Area/Region.
        assert_eq!(p1.name, "PROV1");
        assert_eq!(p1.area, "Iceland");
        assert_eq!(p1.climate, Climate::Subarctic);
        assert_eq!(p1.terrain, Terrain::Hills);
        // Місто Рейк'явіка — пів-масштабні пікселі (повний = ×2): 26180, 1498.
        assert_eq!((p1.city_x, p1.city_y), (13159, 749));
    }
}
