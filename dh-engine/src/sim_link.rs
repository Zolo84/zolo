//! Місток «симуляція dh-sim ↔ наш двигун».
//!
//! dh-sim (крейти об'єднаної гілки claude, 2026-10-24) дає детерміновану
//! погодинну симуляцію: юніти/дивізії, рух (A* + марш), бої, постачання/ESE,
//! погоду, ORG, атрицію. Наш dh-core дає денний каркас фаз тіка і політичні
//! шкали для рендера. Цей модуль:
//!
//! 1. будує їхню симуляцію зі сценарію через `dh_data::open_install`
//!    (мод береться зі settings.cfg, як в оригіналі);
//! 2. раз на день проганяє 24 погодинні тіки (`advance_day`);
//! 3. синхронізує власників/контролерів провінцій sim → НАШ World — далі
//!    працює наявний конвеєр рендера (FNV-сигнатура → rebuild_political,
//!    міні-карта перебудовується сама).
//!
//! RE-джерела їхніх систем: docs/claude-README.md, docs/ROADMAP.md (етап 3),
//! специфікації docs/ (movement, combat, supply, weather, organisation).

use std::collections::HashMap;

#[cfg(test)]
use std::path::Path;

#[cfg(test)]
use anyhow::Context;
use anyhow::Result;
use dh_core::country::Country;
use dh_core::world::World as OurWorld;
use dh_data::Scenario;
use dh_sim::{Simulation, World as SimWorld};

/// Seed ихнього dh-tool (детермінованість як у референсних прогонах).
const SIM_SEED: u64 = 0xD412_0001;

/// Одна стопка юнітів у провінції (для лічильників на мапі).
#[derive(Debug, Clone)]
pub struct UnitStack {
    /// Провінція (id з Province.csv).
    pub prov: u32,
    /// Тег власника (верхній регістр).
    pub tag: String,
    /// Кількість дивізій у стопці.
    pub divisions: usize,
}

/// Стопки з світу симуляції (спільне для SimLink і SimThread).
fn unit_stacks_of(world: &SimWorld) -> Vec<UnitStack> {
    let mut acc: std::collections::BTreeMap<(u32, &str), usize> = Default::default();
    for u in &world.units {
        if let Some(loc) = u.unit.location {
            *acc.entry((loc, u.owner.as_str())).or_default() += u.unit.divisions.len();
        }
    }
    acc.into_iter()
        .map(|((prov, tag), divisions)| UnitStack {
            prov,
            tag: tag.to_owned(),
            divisions,
        })
        .collect()
}

/// Команди симуляційному потоку.
pub enum ToSim {
    /// Просунути симуляцію на N діб (по 24 погодинні тіки).
    Advance(u32),
    /// Дзеркало анексії: (id провінції, тег) → owner+controller.
    SetProvinces(Vec<(u32, String)>),
}

/// Знімок стану симуляції — доставляється на головний потік (рендер).
pub struct SimSnapshot {
    /// Дата sim (їхній формат, «1933-01-04 00:00»).
    pub date: String,
    pub owner: std::collections::BTreeMap<u32, String>,
    pub controller: std::collections::BTreeMap<u32, String>,
    /// Стопки юнітів на момент знімка.
    pub stacks: Vec<UnitStack>,
    pub battles: usize,
    #[allow(dead_code)] // у логах поки не фігурує
    pub units: usize,
    /// Середня тривалість доби симуляції (мс) за цю команду — профіль.
    pub day_ms: u64,
}

/// Симуляція в окремому потоці: рендер більше не блокується на ~0.8 с/добу.
/// Команди — через канал команд; стан повертається знімками (клон мап
/// власників ~2160 записів — раз на добу, недорого).
pub struct SimThread {
    tx: std::sync::mpsc::Sender<ToSim>,
    rx: std::sync::mpsc::Receiver<SimSnapshot>,
}

impl SimThread {
    pub fn spawn(link: SimLink) -> Self {
        let (tx, cmd_rx) = std::sync::mpsc::channel::<ToSim>();
        let (snap_tx, rx) = std::sync::mpsc::channel::<SimSnapshot>();
        std::thread::spawn(move || {
            let mut sim = link.sim;
            for cmd in cmd_rx {
                match cmd {
                    ToSim::Advance(days) => {
                        let t0 = std::time::Instant::now();
                        sim.run_hours(24 * days.max(1));
                        let day_ms = (t0.elapsed().as_millis() as u64) / days.max(1) as u64;
                        let stacks = unit_stacks_of(&sim.world);
                        let snap = SimSnapshot {
                            date: sim.date().to_string(),
                            owner: sim.world.owner.clone(),
                            controller: sim.world.controller.clone(),
                            battles: sim.world.battles.len(),
                            units: sim.world.units.len(),
                            stacks,
                            day_ms,
                        };
                        if snap_tx.send(snap).is_err() {
                            break; // приймач закрито — двигун виходить
                        }
                    }
                    ToSim::SetProvinces(list) => {
                        for (id, tag) in list {
                            sim.world.owner.insert(id, tag.clone());
                            sim.world.controller.insert(id, tag);
                        }
                    }
                }
            }
        });
        Self { tx, rx }
    }

    /// Замовити одну добу симуляції (неблокувально).
    pub fn advance_day(&self) {
        let _ = self.tx.send(ToSim::Advance(1));
    }

    /// Дзеркало анексії: (id, тег) — власник і контролер.
    pub fn mirror_provinces(&self, list: Vec<(u32, String)>) {
        let _ = self.tx.send(ToSim::SetProvinces(list));
    }

    /// Забрати готовий знімок (неблокувально; раз на добу).
    pub fn try_snapshot(&self) -> Option<SimSnapshot> {
        self.rx.try_recv().ok()
    }
}

pub struct SimLink {
    /// Їхня симуляція (світ + системи + RNG).
    pub sim: Simulation,
    /// Локалізовані назви провінцій (id → назва).
    prov_names: std::collections::HashMap<u32, String>,
}

impl SimLink {
    /// Будує симуляцію зі сценарію (зручність для тестів/зондів):
    /// VFS встановленої гри → єдиний завантажувач dh-data → from_scenario.
    /// Бінарник і приклади парсять сценарій самі й ідуть в from_scenario —
    /// один парс на запуск (А4).
    #[cfg(test)]
    pub fn build(game_root: &Path, scenario_name: &str) -> Result<Self> {
        let vfs = dh_data::open_install(game_root);
        let path = format!("scenarios/{scenario_name}.eug");
        let mut warnings = Vec::new();
        let sc = Scenario::load(&vfs, &path, &mut warnings)
            .with_context(|| format!("{path}: завантаження сценарію через VFS"))?;
        for w in warnings.iter().take(5) {
            log::warn!("dh-data: {w}");
        }
        if warnings.len() > 5 {
            log::debug!("dh-data: попереджень усього: {}", warnings.len());
        }
        Self::from_scenario(&vfs, &sc)
    }

    /// Будує симуляцію з ВЖЕ завантаженого сценарію (А4: один парс на запуск —
    /// головний цикл передає сюди той самий dh_data::Scenario, з якого
    /// dh_format::scenario::from_data зробив наш World).
    pub fn from_scenario(vfs: &dh_data::Vfs, sc: &Scenario) -> Result<Self> {
        let ctx = std::sync::Arc::new(
            dh_sim::movement::MoveContext::load(vfs)
                .map_err(|e| anyhow::anyhow!("MoveContext (дані руху): {e}"))?,
        );
        let (mut sw, conflicts) = SimWorld::from_scenario(sc);
        if !conflicts.is_empty() {
            log::warn!("dh-sim: конфліктів у сценарії: {}", conflicts.len());
        }
        // Стартова дата — як в оригіналі: globaldata.startdate перемагає
        // header.startdate (меню), день у файлах нуль-базований: гра на старті
        // 1933 показує «March 4, 1933» при `day = 3` (скрін re/). Їхній
        // from_scenario бере header — у мосту переозначаємо, щоб світ і
        // симуляція стартували в ту саму дату (календар sim — григоріанський).
        if let Some(start) = sc.start() {
            sw.date = start;
        }
        sw.load_misc(vfs)
            .map_err(|e| anyhow::anyhow!("db/misc.txt: {e}"))?;
        sw.load_leaders(vfs)
            .map_err(|e| anyhow::anyhow!("db/leaders: {e}"))?;
        let tech_warn = sw.load_techs(vfs);
        if !tech_warn.is_empty() {
            log::debug!("dh-sim: попереджень техів: {}", tech_warn.len());
        }

        let mut sim = Simulation::new(sw, SIM_SEED);
        sim.add_system(dh_sim::WeatherSystem::new(ctx.clone()));
        sim.add_system(dh_sim::OrgRegain::new(ctx.clone()));
        sim.add_system(dh_sim::march::March::new(ctx.clone()));
        sim.add_system(dh_sim::DigIn);
        sim.add_system(dh_sim::Attrition::new(ctx.clone()));
        sim.add_system(dh_sim::Engage);
        sim.add_system(dh_sim::Combat::new(ctx, sc));

        // Локалізовані назви провінцій (dh-data: Provinces + Localisation).
        let mut prov_names = std::collections::HashMap::new();
        let mut names_warnings = Vec::new();
        match dh_data::Provinces::load_active(vfs, &mut names_warnings) {
            Ok(provs) => {
                let loc =
                    dh_data::Localisation::load(vfs, dh_data::localisation::Language::English);
                for id in 1..=3000u32 {
                    if let Some(p) = provs.get(id) {
                        prov_names.insert(id, loc.text(&p.name).to_owned());
                    }
                }
            }
            Err(e) => log::warn!("dh-data: Provinces (назви будуть сирі): {e}"),
        }

        Ok(Self { sim, prov_names })
    }

    /// Локалізована назва провінції (fallback — «#id»).
    #[allow(dead_code)] // поки використовується тільки зондами
    pub fn prov_name(&self, prov: u32) -> &str {
        self.prov_names
            .get(&prov)
            .map(String::as_str)
            .unwrap_or("#")
    }

    /// Карта назв провінцій (клонується на головний потік перед
    /// перенесенням симуляції в SimThread).
    pub fn prov_names(&self) -> std::collections::HashMap<u32, String> {
        self.prov_names.clone()
    }

    /// Стопки юнітів: згруповані за (локація, власник) — для шару лічильників.
    pub fn unit_stacks(&self) -> Vec<UnitStack> {
        unit_stacks_of(&self.sim.world)
    }

    /// Один ігровий день: 24 погодинні тіки їхньої симуляції.
    pub fn advance_day(&mut self) {
        self.sim.run_hours(24);
    }

    /// Синхронізація власників/контролерів sim → наш World.
    /// Повертає true, якщо хоча б одна провінція змінилася
    /// (бойові захоплення, окупації, анексії з їхніх систем).
    pub fn sync_owners(&self, our: &mut OurWorld) -> bool {
        sync_owner_maps(our, &self.sim.world.owner, &self.sim.world.controller)
    }
}

/// Застосувати мапи власників/контролерів (з симуляції) до нашого World.
/// Повертає true, якщо стан провінцій змінився.
pub fn sync_owner_maps(
    our: &mut OurWorld,
    owner: &std::collections::BTreeMap<u32, String>,
    controller: &std::collections::BTreeMap<u32, String>,
) -> bool {
    // 1. Країни, яких у нас немає (повстанські/інші теги з їхнього світу).
    for tag in our_missing_tags(our, owner.values().chain(controller.values())) {
        log::info!("dh-sim: нова країна «{tag}» — додано у світ");
        our.add_country(Country::new(dh_format::Tag(tag.clone()), tag.as_str()));
    }

    // 2. Тег (верхній регістр) → індекс у нашому World.
    let idx: HashMap<String, usize> = our
        .countries
        .iter()
        .enumerate()
        .map(|(i, c)| (c.tag.as_str().to_ascii_uppercase(), i))
        .collect();

    // 3. Провінції: owner/controller/occupied з sim-мап.
    let mut changed = 0usize;
    for p in our.provinces.iter_mut() {
        let pid = p.id as u32;
        let new_owner = owner
            .get(&pid)
            .and_then(|t| idx.get(&t.to_ascii_uppercase()).copied());
        let new_ctrl = controller
            .get(&pid)
            .and_then(|t| idx.get(&t.to_ascii_uppercase()).copied());
        if p.owner != new_owner || p.controller != new_ctrl {
            changed += 1;
        }
        p.occupied = matches!((new_owner, new_ctrl), (Some(o), Some(c)) if o != c);
        p.owner = new_owner;
        p.controller = new_ctrl;
    }
    if changed > 0 {
        log::info!("dh-sim → світ: змінено провінцій {changed} (політична карта перемалюється)");
    }
    changed > 0
}

/// Теги з `values`, яких ще немає в нашому World (без дублікатів).
fn our_missing_tags<'a>(our: &OurWorld, values: impl Iterator<Item = &'a String>) -> Vec<String> {
    let mut missing: Vec<String> = Vec::new();
    for t in values {
        let t = t.to_ascii_uppercase();
        let known = our.tags.keys().any(|k| k.as_str().eq_ignore_ascii_case(&t))
            || missing.iter().any(|m| m == &t);
        if !known {
            missing.push(t);
        }
    }
    missing
}

#[cfg(test)]
mod tests {
    use super::*;

    fn game_root() -> std::path::PathBuf {
        match std::env::var("DH_GAME_DIR") {
            Ok(p) => std::path::PathBuf::from(p),
            Err(_) => {
                dh_format::GamePaths::from_steam()
                    .expect("гра у Steam або DH_GAME_DIR")
                    .root
            }
        }
    }

    #[test]
    #[ignore = "потребує встановленої гри (DH_GAME_DIR або Steam)"]
    fn sim_link_builds_runs_and_ownership_matches() {
        let root = game_root();

        // А4: ОДИН парс сценарію на обидва світи — dh-data через VFS, далі
        // конвертація в нашу структуру для build_world і from_scenario для sim.
        let vfs = dh_data::open_install(&root);
        let mut warnings = Vec::new();
        let data = dh_data::Scenario::load(&vfs, "scenarios/1933.eug", &mut warnings)
            .expect("сценарій 1933 через VFS");
        let our_sc = dh_format::scenario::from_data(&data).expect("конвертація сценарію");
        let link = SimLink::from_scenario(&vfs, &data).expect("симуляція 1933");
        assert!(
            !link.sim.world.units.is_empty(),
            "у сценарії 1933 мають бути юніти"
        );
        assert!(!link.sim.world.countries.is_empty());

        // Наш світ з тим самим сценарієм.
        let paths = dh_format::GamePaths::from_steam().expect("гра у Steam");
        let csv = dh_format::province::load(&paths.root.join("map/Map_1/Province.csv"))
            .expect("Province.csv");
        let mut our = dh_core::world::build_world(&our_sc, &csv, 3);
        let owned_before = our.provinces.iter().filter(|p| p.owner.is_some()).count();
        assert!(
            owned_before > 1000,
            "очікуємо тисячі провінцій із власниками"
        );

        // Стартова дата — як в оригіналі (globaldata, нуль-базований день):
        // гра показує «March 4, 1933»; обидва світи мають стартувати в неї.
        assert_eq!(our.date.display(), "March 4 1933");
        assert_eq!(link.sim.date().to_string(), "1933-03-04 00:00");

        // Стартова синхронізація: обидва світи з одного парсера —
        // розбіжностей бути не має.
        assert!(
            !link.sync_owners(&mut our),
            "стартові власники нашого World і dh-sim мають збігатися"
        );

        // Доба симуляції: годинник рухається, синхронізація не падає.
        let mut link = link;
        let stacks = link.unit_stacks();
        let total = total_divisions(&link);
        link.advance_day();
        assert_eq!(link.sim.world.hour, 24);
        assert_eq!(link.sim.date().to_string(), "1933-03-05 00:00");
        let _ = link.sync_owners(&mut our);

        // Назви провінцій завантажено.
        assert!(
            !link.prov_names.is_empty(),
            "локалізовані назви провінцій мають завантажуватися"
        );
        assert!(!stacks.is_empty());
        assert_eq!(total_divisions(&link), total, "стопки втрачають дивізії");
    }

    #[test]
    #[ignore = "потребує встановленої гри (DH_GAME_DIR або Steam)"]
    fn sim_thread_snapshots_flow() {
        use std::time::Duration;
        let root = game_root();
        let link = SimLink::build(&root, "1933").expect("симуляція 1933");
        let sim = SimThread::spawn(link);
        sim.advance_day();
        sim.advance_day();
        sim.advance_day();
        // 3 доби по ~0.9 с; знімки приходять ПО ЧЕРЗІ (після кожної доби) —
        // дренуємо канал, аж поки не побачимо фінальну дату (старт March 4
        // 1933 + 3 доби).
        let deadline = std::time::Instant::now() + Duration::from_secs(30);
        let mut last: Option<SimSnapshot> = None;
        while std::time::Instant::now() < deadline {
            match sim.try_snapshot() {
                Some(s) => {
                    let done = s.date == "1933-03-07 00:00";
                    last = Some(s);
                    if done {
                        break;
                    }
                }
                None => std::thread::sleep(Duration::from_millis(50)),
            }
        }
        let s = last.expect("знімок за 30 с");
        assert_eq!(s.date, "1933-03-07 00:00");
        assert!(!s.stacks.is_empty());
        assert!(s.day_ms > 0, "профіль доби має вимірюватися");
    }
}

/// Синтетичний тест (без файлів гри): sync_owner_maps переносить
/// власників/контролерів і дозаводить відсутні країни.
#[test]
fn sync_owner_maps_applies_and_creates_missing_countries() {
    use crate::sim_link::sync_owner_maps;
    use dh_core::country::Country;
    use dh_core::world::{ProvinceState, World};
    use std::collections::BTreeMap;

    let mut our = World::new();
    our.add_country(Country::new(dh_format::Tag("POL".into()), "POL"));
    let pol = our.tags[&dh_format::Tag("POL".into())];
    our.provinces.push(ProvinceState {
        id: 100,
        owner: Some(pol),
        controller: Some(pol),
        has_vp: false,
        vp: 0,
        infra: 50,
        resources: Default::default(),
        occupied: false,
    });

    let mut owner = BTreeMap::new();
    let mut controller = BTreeMap::new();
    owner.insert(100u32, "GER".to_string());
    controller.insert(100u32, "GER".to_string());

    assert!(sync_owner_maps(&mut our, &owner, &controller));
    let ger = our
        .tags
        .get(&dh_format::Tag("GER".into()))
        .copied()
        .expect("GER дозаведено");
    let p = &our.provinces[0];
    assert_eq!(p.owner, Some(ger));
    assert_eq!(p.controller, Some(ger));
    assert!(!p.occupied);

    // Окупація: контролер ≠ власник.
    owner.insert(100, "GER".into());
    controller.insert(100, "SOV".into());
    assert!(sync_owner_maps(&mut our, &owner, &controller));
    let p = &our.provinces[0];
    assert_eq!(p.owner, Some(ger));
    assert!(p.occupied, "контролер SOV ≠ власник GER");

    // Без змін — false.
    assert!(!sync_owner_maps(&mut our, &owner, &controller));
}

/// Сума дивізій по стопках (для тестів).
#[cfg(test)]
fn total_divisions(link: &SimLink) -> usize {
    link.sim
        .world
        .units
        .iter()
        .map(|u| u.unit.divisions.len())
        .sum()
}
