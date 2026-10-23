//! Умови (triggers) скрипт-мови Darkest Hour: розбір токенів і чесна оцінка
//! проти стану [`World`].
//!
//! RE-джерела:
//! - `re/RE-commands-details.md` §5 — парсер trigger-блоків FUN_0072bbf0:
//!   88 гілок токенів → вузли умов (51 vtable), логічні комбінатори
//!   and/or/not (0x3dd/0x3de/0x3df — вузли 0x12 Б), default →
//!   «ERROR! Unknown trigger type: %s» (лічильник DAT_00dc4b60).
//! - `re/RE-scripts.md` §4 — ключові слова подій: `trigger` (0x3dc),
//!   `decision_trigger` (0x57b — рішення DH; той самий парсер умов),
//!   `ai_chance` (0x347).
//! - `re/RE-eug-format.md` — структури країн: ownedprovinces/controlledprovinces,
//!   diplomacy relations, techapps, manpower/money.
//!
//! Групування 88 гілок токенів → варіанти [`Condition`] (за §5 звіту):
//! - країна/існування: country(0xec)→Tag, exists(0x1af)→Exists, major(0x110)→IsMajor,
//!   ai(0x1f9)→IsAi, difficulty(0x2b8)→Difficulty;
//! - територія: owned(0x1ad)→Owns, control(0x10b)→Controls, core(0xf3)→Core,
//!   claims(0x577)→Claims, continent/area/region(0x1ae/0x1ff/0x200)→Territory;
//! - війна/дипломатія: atwar(0x138)→AtWar, war(0x137)→WarWith,
//!   allies/axis/comintern(0x22e..0x230)→InFaction, alliance(0x13c)→InAllianceWith,
//!   participant(0x195)→Participant, relation(0x135)→RelationGt,
//!   guarantee(0x2a6)/non_aggression(0x14c)/trade(0x147)/embargo(0x14a)/
//!   access(0x2b5)/military_control(0x571)→Diplomatic;
//! - економіка: money(0xf6)→MoneyGt, manpower(0x1b3)→ManpowerGt, ic(0xe2)→IcGt,
//!   dissent(0x84)→DissentGt, belligerence(0x2b2)→BelligerenceGt, supplies(0x382)→SuppliesGt,
//!   rare_materials/energy/metal/oil(0x232..0x235)→ResourceGt, stockpile(0x560)→StockpileGt,
//!   import(0x568)→ImportGt, resource_shortage(0x56a)→ResourceShortage,
//!   convoypool(0xd)→ConvoyPoolGt, escortpool(0xe)→EscortPoolGt;
//! - технології: is_tech_active(0x1a)/technology(0x2bd)→HasTech;
//! - уряд/політика: government(0x3fc)→Government, ideology(0x422)→Ideology,
//!   policy(0x25c)/domestic(0x3cc)→Policy, puppet(0xe4)/ispuppet(0xe5)→IsPuppet;
//! - час: year/month/day(0xf9/0xfa/0xfb)→Date;
//! - службові: flag(0x3d6)/local_flag(0x3d9)→Flag, event(0x1f7)→EventFired,
//!   random(0x3fa)→Random, nuked(0x572)→Nuked, under_attack/attack(0x10/0x35)→UnderAttack,
//!   leader(0x12d)/minister(0x29e)/HeadOfGovernment(0x3e9)/InCabinet(0x3f2)/
//!   tech_team(0x2be)→Personnel, alliance_leader(0x57e)→AllianceLeader;
//! - інші гілки звіту без підтвердженої семантики (range 0xd8, cavalry 0x8c,
//!   garrison 0x487, nuke 0x38b та ін.) і невідомі ID → [`Condition::Unknown`]:
//!   оцінка завжди false + warn (як default оригінального парсера — НЕ паніка).
//!
//! Еквівалент FUN_0072bbf0 у нас: [`Trigger::from_token`] (один токен) і
//! [`parse_trigger_block`] (весь блок `trigger = { ... }`; верхній рівень
//! блоку — кон'юнкція всіх умов, як у HoI2-движку).

use anyhow::{bail, Context, Result};
use dh_format::script::Value;
use dh_format::{tokens, ProvinceId, Tag};

use crate::country::Country;
use crate::world::World;

// --- ID токенів умов (RE-scripts.md §5 / dh-format/src/tokens.rs) ---
const T_TRIGGER: u16 = 0x3dc; // блок trigger; 0x57b decision_trigger — той самий парсер
const T_AND: u16 = 0x3dd;
const T_OR: u16 = 0x3de;
const T_NOT: u16 = 0x3df;
const T_COUNTRY: u16 = 0xec;
const T_EXISTS: u16 = 0x1af;
const T_MAJOR: u16 = 0x110;
const T_AI: u16 = 0x1f9;
const T_DIFFICULTY: u16 = 0x2b8;
const T_OWNED: u16 = 0x1ad;
const T_CONTROL: u16 = 0x10b;
const T_CORE: u16 = 0xf3;
const T_CLAIMS: u16 = 0x577;
const T_CONTINENT: u16 = 0x1ae;
const T_AREA: u16 = 0x1ff;
const T_REGION: u16 = 0x200;
const T_ATWAR: u16 = 0x138;
const T_WAR: u16 = 0x137;
const T_ALLIANCE: u16 = 0x13c;
const T_ALLIES: u16 = 0x22e;
const T_AXIS: u16 = 0x22f;
const T_COMINTERN: u16 = 0x230;
const T_PARTICIPANT: u16 = 0x195;
const T_RELATION: u16 = 0x135;
const T_GUARANTEE: u16 = 0x2a6;
const T_NON_AGGRESSION: u16 = 0x14c;
const T_TRADE: u16 = 0x147;
const T_EMBARGO: u16 = 0x14a;
const T_ACCESS: u16 = 0x2b5;
const T_MILITARY_CONTROL: u16 = 0x571;
const T_MONEY: u16 = 0xf6;
const T_MANPOWER: u16 = 0x1b3;
const T_IC: u16 = 0xe2;
const T_DISSENT: u16 = 0x84;
const T_BELLIGERENCE: u16 = 0x2b2;
const T_SUPPLIES: u16 = 0x382;
const T_RARE: u16 = 0x232;
const T_ENERGY: u16 = 0x233;
const T_METAL: u16 = 0x234;
const T_OIL: u16 = 0x235;
const T_STOCKPILE: u16 = 0x560;
const T_RESOURCE_SHORTAGE: u16 = 0x56a;
const T_IMPORT: u16 = 0x568;
const T_CONVOYPOOL: u16 = 0x000d;
const T_ESCORTPOOL: u16 = 0x000e;
const T_IS_TECH_ACTIVE: u16 = 0x1a;
const T_TECHNOLOGY: u16 = 0x2bd;
const T_GOVERNMENT: u16 = 0x3fc;
const T_IDEOLOGY: u16 = 0x422;
const T_POLICY: u16 = 0x25c;
const T_DOMESTIC: u16 = 0x3cc;
const T_PUPPET: u16 = 0xe4;
const T_ISPUPPET: u16 = 0xe5;
const T_YEAR: u16 = 0xf9;
const T_MONTH: u16 = 0xfa;
const T_DAY: u16 = 0xfb;
const T_FLAG: u16 = 0x3d6;
const T_LOCAL_FLAG: u16 = 0x3d9;
const T_EVENT: u16 = 0x1f7;
const T_RANDOM: u16 = 0x3fa;
const T_NUKED: u16 = 0x572;
const T_UNDER_ATTACK: u16 = 0x10;
const T_ATTACK: u16 = 0x35;
const T_LEADER: u16 = 0x12d;
const T_MINISTER: u16 = 0x29e;
const T_HEAD_OF_GOVERNMENT: u16 = 0x3e9;
const T_IN_CABINET: u16 = 0x3f2;
const T_TECH_TEAM: u16 = 0x2be;
const T_ALLIANCE_LEADER: u16 = 0x57e;

/// Фракція (великий блок у .eug: `axis = { participant = { ... } }`,
/// `allies = { ... }`, `comintern = { ... }` — RE-eug-format.md §globaldata).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Faction {
    Allies,
    Axis,
    Comintern,
}

impl Faction {
    /// Канонічне ім'я блоку у скриптах (порівнюється з `AllianceRuntime::name`
    /// без урахування регістру).
    pub fn name(self) -> &'static str {
        match self {
            Faction::Allies => "allies",
            Faction::Axis => "axis",
            Faction::Comintern => "comintern",
        }
    }
}

/// Тип стратегічного ресурсу (токени 0x232..0x235, RE-scripts.md §5).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ResourceKind {
    RareMaterials,
    Energy,
    Metal,
    Oil,
}

impl ResourceKind {
    pub fn name(self) -> &'static str {
        match self {
            ResourceKind::RareMaterials => "rare_materials",
            ResourceKind::Energy => "energy",
            ResourceKind::Metal => "metal",
            ResourceKind::Oil => "oil",
        }
    }

    fn from_name(s: &str) -> Option<Self> {
        match s {
            "rare_materials" => Some(ResourceKind::RareMaterials),
            "energy" => Some(ResourceKind::Energy),
            "metal" => Some(ResourceKind::Metal),
            "oil" => Some(ResourceKind::Oil),
            _ => None,
        }
    }
}

/// Договір/стан у дипломатії (усі — вузли 0x22 Б з аргументом-країною в §5).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TreatyKind {
    /// 0x2a6 guarantee — гарантія незалежності.
    Guarantee,
    /// 0x14c non_aggression.
    NonAggression,
    /// 0x147 trade — торгова угода.
    Trade,
    /// 0x14a embargo.
    Embargo,
    /// 0x2b5 access — право проходу військ.
    MilitaryAccess,
    /// 0x571 military_control — військовий контроль над країною.
    MilitaryControl,
}

/// Територіальний масштаб умови [`Condition::Territory`].
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TerritoryScope {
    /// 0x1ae continent — наявність провінцій на континенті.
    Continent,
    /// 0x1ff area.
    Area,
    /// 0x200 region.
    Region,
}

/// «Людський» ресурс (лідери/міністри/команди) для [`Condition::Personnel`].
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum PersonnelKind {
    /// 0x12d leader.
    Leader,
    /// 0x29e minister.
    Minister,
    /// 0x2be tech_team.
    TechTeam,
    /// 0x3e9 HeadOfGovernment.
    HeadOfGovernment,
    /// 0x3f2 InCabinet.
    InCabinet,
}

/// Адресат команд/умов — «хто виконує» (аналог `tag = ...` у події).
///
/// Походить із блоків подій/рішень (`country = GER`) або провінційних подій
/// (`province = 42`). Для провінції всі «країнні» умови оцінюються для її
/// власника (як у HoI2-движку; TODO(RE): точний вибір власник/контролер
/// залежно від типу події).
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum CommandTarget {
    Country(Tag),
    Province(ProvinceId),
}

/// Умова trigger-блоку. Варіанти згруповані з 88 гілок парсера
/// FUN_0072bbf0 (RE-commands-details.md §5) — відповідність токенів див.
/// у шапці модуля та в коментарях варіантів.
#[derive(Debug, Clone, PartialEq)]
pub enum Condition {
    // --- Логічні комбінатори (0x3dd/0x3de/0x3df; вузли 0x12 Б зі списком) ---
    /// `not = { ... }` — заперечення (вкладені умови).
    Not(Box<Condition>),
    /// `and = { ... }` — кон'юнкція.
    And(Vec<Condition>),
    /// `or = { ... }` — диз'юнкція.
    Or(Vec<Condition>),

    // --- Ідентичність / існування ---
    /// `country = GER` (0xec): тег адресата збігається.
    Tag(Tag),
    /// `exists = GER` (0x1af): країна існує у світі.
    Exists(Tag),
    /// `major = yes/no` (0x110): країна велика держава.
    /// TODO(RE): у `Country` поля немає — оцінка false + warn.
    IsMajor,
    /// `ai = yes/no` (0x1f9): країною керує AI.
    IsAi,
    /// `difficulty = N` (0x2b8): рівень складності гри.
    /// TODO(RE): зберігається у `World` окремо — оцінка false + warn.
    Difficulty(u8),

    // --- Територія ---
    /// `owned = { province = 12 }` (0x1ad): адресат володіє провінцією.
    Owns(ProvinceId),
    /// `control = { province = 12 }` (0x10b): адресат контролює провінцію
    /// (контролер може відрізнятися від власника при окупації).
    Controls(ProvinceId),
    /// `core = { province = 12 }` (0xf3): провінція національна (core).
    /// TODO(RE): списків national/claimed у `World` немає — оцінка false + warn.
    Core(ProvinceId),
    /// `claims = { province = 12 }` (0x577): претензія на провінцію.
    /// TODO(RE): оцінка false + warn (як Core).
    Claims(ProvinceId),
    /// `continent = europe` / `area = ...` / `region = ...` (0x1ae/0x1ff/0x200):
    /// адресат має не менш ніж `count` провінцій у межах території.
    /// TODO(RE): у `ProvinceState` немає area/region/continent — оцінка false + warn.
    Territory {
        scope: TerritoryScope,
        name: String,
        count: u32,
    },

    // --- Війна / дипломатія ---
    /// `atwar = yes/no` (0x138): адресат воює (з будь-ким).
    AtWar,
    /// `war = { country = SOV }` (0x137): адресат воює з конкретною країною.
    WarWith(Tag),
    /// Виснаження війною. Окремого токена в 88 гілках не ідентифіковано
    /// (у сімействі HoI2 зустрічається в модах); TODO(RE): у `Country` поля
    /// немає — оцінка false + warn.
    WarExhaustion(f64),
    /// `allies = yes` / `axis = yes` / `comintern = yes` (0x22e..0x230):
    /// адресат у фракції (шукається альянс з відповідним ім'ям).
    InFaction(Faction),
    /// `alliance = { country = SOV }` (0x13c): адресат в одному альянсі з X.
    InAllianceWith(Tag),
    /// `participant = { country = X }` (0x195): адресат і X — сторони однієї
    /// війни. Оцінка: спільний ворог (об'єктів воєн у `World` ще немає —
    /// TODO(RE)).
    Participant(Tag),
    /// `relation = { tag = SOV value = 50 }` (0x135): відносини з X не нижчі
    /// за value (HoI2-шкала −200..200).
    RelationGt { tag: Tag, value: i32 },
    /// Договір/стан із країною (0x2a6/0x14c/0x147/0x14a/0x2b5/0x571).
    /// TODO(RE): у `Country` полів договорів немає — оцінка false + warn.
    Diplomatic { kind: TreatyKind, tag: Tag },

    // --- Економіка (порівняння «не менше за») ---
    /// `money = 200` (0xf6).
    MoneyGt(f64),
    /// `manpower = 5` (0x1b3).
    ManpowerGt(f64),
    /// `ic = 10` (0xe2).
    IcGt(f64),
    /// `dissent = 5` (0x84). TODO(RE): поля у `Country` немає — false + warn.
    DissentGt(f64),
    /// `belligerence = 5` (0x2b2). TODO(RE): false + warn.
    BelligerenceGt(f64),
    /// `supplies = 100` (0x382). TODO(RE): false + warn.
    SuppliesGt(f64),
    /// `rare_materials = 100` та ін. (0x232..0x235). TODO(RE): false + warn.
    ResourceGt { kind: ResourceKind, amount: f64 },
    /// `stockpile = { oil = 100 }` (0x560). TODO(RE): false + warn.
    StockpileGt { kind: ResourceKind, amount: f64 },
    /// `import = { oil = 10 }` (0x568). TODO(RE): false + warn.
    ImportGt { kind: ResourceKind, amount: f64 },
    /// `resource_shortage = oil` (0x56a). TODO(RE): false + warn.
    ResourceShortage(Option<ResourceKind>),
    /// `convoypool = 100` (0xd). TODO(RE): false + warn.
    ConvoyPoolGt(f64),
    /// `escortpool = 50` (0xe). TODO(RE): false + warn.
    EscortPoolGt(f64),

    // --- Технології ---
    /// `is_tech_active = 1230` (0x1a) / `technology = 1230` (0x2bd):
    /// технологію досліджено.
    HasTech(u16),

    // --- Державний устрій / політика ---
    /// `government = X` (0x3fc). TODO(RE): false + warn.
    Government(String),
    /// `ideology = X` (0x422). TODO(RE): false + warn.
    Ideology(String),
    /// `policy = { democratic = 3 }` (0x25c) / `domestic = { ... }` (0x3cc).
    /// TODO(RE): false + warn.
    Policy { name: String, value: i32 },
    /// `ispuppet = yes` (0xe5) / `puppet = { country = GER }` (0xe4).
    /// TODO(RE): false + warn.
    IsPuppet(Option<Tag>),

    // --- Час (0xf9/0xfa/0xfb; місяць — число або назва january..december) ---
    Date {
        year: Option<i32>,
        month: Option<u8>,
        day: Option<u8>,
    },

    // --- Прапори та події ---
    /// `flag = foo` (0x3d6) / `local_flag = foo` (0x3d9).
    /// TODO(RE): прапорів у `Country` немає — оцінка false + warn.
    Flag { name: String, local: bool },
    /// `event = 1234` (0x1f7): подію вже показано.
    /// TODO(RE): журналу подій у `World` немає — оцінка false + warn.
    EventFired(u32),
    /// `random = 0.5` (0x3fa): імовірнісна умова. Оцінка — детермінований
    /// генератор за ігровою датою (ориг. використовує глобальний RNG;
    /// TODO(RE): підключити генератор движка).
    Random(f64),
    /// `nuked = { province = 12 }` (0x572). TODO(RE): false + warn.
    Nuked(Option<ProvinceId>),
    /// `under_attack = yes` (0x10) / `attack = yes` (0x35).
    /// TODO(RE): бойової системи немає — оцінка false + warn.
    UnderAttack,
    /// Лідери/міністри/команди (0x12d/0x29e/0x2be/0x3e9/0x3f2).
    /// TODO(RE): системи лідерів немає — оцінка false + warn.
    Personnel {
        kind: PersonnelKind,
        id: Option<u32>,
    },
    /// `alliance_leader = yes` (0x57e): адресат очолює альянс.
    /// TODO(RE): поле «лідер альянсу» не змодельоване — оцінка false + warn.
    AllianceLeader(Option<Tag>),

    /// Невідомий парсеру токен (default оригіналу: «ERROR! Unknown trigger
    /// type»). Оцінка завжди false + warn (НЕ паніка).
    Unknown { id: u16 },
}

/// Одна умова з контекстом негації.
///
/// `negated` дозволяє чесну форму «заперечення через значення»:
/// `atwar = no`, `major = no`, `ai = no` (у HoI2 усі yes/no-тригери
/// підтримують `no`). Вкладена негація — через [`Condition::Not`] /
/// токен `not = { ... }`.
#[derive(Debug, Clone, PartialEq)]
pub struct Trigger {
    pub cond: Condition,
    pub negated: bool,
}

impl Trigger {
    /// Розібрати одну умову за ID токена (аналог однієї гілки switch
    /// FUN_0072bbf0; RE-commands-details.md §5).
    ///
    /// `args` — значення зі скрипт-дерева: число (`money = 100`), слово
    /// (`exists = GER`), yes/no (`atwar = yes`) або блок (`war = { country = SOV }`).
    ///
    /// Невідомі ID не є помилкою: повертається [`Condition::Unknown`]
    /// (оцінка false + warn). Помилка виникає лише за некоректних аргументів
    /// відомої умови.
    pub fn from_token(id: u16, args: &Value) -> Result<Self> {
        let cond = match id {
            // Службовий: сам блок trigger / decision_trigger — список умов.
            T_TRIGGER => Condition::And(parse_cond_block(args)?),

            // Логічні комбінатори: вкладений блок { ... }.
            T_AND => Condition::And(parse_cond_block(args)?),
            T_OR => Condition::Or(parse_cond_block(args)?),
            T_NOT => {
                // not = { a b } = НЕ(AND(a,b)) — негація кон'юнкції блоку.
                return Ok(Self {
                    cond: Condition::And(parse_cond_block(args)?),
                    negated: true,
                });
            }

            // Ідентичність / існування.
            T_COUNTRY => Condition::Tag(as_tag(args, "country")?),
            T_EXISTS => Condition::Exists(as_tag(args, "exists")?),
            T_MAJOR => return Self::parse_bool(id, args, || Condition::IsMajor),
            T_AI => return Self::parse_bool(id, args, || Condition::IsAi),
            T_DIFFICULTY => Condition::Difficulty(as_number(args, "difficulty")? as u8),

            // Територія.
            T_OWNED => Condition::Owns(as_province(args, "owned")?),
            T_CONTROL => Condition::Controls(as_province(args, "control")?),
            T_CORE => Condition::Core(as_province(args, "core")?),
            T_CLAIMS => Condition::Claims(as_province(args, "claims")?),
            T_CONTINENT => territory(TerritoryScope::Continent, args, "continent")?,
            T_AREA => territory(TerritoryScope::Area, args, "area")?,
            T_REGION => territory(TerritoryScope::Region, args, "region")?,

            // Війна / дипломатія.
            T_ATWAR => return Self::parse_bool(id, args, || Condition::AtWar),
            T_WAR => Condition::WarWith(as_tag(args, "war")?),
            T_ALLIANCE => Condition::InAllianceWith(as_tag(args, "alliance")?),
            T_ALLIES => return Self::parse_bool(id, args, || Condition::InFaction(Faction::Allies)),
            T_AXIS => return Self::parse_bool(id, args, || Condition::InFaction(Faction::Axis)),
            T_COMINTERN => {
                return Self::parse_bool(id, args, || Condition::InFaction(Faction::Comintern))
            }
            T_PARTICIPANT => Condition::Participant(as_tag(args, "participant")?),
            T_RELATION => {
                let tag = as_tag_from(args, "tag", "relation")?;
                let value = as_number_from(args, "value", "relation")? as i32;
                Condition::RelationGt { tag, value }
            }
            T_GUARANTEE => treaty(TreatyKind::Guarantee, args, "guarantee")?,
            T_NON_AGGRESSION => treaty(TreatyKind::NonAggression, args, "non_aggression")?,
            T_TRADE => treaty(TreatyKind::Trade, args, "trade")?,
            T_EMBARGO => treaty(TreatyKind::Embargo, args, "embargo")?,
            T_ACCESS => treaty(TreatyKind::MilitaryAccess, args, "access")?,
            T_MILITARY_CONTROL => treaty(TreatyKind::MilitaryControl, args, "military_control")?,

            // Економіка.
            T_MONEY => Condition::MoneyGt(as_number(args, "money")?),
            T_MANPOWER => Condition::ManpowerGt(as_number(args, "manpower")?),
            T_IC => Condition::IcGt(as_number(args, "ic")?),
            T_DISSENT => Condition::DissentGt(as_number(args, "dissent")?),
            T_BELLIGERENCE => Condition::BelligerenceGt(as_number(args, "belligerence")?),
            T_SUPPLIES => Condition::SuppliesGt(as_number(args, "supplies")?),
            T_RARE => Condition::ResourceGt {
                kind: ResourceKind::RareMaterials,
                amount: as_number(args, "rare_materials")?,
            },
            T_ENERGY => Condition::ResourceGt {
                kind: ResourceKind::Energy,
                amount: as_number(args, "energy")?,
            },
            T_METAL => Condition::ResourceGt {
                kind: ResourceKind::Metal,
                amount: as_number(args, "metal")?,
            },
            T_OIL => Condition::ResourceGt {
                kind: ResourceKind::Oil,
                amount: as_number(args, "oil")?,
            },
            T_STOCKPILE => {
                let (kind, amount) = resource_amount(args, "stockpile")?;
                Condition::StockpileGt { kind, amount }
            }
            T_IMPORT => {
                let (kind, amount) = resource_amount(args, "import")?;
                Condition::ImportGt { kind, amount }
            }
            T_RESOURCE_SHORTAGE => Condition::ResourceShortage(resource_shortage_arg(args)?),
            T_CONVOYPOOL => Condition::ConvoyPoolGt(as_number(args, "convoypool")?),
            T_ESCORTPOOL => Condition::EscortPoolGt(as_number(args, "escortpool")?),

            // Технології.
            T_IS_TECH_ACTIVE => Condition::HasTech(as_number(args, "is_tech_active")? as u16),
            T_TECHNOLOGY => Condition::HasTech(as_number(args, "technology")? as u16),

            // Уряд / політика.
            T_GOVERNMENT => Condition::Government(as_string(args, "government")?),
            T_IDEOLOGY => Condition::Ideology(as_string(args, "ideology")?),
            T_POLICY => policy(args, "policy")?,
            T_DOMESTIC => policy(args, "domestic")?,
            T_PUPPET => Condition::IsPuppet(Some(as_tag(args, "puppet")?)),
            T_ISPUPPET => return Self::parse_bool(id, args, || Condition::IsPuppet(None)),

            // Час.
            T_YEAR => Condition::Date {
                year: Some(as_number(args, "year")? as i32),
                month: None,
                day: None,
            },
            T_MONTH => Condition::Date {
                year: None,
                month: Some(month_arg(args)?),
                day: None,
            },
            T_DAY => Condition::Date {
                year: None,
                month: None,
                day: Some(as_number(args, "day")? as u8),
            },

            // Прапори та події.
            T_FLAG => Condition::Flag {
                name: as_string(args, "flag")?,
                local: false,
            },
            T_LOCAL_FLAG => Condition::Flag {
                name: as_string(args, "local_flag")?,
                local: true,
            },
            T_EVENT => Condition::EventFired(as_number(args, "event")? as u32),
            T_RANDOM => Condition::Random(as_number(args, "random")?),
            T_NUKED => Condition::Nuked(nuked_arg(args)?),
            T_UNDER_ATTACK | T_ATTACK => {
                return Self::parse_bool(id, args, || Condition::UnderAttack)
            }

            // Лідери / міністри / команди.
            T_LEADER => Condition::Personnel {
                kind: PersonnelKind::Leader,
                id: optional_id(args, "leader")?,
            },
            T_MINISTER => Condition::Personnel {
                kind: PersonnelKind::Minister,
                id: optional_id(args, "minister")?,
            },
            T_TECH_TEAM => Condition::Personnel {
                kind: PersonnelKind::TechTeam,
                id: optional_id(args, "tech_team")?,
            },
            T_HEAD_OF_GOVERNMENT => Condition::Personnel {
                kind: PersonnelKind::HeadOfGovernment,
                id: optional_id(args, "HeadOfGovernment")?,
            },
            T_IN_CABINET => Condition::Personnel {
                kind: PersonnelKind::InCabinet,
                id: optional_id(args, "InCabinet")?,
            },
            T_ALLIANCE_LEADER => match args {
                Value::Bool(_) | Value::None => Condition::AllianceLeader(None),
                _ => Condition::AllianceLeader(Some(as_tag(args, "alliance_leader")?)),
            },

            // Невідомий токен: як в ориг. default → warn, оцінка false.
            _ => {
                let name = tokens::name(id).unwrap_or("<без назви>");
                log::warn!(
                    "[triggers] невідома умова 0x{id:04x} (`{name}`) — оцінка false \
                     (ориг.: \"ERROR! Unknown trigger type: %s\", RE-commands-details.md §5)"
                );
                Condition::Unknown { id }
            }
        };
        Ok(Self {
            cond,
            negated: false,
        })
    }

    /// yes/no-умова: `no` → негація (`major = no` = «не мажор»).
    fn parse_bool(id: u16, args: &Value, make: impl Fn() -> Condition) -> Result<Self> {
        let name = tokens::name(id).unwrap_or("<токен>");
        let yes = as_bool(args, name)?;
        Ok(Self {
            cond: make(),
            negated: !yes,
        })
    }
}

/// Розібрати блок умов `{ ... }` (тіло `and`/`or`/`not`/`trigger`).
///
/// Окрема умова, що не розібралася (помилка аргументів), не валить увесь
/// блок — вона стає [`Condition::Unknown`] з warn (як default оригінального
/// парсера; НЕ паніка).
pub fn parse_block(v: &Value) -> Result<Vec<Trigger>> {
    let entries = match v {
        Value::List(entries) => entries,
        other => bail!("блок умов: очікувався список, отримано {other:?}"),
    };
    let mut out = Vec::with_capacity(entries.len());
    for (key, val) in entries {
        let id = tokens::lookup(key).unwrap_or(u16::MAX);
        match Trigger::from_token(id, val) {
            Ok(t) => out.push(t),
            Err(e) => {
                log::warn!("[triggers] умову `{key}` не розібрано: {e:#}; оцінка = false");
                out.push(Trigger {
                    cond: Condition::Unknown { id },
                    negated: false,
                });
            }
        }
    }
    Ok(out)
}

/// Розібрати весь блок `trigger = { ... }` (0x3dc; `decision_trigger`,
/// 0x57b, використовує той самий розбір). Верхній рівень блоку — AND усіх
/// умов, як у HoI2-движку. Порожній блок = завжди true.
pub fn parse_trigger_block(v: &Value) -> Result<Trigger> {
    let conds = parse_cond_block(v)?;
    Ok(Trigger {
        cond: Condition::And(conds),
        negated: false,
    })
}

/// Розібрати блок умов як [`Condition`] (для вузлів `and`/`or`/`not`, які
/// тримають саме `Vec<Condition>`): негація окремої умови всередині блоку
/// стає [`Condition::Not`].
fn parse_cond_block(v: &Value) -> Result<Vec<Condition>> {
    Ok(parse_block(v)?
        .into_iter()
        .map(|t| {
            if t.negated {
                Condition::Not(Box::new(t.cond))
            } else {
                t.cond
            }
        })
        .collect())
}

// --- Хелпери розбору аргументів (значення скрипт-дерева dh-format) ---

fn as_number(v: &Value, what: &str) -> Result<f64> {
    match v {
        Value::Number(n) => Ok(*n),
        Value::Bool(b) => Ok(if *b { 1.0 } else { 0.0 }),
        Value::None => Ok(0.0),
        other => bail!("{what}: очікувалось число, отримано {other:?}"),
    }
}

fn as_string(v: &Value, what: &str) -> Result<String> {
    match v {
        Value::String(s) => Ok(s.clone()),
        Value::Number(n) => Ok(format!("{n}")),
        Value::Bool(b) => Ok(if *b { "yes".to_string() } else { "no".to_string() }),
        other => bail!("{what}: очікувався рядок, отримано {other:?}"),
    }
}

fn as_bool(v: &Value, what: &str) -> Result<bool> {
    match v {
        Value::Bool(b) => Ok(*b),
        Value::Number(n) => Ok(*n != 0.0),
        Value::String(s) => match s.as_str() {
            "yes" | "1" => Ok(true),
            "no" | "0" => Ok(false),
            other => bail!("{what}: очікувалось yes/no, отримано `{other}`"),
        },
        other => bail!("{what}: очікувалось yes/no, отримано {other:?}"),
    }
}

/// Тег зі значення: `GER`, `"GER"` або блок `{ country = GER }` / `{ tag = GER }`.
fn as_tag(v: &Value, what: &str) -> Result<Tag> {
    match v {
        Value::String(s) => Ok(Tag(s.clone())),
        Value::List(_) => {
            let c = field(v, "country")
                .or_else(|| field(v, "tag"))
                .with_context(|| format!("{what}: у блоці немає поля country/tag — {v:?}"))?;
            as_tag(c, what)
        }
        other => bail!("{what}: очікувався тег країни, отримано {other:?}"),
    }
}

/// Поле з блоку-аргумента (останнє входження ключа, як при послідовному
/// читанні движком).
fn field<'v>(v: &'v Value, key: &str) -> Option<&'v Value> {
    match v {
        Value::List(entries) => entries
            .iter()
            .rev()
            .find(|(k, _)| k == key)
            .map(|(_, val)| val),
        _ => None,
    }
}

/// Поле `key` з блоку-аргумента з помилкою.
fn as_field<'v>(v: &'v Value, key: &str, what: &str) -> Result<&'v Value> {
    field(v, key).with_context(|| format!("{what}: у блоці немає поля `{key}` — {v:?}"))
}

/// Тег із поля `key` блоку (`relation = { tag = SOV ... }`).
fn as_tag_from(v: &Value, key: &str, what: &str) -> Result<Tag> {
    as_tag(as_field(v, key, what)?, what)
}

/// Число з поля `key` блоку (`relation = { ... value = 50 }`).
fn as_number_from(v: &Value, key: &str, what: &str) -> Result<f64> {
    as_number(as_field(v, key, what)?, what)
}

/// Провінція: `12` або блок `{ province = 12 }` (в ориг. owned/control/core
/// приймають обидві форми).
fn as_province(v: &Value, what: &str) -> Result<ProvinceId> {
    match v {
        Value::Number(n) => Ok(*n as u16),
        Value::List(_) => as_province(as_field(v, "province", what)?, what),
        other => bail!("{what}: очікувався id провінції, отримано {other:?}"),
    }
}

/// Місяць: число 1..12 або назва (`january`..`december`, токени 0xfe..0x109).
fn month_arg(v: &Value) -> Result<u8> {
    match v {
        Value::Number(n) => Ok(*n as u8),
        Value::String(s) => {
            const MONTHS: [&str; 12] = [
                "january", "february", "march", "april", "may", "june", "july", "august",
                "september", "october", "november", "december",
            ];
            let lower = s.to_ascii_lowercase();
            MONTHS
                .iter()
                .position(|m| *m == lower)
                .map(|i| i as u8 + 1)
                .with_context(|| format!("невідомий місяць `{s}`"))
        }
        other => bail!("month: очікувалось число або назва місяця, отримано {other:?}"),
    }
}

/// Територіальна умова: `continent = europe` або блок `area = { ... }` —
/// назва = перше строкове поле, кількість = поле `provinces` (або 1).
fn territory(scope: TerritoryScope, v: &Value, what: &str) -> Result<Condition> {
    let (name, count) = match v {
        Value::String(s) => (s.clone(), 1),
        Value::List(entries) => {
            let name = entries
                .iter()
                .find_map(|(_k, val)| match val {
                    Value::String(s) => Some(s.clone()),
                    Value::Number(n) => Some(format!("{n}")),
                    _ => None,
                })
                .unwrap_or_else(|| what.to_string());
            let count = match field(v, "provinces") {
                Some(Value::Number(n)) => *n as u32,
                _ => 1,
            };
            (name, count)
        }
        other => bail!("{what}: очікувалась назва або блок, отримано {other:?}"),
    };
    Ok(Condition::Territory { scope, name, count })
}

/// Договір: `guarantee = { country = GER }` і подібні.
fn treaty(kind: TreatyKind, v: &Value, what: &str) -> Result<Condition> {
    Ok(Condition::Diplomatic {
        kind,
        tag: as_tag(v, what)?,
    })
}

/// Ресурс `{ вид = кількість }` (`stockpile = { oil = 100 }`, `import = { ... }`).
fn resource_amount(v: &Value, what: &str) -> Result<(ResourceKind, f64)> {
    match v {
        Value::List(entries) => {
            let (k, val) = entries
                .first()
                .with_context(|| format!("{what}: порожній блок"))?;
            let kind = ResourceKind::from_name(k)
                .with_context(|| format!("{what}: невідомий ресурс `{k}`"))?;
            let amount = as_number(val, what)?;
            Ok((kind, amount))
        }
        other => bail!("{what}: очікувався блок `{{ ресурс = кількість }}`, отримано {other:?}"),
    }
}

/// `resource_shortage = oil` або без аргумента.
fn resource_shortage_arg(v: &Value) -> Result<Option<ResourceKind>> {
    match v {
        Value::String(s) => ResourceKind::from_name(s)
            .map(Some)
            .with_context(|| format!("resource_shortage: невідомий ресурс `{s}`")),
        Value::Bool(_) | Value::None => Ok(None),
        other => bail!("resource_shortage: очікувалась назва ресурсу, отримано {other:?}"),
    }
}

/// Політика: `policy = { democratic = 3 }` (перше поле; дублікати полів
/// оригінал читає як окремі умови — TODO(RE): точна семантика блоку).
fn policy(v: &Value, what: &str) -> Result<Condition> {
    match v {
        Value::List(entries) => {
            let (k, val) = entries
                .first()
                .with_context(|| format!("{what}: порожній блок"))?;
            let value = match val {
                Value::Bool(b) => {
                    if *b {
                        1
                    } else {
                        0
                    }
                }
                Value::Number(n) => *n as i32,
                other => bail!("{what}: значення політики має бути числом, отримано {other:?}"),
            };
            Ok(Condition::Policy {
                name: k.clone(),
                value,
            })
        }
        other => bail!("{what}: очікувався блок `{{ політика = значення }}`, отримано {other:?}"),
    }
}

/// Необов'язковий id: `leader = 132` або `HeadOfGovernment = yes`.
fn optional_id(v: &Value, what: &str) -> Result<Option<u32>> {
    match v {
        Value::Number(n) => Ok(Some(*n as u32)),
        Value::Bool(_) | Value::None => Ok(None),
        other => bail!("{what}: очікувався id або yes/no, отримано {other:?}"),
    }
}

/// `nuked = 12` | `nuked = { province = 12 }` | `nuked = yes`.
fn nuked_arg(v: &Value) -> Result<Option<ProvinceId>> {
    match v {
        Value::Number(_) | Value::List(_) => Ok(Some(as_province(v, "nuked")?)),
        Value::Bool(_) | Value::None => Ok(None),
        other => bail!("nuked: очікувалась провінція або yes/no, отримано {other:?}"),
    }
}

// --- Оцінка умов проти стану світу ---

/// Оцінити тригер для адресата. Чесно: owns/controls — через
/// `ProvinceState::owner/controller`, війни — через `Country::at_war`,
/// відносини/гроші/технології — з полів `Country`.
///
/// Невідомі та ще не реалізовані умови (немає даних у `World`/`Country`)
/// дають `false` + `log::warn` — ніколи не панікують.
pub fn evaluate(world: &World, target: &CommandTarget, trig: &Trigger) -> bool {
    let base = eval_cond(world, target, &trig.cond);
    if trig.negated {
        !base
    } else {
        base
    }
}

fn eval_cond(world: &World, target: &CommandTarget, c: &Condition) -> bool {
    match c {
        Condition::Not(inner) => !eval_cond(world, target, inner),
        Condition::And(list) => list.iter().all(|c| eval_cond(world, target, c)),
        Condition::Or(list) => list.iter().any(|c| eval_cond(world, target, c)),

        // Ідентичність / існування.
        Condition::Tag(tag) => match target_country(world, target) {
            Some(c) => &c.tag == tag,
            None => false,
        },
        Condition::Exists(tag) => world.country(tag).is_some(),
        Condition::IsMajor => unsupported("major (0x110): поля `is_major` у Country немає"),
        Condition::IsAi => match target_country(world, target) {
            Some(c) => c.ai_enabled,
            None => false,
        },
        Condition::Difficulty(_) => {
            unsupported("difficulty (0x2b8): рівень складності не зберігається у World")
        }

        // Територія.
        Condition::Owns(prov) => province_matches(world, target, *prov, ProvinceCheck::Owner),
        Condition::Controls(prov) => {
            province_matches(world, target, *prov, ProvinceCheck::Controller)
        }
        Condition::Core(_) => unsupported(
            "core (0xf3): національні провінції не зберігаються у World (TODO: nationalprovinces)",
        ),
        Condition::Claims(_) => {
            unsupported("claims (0x577): претензії не зберігаються у World (TODO: claimedprovinces)")
        }
        Condition::Territory { scope, .. } => unsupported(&format!(
            "територія ({scope:?}): у ProvinceState немає area/region/continent"
        )),

        // Війна / дипломатія.
        Condition::AtWar => match target_country(world, target) {
            Some(c) => !c.at_war.is_empty(),
            None => false,
        },
        Condition::WarWith(tag) => match target_country(world, target) {
            Some(c) => c.at_war.contains(tag),
            None => false,
        },
        Condition::WarExhaustion(_) => unsupported(
            "war_exhaustion: окремого токена в 88 гілках немає, поля у Country немає (TODO(RE))",
        ),
        Condition::InFaction(f) => {
            let Some(me) = target_idx(world, target) else {
                return false;
            };
            let want = f.name();
            world
                .alliances
                .iter()
                .any(|a| a.name.to_ascii_lowercase() == want && a.members.contains(&me))
        }
        Condition::InAllianceWith(tag) => {
            let Some(me) = target_idx(world, target) else {
                return false;
            };
            let Some(&them) = world.tags.get(tag) else {
                return false;
            };
            world
                .alliances
                .iter()
                .any(|a| a.members.contains(&me) && a.members.contains(&them))
        }
        Condition::Participant(tag) => {
            // Спільна війна: існує ворог, з яким воюють обидва боки.
            // TODO(RE): в оригіналі — об'єкти воєн (учасник війни X);
            // у World воєн ще немає, тому апроксимація спільним ворогом.
            let (Some(me), Some(them)) = (
                target_country(world, target),
                world.country(tag),
            ) else {
                return false;
            };
            them.at_war.iter().any(|z| me.at_war.contains(z))
        }
        Condition::RelationGt { tag, value } => match target_country(world, target) {
            Some(c) => c.relations.get(tag).copied().unwrap_or(0) >= *value,
            None => false,
        },
        Condition::Diplomatic { .. } => unsupported(
            "договори (guarantee/non_aggression/trade/embargo/access/military_control): \
             полів у Country немає (TODO)",
        ),

        // Економіка.
        Condition::MoneyGt(amount) => match target_country(world, target) {
            Some(c) => c.money >= *amount,
            None => false,
        },
        Condition::ManpowerGt(amount) => match target_country(world, target) {
            Some(c) => c.manpower >= *amount,
            None => false,
        },
        Condition::IcGt(amount) => match target_country(world, target) {
            Some(c) => c.ic >= *amount,
            None => false,
        },
        Condition::DissentGt(_) => unsupported("dissent (0x84): поля у Country немає (TODO)"),
        Condition::BelligerenceGt(_) => {
            unsupported("belligerence (0x2b2): поля у Country немає (TODO)")
        }
        Condition::SuppliesGt(_) => unsupported("supplies (0x382): у Country є лише сховище ресурсів (TODO)"),
        Condition::ResourceGt { .. } => unsupported(
            "ресурси-запаси (0x232..0x235): семантика тригера «виробництво/запас» непідтверджена (TODO(RE))",
        ),
        Condition::StockpileGt { .. } => unsupported("stockpile (0x560): TODO(RE)"),
        Condition::ImportGt { .. } => unsupported("import (0x568): торгівлі ще немає (TODO)"),
        Condition::ResourceShortage(_) => {
            unsupported("resource_shortage (0x56a): TODO(RE)")
        }
        Condition::ConvoyPoolGt(_) => unsupported("convoypool (0xd): конвоїв немає (TODO)"),
        Condition::EscortPoolGt(_) => unsupported("escortpool (0xe): конвоїв немає (TODO)"),

        // Технології.
        Condition::HasTech(tech) => match target_country(world, target) {
            Some(c) => c.techs.contains(tech),
            None => false,
        },

        // Уряд / політика.
        Condition::Government(_) => unsupported("government (0x3fc): поля у Country немає (TODO)"),
        Condition::Ideology(_) => unsupported("ideology (0x422): поля у Country немає (TODO)"),
        Condition::Policy { .. } => unsupported(
            "policy/domestic (0x25c/0x3cc): політик у Country немає (TODO)",
        ),
        Condition::IsPuppet(_) => unsupported("puppet/ispuppet (0xe4/0xe5): поля у Country немає (TODO)"),

        // Час.
        Condition::Date { year, month, day } => {
            if let Some(y) = year {
                if world.date.year() != *y {
                    return false;
                }
            }
            if let Some(m) = month {
                if world.date.month() != *m as i32 {
                    return false;
                }
            }
            if let Some(d) = day {
                if world.date.day_of_month() != *d as i32 {
                    return false;
                }
            }
            true
        }

        // Прапори та події.
        Condition::Flag { local, .. } => unsupported(&format!(
            "{}flag (0x3d9/0x3d6): прапорів у Country немає (TODO: globaldata flags)",
            if *local { "local_" } else { "" }
        )),
        Condition::EventFired(_) => {
            unsupported("event (0x1f7): журналу подій у World немає (TODO)")
        }
        Condition::Random(chance) => {
            // Детермінована апроксимація (ориг. — глобальний RNG; TODO(RE)):
            // хеш від ігрової дати, щоб повторні оцінки того самого дня
            // давали той самий результат.
            let h = (world.date.day as u64)
                .wrapping_mul(6364136223846793005)
                ^ 0x9E37_79B9_7F4A_7C15;
            let r = ((h >> 33) as u64 % 1_000_000) as f64 / 1_000_000.0;
            r < *chance
        }
        Condition::Nuked(_) => unsupported("nuked (0x572): історії ядерних ударів немає (TODO)"),
        Condition::UnderAttack => unsupported("under_attack/attack (0x10/0x35): бойової системи немає (TODO)"),
        Condition::Personnel { .. } => unsupported(
            "лідери/міністри (0x12d/0x29e/0x2be/0x3e9/0x3f2): системи лідерів немає (TODO)",
        ),
        Condition::AllianceLeader(_) => {
            unsupported("alliance_leader (0x57e): лідер альянсу не змодельований (TODO)")
        }

        // Невідомий токен → завжди false + warn.
        Condition::Unknown { id } => {
            let name = tokens::name(*id).unwrap_or("<без назви>");
            log::warn!(
                "[triggers] оцінка невідомої умови 0x{id:04x} (`{name}`) = false \
                 (ориг.: \"ERROR! Unknown trigger type\")"
            );
            false
        }
    }
}

/// Індекс країни-адресата у `World::countries`.
fn target_idx(world: &World, target: &CommandTarget) -> Option<usize> {
    match target {
        CommandTarget::Country(tag) => world.tags.get(tag).copied(),
        // Провінційна подія: умови оцінюються для власника провінції.
        CommandTarget::Province(p) => world
            .provinces
            .iter()
            .find(|pr| pr.id == *p)
            .and_then(|pr| pr.owner),
    }
}

fn target_country<'w>(world: &'w World, target: &CommandTarget) -> Option<&'w Country> {
    target_idx(world, target).map(|i| &world.countries[i])
}

#[derive(Clone, Copy)]
enum ProvinceCheck {
    Owner,
    Controller,
}

/// `owns`/`controls`: чи збігається власник/контролер провінції з адресатом.
fn province_matches(
    world: &World,
    target: &CommandTarget,
    prov: ProvinceId,
    check: ProvinceCheck,
) -> bool {
    let Some(me) = target_idx(world, target) else {
        return false;
    };
    world.provinces.iter().any(|pr| {
        if pr.id != prov {
            return false;
        }
        match check {
            ProvinceCheck::Owner => pr.owner == Some(me),
            ProvinceCheck::Controller => pr.controller == Some(me),
        }
    })
}

/// Нереалізована/непідтверджена умова: false + warn (НЕ паніка).
fn unsupported(what: &str) -> bool {
    log::warn!("[triggers] умова не реалізована — оцінка false: {what}");
    false
}

/// Обгортка оцінки тригерів як методів [`World`].
///
/// `World::check_trigger` реалізовано окремим trait (а не в `world.rs`), щоб
/// не чіпати чужий файл: крейти-користувачі імпортують
/// `use dh_core::triggers::WorldTriggers;` і викликають
/// `world.check_trigger(&target, &trig)`.
pub trait WorldTriggers {
    fn check_trigger(&self, target: &CommandTarget, t: &Trigger) -> bool;
}

impl WorldTriggers for World {
    fn check_trigger(&self, target: &CommandTarget, t: &Trigger) -> bool {
        evaluate(self, target, t)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use dh_format::script::parse_str;
    use dh_format::ProvinceResources;
    use crate::world::ProvinceState;

    fn tag(s: &str) -> Tag {
        Tag(s.to_string())
    }

    fn ger() -> CommandTarget {
        CommandTarget::Country(tag("GER"))
    }

    fn sov() -> CommandTarget {
        CommandTarget::Country(tag("SOV"))
    }

    fn prov(id: u16, owner: Option<usize>, controller: Option<usize>) -> ProvinceState {
        ProvinceState {
            id,
            owner,
            controller,
            has_vp: false,
            vp: 0,
            infra: 0,
            resources: ProvinceResources::default(),
            occupied: false,
        }
    }

    /// Світ: Німеччина (0), СРСР (1), провінція 42 — нічия.
    fn ww() -> World {
        let mut w = World::new();
        w.add_country(Country::new(tag("GER"), "Німеччина"));
        w.add_country(Country::new(tag("SOV"), "СРСР"));
        w.provinces.push(prov(42, None, None));
        w
    }

    /// owned/control працюють через `ProvinceState::owner/controller`.
    #[test]
    fn owns_and_controls_follow_province_owner_controller() {
        let mut w = ww();
        // Німеччина володіє і контролює 42.
        w.provinces[0].owner = Some(0);
        w.provinces[0].controller = Some(0);

        let owns = Trigger::from_token(0x1ad, &Value::Number(42.0)).unwrap();
        let ctrl = Trigger::from_token(0x10b, &Value::Number(42.0)).unwrap();

        assert!(w.check_trigger(&ger(), &owns));
        assert!(!w.check_trigger(&sov(), &owns));
        assert!(w.check_trigger(&ger(), &ctrl));

        // Окупація: власник GER, контролер SOV.
        w.provinces[0].controller = Some(1);
        w.provinces[0].occupied = true;
        assert!(w.check_trigger(&sov(), &ctrl), "контролер — окупант");
        assert!(!w.check_trigger(&ger(), &ctrl), "власник не контролює окуповану");

        // Зміна власника: тепер СРСР володіє.
        w.provinces[0].owner = Some(1);
        w.provinces[0].controller = Some(1);
        w.provinces[0].occupied = false;
        assert!(!w.check_trigger(&ger(), &owns));
        assert!(w.check_trigger(&sov(), &owns));

        // Форма блоку: owned = { province = 42 }.
        let owns_block = Trigger::from_token(
            0x1ad,
            &Value::List(vec![("province".into(), Value::Number(42.0))]),
        )
        .unwrap();
        assert!(w.check_trigger(&sov(), &owns_block));

        // Провінційний адресат: умови оцінюються для власника провінції.
        assert!(w.check_trigger(&CommandTarget::Province(42), &owns));
        // Невідома провінція — false без паніки.
        assert!(!w.check_trigger(&CommandTarget::Province(9999), &owns));
    }

    /// at_war/war беруть дані з `Country::at_war`; `atwar = no` — негація.
    #[test]
    fn at_war_and_war_with_use_country_at_war() {
        let mut w = ww();
        let atwar = Trigger::from_token(0x138, &Value::Bool(true)).unwrap();
        let atwar_no = Trigger::from_token(0x138, &Value::Bool(false)).unwrap();
        assert!(!w.check_trigger(&ger(), &atwar));
        assert!(w.check_trigger(&ger(), &atwar_no), "atwar = no без воєн");

        assert!(w.declare_war(&tag("GER"), &tag("SOV")));
        assert!(w.check_trigger(&ger(), &atwar));
        assert!(w.check_trigger(&sov(), &atwar));
        assert!(!w.check_trigger(&ger(), &atwar_no));

        // war = { country = SOV } — війна з конкретним ворогом.
        let war = Trigger::from_token(
            0x137,
            &Value::List(vec![("country".into(), Value::String("SOV".into()))]),
        )
        .unwrap();
        assert!(w.check_trigger(&ger(), &war));
        assert!(!w.check_trigger(&ger(), &Trigger::from_token(0x137, &Value::String("USA".into())).unwrap()));

        // США у світі немає — WarWith(USA) не панікує.
        assert!(!w.check_trigger(&ger(), &Trigger::from_token(0x137, &Value::String("USA".into())).unwrap()));
    }

    /// Вкладені and/or/not зі справжнього скрипт-тексту (лексер dh-format).
    #[test]
    fn nested_and_or_not_from_script_text() {
        let mut w = ww();
        w.country_mut(&tag("GER")).unwrap().money = 100.0;
        w.country_mut(&tag("GER")).unwrap().manpower = 5.0;

        // and = { money = 100 manpower = 5 } (токен 0x3dd)
        let v = parse_str("and = { money = 100 manpower = 5 }").unwrap();
        let t = Trigger::from_token(0x3dd, v.get("and").unwrap()).unwrap();
        assert!(w.check_trigger(&ger(), &t));

        w.country_mut(&tag("GER")).unwrap().money = 99.0;
        assert!(!w.check_trigger(&ger(), &t), "одна умова AND не виконалась");

        // or = { money = 1e9 manpower = 5 } (токен 0x3de)
        let v = parse_str("or = { money = 1000000000 manpower = 5 }").unwrap();
        let t = Trigger::from_token(0x3de, v.get("or").unwrap()).unwrap();
        assert!(w.check_trigger(&ger(), &t));

        // not = { money = 1000 }: «грошей НЕ ≥ 1000» — при 99 — true (токен 0x3df).
        let v = parse_str("not = { money = 1000 }").unwrap();
        let t = Trigger::from_token(0x3df, v.get("not").unwrap()).unwrap();
        assert!(w.check_trigger(&ger(), &t));

        // not = { money = 99 }: 99 ≥ 99 — заперечення — false.
        let v = parse_str("not = { money = 99 }").unwrap();
        let t = Trigger::from_token(0x3df, v.get("not").unwrap()).unwrap();
        assert!(!w.check_trigger(&ger(), &t));

        // Condition::Not (ручне конструювання) теж працює.
        let t = Trigger {
            cond: Condition::Not(Box::new(Condition::MoneyGt(1000.0))),
            negated: false,
        };
        assert!(w.check_trigger(&ger(), &t));

        // Порожній trigger = завжди true (AND порожнього списку).
        let v = parse_str("trigger = { }").unwrap();
        let t = parse_trigger_block(v.get("trigger").unwrap()).unwrap();
        assert!(w.check_trigger(&ger(), &t));
    }

    /// relations: relation = { tag = X value = N } — «не нижче N».
    #[test]
    fn relation_trigger_uses_country_relations() {
        let mut w = ww();
        w.country_mut(&tag("GER")).unwrap().change_relation(&tag("SOV"), 50);

        let t = Trigger::from_token(
            0x135,
            &Value::List(vec![
                ("tag".into(), Value::String("SOV".into())),
                ("value".into(), Value::Number(40.0)),
            ]),
        )
        .unwrap();
        assert!(w.check_trigger(&ger(), &t));

        let too_high = Trigger::from_token(
            0x135,
            &Value::List(vec![
                ("tag".into(), Value::String("SOV".into())),
                ("value".into(), Value::Number(60.0)),
            ]),
        )
        .unwrap();
        assert!(!w.check_trigger(&ger(), &too_high));

        // Невідомий тег у relations = 0 (як відсутність запису).
        let usa = Trigger::from_token(
            0x135,
            &Value::List(vec![
                ("tag".into(), Value::String("USA".into())),
                ("value".into(), Value::Number(0.0)),
            ]),
        )
        .unwrap();
        assert!(w.check_trigger(&ger(), &usa)); // 0 >= 0
    }

    /// money/manpower/ic/tech — чесні порівняння з полів країни.
    #[test]
    fn economy_and_tech_triggers() {
        let mut w = ww();
        let c = w.country_mut(&tag("GER")).unwrap();
        c.money = 250.5;
        c.manpower = 12.0;
        c.ic = 40.0;
        c.techs.push(1230);

        let t = Trigger::from_token(0xf6, &Value::Number(250.0)).unwrap();
        assert!(w.check_trigger(&ger(), &t));
        let t = Trigger::from_token(0xf6, &Value::Number(251.0)).unwrap();
        assert!(!w.check_trigger(&ger(), &t));

        let t = Trigger::from_token(0x1b3, &Value::Number(12.0)).unwrap();
        assert!(w.check_trigger(&ger(), &t));
        let t = Trigger::from_token(0xe2, &Value::Number(40.0)).unwrap();
        assert!(w.check_trigger(&ger(), &t));

        let t = Trigger::from_token(0x1a, &Value::Number(1230.0)).unwrap();
        assert!(w.check_trigger(&ger(), &t));
        let t = Trigger::from_token(0x1a, &Value::Number(9999.0)).unwrap();
        assert!(!w.check_trigger(&ger(), &t));
        // technology (0x2bd) — той самий варіант HasTech.
        let t = Trigger::from_token(0x2bd, &Value::Number(1230.0)).unwrap();
        assert!(w.check_trigger(&ger(), &t));
    }

    /// Дати: рік/місяць/день з `World::date` (місяць — числом або назвою).
    #[test]
    fn date_triggers_use_world_date() {
        let w = ww(); // 1 січня 1936
        let y = Trigger::from_token(0xf9, &Value::Number(1936.0)).unwrap();
        assert!(w.check_trigger(&ger(), &y));
        let y2 = Trigger::from_token(0xf9, &Value::Number(1945.0)).unwrap();
        assert!(!w.check_trigger(&ger(), &y2));

        let m = Trigger::from_token(0xfa, &Value::String("january".into())).unwrap();
        assert!(w.check_trigger(&ger(), &m));
        let m2 = Trigger::from_token(0xfa, &Value::Number(2.0)).unwrap();
        assert!(!w.check_trigger(&ger(), &m2));

        let d = Trigger::from_token(0xfb, &Value::Number(1.0)).unwrap();
        assert!(w.check_trigger(&ger(), &d));
    }

    /// exists / country / ai / альянси — чесні перевірки по світу.
    #[test]
    fn identity_alliance_triggers() {
        let mut w = ww();
        let exists = Trigger::from_token(0x1af, &Value::String("SOV".into())).unwrap();
        assert!(w.check_trigger(&ger(), &exists));
        let nope = Trigger::from_token(0x1af, &Value::String("USA".into())).unwrap();
        assert!(!w.check_trigger(&ger(), &nope));

        let tagger = Trigger::from_token(0xec, &Value::String("GER".into())).unwrap();
        assert!(w.check_trigger(&ger(), &tagger));
        assert!(!w.check_trigger(&sov(), &tagger));

        let ai = Trigger::from_token(0x1f9, &Value::Bool(true)).unwrap();
        assert!(w.check_trigger(&ger(), &ai), "Country::new — ai_enabled=true");
        w.country_mut(&tag("GER")).unwrap().ai_enabled = false;
        assert!(!w.check_trigger(&ger(), &ai));

        // alliance = { country = SOV }: обидві в одному альянсі.
        w.create_alliance("Ось", vec![0, 1]);
        let all = Trigger::from_token(
            0x13c,
            &Value::List(vec![("country".into(), Value::String("SOV".into()))]),
        )
        .unwrap();
        assert!(w.check_trigger(&ger(), &all));
        let usa = Trigger::from_token(0x13c, &Value::String("USA".into())).unwrap();
        assert!(!w.check_trigger(&ger(), &usa));

        // allies = yes: альянс з ім'ям фракції.
        let mut w2 = World::new();
        w2.add_country(Country::new(tag("GER"), "Німеччина"));
        w2.add_country(Country::new(tag("ITA"), "Італія"));
        w2.create_alliance("Axis", vec![0, 1]);
        let axis = Trigger::from_token(0x22f, &Value::Bool(true)).unwrap();
        assert!(w2.check_trigger(&CommandTarget::Country(tag("GER")), &axis));
        assert!(!w2.check_trigger(&CommandTarget::Country(tag("USA")), &axis));
    }

    /// Умови на провінцію поза картою, невідомі токени й помилки аргументів
    /// не панікують: невідомі → false + warn.
    #[test]
    fn unknown_conditions_are_false_with_warn_not_panic() {
        let w = ww();

        // Токен, якого немає в реєстрі 1669 слів.
        let t = Trigger::from_token(0x7fff, &Value::None).unwrap();
        assert!(matches!(t.cond, Condition::Unknown { id: 0x7fff }));
        assert!(!w.check_trigger(&ger(), &t));

        // Відомий реєстру токен, але не умова парсера (напр. 0x38b nuke) —
        // теж Unknown через default-гілку.
        let t = Trigger::from_token(0x38b, &Value::Number(1.0)).unwrap();
        assert!(!w.check_trigger(&ger(), &t));

        // Помилковий аргумент відомої умови — Err, а не паніка.
        assert!(Trigger::from_token(0xf6, &Value::String("багато".into())).is_err());

        // Блок з «битою» умовою: розбір не валить усе, бита — Unknown.
        let v = parse_str("trigger = { bogus_xyz = 1 money = 100 }").unwrap();
        let t = parse_trigger_block(v.get("trigger").unwrap()).unwrap();
        let Condition::And(list) = &t.cond else {
            panic!("очікувався And верхнього рівня");
        };
        assert_eq!(list.len(), 2);
        assert!(matches!(list[0], Condition::Unknown { .. }));
        assert!(matches!(list[1], Condition::MoneyGt(100.0)));

        // Оцінка: Unknown у AND чесно дає false (не паніка, без виключень).
        let mut w2 = ww();
        w2.country_mut(&tag("GER")).unwrap().money = 100.0;
        assert!(!w2.check_trigger(&ger(), &t));

        // АЛЕ в OR «бита» умова не валить усе: or = { bogus money = 100 } → true.
        let v = parse_str("or = { bogus_xyz = 1 money = 100 }").unwrap();
        let t = Trigger::from_token(0x3de, v.get("or").unwrap()).unwrap();
        assert!(w2.check_trigger(&ger(), &t));
    }

    /// participant (0x195): спільна війна через спільного ворога.
    /// major = no / ai = no — негація через `negated`.
    #[test]
    fn participant_and_bool_negation() {
        let mut w = ww();
        w.add_country(Country::new(tag("USA"), "США"));
        w.declare_war(&tag("GER"), &tag("SOV"));
        w.declare_war(&tag("USA"), &tag("SOV"));

        let part = Trigger::from_token(
            0x195,
            &Value::List(vec![("country".into(), Value::String("USA".into()))]),
        )
        .unwrap();
        // GER і USA воюють зі спільним ворогом SOV.
        assert!(w.check_trigger(&ger(), &part));

        // negated: atwar = no після війни — false (перевірено вище), major = no —
        // «не мажор». IsMajor нереалізована → false, тож negated дає true.
        let major_no = Trigger::from_token(0x110, &Value::Bool(false)).unwrap();
        assert!(w.check_trigger(&ger(), &major_no));
        let major_yes = Trigger::from_token(0x110, &Value::Bool(true)).unwrap();
        assert!(!w.check_trigger(&ger(), &major_yes));
    }

    /// Верхній рівень trigger-блоку — AND умов; decision_trigger (0x57b)
    /// розбирається тим самим шляхом (той самий парсер, RE-scripts.md §4).
    #[test]
    fn trigger_block_is_conjunction() {
        let mut w = ww();
        w.country_mut(&tag("GER")).unwrap().money = 10.0;
        w.country_mut(&tag("GER")).unwrap().manpower = 1.0;

        let v = parse_str("trigger = { money = 10 manpower = 1 }").unwrap();
        let t = parse_trigger_block(v.get("trigger").unwrap()).unwrap();
        assert!(w.check_trigger(&ger(), &t));

        w.country_mut(&tag("GER")).unwrap().manpower = 0.5;
        assert!(!w.check_trigger(&ger(), &t), "кон'юнкція: одна умова не виконалась");
    }
}
