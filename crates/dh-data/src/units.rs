//! Units placed by scenarios and saves: `landunit`, `navalunit` and `airunit`
//! blocks holding `division`s (`docs/spec/scenario.md` §4.9–4.10). A division
//! names its type and model; its combat stats come from `db/units`.

use dh_text::Block;

/// The `id = { type = T id = N }` pair the engine uses to identify objects.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, PartialOrd, Ord)]
pub struct TypeId {
    pub kind: i64,
    pub id: i64,
}

impl TypeId {
    pub fn from_block(b: &Block) -> Option<Self> {
        Some(TypeId {
            kind: b.get_i64("type")?,
            id: b.get_i64("id")?,
        })
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum Branch {
    Land,
    Naval,
    Air,
}

impl Branch {
    pub fn unit_key(self) -> &'static str {
        match self {
            Branch::Land => "landunit",
            Branch::Naval => "navalunit",
            Branch::Air => "airunit",
        }
    }
}

/// An attached brigade: type and model (`-1`/absent = unset).
#[derive(Debug, Clone, PartialEq)]
pub struct Brigade {
    pub kind: String,
    pub model: Option<i64>,
}

#[derive(Debug, Clone)]
pub struct Division {
    pub id: Option<TypeId>,
    pub name: String,
    /// Division type, e.g. `infantry`, `armor`, `destroyer`.
    pub kind: String,
    /// Model index into `db/units/divisions/<kind>.txt`.
    pub model: Option<i64>,
    pub strength: Option<f64>,
    pub max_strength: Option<f64>,
    pub organisation: Option<f64>,
    pub experience: Option<f64>,
    pub brigades: Vec<Brigade>,
    pub locked: bool,
    pub raw: Block,
}

impl Division {
    pub fn from_block(b: &Block) -> Option<Self> {
        let model = |key: &str| b.get_i64(key).filter(|&m| m >= 0);
        // Slot 1 may be written as `extra`/`brigade_model` or `extra1`/`brigade_model1`.
        let brigades = (1..=5)
            .filter_map(|slot| {
                let (kind, m) = if slot == 1 {
                    (
                        b.get_str("extra1").or(b.get_str("extra")),
                        model("brigade_model1").or(model("brigade_model")),
                    )
                } else {
                    (
                        b.get_str(&format!("extra{slot}")),
                        model(&format!("brigade_model{slot}")),
                    )
                };
                let kind = kind.filter(|k| !k.eq_ignore_ascii_case("none"))?;
                Some(Brigade {
                    kind: kind.to_ascii_lowercase(),
                    model: m,
                })
            })
            .collect();
        Some(Division {
            id: b.get_block("id").and_then(TypeId::from_block),
            name: b.get_str("name").unwrap_or_default().to_owned(),
            kind: b.get_str("type")?.to_ascii_lowercase(),
            model: model("model"),
            strength: b.get_f64("strength"),
            max_strength: b.get_f64("max_strength"),
            organisation: b.get_f64("organisation"),
            experience: b.get_f64("experience"),
            brigades,
            locked: b.get_bool("locked").unwrap_or(false),
            raw: b.clone(),
        })
    }
}

#[derive(Debug, Clone)]
pub struct Unit {
    pub branch: Branch,
    pub id: Option<TypeId>,
    pub name: String,
    pub location: Option<u32>,
    pub home: Option<u32>,
    /// Port or airbase (naval and air units).
    pub base: Option<u32>,
    /// Country controlling the unit when it differs from the owner (expeditionary forces).
    pub control: Option<String>,
    pub leader: Option<i64>,
    pub divisions: Vec<Division>,
    /// Land units carried by ships or transport planes.
    pub carried: Vec<Unit>,
    pub raw: Block,
}

impl Unit {
    pub fn from_block(b: &Block, branch: Branch) -> Self {
        let province = |key: &str| b.get_i64(key).and_then(|v| u32::try_from(v).ok());
        let carried = match branch {
            Branch::Land => Vec::new(),
            _ => b
                .get_all("landunit")
                .filter_map(|v| v.as_block())
                .map(|u| Unit::from_block(u, Branch::Land))
                .collect(),
        };
        Unit {
            branch,
            id: b.get_block("id").and_then(TypeId::from_block),
            name: b.get_str("name").unwrap_or_default().to_owned(),
            location: province("location"),
            home: province("home"),
            base: province("base"),
            control: b.get_str("control").map(str::to_ascii_uppercase),
            leader: b.get_i64("leader"),
            divisions: b
                .get_all("division")
                .filter_map(|v| Division::from_block(v.as_block()?))
                .collect(),
            carried,
            raw: b.clone(),
        }
    }

    /// All units of a country block, in file order per branch.
    pub fn all_in(country: &Block) -> Vec<Unit> {
        [Branch::Land, Branch::Naval, Branch::Air]
            .into_iter()
            .flat_map(|branch| {
                country
                    .get_all(branch.unit_key())
                    .filter_map(|v| v.as_block())
                    .map(move |u| Unit::from_block(u, branch))
            })
            .collect()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_units_and_divisions() {
        let doc = dh_text::script::parse_str(
            r#"
            landunit = { location = 302 name = "II. Armeekorps" id = { type = 14500 id = 37 }
                division = { id = { type = 14500 id = 38 } name = "2. Infanterie-Division"
                             type = infantry model = 1 strength = 100 }
                division = { id = { type = 14500 id = 40 } name = "32. ID" type = infantry
                             model = 1 strength = 100 extra = anti_tank brigade_model = 0 extra3 = artillery }
            }
            navalunit = { location = 300 base = 300 name = "Flotte"
                division = { name = "Deutschland" type = heavy_cruiser model = 2 }
                landunit = { name = "Marines" division = { type = marine model = 0 } }
            }
            "#,
        );
        let units = Unit::all_in(&doc.root);
        assert_eq!(units.len(), 2);
        let corps = &units[0];
        assert_eq!(
            (corps.branch, corps.location, corps.id),
            (
                Branch::Land,
                Some(302),
                Some(TypeId {
                    kind: 14500,
                    id: 37
                })
            )
        );
        assert_eq!(corps.divisions.len(), 2);
        let d = &corps.divisions[1];
        assert_eq!(
            (d.kind.as_str(), d.model, d.strength),
            ("infantry", Some(1), Some(100.0))
        );
        assert_eq!(
            d.brigades,
            [
                Brigade {
                    kind: "anti_tank".into(),
                    model: Some(0)
                },
                Brigade {
                    kind: "artillery".into(),
                    model: None
                }
            ]
        );
        let fleet = &units[1];
        assert_eq!(
            (fleet.branch, fleet.base, fleet.carried.len()),
            (Branch::Naval, Some(300), 1)
        );
        assert_eq!(fleet.carried[0].divisions[0].kind, "marine");
    }
}
