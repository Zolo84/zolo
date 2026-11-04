//! Policy sliders and their effects (`db/policy_effects.csv`).
//!
//! The file holds one block per slider, in the order of [`SLIDERS`], each a
//! row per modifier (`MODIFIER_ORG`, `MODIFIER_TOTAL_IC`, …) with a value
//! for each slider position 1..=10. A country's modifier is the sum over the
//! sliders of the value at its position.

use crate::Vfs;
use dh_text::Block;
use std::collections::BTreeMap;

pub const POLICY_FILE: &str = "db/policy_effects.csv";
/// Slider keys of a scenario's `policy` block, in the file's block order.
pub const SLIDERS: [&str; 7] = [
    "democratic",
    "political_left",
    "freedom",
    "free_market",
    "professional_army",
    "defense_lobby",
    "interventionism",
];

/// Slider positions 1..=10, in [`SLIDERS`] order.
pub type Sliders = [u8; 7];

/// Positions of a scenario `policy` block; a missing slider sits at 5.
pub fn sliders_from(b: Option<&Block>) -> Sliders {
    let mut s = [5u8; 7];
    if let Some(b) = b {
        for (v, key) in s.iter_mut().zip(SLIDERS) {
            if let Some(x) = b.get_i64(key) {
                *v = x.clamp(1, 10) as u8;
            }
        }
    }
    s
}

/// The scenario's `policy = { date = { … } }`: the date before which the
/// sliders cannot be changed (`0x7604E0` stores it as the policy's
/// next-change date, `P+4`); none when the block has no `date`.
pub fn next_change_from(b: Option<&Block>) -> Option<crate::events::EventDate> {
    b?.get_block("date")
        .map(crate::events::EventDate::from_block)
}

/// What a slider's `MANUAL_OR_BY_INFLUENCE_MOVES` value allows (the three
/// bytes at `0xD56EEC + 3·i`, `0x760FB5`): −1 everything but the player's
/// own moves, 0 nothing (events only), 1 normal and the player's moves, any
/// other value all three.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct SliderMoves {
    /// A normal change (`0x4A0120`, the `can_change_policy` trigger and the
    /// `change_policy` command).
    pub normal: bool,
    /// "Influence Nation" may move it (`0x4759BE`).
    pub influence: bool,
    /// The player may move it by hand (UI).
    pub manual: bool,
}

impl SliderMoves {
    pub fn from_value(m: i32) -> Self {
        let (normal, influence, manual) = match m {
            -1 => (true, true, false),
            0 => (false, false, false),
            1 => (true, false, true),
            _ => (true, true, true),
        };
        SliderMoves {
            normal,
            influence,
            manual,
        }
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct PolicyEffects {
    /// Per slider: modifier name → value at positions 1..=10.
    blocks: Vec<BTreeMap<String, [f32; 10]>>,
    /// Per slider: its `MANUAL_OR_BY_INFLUENCE_MOVES` value (the first
    /// number of that row, `atoi`).
    moves: Vec<i32>,
}

impl PolicyEffects {
    pub fn load(vfs: &Vfs) -> std::io::Result<Self> {
        Ok(Self::parse(&vfs.read(POLICY_FILE)?))
    }

    /// Each `#_POLICY_…_` header line starts the next slider's block (the
    /// generic CSV reader drops `#` lines, so the text is split here).
    pub fn parse(bytes: &[u8]) -> Self {
        let text = dh_text::encoding::decode(bytes);
        let mut blocks: Vec<BTreeMap<String, [f32; 10]>> = Vec::new();
        let mut moves = Vec::new();
        for line in text.lines() {
            let row: Vec<&str> = line.split(';').map(str::trim).collect();
            let Some(&name) = row.first() else { continue };
            if name.starts_with("#_POLICY_") {
                blocks.push(BTreeMap::new());
                moves.push(0);
                continue;
            }
            let Some(block) = blocks.last_mut() else {
                continue;
            };
            if name.starts_with('#') || name.is_empty() {
                continue;
            }
            // The game reads the rows by position; the 37th is this one,
            // whose name the shipped file writes with spaces.
            let key: String = name.chars().filter(|c| *c != ' ').collect();
            if key
                .to_ascii_uppercase()
                .starts_with("MANUAL_OR_BY_INFLUENCE")
            {
                if let Some(m) = moves.last_mut() {
                    *m = crate::events::atoi(row.get(1).copied().unwrap_or("")) as i32;
                }
                continue;
            }
            let mut values = [0.0; 10];
            for (i, v) in values.iter_mut().enumerate() {
                *v = row
                    .get(i + 1)
                    .and_then(|s| s.trim().parse().ok())
                    .unwrap_or(0.0);
            }
            block.insert(name.to_ascii_uppercase(), values);
        }
        PolicyEffects { blocks, moves }
    }

    /// What slider `i` ([`SLIDERS`] order) allows; nothing without its
    /// row (the zeroed table).
    pub fn moves(&self, i: usize) -> SliderMoves {
        SliderMoves::from_value(self.moves.get(i).copied().unwrap_or(0))
    }

    /// Sum of a modifier over the sliders at the given positions.
    pub fn modifier(&self, name: &str, sliders: &Sliders) -> f32 {
        self.blocks
            .iter()
            .zip(sliders)
            .filter_map(|(b, &pos)| b.get(name)?.get(usize::from(pos.clamp(1, 10)) - 1))
            .sum()
    }

    /// A multiplier the game keeps for some modifiers (`MODIFIER_ORG`,
    /// `MODIFIER_TOTAL_IC`): 1 plus the sum, within 0.01..=10.
    pub fn factor(&self, name: &str, sliders: &Sliders) -> f32 {
        (1.0 + self.modifier(name, sliders)).clamp(0.01, 10.0)
    }

    pub fn is_empty(&self) -> bool {
        self.blocks.is_empty()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn modifiers_sum_over_sliders() {
        let csv = b"#Do not add;;\n#_POLICY_DEMOCRATIC_;1;2;3;4;5;6;7;8;9;10;x\n\
            MODIFIER_ORG;0;0;0;0;0;0;0;0;0;0;x\n\
            #_POLICY_POLITICAL_LEFT_;1;2;3;4;5;6;7;8;9;10;x\n\
            MODIFIER_ORG;-0.1;-0.08;-0.06;-0.04;-0.02;0.02;0.04;0.06;0.08;0.1;x\n";
        let p = PolicyEffects::parse(csv);
        let s = [1, 7, 5, 5, 5, 5, 5];
        assert_eq!(p.moves(0), SliderMoves::default(), "no row: nothing");
        assert!((p.modifier("MODIFIER_ORG", &s) - 0.04).abs() < 1e-6);
        assert!((p.factor("MODIFIER_ORG", &s) - 1.04).abs() < 1e-6);
        assert_eq!(p.modifier("MODIFIER_TOTAL_IC", &s), 0.0);
        let csv = b"#_POLICY_DEMOCRATIC_;1;2;3;4;5;6;7;8;9;10;x\n\
            MANUAL_OR_ BY_INFLUENCE _MOVES;1;(-1 - disable just manual slider moves);;;;;;;;;x\n\
            #_POLICY_POLITICAL_LEFT_;1;2;3;4;5;6;7;8;9;10;x\n\
            MANUAL_OR_ BY_INFLUENCE _MOVES;-1;;;;;;;;;;x\n\
            #_POLICY_FREEDOM_;1;2;3;4;5;6;7;8;9;10;x\n\
            MANUAL_OR_ BY_INFLUENCE _MOVES;2;;;;;;;;;;x\n\
            #_POLICY_FREE_MARKET_;1;2;3;4;5;6;7;8;9;10;x\n\
            MANUAL_OR_ BY_INFLUENCE _MOVES;0;;;;;;;;;;x\n";
        let p = PolicyEffects::parse(csv);
        let m = |normal, influence, manual| SliderMoves {
            normal,
            influence,
            manual,
        };
        assert_eq!(p.moves(0), m(true, false, true));
        assert_eq!(p.moves(1), m(true, true, false));
        assert_eq!(p.moves(2), m(true, true, true));
        assert_eq!(p.moves(3), m(false, false, false));
        assert_eq!(
            p.modifier("MANUAL_OR_ BY_INFLUENCE _MOVES", &s),
            0.0,
            "not a modifier"
        );
        let doc = dh_text::script::parse(
            b"policy = { date = { year = 1937 month = march day = 4 } democratic = 1 free_market = 12 }",
        );
        assert_eq!(
            sliders_from(doc.root.get_block("policy")),
            [1, 5, 5, 10, 5, 5, 5]
        );
        let d = next_change_from(doc.root.get_block("policy")).unwrap();
        assert_eq!((d.year, d.month, d.day), (1937, 2, 4));
        assert_eq!(next_change_from(None), None);
    }
}
