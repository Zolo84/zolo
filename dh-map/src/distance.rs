//! Province distances (`docs/spec/map-distances.md`). In memory the game
//! measures distance in units of 100 km (`f32`).
//!
//! * `DistanceCalculationModel = 1`: great-circle distances from
//!   `airdist.tbl` (rebuilt from `distances.csv` when missing) and naval
//!   route lengths from `navaldist2.tbl`.
//! * any other value: straight-line pixel distance between the provinces'
//!   army positions (1 px = 0.66 km) and naval routes from `navaldist.tbl`.

use crate::MapError;

/// Level-1 map width in pixels; the map wraps east–west.
const MAP_WIDTH: i64 = 29952;
/// Degrees to radians exactly as stored in the executable (not quite π/180).
const DEG_TO_RAD: f64 = f64::from_bits(0x3F91_DF46_A256_BE5D);
/// Earth radius in km: `f32(6378.8)` widened to `f64`.
const EARTH_RADIUS_KM: f64 = f64::from_bits(0x40B8_EACC_C000_0000);

/// `airdist.tbl`: strictly upper-triangular matrix of whole kilometres for
/// provinces `1..=n`.
#[derive(Debug, Clone)]
pub struct AirDist {
    n: usize,
    km: Vec<u16>,
}

fn pair_count(n: usize) -> usize {
    n * n.saturating_sub(1) / 2
}

impl AirDist {
    pub fn parse(bytes: &[u8]) -> Result<Self, MapError> {
        let n = u16::from_le_bytes(
            bytes
                .get(..2)
                .ok_or(MapError::Truncated)?
                .try_into()
                .unwrap(),
        ) as usize;
        if bytes.len() != 2 + 2 * pair_count(n) {
            return Err(MapError::BadOffsetTable);
        }
        let km = bytes[2..]
            .chunks_exact(2)
            .map(|c| u16::from_le_bytes([c[0], c[1]]))
            .collect();
        Ok(AirDist { n, km })
    }

    /// Recomputes the table from province coordinates the way the game does
    /// when `airdist.tbl` is missing. `coords[i]` belongs to province `i + 1`.
    pub fn from_coords(coords: &[(f64, f64)]) -> Self {
        let n = coords.len();
        let mut km = Vec::with_capacity(pair_count(n));
        for (i, &(lat1, lon1)) in coords.iter().enumerate() {
            let (p1, l1) = (lat1 * DEG_TO_RAD, lon1 * DEG_TO_RAD);
            for &(lat2, lon2) in &coords[i + 1..] {
                let (p2, l2) = (lat2 * DEG_TO_RAD, lon2 * DEG_TO_RAD);
                let c = (l2 - l1).cos() * p1.cos() * p2.cos() + p1.sin() * p2.sin();
                let d = (c.acos() * EARTH_RADIUS_KM) as f32;
                // `fistp` rounds half to even; only the low 16 bits are stored.
                km.push((d as f64).round_ties_even() as i64 as u16);
            }
        }
        AirDist { n, km }
    }

    pub fn to_bytes(&self) -> Vec<u8> {
        let mut out = (self.n as u16).to_le_bytes().to_vec();
        out.extend(self.km.iter().flat_map(|v| v.to_le_bytes()));
        out
    }

    /// Highest province id covered.
    pub fn max_province(&self) -> usize {
        self.n
    }

    /// Whole kilometres between two provinces; 0 for the same province or id 0.
    pub fn km(&self, a: u32, b: u32) -> Option<u16> {
        let (a, b) = (a.min(b) as usize, a.max(b) as usize);
        if a == b || a == 0 {
            return Some(0);
        }
        if b > self.n {
            return None;
        }
        let idx = (a - 1) * self.n - (a - 1) * a / 2 + (b - a - 1);
        self.km.get(idx).copied()
    }

    /// Distance in the game's internal unit (100 km).
    pub fn distance(&self, a: u32, b: u32) -> Option<f32> {
        self.km(a, b).map(|km| km as f32 * 0.01)
    }
}

/// Reads `distances.csv`: a count line, a header, province 0, then one
/// `lat;lon;...` line per province. Provinces are identified by line number,
/// not by the `PROVn` label, and numbers are read with C `atof` semantics.
/// Returns coordinates of provinces `1..total`.
pub fn read_distances_csv(bytes: &[u8]) -> Result<Vec<(f64, f64)>, String> {
    let text = dh_text::encoding::decode(bytes);
    let lines: Vec<&str> = text.split('\n').collect();
    let total = atof(
        lines
            .first()
            .and_then(|l| l.split(';').next())
            .unwrap_or(""),
    ) as usize;
    let newlines = lines.len() - 1;
    if total == 0 || newlines < 2 || newlines - 2 != total {
        return Err(format!(
            "incorrect number of provinces/lines: header {total}, {newlines} line breaks"
        ));
    }
    Ok(lines[3..3 + total - 1]
        .iter()
        .map(|l| {
            let mut f = l.split(';');
            (atof(f.next().unwrap_or("")), atof(f.next().unwrap_or("")))
        })
        .collect())
}

/// C `atof`: the longest numeric prefix, 0 when there is none.
fn atof(s: &str) -> f64 {
    let s = s.trim_start();
    let b = s.as_bytes();
    let mut end = 0;
    if matches!(b.first(), Some(b'+' | b'-')) {
        end = 1;
    }
    let digits_start = end;
    while end < b.len() && b[end].is_ascii_digit() {
        end += 1;
    }
    if end < b.len() && b[end] == b'.' {
        end += 1;
        while end < b.len() && b[end].is_ascii_digit() {
            end += 1;
        }
    }
    if end == digits_start || (end == digits_start + 1 && b[digits_start] == b'.') {
        return 0.0;
    }
    if end < b.len() && matches!(b[end], b'e' | b'E') {
        let mut e = end + 1;
        if e < b.len() && matches!(b[e], b'+' | b'-') {
            e += 1;
        }
        if e < b.len() && b[e].is_ascii_digit() {
            while e < b.len() && b[e].is_ascii_digit() {
                e += 1;
            }
            end = e;
        }
    }
    s[..end].parse().unwrap_or(0.0)
}

/// Old distance model: straight line between army positions (level-1
/// pixels), wrapping east–west, at 0.66 km per pixel, in units of 100 km.
pub fn pixel_distance(a: (i64, i64), b: (i64, i64)) -> f32 {
    let mut dx = (a.0 - b.0).abs();
    if dx > 15000 {
        dx = MAP_WIDTH - dx;
    }
    let dy = a.1 - b.1;
    // The game multiplies in x87 extended precision and rounds once to f32.
    (((dx * dx + dy * dy) as f64).sqrt() * 0.01f32 as f64 * 0.66f32 as f64) as f32
}

/// `navaldist.tbl` / `navaldist2.tbl`: full `N×N` matrix of naval route lengths
/// (100 km units) between "naval nodes".
#[derive(Debug, Clone)]
pub struct NavalDist {
    n: usize,
    m: Vec<f32>,
}

impl NavalDist {
    pub fn parse(bytes: &[u8]) -> Result<Self, MapError> {
        let n = u32::from_le_bytes(
            bytes
                .get(..4)
                .ok_or(MapError::Truncated)?
                .try_into()
                .unwrap(),
        ) as usize;
        if bytes.len() != 4 + 4 * n * n {
            return Err(MapError::BadOffsetTable);
        }
        let m = bytes[4..]
            .chunks_exact(4)
            .map(|c| f32::from_le_bytes(c.try_into().unwrap()))
            .collect();
        Ok(NavalDist { n, m })
    }

    pub fn nodes(&self) -> usize {
        self.n
    }

    pub fn get(&self, i: usize, j: usize) -> Option<f32> {
        (i < self.n && j < self.n).then(|| self.m[i * self.n + j])
    }
}

/// Assigns naval node indices in province-table order: a province gets the
/// next index if it has a port sea zone, or if it is itself a sea zone
/// (ocean terrain in a sea area, i.e. not `-` or `Lake`).
pub fn naval_indices<'a>(provinces: impl IntoIterator<Item = NavalInput<'a>>) -> Vec<(u32, usize)> {
    let mut next = 0;
    let mut out = Vec::new();
    for p in provinces {
        let sea_area = p.terrain.eq_ignore_ascii_case("ocean")
            && !(p.area == "-" || p.area.is_empty() || p.area.eq_ignore_ascii_case("lake"));
        if p.port_seazone > 0 || sea_area {
            out.push((p.id, next));
            next += 1;
        }
    }
    out
}

/// The province-table columns that decide naval node membership.
pub struct NavalInput<'a> {
    pub id: u32,
    pub port_seazone: i64,
    pub terrain: &'a str,
    pub area: &'a str,
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn upper_triangle_indexing() {
        let coords = [(51.5, -0.12), (48.85, 2.35), (40.71, -74.0)];
        let t = AirDist::from_coords(&coords);
        let parsed = AirDist::parse(&t.to_bytes()).unwrap();
        assert_eq!(parsed.max_province(), 3);
        assert_eq!(parsed.km(1, 2), parsed.km(2, 1));
        assert_eq!(parsed.km(2, 2), Some(0));
        let london_paris = parsed.km(1, 2).unwrap();
        assert!((330..360).contains(&london_paris), "{london_paris}");
        assert!((5500..5650).contains(&parsed.km(1, 3).unwrap()));
        assert_eq!(parsed.km(1, 4), None);
    }

    #[test]
    fn atof_prefixes() {
        assert_eq!(atof("-12.5PROV7"), -12.5);
        assert_eq!(atof(" 64.13"), 64.13);
        assert_eq!(atof("1e3x"), 1000.0);
        assert_eq!(atof("abc"), 0.0);
        assert_eq!(atof("-"), 0.0);
    }

    #[test]
    fn reads_csv_by_line_number() {
        let csv = b"3;Total Provinces;\r\nlat;lon;\r\n0;0;PROV0\r\n64.1;-21.9;PROV1\r\n65.0;-14.0PROV2\r\nEOF;";
        let coords = read_distances_csv(csv).unwrap();
        assert_eq!(coords, [(64.1, -21.9), (65.0, -14.0)]);
        assert!(read_distances_csv(b"5;x\nheader\n0;0\n1;1\nEOF").is_err());
    }

    #[test]
    fn pixel_distance_wraps() {
        assert_eq!(
            pixel_distance((0, 0), (300, 400)),
            (500.0f64 * 0.01f32 as f64 * 0.66f32 as f64) as f32
        );
        assert_eq!(
            pixel_distance((10, 0), (29942, 0)),
            pixel_distance((0, 0), (20, 0))
        );
    }

    #[test]
    fn assigns_naval_indices() {
        let rows = [
            NavalInput {
                id: 1,
                port_seazone: 2374,
                terrain: "Plains",
                area: "Iceland",
            },
            NavalInput {
                id: 2,
                port_seazone: 0,
                terrain: "Plains",
                area: "Iceland",
            },
            NavalInput {
                id: 3,
                port_seazone: 0,
                terrain: "Ocean",
                area: "Lake",
            },
            NavalInput {
                id: 4,
                port_seazone: 0,
                terrain: "Ocean",
                area: "Baltic Sea",
            },
        ];
        assert_eq!(naval_indices(rows), [(1, 0), (4, 1)]);
    }
}
