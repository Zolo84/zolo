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
use std::path::Path;

use anyhow::{Context, Result};
use dh_core::country::Country;
use dh_core::world::World as OurWorld;
use dh_data::{open_install, Scenario};
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

pub struct SimLink {
    /// Їхня симуляція (світ + системи + RNG).
    pub sim: Simulation,
}

impl SimLink {
    /// Будує симуляцію: сценарій через VFS + повний стек систем
    /// (WeatherSystem, OrgRegain, March, DigIn, Attrition, Engage, Combat —
    /// той самий набір, що в dh-tool `march`).
    pub fn build(game_root: &Path, scenario_name: &str) -> Result<Self> {
        let vfs = open_install(game_root);
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

        let ctx = std::sync::Arc::new(
            dh_sim::movement::MoveContext::load(&vfs)
                .map_err(|e| anyhow::anyhow!("MoveContext (дані руху): {e}"))?,
        );
        let (mut sw, conflicts) = SimWorld::from_scenario(&sc);
        if !conflicts.is_empty() {
            log::warn!("dh-sim: конфліктів у сценарії: {}", conflicts.len());
        }
        sw.load_misc(&vfs)
            .map_err(|e| anyhow::anyhow!("db/misc.txt: {e}"))?;
        sw.load_leaders(&vfs)
            .map_err(|e| anyhow::anyhow!("db/leaders: {e}"))?;
        let tech_warn = sw.load_techs(&vfs);
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
        sim.add_system(dh_sim::Combat::new(ctx, &sc));
        Ok(Self { sim })
    }

    /// Стопки юнітів: згруповані за (локація, власник) — для шару лічильників.
    pub fn unit_stacks(&self) -> Vec<UnitStack> {
        let mut acc: std::collections::BTreeMap<(u32, &str), usize> = Default::default();
        for u in &self.sim.world.units {
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

    /// Один ігровий день: 24 погодинні тіки їхньої симуляції.
    pub fn advance_day(&mut self) {
        self.sim.run_hours(24);
    }

    /// Синхронізація власників/контролерів sim → наш World.
    /// Повертає true, якщо хоча б одна провінція змінилася
    /// (бойові захоплення, окупації, анексії з їхніх систем).
    pub fn sync_owners(&self, our: &mut OurWorld) -> bool {
        // 1. Країни, яких у нас немає (повстанські/інші теги з їхнього світу).
        for tag in self.sim.world.countries.keys() {
            let t = dh_format::Tag(tag.clone());
            if our.tags.get(&t).is_none() {
                log::info!("dh-sim: нова країна «{tag}» — додано у світ");
                our.add_country(Country::new(t, tag.as_str()));
            }
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
            let new_owner = self
                .sim
                .world
                .owner
                .get(&pid)
                .and_then(|t| idx.get(&t.to_ascii_uppercase()).copied());
            let new_ctrl = self
                .sim
                .world
                .controller
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
            log::info!(
                "dh-sim → світ: змінено провінцій {changed} (політична карта перемалюється)"
            );
        }
        changed > 0
    }
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
        let link = SimLink::build(&root, "1933").expect("симуляція 1933");
        assert!(
            !link.sim.world.units.is_empty(),
            "у сценарії 1933 мають бути юніти"
        );
        assert!(!link.sim.world.countries.is_empty());

        // Наш світ з нашого завантажувача сценарію.
        let paths = dh_format::GamePaths::from_steam().expect("гра у Steam");
        let sc_path = paths.mod_dir.join("scenarios/1933.eug");
        let sc = dh_format::scenario::load_scenario(&sc_path).expect("наш сценарій");
        let csv = dh_format::province::load(&paths.root.join("map/Map_1/Province.csv"))
            .expect("Province.csv");
        let mut our = dh_core::world::build_world(&sc, &csv, 3);
        let owned_before = our.provinces.iter().filter(|p| p.owner.is_some()).count();
        assert!(
            owned_before > 1000,
            "очікуємо тисячі провінцій із власниками"
        );

        // Стартова синхронізація: обидва завантажувачі читають той самий
        // сценарій — розбіжностей бути не має.
        assert!(
            !link.sync_owners(&mut our),
            "стартові власники нашого World і dh-sim мають збігатися"
        );

        // Доба симуляції: годинник рухається, синхронізація не падає.
        let mut link = link;
        link.advance_day();
        assert_eq!(link.sim.world.hour, 24);
        assert_eq!(link.sim.date().to_string(), "1933-01-02 00:00");
        let _ = link.sync_owners(&mut our);
    }
}
