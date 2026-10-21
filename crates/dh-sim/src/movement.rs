//! Land movement (`docs/spec/land-movement.md`): hop time between adjacent
//! provinces, stack speed, and route finding with the game's land cost.
//!
//! Not modelled yet (fixed at their neutral values): weather (clear), night
//! (off in the shipped game), country speed
//! multiplier and difficulty (1.0), leader traits, missions, fuel, and
//! embarking.

use dh_data::{Division, Provinces, UnitDb, Vfs};
use dh_map::{AdjKind, Adjacency, Link, Path};

/// Terrain indices as used by the engine (`map/Terrain types.csv`).
pub mod terrain {
    pub const PLAINS: u8 = 0;
    pub const URBAN: u8 = 7;
    pub const OCEAN: u8 = 8;
    pub const RIVER: u8 = 9;
    pub const NAMES: [&str; 12] = [
        "plains",
        "forest",
        "mountain",
        "desert",
        "marsh",
        "hills",
        "jungle",
        "urban",
        "ocean",
        "river",
        "terra incognito",
        "unknown",
    ];
}

/// Row index of `MOV_*` modifiers in `modifiers.csv`, by terrain index 0..=7.
const MOV_TERRAIN_ROW: [usize; 8] = [43, 47, 45, 44, 49, 46, 48, 50];
/// `MOV_CLEAR`: the weather row used while weather is not simulated.
const MOV_CLEAR_ROW: usize = 35;

#[derive(Debug, Clone, Copy)]
pub struct ProvinceInfo {
    pub terrain: u8,
    /// 0.0..=1.0
    pub infra: f32,
    /// Army position in level-1 map pixels.
    pub army_pos: (i64, i64),
}

impl ProvinceInfo {
    pub fn is_water(&self) -> bool {
        matches!(self.terrain, terrain::OCEAN | terrain::RIVER)
    }
}

/// Positional `db/units/modifiers.csv`: rows are modifiers (ATT_, DEF_, MOV_),
/// columns are division type indices. Values are percentages.
#[derive(Debug, Clone, Default)]
pub struct UnitModifiers {
    names: Vec<String>,
    rows: Vec<Vec<f32>>,
}

impl UnitModifiers {
    pub fn parse(bytes: &[u8]) -> Self {
        let table = dh_text::CsvTable::parse(bytes);
        // The first line is a header; every later line occupies a row slot.
        let data = table.rows.iter().skip(1);
        UnitModifiers {
            names: data
                .clone()
                .map(|(_, r)| r.first().cloned().unwrap_or_default().to_ascii_uppercase())
                .collect(),
            rows: data
                .map(|(_, r)| {
                    r.iter()
                        .skip(1)
                        .map(|v| v.parse::<f32>().unwrap_or(0.0))
                        .collect()
                })
                .collect(),
        }
    }

    /// Modifier as a fraction (CSV percent / 100).
    pub fn get(&self, row: usize, division_type: usize) -> f32 {
        self.rows
            .get(row)
            .and_then(|r| r.get(division_type))
            .copied()
            .unwrap_or(0.0)
            / 100.0
    }

    /// Row index of a named modifier such as `ATT_RIVER`.
    pub fn row(&self, name: &str) -> Option<usize> {
        self.names.iter().position(|n| n == name)
    }

    /// Named modifier as a fraction; 0 when the row is missing.
    pub fn named(&self, name: &str, division_type: usize) -> f32 {
        self.row(name).map_or(0.0, |r| self.get(r, division_type))
    }
}

/// Static map and unit data needed to move stacks.
pub struct MoveContext {
    pub adjacency: Adjacency,
    pub provinces: Vec<Option<ProvinceInfo>>,
    pub terrain_move: [f64; 12],
    pub modifiers: UnitModifiers,
    pub units: UnitDb,
}

impl MoveContext {
    pub fn load(vfs: &Vfs) -> Result<Self, String> {
        let mut warnings = Vec::new();
        let table = Provinces::load(vfs, &mut warnings).map_err(|e| e.to_string())?;
        let max_id = table.by_id.keys().copied().max().unwrap_or(0) as usize;
        let mut provinces = vec![None; max_id + 1];
        for (id, p) in &table.by_id {
            let f = |k: &str| p.fields.get(k).map(String::as_str);
            let num = |k: &str| f(k).and_then(|v| v.parse::<i64>().ok());
            let terrain_name = f("terrain").unwrap_or("").to_ascii_lowercase();
            let terrain = match terrain_name.as_str() {
                "clear" => terrain::PLAINS,
                t => terrain::NAMES.iter().position(|n| *n == t).unwrap_or(11) as u8,
            };
            provinces[*id as usize] = Some(ProvinceInfo {
                terrain,
                infra: num("infrastructure").unwrap_or(0) as f32 / 100.0,
                army_pos: (num("army xpos").unwrap_or(0), num("army ypos").unwrap_or(0)),
            });
        }

        let mut terrain_move = [1.0; 12];
        let csv = dh_text::CsvTable::parse_with_header(
            &vfs.read("map/terrain types.csv")
                .map_err(|e| e.to_string())?,
        );
        for (_, row) in &csv.rows {
            if let (Some(i), Some(v)) = (
                row.first().and_then(|v| v.parse::<usize>().ok()),
                row.get(2),
            ) {
                if i < terrain_move.len() {
                    terrain_move[i] = v.parse().unwrap_or(0.0);
                }
            }
        }

        let bytes = vfs.read("map/adjacent.tbl").map_err(|e| e.to_string())?;
        let n = Adjacency::infer_count(&bytes).ok_or("cannot size adjacent.tbl")?;
        let mut adjacency = Adjacency::parse(&bytes, n).map_err(|e| e.to_string())?;
        if let Ok(defs) = vfs.read("map/adj-defs.csv") {
            adjacency.apply_defs(&defs, |p| {
                table
                    .get(p)
                    .and_then(|p| p.fields.get("area"))
                    .is_some_and(|a| a != "-")
            });
        }

        Ok(MoveContext {
            adjacency,
            provinces,
            terrain_move,
            modifiers: UnitModifiers::parse(
                &vfs.read("db/units/modifiers.csv")
                    .map_err(|e| e.to_string())?,
            ),
            units: UnitDb::load(vfs, &mut warnings).map_err(|e| e.to_string())?,
        })
    }

    pub fn province(&self, id: u32) -> Option<&ProvinceInfo> {
        self.provinces.get(id as usize)?.as_ref()
    }

    /// Distance in the game's 100-km unit (pixel model, `DistanceCalculationModel = 0`).
    pub fn distance(&self, a: u32, b: u32) -> Option<f32> {
        Some(dh_map::distance::pixel_distance(
            self.province(a)?.army_pos,
            self.province(b)?.army_pos,
        ))
    }

    /// Speed of a stack in its destination province, km/h (spec §3).
    pub fn stack_speed(&self, divisions: &[Division], dest: u32, supply: f32) -> f32 {
        if divisions.is_empty() {
            return 1.0;
        }
        let terrain = self.province(dest).map_or(terrain::PLAINS, |p| p.terrain);
        let factor = self.terrain_move[terrain as usize];
        let mut best = 200.0f32;
        let mut halve = false;
        for d in divisions {
            let speed = self.units.division_stats(d).map_or(0.0, |s| s.max_speed);
            let column = dh_data::unitdb::DIVISION_TYPES
                .iter()
                .position(|t| *t == d.kind)
                .unwrap_or(usize::MAX);
            let mut x = (speed / factor) as f32;
            if let Some(&row) = MOV_TERRAIN_ROW.get(terrain as usize) {
                x *= 1.0 + self.modifiers.get(row, column);
            }
            x *= 1.0 + self.modifiers.get(MOV_CLEAR_ROW, column);
            best = best.min(x);
            if d.organisation.is_some_and(|o| o < 1.0) {
                halve = true;
            }
        }
        if halve {
            best /= 2.0;
        }
        best *= supply;
        best.max(1.0) * 0.75
    }

    /// Whole hours to move a stack across one link (spec §4), at least 1.
    /// `hostile`: the destination is controlled by a country at war with the stack.
    /// `supply`: speed factor from supply (1.0 for a fully supplied stack).
    pub fn hop_hours(
        &self,
        divisions: &[Division],
        from: u32,
        link: &Link,
        hostile: bool,
        supply: f32,
    ) -> Option<u32> {
        let dest = self.province(link.to)?;
        let mut d = self.distance(from, link.to)? * 100.0;
        if !dest.is_water() {
            d *= 2.4f32 - dest.infra;
            match link.kind {
                AdjKind::River => d *= 1.25,
                AdjKind::Sea | AdjKind::Canal => d *= 1.33,
                _ => {}
            }
        }
        d = d.max(1.0);
        let v = self.stack_speed(divisions, link.to, supply);
        if hostile && !dest.is_water() {
            d *= 1.25;
        }
        Some(((d as f64 / v as f64) as u32).max(1))
    }

    /// Land route with the game's step cost (spec §6.3): terrain difficulty
    /// scaled by missing infrastructure, plus crossing penalties; distance
    /// only enters the (tiny) heuristic. `can_enter` decides passability.
    pub fn land_route(
        &self,
        from: u32,
        to: u32,
        mut can_enter: impl FnMut(u32) -> bool,
    ) -> Option<Path> {
        dh_map::shortest_path(
            &self.adjacency,
            from,
            to,
            |_, link| {
                let p = self.province(link.to)?;
                if link.kind == AdjKind::Impassable || p.is_water() || !can_enter(link.to) {
                    return None;
                }
                let mut c =
                    (self.terrain_move[p.terrain as usize] as f32) * (1.0 + 2.5 * (1.0 - p.infra));
                if c <= 1e-5 {
                    c = 1.0;
                }
                c += match link.kind {
                    AdjKind::River => 0.1,
                    AdjKind::Sea | AdjKind::Canal => 0.75,
                    _ => 0.0,
                };
                Some(c)
            },
            |p| self.distance(p, to).unwrap_or(0.0) * 0.012,
        )
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn modifiers_are_positional_percentages() {
        let csv = b"MODIFIER;INF;CAV;X\nATT_CLEAR;0;0;X\nMOV_X;-15;10;X\n";
        let m = UnitModifiers::parse(csv);
        assert_eq!((m.get(1, 0), m.get(1, 1), m.get(7, 0)), (-0.15, 0.1, 0.0));
    }
}
