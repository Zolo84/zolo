//! Події (events) Darkest Hour: завантаження event-файлів, розклад і запуск.
//!
//! RE-джерела:
//! - `re/RE-scripts.md` §4 — ключові слова парсера подій: `event` (0x1f7,
//!   оголошення і файл-посилання), `trigger` (0x3dc), `command` (0x3f8),
//!   `random` (0x3fa), `action_a..d` (0x3f4..0x3f7), `queued_events` (0x581),
//!   `sleepevent` (0x1f8);
//! - `re/RE-commands.md`/`RE-commands-details.md` — диспетчер команд
//!   (288 ID → віртуальні методи), парсер тригерів (88 гілок);
//! - `re/RE-eug-format.md` §2 — `queued_events` у globaldata сценарію
//!   (`event = { tag = CHI id = N hour = H }`).
//!
//! Семантика запуску (перевірено на файлах мода «Darkest Hour Full»):
//! - подія з `date = {..}` (+`offset`, `deathdate`) перевіряється щодня
//!   між датою і deathdate: умова `trigger` пройшла → подія спрацьовує
//!   (невдача НЕ фіксується — перевірка до кінця вікна, як в оригіналі);
//! - подія без дати запускається командою `event = { id = N }` (0x1f7)
//!   іншої події або зі списку `queued_events` сценарію (`hour` — зміщення
//!   в годинах від старту; добова гранулярність: hour 0 → день старту,
//!   24 → +1 доба, 72 → +3 доби);
//! - `sleepevent` (команда 0x1f8) вимикає подію до кінця партії;
//! - вибір опції (action_a..d) без UI/AI — перша дія (ai_chance — TODO,
//!   разом із UI подій).

use std::collections::{BTreeMap, HashMap, HashSet, VecDeque};
use std::sync::Arc;

use anyhow::{Context, Result};
use dh_format::script::{self, Value};
use dh_format::{tokens, GameDate, Tag};

use crate::commands::{Command, CommandExecutor, CommandTarget, EffectExecutor};
use crate::triggers::{self, Trigger};
use crate::world::World;

/// Цілі події: виконання ефектів — за ІНДЕКСОМ країни (commands::CommandTarget),
/// оцінка умов — за ТЕГОМ (triggers::CommandTarget; різні енуми двох
/// диспетчерів). Подія без країни не виконується (умовам потрібен тег).
struct EventTargets {
    exec: CommandTarget,
    eval: triggers::CommandTarget,
}

fn targets_for(world: &World, tag: &Tag) -> Option<EventTargets> {
    let idx = *world.tags.get(tag)?;
    Some(EventTargets {
        exec: CommandTarget::Country(idx),
        eval: triggers::CommandTarget::Country(tag.clone()),
    })
}

// ---------------------------------------------------------------------------
// Структури подій
// ---------------------------------------------------------------------------

/// Одна команда дії — можливо, умовна (`command = { trigger = {...} type = ... }`).
#[derive(Debug, Clone)]
pub struct CondCommand {
    /// `trigger = { ... }` команди (виконується лише якщо умова пройшла).
    pub trigger: Option<Trigger>,
    pub cmd: Command,
}

/// Опція події: `action = { name = ... command = {...} ... }` (в DH) або
/// `action_a..d = { ... }` (HoI2-стиль).
#[derive(Debug, Clone, Default)]
pub struct EventAction {
    pub name: Option<String>,
    /// `trigger = { ... }` ОПЦІЇ — чи доступна дія (вибирається перша доступна).
    pub trigger: Option<Trigger>,
    /// `ai_chance = { factor = N }` — підказка ШІ (поки не використовується).
    pub ai_chance: Option<f64>,
    pub commands: Vec<CondCommand>,
}

/// Подія: `event = { id = N country = TAG trigger = {...} date = {...} ... }`.
#[derive(Debug, Clone, Default)]
pub struct EventDef {
    pub id: u64,
    /// `country = TAG` — країна події (отримувач ефектів без `which`).
    pub country: Option<Tag>,
    /// `random = yes` — подія випадкового пулу (поки не планується; окремий
    /// розклад випадкових подій — TODO).
    pub random: bool,
    /// `persistent = yes` — може спрацювати повторно.
    pub persistent: bool,
    /// Умова запуску (відсутня у подій «під запрошенням» — trigger only).
    pub trigger: Option<Trigger>,
    /// Вікно запуску: `date` (+випадковий `offset` днів) … `deathdate`.
    pub date: Option<GameDate>,
    pub offset: Option<i64>,
    pub deathdate: Option<GameDate>,
    pub name: Option<String>,
    pub desc: Option<String>,
    pub actions: Vec<EventAction>,
}

/// База подій: усі `event = {...}` з файлів ланцюжка `event = "шлях"`.
#[derive(Debug, Clone, Default)]
pub struct EventDb {
    pub events: BTreeMap<u64, EventDef>,
    /// Файли, з яких зчитано (у порядку завантаження).
    pub files: Vec<String>,
}

/// Знімок стану рушія (для сейвів): (спрацьовані id, сплячі id, черга
/// сценарію — (id, тег, день запуску)).
pub type EngineSnapshot = (Vec<u64>, Vec<u64>, Vec<(u64, String, i64)>);

/// Запис про подію, що спрацювала (для лога/HUD-стрічки подій).
#[derive(Debug, Clone)]
pub struct FiredEvent {
    pub id: u64,
    /// Тег країни події (як у файлі).
    pub country: String,
    /// Назва: вирішений текст локалізації або сам ключ.
    pub name: String,
    /// Індекс вибраної опції (0 = action_a).
    pub action: usize,
}

// ---------------------------------------------------------------------------
// Парсинг
// ---------------------------------------------------------------------------

fn as_f64(v: &Value) -> Option<f64> {
    match v {
        Value::Number(n) => Some(*n),
        Value::String(s) => s.trim().parse().ok(),
        _ => None,
    }
}

fn as_text(v: &Value) -> Option<String> {
    match v {
        Value::String(s) => Some(s.clone()),
        Value::Number(n) => Some(format_number(*n)),
        _ => None,
    }
}

/// Число як текст без «.0» (id = 2012001, а не 2012001.0).
fn format_number(n: f64) -> String {
    if n.fract() == 0.0 && n.abs() < 1e15 {
        format!("{}", n as i64)
    } else {
        format!("{n}")
    }
}

fn as_bool(v: &Value) -> Option<bool> {
    match v {
        Value::Bool(b) => Some(*b),
        Value::Number(n) => Some(*n != 0.0),
        Value::String(s) => match s.trim().to_ascii_lowercase().as_str() {
            "yes" | "1" | "true" => Some(true),
            "no" | "0" | "false" => Some(false),
            _ => None,
        },
        _ => None,
    }
}

/// Аргументи команди з блоку `command = { type = X key = v ... }` —
/// позиційні `args`/`str_args` для [`Command::from_token`] (RE-commands.md §0:
/// дані команди = float + int16 + рядок). Покриті команди — найчастіші в
/// реальних файлах; решта йде в from_token як Unknown (warn + пропуск ефекту).
fn command_args(id: u16, v: &Value) -> (Vec<f64>, Vec<String>) {
    let num = |key: &str| v.get(key).and_then(as_f64);
    let txt = |key: &str| v.get(key).and_then(as_text);
    match id {
        // Ресурси/демографія: value.
        0xf6 | 0x1b3 | 0x84 | 0x382 | 0x489 | 0x235 | 0x234 | 0x233 | 0x232 | 0x237 => {
            (num("value").into_iter().collect(), Vec::new())
        }
        // relation/set_relation: which = TAG, value = дельта.
        0x135 | 0x136 => (
            num("value").into_iter().collect(),
            txt("which").into_iter().collect(),
        ),
        // war/peace + пакти: which = TAG (where — друга сторона, якщо є).
        0x137 | 0x1b4 | 0x14c | 0x2a6 | 0x14a | 0x2b5 => {
            let mut s = Vec::new();
            s.extend(txt("which"));
            s.extend(txt("where"));
            (Vec::new(), s)
        }
        // event (0x1f7) + trigger (0x3dc): which = id, when = дні затримки (0),
        // where = TAG (для trigger — нема, тег = виконавець).
        0x1f7 | 0x3dc => (
            vec![num("which").unwrap_or(0.0), num("when").unwrap_or(0.0)],
            txt("where").into_iter().collect(),
        ),
        // sleepevent/decision: which = id.
        0x1f8 | 0x57a => (
            num("which").or_else(|| num("value")).into_iter().collect(),
            Vec::new(),
        ),
        // secedeprovince/control: which = країна, value = провінція.
        0x48f | 0x10b => (
            num("value").into_iter().collect(),
            txt("which").into_iter().collect(),
        ),
        // addcore/removecore: which = провінція (число).
        0x2b3 | 0x2b4 => (
            num("which").or_else(|| num("value")).into_iter().collect(),
            Vec::new(),
        ),
        // ai файл: which = шлях.
        0x1f9 | 0x203 => (Vec::new(), txt("which").into_iter().collect()),
        // technology (0x407): which = id теха, where = TAG (необов'язково).
        0x407 => (
            num("which").into_iter().collect(),
            txt("where").into_iter().collect(),
        ),
        // Найкраще припущення для непокритих: value/which.
        _ => {
            let args = num("value").or_else(|| num("which")).into_iter().collect();
            let strs = txt("which").into_iter().collect();
            (args, strs)
        }
    }
}

/// `command = { trigger = {...} type = X ... }` → CondCommand.
/// `None` — порожня команда без ефекту (`command = { }` у реальних файлах —
/// гра теж нічого не робить).
fn command_from_block(v: &Value) -> Result<Option<CondCommand>> {
    let trigger = match v.get("trigger") {
        Some(t) => Some(triggers::parse_trigger_block(t)?),
        None => None,
    };
    let Some(ty) = v.get("type").and_then(as_text) else {
        return Ok(None);
    };
    let id = tokens::lookup(&ty)
        .with_context(|| format!("невідома команда «{ty}» (нема в реєстрі токенів)"))?;
    let (args, str_args) = command_args(id, v);
    let cmd = Command::from_token(id, &args, &str_args)
        .with_context(|| format!("команда «{ty}»: аргументи"))?;
    Ok(Some(CondCommand { trigger, cmd }))
}

/// `action = { name = ... ai_chance = {...} command = {...} ... }`.
fn action_from_block(v: &Value) -> Result<EventAction> {
    let trigger = match v.get("trigger") {
        Some(t) => Some(triggers::parse_trigger_block(t)?),
        None => None,
    };
    let mut a = EventAction {
        name: v.get("name").and_then(as_text),
        trigger,
        ai_chance: v
            .get("ai_chance")
            .and_then(|c| c.get("factor"))
            .and_then(as_f64),
        commands: Vec::new(),
    };
    for cmd_v in v.get_all("command") {
        match cmd_v {
            Value::List(_) => {
                if let Some(cc) = command_from_block(cmd_v)? {
                    a.commands.push(cc);
                }
            }
            _ => log::warn!("action: command не блок — пропущено"),
        }
    }
    Ok(a)
}

/// `event = { ... }` → EventDef; помилка = підозрілий блок (без id).
fn event_from_block(v: &Value) -> Result<EventDef> {
    let id_f = as_f64(v.get("id").context("event без id")?).context("event: id не число")?;
    if id_f.fract() != 0.0 {
        anyhow::bail!("event: id не ціле: {id_f}");
    }
    let mut e = EventDef {
        id: id_f as u64,
        country: v.get("country").and_then(as_text).map(Tag),
        random: v.get("random").and_then(as_bool).unwrap_or(false),
        persistent: v.get("persistent").and_then(as_bool).unwrap_or(false),
        ..Default::default()
    };
    e.name = v.get("name").and_then(as_text);
    e.desc = v.get("desc").and_then(as_text);
    e.trigger = match v.get("trigger") {
        Some(t) => Some(triggers::parse_trigger_block(t)?),
        None => None,
    };
    e.date = v.get("date").and_then(dh_format::dates::date_from_value);
    e.deathdate = v
        .get("deathdate")
        .and_then(dh_format::dates::date_from_value);
    e.offset = v.get("offset").and_then(as_f64).map(|n| n as i64);
    // Опції: DH-стиль `action = {...}` (може бути багато) + HoI2 action_a..d.
    for av in v.get_all("action") {
        if matches!(av, Value::List(_)) {
            e.actions.push(action_from_block(av)?);
        }
    }
    for key in ["action_a", "action_b", "action_c", "action_d"] {
        for av in v.get_all(key) {
            if matches!(av, Value::List(_)) {
                e.actions.push(action_from_block(av)?);
            }
        }
    }
    Ok(e)
}

// ---------------------------------------------------------------------------
// Завантаження бази подій
// ---------------------------------------------------------------------------

impl EventDb {
    /// Завантажує ланцюжок event-файлів: `event = "шлях"` рекурсивно.
    ///
    /// `read` — читач байтів (у dh-engine — VFS з шарами мода; у тестах —
    /// std::fs). Файли з помилками — warn і пропуск (гра теж толерує биті
    /// мод-файли).
    pub fn load(files: &[String], read: &dyn Fn(&str) -> Result<Vec<u8>>) -> Result<Self> {
        let mut db = EventDb::default();
        let mut seen: HashSet<String> = HashSet::new();
        let mut queue: Vec<String> = files.to_vec();
        while let Some(path) = queue.pop() {
            let norm = path.replace('\\', "/").to_ascii_lowercase();
            if !seen.insert(norm) {
                continue;
            }
            let bytes = match read(&path) {
                Ok(b) => b,
                Err(e) => {
                    log::warn!("events: {path}: {e:#}");
                    continue;
                }
            };
            let root = match script::parse_bytes(&bytes) {
                Ok(v) => v,
                Err(e) => {
                    log::warn!("events: {path}: {e:#}");
                    continue;
                }
            };
            db.files.push(path.clone());
            // Корінь файлу — список стейтментів; `event = {...}` або `event = "шлях"`.
            if let Value::List(entries) = &root {
                for (key, val) in entries {
                    if !key.eq_ignore_ascii_case("event") {
                        continue;
                    }
                    match val {
                        Value::List(_) => match event_from_block(val) {
                            Ok(e) => {
                                if db.events.insert(e.id, e).is_some() {
                                    log::debug!("events: дублікат id у {path}");
                                }
                            }
                            Err(err) => log::warn!("events: {path}: {err:#}"),
                        },
                        _ => {
                            if let Some(target) = as_text(val) {
                                queue.push(target);
                            }
                        }
                    }
                }
            }
        }
        Ok(db)
    }
}

// ---------------------------------------------------------------------------
// Рушій подій
// ---------------------------------------------------------------------------

/// Максимальна кількість ЗАПУСКІВ за одну добу (захист від циклів
/// «подія запускає себе»). Оцінка тригерів кандидатів не лімітується —
/// датні події перевіряються всі, як в оригіналі.
const MAX_FIRED_PER_DAY: usize = 64;

/// Джерело кандидата на запуск.
#[derive(Debug, Clone)]
enum Due {
    /// Зі сценарію (`queued_events`): id + тег країни.
    Queued(u64, Tag),
    /// Датна подія у вікні (date..deathdate).
    Dated(u64),
    /// Команда `event = { id = N }` іншої події.
    Commanded(u64),
}

/// Рушій: черги, «сплячі», розклад дат, виконання команд.
/// (Clone — бо World клонується; клон рушія = знімок стану подій.)
#[derive(Debug, Clone)]
pub struct EventEngine {
    pub db: Arc<EventDb>,
    /// Події, що вже спрацювали (id) — не повторюються (окрім persistent).
    fired: HashSet<u64>,
    /// `sleepevent` — вимкнені до кінця партії.
    sleeping: HashSet<u64>,
    /// Вирішена дата запуску для датних подій (випадковий offset обрано
    /// один раз, детерміновано від seed).
    schedule: HashMap<u64, GameDate>,
    /// Черга сценарію (`queued_events`): (id, тег, дата запуску).
    queued: Vec<(u64, Tag, GameDate)>,
    /// Відкладені запуски командою `event ... when = H`: (id, кому (None —
    /// країна з визначення), день запуску).
    scheduled: Vec<(u64, Option<Tag>, GameDate)>,
    exec: CommandExecutor,
    /// Ключ локалізації → текст (заповнює двигун з Localisation).
    pub names: HashMap<String, String>,
    /// Стрічка спрацьовувань (для HUD подій, як в оригіналі).
    pub log_tail: Vec<FiredEvent>,
}

impl EventEngine {
    pub fn new(db: Arc<EventDb>, seed: u64) -> Self {
        Self {
            db,
            fired: HashSet::new(),
            sleeping: HashSet::new(),
            schedule: HashMap::new(),
            queued: Vec::new(),
            scheduled: Vec::new(),
            exec: CommandExecutor::with_seed(seed),
            names: HashMap::new(),
            log_tail: Vec::new(),
        }
    }

    /// Кількість (спрацьованих, сплячих) — для стану/сейвів.
    pub fn counts(&self) -> (usize, usize) {
        (self.fired.len(), self.sleeping.len())
    }

    /// Подія зі сценарію (`queued_events`) — (id, тег, дата запуску).
    pub fn queue(&mut self, id: u64, tag: Tag, at: GameDate) {
        self.queued.push((id, tag, at));
    }

    /// `sleepevent` (команда або сценарій) — вимкнути подію.
    pub fn sleep(&mut self, id: u64) {
        self.sleeping.insert(id);
    }

    /// Вирішена дата запуску датної події: date + випадковий offset днів
    /// [0..offset] (offset > 0), один раз і детерміновано (RNG виконавця).
    fn resolve_day(&mut self, id: u64, date: GameDate, offset: Option<i64>) -> GameDate {
        if let Some(d) = self.schedule.get(&id) {
            return *d;
        }
        let d = match offset {
            Some(off) if off > 0 => date.add_days(self.exec.rng.next_below(off as u64 + 1) as i64),
            _ => date,
        };
        self.schedule.insert(id, d);
        d
    }

    /// Відкладені запуски (`event ... when = H`): наставлі на поточну дату —
    /// у чергу `queue`, решта — в розклад рушія (наступні доби).
    fn drain_timed(&mut self, world: &mut World, queue: &mut VecDeque<Due>) {
        let date = world.date;
        let (due_scheduled, keep): (Vec<_>, Vec<_>) =
            self.scheduled.drain(..).partition(|(_, _, d)| *d <= date);
        self.scheduled = keep;
        for (id, tag, _) in due_scheduled {
            queue.push_back(match tag {
                Some(t) if !t.0.is_empty() => Due::Queued(id, t),
                _ => Due::Commanded(id),
            });
        }
        let mut still_timed: Vec<(u64, Option<Tag>, GameDate)> = Vec::new();
        for (id, to, due_day) in world.pending_timed.drain(..) {
            let tag = (!to.is_empty()).then_some(Tag(to));
            let due = GameDate::new(due_day);
            if due <= date {
                queue.push_back(match tag {
                    Some(t) => Due::Queued(id as u64, t),
                    None => Due::Commanded(id as u64),
                });
            } else {
                still_timed.push((id as u64, tag, due));
            }
        }
        self.scheduled.extend(still_timed);
    }

    /// Фаза 7 доби: зібрати кандидатів, перевірити тригери, виконати.
    ///
    /// Порядок: спершу «гаряча» черга (сценарна `queued_events`, відкладені
    /// `when`, командні `event =`), потім датні події у вікні. Бюджет лімітує
    /// тільки ЗАПУСКИ (захист від циклів); оцінюються всі кандидати. Лишок
    /// черги повертається без втрат (датні перезбираються щодня самі).
    /// Повертає список спрацьовувань (для лога двигуна/HUD).
    pub fn run_day(&mut self, world: &mut World) -> Vec<FiredEvent> {
        let mut fired_today: Vec<FiredEvent> = Vec::new();
        let date = world.date;
        let mut hot: VecDeque<Due> = VecDeque::new();

        // 1) Сценарна черга, що наставла.
        self.queued.retain(|(id, tag, at)| {
            if *at <= date {
                hot.push_back(Due::Queued(*id, tag.clone()));
                false
            } else {
                true
            }
        });
        // 2) Відкладені запуски (`when`) + командні (`event =`) + сни.
        self.drain_timed(world, &mut hot);
        hot.extend(
            world
                .pending_events
                .drain(..)
                .map(|id| Due::Commanded(id as u64)),
        );
        for id in world.pending_sleep.drain(..) {
            self.sleeping.insert(id as u64);
        }
        // 3) Датні події у вікні (id спершу — без borrow-конфлікту з resolve_day).
        let mut cold: VecDeque<u64> = self
            .db
            .events
            .iter()
            .filter(|(id, def)| {
                !self.fired.contains(id)
                    && !self.sleeping.contains(id)
                    && !def.random
                    && def.date.is_some()
                    && def.deathdate.is_none_or(|dd| date <= dd)
            })
            .map(|(id, _)| *id)
            .collect();
        // Датні, чей вирішений день ще не настав, — з черги геть (розклад
        // кешований у resolve_day; перезбірка щодня і так відбувається).
        let mut due_cold: VecDeque<u64> = VecDeque::new();
        for id in std::mem::take(&mut cold) {
            let (d, off) = {
                let def = self.db.events.get(&id).expect("id із ітерації");
                (def.date.expect("перевірено вище"), def.offset)
            };
            if date >= self.resolve_day(id, d, off) {
                due_cold.push_back(id);
            }
        }
        cold = due_cold;

        // Виконання: гаряча черга повністю, потім датні; бюджет — на запуски.
        let mut fires = 0usize;
        loop {
            let due = match hot.pop_front() {
                Some(d) => d,
                None => match cold.pop_front() {
                    Some(id) => Due::Dated(id),
                    None => break,
                },
            };
            if fires >= MAX_FIRED_PER_DAY {
                // Бюджет вичерпано: лишок — назад без втрат (датні
                // перезбираються щодня самі).
                for r in std::iter::once(due).chain(hot.drain(..)) {
                    match r {
                        Due::Queued(id, tag) => self.queued.push((id, tag, date)),
                        Due::Commanded(id) => world.pending_events.push(id as u32),
                        Due::Dated(_) => {}
                    }
                }
                break;
            }
            let (id, tag, recheck_on_fail) = match &due {
                Due::Queued(id, t) => (*id, Some(t.clone()), false),
                Due::Dated(id) => (*id, None, true),
                Due::Commanded(id) => (*id, None, false),
            };
            let is_persistent = self
                .db
                .events
                .get(&id)
                .map(|d| d.persistent)
                .unwrap_or(false);
            if (self.fired.contains(&id) && !is_persistent) || self.sleeping.contains(&id) {
                continue;
            }
            let Some(def) = self.db.events.get(&id).cloned() else {
                log::warn!("events: подія {id} відсутня в базі (запрошена/черга)");
                continue;
            };
            // Країна події: з кандидата (queued) або з визначення.
            let target_tag = tag.or_else(|| def.country.clone());
            let Some(tag) = target_tag else {
                log::debug!("events: подія {id} без country — пропуск (умовам потрібен тег)");
                continue;
            };
            let Some(targets) = targets_for(world, &tag) else {
                log::debug!(
                    "events: подія {id} для {} — країни немає у світі (пропуск)",
                    tag.as_str()
                );
                continue;
            };
            // Тригер події. Датна перевіряється ЩОДНЯ до deathdate (невдача не
            // фіксується); queued/commanded — дропається.
            if let Some(trig) = &def.trigger {
                if !triggers::evaluate(world, &targets.eval, trig) {
                    if !recheck_on_fail {
                        log::debug!("events: подія {id}: тригер не пройшов — дропнуто");
                        self.fired.insert(id);
                    }
                    continue;
                }
            }
            fires += 1;
            let f = self.fire(world, &def, &targets);
            fired_today.push(f);
            // Ланцюги: команди могли запросити нові події (негайні/відкладені) чи сон.
            hot.extend(
                world
                    .pending_events
                    .drain(..)
                    .map(|id| Due::Commanded(id as u64)),
            );
            self.drain_timed(world, &mut hot);
            for id in world.pending_sleep.drain(..) {
                self.sleeping.insert(id as u64);
            }
        }

        self.log_tail.extend(fired_today.iter().cloned());
        let cut = self.log_tail.len().saturating_sub(64);
        self.log_tail.drain(..cut);
        fired_today
    }

    /// Виконати подію: вибрати опцію, застосувати команди (умовні — за
    /// тригером команди). Ціль — країна події.
    fn fire(&mut self, world: &mut World, def: &EventDef, targets: &EventTargets) -> FiredEvent {
        // Вибір опції: перша, чий `trigger` пройшов (без AI — ai_chance TODO;
        // жодна не пройшла — перша, як допущення).
        let action_idx = def
            .actions
            .iter()
            .position(|a| match &a.trigger {
                Some(t) => triggers::evaluate(world, &targets.eval, t),
                None => true,
            })
            .unwrap_or(0);
        if let Some(action) = def.actions.get(action_idx) {
            for cc in &action.commands {
                if let Some(trig) = &cc.trigger {
                    if !triggers::evaluate(world, &targets.eval, trig) {
                        continue;
                    }
                }
                if let Err(e) = self.exec.execute(world, &targets.exec, &cc.cmd) {
                    log::warn!("events: команда події {}: {e:#}", def.id);
                }
            }
        }
        if def.persistent {
            self.fired.remove(&def.id);
        } else {
            self.fired.insert(def.id);
        }
        let name = def
            .name
            .as_deref()
            .and_then(|k| self.names.get(k).cloned())
            .unwrap_or_else(|| def.name.clone().unwrap_or_default());
        let f = FiredEvent {
            id: def.id,
            country: def
                .country
                .as_ref()
                .map(|t| t.as_str().to_string())
                .unwrap_or_default(),
            name,
            action: action_idx,
        };
        log::info!(
            "[подія] {}: id {} — «{}» (опція {})",
            f.country,
            f.id,
            f.name,
            f.action
        );
        f
    }

    /// Стан для сейву: (спрацьовані, сплячі, черга сценарію).
    pub fn snapshot(&self) -> EngineSnapshot {
        (
            self.fired.iter().copied().collect(),
            self.sleeping.iter().copied().collect(),
            self.queued
                .iter()
                .map(|(id, t, d)| (*id, t.as_str().to_string(), d.day))
                .collect(),
        )
    }
}

// ---------------------------------------------------------------------------
// Тести
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use crate::country::Country;

    /// Світ із POL (гроші 0) і GER.
    fn two_countries() -> World {
        let mut w = World::new();
        let mut pol = Country::new(Tag("POL".into()), "POL");
        pol.money = 0.0;
        w.add_country(pol);
        w.add_country(Country::new(Tag("GER".into()), "GER"));
        w.add_country(Country::new(Tag("JAP".into()), "JAP"));
        w
    }

    /// ДБ з одним файлом (синтетичний текст).
    fn db_of(text: &str) -> Arc<EventDb> {
        let files = vec!["test_events.txt".to_string()];
        let read = |p: &str| -> Result<Vec<u8>> {
            assert_eq!(p, "test_events.txt");
            Ok(text.as_bytes().to_vec())
        };
        Arc::new(EventDb::load(&files, &read).unwrap())
    }

    const DATED: &str = r#"
event = {
  id = 100
  country = POL
  date = { year = 1933 month = march day = 3 }
  name = "TEST_EVENT"
  trigger = { money = 50 }
  action = { command = { type = money value = 100 } }
}
event = {
  id = 200
  country = GER
  date = { year = 1933 }
  action = { command = { type = money value = 5 } }
}
"#;

    #[test]
    fn dated_event_fires_when_trigger_passes() {
        let mut w = two_countries();
        w.date = GameDate::from_ymd(1933, 3, 4);
        let db = db_of(DATED);
        let mut eng = EventEngine::new(db, 7);
        eng.names
            .insert("TEST_EVENT".into(), "Тестова подія".into());

        // Грошей немає → умова не пройшла; подія НЕ «згоріла» (перевірка
        // щодня у вікні) — друга безтригерна спрацювала.
        let fired = eng.run_day(&mut w);
        assert_eq!(fired.len(), 1, "без умови спрацьовує лише 200");
        assert_eq!(fired[0].id, 200);
        assert_eq!(eng.counts(), (1, 0));

        // Дали грошей → спрацювала наступного дня у вікні.
        w.date = GameDate::from_ymd(1933, 3, 5);
        w.country_mut(&Tag("POL".into())).unwrap().money = 100.0;
        let fired = eng.run_day(&mut w);
        assert_eq!(fired.len(), 1);
        assert_eq!(fired[0].id, 100);
        assert_eq!(fired[0].name, "Тестова подія");
        // Команда виконана: 100 + 100.
        assert_eq!(w.country(&Tag("POL".into())).unwrap().money, 200.0);
        assert_eq!(eng.counts(), (2, 0));
    }

    #[test]
    fn queued_event_fires_on_due_day() {
        let mut w = two_countries();
        w.date = GameDate::from_ymd(1933, 3, 4);
        let db = db_of(
            r#"
event = {
  id = 300
  country = JAP
  name = "QUEUED_ONE"
  action = { command = { type = money value = 7 } }
}
"#,
        );
        let mut eng = EventEngine::new(db, 1);
        // hour = 24 → наступна доба після старту.
        eng.queue(300, Tag("JAP".into()), GameDate::from_ymd(1933, 3, 5));
        let fired = eng.run_day(&mut w); // 4 березня — ще рано
        assert!(fired.is_empty());
        w.date = GameDate::from_ymd(1933, 3, 5);
        let fired = eng.run_day(&mut w);
        assert_eq!(fired.len(), 1);
        assert_eq!(fired[0].id, 300);
        assert_eq!(w.country(&Tag("JAP".into())).unwrap().money, 7.0);
    }

    #[test]
    fn event_command_triggers_chained_event() {
        let mut w = two_countries();
        w.date = GameDate::from_ymd(1933, 3, 4);
        let db = db_of(
            r#"
event = {
  id = 400
  country = POL
  action = { command = { type = event which = 500 } }
}
event = {
  id = 500
  country = GER
  action = { command = { type = money value = 9 } }
}
"#,
        );
        let mut eng = EventEngine::new(db, 3);
        // Подію 400 запускаємо «командою» — через чергу світу.
        w.pending_events.push(400);
        let fired = eng.run_day(&mut w);
        let ids: Vec<u64> = fired.iter().map(|f| f.id).collect();
        assert_eq!(ids, vec![400, 500], "ланцюг: 400 → 500");
        assert_eq!(w.country(&Tag("GER".into())).unwrap().money, 9.0);
    }

    #[test]
    fn sleepevent_blocks_event() {
        let mut w = two_countries();
        w.date = GameDate::from_ymd(1933, 3, 4);
        let db = db_of(DATED);
        let mut eng = EventEngine::new(db, 2);
        // `sleepevent` командою (через світ).
        w.pending_sleep.push(200);
        w.country_mut(&Tag("POL".into())).unwrap().money = 100.0;
        let fired = eng.run_day(&mut w);
        // 200 спляча; 100 спрацювала (гроші дали).
        assert_eq!(fired.len(), 1);
        assert_eq!(fired[0].id, 100);
        assert_eq!(eng.counts(), (1, 1));
    }

    #[test]
    fn event_command_with_when_schedules_later() {
        let mut w = two_countries();
        w.date = GameDate::from_ymd(1933, 3, 4);
        let db = db_of(
            r#"
event = {
  id = 600
  country = POL
  action = { command = { type = event which = 700 where = GER when = 30 } }
}
event = {
  id = 700
  country = GER
  action = { command = { type = money value = 3 } }
}
"#,
        );
        let mut eng = EventEngine::new(db, 5);
        w.pending_events.push(600);
        // `when = 30` = 30 діб (у файлах DH 360 = «in 1 year»): подія 700 має
        // прийти рівно через місяць, НЕ в той самий день.
        let day1 = eng.run_day(&mut w);
        assert_eq!(day1.len(), 1, "тільки 600");
        assert_eq!(w.country(&Tag("GER".into())).unwrap().money, 0.0);
        for _ in 0..29 {
            w.date = w.date.add_days(1);
            eng.run_day(&mut w);
        }
        assert_eq!(w.country(&Tag("GER".into())).unwrap().money, 0.0, "ще рано");
        w.date = w.date.add_days(1); // 30-та доба
        let fired = eng.run_day(&mut w);
        let ids: Vec<u64> = fired.iter().map(|f| f.id).collect();
        assert_eq!(ids, vec![700], "30 діб потому");
        assert_eq!(w.country(&Tag("GER".into())).unwrap().money, 3.0);
    }

    #[test]
    fn action_choice_respects_action_trigger() {
        let mut w = two_countries();
        w.date = GameDate::from_ymd(1933, 3, 4);
        let db = db_of(
            r#"
event = {
  id = 800
  country = POL
  action = {
    trigger = { money = 100 }
    name = "RICH"
    command = { type = money value = -50 }
  }
  action = {
    name = "POOR"
    command = { type = money value = 10 }
  }
}
"#,
        );
        let mut eng = EventEngine::new(db, 8);
        w.pending_events.push(800);
        let fired = eng.run_day(&mut w);
        // Грошей нема → недоступна перша опція → береться друга.
        assert_eq!(fired[0].action, 1);
        assert_eq!(w.country(&Tag("POL".into())).unwrap().money, 10.0);
    }

    #[test]
    fn loads_chained_files() {
        let files = vec!["root.txt".to_string()];
        let read = |p: &str| -> Result<Vec<u8>> {
            match p {
                "root.txt" => Ok(b"event = \"sub.txt\"".to_vec()),
                "sub.txt" => Ok(
                    b"event = { id = 900 country = POL action = { command = { type = money value = 1 } } }"
                        .to_vec(),
                ),
                _ => anyhow::bail!("немає файлу {p}"),
            }
        };
        let db = EventDb::load(&files, &read).unwrap();
        assert_eq!(db.files, vec!["root.txt", "sub.txt"]);
        assert!(db.events.contains_key(&900));
    }

    /// Реальні файли подій 1933: тисячі подій парсяться; id з queued_events
    /// сценарію присутні; день 1 запускає чергу сценарію.
    #[test]
    #[ignore = "потребує реальних файлів гри (Steam)"]
    fn loads_real_1933_event_db() -> Result<()> {
        let paths = dh_format::GamePaths::from_steam()?;
        // Читач ЯК У ДВИГУНІ: VFS (регістронезалежні шляхи — мод перелічує
        // `AI_GER.txt`, на диску `ai_ger.txt`; шари мод+база).
        let mut vfs = dh_vfs::Vfs::new(&paths.root);
        vfs.push_root(&paths.mod_dir);
        let read = move |p: &str| -> Result<Vec<u8>> {
            vfs.read(p).with_context(|| format!("{p} (VFS мод/база)"))
        };
        // Список event-файлів 1933 — з самого сценарію, одним парсером
        // (dh-format::script — та сама мова).
        let eug = read("scenarios/1933.eug")?;
        let sc_root = script::parse_bytes(&eug)?;
        let mut files: Vec<String> = Vec::new();
        if let Value::List(entries) = &sc_root {
            for (k, v) in entries {
                if k.eq_ignore_ascii_case("event") {
                    if let Some(t) = as_text(v) {
                        files.push(t);
                    }
                }
            }
        }
        assert!(files.len() > 50, "event-файлів у 1933: {}", files.len());
        let db = EventDb::load(&files, &read)?;
        eprintln!(
            "1933: файлів {}, подій {} (перший: {})",
            db.files.len(),
            db.events.len(),
            db.files.first().map(String::as_str).unwrap_or("?")
        );
        // У 70 файлах 1933 — 566 event-блоків (385 у моді + 176 у 7 AI-файлах
        // + 6 з порожніми command = {}, які раніше впивали; VFS дає
        // регістронезалежні шляхи — у .eug `AI_GER.txt`, на диску `ai_ger.txt`).
        assert_eq!(files.len(), 70, "1933.eug перелічує event-файлів");
        assert_eq!(db.files.len(), 70, "усі файли прочитано (VFS мод/база)");
        assert_eq!(db.events.len(), 566, "подій у файлах 1933");
        // queued_events сценарію мають бути в базі.
        for id in [1330110051u64, 1330110043, 1330120019, 1330110046] {
            assert!(db.events.contains_key(&id), "немає події {id}");
        }
        // День 1 (4 березня): три queued-події з hour 0/24 спрацьовують
        // у перші дві доби — як на скріні оригіналу.
        let mut w = two_countries();
        w.date = GameDate::from_ymd(1933, 3, 4);
        for c in ["CHI", "JAP"] {
            w.add_country(Country::new(Tag(c.into()), c));
        }
        let mut eng = EventEngine::new(Arc::new(db), 42);
        eng.queue(
            1330110043,
            Tag("CHI".into()),
            GameDate::from_ymd(1933, 3, 4),
        );
        eng.queue(
            1330110051,
            Tag("CHI".into()),
            GameDate::from_ymd(1933, 3, 4),
        );
        eng.queue(
            1330110046,
            Tag("JAP".into()),
            GameDate::from_ymd(1933, 3, 4),
        );
        let day1 = eng.run_day(&mut w);
        let ids1: Vec<u64> = day1.iter().map(|f| f.id).collect();
        assert!(
            ids1.contains(&1330110043) && ids1.contains(&1330110046),
            "день 1: {ids1:?}"
        );
        eprintln!("день 1: {ids1:?}");
        Ok(())
    }
}
