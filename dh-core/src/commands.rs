//! Виконавець команд скрипт-мови: токен → `CommandType` → застосування до світу.
//!
//! RE-джерела:
//! - `re/RE-commands.md` — словник 289 команд диспетчера `FUN_004a8c90` (ID 0x17..0x206,
//!   таблиця §2). Формат даних команди (`param_2[1]`): `+0xe` — підтип (int16),
//!   `+0x12` — значення float, `+0x4e` — значення int16, `+0x14` — рядок (§0).
//!   Ланцюг: токени → лексер → стейтменти → парсер події → диспетчер → застосування (§9).
//! - `re/RE-commands-details.md` — об'єкт-ціль = глобальний world (vtable 0x7f04e0);
//!   фактичні обробники = world.vtable: money 0xf6 → 0x47c2c0, attack 0x35 → 0x4835a0 (§2);
//!   12-елементні родини 0x1d1..0x1f4 — сеттери сценарних прапорів world
//!   (масиви байт +0x3bf3/+0x3bff/+0x3bf9, §3); парсер тригерів — окремо (§5).
//! - `re/RE-scripts.md` §4 — токени парсера подій: event 0x1f7, command 0x3f8,
//!   random 0x3fa, ai_chance 0x347, action_a..d 0x3f4..0x3f7, decision 0x57a..0x57d;
//!   §5 — повний реєстр токенів (manpower 0x1b3, relation 0x135, peace 0x1b4,
//!   resources 0x232..0x235, supplies 0x382, wealth 0x237, gain_tech 0x407, ...).
//!
//! Дизайн: парсер `Command::from_token` зіставляє ID токена зі словником; невідомі ID
//! стають `CommandType::Unknown(u16)` з warn-логом (НЕ паніка, як хвіст диспетчера §4 —
//! fallback `return 0`). Виконання — через трейт [`EffectExecutor`]; стан RNG (для
//! `random`) живе у виконавці, бо `fn execute(&mut self, ...)`.

use anyhow::{ensure, Result};
use dh_format::{ProvinceId, Tag};

use crate::country::Country;
use crate::world::World;

/// Об'єкт-ціль команди. В оригіналі диспетчер `FUN_004a8c90` отримує глобальний
/// world (RE-commands-details.md §2); наш виконавець дозволяє спрямовувати команду
/// на конкретну країну/провінцію — як парсер події це робить для отримувача події.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CommandTarget {
    /// Індекс країни в `World::countries` — отримувач ефекту (напр. країна події).
    Country(usize),
    /// Провінція (для провінційних команд: control, secedeprovince, cores...).
    Province(ProvinceId),
    /// Світ загалом (глобальні ефекти: черга подій, AI-налаштування).
    World,
}

/// Вид міждержавного пакту (для `CommandType::Pact`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PactKind {
    /// alliance 0x13c / militaryalliance 0x13f / leave_alliance 0x47f.
    Alliance,
    /// non_aggression 0x14c / end_non_aggression 0x2ad.
    NonAggression,
    /// guarantee 0x2a6 / end_guarantee 0x2a7.
    Guarantee,
    /// embargo 0x14a.
    Embargo,
    /// access 0x2b5 / end_access 0x482 (військовий доступ).
    MilitaryAccess,
    /// puppet 0xe4 / make_puppet 0xe6 / end_puppet 0x480 / end_mastery 0x481.
    Puppet,
}

/// Тип команди: 289 ID диспетчера (RE-commands.md §2) згруповано в ~30 категорій
/// + команди подій з реєстру токенів (RE-scripts.md §5).
#[derive(Debug, Clone, PartialEq)]
pub enum CommandType {
    // ================= Економіка / ресурси =================
    /// `money` 0xf6 (`+0x12` float; обробник world.vtable+0x244 = 0x47c2c0).
    Money(f64),
    /// `manpower` 0x1b3 (токен реєстру; тригер теж, RE-commands-details §5).
    Manpower(f64),
    /// `wealth` 0x237 — DH-аналог престижу HoI2 (слова «prestige» в реєстрі немає,
    /// RE-scripts.md §5 «Ресурси/економіка»). Зберігається в `Country::prestige`.
    Prestige(f64),
    /// `dissent` 0x84.
    Dissent(f64),
    /// `supplies` 0x382 / `supply` 0x489 — запаси на складі (`CountryResources::supplies`).
    Supply(f64),
    /// `oil` 0x235 (діапазон ресурсів 0x232..0x235, RE-commands-details §5).
    Oil(f64),
    /// `metal` 0x234.
    Metal(f64),
    /// `energy` 0x233.
    Energy(f64),
    /// `rare_materials` 0x232.
    Rare(f64),

    // ================= Дипломатія =================
    /// `relation` 0x135: зміна ставлення на дельту (change_relation, кламп −200..200).
    /// `tag` — країна-джерело (порожній тег = ціль виконання), `target` — до кого,
    /// `value` — дельта.
    Relation { tag: Tag, target: Tag, value: i32 },
    /// `set_relation` 0x136: встановлення ставлення в абсолютне значення.
    SetRelation { tag: Tag, target: Tag, value: i32 },
    /// `war` 0x137 (пряма гілка диспетчера, RE-commands.md §3.2). `from` порожній =
    /// ціль виконання оголошує війну `to`; виконується симетрично через
    /// [`World::declare_war`] (як SETUP_WAR).
    War { from: Tag, to: Tag },
    /// `peace` 0x1b4: завершення війни між `from` і `to` (знімає обидві сторони з `at_war`).
    Peace { from: Tag, to: Tag },
    /// Пакти: alliance 0x13c/0x13f, non_aggression 0x14c, guarantee 0x2a6,
    /// embargo 0x14a, access 0x2b5, puppet 0xe4/0xe6 та їх завершення
    /// (0x2a7/0x2ad/0x47f/0x480/0x481/0x482).
    Pact {
        kind: PactKind,
        from: Tag,
        to: Tag,
        end: bool,
    },

    // ================= Технології =================
    /// `gain_tech` 0x407: додати технологію `tech` країні `tag` (`Country::techs`).
    Tech { tag: Tag, tech: u16 },
    /// `invention` 0x18 / `inventions` 0x19: інвенція (тех-аплікація) — теж у `techs`.
    Invention { tag: Tag, tech: u16 },

    // ================= Події / рішення =================
    /// `event` 0x1f7 (диспетчер +0x420): поставити подію `id` у чергу світу
    /// (`World::pending_events`); розгляд черги — TODO (диспетчер подій, RE-scripts §4).
    Event(u32),
    /// `sleepevent` 0x1f8: «спляча» подія (списку сплячих ще немає — TODO).
    SleepEvent(u32),
    /// `random` 0x3fa (RE-scripts.md §4): виконати ОДНУ випадкову гілку.
    Random(Vec<Command>),
    /// `ai_chance` 0x347: шанс вибору опції ШІ (підказка парсеру, не ефект).
    AiChance(f64),
    /// `decision` 0x57a (фіча DH, RE-scripts.md §4): рішення країні.
    Decision(u32),
    /// `action_a`..`action_d` 0x3f4..0x3f7: блок опції події — список команд.
    Action { which: u8, commands: Vec<Command> },

    // ================= Провінції / територія =================
    /// `secedeprovince` 0x48f: передати провінцію країні `to` (власник = контролер).
    SecedeProvince { to: Tag, province: ProvinceId },
    /// `control` 0x10b: встановити контролера провінції (окупація; власник не змінюється).
    Control { by: Tag, province: ProvinceId },
    /// `addcore` 0x2b3 / `removecore` 0x2b4: ядрові провінції (поля в Country немає — TODO).
    Cores { province: ProvinceId, add: bool },

    // ================= Прапори =================
    /// `flag` 0x3d6 / `setflag` 0x3d7 / `clrflag` 0x3d8 / `local_flag` 0x3d9 /
    /// `local_setflag` 0x3da / `local_clrflag` 0x3db (RE-scripts.md §5, «Загальні»):
    /// сценарні прапори (сховища прапорів у Country немає — TODO).
    Flags {
        flag: String,
        set: bool,
        local: bool,
    },

    // ================= AI / сценарій =================
    /// 12-елементні родини сценарних прапорів world: 0x1d1..0x1f4 (36 ID) —
    /// сеттери трьох 6-байтових масивів world+0x3bf3/+0x3bff/+0x3bf9
    /// (RE-commands-details.md §3; пара 0xaa multi_role/0xab interceptor — туди ж, §3).
    ScenarioFlag { family: u8, index: u8, value: u8 },
    /// `ai` 0x1f9 / `generic` 0x203: завантаження AI-файлу «ai/%s» (RE-commands.md §3.4;
    /// в ядрі завантаження не реалізовано — TODO).
    AiFile { path: String, generic: bool },
    /// AI-параметри, накази та характеристики (attack 0x35, rebase 0x36, target 0x6d,
    /// strength 0xbc, ic 0xe2, ...): розпізнані, стану в ядрі не змінюють.
    AiParam(u16),

    // ================= Службові =================
    /// Поля структур сценаріїв/UI (desc 0x198, picture 0x199, sprite 0x1a6, x 0x1ab, ...):
    /// дані парсера, ефекту немає.
    StructField(u16),
    /// Умови-предикати (is_tech_active 0x1a, exists 0x1af, atwar 0x138, distance 0x190,...):
    /// живуть у парсері тригерів (RE-commands-details §5), як команда не діють.
    Predicate(u16),
    /// ID поза словником — з warn-логом (аналог хвоста диспетчера, RE-commands.md §4).
    Unknown(u16),
}

impl CommandType {
    /// Додати дочірні команди (для блокових типів `Random`/`Action`); для решти — no-op.
    pub fn with_children(self, children: Vec<Command>) -> Self {
        match self {
            CommandType::Random(_) => CommandType::Random(children),
            CommandType::Action { which, .. } => CommandType::Action {
                which,
                commands: children,
            },
            other => other,
        }
    }
}

/// Команда скрипта: тип + джерело (файл/подія) для діагностики в логах.
#[derive(Debug, Clone, PartialEq)]
pub struct Command {
    pub ctype: CommandType,
    /// Звідки команда (напр. "db/events/1936.txt:120") — заповнює парсер сценаріїв.
    pub source: Option<String>,
}

impl Command {
    pub fn new(ctype: CommandType) -> Self {
        Self {
            ctype,
            source: None,
        }
    }

    pub fn with_source(mut self, source: impl Into<String>) -> Self {
        self.source = Some(source.into());
        self
    }

    /// Блок `random = { ... }` (0x3fa).
    pub fn random(children: Vec<Command>) -> Self {
        Self::new(CommandType::Random(children))
    }

    /// Блок опції `action_a..d` (0x3f4..0x3f7).
    pub fn action(which: u8, commands: Vec<Command>) -> Self {
        Self::new(CommandType::Action { which, commands })
    }

    /// Додати дочірню команду (для `Random`/`Action`); false — тип не блоковий.
    pub fn push_child(&mut self, child: Command) -> bool {
        match &mut self.ctype {
            CommandType::Random(v) | CommandType::Action { commands: v, .. } => {
                v.push(child);
                true
            }
            _ => false,
        }
    }

    /// Парсер команди з токена.
    ///
    /// Відповідно до формату даних команди (RE-commands.md §0: `+0x12` float,
    /// `+0x4e` int16, `+0x14` рядок) `args` = [float, int16], `str_args` = рядки
    /// (теги, імена). Блокові токени (`random` 0x3fa, `action_a..d` 0x3f4..0x3f7)
    /// повертаються з порожнім списком дітей — їх наповнює парсер через [`Command::push_child`].
    ///
    /// Невідомі ID → `CommandType::Unknown(id)` з warn-логом (ніколи не паніка);
    /// `Err` — лише якщо команді не вистачає обов'язкових аргументів.
    pub fn from_token(id: u16, args: &[f64], str_args: &[String]) -> Result<Self> {
        let val = |i: usize| args.get(i).copied().unwrap_or(0.0);
        // Тег-аргумент; порожній тег = «хто виконує» (розв'язується на етапі виконання).
        let tag = |i: usize| {
            str_args
                .get(i)
                .map(|s| Tag(s.clone()))
                .unwrap_or_else(|| Tag(String::new()))
        };
        // Обов'язковий тег-аргумент.
        let need_tag = |i: usize, what: &str| -> Result<Tag> {
            let t = tag(i);
            ensure!(!t.0.is_empty(), "{what}: потрібен тег у str_args[{i}]");
            Ok(t)
        };

        let ctype = match id {
            // ---- Економіка / ресурси ----
            0xf6 => CommandType::Money(val(0)),
            0x1b3 => CommandType::Manpower(val(0)),
            0x237 => CommandType::Prestige(val(0)),
            0x84 => CommandType::Dissent(val(0)),
            0x382 | 0x489 => CommandType::Supply(val(0)),
            0x235 => CommandType::Oil(val(0)),
            0x234 => CommandType::Metal(val(0)),
            0x233 => CommandType::Energy(val(0)),
            0x232 => CommandType::Rare(val(0)),

            // ---- Дипломатія ----
            // relation: str_args = [target, джерело?], значення — дельта.
            0x135 => CommandType::Relation {
                tag: tag(1),
                target: need_tag(0, "relation")?,
                value: val(0) as i32,
            },
            0x136 => CommandType::SetRelation {
                tag: tag(1),
                target: need_tag(0, "set_relation")?,
                value: val(0) as i32,
            },
            // war/peace: str_args = [to, from?]; from порожній → ціль виконання.
            0x137 => CommandType::War {
                from: tag(1),
                to: need_tag(0, "war")?,
            },
            0x1b4 => CommandType::Peace {
                from: tag(1),
                to: need_tag(0, "peace")?,
            },
            // Пакти: 0x13c alliance, 0x13f militaryalliance, 0x14c non_aggression,
            // 0x2a6 guarantee, 0x14a embargo, 0x2b5 access, 0xe4 puppet, 0xe6 make_puppet;
            // завершення: 0x2a7 end_guarantee, 0x2ad end_non_aggression,
            // 0x47f leave_alliance, 0x480 end_puppet, 0x481 end_mastery, 0x482 end_access.
            0x13c | 0x13f | 0x14c | 0x2a6 | 0x14a | 0x2b5 | 0xe4 | 0xe6 | 0x2a7 | 0x2ad | 0x47f
            | 0x480 | 0x481 | 0x482 => CommandType::Pact {
                kind: match id {
                    0x13c | 0x13f => PactKind::Alliance,
                    0x14c => PactKind::NonAggression,
                    0x2a6 => PactKind::Guarantee,
                    0x14a => PactKind::Embargo,
                    0x2b5 => PactKind::MilitaryAccess,
                    _ => PactKind::Puppet,
                },
                from: tag(0),
                to: tag(1),
                end: matches!(id, 0x2a7 | 0x2ad | 0x47f | 0x480 | 0x481 | 0x482),
            },

            // ---- Технології ----
            0x407 => CommandType::Tech {
                tag: tag(0),
                tech: val(0) as u16,
            },
            0x18 | 0x19 => CommandType::Invention {
                tag: tag(0),
                tech: val(0) as u16,
            },

            // ---- Події / рішення ----
            0x1f7 => CommandType::Event(val(0) as u32),
            0x1f8 => CommandType::SleepEvent(val(0) as u32),
            // random: діти додаються парсером через push_child (RE-scripts.md §4).
            0x3fa => CommandType::Random(Vec::new()),
            0x347 => CommandType::AiChance(val(0)),
            // decision приймає id у першому числовому аргументі.
            0x57a => CommandType::Decision(val(0) as u32),
            0x3f4..=0x3f7 => CommandType::Action {
                which: (id - 0x3f4) as u8,
                commands: Vec::new(),
            },

            // ---- Провінції / територія ----
            // secedeprovince: str_args[0] = країна-отримувач, args[0] = провінція.
            0x48f => CommandType::SecedeProvince {
                to: need_tag(0, "secedeprovince")?,
                province: val(0) as ProvinceId,
            },
            // control: str_args[0] = країна-контролер, args[0] = провінція.
            0x10b => CommandType::Control {
                by: need_tag(0, "control")?,
                province: val(0) as ProvinceId,
            },
            0x2b3 => CommandType::Cores {
                province: val(0) as ProvinceId,
                add: true,
            },
            0x2b4 => CommandType::Cores {
                province: val(0) as ProvinceId,
                add: false,
            },

            // ---- Прапори (0x3d6 flag, 0x3d7 setflag, 0x3d8 clrflag, 0x3d9 local_flag,
            //      0x3da local_setflag, 0x3db local_clrflag) ----
            0x3d6 | 0x3d7 | 0x3d8 | 0x3d9 | 0x3da | 0x3db => CommandType::Flags {
                flag: str_args.first().cloned().unwrap_or_default(),
                set: !matches!(id, 0x3d8 | 0x3db),
                local: matches!(id, 0x3d9 | 0x3da | 0x3db),
            },

            // ---- Сценарні прапори (36 ID 0x1d1..0x1f4, RE-commands-details.md §3):
            //      три родини по 6 індексів із прапорцем увімкнення/вимкнення.
            0x1d1..=0x1d6 => CommandType::ScenarioFlag {
                family: 0,
                index: (id - 0x1d1) as u8,
                value: 1,
            },
            0x1e3..=0x1e8 => CommandType::ScenarioFlag {
                family: 0,
                index: (id - 0x1e3) as u8,
                value: 0,
            },
            0x1d7..=0x1dc => CommandType::ScenarioFlag {
                family: 1,
                index: (id - 0x1d7) as u8,
                value: 1,
            },
            0x1e9..=0x1ee => CommandType::ScenarioFlag {
                family: 1,
                index: (id - 0x1e9) as u8,
                value: 0,
            },
            0x1dd..=0x1e2 => CommandType::ScenarioFlag {
                family: 2,
                index: (id - 0x1dd) as u8,
                value: 1,
            },
            0x1ef..=0x1f4 => CommandType::ScenarioFlag {
                family: 2,
                index: (id - 0x1ef) as u8,
                value: 0,
            },

            // ---- AI-файли ----
            0x1f9 => CommandType::AiFile {
                path: str_args.first().cloned().unwrap_or_default(),
                generic: false,
            },
            0x203 => CommandType::AiFile {
                path: str_args.first().cloned().unwrap_or_default(),
                generic: true,
            },

            // ---- AI-параметри, накази, характеристики юнітів, погода/місцевість,
            //      списки провінцій: розпізнано, ефекту в ядрі немає.
            0x17
            | 0x1b
            | 0x35
            | 0x36
            | 0x3a
            | 0x3b
            | 0x41
            | 0x4d
            | 0x55
            | 0x56
            | 0x58
            | 0x62
            | 0x63
            | 0x66
            | 0x67
            | 0x68
            | 0x69
            | 0x6b
            | 0x6c
            | 0x6d
            | 0x70
            | 0x71
            | 0x72..=0x79
            | 0x7c..=0x82
            | 0x87
            | 0x89
            | 0x8c
            | 0x8d
            | 0x8e
            | 0x91
            | 0x9b
            | 0xa0
            | 0xa1
            | 0xa7
            | 0xa8
            | 0xaa
            | 0xab
            | 0xb7..=0xb9
            | 0xbb..=0xc0
            | 0xd1..=0xe3
            | 0xe7
            | 0x103..=0x107
            | 0x10a
            | 0x10e
            | 0x116
            | 0x11b..=0x11e
            | 0x125..=0x129
            | 0x12d
            | 0x138
            | 0x13d
            | 0x140
            | 0x141
            | 0x147
            | 0x148
            | 0x149
            | 0x14b
            | 0x14d..=0x150
            | 0x152..=0x159
            | 0x15c..=0x161
            | 0x162..=0x168
            | 0x169..=0x176
            | 0x17b..=0x17d
            | 0x180..=0x18d
            | 0x18e
            | 0x18f
            | 0x192..=0x197
            | 0x19a
            | 0x19b
            | 0x1a2..=0x1a5
            | 0x1ad
            | 0x1b0..=0x1b2
            | 0x1b9..=0x1bd
            | 0x1c8
            | 0x1c9
            | 0x1cf
            | 0x1d0
            | 0x1f5
            | 0x1f6
            | 0x1fa..=0x1ff
            | 0x204..=0x206 => CommandType::AiParam(id),

            // ---- Предикати (умови тригерів, RE-commands-details.md §5) ----
            0x1a | 0x6a | 0xe5 | 0x13b | 0x15a | 0x15b | 0x17e | 0x17f | 0x190 | 0x1a0 | 0x1a1
            | 0x1ae | 0x1af | 0x1c7 | 0x1ca | 0x200 | 0x202 => CommandType::Predicate(id),

            // ---- Поля структур/UI (дані парсера) ----
            0x198
            | 0x199
            | 0x19c..=0x19f
            | 0x1a6..=0x1ac
            | 0x1be
            | 0x1bf
            | 0x1c2..=0x1c6
            | 0x1cb..=0x1ce => CommandType::StructField(id),

            other => {
                log::warn!(
                    "[commands] невідомий ID токена 0x{other:02x} — CommandType::Unknown \
                     (аналог fallback хвоста диспетчера, RE-commands.md §4)"
                );
                CommandType::Unknown(other)
            }
        };

        Ok(Self {
            ctype,
            source: None,
        })
    }
}

/// Простий детермінований PRNG (xorshift64*, Vigna) — замість rand crate
/// (оригінал теж використовує власний RNG, rand crate не потрібен).
#[derive(Debug, Clone)]
pub struct GameRng {
    state: u64,
}

impl GameRng {
    pub fn new() -> Self {
        Self::with_seed(0x853c49e674fea9b9)
    }

    pub fn with_seed(seed: u64) -> Self {
        Self { state: seed }
    }

    pub fn next_u64(&mut self) -> u64 {
        let mut x = self.state;
        x ^= x >> 12;
        x ^= x << 25;
        x ^= x >> 27;
        self.state = x;
        x.wrapping_mul(0x2545f4914f6cdd1d)
    }

    /// Рівномірне [0, 1).
    pub fn next_f64(&mut self) -> f64 {
        (self.next_u64() >> 11) as f64 / (1u64 << 53) as f64
    }

    /// Рівномірне [0, n) — для вибору гілки random.
    pub fn next_below(&mut self, n: u64) -> u64 {
        self.next_u64() % n
    }

    /// Істина з імовірністю `p` (0..=1).
    pub fn chance(&mut self, p: f64) -> bool {
        self.next_f64() < p
    }
}

impl Default for GameRng {
    fn default() -> Self {
        Self::new()
    }
}

/// Виконавець ефектів команд.
///
/// `&mut self` дозволяє тримати стан (RNG для `random`) у виконавці — а не у світі,
/// як стан RNG окремо від world в оригіналі.
pub trait EffectExecutor {
    /// Застосувати команду до світу.
    ///
    /// Ніколи не панікує на невідомих ID/тегах — warn і пропуск (аналог fallback
    /// хвоста диспетчера `FUN_004a8c90`, RE-commands.md §4: `return 0`).
    fn execute(&mut self, world: &mut World, target: &CommandTarget, cmd: &Command) -> Result<()>;

    /// Виконати список команд поспіль (для блоків `action_*` та `random`).
    fn execute_all(
        &mut self,
        world: &mut World,
        target: &CommandTarget,
        cmds: &[Command],
    ) -> Result<()> {
        for c in cmds {
            self.execute(world, target, c)?;
        }
        Ok(())
    }
}

/// Стандартний виконавець: ефекти + власний RNG для random-гілок.
#[derive(Debug, Clone)]
pub struct CommandExecutor {
    pub rng: GameRng,
}

impl CommandExecutor {
    pub fn new() -> Self {
        Self {
            rng: GameRng::new(),
        }
    }

    /// Виконавець із детермінованим сидом (для тестів і відтворюваних партій).
    pub fn with_seed(seed: u64) -> Self {
        Self {
            rng: GameRng::with_seed(seed),
        }
    }

    pub fn seed_rng(&mut self, seed: u64) {
        self.rng = GameRng::with_seed(seed);
    }
}

impl Default for CommandExecutor {
    fn default() -> Self {
        Self::new()
    }
}

/// Розв'язати індекс країни: тег із `World::tags`, або (порожній тег) — ціль виконання.
fn resolve_country(world: &World, tag: &Tag, target: &CommandTarget) -> Option<usize> {
    if !tag.0.is_empty() {
        world.tags.get(tag).copied()
    } else {
        match target {
            CommandTarget::Country(i) => Some(*i),
            _ => None,
        }
    }
}

/// Індекс провінції в `World::provinces` за id.
fn province_index(world: &World, pid: ProvinceId) -> Option<usize> {
    world.provinces.iter().position(|p| p.id == pid)
}

/// Країна-отримувач ефекту: `CommandTarget::Country` дає mutable-посилання.
fn country_for<'w>(world: &'w mut World, target: &CommandTarget) -> Option<&'w mut Country> {
    match target {
        CommandTarget::Country(i) => world.countries.get_mut(*i),
        _ => None,
    }
}

impl EffectExecutor for CommandExecutor {
    fn execute(&mut self, world: &mut World, target: &CommandTarget, cmd: &Command) -> Result<()> {
        let src = cmd.source.as_deref().unwrap_or("?");
        match &cmd.ctype {
            // ================= Економіка / ресурси =================
            CommandType::Money(v) => {
                if let Some(c) = country_for(world, target) {
                    c.add_money(*v);
                    log::debug!("[commands:{src}] money: {} += {v}", c.tag.as_str());
                } else {
                    log::warn!("[commands:{src}] money: ціль не країна ({target:?}) — пропуск");
                }
            }
            CommandType::Manpower(v) => {
                if let Some(c) = country_for(world, target) {
                    c.manpower += *v;
                    log::debug!("[commands:{src}] manpower: {} += {v}", c.tag.as_str());
                } else {
                    log::warn!("[commands:{src}] manpower: ціль не країна ({target:?}) — пропуск");
                }
            }
            CommandType::Prestige(v) => {
                if let Some(c) = country_for(world, target) {
                    c.prestige += *v;
                    log::debug!(
                        "[commands:{src}] prestige/wealth: {} += {v}",
                        c.tag.as_str()
                    );
                } else {
                    log::warn!("[commands:{src}] prestige: ціль не країна ({target:?}) — пропуск");
                }
            }
            CommandType::Dissent(v) => {
                log::debug!("[commands:{src}] dissent: {v} — поля немає (TODO)");
            }
            CommandType::Supply(v) => {
                if let Some(c) = country_for(world, target) {
                    c.resources.supplies += *v;
                    log::debug!("[commands:{src}] supplies: {} += {v}", c.tag.as_str());
                } else {
                    log::warn!("[commands:{src}] supplies: ціль не країна ({target:?}) — пропуск");
                }
            }
            CommandType::Oil(v) => {
                if let Some(c) = country_for(world, target) {
                    c.resources.oil += *v;
                } else {
                    log::warn!("[commands:{src}] oil: ціль не країна ({target:?}) — пропуск");
                }
            }
            CommandType::Metal(v) => {
                if let Some(c) = country_for(world, target) {
                    c.resources.metal += *v;
                } else {
                    log::warn!("[commands:{src}] metal: ціль не країна ({target:?}) — пропуск");
                }
            }
            CommandType::Energy(v) => {
                if let Some(c) = country_for(world, target) {
                    c.resources.energy += *v;
                } else {
                    log::warn!("[commands:{src}] energy: ціль не країна ({target:?}) — пропуск");
                }
            }
            CommandType::Rare(v) => {
                if let Some(c) = country_for(world, target) {
                    c.resources.rare += *v;
                } else {
                    log::warn!(
                        "[commands:{src}] rare_materials: ціль не країна ({target:?}) — пропуск"
                    );
                }
            }

            // ================= Дипломатія =================
            CommandType::Relation {
                tag,
                target: to,
                value,
            } => {
                let Some(i) = resolve_country(world, tag, target) else {
                    log::warn!("[commands:{src}] relation: невідома країна-джерело ({tag:?})");
                    return Ok(());
                };
                if !world.tags.contains_key(to) {
                    log::warn!("[commands:{src}] relation: невідомий тег-ціль {to:?}");
                    return Ok(());
                }
                let rel = world.countries[i].change_relation(to, *value);
                log::debug!(
                    "[commands:{src}] relation: {} → {} = {rel}",
                    world.countries[i].tag.as_str(),
                    to.as_str()
                );
            }
            CommandType::SetRelation {
                tag,
                target: to,
                value,
            } => {
                let Some(i) = resolve_country(world, tag, target) else {
                    log::warn!("[commands:{src}] set_relation: невідома країна-джерело ({tag:?})");
                    return Ok(());
                };
                if !world.tags.contains_key(to) {
                    log::warn!("[commands:{src}] set_relation: невідомий тег-ціль {to:?}");
                    return Ok(());
                }
                let tag_name = world.countries[i].tag.as_str().to_string();
                let rel = world.countries[i].relations.entry(to.clone()).or_insert(0);
                *rel = (*value).clamp(-200, 200);
                log::debug!(
                    "[commands:{src}] set_relation: {tag_name} → {} = {}",
                    to.as_str(),
                    *rel
                );
            }
            // war: у RE-словнику 0x137 — інкремент float-масиву world за підтипом
            // (RE-commands.md §3.2); як команда події — оголошення війни (SETUP_WAR).
            CommandType::War { from, to } => {
                let from_tag = if from.0.is_empty() {
                    match target {
                        CommandTarget::Country(i) => world.countries.get(*i).map(|c| c.tag.clone()),
                        _ => None,
                    }
                } else {
                    Some(from.clone())
                };
                let Some(from_tag) = from_tag else {
                    log::warn!("[commands:{src}] war: немає країни-джерела (target={target:?})");
                    return Ok(());
                };
                if world.declare_war(&from_tag, to) {
                    log::debug!(
                        "[commands:{src}] war: {} ↔ {}",
                        from_tag.as_str(),
                        to.as_str()
                    );
                } else {
                    log::warn!(
                        "[commands:{src}] war: {} ↔ {} — невідомий тег або війна вже йде",
                        from_tag.as_str(),
                        to.as_str()
                    );
                }
            }
            CommandType::Peace { from, to } => {
                let from_owned;
                let from_tag = if from.0.is_empty() {
                    // Джерело не задане — беремо ціль виконання.
                    match target {
                        CommandTarget::Country(i) => {
                            let Some(c) = world.countries.get(*i) else {
                                log::warn!("[commands:{src}] peace: індекс країни поза межами");
                                return Ok(());
                            };
                            from_owned = c.tag.clone();
                            &from_owned
                        }
                        _ => {
                            log::warn!(
                                "[commands:{src}] peace: немає країни-джерела (target={target:?})"
                            );
                            return Ok(());
                        }
                    }
                } else {
                    from
                };
                let (Some(&ia), Some(&ib)) = (world.tags.get(from_tag), world.tags.get(to)) else {
                    log::warn!(
                        "[commands:{src}] peace: невідомі теги ({} ↔ {})",
                        from_tag.as_str(),
                        to.as_str()
                    );
                    return Ok(());
                };
                if ia == ib {
                    return Ok(());
                }
                // Мир симетричний: `ia` прибирає `to` зі свого at_war, `ib` — `from_tag`.
                world.countries[ia].at_war.remove(to);
                world.countries[ib].at_war.remove(from_tag);
                log::debug!(
                    "[commands:{src}] peace: війну завершено ({} ↔ {})",
                    world.countries[ia].tag.as_str(),
                    to.as_str()
                );
            }
            CommandType::Pact {
                kind,
                from,
                to,
                end,
            } => {
                match kind {
                    PactKind::Alliance => {
                        let from_idx = resolve_country(world, from, target);
                        let to_idx = if to.0.is_empty() {
                            resolve_country(world, from, target)
                        } else {
                            world.tags.get(to).copied()
                        };
                        let (Some(a), Some(b)) = (from_idx, to_idx) else {
                            log::warn!("[commands:{src}] alliance: невідомі теги");
                            return Ok(());
                        };
                        if *end {
                            // leave_alliance 0x47f: вивести з усіх альянсів.
                            for al in &mut world.alliances {
                                al.leave(a);
                            }
                            log::debug!(
                                "[commands:{src}] leave_alliance: {} вийшов з альянсів",
                                world.countries[a].tag.as_str()
                            );
                        } else {
                            let joined = world
                                .alliances
                                .iter_mut()
                                .find(|al| al.members.contains(&a))
                                .map(|al| al.join(b))
                                .unwrap_or(false);
                            if !joined {
                                world.create_alliance(
                                    format!(
                                        "{}-{}",
                                        world.countries[a].tag.as_str(),
                                        world.countries[b].tag.as_str()
                                    ),
                                    vec![a, b],
                                );
                            }
                            log::debug!(
                                "[commands:{src}] alliance: {} + {}",
                                world.countries[a].tag.as_str(),
                                world.countries[b].tag.as_str()
                            );
                        }
                    }
                    PactKind::NonAggression
                    | PactKind::Guarantee
                    | PactKind::Embargo
                    | PactKind::MilitaryAccess
                    | PactKind::Puppet => {
                        // TODO(RE): стани пактів у Country немає (фаза 6, RE-misc-details §C).
                        log::debug!(
                            "[commands:{src}] pact {kind:?} (end={end}): стан пакту не реалізовано (TODO)"
                        );
                    }
                }
            }

            // ================= Технології =================
            CommandType::Tech { tag, tech } | CommandType::Invention { tag, tech } => {
                let Some(i) = resolve_country(world, tag, target) else {
                    log::warn!("[commands:{src}] tech: невідома країна-ціль ({tag:?})");
                    return Ok(());
                };
                if !world.countries[i].techs.contains(tech) {
                    world.countries[i].techs.push(*tech);
                    log::debug!(
                        "[commands:{src}] tech: {} додано {tech}",
                        world.countries[i].tag.as_str()
                    );
                } else {
                    log::debug!(
                        "[commands:{src}] tech: {} уже має {tech}",
                        world.countries[i].tag.as_str()
                    );
                }
            }

            // ================= Події / рішення =================
            CommandType::Event(id) => {
                // TODO(RE): повний цикл подій (диспетчер 0x4bb6b0); поки — черга.
                world.pending_events.push(*id);
                log::debug!("[commands:{src}] event: {id} → у чергу світу");
            }
            CommandType::SleepEvent(id) => {
                // TODO(RE): «сплячі» події (0x1f8 sleepevent).
                log::debug!("[commands:{src}] sleepevent {id}: списку сплячих немає (TODO)");
            }
            CommandType::Random(branches) => {
                if branches.is_empty() {
                    log::warn!("[commands:{src}] random: порожній блок");
                    return Ok(());
                }
                let idx = self.rng.next_below(branches.len() as u64) as usize;
                log::debug!("[commands:{src}] random: гілка {idx}/{}", branches.len());
                // Виконуємо рівно одну гілку (як random = { ... } у подіях).
                self.execute(world, target, &branches[idx])?;
            }
            CommandType::AiChance(p) => {
                log::debug!("[commands:{src}] ai_chance: {p} (підказка AI, не ефект)");
            }
            CommandType::Decision(_id) => {
                // TODO(RE): система рішень DH (0x57a..0x57d, RE-scripts.md §4).
                log::debug!("[commands:{src}] decision: система рішень не реалізована (TODO)");
            }
            CommandType::Action { which, commands } => {
                log::debug!(
                    "[commands:{src}] action_{}: {} команд",
                    (b'a' + which) as char,
                    commands.len()
                );
                self.execute_all(world, target, commands)?;
            }

            // ================= Провінції / територія =================
            CommandType::SecedeProvince { to, province } => {
                let (Some(&to_idx), Some(pi)) =
                    (world.tags.get(to), province_index(world, *province))
                else {
                    log::warn!(
                        "[commands:{src}] secedeprovince: невідомий тег {} або провінція {}",
                        to.as_str(),
                        province
                    );
                    return Ok(());
                };
                // Власник і контролер переходять до `to` (як секція у мирному договорі).
                world.provinces[pi].owner = Some(to_idx);
                world.provinces[pi].controller = Some(to_idx);
                world.provinces[pi].occupied = false;
                log::debug!(
                    "[commands:{src}] secedeprovince: {} → {}",
                    province,
                    to.as_str()
                );
            }
            CommandType::Control { by, province } => {
                let (Some(&by_idx), Some(pi)) =
                    (world.tags.get(by), province_index(world, *province))
                else {
                    log::warn!(
                        "[commands:{src}] control: невідомий тег {} або провінція {}",
                        by.as_str(),
                        province
                    );
                    return Ok(());
                };
                world.provinces[pi].controller = Some(by_idx);
                world.provinces[pi].occupied = true;
                log::debug!(
                    "[commands:{src}] control: {} під контролем {}",
                    province,
                    by.as_str()
                );
            }
            CommandType::Cores { province, add } => {
                // TODO(RE): поле core-провінцій у Country (0x2b3 addcore/0x2b4 removecore).
                log::debug!(
                    "[commands:{src}] {}core {province}: поля ядер немає (TODO)",
                    if *add { "add" } else { "remove" }
                );
            }

            // ================= Прапори =================
            CommandType::Flags { flag, set, local } => {
                // TODO(RE): сховища прапорів (0x3d6..0x3db); для подій — country/local_flag.
                log::debug!(
                    "[commands:{src}] {}flag \"{flag}\" (local={local}): сховища прапорів немає (TODO)",
                    if *set { "set" } else { "clr" }
                );
            }

            // ================= AI / сценарій =================
            CommandType::ScenarioFlag {
                family,
                index,
                value,
            } => {
                // В ориг. — byte[world+0x3bf3/+0x3bff/+0x3bf9+idx] = value
                // (RE-commands-details.md §3); у нас прапорів світу немає (TODO).
                log::debug!(
                    "[commands:{src}] scenario_flag: family={family} index={index} = {value} (TODO)"
                );
            }
            CommandType::AiFile { path, generic } => {
                // TODO(RE): завантажувач «ai/%s» (RE-commands.md §3.4, 0x203 generic).
                log::debug!(
                    "[commands:{src}] ai-file ({generic}): {path} — завантаження не реалізовано (TODO)"
                );
            }
            CommandType::AiParam(id) => {
                // Параметр AI/наказ: розпізнаний токен, стану в ядрі не змінює
                // (обробники world.vtable, RE-commands-details.md §2).
                log::debug!("[commands:{src}] ai-параметр 0x{id:02x}: без ефекту в ядрі");
            }

            // ================= Службові =================
            CommandType::StructField(id) => {
                log::debug!("[commands:{src}] поле структури 0x{id:02x}: не ефект");
            }
            CommandType::Predicate(id) => {
                log::debug!("[commands:{src}] предикат 0x{id:02x}: не команда-ефект");
            }
            CommandType::Unknown(id) => {
                // Fallback хвоста диспетчера (RE-commands.md §4): return 0, без паніки.
                log::warn!("[commands:{src}] невідома команда 0x{id:02x} — пропущена");
            }
        }
        Ok(())
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::country::Country;
    use crate::world::ProvinceState;
    use dh_format::ProvinceResources;

    fn tag(s: &str) -> Tag {
        Tag(s.to_string())
    }

    fn two_country_world() -> World {
        let mut w = World::new();
        w.add_country(Country::new(tag("GER"), "Німеччина"));
        w.add_country(Country::new(tag("SOV"), "СРСР"));
        w
    }

    /// Світ із провінцією 42 (власник — GER).
    fn world_with_province() -> World {
        let mut w = two_country_world();
        w.provinces.push(ProvinceState {
            id: 42,
            owner: Some(0),
            controller: Some(0),
            has_vp: false,
            vp: 0,
            infra: 0,
            resources: ProvinceResources::default(),
            occupied: false,
        });
        w
    }

    #[test]
    fn money_adds_to_country_balance() {
        let mut w = two_country_world();
        let mut ex = CommandExecutor::new();
        // money 0xf6, значення 100.5.
        let cmd = Command::from_token(0xf6, &[100.5], &[]).unwrap();
        ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
            .unwrap();
        assert!((w.countries[0].money - 100.5).abs() < 1e-9);
        assert_eq!(w.countries[1].money, 0.0);

        // Від'ємний аргумент — витрата.
        let cmd = Command::from_token(0xf6, &[-10.0], &[]).unwrap();
        ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
            .unwrap();
        assert!((w.countries[0].money - 90.5).abs() < 1e-9);
    }

    #[test]
    fn war_calls_declare_war_via_world() {
        let mut w = two_country_world();
        let mut ex = CommandExecutor::new();
        // war 0x137: тег доповнюється з цілі виконання (Германія).
        let cmd = Command::from_token(0x137, &[], &[String::from("SOV")]).unwrap();
        assert!(matches!(cmd.ctype, CommandType::War { .. }));
        ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
            .unwrap();
        assert!(w.countries[0].at_war.contains(&tag("SOV")));
        assert!(w.countries[1].at_war.contains(&tag("GER")));
        // Відносини обидвім сторонам — −200 (як у SETUP_WAR).
        assert_eq!(w.countries[0].relations.get(&tag("SOV")), Some(&-200));
        assert_eq!(w.countries[1].relations.get(&tag("GER")), Some(&-200));
    }

    #[test]
    fn war_without_target_errors_at_parse() {
        assert!(Command::from_token(0x137, &[], &[]).is_err());
    }

    #[test]
    fn peace_ends_war_both_sides() {
        let mut w = two_country_world();
        w.declare_war(&tag("GER"), &tag("SOV"));
        assert!(!w.countries[0].at_war.is_empty());

        let mut ex = CommandExecutor::new();
        let cmd = Command::from_token(0x1b4, &[], &[String::from("SOV")]).unwrap();
        ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
            .unwrap();
        assert!(w.countries[0].at_war.is_empty());
        assert!(w.countries[1].at_war.is_empty());
    }

    #[test]
    fn random_picks_one_branch_without_panic() {
        // Дві гілки: +1 або +2; виконується рівно одна; жодної паніки.
        let mut ex = CommandExecutor::with_seed(42);
        let cmd = Command::random(vec![
            Command::new(CommandType::Money(1.0)),
            Command::new(CommandType::Money(2.0)),
        ]);
        let mut seen = std::collections::HashSet::new();
        for _ in 0..24 {
            let mut w = two_country_world();
            ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
                .unwrap();
            let delta = w.countries[0].money;
            assert!(delta == 1.0 || delta == 2.0, "delta={delta}");
            seen.insert(delta as i64);
        }
        // За 24 запуски з детермінованим RNG мали побачити обидві гілки.
        assert!(seen.contains(&1) && seen.contains(&2), "гілки: {seen:?}");
    }

    #[test]
    fn relation_changes_opinion() {
        let mut w = two_country_world();
        let mut ex = CommandExecutor::new();
        // relation 0x135: значення — дельта до ставлення GER→SOV.
        let cmd = Command::from_token(0x135, &[25.0], &[String::from("SOV")]).unwrap();
        ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
            .unwrap();
        assert_eq!(w.countries[0].relations.get(&tag("SOV")), Some(&25));

        // Кламп −200..200 (як change_relation).
        let cmd = Command::from_token(0x135, &[1000.0], &[String::from("SOV")]).unwrap();
        ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
            .unwrap();
        assert_eq!(w.countries[0].relations.get(&tag("SOV")), Some(&200));
    }

    #[test]
    fn ressources_and_tech_apply() {
        let mut w = two_country_world();
        let mut ex = CommandExecutor::new();
        // supplies 0x382, oil 0x235, metal 0x234, energy 0x233, rare 0x232.
        for (id, field) in [
            (0x382, "supplies"),
            (0x235, "oil"),
            (0x234, "metal"),
            (0x233, "energy"),
            (0x232, "rare"),
        ] {
            let cmd = Command::from_token(id, &[10.0], &[]).unwrap();
            ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
                .unwrap();
            let c = &w.countries[0];
            let v = match field {
                "supplies" => c.resources.supplies,
                "oil" => c.resources.oil,
                "metal" => c.resources.metal,
                "energy" => c.resources.energy,
                _ => c.resources.rare,
            };
            assert!((v - 10.0).abs() < 1e-9, "{field}: {v}");
        }

        // gain_tech 0x407.
        let cmd = Command::from_token(0x407, &[123.0], &[]).unwrap();
        ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
            .unwrap();
        assert_eq!(w.countries[0].techs, vec![123]);
    }

    #[test]
    fn event_goes_to_pending_queue() {
        let mut w = two_country_world();
        let mut ex = CommandExecutor::new();
        let cmd = Command::from_token(0x1f7, &[1337.0], &[]).unwrap();
        ex.execute(&mut w, &CommandTarget::World, &cmd).unwrap();
        assert_eq!(w.pending_events, vec![1337]);
    }

    #[test]
    fn control_and_secede_change_province() {
        let mut w = world_with_province();
        let mut ex = CommandExecutor::new();

        // control 0x10b: SOV контролює провінцію 42 (власник лишається GER).
        let cmd = Command::from_token(0x10b, &[42.0], &[String::from("SOV")]).unwrap();
        ex.execute(&mut w, &CommandTarget::World, &cmd).unwrap();
        assert_eq!(w.provinces[0].owner, Some(0));
        assert_eq!(w.provinces[0].controller, Some(1));

        // secedeprovince 0x48f: власність переходить SOV.
        let cmd = Command::from_token(0x48f, &[42.0], &[String::from("SOV")]).unwrap();
        ex.execute(&mut w, &CommandTarget::World, &cmd).unwrap();
        assert_eq!(w.provinces[0].owner, Some(1));
        assert!(!w.provinces[0].occupied);
    }

    #[test]
    fn unknown_id_is_unknown_without_panic() {
        let mut w = two_country_world();
        let mut ex = CommandExecutor::new();
        let cmd = Command::from_token(0x7fff, &[], &[]).unwrap();
        assert!(matches!(cmd.ctype, CommandType::Unknown(0x7fff)));
        // Виконання не панікує, лише warn.
        ex.execute(&mut w, &CommandTarget::Country(0), &cmd)
            .unwrap();
    }

    /// Усі 289 ID словника (RE-commands.md §2) зіставляються з відомим типом.
    #[test]
    fn all_289_ids_map_to_known_types() {
        const KNOWN: [u16; 289] = [
            0x17, 0x18, 0x19, 0x1a, 0x1b, 0x35, 0x36, 0x3a, 0x3b, 0x41, 0x4d, 0x55, 0x56, 0x58,
            0x62, 0x63, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x70, 0x71, 0x72, 0x73,
            0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 0x87,
            0x89, 0x8c, 0x8d, 0x8e, 0x91, 0x9b, 0xa0, 0xa1, 0xa7, 0xa8, 0xaa, 0xab, 0xb7, 0xb8,
            0xb9, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7,
            0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 0xe5, 0xe7,
            0xf6, 0x103, 0x104, 0x105, 0x106, 0x107, 0x10a, 0x10b, 0x10e, 0x116, 0x11b, 0x11c,
            0x11d, 0x11e, 0x125, 0x126, 0x127, 0x128, 0x129, 0x12d, 0x137, 0x138, 0x13b, 0x13c,
            0x13d, 0x13f, 0x140, 0x141, 0x147, 0x148, 0x149, 0x14a, 0x14b, 0x14c, 0x14d, 0x14e,
            0x14f, 0x150, 0x152, 0x153, 0x154, 0x155, 0x156, 0x157, 0x158, 0x159, 0x15a, 0x15b,
            0x15c, 0x15d, 0x15e, 0x15f, 0x160, 0x161, 0x162, 0x163, 0x164, 0x165, 0x166, 0x167,
            0x168, 0x169, 0x16a, 0x16b, 0x16c, 0x16d, 0x16e, 0x16f, 0x170, 0x171, 0x172, 0x173,
            0x174, 0x175, 0x176, 0x17b, 0x17c, 0x17d, 0x17e, 0x17f, 0x180, 0x181, 0x182, 0x183,
            0x184, 0x185, 0x186, 0x187, 0x188, 0x189, 0x18a, 0x18b, 0x18c, 0x18d, 0x18e, 0x18f,
            0x190, 0x192, 0x193, 0x194, 0x195, 0x196, 0x197, 0x198, 0x199, 0x19a, 0x19b, 0x19c,
            0x19d, 0x19e, 0x19f, 0x1a0, 0x1a1, 0x1a2, 0x1a3, 0x1a4, 0x1a5, 0x1a6, 0x1a7, 0x1a8,
            0x1a9, 0x1aa, 0x1ab, 0x1ac, 0x1ad, 0x1ae, 0x1af, 0x1b0, 0x1b1, 0x1b2, 0x1b9, 0x1ba,
            0x1bb, 0x1bc, 0x1bd, 0x1be, 0x1bf, 0x1c2, 0x1c3, 0x1c4, 0x1c5, 0x1c6, 0x1c7, 0x1c8,
            0x1c9, 0x1ca, 0x1cb, 0x1cc, 0x1cd, 0x1ce, 0x1cf, 0x1d0, 0x1d1, 0x1d2, 0x1d3, 0x1d4,
            0x1d5, 0x1d6, 0x1d7, 0x1d8, 0x1d9, 0x1da, 0x1db, 0x1dc, 0x1dd, 0x1de, 0x1df, 0x1e0,
            0x1e1, 0x1e2, 0x1e3, 0x1e4, 0x1e5, 0x1e6, 0x1e7, 0x1e8, 0x1e9, 0x1ea, 0x1eb, 0x1ec,
            0x1ed, 0x1ee, 0x1ef, 0x1f0, 0x1f1, 0x1f2, 0x1f3, 0x1f4, 0x1f5, 0x1f6, 0x1f7, 0x1f8,
            0x1f9, 0x1fa, 0x1fb, 0x1fc, 0x1fd, 0x1fe, 0x1ff, 0x200, 0x202, 0x203, 0x204, 0x205,
            0x206,
        ];
        for id in KNOWN {
            let cmd =
                Command::from_token(id, &[1.0], &[String::from("X"), String::from("Y")]).unwrap();
            assert!(
                !matches!(cmd.ctype, CommandType::Unknown(_)),
                "ID 0x{id:02x} не зіставлено"
            );
        }
        assert_eq!(KNOWN.len(), 289);
    }
}
