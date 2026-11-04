//! Ideologies, government groups and `db/ideology_matrix.csv`
//! (`docs/spec/cabinet.md` §1).
//!
//! A country's ideology comes from its two political sliders alone, never
//! from its ministers: `T[10·democratic + political_left]` (`0x760460`)
//! with both sliders on the engine's 0..=9 scale (the files' 1..=10 less
//! one). The loader (`0x760DD0`) writes the file's codes backwards from
//! cell 99: the file's top row is `democratic` 10 and its first column
//! `political_left` 10.

use crate::Vfs;

pub const IDEOLOGY_FILE: &str = "db/ideology_matrix.csv";

/// The ten ideologies by their internal number (`m+0x26` of a minister,
/// the matrix cells).
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash, Default)]
pub enum Ideology {
    /// The zeroed matrix before loading.
    #[default]
    NationalSocialist = 0,
    Fascist = 1,
    PaternalAutocrat = 2,
    SocialConservative = 3,
    MarketLiberal = 4,
    SocialLiberal = 5,
    SocialDemocrat = 6,
    LeftWingRadical = 7,
    Leninist = 8,
    Stalinist = 9,
}

/// CSV codes and `ideology` trigger names, by internal number.
const CODES: [(&str, &str); 10] = [
    ("NS", "nazi"),
    ("FA", "fascist"),
    ("PA", "paternal_autocrat"),
    ("SC", "social_conservative"),
    ("ML", "market_liberal"),
    ("SL", "social_liberal"),
    ("SD", "social_democrat"),
    ("LWR", "left_wing_radical"),
    ("LE", "leninist"),
    ("ST", "stalinist"),
];

impl Ideology {
    pub const ALL: [Ideology; 10] = [
        Ideology::NationalSocialist,
        Ideology::Fascist,
        Ideology::PaternalAutocrat,
        Ideology::SocialConservative,
        Ideology::MarketLiberal,
        Ideology::SocialLiberal,
        Ideology::SocialDemocrat,
        Ideology::LeftWingRadical,
        Ideology::Leninist,
        Ideology::Stalinist,
    ];

    /// The internal number 0..=9.
    pub fn index(self) -> usize {
        self as usize
    }

    pub fn from_index(i: usize) -> Option<Self> {
        Self::ALL.get(i).copied()
    }

    /// A CSV code (`NS` … `ST`, any case, `0x7636B0`); an unknown one is
    /// a market liberal.
    pub fn from_code(code: &str) -> Self {
        let code = code.trim();
        CODES
            .iter()
            .position(|(c, _)| c.eq_ignore_ascii_case(code))
            .and_then(Self::from_index)
            .unwrap_or(Ideology::MarketLiberal)
    }

    pub fn code(self) -> &'static str {
        CODES[self.index()].0
    }

    /// The name an `ideology = …` trigger uses (`nazi`, `fascist`,
    /// `paternal_autocrat`, …).
    pub fn from_name(name: &str) -> Option<Self> {
        let name = name.trim();
        CODES
            .iter()
            .position(|(_, n)| n.eq_ignore_ascii_case(name))
            .and_then(Self::from_index)
    }

    pub fn name(self) -> &'static str {
        CODES[self.index()].1
    }

    /// The government group (`0x44D840` / `0x44D800` / `0x44D820`).
    pub fn government(self) -> Government {
        match self.index() {
            0..=2 => Government::Fascist,
            3..=6 => Government::Democratic,
            _ => Government::Communist,
        }
    }
}

/// What the `government` trigger tests.
#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum Government {
    /// NS, FA, PA.
    Fascist,
    /// SC, ML, SL, SD.
    Democratic,
    /// LWR, LE, ST.
    Communist,
}

impl Government {
    /// `fascist`, `democratic` or `communist`, any case.
    pub fn from_name(name: &str) -> Option<Self> {
        match name.trim().to_ascii_lowercase().as_str() {
            "fascist" => Some(Government::Fascist),
            "democratic" => Some(Government::Democratic),
            "communist" => Some(Government::Communist),
            _ => None,
        }
    }
}

/// The table `0xD56F04`: 100 ideologies by `10·democratic +
/// political_left` (both 0..=9).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct IdeologyMatrix {
    cells: [Ideology; 100],
}

impl Default for IdeologyMatrix {
    /// The zeroed global before the file loads: national socialist
    /// everywhere.
    fn default() -> Self {
        IdeologyMatrix {
            cells: [Ideology::NationalSocialist; 100],
        }
    }
}

impl IdeologyMatrix {
    pub fn load(vfs: &Vfs) -> std::io::Result<Self> {
        Ok(Self::parse(&vfs.read(IDEOLOGY_FILE)?))
    }

    /// `0x760DD0`: lines starting with `#` are skipped, `EOF` ends the
    /// file; each other line gives ten codes, stored from cell 99
    /// downwards (the first code of the first line in cell 99). Lines
    /// past the tenth are ignored; cells no line reaches keep NS.
    pub fn parse(bytes: &[u8]) -> Self {
        let text = dh_text::encoding::decode(bytes);
        let mut m = IdeologyMatrix::default();
        let mut row = 0usize;
        for line in text.lines() {
            let line = line.trim_start();
            if line.starts_with('#') {
                continue;
            }
            if line.starts_with("EOF") {
                break;
            }
            if line.trim().is_empty() || row >= 10 {
                continue;
            }
            let codes: Vec<&str> = line.split(';').collect();
            for col in 0..10 {
                let code = codes.get(col).copied().unwrap_or("");
                m.cells[99 - 10 * row - col] = Ideology::from_code(code);
            }
            row += 1;
        }
        m
    }

    /// `0x760460`: the ideology of sliders `democratic` and
    /// `political_left` on the 0..=9 scale (larger values count as 9).
    pub fn get(&self, democratic: u8, political_left: u8) -> Ideology {
        self.cells[10 * usize::from(democratic.min(9)) + usize::from(political_left.min(9))]
    }

    /// The ideology of slider positions as the files write them (1..=10).
    pub fn of_sliders(&self, sliders: &crate::policy::Sliders) -> Ideology {
        self.get(sliders[0].clamp(1, 10) - 1, sliders[1].clamp(1, 10) - 1)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn codes_names_and_groups() {
        assert_eq!(Ideology::from_code("lwr"), Ideology::LeftWingRadical);
        assert_eq!(Ideology::from_code("??"), Ideology::MarketLiberal);
        assert_eq!(
            Ideology::from_name("NAZI"),
            Some(Ideology::NationalSocialist)
        );
        assert_eq!(
            Ideology::from_name("market_liberal").map(Ideology::index),
            Some(4)
        );
        assert_eq!(Ideology::from_name("monarchist"), None);
        let groups: Vec<Government> = Ideology::ALL.iter().map(|i| i.government()).collect();
        assert_eq!(
            groups,
            [
                [Government::Fascist; 3].as_slice(),
                &[Government::Democratic; 4],
                &[Government::Communist; 3]
            ]
            .concat()
        );
        assert_eq!(
            Government::from_name("Democratic"),
            Some(Government::Democratic)
        );
    }

    /// Rows and columns run backwards: the file's top-left cell is
    /// democratic 10, political left 10; its bottom-right one democratic
    /// 1, political left 1.
    #[test]
    fn the_file_is_stored_backwards() {
        let mut text = String::from("#; header\n");
        for (code, _) in CODES {
            // Row r: ST in its first column, then the code of ideology r.
            let mut row = vec!["ST"];
            row.extend(std::iter::repeat_n(code, 9));
            text.push_str(&row.join(";"));
            text.push_str(";x\n");
        }
        text.push_str("EOF;;;\nNS;NS\n");
        let m = IdeologyMatrix::parse(text.as_bytes());
        // File row r is democratic 9 − r (0-based); file column 0 is
        // political left 9.
        assert_eq!(m.get(9, 9), Ideology::Stalinist);
        assert_eq!(m.get(9, 0), Ideology::NationalSocialist);
        assert_eq!(m.get(0, 9), Ideology::Stalinist);
        assert_eq!(m.get(0, 3), Ideology::Stalinist, "row 9 is ST throughout");
        assert_eq!(m.get(5, 2), Ideology::from_index(4).unwrap());
        assert_eq!(
            m.of_sliders(&[10, 1, 5, 5, 5, 5, 5]),
            Ideology::NationalSocialist
        );
        assert_eq!(
            IdeologyMatrix::parse(b"EOF").get(3, 3),
            Ideology::NationalSocialist
        );
    }
}
