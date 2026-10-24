//! dh-engine — бінарник власного двигуна Darkest Hour.
//!
//! Рендер через dh-render (Canvas/SoftbufferCanvas + MapRenderer + text).
//! Бекенд winit: Wayland або X11 — обирається автоматично за середовищем
//! (WAYLAND_DISPLAY пріоритетний; на Wayland працює напряму, без Xvfb).
//!
//! Приклад:
//!   cargo run -p dh-engine -- --headless
//!   cargo run -p dh-engine -- --map-only --game ~/Games/DH
//!   cargo run -p dh-engine -- --scenario 1936 --speed 5

use std::collections::HashMap;
use std::path::PathBuf;
use std::time::{Duration, Instant};

use anyhow::{Context, Result};
use clap::Parser;
use log::LevelFilter;

use dh_core::country::Country;
use dh_core::time::{GameTime, TimeEvent};
use dh_core::world::{ProvinceState, World};
use dh_format::fonts::BitmapFont;
use dh_format::map::{load as load_map, MapData};
use dh_format::map_color::GameColorModel;
use dh_format::palette::Palette;
use dh_format::scenario::{load_scenario, Scenario};
use dh_format::{GamePaths, ProvinceCsv};

/// Завантажує точну модель кольору гри:
/// 1) палітра будується з ФАЙЛУ ГРИ `map/Map_1/colorscales.csv` (from_game);
/// 2) резерв — дамп пам'яті (dh-format/data: палітра+LUT+шкали).
fn load_color_model(paths: &GamePaths) -> Option<GameColorModel> {
    // 1) Файли гри: палітра з colorscales.csv, LUT — формула clamp(i+47,4,127).
    match GameColorModel::from_game(paths) {
        Ok(m) => {
            log::info!("модель кольору: палітра з файлів гри (map/Map_1/colorscales.csv)");
            return Some(m);
        }
        Err(e) => log::warn!("colorscales.csv гри: {e:#}"),
    }
    // 2) Резерв: дамп живої гри (data/).
    load_color_model_dump()
}

/// Дамп-модель (палітра/LUT/шкали провінцій, dh-format/data).
/// None — дані не знайдено (стара логіка prov_colors + shade).
fn load_color_model_dump() -> Option<GameColorModel> {
    const CANDIDATES: &[&str] = &[
        // абсолютний шлях у workspace (збирається з dh-engine)
        concat!(env!("CARGO_MANIFEST_DIR"), "/../dh-format/data"),
        concat!(env!("CARGO_MANIFEST_DIR"), "/../../dh-format/data"),
        "dh-format/data",
        "../dh-format/data",
    ];
    for c in CANDIDATES {
        let p = std::path::Path::new(c);
        if p.join("palette565.bin").is_file() {
            match GameColorModel::load(p) {
                Ok(m) => {
                    log::info!("точна модель кольору: {c}");
                    return Some(m);
                }
                Err(e) => log::warn!("модель кольору {c}: {e:#}"),
            }
        }
    }
    log::warn!("palette565.bin не знайдено — кольори приблизні (prov_colors+shade)");
    None
}

#[derive(Parser, Debug, Clone)]
#[command(
    name = "dh-engine",
    version,
    about = "Власний двигун Darkest Hour (Rust): мапа, світ, час, фази денного циклу"
)]
struct Cli {
    /// Шлях до кореня гри. За замовчуванням — Steam-шлях.
    #[arg(long, value_name = "PATH")]
    game: Option<PathBuf>,

    /// Ім'я сценарію .eug без розширення (scenarios/ мода).
    #[arg(long, default_value = "1933")]
    scenario: String,

    /// Віконний режим (завжди ввімкнено; прапорець для сумісності CLI).
    #[arg(long)]
    windowed: bool,

    /// Тільки мапа: вікно + рендер мапи без світу й ігрового циклу.
    #[arg(long)]
    map_only: bool,

    /// Бекенд рендера: auto|soft|vulkan|gl|dx. soft = CPU-канвас (WgpuCanvas),
    /// решта — GPU-шлях (wgpu_map); dx — тільки Windows.
    #[arg(long, default_value = "auto")]
    backend: String,

    /// Швидкість гри 0..7 (0 — найповільніша: 500 мс/день; 7 — найшвидша: 2 мс/день).
    #[arg(long, default_value_t = 3, value_parser = clap::value_parser!(u8).range(0..=7))]
    speed: u8,

    /// Тег країни-гравця: її провінції — світлі (без біта 0x20), решта — темні
    /// (як туман війни у FUN_00654700/FUN_004e8a40). За замовчуванням POL (1933).
    #[arg(long, default_value = "POL")]
    player: String,

    /// Без вікна: завантаження + 1000 денних тіків, друк дати й кінець.
    #[arg(long)]
    headless: bool,
}

fn init_log() -> Result<()> {
    simplelog::TermLogger::init(
        LevelFilter::Info,
        simplelog::Config::default(),
        simplelog::TerminalMode::Stderr,
        simplelog::ColorChoice::Auto,
    )?;
    Ok(())
}

fn resolve_paths(cli: &Cli) -> Result<GamePaths> {
    match &cli.game {
        Some(root) => Ok(GamePaths::with_custom(root.clone())),
        None => GamePaths::from_steam().context("шлях гри з --game або Steam"),
    }
}

fn load_static(paths: &GamePaths) -> Result<(MapData, Vec<ProvinceCsv>, Palette, Vec<BitmapFont>)> {
    let map = load_map(paths).context("мапа")?;
    let csv_path = paths.root.join("map/Map_1/Province.csv");
    let prov_csv = dh_format::province::load(&csv_path).context("Province.csv")?;
    let palette = dh_format::palette::load_default(paths).context("палітра")?;
    let fonts = dh_format::fonts::load_fonts(paths).context("шрифти")?;
    Ok((map, prov_csv, palette, fonts))
}

/// Список id зі сирого значення `{ 1 2 3 }`.
fn parse_id_list(raw: &str) -> Vec<u16> {
    raw.trim()
        .trim_start_matches('{')
        .trim_end_matches('}')
        .split_whitespace()
        .filter_map(|s| s.parse().ok())
        .collect()
}

fn build_world(sc: &Scenario, csv: &[ProvinceCsv], speed: u8) -> World {
    let mut world = World::new();
    let start = sc
        .globaldata
        .startdate
        .or(sc.header.startdate)
        .unwrap_or_else(|| dh_format::GameDate::from_ymd(1936, 1, 1));
    world.date = start;
    world.set_speed(speed.min(7));

    for cb in &sc.countries {
        let mut c = Country::new(cb.tag.clone(), cb.tag.as_str().to_string());
        c.capital = cb.capital;
        world.add_country(c);
    }

    for a in &sc.globaldata.alliances {
        let members: Vec<usize> = a
            .participants
            .iter()
            .filter_map(|t| world.tags.get(t).copied())
            .collect();
        if members.is_empty() {
            continue;
        }
        world.create_alliance(a.name.clone().unwrap_or_else(|| a.kind.clone()), members);
    }

    let mut idx_by_id: HashMap<u16, usize> = HashMap::with_capacity(csv.len());
    let mut provs: Vec<ProvinceState> = Vec::with_capacity(csv.len());
    for p in csv {
        if p.id == 0 {
            continue; // PROV0 — фіктивна
        }
        idx_by_id.insert(p.id, provs.len());
        provs.push(ProvinceState {
            id: p.id,
            owner: None,
            controller: None,
            has_vp: false,
            vp: 0,
            infra: p.resources.infrastructure,
            resources: p.resources.clone(),
            occupied: false,
        });
    }

    for cb in &sc.countries {
        let Some(&ci) = world.tags.get(&cb.tag) else {
            continue;
        };
        for (k, v) in &cb.body {
            if k.eq_ignore_ascii_case("ownedprovinces") {
                for id in parse_id_list(v) {
                    if let Some(&pi) = idx_by_id.get(&id) {
                        provs[pi].owner = Some(ci);
                        provs[pi].controller = Some(ci);
                    }
                }
            }
        }
    }

    for pb in &sc.provinces {
        let Some(&pi) = idx_by_id.get(&pb.id) else {
            continue;
        };
        for (k, v) in &pb.body {
            if k.eq_ignore_ascii_case("points") || k.eq_ignore_ascii_case("vp") {
                provs[pi].has_vp = true;
                provs[pi].vp = v.trim().parse::<u16>().unwrap_or(0).min(255) as u8;
            }
        }
    }

    world.provinces = provs;
    world
}

// ---------------------------------------------------------------------------
// Headless
// ---------------------------------------------------------------------------

fn run_headless(paths: &GamePaths, cli: &Cli) -> Result<()> {
    let (map, prov_csv, _palette, _fonts) = load_static(paths)?;
    log::info!(
        "мапа {}×{} (провінцій: {}), Province.csv: {} записів",
        map.map_w,
        map.map_h,
        map.prov_count,
        prov_csv.len()
    );

    let sc_path = paths
        .mod_dir
        .join("scenarios")
        .join(format!("{}.eug", cli.scenario));
    let sc = load_scenario(&sc_path)?;
    log::info!(
        "сценарій «{}»: країн {}, province-блоків {}, альянсів {}",
        sc.name,
        sc.countries.len(),
        sc.provinces.len(),
        sc.globaldata.alliances.len()
    );

    let mut world = build_world(&sc, &prov_csv, cli.speed);
    let owned = world.provinces.iter().filter(|p| p.owner.is_some()).count();
    log::info!(
        "світ: країн {}, провінцій {}, з власником {}, старт {}",
        world.countries.len(),
        world.provinces.len(),
        owned,
        world.date.display()
    );

    let start = world.date;
    let mut gt = GameTime::new(start);
    for day in 1..=1000u32 {
        let events = gt.advance(
            dh_core::time::SPEED_MS_PER_DAY[world.speed as usize],
            world.speed,
        );
        for e in events {
            match e {
                TimeEvent::DayTick(_) => world.tick_day(),
                TimeEvent::MonthTick(d) => {
                    log::info!("[headless] день {day}: місяць — {}", d.display())
                }
                TimeEvent::YearTick(d) => {
                    log::info!("[headless] день {day}: рік — {}", d.display())
                }
            }
        }
    }
    log::info!(
        "ГОТОВО: старт {} → кінець {} (1000 днів на швидкості {})",
        start.display(),
        world.date.display(),
        world.speed
    );
    Ok(())
}

// ---------------------------------------------------------------------------
// Вікно (winit + Wayland/X11 + dh-render)
// ---------------------------------------------------------------------------

use dh_render::canvas::RenderSurface;
use dh_render::map_render;
use dh_render::map_render::{MapRenderer, Viewport};
use dh_render::text::{self, TextAlign, TextStyle};
use dh_render::wgpu_canvas::WgpuCanvas;
use dh_render::wgpu_map::{Backend, GpuRenderer};

const VIEW_W: u32 = 1280;
const VIEW_H: u32 = 800;

/// Рендерер: GPU-шлях (wgpu_map) або CPU-канвас (WgpuCanvas, `--backend soft`).
enum Renderer {
    Gpu(GpuRenderer<'static>),
    Soft(WgpuCanvas<'static>),
}

impl Renderer {
    fn window_size(&self) -> (u32, u32) {
        match self {
            Renderer::Gpu(g) => g.window_size(),
            Renderer::Soft(c) => (c.width(), c.height()),
        }
    }

    fn resize(&mut self, w: u32, h: u32) -> anyhow::Result<()> {
        match self {
            Renderer::Gpu(g) => g.resize(w, h),
            Renderer::Soft(c) => c.resize(w, h),
        }
    }
}

struct AppState {
    cli: Cli,
    map: MapData,
    prov_csv: Vec<ProvinceCsv>,
    _palette: Palette,
    fonts: Vec<BitmapFont>,
    world: Option<World>,
    game_time: Option<GameTime>,
    window: Option<winit::window::Window>,
    surface: Option<Renderer>,
    /// Верхній лівий кут камери в блоках 32×32.
    cam_x: u32,
    cam_y: u32,
    /// Зум: -3..=4 (від'ємний = зум-аут з mipmap-світлом L2..L4).
    zoom: i8,
    /// Показувати рамки провінцій (клавіша P).
    show_provinces: bool,
    /// Провінція під курсором (блок_x, блок_y, prov_id) — оновлюється на рух миші.
    hover: Option<(u32, u32, u16)>,
    /// Остання обрана кліком провінція.
    selected: Option<(u32, u32, u16)>,
    last_frame: Instant,
    keys_down: std::collections::HashSet<winit::keyboard::KeyCode>,
    /// Кольори провінцій для політичної карти: id → ARGB (власник → колір країни
    /// з country.csv + colorscales.csv; без власника — колір місцевості).
    prov_colors: Vec<u32>,
    /// Тип місцевості кожної провінції (індекс палітри 0..6, Terrain::palette_index).
    prov_terrain: Vec<u8>,
    /// Палітри місцевості для індексного атласа tiles.bmp.
    terrain_palettes: dh_format::palette::TerrainPalettes,
    /// Точна модель кольору гри (палітра 0xA44C34 + LUT 0xAA41CB + шкали):
    /// з dh-format/data. None, якщо дані не знайдено (тоді prov_colors/shade).
    color_model: Option<dh_format::map_color::GameColorModel>,
    /// Шкали провінцій політичної карти з ВЛАСНИКІВ (FUN_004dcb20): байт на
    /// провінцію (23|0x20 вода, 2|0x20 нічия, номер кольору країни | 0x20
    /// для не-гравця). Разом із `color_model` дає точний рендер без дампів.
    prov_scales: Vec<u8>,
}

impl AppState {
    /// В'юпорт для поточного вікна: блоків залежить від zoom.
    fn view_for(&self, w: u32, h: u32) -> Viewport {
        let zoom = self.zoom;
        let w_blocks = if zoom >= 0 {
            (w / 32).max(1)
        } else {
            ((w << -zoom) / 32).max(1)
        };
        let h_blocks = if zoom >= 0 {
            (h / 32).max(1)
        } else {
            ((h << -zoom) / 32).max(1)
        };
        Viewport::new(self.cam_x, self.cam_y, w_blocks, h_blocks)
    }

    /// Назва провінції за id (з Province.csv) або "?".
    fn province_name(&self, id: u16) -> &str {
        self.prov_csv
            .iter()
            .find(|p| p.id == id)
            .map(|p| p.name.as_str())
            .unwrap_or("?")
    }

    fn hud_font(&self) -> Option<&BitmapFont> {
        self.fonts
            .iter()
            .find(|f| {
                f.set == "root" && f.size == 14 && f.name.to_ascii_lowercase().contains("eurostile")
            })
            .or_else(|| self.fonts.iter().find(|f| f.size >= 12 && f.size <= 18))
            .or_else(|| self.fonts.first())
    }

    /// Будує таблицю кольорів провінцій (політична карта):
    /// провінція з власником → колір країни (country.csv + colorscales.csv),
    /// без власника → колір місцевості (terrain_color), вода → water (135,172,216).
    fn build_province_colors(
        prov_csv: &[ProvinceCsv],
        world: &World,
        country_db: &dh_format::db::CountryDb,
    ) -> Vec<u32> {
        let mut colors = vec![0xFF87_ACD8u32; 3000]; // water (135,172,216)
        for p in prov_csv {
            if p.id == 0 {
                continue;
            }
            let (r, g, b) = dh_format::province::terrain_color(p.terrain);
            colors[p.id as usize] = 0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32;
        }
        // Власники: колір країни перекриває колір місцевості.
        for prov in &world.provinces {
            let Some(owner) = prov.owner else { continue };
            let Some(country) = world.countries.get(owner) else {
                continue;
            };
            let (r, g, b) = country_db.color_of(&country.tag);
            colors[prov.id as usize] =
                0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32;
        }
        colors
    }

    /// Шкали провінцій для точної політичної карти (як у грі, FUN_004dcb20 case 0):
    /// - вода (`Terrain::Ocean/Water`) → `WATER_BLOCK | DARK_FLAG` (23|0x20 = 55);
    /// - без власника → `NO_OWNER_BLOCK | DARK_FLAG` (2|0x20 = 34);
    /// - з власником → номер кольору country.csv (FUN_004aee40) | 0x20, якщо
    ///   власник ≠ країна-гравець (темна половина палітри — «не видиме»).
    fn build_province_scales(
        prov_csv: &[ProvinceCsv],
        world: Option<&World>,
        country_db: &dh_format::db::CountryDb,
        player_tag: &str,
    ) -> Vec<u8> {
        use dh_format::colorscale::{color_number, DARK_FLAG, NO_OWNER_BLOCK, WATER_BLOCK};
        let mut scales = vec![WATER_BLOCK | DARK_FLAG; 3000];
        // PROV0 (id 0): за дампом живої гри — 34 (2|0x20, «нічия+темна»);
        // пікселів на мапі не має (лише «Embarked»), але тримаємо як у грі.
        scales[0] = NO_OWNER_BLOCK | DARK_FLAG;
        for p in prov_csv {
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
        if let Some(world) = world {
            for prov in &world.provinces {
                let Some(owner) = prov.owner else { continue };
                let Some(country) = world.countries.get(owner) else {
                    continue;
                };
                let name = country_db
                    .colors
                    .get(country.tag.as_str())
                    .map(String::as_str)
                    .unwrap_or("White");
                let dark = if country.tag.as_str().eq_ignore_ascii_case(player_tag) {
                    0
                } else {
                    DARK_FLAG
                };
                scales[prov.id as usize] = color_number(name) | dark;
            }
        }
        scales
    }

    fn render_frame(&mut self) -> Result<()> {
        // Роздільні borrows: map/fonts — іммутабельні поля, surface — мутабельне.
        let (w, h) = match self.surface.as_ref() {
            Some(s) => s.window_size(),
            None => return Ok(()),
        };
        let map_ref: &MapData = &self.map;
        let zoom = self.zoom;
        let view = self.view_for(w, h);

        // Підготувати HUD-дані ДО мутабельного borrow поверхні.
        let font_ptr: *const BitmapFont = self.hud_font().map_or(std::ptr::null(), |f| f);
        let mut line = match &self.world {
            Some(w) => format!(
                "{}  |  speed {}  |  {}",
                w.date.display(),
                w.speed,
                if w.paused { "PAUSED" } else { "running" }
            ),
            None => "WASD — камера | +/- — зум | P — рамки | Esc — вихід".to_string(),
        };
        if let Some((bx, by, prov)) = self.hover.or(self.selected) {
            let name = self.province_name(prov);
            let sel = if self.hover.is_some() {
                "пров"
            } else {
                "вибір"
            };
            line.push_str(&format!("  |  {sel} {prov} ({name}) @ ({bx},{by})"));
        }
        let style = TextStyle {
            color: [230, 230, 230],
            shadow: true,
            scale: 1,
            align: TextAlign::Left,
        };

        let Some(surface) = self.surface.as_mut() else {
            return Ok(());
        };
        match surface {
            Renderer::Gpu(g) => {
                // GPU-шлях: шейдер сам робить кольори з lightmap; HUD — текст
                // у CPU-канвас, який малюється поверх окремим проходом.
                g.set_view(zoom, view);
                if self.show_provinces {
                    let rects = map_render::province_frames_screen(map_ref, zoom, view);
                    g.set_province_frames(&rects)?;
                } else {
                    g.set_province_frames(&[])?;
                }
                if !font_ptr.is_null() {
                    let font_ref: &BitmapFont = unsafe { &*font_ptr };
                    text::draw(g.hud(), font_ref, line.as_bytes(), 6, 3, &style);
                }
                g.present()?;
            }
            Renderer::Soft(c) => {
                let mut renderer =
                    MapRenderer::new(map_ref, zoom, view).with_provinces(self.show_provinces);
                renderer.prov_colors = Some(&self.prov_colors);
                renderer.prov_terrain = Some(&self.prov_terrain);
                renderer.terrain_palettes = Some(&self.terrain_palettes);
                renderer.color_model = self.color_model.as_ref();
                renderer.prov_scales = Some(&self.prov_scales);
                renderer.render(&mut **c);

                if !font_ptr.is_null() {
                    // unsafe: font_ptr вказує в self.fonts, яке живе довше за borrow
                    let font_ref: &BitmapFont = unsafe { &*font_ptr };
                    text::draw(&mut **c, font_ref, line.as_bytes(), 6, 3, &style);
                }
                c.present()?;
            }
        }
        Ok(())
    }

    fn tick(&mut self) {
        let now = Instant::now();
        let mut dt = now.duration_since(self.last_frame);
        self.last_frame = now;
        if dt > Duration::from_millis(100) {
            dt = Duration::from_millis(100);
        }

        if let (Some(w), Some(gt)) = (&mut self.world, &mut self.game_time) {
            if !w.paused {
                let dt_ms = dt.as_secs_f64() * 1000.0;
                for ev in gt.advance(dt_ms, w.speed) {
                    match ev {
                        TimeEvent::DayTick(_) => w.tick_day(),
                        TimeEvent::MonthTick(d) => log::info!("місяць: {}", d.display()),
                        TimeEvent::YearTick(d) => log::info!("рік: {}", d.display()),
                    }
                }
            }
        }

        // Рух камери (утримування WASD) — крок у блоках, масштабований зумом.
        if !self.keys_down.is_empty() {
            // Зум-аут (від'ємний) → більший крок: 8 − 2·(−k) = 8+2k.
            let step = 1.max(8 - self.zoom as i64 * 2);
            use winit::keyboard::KeyCode::*;
            for k in &self.keys_down {
                match k {
                    KeyW | ArrowUp => self.cam_y = self.cam_y.saturating_sub(step as u32),
                    KeyS | ArrowDown => self.cam_y = self.cam_y.saturating_add(step as u32),
                    KeyA | ArrowLeft => self.cam_x = self.cam_x.saturating_sub(step as u32),
                    KeyD | ArrowRight => self.cam_x = self.cam_x.saturating_add(step as u32),
                    _ => {}
                }
            }
        }
    }
}

fn run_windowed(paths: &GamePaths, cli: &Cli) -> Result<()> {
    use winit::application::ApplicationHandler;
    use winit::dpi::LogicalSize;
    use winit::event::ElementState;
    use winit::event::MouseButton;
    use winit::event::WindowEvent;
    use winit::event_loop::{ActiveEventLoop, ControlFlow, EventLoop};
    use winit::keyboard::{KeyCode, PhysicalKey};
    use winit::window::Window;

    let (map, prov_csv, palette, fonts) = load_static(paths)?;
    log::info!(
        "мапа {}×{} (провінцій: {}), Province.csv: {} записів, шрифтів: {}",
        map.map_w,
        map.map_h,
        map.prov_count,
        prov_csv.len(),
        fonts.len()
    );

    let mut world = None;
    let mut game_time = None;
    if !cli.map_only {
        let sc_path = paths
            .mod_dir
            .join("scenarios")
            .join(format!("{}.eug", cli.scenario));
        let sc = load_scenario(&sc_path)?;
        log::info!(
            "сценарій «{}»: країн {}, province-блоків {}, альянсів {}",
            sc.name,
            sc.countries.len(),
            sc.provinces.len(),
            sc.globaldata.alliances.len()
        );
        let w = build_world(&sc, &prov_csv, cli.speed);
        let owned = w.provinces.iter().filter(|p| p.owner.is_some()).count();
        log::info!(
            "світ: країн {}, провінцій {}, з власником {}, старт {}",
            w.countries.len(),
            w.provinces.len(),
            owned,
            w.date.display()
        );
        game_time = Some(GameTime::new(w.date));
        world = Some(w);
    }

    struct App(AppState);
    impl App {
        fn shutdown(&mut self) {
            self.0.surface = None; // drop спершу поверхню
            self.0.window = None; // потім вікно
        }
    }
    impl ApplicationHandler for App {
        fn resumed(&mut self, el: &ActiveEventLoop) {
            if self.0.window.is_some() {
                return;
            }
            let attrs = Window::default_attributes()
                .with_title(format!(
                    "dh-engine — {}",
                    if self.0.cli.map_only {
                        "мапа".to_string()
                    } else {
                        self.0.cli.scenario.clone()
                    }
                ))
                .with_inner_size(LogicalSize::new(f64::from(VIEW_W), f64::from(VIEW_H)));
            let window = match el.create_window(attrs) {
                Ok(w) => w,
                Err(e) => {
                    log::error!("вікно не створено: {e}");
                    el.exit();
                    return;
                }
            };
            let size = window.inner_size();
            let display = el.owned_display_handle();
            let backend = Backend::parse(&self.0.cli.backend).unwrap_or(Backend::Auto);
            let surface = if backend == Backend::Soft {
                // CPU-канвас (старий шлях): рендер MapRenderer → WgpuCanvas.
                log::info!("бекенд: soft (CPU-канвас)");
                let c = WgpuCanvas::new(
                    &window,
                    Box::new(display),
                    size.width.max(1),
                    size.height.max(1),
                )
                .expect("wgpu (soft)");
                Renderer::Soft(unsafe {
                    std::mem::transmute::<WgpuCanvas<'_>, WgpuCanvas<'static>>(c)
                })
            } else {
                log::info!("бекенд: {} (GPU-шейдери)", backend.name());
                let mut g = GpuRenderer::new_windowed(
                    &window,
                    Box::new(display),
                    size.width.max(1),
                    size.height.max(1),
                    backend,
                )
                .expect("wgpu (gpu)");
                g.set_map(&self.0.map).expect("мапа на GPU");
                let cm = self.0.color_model.as_ref().unwrap_or_else(|| {
                    panic!(
                        "GPU-рендер потребує палітри color_model; \
                         скористайтесь --backend soft або перевірте файли гри"
                    )
                });
                g.set_color_model(cm).expect("палітра на GPU");
                g.set_scales(&self.0.prov_scales);
                // GpuRenderer позичає &Window — протягом життя App вікно живе.
                Renderer::Gpu(unsafe {
                    std::mem::transmute::<GpuRenderer<'_>, GpuRenderer<'static>>(g)
                })
            };
            // Рендерер позичає &Window — протягом життя App вікно живе,
            // тож продовження життя через transmute є безпечним (App тримає Window).
            self.0.surface = Some(surface);
            self.0.window = Some(window);
            self.0.last_frame = Instant::now();
            log::info!("вікно створено (бекенд: Wayland або X11 за середовищем)");
            el.set_control_flow(ControlFlow::Poll);
        }

        fn window_event(
            &mut self,
            el: &ActiveEventLoop,
            _id: winit::window::WindowId,
            event: WindowEvent,
        ) {
            match event {
                WindowEvent::CloseRequested => {
                    log::info!("закриття вікна");
                    self.shutdown();
                    el.exit();
                }
                WindowEvent::Resized(size) => {
                    if let Some(s) = self.0.surface.as_mut() {
                        let _ = s.resize(size.width.max(1), size.height.max(1));
                    }
                }
                WindowEvent::KeyboardInput { event, .. } => {
                    let PhysicalKey::Code(code) = event.physical_key else {
                        return;
                    };
                    if event.state == ElementState::Pressed && !event.repeat {
                        match code {
                            KeyCode::Escape => {
                                self.shutdown();
                                el.exit();
                            }
                            KeyCode::Space => {
                                if let Some(w) = &mut self.0.world {
                                    w.paused = !w.paused;
                                    log::info!(
                                        "{}",
                                        if w.paused {
                                            "ПАУЗА"
                                        } else {
                                            "гра триває"
                                        }
                                    );
                                }
                            }
                            KeyCode::Digit1 => self.0.set_speed(1),
                            KeyCode::Digit2 => self.0.set_speed(2),
                            KeyCode::Digit3 => self.0.set_speed(3),
                            KeyCode::Digit4 => self.0.set_speed(4),
                            KeyCode::Digit5 => self.0.set_speed(5),
                            KeyCode::Digit6 => self.0.set_speed(6),
                            KeyCode::Digit7 => self.0.set_speed(7),
                            KeyCode::Equal | KeyCode::NumpadAdd => {
                                self.0.zoom =
                                    (self.0.zoom + 1).min(dh_render::map_render::ZOOM_MAX);
                                log::info!("зум: {}", self.0.zoom);
                            }
                            KeyCode::Minus | KeyCode::NumpadSubtract => {
                                self.0.zoom =
                                    (self.0.zoom - 1).max(dh_render::map_render::ZOOM_MIN);
                                log::info!("зум: {}", self.0.zoom);
                            }
                            KeyCode::KeyP => {
                                self.0.show_provinces = !self.0.show_provinces;
                                log::info!(
                                    "рамки провінцій: {}",
                                    if self.0.show_provinces {
                                        "увімкнено"
                                    } else {
                                        "вимкнено"
                                    }
                                );
                            }
                            _ => {
                                self.0.keys_down.insert(code);
                            }
                        }
                    } else if event.state == ElementState::Released {
                        self.0.keys_down.remove(&code);
                    }
                }
                WindowEvent::CursorMoved { position, .. } => {
                    let (w, h) = match self.0.surface.as_ref() {
                        Some(s) => s.window_size(),
                        None => return,
                    };
                    if w == 0 || h == 0 {
                        return;
                    }
                    let (x, y) = (
                        (position.x.clamp(0.0, w as f64 - 1.0)) as u32,
                        (position.y.clamp(0.0, h as f64 - 1.0)) as u32,
                    );
                    let view = self.0.view_for(w, h);
                    let picked = map_render::pick_province(&self.0.map, self.0.zoom, view, x, y);
                    self.0.hover = picked;
                }
                WindowEvent::MouseInput {
                    state: ElementState::Pressed,
                    button: MouseButton::Left,
                    ..
                } => {
                    // Лівий клік = закріпити вибір провінції під курсором.
                    self.0.selected = self.0.hover.clone();
                }
                WindowEvent::RedrawRequested => {
                    if let Err(e) = self.0.render_frame() {
                        log::error!("рендер: {e:#}");
                    }
                }
                _ => {}
            }
        }

        fn about_to_wait(&mut self, el: &ActiveEventLoop) {
            self.0.tick();
            if let Some(w) = self.0.window.as_ref() {
                w.request_redraw();
            }
            el.set_control_flow(ControlFlow::WaitUntil(
                Instant::now() + Duration::from_millis(16),
            ));
        }
    }

    // Кольори країн (оригінал): db/country.csv → вбудована палітра exe.
    let country_db = dh_format::db::CountryDb::load(paths)?;
    log::info!("кольори країн: {} тегів", country_db.colors.len());
    // Палітри місцевості для індексного атласа tiles.bmp.
    let terrain_palettes = dh_format::palette::TerrainPalettes::load(paths)?;
    // Тип місцевості кожної провінції (0..6).
    let mut prov_terrain = vec![0u8; 3000];
    for p in &prov_csv {
        if p.id != 0 {
            prov_terrain[p.id as usize] = p.terrain.palette_index();
        }
    }
    let prov_colors = match &world {
        Some(w) => AppState::build_province_colors(&prov_csv, w, &country_db),
        None => {
            // map-only: кольори місцевості (без власників).
            let mut colors = vec![0xFF87_ACD8u32; 3000];
            for p in &prov_csv {
                if p.id == 0 {
                    continue;
                }
                let (r, g, b) = dh_format::province::terrain_color(p.terrain);
                colors[p.id as usize] =
                    0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32;
            }
            colors
        }
    };

    // Шкали з власників — точна політична карта (FUN_004dcb20 case 0).
    let prov_scales =
        AppState::build_province_scales(&prov_csv, world.as_ref(), &country_db, &cli.player);
    {
        use dh_format::colorscale::DARK_FLAG;
        let bright = prov_scales.iter().filter(|&&s| s & DARK_FLAG == 0).count();
        let water = prov_scales.iter().filter(|&&s| s == 23 | DARK_FLAG).count();
        log::info!(
            "шкали провінцій: {} світлих (гравець {}), {} морських (55), решта темні",
            bright,
            cli.player,
            water
        );
    }

    let mut app = App(AppState {
        cli: cli.clone(),
        map,
        prov_csv,
        _palette: palette,
        fonts,
        world,
        game_time,
        window: None,
        surface: None,
        cam_x: 300, // старт: Північна Атлантика (Ісландія ~ блок 409,22)
        cam_y: 0,
        zoom: 0,
        show_provinces: std::env::var("DH_FRAMES").is_ok(),
        hover: None,
        selected: None,
        last_frame: Instant::now(),
        keys_down: Default::default(),
        prov_colors,
        prov_terrain,
        terrain_palettes,
        color_model: load_color_model(paths),
        prov_scales,
    });

    let event_loop = EventLoop::new().context("winit: event loop")?;
    event_loop.run_app(&mut app)?;
    Ok(())
}

impl AppState {
    fn set_speed(&mut self, speed: u8) {
        if let Some(w) = &mut self.world {
            w.set_speed(speed);
            log::info!("швидкість → {speed}");
        }
    }
}

fn main() -> Result<()> {
    let cli = Cli::parse();
    init_log()?;
    log::info!("dh-engine {}", env!("CARGO_PKG_VERSION"));

    let paths = resolve_paths(&cli)?;
    log::info!("корінь гри: {}", paths.root.display());
    log::info!("мод: {}", paths.mod_dir.display());

    if cli.headless {
        run_headless(&paths, &cli)
    } else {
        run_windowed(&paths, &cli)
    }
}
