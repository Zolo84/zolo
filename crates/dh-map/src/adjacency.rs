//! Province adjacency: `map/adjacent.tbl` plus the overrides in
//! `map/adj-defs.csv` (`docs/spec/map-adjacency.md`).
//!
//! The table stores `N + 1` u32 record indices followed by 12-byte records
//! `{to, type, through}`; the neighbours of province `p` are records
//! `offs[p]..offs[p + 1]`. The shipped tables have every type 0 and every
//! `through` uninitialised (`0xCDCDCDCD`): connection kinds come only from
//! `adj-defs.csv`.

use crate::MapError;

/// Kind of connection between two provinces.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum AdjKind {
    Normal,
    /// Hard to cross, helps the defender. May have a `through` sea zone.
    River,
    /// Strait: hostile fleets in `through` block movement.
    Sea,
    /// Hostile control of the `through` province blocks movement.
    Canal,
    Impassable,
}

impl AdjKind {
    fn from_raw(v: i32) -> Self {
        match v {
            1 => AdjKind::River,
            2 => AdjKind::Sea,
            3 => AdjKind::Canal,
            4 => AdjKind::Impassable,
            _ => AdjKind::Normal,
        }
    }

    /// Keyword used in `adj-defs.csv`.
    pub fn name(self) -> &'static str {
        match self {
            AdjKind::Normal => "normal",
            AdjKind::River => "river",
            AdjKind::Sea => "sea",
            AdjKind::Canal => "canal",
            AdjKind::Impassable => "impassable",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Link {
    pub to: u32,
    pub kind: AdjKind,
    /// Sea zone or canal province the connection runs through.
    pub through: Option<u32>,
}

#[derive(Debug, Clone, Default)]
pub struct Adjacency {
    /// Indexed by province id; province 0 never has neighbours.
    links: Vec<Vec<Link>>,
}

impl Adjacency {
    /// Province count `N` for which the file size is consistent. The game takes
    /// `N` from `db/misc.txt`; on the shipped tables the size alone determines it.
    pub fn infer_count(bytes: &[u8]) -> Option<usize> {
        let u32_at = |i: usize| {
            bytes
                .get(i * 4..i * 4 + 4)
                .map(|b| u32::from_le_bytes(b.try_into().unwrap()))
        };
        let mut found = None;
        for n in 1..=10_000usize {
            let Some(records) = u32_at(n) else { break };
            if (n + 1) * 4 + records as usize * 12 == bytes.len() && u32_at(0) == Some(0) {
                if found.is_some() {
                    return None; // ambiguous
                }
                found = Some(n);
            }
        }
        found
    }

    pub fn parse(bytes: &[u8], n: usize) -> Result<Self, MapError> {
        let u32_at = |i: usize| -> Result<u32, MapError> {
            bytes
                .get(i..i + 4)
                .map(|b| u32::from_le_bytes(b.try_into().unwrap()))
                .ok_or(MapError::Truncated)
        };
        let offs: Vec<u32> = (0..=n).map(|i| u32_at(i * 4)).collect::<Result<_, _>>()?;
        let base = (n + 1) * 4;
        if offs.windows(2).any(|w| w[0] > w[1]) || base + offs[n] as usize * 12 != bytes.len() {
            return Err(MapError::BadOffsetTable);
        }
        let mut links = vec![Vec::new(); n];
        for (p, list) in links.iter_mut().enumerate().skip(1) {
            for k in offs[p]..offs[p + 1] {
                let at = base + k as usize * 12;
                let raw = |i: usize| u32_at(at + i * 4).map(|v| v as i32);
                let through = raw(2)?;
                list.push(Link {
                    to: raw(0)? as u32,
                    kind: AdjKind::from_raw(raw(1)?),
                    through: (0 < through && (through as usize) < n).then_some(through as u32),
                });
            }
        }
        Ok(Adjacency { links })
    }

    pub fn province_count(&self) -> usize {
        self.links.len()
    }

    pub fn neighbours(&self, province: u32) -> &[Link] {
        self.links
            .get(province as usize)
            .map(Vec::as_slice)
            .unwrap_or(&[])
    }

    pub fn link(&self, from: u32, to: u32) -> Option<&Link> {
        self.neighbours(from).iter().find(|l| l.to == to)
    }

    /// All directed links.
    pub fn iter(&self) -> impl Iterator<Item = (u32, &Link)> {
        self.links
            .iter()
            .enumerate()
            .flat_map(|(p, l)| l.iter().map(move |link| (p as u32, link)))
    }

    /// Applies `adj-defs.csv` the way the game's reader does (spec §5.2): a
    /// stream of `;`/newline-separated fields, `From;To;Type;Through;Comment`,
    /// ending at a negative `From`. `has_area` tells whether a province has a
    /// map area; rows naming one that does not are skipped field by field,
    /// which is also how `#` comment rows are skipped. Returns warnings.
    pub fn apply_defs(&mut self, csv: &[u8], has_area: impl Fn(u32) -> bool) -> Vec<String> {
        let text: Vec<u8> = csv.iter().copied().filter(|&b| b != b'\r').collect();
        let mut r = FieldReader {
            text: &text,
            pos: 0,
        };
        let mut warnings = Vec::new();
        let n = self.links.len() as i64;
        r.skip_line(); // header
        while !r.at_end() {
            let from = atoi(r.field());
            if from < 0 {
                break;
            }
            if from == 0 || from >= n || !has_area(from as u32) {
                continue;
            }
            let to = atoi(r.field());
            if to <= 0 || to >= n || !has_area(to as u32) {
                continue;
            }
            let kind_name = r.field();
            let through = atoi(r.field());
            r.skip_line();
            let (from, to) = (from as u32, to as u32);
            let through = (0 < through && through < n).then_some(through as u32);
            let kind = match std::str::from_utf8(kind_name)
                .map(str::to_ascii_lowercase)
                .as_deref()
            {
                Ok("remove") => {
                    if self.link(from, to).is_some() {
                        self.links[from as usize].retain(|l| l.to != to);
                        self.links[to as usize].retain(|l| l.to != from);
                    }
                    continue;
                }
                Ok("river") => AdjKind::River,
                Ok("sea") => AdjKind::Sea,
                Ok("canal") => AdjKind::Canal,
                Ok("impassable") => AdjKind::Impassable,
                Ok("normal") => AdjKind::Normal,
                _ => {
                    let name = String::from_utf8_lossy(kind_name);
                    warnings.push(format!(
                        "unknown connection type {name:?} for {from}-{to}, using normal"
                    ));
                    AdjKind::Normal
                }
            };
            if self.link(from, to).is_some() {
                for (a, b) in [(from, to), (to, from)] {
                    for l in self.links[a as usize].iter_mut().filter(|l| l.to == b) {
                        l.kind = kind;
                        l.through = through;
                    }
                }
            } else {
                self.links[from as usize].push(Link { to, kind, through });
                self.links[to as usize].push(Link {
                    to: from,
                    kind,
                    through,
                });
            }
        }
        warnings
    }
}

/// Reads fields terminated by `;` or a newline, like the game's CSV reader.
struct FieldReader<'a> {
    text: &'a [u8],
    pos: usize,
}

impl<'a> FieldReader<'a> {
    fn at_end(&self) -> bool {
        self.pos >= self.text.len()
    }

    fn field(&mut self) -> &'a [u8] {
        let start = self.pos;
        while self.pos < self.text.len() && !matches!(self.text[self.pos], b';' | b'\n') {
            self.pos += 1;
        }
        let field = &self.text[start..self.pos];
        self.pos = (self.pos + 1).min(self.text.len());
        field
    }

    fn skip_line(&mut self) {
        while self.pos < self.text.len() && self.text[self.pos] != b'\n' {
            self.pos += 1;
        }
        self.pos = (self.pos + 1).min(self.text.len());
    }
}

/// C `atoi`: optional whitespace and sign, then digits; anything else gives 0.
fn atoi(field: &[u8]) -> i64 {
    let s = std::str::from_utf8(field).unwrap_or("").trim_start();
    let (sign, digits) = match s.as_bytes().first() {
        Some(b'-') => (-1, &s[1..]),
        Some(b'+') => (1, &s[1..]),
        _ => (1, s),
    };
    let end = digits
        .find(|c: char| !c.is_ascii_digit())
        .unwrap_or(digits.len());
    sign * digits[..end].parse::<i64>().unwrap_or(0)
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Builds a table: province 1 – 2 – 3 in a line, N = 4.
    fn sample() -> Vec<u8> {
        let offs = [0u32, 0, 1, 3, 4];
        let recs: [(i32, i32, i32); 4] = [
            (2, 0, -842150451),
            (1, 0, -842150451),
            (3, 0, -842150451),
            (2, 0, -842150451),
        ];
        let mut b: Vec<u8> = offs.iter().flat_map(|o| o.to_le_bytes()).collect();
        for (to, t, th) in recs {
            b.extend(to.to_le_bytes());
            b.extend(t.to_le_bytes());
            b.extend(th.to_le_bytes());
        }
        b
    }

    #[test]
    fn parses_table() {
        let bytes = sample();
        assert_eq!(Adjacency::infer_count(&bytes), Some(4));
        let adj = Adjacency::parse(&bytes, 4).unwrap();
        let to: Vec<_> = adj
            .neighbours(2)
            .iter()
            .map(|l| (l.to, l.kind, l.through))
            .collect();
        assert_eq!(to, [(1, AdjKind::Normal, None), (3, AdjKind::Normal, None)]);
        assert!(adj.neighbours(0).is_empty());
        assert!(Adjacency::parse(&bytes[..bytes.len() - 1], 4).is_err());
    }

    #[test]
    fn applies_defs_like_the_game() {
        let mut adj = Adjacency::parse(&sample(), 4).unwrap();
        let csv = b"From;To;Type;Through;Comment\r\n\
            # Section;;;;\r\n\
            1;2;River;0;existing pair\r\n\
            1;3;sea;2;new strait\r\n\
            3;2;bogus;0;unknown type\r\n\
            2;3;remove;0;\r\n\
            -1;-1;;;\r\n\
            1;2;Impassable;0;after terminator\r\n";
        let warnings = adj.apply_defs(csv, |_| true);
        assert_eq!(warnings.len(), 1);
        assert_eq!(adj.link(2, 1).map(|l| l.kind), Some(AdjKind::River));
        assert_eq!(
            adj.link(3, 1).map(|l| (l.kind, l.through)),
            Some((AdjKind::Sea, Some(2)))
        );
        assert!(adj.link(2, 3).is_none() && adj.link(3, 2).is_none());
    }

    #[test]
    fn atoi_semantics() {
        assert_eq!(
            (atoi(b" 42abc"), atoi(b"-1"), atoi(b"River"), atoi(b"#1305")),
            (42, -1, 0, 0)
        );
    }
}
