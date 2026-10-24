//! Світ: стан гри — провінції, країни, альянси, швидкість/пауза та 7 фаз денного циклу.
//!
//! RE-джерела: `re/RE-tick.md` §4.2 (диспетчер світу FUN_005b6f60: режим −1 = усі
//! 7 фаз підряд), `re/RE-misc-details.md` §C (ролі фаз 1..7), `re/RE-eug-format.md`
//! (країни/провінції), `re/RE-tick.md` §7 (швидкість 0..7; дефолт 3 — FUN_006cd560),
//! `re/RE-pause-found.md` §3 (індекс 0 = найповільніше, окремого стану "пауза" немає).

use std::collections::HashMap;

use dh_format::{GameDate, ProvinceId, ProvinceResources, Tag};

use crate::country::{Country, CountryResources};

/// Стан провінції в "живому" світі (на відміну від статичної `ProvinceCsv`).
#[derive(Debug, Clone)]
pub struct ProvinceState {
    pub id: ProvinceId,
    /// Індекс країни-власника в `World::countries` (None — нічия/море).
    pub owner: Option<usize>,
    /// Індекс країни-контролера (фактично займає; відрізняється від власника при окупації).
    pub controller: Option<usize>,
    /// Чи дає провінція victory points.
    pub has_vp: bool,
    /// Цінність як victory point 0..255 (значимо при `has_vp`).
    pub vp: u8,
    /// Поточний рівень інфраструктури 0..255 (ігровий стан, змінюється розвитком;
    /// стартове значення — у `resources.infrastructure`).
    pub infra: u8,
    /// Статичні ресурси провінції (з db/map, dh-format).
    pub resources: ProvinceResources,
    /// Окупована (контролер ≠ власник під час війни).
    pub occupied: bool,
}

/// Альянс у runtime (не зберігається в сейві як список — ідентифікується id).
/// TODO(RE): ориг. фаза 6 — REQ_DESTROY/JOIN/LEAVE_ALLIANCE (0xc4..0xc6), RE-tick.md §4.2.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct AllianceRuntime {
    /// Унікальний id альянсу в межах партії.
    pub id: u32,
    pub name: String,
    /// Індекси країн-членів у `World::countries`.
    pub members: Vec<usize>,
}

impl AllianceRuntime {
    /// Додати країну; повертає `true`, якщо її ще не було в альянсі.
    pub fn join(&mut self, country_idx: usize) -> bool {
        if self.members.contains(&country_idx) {
            return false;
        }
        self.members.push(country_idx);
        true
    }

    /// Вивести країну з альянсу; повертає `true`, якщо вона була членом.
    pub fn leave(&mut self, country_idx: usize) -> bool {
        if let Some(pos) = self.members.iter().position(|&m| m == country_idx) {
            self.members.remove(pos);
            true
        } else {
            false
        }
    }
}

/// Світ гри.
#[derive(Debug, Clone)]
pub struct World {
    /// Поточна ігрова дата (зсувається наприкінці дня, у фазі 7 — "крок ігрового
    /// часу", RE-misc-details.md §C; синхронізована з `GameTime::timer` движком).
    pub date: GameDate,
    pub provinces: Vec<ProvinceState>,
    pub countries: Vec<Country>,
    /// Tag → індекс у `countries` (аналог ориг. масиву тег-слотів `DAT_0089cad8`).
    pub tags: HashMap<Tag, usize>,
    pub alliances: Vec<AllianceRuntime>,
    /// Швидкість 0..7 (0 = найповільніша; темп — таблиця `time::SPEED_MS_PER_DAY`).
    pub speed: u8,
    /// Пауза: викликач не просуває `GameTime`, поки `paused` (окремого стану паузи
    /// в оригінальному .text не знайдено — RE-pause-found.md §3).
    pub paused: bool,
    /// Черга подій, що очікують розгляду (команда `event` 0x1f7 — диспетчер
    /// `FUN_004a8c90`; черга подій — `queued_events` 0x581, RE-scripts.md §4).
    pub pending_events: Vec<u32>,
}

/// Ставка денного податку (частка IC, що йде в гроші) у фазі економіки.
/// TODO(RE): реальна податкова модель у db (міністри, ефективність, політика, загроза).
const TAX_RATE: f64 = 0.1;

impl World {
    /// Порожній світ: 1 січня 1936, швидкість 3 (дефолт оригіналу — FUN_006cd560), без паузи.
    pub fn new() -> Self {
        Self {
            date: GameDate::from_ymd(1936, 1, 1),
            provinces: Vec::new(),
            countries: Vec::new(),
            tags: HashMap::new(),
            alliances: Vec::new(),
            speed: 3,
            paused: false,
            pending_events: Vec::new(),
        }
    }

    /// Додати країну у світ; реєструє її тег. Повертає індекс країни в `countries`.
    pub fn add_country(&mut self, country: Country) -> usize {
        let idx = self.countries.len();
        self.tags.insert(country.tag.clone(), idx);
        self.countries.push(country);
        idx
    }

    pub fn country(&self, tag: &Tag) -> Option<&Country> {
        self.tags.get(tag).map(|&i| &self.countries[i])
    }

    pub fn country_mut(&mut self, tag: &Tag) -> Option<&mut Country> {
        let i = *self.tags.get(tag)?;
        self.countries.get_mut(i)
    }

    /// Створити альянс із країн за їхніми індексами. Повертає індекс альянсу.
    pub fn create_alliance(&mut self, name: impl Into<String>, members: Vec<usize>) -> usize {
        let id = self.alliances.len() as u32;
        self.alliances.push(AllianceRuntime {
            id,
            name: name.into(),
            members,
        });
        self.alliances.len() - 1
    }

    /// Оголосити війну між двома країнами (симетрично, як SETUP_WAR в ориг.):
    /// обидві потрапляють у `at_war` одна в одної, відносини падають до −200.
    /// Повертає `true`, якщо виникла нова війна (false — невідомий тег або війна вже йде).
    pub fn declare_war(&mut self, a: &Tag, b: &Tag) -> bool {
        let Some(&ia) = self.tags.get(a) else {
            return false;
        };
        let Some(&ib) = self.tags.get(b) else {
            return false;
        };
        if ia == ib {
            return false;
        }
        let new_a = self.countries[ia].declare_war(b);
        let new_b = self.countries[ib].declare_war(a);
        if new_a || new_b {
            log::info!("[world] ВІЙНА: {} ↔ {}", a.as_str(), b.as_str());
        }
        new_a || new_b
    }

    /// Встановити швидкість 0..7 (значення поза діапазоном клампуються).
    pub fn set_speed(&mut self, speed: u8) {
        self.speed = speed.min(7);
    }

    /// Аннексія: усі провінції країни `annexed` переходять країні `annexer`
    /// (власник і контролер). Повертає кількість переданих провінцій.
    /// Ориг.: мирний договір / команда `annex` (RE-scripts.md; сценарний setowner).
    pub fn annex(&mut self, annexed: &Tag, annexer: &Tag) -> usize {
        let (Some(&a_idx), Some(&b_idx)) = (self.tags.get(annexed), self.tags.get(annexer)) else {
            return 0;
        };
        if a_idx == b_idx {
            return 0;
        }
        let mut n = 0;
        for p in &mut self.provinces {
            if p.owner == Some(a_idx) {
                p.owner = Some(b_idx);
                p.controller = Some(b_idx);
                n += 1;
            }
        }
        n
    }

    /// Повний денний цикл — 7 фаз у порядку RE-misc-details.md §C (аналог режиму
    /// −1 диспетчера FUN_005b6f60). Викликається движком на кожну подію `DayTick`.
    ///
    /// При паузі цикл пропускається (захисний гейт; основний механізм —
    /// зупинка `GameTime::advance` викликачем).
    pub fn tick_day(&mut self) {
        if self.paused {
            log::debug!("[world] пауза — денний цикл пропущено");
            return;
        }
        log::debug!(
            "[world] денний цикл (обробляється дата {})",
            self.date.display()
        );
        self.phase_convoys();
        self.phase_post_combat();
        self.phase_military();
        self.phase_leaders();
        self.phase_economy();
        self.phase_diplomacy();
        self.phase_events();
    }

    /// Фаза 1: конвої та флотські операції (ориг. FUN_005b7080, RE-misc §C).
    /// TODO(RE): маршрути конвоїв (CONVOY_SET_START/SET_END/ADD_WAYPOINT, 0xef..0xf3),
    /// ескорти/транспорти (0xeb..0xee), розформування/злиття/передача юнітів (0x40/0x49/0x57).
    fn phase_convoys(&mut self) {
        for i in 0..self.countries.len() {
            let owned = self.provinces.iter().filter(|p| p.owner == Some(i)).count();
            log::debug!(
                "[world][1/7 конвої] {}: володіє {} провінціями; флоту й маршрутів немає (TODO)",
                self.countries[i].tag.as_str(),
                owned
            );
        }
    }

    /// Фаза 2: пост-бойове прибирання та скасування руху (ориг. FUN_005af100:
    /// 0x21 COMBAT_REMOVE_UNIT, 0x24 COMBAT_ENDED, 0x30 UNITMOVECANCEL).
    /// TODO(RE): з'явиться разом із бойовою системою та рухом юнітів.
    fn phase_post_combat(&mut self) {
        log::debug!("[world][2/7 пост-бой] бойової системи ще немає — очищення не потрібне (TODO)");
    }

    /// Фаза 3: військові команди + місячний тік (ориг. FUN_005b9290; 0x19 TIMER_MONTH).
    /// TODO(RE): рух/патрулі/десант (0x2c/0x34/0x38), SET_UNIT_CONTROL (0x88),
    /// навантаження на кораблі (0xe8..0xea); з місячного тіка в оригіналі живе
    /// автосейв-лічильник (RE-pause-found.md §2: опція 1/3/5/10 місяців).
    fn phase_military(&mut self) {
        if self.date.is_month_start() {
            log::debug!(
                "[world][3/7 військо] місячний тік {} (ориг. 0x19; автосейв: TODO)",
                self.date.display()
            );
        }
        for c in &self.countries {
            log::debug!(
                "[world][3/7 військо] {}: наземних військ немає (TODO: юніти)",
                c.tag.as_str()
            );
        }
    }

    /// Фаза 4: лідери — заміна/призначення/прибуття (ориг. FUN_005b5e80:
    /// 0x8f REQUEST_REPLACEMENT_LEADER, 0x90 REQUEST_NEW_LEADER, 0x92 ARRIVE_LEADER).
    /// TODO(RE): завантаження db/leaders.txt, генерація нових лідерів, призначення на юніти.
    fn phase_leaders(&mut self) {
        for c in &self.countries {
            log::debug!(
                "[world][4/7 лідери] {}: системи лідерів немає (TODO: db/leaders.txt)",
                c.tag.as_str()
            );
        }
    }

    /// Фаза 5: внутрішня економіка (ориг. FUN_005b4d80): денний збір — податок з IC
    /// у гроші + видобуток стратегічних ресурсів із власних провінцій.
    /// TODO(RE): політика/інвестиції/утримання/розвиток (0x61/0x9a/0xb5/0x13b..),
    /// реальні ставки податків і виробництво з db.
    fn phase_economy(&mut self) {
        // Один прохід по провінціях: сумарний видобуток на країну-власника.
        let mut production = vec![CountryResources::default(); self.countries.len()];
        for p in &self.provinces {
            if let Some(owner) = p.owner {
                if let Some(tot) = production.get_mut(owner) {
                    tot.oil += p.resources.oil as f64;
                    tot.metal += p.resources.metal as f64;
                    tot.energy += p.resources.energy as f64;
                    tot.rare += p.resources.rare_materials as f64;
                }
            }
        }
        for (i, c) in self.countries.iter_mut().enumerate() {
            let income = c.ic * TAX_RATE;
            c.add_money(income);
            let prod = &production[i];
            c.resources.oil += prod.oil;
            c.resources.metal += prod.metal;
            c.resources.energy += prod.energy;
            c.resources.rare += prod.rare;
            log::debug!(
                "[world][5/7 економіка] {}: ic={:.1} → money += {:.1} (баланс {:.1}); видобуток o/m/e/r = {:.2}/{:.2}/{:.2}/{:.2}",
                c.tag.as_str(),
                c.ic,
                income,
                c.money,
                prod.oil,
                prod.metal,
                prod.energy,
                prod.rare
            );
        }
    }

    /// Фаза 6: дипломатія та держдії (ориг. FUN_005b0fd0, 13961 Б: 0x89
    /// DIPLOMATIC_EVENT, війни/мир 0xba..0xcf, образи/доступ/попередження 0xf9..0x100).
    /// TODO(RE): черга дипломатичних дій, AI-оцінка загроз, мирні пропозиції.
    fn phase_diplomacy(&mut self) {
        for c in &self.countries {
            log::debug!(
                "[world][6/7 дипломатія] {} ({}): воєн = {}; AI-дипломатія — TODO",
                c.tag.as_str(),
                if c.ai_enabled { "AI" } else { "людина" },
                c.at_war.len()
            );
        }
        if !self.alliances.is_empty() {
            for a in &self.alliances {
                log::debug!(
                    "[world][6/7 дипломатія] альянс «{}» (id={}): членів {}",
                    a.name,
                    a.id,
                    a.members.len()
                );
            }
        }
    }

    /// Фаза 7: розсилка повідомлень країнам + крок ігрового часу (ориг. FUN_005b7e00;
    /// інкремент дати FUN_0042dc20 виконується саме тут — RE-misc §C; з нього ж
    /// постинг 0x18/0x19/0x1a, RE-pause-found.md §2).
    ///
    /// Дата світу зсувається наприкінці дня; на початок наступного `tick_day`
    /// вона дорівнює ігровій даті (`GameTime::timer`).
    fn phase_events(&mut self) {
        self.date = self.date.add_days(1);
        if self.date.is_month_start() {
            log::debug!(
                "[world][7/7 час] {} — місячний рубіж (ориг. 0x19 → автосейв-декремент: TODO)",
                self.date.display()
            );
        }
        if self.date.is_year_start() {
            log::debug!(
                "[world][7/7 час] {} — новий рік (ориг. 0x1a)",
                self.date.display()
            );
        }
        for c in &self.countries {
            log::debug!(
                "[world][7/7 повідомлення] {}: черга повідомлень порожня (TODO: внутрішні події 0x1c2..0x1cf)",
                c.tag.as_str()
            );
        }
    }
}

impl Default for World {
    fn default() -> Self {
        Self::new()
    }
}

// ---------------------------------------------------------------------------
// Побудова світу зі сценарію (з dh-engine, об'єднання гілок 2026-10-24)
// ---------------------------------------------------------------------------

/// Список id зі сирого значення `{ 1 2 3 }`.
fn parse_id_list(raw: &str) -> Vec<u16> {
    raw.trim()
        .trim_start_matches('{')
        .trim_end_matches('}')
        .split_whitespace()
        .filter_map(|s| s.parse().ok())
        .collect()
}

/// Світ зі сценарію: країни, альянси, провінції (власники — з ownedprovinces
/// країн), VP-блоки провінцій. Спільна точка входу для бінарника, тестів
/// і прикладів.
pub fn build_world(
    sc: &dh_format::scenario::Scenario,
    csv: &[dh_format::ProvinceCsv],
    speed: u8,
) -> World {
    let mut world = World::new();
    // Стартова дата: globaldata перемагає header (меню), фолбек 1936 —
    // та сама логіка, що в dh-sim; єдине місце — dh_format::scenario::game_start.
    world.date = dh_format::scenario::game_start(sc);
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

    // Контроль (окупації/повстання на старті): controlledprovinces країни
    // перевизначає контролера, власник лишається. Дефолт — контролер = власник.
    // RE: RE-eug-format.md; dh-data::scenario CountrySetup::controlled.
    for cb in &sc.countries {
        let Some(&ci) = world.tags.get(&cb.tag) else {
            continue;
        };
        for (k, v) in &cb.body {
            if k.eq_ignore_ascii_case("controlledprovinces") {
                for id in parse_id_list(v) {
                    if let Some(&pi) = idx_by_id.get(&id) {
                        provs[pi].controller = Some(ci);
                    }
                }
            }
        }
    }
    for p in provs.iter_mut() {
        p.occupied = matches!((p.owner, p.controller), (Some(o), Some(c)) if o != c);
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

#[cfg(test)]
mod tests {
    use super::*;
    use crate::time::{GameTime, TimeEvent};

    fn tag(s: &str) -> Tag {
        Tag(s.to_string())
    }

    /// Світ із двома країнами (Німеччина, СРСР).
    fn two_country_world() -> World {
        let mut w = World::new();
        w.add_country(Country::new(tag("GER"), "Німеччина"));
        w.add_country(Country::new(tag("SOV"), "СРСР"));
        w
    }

    #[test]
    fn declare_war_two_sided_updates_relations() {
        let mut w = two_country_world();
        let ger = tag("GER");
        let sov = tag("SOV");

        // Перед війною — нормальні відносини.
        w.country_mut(&ger).unwrap().change_relation(&sov, 25);
        assert_eq!(w.country(&ger).unwrap().relations.get(&sov), Some(&25));
        assert!(w.country(&ger).unwrap().at_war.is_empty());

        assert!(w.declare_war(&ger, &sov));
        assert!(w.country(&ger).unwrap().at_war.contains(&sov));
        assert!(w.country(&sov).unwrap().at_war.contains(&ger));
        // Відносини обнулені в −200 обом сторонам.
        assert_eq!(w.country(&ger).unwrap().relations.get(&sov), Some(&-200));
        assert_eq!(w.country(&sov).unwrap().relations.get(&ger), Some(&-200));

        // Повторне оголошення — без дублювання.
        assert!(!w.declare_war(&ger, &sov));
        assert_eq!(w.country(&ger).unwrap().at_war.len(), 1);

        // Війна самому собі та невідомому тегу неможливі.
        assert!(!w.declare_war(&ger, &ger));
        assert!(!w.declare_war(&ger, &tag("USA")));
    }

    #[test]
    fn tick_day_runs_phases_and_advances_date() {
        let mut w = two_country_world();
        w.country_mut(&tag("GER")).unwrap().ic = 10.0;

        // 1 реальна секунда на швидкості 2 (100 мс/день) = 10 днів; беремо 1 день.
        let mut t = GameTime::new(w.date);
        let ev = t.advance(500.0, 0);
        assert_eq!(ev.len(), 1);
        assert!(matches!(ev[0], TimeEvent::DayTick(_)));

        let money_before = w.countries[0].money;
        w.tick_day();

        // Фаза 7 зсунула дату світу — вона збігається з ігровим таймером.
        assert_eq!(w.date, t.timer);
        // Фаза 5: податок = ic * 0.1 = 10 * 0.1 = 1.0.
        assert!((w.countries[0].money - (money_before + 1.0)).abs() < 1e-9);
        // Провінцій немає — ресурси не змінилися.
        assert_eq!(w.countries[0].resources.oil, 0.0);
    }

    #[test]
    fn pause_skips_day_cycle() {
        let mut w = two_country_world();
        w.paused = true;
        let money_before = w.countries[0].money;
        w.tick_day();
        assert_eq!(w.date, GameDate::from_ymd(1936, 1, 1)); // дата не зсунулась
        assert_eq!(w.countries[0].money, money_before);
    }

    #[test]
    fn alliance_join_leave() {
        let mut w = two_country_world();
        let ai = w.create_alliance("Ось", vec![0]);
        assert!(w.alliances[ai].join(1));
        assert!(!w.alliances[ai].join(1)); // уже член
        assert!(w.alliances[ai].leave(1));
        assert!(!w.alliances[ai].leave(1));
        assert_eq!(w.alliances[ai].members, vec![0]);
        assert_eq!(w.alliances[ai].id, 0);
    }

    /// Аннексія: передача провінцій, нічого не робить для невідомих/тих самих країн.
    #[test]
    fn annex_transfers_provinces() {
        let mut w = World::new();
        let ger = w.add_country(Country::new(tag("GER"), "Німеччина"));
        let sov = w.add_country(Country::new(tag("SOV"), "СРСР"));
        let pol = w.add_country(Country::new(tag("POL"), "Польща"));
        for (id, owner) in [(1u16, sov), (2, sov), (3, ger), (4, pol)] {
            w.provinces.push(ProvinceState {
                id,
                owner: Some(owner),
                controller: Some(owner),
                has_vp: false,
                vp: 0,
                infra: 50,
                resources: ProvinceResources::default(),
                occupied: false,
            });
        }
        assert_eq!(w.annex(&tag("SOV"), &tag("GER")), 2);
        let owners: Vec<_> = w.provinces.iter().map(|p| p.owner.unwrap()).collect();
        assert_eq!(owners, vec![ger, ger, ger, pol]);
        // Контролер слідує за власником.
        assert!(w.provinces.iter().all(|p| p.owner == p.controller));
        // Невідома й та сама країна — без змін.
        assert_eq!(w.annex(&tag("XXX"), &tag("GER")), 0);
        assert_eq!(w.annex(&tag("POL"), &tag("POL")), 0);
        assert_eq!(w.provinces[3].owner, Some(pol));
    }
}
