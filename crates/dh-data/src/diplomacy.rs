//! Alliances, wars and treaties from a scenario's `globaldata`, and per-country
//! relations from `diplomacy = { relation = { ... } }` (`docs/spec/scenario.md`
//! §4.4.1–4.4.3, §4.8.6).

use crate::{GameDate, TypeId};
use dh_text::Block;

fn tags(b: &Block, key: &str) -> Vec<String> {
    b.get_all(key)
        .filter_map(|v| v.as_block())
        .flat_map(|l| {
            l.values()
                .filter_map(|v| Some(v.as_scalar()?.text.to_ascii_uppercase()))
        })
        .collect()
}

fn date(b: &Block, key: &str) -> Option<GameDate> {
    b.get_block(key).and_then(GameDate::from_block)
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Faction {
    Axis,
    Allies,
    Comintern,
    /// Any other `alliance` block.
    Other,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Alliance {
    pub faction: Faction,
    pub id: Option<TypeId>,
    /// Localisation suffix (`ALLIANCE_<name>`), DH only.
    pub name: Option<String>,
    pub members: Vec<String>,
    pub defensive: bool,
}

impl Alliance {
    fn from_block(b: &Block, faction: Faction) -> Self {
        Alliance {
            faction,
            id: b.get_block("id").and_then(TypeId::from_block),
            name: b.get_str("name").map(str::to_owned),
            members: tags(b, "participant"),
            defensive: b.get_bool("defensive").unwrap_or(false),
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct War {
    pub id: Option<TypeId>,
    pub start: Option<GameDate>,
    /// Stored as given; shipped scenarios set it to the scenario start even
    /// for wars that continue, so it is not treated as an end of hostilities.
    pub end: Option<GameDate>,
    pub attackers: Vec<String>,
    pub defenders: Vec<String>,
}

impl War {
    fn from_block(b: &Block) -> Self {
        let side = |key: &str| {
            b.get_block(key)
                .map(|s| tags(s, "participant"))
                .unwrap_or_default()
        };
        War {
            id: b.get_block("id").and_then(TypeId::from_block),
            start: date(b, "date"),
            end: date(b, "enddate"),
            attackers: side("attackers"),
            defenders: side("defenders"),
        }
    }

    /// True when `a` and `b` are on opposite sides.
    pub fn opposes(&self, a: &str, b: &str) -> bool {
        let (att, def) = (&self.attackers, &self.defenders);
        let has = |side: &[String], t: &str| side.iter().any(|m| m == t);
        (has(att, a) && has(def, b)) || (has(def, a) && has(att, b))
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TreatyKind {
    NonAggression,
    Peace,
    Trade,
}

#[derive(Debug, Clone, PartialEq)]
pub struct Treaty {
    pub kind: TreatyKind,
    pub id: Option<TypeId>,
    pub countries: [String; 2],
    pub start: Option<GameDate>,
    pub expiry: Option<GameDate>,
}

impl Treaty {
    fn from_block(b: &Block) -> Option<Self> {
        let kind = match b.get_str("type").map(str::to_ascii_lowercase).as_deref() {
            Some("peace") => TreatyKind::Peace,
            Some("trade") => TreatyKind::Trade,
            _ => TreatyKind::NonAggression,
        };
        // `country` appears twice: first side, second side; more are ignored.
        let mut sides = b
            .get_all("country")
            .filter_map(|v| Some(v.as_scalar()?.text.to_ascii_uppercase()));
        Some(Treaty {
            kind,
            id: b.get_block("id").and_then(TypeId::from_block),
            countries: [sides.next()?, sides.next()?],
            start: date(b, "startdate"),
            expiry: date(b, "expirydate"),
        })
    }
}

/// One `relation` entry in a country's `diplomacy` block.
#[derive(Debug, Clone, PartialEq)]
pub struct Relation {
    pub tag: String,
    pub value: f64,
    /// Military access; read as granted by the country owning the block to `tag`
    /// (`docs/spec/land-movement.md` §7.2).
    pub access: bool,
    pub guaranteed: Option<GameDate>,
}

impl Relation {
    pub fn all_in(country: &Block) -> Vec<Relation> {
        country
            .get_all("diplomacy")
            .filter_map(|v| v.as_block())
            .flat_map(|d| d.get_all("relation").filter_map(|v| v.as_block()))
            .filter_map(|r| {
                Some(Relation {
                    tag: r.get_str("tag")?.to_ascii_uppercase(),
                    value: r.get_f64("value").unwrap_or(0.0),
                    access: r.get_bool("access").unwrap_or(false),
                    guaranteed: date(r, "guaranteed"),
                })
            })
            .collect()
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct Diplomacy {
    pub alliances: Vec<Alliance>,
    pub wars: Vec<War>,
    pub treaties: Vec<Treaty>,
}

impl Diplomacy {
    /// Reads the `globaldata` block (absent → empty). Repeated `axis`/`allies`/
    /// `comintern` blocks replace earlier ones; `alliance` blocks accumulate.
    pub fn from_globaldata(global: Option<&Block>) -> Self {
        let Some(g) = global else {
            return Diplomacy::default();
        };
        let mut alliances = Vec::new();
        for (key, faction) in [
            ("axis", Faction::Axis),
            ("allies", Faction::Allies),
            ("comintern", Faction::Comintern),
        ] {
            if let Some(b) = g.get_all(key).filter_map(|v| v.as_block()).last() {
                alliances.push(Alliance::from_block(b, faction));
            }
        }
        alliances.extend(
            g.get_all("alliance")
                .filter_map(|v| v.as_block())
                .map(|b| Alliance::from_block(b, Faction::Other)),
        );
        Diplomacy {
            alliances,
            wars: g
                .get_all("war")
                .filter_map(|v| v.as_block())
                .map(War::from_block)
                .collect(),
            treaties: g
                .get_all("treaty")
                .filter_map(|v| v.as_block())
                .filter_map(Treaty::from_block)
                .collect(),
        }
    }

    pub fn at_war(&self, a: &str, b: &str) -> bool {
        a != b && self.wars.iter().any(|w| w.opposes(a, b))
    }

    /// Whether a country is at war with anyone.
    pub fn in_war(&self, tag: &str) -> bool {
        self.wars
            .iter()
            .any(|w| w.attackers.iter().chain(&w.defenders).any(|m| m == tag))
    }

    pub fn allied(&self, a: &str, b: &str) -> bool {
        a == b
            || self
                .alliances
                .iter()
                .any(|al| al.members.iter().any(|m| m == a) && al.members.iter().any(|m| m == b))
    }

    /// The alliance a country belongs to, as an index into `alliances`: the
    /// first one listing it (assumed; the game keeps a single alliance per
    /// country).
    pub fn alliance_of(&self, tag: &str) -> Option<usize> {
        self.alliances
            .iter()
            .position(|a| a.members.iter().any(|m| m == tag))
    }

    pub fn faction_of(&self, tag: &str) -> Option<Faction> {
        self.alliances
            .iter()
            .find(|a| a.faction != Faction::Other && a.members.iter().any(|m| m == tag))
            .map(|a| a.faction)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    const GLOBAL: &str = r#"
    globaldata = {
      axis = { id = { type = 15000 id = 2 } participant = { GER } }
      allies = { participant = { ENG FRA } participant = { CAN } }
      alliance = { participant = { JAP MAN } }
      war = { id = { type = 9430 id = 1 } date = { year = 1935 month = october day = 3 }
              attackers = { participant = { ITA } } defenders = { participant = { ETH } } }
      treaty = { type = non_aggression country = "ENG" country = "POR"
                 expirydate = { year = 1948 month = december day = 29 } }
      treaty = { country = "GER" }
    }
    country = { tag = GER diplomacy = { relation = { tag = ITA value = 75 access = yes } relation = { tag = ENG value = -20 } } }
    "#;

    #[test]
    fn reads_alliances_wars_and_treaties() {
        let doc = dh_text::script::parse_str(GLOBAL);
        let d = Diplomacy::from_globaldata(doc.root.get_block("globaldata"));
        assert_eq!(d.alliances.len(), 3);
        assert!(d.allied("ENG", "CAN") && d.allied("JAP", "MAN") && !d.allied("GER", "ENG"));
        assert_eq!(d.faction_of("FRA"), Some(Faction::Allies));
        assert_eq!(d.faction_of("JAP"), None);
        assert_eq!(d.alliance_of("CAN"), d.alliance_of("FRA"));
        assert_eq!(d.alliance_of("JAP"), Some(2));
        assert_eq!(d.alliance_of("ETH"), None);
        assert!(d.at_war("ETH", "ITA") && !d.at_war("ITA", "ITA") && !d.at_war("GER", "ENG"));
        assert!(d.in_war("ETH") && d.in_war("ITA") && !d.in_war("GER"));
        assert_eq!(d.treaties.len(), 1, "a treaty needs two countries");
        assert_eq!(
            d.treaties[0].countries,
            ["ENG".to_owned(), "POR".to_owned()]
        );

        let rel = Relation::all_in(doc.root.get_block("country").unwrap());
        assert_eq!(rel.len(), 2);
        assert!(rel[0].access && !rel[1].access);
        assert_eq!(rel[1].value, -20.0);
    }
}
