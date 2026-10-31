//! What the research AI reads of an AI file (`ai/*.ai`; research.md §6):
//! the `technology = { … }` block with a weight per category and the
//! `preference`, `ignore` and `endgoal` lists.

use crate::tech::CATEGORIES;
use crate::{load_script, Vfs, Warning};
use dh_text::Block;

#[derive(Debug, Clone, PartialEq)]
pub struct TechAi {
    /// Weight of each category (`AI+4+4·cat`), keyed by the names of
    /// [`CATEGORIES`]; a missing key is 1 (assumed).
    pub weights: [f32; 9],
    /// Technologies the AI weighs double (`AI+0x92`).
    pub preference: Vec<i64>,
    /// Technologies the AI never picks (`AI+0xA4`).
    pub ignore: Vec<i64>,
    /// Goals (`AI+0x84`); how they feed the choice (`0x69C310`) is not
    /// known, so the research AI does not use them.
    pub endgoal: Vec<i64>,
}

impl Default for TechAi {
    fn default() -> Self {
        TechAi {
            weights: [1.0; 9],
            preference: Vec::new(),
            ignore: Vec::new(),
            endgoal: Vec::new(),
        }
    }
}

impl TechAi {
    /// The `technology` block of an AI file's root; defaults without one.
    pub fn from_root(root: &Block) -> Self {
        let mut ai = TechAi::default();
        let Some(b) = root.get_block("technology") else {
            return ai;
        };
        for (w, name) in ai.weights.iter_mut().zip(CATEGORIES) {
            if let Some(v) = b.get_f64(name) {
                *w = v as f32;
            }
        }
        let ids = |key: &str| -> Vec<i64> {
            b.get_all(key)
                .filter_map(|v| v.as_block())
                .flat_map(|l| l.ints())
                .collect()
        };
        ai.preference = ids("preference");
        ai.ignore = ids("ignore");
        ai.endgoal = ids("endgoal");
        ai
    }

    /// Reads `ai/<name>` (the scenario's `ai = "…"`, relative to `ai/`).
    pub fn load(vfs: &Vfs, name: &str, warnings: &mut Vec<Warning>) -> std::io::Result<Self> {
        let path = format!("ai/{}", name.replace('\\', "/"));
        Ok(Self::from_root(&load_script(vfs, &path, warnings)?))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn reads_the_technology_block() {
        let doc = dh_text::script::parse_str(
            "technology = { endgoal = { } preference = { 5050 5060 # Tools
                 5080 } ignore = { 4220 } armor = 5 infantry = 6 air_doctrines = 0.5 }
             garrison = { capital = 40 }",
        );
        let ai = TechAi::from_root(&doc.root);
        assert_eq!(ai.weights, [6.0, 5.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.5]);
        assert_eq!(ai.preference, [5050, 5060, 5080]);
        assert_eq!(ai.ignore, [4220]);
        assert!(ai.endgoal.is_empty());
        assert_eq!(
            TechAi::from_root(&dh_text::script::parse_str("x = 1").root),
            TechAi::default()
        );
    }
}
