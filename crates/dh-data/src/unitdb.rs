//! Unit type and model database from `db/units` (`docs/spec/units.md` §17).
//!
//! A division's stats are its model plus the models of attached brigades,
//! summed field by field with each sum clamped at zero; land speed is the
//! summed `maxspeed` limited by speed caps. Country technology deltas are not
//! applied yet.

use crate::{load_script, Branch, Division, Vfs, Warning};
use std::collections::BTreeMap;

/// Division types by engine index (`#ID`); the index decides the class of a
/// type used as a "real type": below 12 land, 12–20 air, above 20 naval.
pub const DIVISION_TYPES: [&str; 33] = [
    "infantry",
    "cavalry",
    "motorized",
    "mechanized",
    "light_armor",
    "armor",
    "paratrooper",
    "marine",
    "bergsjaeger",
    "garrison",
    "hq",
    "militia",
    "multi_role",
    "interceptor",
    "strategic_bomber",
    "tactical_bomber",
    "naval_bomber",
    "cas",
    "transport_plane",
    "flying_bomb",
    "flying_rocket",
    "battleship",
    "light_cruiser",
    "heavy_cruiser",
    "battlecruiser",
    "destroyer",
    "carrier",
    "escort_carrier",
    "submarine",
    "nuclear_submarine",
    "transport",
    "light_carrier",
    "rocket_interceptor",
];

/// Brigade types whose presence applies a division speed cap, and the cap key.
const SPEED_CAP_BRIGADES: [(&str, &str); 4] = [
    ("artillery", "speed_cap_art"),
    ("anti_tank", "speed_cap_at"),
    ("anti_air", "speed_cap_aa"),
    ("engineer", "speed_cap_eng"),
];

/// Fields a brigade adds to a division, per division class.
const LAND_FIELDS: &[&str] = &[
    "defaultorganisation",
    "morale",
    "defensiveness",
    "toughness",
    "softness",
    "suppression",
    "airdefence",
    "softattack",
    "hardattack",
    "transportweight",
    "airattack",
    "supplyconsumption",
    "fuelconsumption",
    "maxspeed",
    "speed_cap_art",
    "speed_cap_at",
    "speed_cap_aa",
    "speed_cap_eng",
];
const AIR_FIELDS: &[&str] = &[
    "defaultorganisation",
    "morale",
    "supplyconsumption",
    "fuelconsumption",
    "maxspeed",
    "surfacedefence",
    "airdefence",
    "airattack",
    "strategicattack",
    "softattack",
    "hardattack",
    "navalattack",
    "transportcapability",
    "surfacedetectioncapability",
    "airdetectioncapability",
];
const NAVAL_FIELDS: &[&str] = &[
    "defaultorganisation",
    "morale",
    "airdefence",
    "airattack",
    "supplyconsumption",
    "fuelconsumption",
    "maxspeed",
    "surfacedetectioncapability",
    "airdetectioncapability",
    "subdetectioncapability",
    "visibility",
    "seadefence",
    "seaattack",
    "subattack",
    "convoyattack",
    "shorebombardment",
    "transportcapability",
    "range",
    "distance",
];

/// Model keys that default to 1.0 instead of 0.
const DEFAULT_ONE: [&str; 4] = [
    "upgrade_time_factor",
    "upgrade_cost_factor",
    "reinforce_cost",
    "reinforce_time",
];

/// One `model = { ... }` block: numeric stats by key.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Model {
    pub stats: BTreeMap<String, f64>,
}

impl Model {
    fn from_block(b: &dh_text::Block) -> Self {
        let stats = b
            .fields()
            .filter_map(|f| Some((f.key.to_ascii_lowercase(), f.value.as_scalar()?.as_f64()?)))
            .collect();
        Model { stats }
    }

    pub fn get(&self, key: &str) -> f64 {
        let default = if DEFAULT_ONE.contains(&key) { 1.0 } else { 0.0 };
        self.stats.get(key).copied().unwrap_or(default)
    }
}

#[derive(Debug, Clone)]
pub struct DivisionClass {
    pub name: String,
    pub branch: Branch,
    pub models: Vec<Model>,
    pub allowed_brigades: Vec<String>,
    pub max_brigades: usize,
}

#[derive(Debug, Clone)]
pub struct BrigadeClass {
    pub name: String,
    pub branch: Branch,
    pub models: Vec<Model>,
}

/// Final stats of a division with its brigades.
#[derive(Debug, Clone, PartialEq)]
pub struct DivisionStats {
    pub branch: Branch,
    pub stats: BTreeMap<String, f64>,
    /// Land: speed after caps; others: summed `maxspeed`.
    pub max_speed: f64,
}

impl DivisionStats {
    pub fn get(&self, key: &str) -> f64 {
        self.stats.get(key).copied().unwrap_or(0.0)
    }
}

#[derive(Debug, Clone, Default)]
pub struct UnitDb {
    pub divisions: BTreeMap<String, DivisionClass>,
    pub brigades: BTreeMap<String, BrigadeClass>,
    /// `MinSoftnessBrigades` from `misc.txt` (0 in the shipped game).
    pub min_softness_brigades: f64,
}

fn branch_of_index(index: usize) -> Branch {
    match index {
        0..=11 => Branch::Land,
        12..=20 => Branch::Air,
        _ => Branch::Naval,
    }
}

fn default_max_brigades(kind: &str) -> usize {
    match kind {
        "multi_role" | "interceptor" | "cas" | "transport_plane" | "flying_bomb"
        | "flying_rocket" | "submarine" | "nuclear_submarine" | "transport" => 0,
        "light_cruiser" => 2,
        "heavy_cruiser" => 3,
        "battlecruiser" => 4,
        "battleship" => 5,
        _ => 1,
    }
}

fn models_in(root: &dh_text::Block) -> Vec<Model> {
    root.get_all("model")
        .filter_map(|v| v.as_block())
        .map(Model::from_block)
        .collect()
}

impl UnitDb {
    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> std::io::Result<Self> {
        let mut db = UnitDb::default();
        let types = load_script(vfs, "db/units/division_types.txt", warnings)?;
        for field in types
            .fields()
            .filter(|f| !f.key.eq_ignore_ascii_case("eyr"))
        {
            let name = field.key.to_ascii_lowercase();
            let real = field
                .value
                .as_block()
                .and_then(|b| b.get_str("type"))
                .unwrap_or(&name)
                .to_ascii_lowercase();
            let index = DIVISION_TYPES
                .iter()
                .position(|t| *t == real)
                .unwrap_or(DIVISION_TYPES.len());
            let file = format!("db/units/divisions/{name}.txt");
            let Ok(root) = load_script(vfs, &file, warnings) else {
                continue;
            };
            let allowed = root
                .get_all("allowed_brigades")
                .filter_map(|v| Some(v.as_scalar()?.text.to_ascii_lowercase()));
            let max = root
                .get_i64("max_allowed_brigades")
                .map(|m| m.clamp(0, 5) as usize);
            db.divisions.insert(
                name.clone(),
                DivisionClass {
                    branch: branch_of_index(index),
                    models: models_in(&root),
                    allowed_brigades: allowed.collect(),
                    max_brigades: max.unwrap_or_else(|| default_max_brigades(&name)),
                    name,
                },
            );
        }
        let types = load_script(vfs, "db/units/brigade_types.txt", warnings)?;
        for field in types.fields() {
            let name = field.key.to_ascii_lowercase();
            let branch = match field
                .value
                .as_block()
                .and_then(|b| b.get_str("type"))
                .map(str::to_ascii_lowercase)
            {
                Some(t) if t == "land" => Branch::Land,
                Some(t) if t == "air" => Branch::Air,
                _ => Branch::Naval,
            };
            let file = format!("db/units/brigades/{name}.txt");
            let models = load_script(vfs, &file, warnings)
                .map(|r| models_in(&r))
                .unwrap_or_default();
            db.brigades.insert(
                name.clone(),
                BrigadeClass {
                    name,
                    branch,
                    models,
                },
            );
        }
        Ok(db)
    }

    /// The model a scenario index refers to; out of range or negative means model 0.
    pub fn division_model(&self, kind: &str, index: Option<i64>) -> Option<&Model> {
        let models = &self.divisions.get(&kind.to_ascii_lowercase())?.models;
        let i = index
            .and_then(|i| usize::try_from(i).ok())
            .filter(|&i| i < models.len())
            .unwrap_or(0);
        models.get(i)
    }

    pub fn brigade_model(&self, kind: &str, index: Option<i64>) -> Option<&Model> {
        let models = &self.brigades.get(&kind.to_ascii_lowercase())?.models;
        let i = index
            .and_then(|i| usize::try_from(i).ok())
            .filter(|&i| i < models.len())
            .unwrap_or(0);
        models.get(i)
    }

    /// Stats of a scenario division: model plus attached brigades.
    pub fn division_stats(&self, division: &Division) -> Option<DivisionStats> {
        let class = self.divisions.get(&division.kind)?;
        let base = self.division_model(&division.kind, division.model)?;
        let fields = match class.branch {
            Branch::Land => LAND_FIELDS,
            Branch::Air => AIR_FIELDS,
            Branch::Naval => NAVAL_FIELDS,
        };
        let mut stats: BTreeMap<String, f64> = base
            .stats
            .iter()
            .map(|(k, v)| (k.clone(), v.max(0.0)))
            .collect();
        let mut brigade_cap = f64::INFINITY;
        let mut capped_by = Vec::new();
        for brigade in division.brigades.iter().take(class.max_brigades) {
            let Some(model) = self.brigade_model(&brigade.kind, brigade.model) else {
                continue;
            };
            for &field in fields {
                let sum = stats.get(field).copied().unwrap_or(0.0) + model.get(field);
                let floor = if field == "softness" {
                    self.min_softness_brigades
                } else {
                    0.0
                };
                let unclamped = matches!(field, "morale" | "distance");
                stats.insert(
                    field.to_owned(),
                    if unclamped { sum } else { sum.max(floor) },
                );
            }
            let own_cap = model.get("speed_cap");
            if own_cap > 0.0 {
                brigade_cap = brigade_cap.min(own_cap);
            }
            if let Some((_, key)) = SPEED_CAP_BRIGADES.iter().find(|(b, _)| *b == brigade.kind) {
                capped_by.push(*key);
            }
        }
        let summed = stats.get("maxspeed").copied().unwrap_or(0.0).max(0.0);
        let max_speed = if class.branch == Branch::Land {
            let mut v = summed;
            for key in capped_by {
                let cap = stats.get(key).copied().unwrap_or(0.0);
                if cap > 0.0 {
                    v = v.min(cap);
                }
            }
            if brigade_cap.is_finite() {
                v = v.min(brigade_cap);
            }
            match v {
                v if v >= 1.0 => v,
                _ if summed > 0.0 => 1.0,
                _ => 0.0,
            }
        } else {
            summed
        };
        Some(DivisionStats {
            branch: class.branch,
            stats,
            max_speed,
        })
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::Brigade;

    fn model(pairs: &[(&str, f64)]) -> Model {
        Model {
            stats: pairs.iter().map(|(k, v)| (k.to_string(), *v)).collect(),
        }
    }

    fn db() -> UnitDb {
        let mut db = UnitDb::default();
        let land = |name: &str, models| DivisionClass {
            name: name.into(),
            branch: Branch::Land,
            models,
            allowed_brigades: vec![],
            max_brigades: 1,
        };
        db.divisions.insert(
            "cavalry".into(),
            land(
                "cavalry",
                vec![model(&[
                    ("maxspeed", 7.0),
                    ("speed_cap_eng", 7.0),
                    ("softattack", 3.0),
                ])],
            ),
        );
        db.divisions.insert(
            "garrison".into(),
            land("garrison", vec![model(&[("maxspeed", 1.0)])]),
        );
        let brigade = |name: &str, m| BrigadeClass {
            name: name.into(),
            branch: Branch::Land,
            models: vec![m],
        };
        db.brigades.insert(
            "engineer".into(),
            brigade("engineer", model(&[("maxspeed", 0.5), ("softattack", 1.0)])),
        );
        db.brigades.insert(
            "artillery".into(),
            brigade("artillery", model(&[("maxspeed", -1.0)])),
        );
        db
    }

    fn division(kind: &str, brigade: Option<&str>) -> Division {
        let doc = dh_text::script::parse_str(&format!("d = {{ type = {kind} }}"));
        let mut d = Division::from_block(doc.root.get_block("d").unwrap()).unwrap();
        d.brigades = brigade
            .map(|b| Brigade {
                kind: b.into(),
                model: None,
            })
            .into_iter()
            .collect();
        d
    }

    #[test]
    fn engineers_hit_the_cavalry_speed_cap() {
        // docs/spec/units.md §17.7: cavalry 7 + engineer 0.5 = 7.5, capped by speed_cap_eng 7.
        let s = db()
            .division_stats(&division("cavalry", Some("engineer")))
            .unwrap();
        assert_eq!((s.max_speed, s.get("softattack")), (7.0, 4.0));
        assert_eq!(
            db().division_stats(&division("cavalry", None))
                .unwrap()
                .max_speed,
            7.0
        );
    }

    #[test]
    fn speed_floors() {
        // Garrison 1 + artillery -1 = 0: the division cannot move.
        let s = db()
            .division_stats(&division("garrison", Some("artillery")))
            .unwrap();
        assert_eq!(s.max_speed, 0.0);
        assert_eq!(s.get("maxspeed"), 0.0);
    }
}
