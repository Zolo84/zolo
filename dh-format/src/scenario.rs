//! Сценарії .eug — ОДИН завантажувач на весь workspace (А4 з PLAN.md).
//!
//! Джерело істини — `dh_data::Scenario::load` (парсер dh-text + VFS з шарами
//! мода/бази, регістронезалежні шляхи, толерантність до битих файлів). Цей
//! модуль конвертує їхнє сплісене дерево (`dh_text::Block`) у нашу структуру
//! `Scenario`, яку їдять `dh_core::world::build_world`, рендер і приклади.
//! Колишній власний міні-токенайзер видалено — дубль парсера більше не існує.
//!
//! Дати: у файлах сценаріїв день і числовий місяць НУЛЬ-БАЗОВІ (HoI2-спадок;
//! dh_data::GameDate::from_block). Еталон: оригінальна гра на старті 1933
//! показує «0:00 March 4, 1933» при `startdate = { year = 1933 month = march
//! day = 3 }` (скрін re/wine-1933-poland-ingame.png). Конвертація в наш
//! 360-денний календар (RE-tick.md §3: рік=360, місяць=30) — `date_from_data`.
//!
//! Стартова дата гри — `globaldata.startdate`, `header.startdate` — лише для
//! меню (RE-eug-format.md §2); фолбек 1.1.1936 — `game_start`.

use std::path::Path;

use anyhow::{Context, Result};

use crate::{GameDate, ObjId, ProvinceId, Tag};

// ---------------------------------------------------------------------------
// Структури
// ---------------------------------------------------------------------------

/// Сценарій .eug — «скелет» гри: зміст + include-посилання на дані країн.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Scenario {
    /// name = "..." — назва сценарію (у сейвах тут версія гри).
    pub name: String,
    /// panel = "..." — картинка меню.
    pub panel: Option<String>,
    pub header: ScenarioHeader,
    pub globaldata: GlobalData,
    /// Country-блоки в порядку появи: прямі з .eug + з include-файлів.
    pub countries: Vec<CountryBlock>,
    /// Province-блоки з include-файлів (vp.inc / bases.inc / depots.inc).
    pub provinces: Vec<ProvinceBlock>,
    /// include = "..." — шляхи в порядку появи (як записані у файлах, з урахуванням вкладених include).
    pub includes: Vec<String>,
    /// event = "..." — підключення event-файлів (НЕ include; не парсяться тут).
    pub events: Vec<String>,
    /// Інші легальні top-level пари (history/sleepevent/save_date/map) сирим текстом.
    pub raw_top_level: Vec<(String, String)>,
}

/// header = { ... }: дата старту для меню, ігрові країни, картинки вибору.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct ScenarioHeader {
    pub startdate: Option<GameDate>,
    /// selectable = { TAG ... } — країни, за які можна грати.
    pub selectable: Vec<Tag>,
    /// TAG = { picture = "..." } — картинки пропаганди при виборі країни.
    pub country_pics: Vec<(Tag, String)>,
    /// Усі пари header сирим текстом (startyear/endyear/free/combat/tutorial, TAG-блоки...).
    pub body: Vec<(String, String)>,
}

/// globaldata = { ... }: стартовий стан світу.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct GlobalData {
    pub startdate: Option<GameDate>,
    /// Блоки axis/allies/comintern/alliance.
    pub alliances: Vec<Alliance>,
    /// Усі інші пари globaldata сирим текстом
    /// (enddate, war, treaty, queued_events, flags, rules, dormant_*, ...).
    pub body: Vec<(String, String)>,
}

/// Альянс/блок у globaldata: id = { type = 15000 id = N } + participant = { TAG ... }.
#[derive(Debug, Clone, PartialEq)]
pub struct Alliance {
    /// Як у файлі: "axis" | "allies" | "comintern" | "alliance".
    pub kind: String,
    pub id: ObjId,
    pub name: Option<String>,
    pub participants: Vec<Tag>,
}

/// country = { tag = XXX ... } — початковий стан однієї країни (з .inc або .eug).
#[derive(Debug, Clone, PartialEq)]
pub struct CountryBlock {
    pub tag: Tag,
    /// Усі пари блоку, крім першого `tag = ...`, сирим текстом
    /// (capital/id теж лишаються тут — «не губимо інформацію»).
    pub body: Vec<(String, String)>,
    pub capital: Option<ProvinceId>,
    /// Перший top-level `id = { type = N id = N }` блоку, якщо є
    /// (у сценаріях зазвичай відсутній; є в сейвах).
    pub id: Option<ObjId>,
    /// Звідки блок: include-файл (None = прямо з .eug). Після сплісу include
    /// джерело блоку більше не відстежується — завжди None.
    pub source: Option<std::path::PathBuf>,
}

/// province = { id = N ... } — початковий стан провінції (vp/bases/depots inc).
#[derive(Debug, Clone, PartialEq)]
pub struct ProvinceBlock {
    pub id: ProvinceId,
    /// Усі пари блоку, крім першого `id = N`, сирим текстом.
    pub body: Vec<(String, String)>,
    pub source: Option<std::path::PathBuf>,
}

// ---------------------------------------------------------------------------
// Конвертація dh_data::Scenario (сплісений dh_text::Block) → наш Scenario
// ---------------------------------------------------------------------------

/// «Сирий текст» значення — структурно, одним рядком (пробіли/коментарі
/// нормалізуються), як у колишньому value_to_text: `{ k = v список }`.
fn value_text(v: &dh_text::Value) -> String {
    match v {
        dh_text::Value::Scalar(s) => s.text.clone(),
        dh_text::Value::Block(bl) => {
            let mut out = String::from("{ ");
            for it in bl.items.iter() {
                match it {
                    dh_text::Item::Value(v) => {
                        out.push_str(&value_text(v));
                        out.push(' ');
                    }
                    dh_text::Item::Field(f) => {
                        out.push_str(&f.key);
                        out.push_str(" = ");
                        out.push_str(&value_text(&f.value));
                        out.push(' ');
                    }
                }
            }
            out.push('}');
            out
        }
    }
}

/// id = { type = N id = N } -> ObjId (None, якщо полів нема).
fn parse_objid(b: &dh_text::Block) -> Option<ObjId> {
    Some(ObjId {
        kind: b.get_i64("type")?.clamp(0, u16::MAX as i64) as u16,
        id: u32::try_from(b.get_i64("id")?).ok()?,
    })
}

/// Дата з блоку сценарію → наш 360-денний календар.
///
/// Парсить dh_data::GameDate::from_block (день/числовий місяць нуль-базовані,
/// назви місяців — як у грі), далі в нашу епоху (1.1.1900 = день 0).
/// Григоріанський день >30 «переливається» в наступний місяць 360-денного
/// календаря (31 січня → 1 лютого) — календарі зійдуться окремим пунктом.
pub fn date_from_data(d: dh_data::GameDate) -> GameDate {
    GameDate::from_ymd(d.year, d.month as i32, d.day as i32)
}

fn date_of_block(b: &dh_text::Block) -> Option<GameDate> {
    dh_data::GameDate::from_block(b).map(date_from_data)
}

/// Чи виглядає ключ як тег країни (GER/U02...), а не службове поле header.
fn is_tag_key(k: &str) -> bool {
    const RESERVED: &[&str] = &[
        "name",
        "startdate",
        "startyear",
        "endyear",
        "selectable",
        "free",
        "combat",
        "tutorial",
        "tutorialfile",
    ];
    if k.len() < 2 || k.len() > 4 || RESERVED.contains(&k.to_ascii_lowercase().as_str()) {
        return false;
    }
    let mut it = k.chars();
    match it.next() {
        Some(c) if c.is_ascii_uppercase() => it.all(|c| c.is_ascii_alphanumeric()),
        _ => false,
    }
}

fn parse_header(b: &dh_text::Block) -> ScenarioHeader {
    let mut h = ScenarioHeader::default();
    for f in b.fields() {
        match f.key.to_ascii_lowercase().as_str() {
            "startdate" => h.startdate = f.value.as_block().and_then(date_of_block),
            "selectable" => {
                if let Some(bl) = f.value.as_block() {
                    for v in bl.values() {
                        if let Some(s) = v.as_scalar() {
                            h.selectable.push(Tag(s.text.clone()));
                        }
                    }
                }
            }
            _ => {
                // TAG = { picture = "..." ... } — блок вибору країни.
                if is_tag_key(&f.key) {
                    if let Some(bl) = f.value.as_block() {
                        for f2 in bl.fields() {
                            if f2.key.eq_ignore_ascii_case("picture") {
                                if let Some(s) = f2.value.as_scalar() {
                                    h.country_pics.push((Tag(f.key.clone()), s.text.clone()));
                                }
                            }
                        }
                    }
                }
                h.body.push((f.key.clone(), value_text(&f.value)));
            }
        }
    }
    h
}

fn parse_globaldata(b: &dh_text::Block) -> GlobalData {
    let mut gd = GlobalData::default();
    for f in b.fields() {
        match f.key.to_ascii_lowercase().as_str() {
            "startdate" => gd.startdate = f.value.as_block().and_then(date_of_block),
            "axis" | "allies" | "comintern" | "alliance" => {
                if let Some(bl) = f.value.as_block() {
                    match parse_alliance(&f.key, bl) {
                        Some(a) => gd.alliances.push(a),
                        None => log::warn!(
                            "globaldata: альянс «{}» без id = {{...}} — пропущено",
                            f.key
                        ),
                    }
                }
            }
            _ => gd.body.push((f.key.clone(), value_text(&f.value))),
        }
    }
    gd
}

/// alliance-блок: { id = { type = N id = N } participant = { TAG ... } [name = "..."] }.
fn parse_alliance(kind: &str, b: &dh_text::Block) -> Option<Alliance> {
    let mut id = None;
    let mut name = None;
    let mut participants = Vec::new();
    for f in b.fields() {
        match f.key.to_ascii_lowercase().as_str() {
            "id" => id = f.value.as_block().and_then(parse_objid),
            "name" => name = f.value.as_scalar().map(|s| s.text.clone()),
            "participant" => {
                if let Some(bl) = f.value.as_block() {
                    for v in bl.values() {
                        if let Some(s) = v.as_scalar() {
                            participants.push(Tag(s.text.clone()));
                        }
                    }
                }
            }
            _ => {}
        }
    }
    Some(Alliance {
        kind: kind.to_string(),
        id: id?,
        name,
        participants,
    })
}

/// country = { ... }; None — якщо значення не блок або без tag (з попередженням).
fn parse_country_block(b: &dh_text::Block, ctx: &str) -> Option<CountryBlock> {
    // RE: «tag HAS to be first in country» — але після сплісу толеруємо
    // tag у будь-якій позиції (гра б відкинула блок; ми — попереджаємо).
    let tag_field = b.fields().find(|f| f.key.eq_ignore_ascii_case("tag"))?;
    let tag = Tag(tag_field.value.as_scalar()?.text.clone());
    let mut body = Vec::new();
    let mut capital = None;
    let mut id = None;
    for f in b.fields() {
        if f.key.eq_ignore_ascii_case("tag") {
            continue;
        }
        match f.key.to_ascii_lowercase().as_str() {
            "capital" => {
                capital = f
                    .value
                    .as_scalar()
                    .and_then(|s| s.as_i64())
                    .and_then(|c| u16::try_from(c).ok());
            }
            "id" => {
                if id.is_none() {
                    id = f.value.as_block().and_then(parse_objid);
                }
            }
            _ => {}
        }
        body.push((f.key.clone(), value_text(&f.value)));
    }
    let _ = ctx;
    Some(CountryBlock {
        tag,
        body,
        capital,
        id,
        source: None,
    })
}

/// province = { ... }; None — якщо значення не блок або id не число.
fn parse_province_block(b: &dh_text::Block, ctx: &str) -> Option<ProvinceBlock> {
    // RE: «id HAS to be first in province» — позицію толеруємо, значення ні.
    let id_field = b.fields().find(|f| f.key.eq_ignore_ascii_case("id"))?;
    let id: ProvinceId = match id_field
        .value
        .as_scalar()
        .and_then(|s| s.as_i64())
        .and_then(|i| u16::try_from(i).ok())
    {
        Some(id) => id,
        None => {
            log::warn!("{ctx}: province з невірним id — блок пропущено");
            return None;
        }
    };
    let mut body = Vec::new();
    for f in b.fields() {
        if !f.key.eq_ignore_ascii_case("id") {
            body.push((f.key.clone(), value_text(&f.value)));
        }
    }
    Some(ProvinceBlock {
        id,
        body,
        source: None,
    })
}

/// Конвертує сплісений сценарій dh-data в нашу структуру.
///
/// Порядок country/province-блоків — порядок появи в сплісеному дереві
/// (include-и інлайняться на своїх позиціях, як і в колишньому парсері).
/// Парси name/panel/header/globaldata «останній перемагає» — у реальних
/// файлах ці блоки бувають лише один раз, у .eug (include-и їх не містять).
pub fn from_data(data: &dh_data::Scenario) -> Result<Scenario> {
    let mut sc = Scenario {
        includes: data.includes.clone(),
        ..Scenario::default()
    };
    for item in &data.root.items {
        let dh_text::Item::Field(f) = item else {
            continue; // голі значення на top-level — ігнор
        };
        match f.key.to_ascii_lowercase().as_str() {
            "name" => {
                sc.name = f
                    .value
                    .as_scalar()
                    .map(|s| s.text.clone())
                    .unwrap_or_default()
            }
            "panel" => sc.panel = f.value.as_scalar().map(|s| s.text.clone()),
            "header" => {
                if let Some(bl) = f.value.as_block() {
                    sc.header = parse_header(bl);
                }
            }
            "globaldata" => {
                if let Some(bl) = f.value.as_block() {
                    sc.globaldata = parse_globaldata(bl);
                }
            }
            "include" => {} // уже зібрані в data.includes
            "event" => {
                if let Some(s) = f.value.as_scalar() {
                    sc.events.push(s.text.clone());
                }
            }
            "country" => {
                let ctx = format!("{}: country", data.info.path);
                if let Some(bl) = f.value.as_block() {
                    match parse_country_block(bl, &ctx) {
                        Some(cb) => sc.countries.push(cb),
                        None => log::warn!("{ctx}: без tag — блок пропущено"),
                    }
                }
            }
            "province" => {
                let ctx = format!("{}: province", data.info.path);
                if let Some(bl) = f.value.as_block() {
                    if let Some(pb) = parse_province_block(bl, &ctx) {
                        sc.provinces.push(pb);
                    }
                }
            }
            "history" | "sleepevent" | "save_date" | "map" => {
                sc.raw_top_level.push((f.key.clone(), value_text(&f.value)));
            }
            // Гра на невідомому top-level падає («Illegal top level object»);
            // ми толеруємо з попередженням — моди з домішками лишаються читабельні.
            other => log::warn!(
                "{}: невідомий top-level об'єкт «{other}» (пропущено)",
                data.info.path
            ),
        }
    }
    Ok(sc)
}

// ---------------------------------------------------------------------------
// Завантаження (джерело істини — dh_data::Scenario::load через VFS)
// ---------------------------------------------------------------------------

/// Завантажує dh_data::Scenario через VFS (єдиний парсер у workspace).
pub fn load_data(
    vfs: &dh_data::Vfs,
    path: &str,
    warnings: &mut Vec<dh_data::Warning>,
) -> std::io::Result<dh_data::Scenario> {
    dh_data::Scenario::load(vfs, path, warnings)
}

/// Завантажує сценарій через VFS і конвертує в нашу структуру.
pub fn load_vfs(
    vfs: &dh_data::Vfs,
    path: &str,
    warnings: &mut Vec<dh_data::Warning>,
) -> Result<Scenario> {
    let data = load_data(vfs, path, warnings)
        .with_context(|| format!("{path}: завантаження сценарію через VFS"))?;
    from_data(&data)
}

/// Завантажує сценарій з встановленої гри (VFS з шаром мода зі settings.cfg).
/// Попередження парсера — в лог (перші 5).
pub fn load_from_install(root: &Path, scenario: &str) -> Result<Scenario> {
    let vfs = dh_data::open_install(root);
    let mut warnings = Vec::new();
    let sc = load_vfs(&vfs, &format!("scenarios/{scenario}.eug"), &mut warnings)?;
    for w in warnings.iter().take(5) {
        log::warn!("сценарій: {w}");
    }
    if warnings.len() > 5 {
        log::debug!("сценарій: попереджень усього: {}", warnings.len());
    }
    Ok(sc)
}

/// Стартова дата гри: `globaldata.startdate` перемагає `header.startdate`
/// (головний — для меню); фолбек 1.1.1936. Та сама логіка, що й у dh-sim.
pub fn game_start(sc: &Scenario) -> GameDate {
    sc.globaldata
        .startdate
        .or(sc.header.startdate)
        .unwrap_or_else(|| GameDate::from_ymd(1936, 1, 1))
}

// ---------------------------------------------------------------------------
// Тести
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;
    use std::fs;

    const SYNTHETIC: &str = r#"
# test scenario
name = "SYNTH_SCENARIO"
panel = "scenarios/data/x.bmp"
header =
{ startdate  = { year = 1933 }
  selectable = { AFG GER U02 }
  GER        = { picture = "scenarios\data\propaganda_GER.bmp" flag_ext = _weimar }
  startyear = 1933
}
globaldata =
{ startdate = { year = 1933 month = march day = 3 }
  axis   = { id = { type = 15000 id = 2 } participant = { GER } name = "axis" }
  allies = { id = { type = 15000 id = 1 } participant = { ENG FRA } }
  war    = { id = { type = 9430 id = 7 } date = { year = 1933 } }
  flags  = { anti_comintern_pact = 1 }
}
country =
{ tag = GER
  capital = 163
  manpower = 34
  landunit = { id = { type = 10400 id = 1 } location = 163 }
}
province = { id = 825 air_base = { size = 2 } }
history = { 2400014 2400022 }
event = "db\events.txt"
include = "scenarios/1933/pol.inc"
"#;

    /// Синтетичний сценарій у тимчасовій «грі» (VFS), як у тесті dh-data.
    fn synthetic_install() -> (dh_data::Vfs, dh_data::Scenario) {
        let dir = std::env::temp_dir().join(format!("dh-fmt-scn-{}", std::process::id()));
        let _ = fs::remove_dir_all(&dir);
        fs::create_dir_all(dir.join("scenarios/1933")).unwrap();
        fs::write(dir.join("scenarios/1933.eug"), SYNTHETIC).unwrap();
        fs::write(
            dir.join("scenarios/1933/pol.inc"),
            "country = { tag = POL capital = 138 ownedprovinces = { 1 2 3 } \
             controlledprovinces = { 1 2 } }\n\
             province = { id = 64 points = 5 }\n",
        )
        .unwrap();
        let vfs = dh_data::open_install(&dir);
        let mut warnings = Vec::new();
        let data = load_data(&vfs, "scenarios/1933.eug", &mut warnings).unwrap();
        (vfs, data)
    }

    #[test]
    fn converts_synthetic_scenario() {
        let (_vfs, data) = synthetic_install();
        assert_eq!(data.info.start, Some(dh_data::GameDate::new(1933, 1, 1)));
        let sc = from_data(&data).unwrap();

        assert_eq!(sc.name, "SYNTH_SCENARIO");
        assert_eq!(sc.panel.as_deref(), Some("scenarios/data/x.bmp"));
        assert_eq!(
            sc.header.selectable,
            vec![Tag("AFG".into()), Tag("GER".into()), Tag("U02".into())]
        );
        assert_eq!(
            sc.header.country_pics,
            vec![(
                Tag("GER".into()),
                "scenarios\\data\\propaganda_GER.bmp".into()
            )]
        );
        assert!(sc.header.body.iter().any(|(k, _)| k == "startyear"));
        assert_eq!(sc.globaldata.alliances.len(), 2);
        let axis = &sc.globaldata.alliances[0];
        assert_eq!(axis.kind, "axis");
        assert_eq!(axis.id, ObjId { kind: 15000, id: 2 });
        assert_eq!(axis.participants, vec![Tag("GER".into())]);
        assert_eq!(axis.name.as_deref(), Some("axis"));
        assert!(sc
            .globaldata
            .body
            .iter()
            .any(|(k, v)| k == "war" && v.starts_with("{ ")));
        assert_eq!(sc.countries.len(), 2);
        let ger = &sc.countries[0];
        assert_eq!(ger.tag, Tag("GER".into()));
        assert_eq!(ger.capital, Some(163));
        // id всередині landunit — не top-level пара країни, тож id країни = None
        assert_eq!(ger.id, None);
        assert!(ger.body.iter().any(|(k, _)| k == "landunit"));
        assert!(ger.body.iter().any(|(k, _)| k == "capital"));
        assert_eq!(ger.source, None);
        // Країна з include-файлу: список провінцій серіалізується для build_world.
        let pol = &sc.countries[1];
        assert_eq!(pol.tag, Tag("POL".into()));
        assert_eq!(pol.capital, Some(138));
        assert!(pol
            .body
            .iter()
            .any(|(k, v)| k == "ownedprovinces" && v == "{ 1 2 3 }"));
        assert!(pol
            .body
            .iter()
            .any(|(k, v)| k == "controlledprovinces" && v == "{ 1 2 }"));
        assert_eq!(sc.provinces.len(), 2);
        assert_eq!(sc.provinces[0].id, 825);
        assert!(sc.provinces[0].body.iter().any(|(k, _)| k == "air_base"));
        assert!(sc.provinces[1]
            .body
            .iter()
            .any(|(k, v)| k == "points" && v == "5"));
        assert_eq!(sc.events, vec!["db\\events.txt".to_string()]);
        assert!(sc
            .raw_top_level
            .iter()
            .any(|(k, v)| k == "history" && v.contains("2400014")));
        assert_eq!(sc.includes, vec!["scenarios/1933/pol.inc".to_string()]);
    }

    /// Стартова дата: globaldata перемагає header; день нуль-базований
    /// (еталон — оригінал показує «March 4, 1933» при `day = 3`).
    #[test]
    fn game_start_is_globaldata_with_zero_based_day() {
        let (_vfs, data) = synthetic_install();
        let sc = from_data(&data).unwrap();
        assert_eq!(sc.header.startdate, Some(GameDate::from_ymd(1933, 1, 1)));
        assert_eq!(
            sc.globaldata.startdate,
            Some(GameDate::from_ymd(1933, 3, 4))
        );
        assert_eq!(game_start(&sc).display(), "March 4 1933");
        assert_eq!(
            date_from_data(dh_data::GameDate::new(1933, 3, 4)).display(),
            "March 4 1933"
        );
    }

    #[test]
    fn unknown_top_level_key_is_tolerated() {
        // Гра падає («Illegal top level object»); наш єдиний завантажувач
        // толерує з попередженням (мод-сумісність).
        let dir = std::env::temp_dir().join(format!("dh-fmt-unk-{}", std::process::id()));
        let _ = fs::remove_dir_all(&dir);
        fs::create_dir_all(dir.join("scenarios")).unwrap();
        fs::write(
            dir.join("scenarios/t.eug"),
            "name = \"x\"\nfoo = { 1 }\ncountry = { tag = GER capital = 163 }\n",
        )
        .unwrap();
        let vfs = dh_data::open_install(&dir);
        let mut warnings = Vec::new();
        let sc = load_vfs(&vfs, "scenarios/t.eug", &mut warnings).unwrap();
        assert_eq!(sc.countries.len(), 1);
        assert_eq!(sc.countries[0].capital, Some(163));
        assert!(sc.name == "x");
        fs::remove_dir_all(dir).unwrap();
    }

    #[test]
    fn country_without_tag_is_skipped() {
        let dir = std::env::temp_dir().join(format!("dh-fmt-notag-{}", std::process::id()));
        let _ = fs::remove_dir_all(&dir);
        fs::create_dir_all(dir.join("scenarios")).unwrap();
        fs::write(
            dir.join("scenarios/t.eug"),
            "country = { capital = 1 }\ncountry = { tag = GER capital = 163 }\n",
        )
        .unwrap();
        let vfs = dh_data::open_install(&dir);
        let mut warnings = Vec::new();
        let sc = load_vfs(&vfs, "scenarios/t.eug", &mut warnings).unwrap();
        assert_eq!(sc.countries.len(), 1);
        assert_eq!(sc.countries[0].tag, Tag("GER".into()));
        fs::remove_dir_all(dir).unwrap();
    }

    /// Реальний 1939.09/germany.inc закінчується без закриваючої '}' —
    /// гра це терпить; dh-text теж (помилка парсера → warning).
    #[test]
    fn unclosed_trailing_block_is_tolerated() {
        let dir = std::env::temp_dir().join(format!("dh-fmt-eof-{}", std::process::id()));
        let _ = fs::remove_dir_all(&dir);
        fs::create_dir_all(dir.join("scenarios")).unwrap();
        fs::write(
            dir.join("scenarios/t.eug"),
            "name = \"x\"\ncountry = { tag = GER capital = 163 ",
        )
        .unwrap();
        let vfs = dh_data::open_install(&dir);
        let mut warnings = Vec::new();
        let sc = load_vfs(&vfs, "scenarios/t.eug", &mut warnings).unwrap();
        assert_eq!(sc.countries.len(), 1);
        assert_eq!(sc.countries[0].capital, Some(163));
        fs::remove_dir_all(dir).unwrap();
    }

    /// Реальний сценарій 1933.eug: потребує встановленої гри через Steam.
    #[test]
    #[ignore = "потребує реальних файлів гри (Steam)"]
    fn loads_real_1933() -> anyhow::Result<()> {
        let paths = crate::GamePaths::from_steam()?;
        let sc = load_from_install(&paths.root, "1933")?;
        assert_eq!(sc.name, "1933_SCENARIO", "name");
        assert_eq!(game_start(&sc).display(), "March 4 1933", "старт гри");
        assert!(sc.globaldata.alliances.len() >= 3, "alliances");
        assert!(sc
            .globaldata
            .alliances
            .iter()
            .any(|a| !a.participants.is_empty()));
        assert!(sc.countries.len() > 30, "countries: {}", sc.countries.len());
        assert!(!sc.includes.is_empty(), "includes");
        assert!(!sc.events.is_empty(), "events");
        // Контроль синтезованогоvp-блоку: points з vp.inc читаються.
        let with_vp = sc
            .provinces
            .iter()
            .filter(|p| p.body.iter().any(|(k, _)| k.eq_ignore_ascii_case("points")));
        assert!(with_vp.count() > 100, "vp-блоки з vp.inc");
        eprintln!(
            "1933: includes={} events={} countries={} provinces={} alliances={} selectable={}",
            sc.includes.len(),
            sc.events.len(),
            sc.countries.len(),
            sc.provinces.len(),
            sc.globaldata.alliances.len(),
            sc.header.selectable.len(),
        );
        Ok(())
    }
}
