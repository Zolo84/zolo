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
use dh_format::palette::Palette;
use dh_format::scenario::{load_scenario, Scenario};
use dh_format::{GamePaths, ProvinceCsv};

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

    /// Швидкість гри 0..7 (0 — найповільніша: 500 мс/день; 7 — найшвидша: 2 мс/день).
    #[arg(long, default_value_t = 3, value_parser = clap::value_parser!(u8).range(0..=7))]
    speed: u8,

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

use dh_render::canvas::{Canvas, RenderSurface, SoftbufferCanvas};
use dh_render::map_render::{MapRenderer, Viewport};
use dh_render::text::{self, TextAlign, TextStyle};

const VIEW_W: u32 = 1280;
const VIEW_H: u32 = 800;

struct AppState {
    cli: Cli,
    map: MapData,
    _prov_csv: Vec<ProvinceCsv>,
    _palette: Palette,
    fonts: Vec<BitmapFont>,
    world: Option<World>,
    game_time: Option<GameTime>,
    window: Option<winit::window::Window>,
    surface: Option<SoftbufferCanvas<'static>>,
    /// Верхній лівий кут камери в блоках 32×32.
    cam_x: u32,
    cam_y: u32,
    zoom: u8,
    last_frame: Instant,
    keys_down: std::collections::HashSet<winit::keyboard::KeyCode>,
}

impl AppState {
    fn hud_font(&self) -> Option<&BitmapFont> {
        self.fonts
            .iter()
            .find(|f| f.set == "root" && f.size == 14 && f.name.to_ascii_lowercase().contains("eurostile"))
            .or_else(|| self.fonts.iter().find(|f| f.size >= 12 && f.size <= 18))
            .or_else(|| self.fonts.first())
    }

    fn render_frame(&mut self) -> Result<()> {
        // Роздільні borrows: map/fonts — іммутабельні поля, surface — мутабельне.
        let (w, h, map_ok) = match self.surface.as_ref() {
            Some(s) => (s.width(), s.height(), true),
            None => return Ok(()),
        };
        let _ = map_ok;
        let map_ref: &MapData = &self.map;
        let zoom = self.zoom;
        let cam_x = self.cam_x;
        let cam_y = self.cam_y;

        let view = Viewport::new(cam_x, cam_y, (w / 32).max(1), (h / 32).max(1));
        let renderer = MapRenderer::new(map_ref, zoom, view).with_provinces(false);

        // Підготувати HUD-дані ДО мутабельного borrow поверхні.
        let font_ptr: *const BitmapFont = self.hud_font().map_or(std::ptr::null(), |f| f);
        let line = match &self.world {
            Some(w) => format!(
                "{}  |  speed {}  |  {}",
                w.date.display(),
                w.speed,
                if w.paused { "PAUSED" } else { "running" }
            ),
            None => "WASD — камера | +/- — зум | Esc — вихід".to_string(),
        };
        let style = TextStyle {
            color: [230, 230, 230],
            shadow: true,
            scale: 1,
            align: TextAlign::Left,
        };

        if let Some(surface) = self.surface.as_mut() {
            renderer.render(&mut **surface);

            if !font_ptr.is_null() {
                // unsafe: font_ptr вказує в self.fonts, яке живе довше за borrow
                let font_ref: &BitmapFont = unsafe { &*font_ptr };
                text::draw(&mut **surface, font_ref, line.as_bytes(), 6, 3, &style);
            }
            surface.present()?;
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
            let step = 1.max(8 - self.zoom as i64 * 2); // зум більший → крок менший
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
    use winit::event::WindowEvent;
    use winit::event_loop::{ActiveEventLoop, ControlFlow, EventLoop};
    use winit::event::ElementState;
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
            let surface =
                SoftbufferCanvas::new(&window, size.width.max(1), size.height.max(1))
                    .expect("softbuffer");
            // SoftbufferCanvas позичає &Window — протягом життя App вікно живе,
            // тож продовження життя через transmute є безпечним (App тримає Window).
            self.0.surface =
                Some(unsafe { std::mem::transmute::<SoftbufferCanvas<'_>, SoftbufferCanvas<'static>>(surface) });
            self.0.window = Some(window);
            self.0.last_frame = Instant::now();
            log::info!("вікно створено (бекенд: Wayland або X11 за середовищем)");
            el.set_control_flow(ControlFlow::Poll);
        }

        fn window_event(&mut self, el: &ActiveEventLoop, _id: winit::window::WindowId, event: WindowEvent) {
            match event {
                WindowEvent::CloseRequested => {
                    log::info!("закриття вікна");
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
                            KeyCode::Escape => el.exit(),
                            KeyCode::Space => {
                                if let Some(w) = &mut self.0.world {
                                    w.paused = !w.paused;
                                    log::info!("{}", if w.paused { "ПАУЗА" } else { "гра триває" });
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
                                self.0.zoom = (self.0.zoom + 1).min(4);
                                log::info!("зум: {}", self.0.zoom);
                            }
                            KeyCode::Minus | KeyCode::NumpadSubtract => {
                                self.0.zoom = self.0.zoom.saturating_sub(1);
                                log::info!("зум: {}", self.0.zoom);
                            }
                            _ => {
                                self.0.keys_down.insert(code);
                            }
                        }
                    } else if event.state == ElementState::Released {
                        self.0.keys_down.remove(&code);
                    }
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
            el.set_control_flow(ControlFlow::WaitUntil(Instant::now() + Duration::from_millis(16)));
        }
    }

    let mut app = App(AppState {
        cli: cli.clone(),
        map,
        _prov_csv: prov_csv,
        _palette: palette,
        fonts,
        world,
        game_time,
        window: None,
        surface: None,
        cam_x: 300, // старт: Північна Атлантика (Ісландія ~ блок 409,22)
        cam_y: 0,
        zoom: 0,
        last_frame: Instant::now(),
        keys_down: Default::default(),
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