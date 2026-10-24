//! dh-format — читання всіх форматів Darkest Hour.
//!
//! Контрактні типи даних (спільні для всіх модулів крейту).

pub mod colorscale;
pub mod dates;
pub mod db; // бази даних гри (country.csv, units, tech, ...)
pub mod fonts; // бітмап-шрифти (RLE-гліфи)
pub mod map; // tiles/index/boundbox/adjacent/airdist/navaldist/lightmap
pub mod map_color; // точна модель кольору політичної карти (палітра+LUT+scale)
pub mod palette; // палітри (.act, *_palette.bmp)
pub mod province; // Province.csv
pub mod savegame; // сейви .eug + bzip2
pub mod scenario; // сценарії .eug
pub mod script; // лексер/парсер скрипт-мови (1669 токенів)
pub mod tokens; // реєстр ключових слів // генерація палітри з map/Map_1/colorscales.csv (файл гри)

pub use dates::*;

/// Код країни (тег): 3 латинські літери (GER, SOV...) або цифрові (U01..).
#[derive(Debug, Clone, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct Tag(pub String);

impl Tag {
    pub fn as_str(&self) -> &str {
        &self.0
    }
}

/// Id провінції (0..2772; 0 = "PROV0"/невизначена, 2770+ = спецпровінції).
pub type ProvinceId = u16;

/// Числовий id об'єкта в скриптах ({ type = X id = Y }).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub struct ObjId {
    pub kind: u16,
    pub id: u32,
}

/// Тип місцевості провінції.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum Terrain {
    Ocean,
    Plains,
    Hills,
    Mountain,
    Forest,
    Jungle,
    Marsh,
    Desert,
    Subarctic,
    Urban,
    Water,
    Unknown(u8),
}

impl Terrain {
    /// Індекс палітри місцевості 0..6 (як у FUN_00417740):
    /// 0 Plains(landscape), 1 Forest(trees), 2 Mountain, 3 Desert,
    /// 4 Marsh, 5 Hills, 6 Jungle. Море/інше → 0 (landscape як fallback).
    pub fn palette_index(self) -> u8 {
        match self {
            Terrain::Plains => 0,
            Terrain::Forest => 1,
            Terrain::Mountain => 2,
            Terrain::Desert => 3,
            Terrain::Marsh => 4,
            Terrain::Hills => 5,
            Terrain::Jungle => 6,
            Terrain::Ocean
            | Terrain::Water
            | Terrain::Subarctic
            | Terrain::Urban
            | Terrain::Unknown(_) => 0,
        }
    }
}

/// Клімат провінції (з Province.csv).
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum Climate {
    Arctic,
    Subarctic,
    Continental,
    Temperate,
    Arid,
    Tropic,
    Unknown(String),
}

/// Ресурси провінції: IC, мапауер, стратегічні ресурси.
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct ProvinceResources {
    pub ic: f32,
    pub manpower: f32,
    pub oil: f32,
    pub metal: f32,
    pub energy: f32,
    pub rare_materials: f32,
    pub infrastructure: u8,
}

/// Геометрія провінції (bounding box у пікселях повної мапи 29952×11520).
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct BBox {
    pub x1: i32,
    pub y1: i32,
    pub x2: i32,
    pub y2: i32,
}

/// Напрямок (для border-кодів lightmap: сторона).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Side {
    A = 0,
    B = 1,
}

/// Border-код lightmap: посилання на суміжну провінцію через список тайла.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct BorderCode {
    pub raw: u16,
}

impl BorderCode {
    /// Позиція провінції A у списку ID тайла + 4.
    pub fn idx(&self) -> u8 {
        ((self.raw >> 8) & 0x3F) as u8
    }
    /// Номер запису в списку суміжностей A.
    pub fn off(&self) -> u8 {
        ((self.raw >> 1) & 0x0F) as u8
    }
    pub fn side(&self) -> Side {
        if self.raw & 1 == 1 {
            Side::B
        } else {
            Side::A
        }
    }
}

/// Одна провінція з Province.csv.
#[derive(Debug, Clone)]
pub struct ProvinceCsv {
    pub id: ProvinceId,
    pub name: String,
    pub area: String,
    pub region: String,
    pub continent: String,
    pub climate: Climate,
    pub terrain: Terrain,
    pub ic: f32,
    pub manpower: f32,
    pub resources: ProvinceResources,
    pub city_x: i32,
    pub city_y: i32,
    pub bbox_small: BBox, // запис 0 = розмір мапи (половинний масштаб 0..14976×5760)
}

/// Конфігурація: де лежить гра.
#[derive(Debug, Clone)]
pub struct GamePaths {
    pub root: std::path::PathBuf,
    pub mod_dir: std::path::PathBuf,
}

impl GamePaths {
    /// Стандартний шлях Steam (Linux).
    pub fn from_steam() -> anyhow::Result<Self> {
        let home = std::env::var("HOME")?;
        let root = std::path::PathBuf::from(format!(
            "{home}/.local/share/Steam/steamapps/common/Darkest Hour A HOI Game"
        ));
        if !root.exists() {
            anyhow::bail!("гра не знайдена за {root:?}");
        }
        Ok(Self {
            mod_dir: root.join("Mods/Darkest Hour Full"),
            root,
        })
    }

    pub fn with_custom(root: std::path::PathBuf) -> Self {
        Self {
            mod_dir: root.join("Mods/Darkest Hour Full"),
            root,
        }
    }
}
