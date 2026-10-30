//! What a country's cabinet does (`docs/spec/ministers.md`): the commands
//! of its ten ministers' personalities, summed into country modifiers when
//! the game starts or a minister changes (`0x451390`).
//!
//! Values are added as written in the file (no ×0.01); multipliers start
//! at 1, the rest at 0, and most are then kept within 0.01..=10. Only the
//! modifiers the simulation uses are kept: production, resources and
//! money, population growth, transport capacity, supply consumption,
//! leader skill, land speed, dissent, the per-type unit and brigade
//! tables (time, cost, organisation, morale, attack, defence) and the
//! time and cost of province buildings.

use dh_data::ministers::MinisterCommand;
use dh_data::unitdb::DIVISION_TYPES;
use dh_data::{Branch, UnitDb};
use std::collections::BTreeMap;

/// Columns of the unit and brigade tables.
pub const TIME: usize = 0;
pub const COST: usize = 1;
pub const ORGANISATION: usize = 2;
pub const MORALE: usize = 3;
pub const ATTACK: usize = 4;
pub const DEFENCE: usize = 5;

/// Time and cost start at 1, the bonuses at 0.
const UNIT_START: [f32; 6] = [1.0, 1.0, 0.0, 0.0, 0.0, 0.0];

#[derive(Debug, Clone, PartialEq)]
pub struct MinisterModifiers {
    /// IC slider multipliers (`production` command by `which`).
    pub consumer: f32,
    pub production: f32,
    pub supplies: f32,
    pub reinforcement: f32,
    pub upgrading: f32,
    /// Added to the share of IC from non-national provinces (`production`
    /// with a `when` other than `national`); not clamped.
    pub non_national_production: f32,
    /// Output multipliers of oil, energy, metal and rare materials, and of
    /// money (`resource` by `which`; `all` is all five).
    pub oil: f32,
    pub energy: f32,
    pub metal: f32,
    pub rare_materials: f32,
    pub money: f32,
    /// Daily manpower growth (`populationgrowth`): the multiplier of the
    /// whole, which `when = national` (the default) multiplies by `1 + v`,
    /// and what other `when`s add for non-national provinces, within 0..=10.
    pub population_growth: f32,
    pub non_national_population_growth: f32,
    pub leader_skill: f32,
    /// Land speed (`unit when = speed`).
    pub speed: f32,
    pub dissent: f32,
    pub tc: f32,
    pub supply_consumption: f32,
    /// By division / brigade type: time, cost, organisation, morale,
    /// attack, defence.
    pub divisions: BTreeMap<String, [f32; 6]>,
    pub brigades: BTreeMap<String, [f32; 6]>,
    /// Time and cost factors of province buildings by index
    /// (`dh_data::production::BUILDINGS`; `C+0x11A2C`), from `province`
    /// commands.
    pub buildings: [[f32; 2]; 11],
}

impl Default for MinisterModifiers {
    fn default() -> Self {
        MinisterModifiers {
            consumer: 1.0,
            production: 1.0,
            supplies: 1.0,
            reinforcement: 1.0,
            upgrading: 1.0,
            non_national_production: 0.0,
            oil: 1.0,
            energy: 1.0,
            metal: 1.0,
            rare_materials: 1.0,
            money: 1.0,
            population_growth: 1.0,
            non_national_population_growth: 0.0,
            leader_skill: 1.0,
            speed: 1.0,
            dissent: 1.0,
            tc: 1.0,
            supply_consumption: 1.0,
            divisions: BTreeMap::new(),
            brigades: BTreeMap::new(),
            buildings: [[1.0; 2]; 11],
        }
    }
}

/// The game's division types by branch (`0xDBD162`): the first twelve are
/// land, the next nine and the rocket interceptor air, the rest naval.
fn division_branch(i: usize) -> Branch {
    match i {
        0..=11 => Branch::Land,
        12..=20 | 32 => Branch::Air,
        _ => Branch::Naval,
    }
}

impl MinisterModifiers {
    /// A division type's row: time, cost, organisation, morale, attack, defence.
    pub fn unit(&self, kind: &str) -> [f32; 6] {
        self.divisions.get(kind).copied().unwrap_or(UNIT_START)
    }

    pub fn brigade(&self, kind: &str) -> [f32; 6] {
        self.brigades.get(kind).copied().unwrap_or(UNIT_START)
    }

    /// Sums the commands of a cabinet (`0x451390`).
    pub fn from_commands<'a>(
        commands: impl IntoIterator<Item = &'a MinisterCommand>,
        units: &UnitDb,
    ) -> Self {
        let mut m = MinisterModifiers::default();
        for c in commands {
            m.apply(c, units);
        }
        m.clamp();
        m
    }

    fn apply(&mut self, c: &MinisterCommand, units: &UnitDb) {
        let v = c.value as f32;
        let which = c.which.as_deref();
        let when = c.when.as_deref();
        match c.kind.as_str() {
            "production" => match which.unwrap_or("production") {
                "consumer" => self.consumer += v,
                "production" if when.is_none_or(|w| w == "national") => self.production += v,
                "production" => self.non_national_production += v,
                "supplies" => self.supplies += v,
                "reinforcement" => self.reinforcement += v,
                "upgrading" => self.upgrading += v,
                _ => {}
            },
            "resource" => match which.unwrap_or("all") {
                "all" => {
                    for x in [
                        &mut self.oil,
                        &mut self.energy,
                        &mut self.metal,
                        &mut self.rare_materials,
                        &mut self.money,
                    ] {
                        *x += v;
                    }
                }
                "oil" => self.oil += v,
                "energy" => self.energy += v,
                "metal" => self.metal += v,
                "rare_materials" => self.rare_materials += v,
                "money" => self.money += v,
                _ => {}
            },
            // The one command that multiplies (`0x451390`).
            "populationgrowth" if when.is_none_or(|w| w == "national") => {
                self.population_growth *= 1.0 + v;
            }
            "populationgrowth" => self.non_national_population_growth += v,
            "unit" if when == Some("speed") => self.speed += v,
            "unit" => {
                let types: Vec<String> = match which.unwrap_or("all") {
                    "all" => DIVISION_TYPES.iter().map(|t| t.to_string()).collect(),
                    w @ ("land" | "navy" | "air") => DIVISION_TYPES
                        .iter()
                        .enumerate()
                        .filter(|&(i, _)| branch_named(w) == Some(division_branch(i)))
                        .map(|(_, t)| t.to_string())
                        .collect(),
                    t => vec![t.to_owned()],
                };
                for t in types {
                    let row = self.divisions.entry(t).or_insert(UNIT_START);
                    add_columns(row, when, v);
                }
            }
            "extra" => {
                let types: Vec<String> = match which.unwrap_or("all") {
                    "all" => units.brigades.keys().cloned().collect(),
                    w @ ("land" | "navy" | "air") => units
                        .brigades
                        .iter()
                        .filter(|(_, b)| branch_named(w) == Some(b.branch))
                        .map(|(k, _)| k.clone())
                        .collect(),
                    t => vec![t.to_owned()],
                };
                for t in types {
                    let row = self.brigades.entry(t).or_insert(UNIT_START);
                    add_columns(row, when, v);
                }
            }
            // `0x451791`: `all` is every row (and the "all" slot 0).
            "province" => {
                let rows = match which.unwrap_or("all") {
                    "all" => 0..11,
                    w => match MINISTER_BUILDINGS.iter().position(|b| *b == w) {
                        Some(i) => i..i + 1,
                        None => 0..0,
                    },
                };
                let cols: &[usize] = match when.unwrap_or("all") {
                    "all" => &[TIME, COST],
                    "time" => &[TIME],
                    "cost" => &[COST],
                    _ => &[],
                };
                for row in &mut self.buildings[rows] {
                    for &k in cols {
                        row[k] += v;
                    }
                }
            }
            "leader_skill" => self.leader_skill += v,
            "dissent" => self.dissent += v,
            "tc_mod" => self.tc += v,
            "supply_consumption" => self.supply_consumption += v,
            _ => {}
        }
    }

    /// Below the minimum → minimum, else above the maximum → maximum.
    fn clamp(&mut self) {
        let c = |x: &mut f32| *x = x.clamp(0.01, 10.0);
        for x in [
            &mut self.consumer,
            &mut self.production,
            &mut self.supplies,
            &mut self.reinforcement,
            &mut self.upgrading,
            &mut self.oil,
            &mut self.energy,
            &mut self.metal,
            &mut self.rare_materials,
            &mut self.money,
            &mut self.population_growth,
            &mut self.leader_skill,
            &mut self.speed,
            &mut self.dissent,
            &mut self.tc,
            &mut self.supply_consumption,
        ] {
            c(x);
        }
        self.non_national_population_growth = self.non_national_population_growth.clamp(0.0, 10.0);
        for row in self
            .divisions
            .values_mut()
            .chain(self.brigades.values_mut())
        {
            c(&mut row[TIME]);
            c(&mut row[COST]);
        }
        for row in &mut self.buildings {
            c(&mut row[TIME]);
            c(&mut row[COST]);
        }
    }

    /// `0x44C7F0`: the factor of column `k` for a division, `1 + v` at
    /// least 0.01; a type without its own value takes the largest non-zero
    /// one among its brigades.
    pub fn division_factor(&self, kind: &str, brigades: &[&str], k: usize) -> f32 {
        let mut v = self.unit(kind)[k];
        if v == 0.0 {
            v = brigades
                .iter()
                .map(|b| self.brigade(b)[k])
                .filter(|&x| x != 0.0)
                .fold(0.0, f32::max);
        }
        (1.0 + v).max(0.01)
    }

    /// Land combat row 17 (`combat[164]` = 1): the division type's attack or
    /// defence bonus, or else the sum of its brigades'.
    pub fn combat_bonus(&self, kind: &str, brigades: &[&str], k: usize) -> f32 {
        let v = self.unit(kind)[k];
        if v != 0.0 {
            return v;
        }
        brigades.iter().map(|b| self.brigade(b)[k]).sum()
    }
}

/// Building names of the `province` command by row (`0x451791`); row 0
/// is the "all" slot.
const MINISTER_BUILDINGS: [&str; 11] = [
    "",
    "ic",
    "coastalfort",
    "landfort",
    "flak",
    "infra",
    "air_base",
    "naval_base",
    "radar_station",
    "nuclear_reactor",
    "rocket_test",
];

fn branch_named(w: &str) -> Option<Branch> {
    match w {
        "land" => Some(Branch::Land),
        "navy" => Some(Branch::Naval),
        "air" => Some(Branch::Air),
        _ => None,
    }
}

/// `when`: all (time and cost), time, cost, organisation, morale, attack,
/// defence.
fn add_columns(row: &mut [f32; 6], when: Option<&str>, v: f32) {
    let cols: &[usize] = match when.unwrap_or("all") {
        "all" => &[TIME, COST],
        "time" => &[TIME],
        "cost" => &[COST],
        "organisation" => &[ORGANISATION],
        "morale" => &[MORALE],
        "attack" => &[ATTACK],
        "defence" => &[DEFENCE],
        _ => &[],
    };
    for &k in cols {
        row[k] += v;
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn cmd(kind: &str, which: Option<&str>, when: Option<&str>, value: f64) -> MinisterCommand {
        MinisterCommand {
            kind: kind.into(),
            which: which.map(Into::into),
            when: when.map(Into::into),
            value,
        }
    }

    #[test]
    fn commands_route_to_their_modifiers() {
        let units = UnitDb::default();
        let m = MinisterModifiers::from_commands(
            &[
                cmd("production", Some("production"), None, 0.05),
                cmd("production", Some("production"), Some("non_national"), 0.15),
                cmd("production", Some("consumer"), None, 0.1),
                cmd("unit", None, Some("speed"), 0.1),
                cmd("unit", Some("armor"), None, -0.05),
                cmd("unit", Some("armor"), Some("attack"), 0.05),
                cmd("unit", Some("land"), Some("organisation"), 0.1),
                cmd("tc_mod", None, None, -2.0),
                cmd("resource", Some("money"), None, -0.25),
                cmd("resource", None, None, 0.1),
                cmd("populationgrowth", None, None, 0.1),
                cmd("populationgrowth", None, Some("national"), 0.25),
                cmd("populationgrowth", None, Some("non_national"), 0.05),
                cmd("province", Some("landfort"), None, -0.1),
                cmd("province", None, Some("cost"), 0.2),
            ],
            &units,
        );
        assert!((m.production - 1.05).abs() < 1e-6);
        assert!((m.non_national_production - 0.15).abs() < 1e-6);
        assert!((m.consumer - 1.1).abs() < 1e-6);
        assert!((m.speed - 1.1).abs() < 1e-6);
        assert_eq!(m.tc, 0.01, "clamped");
        assert!((m.money - 0.85).abs() < 1e-6 && (m.rare_materials - 1.1).abs() < 1e-6);
        // Multiplied: 1.1 · 1.25.
        assert!((m.population_growth - 1.375).abs() < 1e-6);
        assert!((m.non_national_population_growth - 0.05).abs() < 1e-6);
        let armor = m.unit("armor");
        assert!((armor[TIME] - 0.95).abs() < 1e-6 && (armor[COST] - 0.95).abs() < 1e-6);
        assert!((armor[ATTACK] - 0.05).abs() < 1e-6);
        assert!((armor[ORGANISATION] - 0.1).abs() < 1e-6, "land");
        assert_eq!(m.unit("battleship")[ORGANISATION], 0.0, "not land");
        assert_eq!(m.unit("infantry"), [1.0, 1.0, 0.1, 0.0, 0.0, 0.0]);
        assert!((m.division_factor("armor", &[], ORGANISATION) - 1.1).abs() < 1e-6);
        assert_eq!(m.combat_bonus("cavalry", &[], ATTACK), 0.0);
        // Land forts: time 0.9, cost 0.9 + 0.2; others' cost 1.2.
        let fort = m.buildings[3];
        assert!((fort[TIME] - 0.9).abs() < 1e-6 && (fort[COST] - 1.1).abs() < 1e-6);
        assert_eq!(m.buildings[1][TIME], 1.0);
        assert!((m.buildings[1][COST] - 1.2).abs() < 1e-6);
    }
}
