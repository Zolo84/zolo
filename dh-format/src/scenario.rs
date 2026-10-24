//! Парсер сценаріїв .eug: name/panel/header/globaldata/country/province/include.
//! RE: re/RE-eug-format.md — повне дерево формату.
//!
//! Синтаксис: `ключ = значення` з вкладеними блоками `{ }`, рядки в лапках,
//! коментарі `#`. Ключові слова — регістронезалежні. Набір top-level об'єктів
//! сценарію обмежений; невідомий → помилка "Illegal top level object".
//!
//! `include = "..."` інлайниться: файл шукається відносно папки сценарію, а якщо
//! не знайдено — відносно її батька (у реальних файлах шляхи відносні кореня
//! мода: `scenarios\1933\vp.inc` або `scenarios/BS_1939.09/vp.inc`). З
//! include-файлів беруться лише country/province-блоки (і вкладені include);
//! решта (event-списки на кшталт `db\events.txt` тощо) пропускається без
//! побудови дерева.
//!
//! Не закритий на кінці файлу блок не є помилкою — гра теж зупиняє парсинг на
//! EOF (реальний 1939.09/germany.inc закінчується без закриваючої `}`);
//! видається лише warning.
//!
//! TODO: коли буде готовий `script::parse_file` (лексер 1669 токенів) —
//! перейти на нього; тут власний міні-токенайзер, щоб не залежати від script.rs.

use std::path::{Path, PathBuf};

use anyhow::{bail, Context, Result};

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
    /// Звідки блок: include-файл (None = прямо з .eug).
    pub source: Option<PathBuf>,
}

/// province = { id = N ... } — початковий стан провінції (vp/bases/depots inc).
#[derive(Debug, Clone, PartialEq)]
pub struct ProvinceBlock {
    pub id: ProvinceId,
    /// Усі пари блоку, крім першого `id = N`, сирим текстом.
    pub body: Vec<(String, String)>,
    pub source: Option<PathBuf>,
}

// ---------------------------------------------------------------------------
// Міні-токенайзер
// ---------------------------------------------------------------------------

#[derive(Debug, Clone, PartialEq)]
enum TokKind {
    /// Голе слово/число (значення без лапок, ключі).
    Word(String),
    /// Рядок у лапках (вміст сирий, без обробки escape-послідовностей).
    Str(String),
    Eq,
    LBrace,
    RBrace,
}

#[derive(Debug, Clone, PartialEq)]
struct Tok {
    kind: TokKind,
    line: u32,
}

/// Розбиває текст на токени: коментарі `#` викидаються (крім тих, що в лапках),
/// пробіли/таби/`\r`/`\n` — розділювачі; ключі і значення можуть переноситись
/// на нові рядки.
fn tokenize(text: &str) -> Result<Vec<Tok>> {
    let mut toks = Vec::new();
    let mut chars = text.chars().peekable();
    let mut line: u32 = 1;
    if chars.peek() == Some(&'\u{feff}') {
        chars.next(); // BOM
    }
    while let Some(c) = chars.next() {
        match c {
            '#' => {
                while let Some(&c2) = chars.peek() {
                    if c2 == '\n' || c2 == '\r' {
                        break;
                    }
                    chars.next();
                }
            }
            '\n' => line += 1,
            c if c.is_whitespace() => {}
            '{' => toks.push(Tok {
                kind: TokKind::LBrace,
                line,
            }),
            '}' => toks.push(Tok {
                kind: TokKind::RBrace,
                line,
            }),
            '=' => toks.push(Tok {
                kind: TokKind::Eq,
                line,
            }),
            '"' => {
                let mut s = String::new();
                loop {
                    match chars.next() {
                        Some('"') => break,
                        Some('\n') => {
                            line += 1;
                            s.push('\n');
                        }
                        Some(c) => s.push(c),
                        None => bail!("незакритий рядок: {s:?}"),
                    }
                }
                toks.push(Tok {
                    kind: TokKind::Str(s),
                    line,
                });
            }
            _ => {
                let mut w = String::new();
                w.push(c);
                while let Some(&c2) = chars.peek() {
                    if c2.is_whitespace() || matches!(c2, '{' | '}' | '=' | '#' | '"') {
                        break;
                    }
                    w.push(c2);
                    chars.next();
                }
                toks.push(Tok {
                    kind: TokKind::Word(w),
                    line,
                });
            }
        }
    }
    Ok(toks)
}

// ---------------------------------------------------------------------------
// Парсер токенів -> дерево
// ---------------------------------------------------------------------------

/// Значення стейтменту: атом (рядок/слово) або блок.
#[derive(Debug, Clone, PartialEq)]
enum Value {
    Atom(String),
    Block(Vec<Item>),
}

/// Елемент блоку: голе слово (список: participant = { GER }) або пара ключ = значення.
#[derive(Debug, Clone, PartialEq)]
enum Item {
    Word(String),
    Pair(String, Value),
}

struct TokIter {
    toks: Vec<Tok>,
    pos: usize,
}

impl TokIter {
    fn peek(&self) -> Option<&Tok> {
        self.toks.get(self.pos)
    }
    fn next(&mut self) -> Option<Tok> {
        let t = self.toks.get(self.pos).cloned();
        if t.is_some() {
            self.pos += 1;
        }
        t
    }
}

/// Читає елементи блоку до `}` або кінця файлу.
/// `open_line` — рядок відкриваючої `{` (для діагностики).
/// `top = true`: EOF нормальний (кінець файлу). У блоці EOF не є помилкою
/// (як у грі — парсинг просто закінчується), але видається warning.
fn parse_items(t: &mut TokIter, ctx: &str, top: bool, open_line: u32) -> Result<Vec<Item>> {
    let mut items = Vec::new();
    loop {
        match t.next() {
            None => {
                if top {
                    return Ok(items);
                }
                log::warn!(
                    "{ctx}: блок, відкритий на рядку {open_line}, не закритий до кінця файлу (ігнорується, як у грі)"
                );
                return Ok(items);
            }
            Some(Tok {
                kind: TokKind::RBrace,
                line,
            }) => {
                if top {
                    bail!("{ctx}:{line}: несподіваний '}}'");
                }
                return Ok(items);
            }
            Some(Tok {
                kind: TokKind::LBrace,
                line,
            }) => {
                bail!("{ctx}:{line}: несподіваний '{{'")
            }
            Some(Tok {
                kind: TokKind::Eq,
                line,
            }) => bail!("{ctx}:{line}: несподіваний '='"),
            Some(Tok {
                kind: TokKind::Str(s),
                ..
            }) => items.push(Item::Word(s)),
            Some(Tok {
                kind: TokKind::Word(w),
                line: l,
            }) => {
                if matches!(
                    t.peek(),
                    Some(Tok {
                        kind: TokKind::Eq,
                        ..
                    })
                ) {
                    t.next();
                    let v = parse_value(t, ctx)?;
                    items.push(Item::Pair(w, v));
                } else {
                    let _ = l;
                    items.push(Item::Word(w));
                }
            }
        }
    }
}

fn parse_value(t: &mut TokIter, ctx: &str) -> Result<Value> {
    match t.next() {
        None => bail!("{ctx}: очікувалось значення"),
        Some(Tok {
            kind: TokKind::Str(s),
            ..
        }) => Ok(Value::Atom(s)),
        Some(Tok {
            kind: TokKind::Word(w),
            ..
        }) => Ok(Value::Atom(w)),
        Some(Tok {
            kind: TokKind::LBrace,
            line,
        }) => Ok(Value::Block(parse_items(t, ctx, false, line)?)),
        Some(Tok {
            kind: TokKind::RBrace,
            line,
        }) => {
            bail!("{ctx}:{line}: очікувалось значення, знайдено '}}'")
        }
        Some(Tok {
            kind: TokKind::Eq,
            line,
        }) => {
            bail!("{ctx}:{line}: очікувалось значення, знайдено '='")
        }
    }
}

/// Пропускає одне значення без побудови дерева (для include-файлів).
fn skip_value(t: &mut TokIter, ctx: &str) -> Result<()> {
    match t.next() {
        None => bail!("{ctx}: очікувалось значення при пропуску"),
        Some(Tok {
            kind: TokKind::Str(_) | TokKind::Word(_),
            ..
        }) => Ok(()),
        Some(Tok {
            kind: TokKind::LBrace,
            ..
        }) => skip_until_rbrace(t, ctx),
        Some(Tok {
            kind: TokKind::RBrace,
            line,
        }) => {
            bail!("{ctx}:{line}: очікувалось значення, знайдено '}}'")
        }
        Some(Tok {
            kind: TokKind::Eq,
            line,
        }) => {
            bail!("{ctx}:{line}: очікувалось значення, знайдено '='")
        }
    }
}

/// Пропускає блок до парної `}` (EOF — теж кінець, як у грі).
fn skip_until_rbrace(t: &mut TokIter, ctx: &str) -> Result<()> {
    let mut depth = 1;
    while let Some(tok) = t.next() {
        match tok.kind {
            TokKind::LBrace => depth += 1,
            TokKind::RBrace => {
                depth -= 1;
                if depth == 0 {
                    return Ok(());
                }
            }
            _ => {}
        }
    }
    log::warn!("{ctx}: блок не закритий до кінця файлу (пропущено, як у грі)");
    Ok(())
}

/// Відновлює «сирий текст» значення (структурно: пробіли/коментарі нормалізуються).
fn value_to_text(v: &Value) -> String {
    match v {
        Value::Atom(s) => s.clone(),
        Value::Block(items) => {
            let mut out = String::from("{ ");
            for it in items {
                match it {
                    Item::Word(w) => {
                        out.push_str(w);
                        out.push(' ');
                    }
                    Item::Pair(k, val) => {
                        out.push_str(k);
                        out.push_str(" = ");
                        out.push_str(&value_to_text(val));
                        out.push(' ');
                    }
                }
            }
            out.push('}');
            out
        }
    }
}

fn atom_of(v: &Value, ctx: &str) -> Result<String> {
    match v {
        Value::Atom(s) => Ok(s.clone()),
        _ => bail!("{ctx}: очікувалось атомарне значення (рядок/слово)"),
    }
}

// ---------------------------------------------------------------------------
// Розбір конкретних блоків
// ---------------------------------------------------------------------------

const MONTHS: [&str; 12] = [
    "january",
    "february",
    "march",
    "april",
    "may",
    "june",
    "july",
    "august",
    "september",
    "october",
    "november",
    "december",
];

fn parse_month(s: &str) -> Option<i32> {
    let s = s.trim().to_ascii_lowercase();
    MONTHS.iter().position(|m| *m == s).map(|i| i as i32 + 1)
}

/// Дата з блоку { year = N [month = N|назва] [day = N] } (поля опційні, month/day = 1).
fn parse_date(v: &Value, ctx: &str) -> Result<Option<GameDate>> {
    let Value::Block(items) = v else {
        bail!("{ctx}: очікувався блок дати");
    };
    let mut year = None;
    let mut month = None;
    let mut day = None;
    for it in items {
        let Item::Pair(k, val) = it else { continue };
        match k.to_ascii_lowercase().as_str() {
            "year" => {
                if let Value::Atom(s) = val {
                    year = s.trim().parse().ok();
                }
            }
            "month" => {
                if let Value::Atom(s) = val {
                    month = parse_month(s).or_else(|| s.trim().parse().ok());
                }
            }
            "day" => {
                if let Value::Atom(s) = val {
                    day = s.trim().parse().ok();
                }
            }
            _ => {}
        }
    }
    match year {
        Some(y) => Ok(Some(GameDate::from_ymd(
            y,
            month.unwrap_or(1),
            day.unwrap_or(1),
        ))),
        None => Ok(None),
    }
}

/// id = { type = N id = N } -> ObjId (None, якщо полів нема).
fn parse_objid(items: &[Item]) -> Option<ObjId> {
    let mut kind = None;
    let mut id = None;
    for it in items {
        if let Item::Pair(k, Value::Atom(s)) = it {
            match k.to_ascii_lowercase().as_str() {
                "type" => kind = s.trim().parse().ok(),
                "id" => id = s.trim().parse().ok(),
                _ => {}
            }
        }
    }
    match (kind, id) {
        (Some(k), Some(i)) => Some(ObjId { kind: k, id: i }),
        _ => None,
    }
}

fn parse_header(v: &Value) -> Result<ScenarioHeader> {
    let Value::Block(items) = v else {
        bail!("header: очікувався блок {{...}}");
    };
    let mut h = ScenarioHeader::default();
    for it in items {
        let Item::Pair(k, val) = it else { continue };
        match k.to_ascii_lowercase().as_str() {
            "startdate" => h.startdate = parse_date(val, "header startdate")?,
            "selectable" => {
                if let Value::Block(b) = val {
                    for w in b {
                        if let Item::Word(w) = w {
                            h.selectable.push(Tag(w.clone()));
                        }
                    }
                }
            }
            _ => {
                // TAG = { picture = "..." ... } — блок вибору країни.
                if is_tag_key(k) {
                    if let Value::Block(b) = val {
                        for it in b {
                            if let Item::Pair(k2, v2) = it {
                                if k2.eq_ignore_ascii_case("picture") {
                                    if let Value::Atom(s) = v2 {
                                        h.country_pics.push((Tag(k.clone()), s.clone()));
                                    }
                                }
                            }
                        }
                    }
                }
                h.body.push((k.clone(), value_to_text(val)));
            }
        }
    }
    Ok(h)
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

fn parse_globaldata(v: &Value) -> Result<GlobalData> {
    let Value::Block(items) = v else {
        bail!("globaldata: очікувався блок {{...}}");
    };
    let mut gd = GlobalData::default();
    for it in items {
        let Item::Pair(k, val) = it else { continue };
        match k.to_ascii_lowercase().as_str() {
            "startdate" => gd.startdate = parse_date(val, "globaldata startdate")?,
            "axis" | "allies" | "comintern" | "alliance" => {
                if let Some(a) = parse_alliance(k, val)? {
                    gd.alliances.push(a);
                }
            }
            _ => gd.body.push((k.clone(), value_to_text(val))),
        }
    }
    Ok(gd)
}

/// alliance-блок: { id = { type = N id = N } participant = { TAG ... } [name = "..."] }.
fn parse_alliance(kind: &str, v: &Value) -> Result<Option<Alliance>> {
    let Value::Block(items) = v else {
        return Ok(None);
    };
    let mut id = None;
    let mut name = None;
    let mut participants = Vec::new();
    for it in items {
        let Item::Pair(k, val) = it else { continue };
        match k.to_ascii_lowercase().as_str() {
            "id" => {
                if let Value::Block(b) = val {
                    id = parse_objid(b);
                }
            }
            "name" => {
                if let Value::Atom(s) = val {
                    name = Some(s.clone());
                }
            }
            "participant" => {
                if let Value::Block(b) = val {
                    for w in b {
                        if let Item::Word(w) = w {
                            participants.push(Tag(w.clone()));
                        }
                    }
                }
            }
            _ => {}
        }
    }
    let id = id.with_context(|| format!("{kind}: блок альянсу без id = {{...}}"))?;
    Ok(Some(Alliance {
        kind: kind.to_string(),
        id,
        name,
        participants,
    }))
}

/// country = { ... }; None — якщо значення не блок (country = GER-скаляр, напр. у подіях).
fn parse_country_block(v: &Value, source: Option<PathBuf>) -> Result<Option<CountryBlock>> {
    let Value::Block(items) = v else {
        return Ok(None);
    };
    let mut it = items.iter();
    // tag ОБОВ'ЯЗКОВО першим полем ("tag HAS to be first in country").
    let Some(Item::Pair(k, Value::Atom(tag))) = it.next() else {
        bail!("country: 'tag HAS to be first in country'");
    };
    if !k.eq_ignore_ascii_case("tag") {
        bail!("country: 'tag HAS to be first in country' (знайдено '{k}')");
    }
    let tag = Tag(tag.clone());
    let mut body = Vec::new();
    let mut capital = None;
    let mut id = None;
    for it in it {
        let Item::Pair(k, val) = it else { continue };
        match k.to_ascii_lowercase().as_str() {
            "capital" => {
                if let Value::Atom(s) = val {
                    capital = s.trim().parse().ok();
                }
            }
            "id" => {
                if id.is_none() {
                    if let Value::Block(b) = val {
                        id = parse_objid(b);
                    }
                }
            }
            _ => {}
        }
        body.push((k.clone(), value_to_text(val)));
    }
    Ok(Some(CountryBlock {
        tag,
        body,
        capital,
        id,
        source,
    }))
}

/// province = { ... }; None — якщо значення не блок.
fn parse_province_block(v: &Value, source: Option<PathBuf>) -> Result<Option<ProvinceBlock>> {
    let Value::Block(items) = v else {
        return Ok(None);
    };
    let mut it = items.iter();
    // id ОБОВ'ЯЗКОВО першим полем ("id HAS to be first in province").
    let Some(Item::Pair(k, Value::Atom(id))) = it.next() else {
        bail!("province: 'id HAS to be first in province'");
    };
    if !k.eq_ignore_ascii_case("id") {
        bail!("province: 'id HAS to be first in province' (знайдено '{k}')");
    }
    let id: ProvinceId = id
        .trim()
        .parse()
        .with_context(|| format!("province: невірний id '{id}'"))?;
    let mut body = Vec::new();
    for it in it {
        if let Item::Pair(k, val) = it {
            body.push((k.clone(), value_to_text(val)));
        }
    }
    Ok(Some(ProvinceBlock { id, body, source }))
}

// ---------------------------------------------------------------------------
// Top-level парсинг + include
// ---------------------------------------------------------------------------

/// Захист від циклічних include.
const MAX_INCLUDE_DEPTH: usize = 16;

/// Читає файл гри як текст: спочатку UTF-8, при невдачі — Windows-1252
/// (реальні .inc містять латинку-1/CP1252 у назвах юнітів, напр. "München").
fn read_text(path: &Path) -> Result<String> {
    let bytes =
        std::fs::read(path).with_context(|| format!("не вдалось прочитати {}", path.display()))?;
    match String::from_utf8(bytes.clone()) {
        Ok(s) => Ok(s),
        Err(_) => Ok(from_cp1252(&bytes)),
    }
}

/// Декодує CP1252 (сумісний з Latin-1 для 0xA0..0xFF; 0x80..0x9F — таблиця).
fn from_cp1252(bytes: &[u8]) -> String {
    const C1: [char; 32] = [
        '\u{20AC}', '\u{FFFD}', '\u{201A}', '\u{0192}', '\u{201E}', '\u{2026}', '\u{2020}',
        '\u{2021}', '\u{02C6}', '\u{2030}', '\u{0160}', '\u{2039}', '\u{0152}', '\u{FFFD}',
        '\u{017D}', '\u{FFFD}', '\u{FFFD}', '\u{2018}', '\u{2019}', '\u{201C}', '\u{201D}',
        '\u{2022}', '\u{2013}', '\u{2014}', '\u{02DC}', '\u{2122}', '\u{0161}', '\u{203A}',
        '\u{0153}', '\u{FFFD}', '\u{017E}', '\u{0178}',
    ];
    bytes
        .iter()
        .map(|&b| match b {
            0x00..=0x7F => b as char,
            0x80..=0x9F => C1[(b - 0x80) as usize],
            _ => b as char, // 0xA0..0xFF = Latin-1
        })
        .collect()
}

/// Завантажує сценарій .eug з диска (з рекурсивним інлайн-парсингом include).
pub fn load_scenario(path: &Path) -> Result<Scenario> {
    let text = read_text(path)?;
    parse_scenario_text(&text, path)
}

/// Парсить текст сценарію (використовується і в тестах).
pub fn parse_scenario_text(text: &str, path: &Path) -> Result<Scenario> {
    let mut sc = Scenario::default();
    let toks = tokenize(text)?;
    let mut t = TokIter { toks, pos: 0 };
    let ctx = path.display().to_string();
    let items = parse_items(&mut t, &ctx, true, 1)?;
    dispatch_top_level(items, path, &mut sc, 0)?;
    Ok(sc)
}

/// Обробляє top-level пари самого сценарію; невідомий ключ — помилка.
fn dispatch_top_level(
    items: Vec<Item>,
    path: &Path,
    sc: &mut Scenario,
    depth: usize,
) -> Result<()> {
    let ctx = path.display().to_string();
    for item in items {
        let Item::Pair(key, value) = item else {
            continue;
        };
        match key.to_ascii_lowercase().as_str() {
            "name" => sc.name = atom_of(&value, &format!("{ctx}: name"))?,
            "panel" => sc.panel = Some(atom_of(&value, &format!("{ctx}: panel"))?),
            "header" => sc.header = parse_header(&value)?,
            "globaldata" => sc.globaldata = parse_globaldata(&value)?,
            "include" => {
                let inc = atom_of(&value, &format!("{ctx}: include"))?;
                sc.includes.push(inc.clone());
                load_include(path, &inc, sc, depth)?;
            }
            "event" => sc.events.push(atom_of(&value, &format!("{ctx}: event"))?),
            "country" => {
                if let Some(cb) = parse_country_block(&value, None)? {
                    sc.countries.push(cb);
                }
            }
            "province" => {
                if let Some(pb) = parse_province_block(&value, None)? {
                    sc.provinces.push(pb);
                }
            }
            "history" | "sleepevent" | "save_date" | "map" => {
                sc.raw_top_level.push((key, value_to_text(&value)));
            }
            other => bail!("{ctx}: Illegal top level object: {other}"),
        }
    }
    Ok(())
}

/// Завантажує include-файл і забирає з нього country/province-блоки
/// (решта top-level стейтментів пропускається без побудови дерева).
fn load_include(scenario_path: &Path, inc: &str, sc: &mut Scenario, depth: usize) -> Result<()> {
    if depth >= MAX_INCLUDE_DEPTH {
        bail!("include '{inc}': перевищено глибину вкладеності ({MAX_INCLUDE_DEPTH})");
    }
    let inc_path = resolve_include(scenario_path, inc)?;
    let text = read_text(&inc_path)
        .with_context(|| format!("include: не вдалось прочитати {}", inc_path.display()))?;
    let toks = tokenize(&text)?;
    let mut t = TokIter { toks, pos: 0 };
    let ctx = inc_path.display().to_string();
    loop {
        match t.next() {
            None => return Ok(()),
            Some(Tok {
                kind: TokKind::RBrace,
                line,
            }) => {
                bail!("{ctx}:{line}: несподіваний '}}' на top-level")
            }
            Some(Tok {
                kind: TokKind::LBrace,
                line,
            }) => {
                bail!("{ctx}:{line}: несподіваний '{{' на top-level")
            }
            Some(Tok {
                kind: TokKind::Eq,
                line,
            }) => {
                bail!("{ctx}:{line}: несподіваний '=' на top-level")
            }
            Some(Tok {
                kind: TokKind::Str(_),
                ..
            }) => {} // голий рядок — ігнор
            Some(Tok {
                kind: TokKind::Word(w),
                ..
            }) => {
                if !matches!(
                    t.peek(),
                    Some(Tok {
                        kind: TokKind::Eq,
                        ..
                    })
                ) {
                    continue; // голе слово — ігнор
                }
                t.next();
                match w.to_ascii_lowercase().as_str() {
                    "include" => {
                        let nested = match t.peek() {
                            Some(Tok {
                                kind: TokKind::Str(s),
                                ..
                            }) => {
                                let s = s.clone();
                                t.next();
                                Some(s)
                            }
                            Some(Tok {
                                kind: TokKind::Word(w),
                                ..
                            }) => {
                                let w = w.clone();
                                t.next();
                                Some(w)
                            }
                            _ => None,
                        };
                        match nested {
                            Some(inc) => {
                                sc.includes.push(inc.clone());
                                load_include(&inc_path, &inc, sc, depth + 1)?;
                            }
                            None => skip_value(&mut t, &ctx)?,
                        }
                    }
                    "country" => {
                        let v = parse_value(&mut t, &ctx)?;
                        if let Some(cb) = parse_country_block(&v, Some(inc_path.clone()))? {
                            sc.countries.push(cb);
                        }
                    }
                    "province" => {
                        let v = parse_value(&mut t, &ctx)?;
                        if let Some(pb) = parse_province_block(&v, Some(inc_path.clone()))? {
                            sc.provinces.push(pb);
                        }
                    }
                    _ => skip_value(&mut t, &ctx)?,
                }
            }
        }
    }
}

/// Шлях include-файлу: спочатку відносно папки сценарію, потім відносно її батька
/// (у реальних файлах шляхи відносні кореня мода: "scenarios\\1933\\vp.inc").
fn resolve_include(scenario_path: &Path, inc: &str) -> Result<PathBuf> {
    let norm = inc.replace('\\', "/");
    let rel = Path::new(&norm);
    let dir = scenario_path
        .parent()
        .with_context(|| format!("include '{inc}': сценарій без батьківської папки"))?;
    let cand = dir.join(rel);
    if cand.is_file() {
        return Ok(cand);
    }
    if let Some(grand) = dir.parent() {
        let cand2 = grand.join(rel);
        if cand2.is_file() {
            return Ok(cand2);
        }
        bail!(
            "include '{inc}' не знайдено (шукав {} та {})",
            cand.display(),
            cand2.display()
        );
    }
    bail!("include '{inc}' не знайдено (шукав {})", cand.display())
}

// ---------------------------------------------------------------------------
// Тести
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use super::*;

    fn kinds(toks: &[Tok]) -> Vec<&TokKind> {
        toks.iter().map(|t| &t.kind).collect()
    }

    #[test]
    fn tokenize_comments_strings_and_braces() {
        let toks =
            tokenize("# comment\nname = \"A # B\"\r\nheader =\n{ selectable = { GER U02 } # x\n}")
                .unwrap();
        assert_eq!(
            kinds(&toks),
            vec![
                &TokKind::Word("name".into()),
                &TokKind::Eq,
                &TokKind::Str("A # B".into()),
                &TokKind::Word("header".into()),
                &TokKind::Eq,
                &TokKind::LBrace,
                &TokKind::Word("selectable".into()),
                &TokKind::Eq,
                &TokKind::LBrace,
                &TokKind::Word("GER".into()),
                &TokKind::Word("U02".into()),
                &TokKind::RBrace,
                &TokKind::RBrace,
            ]
        );
        // номери рядків
        assert_eq!(toks[0].line, 2); // name
        assert_eq!(toks[5].line, 4); // {
        assert_eq!(toks[12].line, 5); // остання }
        assert_eq!(toks[2].line, 2); // рядок у лапках
    }

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
"#;

    #[test]
    fn parse_synthetic_scenario() {
        let sc = parse_scenario_text(SYNTHETIC, Path::new("test.eug")).unwrap();
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
        assert_eq!(
            sc.globaldata.startdate,
            Some(GameDate::from_ymd(1933, 3, 3))
        );
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
        assert_eq!(sc.countries.len(), 1);
        let ger = &sc.countries[0];
        assert_eq!(ger.tag, Tag("GER".into()));
        assert_eq!(ger.capital, Some(163));
        // id всередині landunit — не top-level пара країни, тож id країни = None
        assert_eq!(ger.id, None);
        assert!(ger.body.iter().any(|(k, _)| k == "landunit"));
        assert!(ger.body.iter().any(|(k, _)| k == "capital"));
        assert_eq!(ger.source, None);
        assert_eq!(sc.provinces.len(), 1);
        assert_eq!(sc.provinces[0].id, 825);
        assert!(sc
            .raw_top_level
            .iter()
            .any(|(k, v)| k == "history" && v.contains("2400014")));
    }

    #[test]
    fn illegal_top_level_object() {
        let err = parse_scenario_text("name = \"x\"\nfoo = { 1 }", Path::new("t.eug"))
            .unwrap_err()
            .to_string();
        assert!(err.contains("Illegal top level object: foo"), "{err}");
        assert!(err.contains("t.eug"), "{err}");
    }

    #[test]
    fn country_requires_tag_first() {
        let err = parse_scenario_text(
            "name = \"x\"\ncountry = { capital = 1 tag = GER }",
            Path::new("t.eug"),
        )
        .unwrap_err()
        .to_string();
        assert!(err.contains("tag HAS to be first"), "{err}");
    }

    #[test]
    fn unclosed_trailing_block_is_tolerated() {
        // Реальний 1939.09/germany.inc закінчується без закриваючої '}' — гра це терпить.
        let sc = parse_scenario_text(
            "name = \"x\"\ncountry = { tag = GER capital = 163 ",
            Path::new("t.eug"),
        )
        .unwrap();
        assert_eq!(sc.countries.len(), 1);
        assert_eq!(sc.countries[0].capital, Some(163));
    }

    /// Реальний сценарій 1933.eug: потребує встановленої гри через Steam.
    #[test]
    #[ignore = "потребує реальних файлів гри (Steam)"]
    fn loads_real_1933() -> anyhow::Result<()> {
        let paths = crate::GamePaths::from_steam()?;
        let file = paths.mod_dir.join("scenarios").join("1933.eug");
        if !file.exists() {
            anyhow::bail!("файл не знайдено: {}", file.display());
        }
        let sc = load_scenario(&file)?;
        assert_eq!(sc.name, "1933_SCENARIO", "name");
        assert!(sc.globaldata.startdate.is_some(), "startdate");
        assert!(sc.globaldata.alliances.len() >= 3, "alliances");
        assert!(
            sc.globaldata
                .alliances
                .iter()
                .any(|a| !a.participants.is_empty()),
            "alliance with participants"
        );
        assert!(sc.countries.len() > 30, "countries: {}", sc.countries.len());
        assert!(!sc.includes.is_empty(), "includes");
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
