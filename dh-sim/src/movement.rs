//! Land movement (`docs/spec/land-movement.md`): hop time between adjacent
//! provinces, stack speed, and route finding with the game's land cost.
//!
//! Not modelled yet (fixed at their neutral values): night (off in the
//! shipped game), country speed multiplier and difficulty (1.0), missions,
//! fuel, and embarking.

use dh_data::{Division, Misc, Provinces, UnitDb, Vfs, Weather};
use dh_map::distance::AirDist;
use dh_map::{AdjKind, Adjacency, Link, Path};

/// Terrain indices as used by the engine (`map/Terrain types.csv`).
pub mod terrain {
    pub const PLAINS: u8 = 0;
    pub const DESERT: u8 = 3;
    pub const MARSH: u8 = 4;
    pub const JUNGLE: u8 = 6;
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
/// Row index of `MOV_*` modifiers by weather 0..=6 (`0x44D760`).
const MOV_WEATHER_ROW: [usize; 7] = [35, 38, 39, 37, 40, 36, 41];

/// What a stack's speed depends on besides its divisions and the
/// destination province (spec §3).
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct MoveConditions {
    /// Speed factor from supply (§3.1): 1.0 for a fully supplied stack.
    pub supply: f32,
    /// Weather of the destination province.
    pub weather: Weather,
    /// Leader trait bonuses (§3.5) as one factor, applied after `× 0.75`.
    pub leader: f32,
    /// Speed of a division without fuel (`combat[211]`, `0x50818E`), when
    /// the rule is on.
    pub fuel_speed: Option<f32>,
    /// Travel time factor while any division has no fuel (`combat[210]`,
    /// `0x431184`).
    pub no_fuel_travel: f32,
}

impl Default for MoveConditions {
    fn default() -> Self {
        MoveConditions {
            supply: 1.0,
            weather: Weather::Clear,
            leader: 1.0,
            fuel_speed: None,
            no_fuel_travel: 3.0,
        }
    }
}

#[derive(Debug, Clone, Copy)]
pub struct ProvinceInfo {
    pub terrain: u8,
    /// 0.0..=1.0
    pub infra: f32,
    /// Army position in level-1 map pixels.
    pub army_pos: (i64, i64),
    pub climate: dh_data::Climate,
    /// Centre of its bounding box (`boundbox.tbl`), level-1 pixels, y down.
    pub centre: (i64, i64),
    /// Northern hemisphere: city `YPos` (the box centre's when the city is
    /// at 0;0) below 7200, y growing southward (weather.md §1).
    pub north: bool,
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
    /// Real distances when `misc.txt` selects them (`map[3]` = 1) and the
    /// table loads; otherwise the pixel model.
    pub airdist: Option<AirDist>,
}

/// `airdist.tbl` of a map folder, rebuilt from `distances.csv` when the
/// table is missing or unreadable, as the game does; `None` when neither
/// works, which makes the game fall back to the pixel model.
fn load_airdist(vfs: &Vfs, dir: &str) -> Option<AirDist> {
    if let Some(table) = vfs
        .read(&format!("{dir}/airdist.tbl"))
        .ok()
        .and_then(|b| AirDist::parse(&b).ok())
    {
        return Some(table);
    }
    let csv = vfs.read(&format!("{dir}/distances.csv")).ok()?;
    let coords = dh_map::distance::read_distances_csv(&csv).ok()?;
    Some(AirDist::from_coords(&coords))
}

impl MoveContext {
    /// Loads the map `misc.txt` selects (map-distances.md §2): its folder,
    /// and for a numbered map also its own `Province.csv`.
    pub fn load(vfs: &Vfs) -> Result<Self, String> {
        let mut warnings = Vec::new();
        let misc = Misc::load(vfs).unwrap_or_default();
        let dir = misc.map_dir();
        let table = Provinces::load_active(vfs, &mut warnings).map_err(|e| e.to_string())?;
        let max_id = table.by_id.keys().copied().max().unwrap_or(0) as usize;
        let mut provinces = vec![None; max_id + 1];
        let boxes = vfs
            .read(&format!("{dir}/boundbox.tbl"))
            .map(|b| dh_map::BoundBox::parse(&b))
            .unwrap_or_default();
        for (id, p) in &table.by_id {
            let f = |k: &str| p.fields.get(k).map(String::as_str);
            let num = |k: &str| f(k).and_then(|v| v.parse::<i64>().ok());
            let terrain_name = f("terrain").unwrap_or("").to_ascii_lowercase();
            let terrain = match terrain_name.as_str() {
                "clear" => terrain::PLAINS,
                t => terrain::NAMES.iter().position(|n| *n == t).unwrap_or(11) as u8,
            };
            let army_pos = (num("army xpos").unwrap_or(0), num("army ypos").unwrap_or(0));
            // `0x4D7620`: x0 + (x1 − x0) / 2, likewise y.
            let centre = boxes.get(*id as u16).map_or(army_pos, |r| {
                (
                    r.left as i64 + (r.right as i64 - r.left as i64) / 2,
                    r.top as i64 + (r.bottom as i64 - r.top as i64) / 2,
                )
            });
            let city = (num("city xpos").unwrap_or(0), num("city ypos").unwrap_or(0));
            let city_y = if city == (0, 0) { centre.1 } else { city.1 };
            provinces[*id as usize] = Some(ProvinceInfo {
                terrain,
                infra: num("infrastructure").unwrap_or(0) as f32 / 100.0,
                army_pos,
                climate: dh_data::Climate::from_name(f("climate").unwrap_or("")),
                centre,
                north: city_y < 7200,
            });
        }

        let mut terrain_move = [1.0; 12];
        let csv = dh_text::CsvTable::parse_with_header(
            &vfs.read(&format!("{dir}/terrain types.csv"))
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

        let bytes = vfs
            .read(&format!("{dir}/adjacent.tbl"))
            .map_err(|e| e.to_string())?;
        let n = Adjacency::infer_count(&bytes).ok_or("cannot size adjacent.tbl")?;
        let mut adjacency = Adjacency::parse(&bytes, n).map_err(|e| e.to_string())?;
        if let Ok(defs) = vfs.read(&format!("{dir}/adj-defs.csv")) {
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
            airdist: misc
                .real_distances()
                .then(|| load_airdist(vfs, &dir))
                .flatten(),
        })
    }

    pub fn province(&self, id: u32) -> Option<&ProvinceInfo> {
        self.provinces.get(id as usize)?.as_ref()
    }

    /// The neighbours most of the game's code looks at (map-adjacency.md
    /// §4.2): the links before the first one into a river province, which on
    /// the shipped maps are all of them.
    pub fn regular_neighbours(&self, p: u32) -> impl Iterator<Item = &Link> + '_ {
        self.adjacency.neighbours(p).iter().take_while(|l| {
            self.province(l.to)
                .is_none_or(|i| i.terrain != terrain::RIVER)
        })
    }

    /// An island (`0x4E4910`, land-combat.md §4.3): a land province whose
    /// regular neighbours are all water, whatever the kind of link.
    /// Envelopment and encirclement do not apply there.
    pub fn is_island(&self, p: u32) -> bool {
        self.province(p).is_some_and(|i| !i.is_water())
            && self
                .regular_neighbours(p)
                .all(|l| self.province(l.to).is_some_and(ProvinceInfo::is_water))
    }

    /// Distance in the game's 100-km unit: from `airdist.tbl` when loaded,
    /// else the pixel model (`DistanceCalculationModel = 0`).
    pub fn distance(&self, a: u32, b: u32) -> Option<f32> {
        if let Some(table) = &self.airdist {
            return table.distance(a, b);
        }
        Some(dh_map::distance::pixel_distance(
            self.province(a)?.army_pos,
            self.province(b)?.army_pos,
        ))
    }

    /// Speed of a stack in its destination province, km/h (spec §3).
    pub fn stack_speed(&self, divisions: &[Division], dest: u32, cond: &MoveConditions) -> f32 {
        if divisions.is_empty() {
            return 1.0;
        }
        let terrain = self.province(dest).map_or(terrain::PLAINS, |p| p.terrain);
        let factor = self.terrain_move[terrain as usize];
        let mut best = 200.0f32;
        let mut halve = false;
        for d in divisions {
            let mut speed = self.units.division_stats(d).map_or(0.0, |s| s.max_speed);
            if let Some(v) = cond.fuel_speed.filter(|_| d.no_fuel) {
                speed = speed.min(f64::from(v));
            }
            let column = dh_data::unitdb::DIVISION_TYPES
                .iter()
                .position(|t| *t == d.kind)
                .unwrap_or(usize::MAX);
            let mut x = (speed / factor) as f32;
            if let Some(&row) = MOV_TERRAIN_ROW.get(terrain as usize) {
                x *= 1.0 + self.modifiers.get(row, column);
            }
            x *= 1.0
                + self
                    .modifiers
                    .get(MOV_WEATHER_ROW[cond.weather as usize], column);
            best = best.min(x);
            if d.organisation.is_some_and(|o| o < 1.0) {
                halve = true;
            }
        }
        if halve {
            best /= 2.0;
        }
        best *= cond.supply;
        best.max(1.0) * 0.75 * cond.leader
    }

    /// Whole hours to move a stack across one link (spec §4), at least 1.
    /// `hostile`: the destination is controlled by a country at war with the stack.
    pub fn hop_hours(
        &self,
        divisions: &[Division],
        from: u32,
        link: &Link,
        hostile: bool,
        cond: &MoveConditions,
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
        let v = self.stack_speed(divisions, link.to, cond);
        if hostile && !dest.is_water() {
            d *= 1.25;
        }
        if divisions.iter().any(|d| d.no_fuel) {
            d *= cond.no_fuel_travel;
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
