//! `db/revolt.txt`: the static data of each tag that independence, civil
//! war and liberation read (`re/diplomacy/diplomacy.md` §4.4, §4.5; the
//! game keeps it at `0xD6856A + 168·T`).
//!
//! Each `TAG = { … }` block gives the provinces a new country is made of
//! (`minimum`, `S+0x14`; `extra`, `S+0x26`), its `capital` (`S+0x52`),
//! `regular_id` (`S+0x58`, the "same nation" link of `0x49EBF0`) and
//! `intrinsic_gov_type` (`S+0x5C`). The mapping of the two lists to the
//! game's offsets is the notes' reading (their open question 7).

use crate::{load_script, Vfs, Warning};
use dh_text::Block;
use std::collections::BTreeMap;

pub const REVOLT_FILE: &str = "db/revolt.txt";

/// One tag's block.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct RevoltEntry {
    pub minimum: Vec<u32>,
    pub extra: Vec<u32>,
    pub capital: Option<u32>,
    pub regular_id: Option<String>,
    pub intrinsic_gov_type: Option<String>,
    /// `revolt = no` turns the tag's revolts off (not used here).
    pub revolt: bool,
}

impl RevoltEntry {
    fn from_block(b: &Block) -> Self {
        let ids = |key: &str| -> Vec<u32> {
            b.get_all(key)
                .filter_map(|v| v.as_block())
                .flat_map(|l| l.ints().filter_map(|i| u32::try_from(i).ok()))
                .collect()
        };
        let tag = |key: &str| {
            b.get_str(key)
                .map(|s| s.trim().to_ascii_uppercase())
                .filter(|s| !s.is_empty())
        };
        RevoltEntry {
            minimum: ids("minimum"),
            extra: ids("extra"),
            capital: b.get_i64("capital").and_then(|c| u32::try_from(c).ok()),
            regular_id: tag("regular_id"),
            intrinsic_gov_type: b.get_str("intrinsic_gov_type").map(str::to_owned),
            revolt: b.get_bool("revolt").unwrap_or(true),
        }
    }
}

/// Every tag's block, by tag (a later block replaces an earlier one).
#[derive(Debug, Clone, Default, PartialEq)]
pub struct Revolt {
    pub by_tag: BTreeMap<String, RevoltEntry>,
}

impl Revolt {
    pub fn from_root(root: &Block) -> Self {
        let by_tag = root
            .fields()
            .filter_map(|f| {
                let b = f.value.as_block()?;
                Some((f.key.to_ascii_uppercase(), RevoltEntry::from_block(b)))
            })
            .collect();
        Revolt { by_tag }
    }

    pub fn parse_str(text: &str) -> Self {
        Self::from_root(&dh_text::script::parse_str(text).root)
    }

    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> std::io::Result<Self> {
        Ok(Self::from_root(&load_script(vfs, REVOLT_FILE, warnings)?))
    }

    pub fn get(&self, tag: &str) -> Option<&RevoltEntry> {
        self.by_tag.get(tag)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn reads_the_lists_and_links() {
        let r = Revolt::parse_str(
            "SLO = { date = { day = 0 month = january year = 1936 }
                     minimum = { 478 477 490 476 } extra = { 499 } capital = 476 }
             DDR = { minimum = { 298 } extra = { } capital = 300 revolt = no
                     regular_id = GER intrinsic_gov_type = leninist }",
        );
        let slo = r.get("SLO").unwrap();
        assert_eq!(slo.minimum, [478, 477, 490, 476]);
        assert_eq!((slo.extra.as_slice(), slo.capital), (&[499][..], Some(476)));
        assert!(slo.revolt && slo.regular_id.is_none());
        let ddr = r.get("DDR").unwrap();
        assert_eq!(ddr.regular_id.as_deref(), Some("GER"));
        assert_eq!(ddr.intrinsic_gov_type.as_deref(), Some("leninist"));
        assert!(!ddr.revolt && ddr.extra.is_empty());
    }
}
