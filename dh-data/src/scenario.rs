//! Scenarios: `scenarios/*.eug` files plus the files they `include`.
//!
//! An `.eug` holds a `header = { name startdate selectable }` block and then
//! global data and `country = { ... }` blocks, typically split into included
//! files per country.

use crate::{load_script, Diplomacy, GameDate, Relation, Unit, Vfs, Warning};
use dh_text::{Block, Item};
use std::collections::HashSet;

#[derive(Debug, Clone)]
pub struct ScenarioInfo {
    /// Game-relative path of the `.eug` file.
    pub path: String,
    pub name: String,
    pub start: Option<GameDate>,
    pub selectable: Vec<String>,
}

impl ScenarioInfo {
    fn from_root(path: &str, root: &Block) -> Self {
        let header = root.get_block("header");
        ScenarioInfo {
            path: path.to_owned(),
            name: header
                .and_then(|h| h.get_str("name"))
                .unwrap_or(path)
                .to_owned(),
            start: header
                .and_then(|h| h.get_block("startdate"))
                .and_then(GameDate::from_block),
            selectable: header
                .and_then(|h| h.get_block("selectable"))
                .map(|b| {
                    b.values()
                        .filter_map(|v| Some(v.as_scalar()?.text.clone()))
                        .collect()
                })
                .unwrap_or_default(),
        }
    }
}

#[derive(Debug, Clone)]
pub struct CountrySetup {
    pub tag: String,
    pub capital: Option<u32>,
    pub owned: Vec<u32>,
    pub controlled: Vec<u32>,
    pub national: Vec<u32>,
    pub units: Vec<Unit>,
    pub relations: Vec<Relation>,
    pub stockpiles: Stockpiles,
    /// The full block, for fields not yet modelled.
    pub raw: Block,
}

/// National stockpiles a scenario starts a country with.
#[derive(Debug, Clone, Copy, PartialEq, Default)]
pub struct Stockpiles {
    pub supplies: f64,
    pub oil: f64,
    pub manpower: f64,
    pub energy: f64,
    pub metal: f64,
    pub rare_materials: f64,
    pub money: f64,
    pub transports: f64,
    pub escorts: f64,
}

impl Stockpiles {
    pub fn from_block(b: &Block) -> Self {
        let v = |key: &str| b.get_f64(key).unwrap_or(0.0);
        Stockpiles {
            supplies: v("supplies"),
            oil: v("oil"),
            manpower: v("manpower"),
            energy: v("energy"),
            metal: v("metal"),
            rare_materials: v("rare_materials"),
            money: v("money"),
            transports: v("transports"),
            escorts: v("escorts"),
        }
    }
}

impl CountrySetup {
    pub fn from_block(b: &Block) -> Option<Self> {
        let ids = |key: &str| -> Vec<u32> {
            b.get_block(key)
                .map(|l| l.ints().filter_map(|i| u32::try_from(i).ok()).collect())
                .unwrap_or_default()
        };
        Some(CountrySetup {
            tag: b.get_str("tag")?.to_ascii_uppercase(),
            capital: b.get_i64("capital").and_then(|c| u32::try_from(c).ok()),
            owned: ids("ownedprovinces"),
            controlled: ids("controlledprovinces"),
            national: ids("nationalprovinces"),
            units: Unit::all_in(b),
            relations: Relation::all_in(b),
            stockpiles: Stockpiles::from_block(b),
            raw: b.clone(),
        })
    }
}

/// Buildings and other per-province state set by a scenario `province` block.
#[derive(Debug, Clone, PartialEq)]
pub struct ProvinceSetup {
    pub id: u32,
    /// Current land fort level.
    pub land_fort: f64,
    pub coastal_fort: f64,
    /// Current weather, when the block sets it.
    pub weather: Option<crate::Weather>,
}

impl ProvinceSetup {
    pub fn from_block(b: &Block) -> Option<Self> {
        // A building is `key = n` or `key = { size = n current_size = m }`.
        let size = |key: &str| match b.get(key) {
            Some(dh_text::Value::Block(s)) => s
                .get_f64("current_size")
                .or(s.get_f64("size"))
                .unwrap_or(0.0),
            Some(dh_text::Value::Scalar(v)) => v.as_f64().unwrap_or(0.0),
            None => 0.0,
        };
        Some(ProvinceSetup {
            id: u32::try_from(b.get_i64("id")?).ok()?,
            land_fort: size("landfort"),
            coastal_fort: size("coastalfort"),
            weather: b.get_str("weather").and_then(crate::Weather::from_name),
        })
    }
}

#[derive(Debug, Clone)]
pub struct Scenario {
    pub info: ScenarioInfo,
    /// All top-level items with includes spliced in place.
    pub root: Block,
    pub countries: Vec<CountrySetup>,
    pub diplomacy: Diplomacy,
    pub provinces: Vec<ProvinceSetup>,
    /// The `weather` block (`globaldata.weather`, or a top-level one).
    pub weather: crate::WeatherSetup,
    /// `include = "..."` targets in file order, as written (nested ones too),
    /// including ones that failed to resolve.
    pub includes: Vec<String>,
}

impl Scenario {
    /// The game start date: `globaldata.startdate` wins over the menu's
    /// `header.startdate` (the original engine starts the campaign from
    /// globaldata; the header date only feeds the scenario picker).
    pub fn start(&self) -> Option<GameDate> {
        self.root
            .get_block("globaldata")
            .and_then(|g| g.get_block("startdate"))
            .and_then(GameDate::from_block)
            .or(self.info.start)
    }
}

impl Scenario {
    /// Lists `scenarios/*.eug` with their headers.
    pub fn list(vfs: &Vfs, warnings: &mut Vec<Warning>) -> Vec<ScenarioInfo> {
        vfs.list_files("scenarios")
            .into_iter()
            .filter(|f| f.to_ascii_lowercase().ends_with(".eug"))
            .filter_map(|f| {
                let root = load_script(vfs, &f, warnings).ok()?;
                Some(ScenarioInfo::from_root(&f, &root))
            })
            .collect()
    }

    pub fn load(vfs: &Vfs, path: &str, warnings: &mut Vec<Warning>) -> std::io::Result<Self> {
        let mut seen = HashSet::new();
        let mut includes = Vec::new();
        let root = load_with_includes(vfs, path, &mut seen, warnings, &mut includes)?;
        let countries = root
            .get_all("country")
            .filter_map(|v| CountrySetup::from_block(v.as_block()?))
            .collect();
        let weather = root
            .get_block("globaldata")
            .and_then(|g| g.get_block("weather"))
            .or_else(|| root.get_block("weather"))
            .map(crate::WeatherSetup::from_block)
            .unwrap_or_default();
        Ok(Scenario {
            info: ScenarioInfo::from_root(path, &root),
            weather,
            diplomacy: Diplomacy::from_globaldata(root.get_block("globaldata")),
            provinces: root
                .get_all("province")
                .filter_map(|v| ProvinceSetup::from_block(v.as_block()?))
                .collect(),
            root,
            countries,
            includes,
        })
    }
}

fn load_with_includes(
    vfs: &Vfs,
    path: &str,
    seen: &mut HashSet<String>,
    warnings: &mut Vec<Warning>,
    includes: &mut Vec<String>,
) -> std::io::Result<Block> {
    seen.insert(normalize(path));
    let mut out = Block::default();
    for item in load_script(vfs, path, warnings)?.items {
        let include = match &item {
            Item::Field(f) if f.key.eq_ignore_ascii_case("include") => {
                f.value.as_scalar().map(|s| (s.text.clone(), f.line))
            }
            _ => None,
        };
        let Some((target, line)) = include else {
            out.items.push(item);
            continue;
        };
        includes.push(target.clone());
        let warn = |message: String| Warning {
            file: path.to_owned(),
            line,
            message,
        };
        // Paths are game-relative; fall back to relative to the including file.
        let resolved = [target.clone(), sibling(path, &target)]
            .into_iter()
            .find(|p| vfs.exists(p));
        match resolved {
            None => warnings.push(warn(format!("include not found: {target}"))),
            Some(p) if seen.contains(&normalize(&p)) => {
                warnings.push(warn(format!("include cycle: {target}")))
            }
            Some(p) => match load_with_includes(vfs, &p, seen, warnings, includes) {
                Ok(inner) => out.items.extend(inner.items),
                Err(e) => warnings.push(warn(format!("include {target}: {e}"))),
            },
        }
    }
    seen.remove(&normalize(path));
    Ok(out)
}

fn normalize(path: &str) -> String {
    path.replace('\\', "/").to_ascii_lowercase()
}

fn sibling(path: &str, name: &str) -> String {
    let path = path.replace('\\', "/");
    match path.rfind('/') {
        Some(i) => format!("{}/{name}", &path[..i]),
        None => name.to_owned(),
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use std::fs;

    #[test]
    fn loads_scenario_with_includes() {
        let dir = std::env::temp_dir().join(format!("dh-data-scn-{}", std::process::id()));
        let _ = fs::remove_dir_all(&dir);
        fs::create_dir_all(dir.join("Scenarios/1936")).unwrap();
        fs::write(
            dir.join("Scenarios/1936.eug"),
            "header = { name = \"Test 1936\" startdate = { year = 1936 month = january day = 0 } selectable = { GER } }\n\
             include = \"scenarios\\1936\\ger.inc\"\ninclude = \"missing.inc\"\n",
        )
        .unwrap();
        fs::write(
            dir.join("Scenarios/1936/GER.inc"),
            "country = { tag = ger capital = 2 ownedprovinces = { 1 2 3 } controlledprovinces = { 1 2 } }\n\
             include = \"scenarios/1936.eug\"\n",
        )
        .unwrap();

        let vfs = Vfs::new(&dir);
        let mut warnings = Vec::new();
        let list = Scenario::list(&vfs, &mut warnings);
        assert_eq!(list.len(), 1);
        assert_eq!(list[0].start, Some(GameDate::new(1936, 1, 1)));

        let s = Scenario::load(&vfs, &list[0].path, &mut warnings).unwrap();
        assert_eq!(s.info.name, "Test 1936");
        assert_eq!(s.countries.len(), 1);
        let ger = &s.countries[0];
        assert_eq!(
            (
                ger.tag.as_str(),
                ger.capital,
                ger.owned.len(),
                ger.controlled.len()
            ),
            ("GER", Some(2), 3, 2)
        );
        let msgs: Vec<_> = warnings.iter().map(|w| w.message.as_str()).collect();
        assert_eq!(
            msgs,
            [
                "include cycle: scenarios/1936.eug",
                "include not found: missing.inc"
            ]
        );
        fs::remove_dir_all(dir).unwrap();
    }
}
