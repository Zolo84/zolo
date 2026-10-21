//! Land supply (`docs/spec/supply.md`, first pass).
//!
//! A stack is in supply when its province connects over land, through
//! territory of its own country, allies or countries granting access, to its
//! country's capital (which that country must control). Stockpiles, transport
//! capacity and convoys are not modelled yet, so the country-level supply
//! efficiency is 1.0 and the stockpile is assumed non-empty. The spec's +0.25
//! date-dependent bonus is not applied (its condition is unidentified).

use crate::movement::MoveContext;
use crate::World;
use std::collections::{BTreeSet, VecDeque};

impl World {
    /// Whether a land stack of country `tag` in `province` is in supply.
    pub fn in_supply(&self, ctx: &MoveContext, tag: &str, province: u32) -> bool {
        let Some(capital) = self.countries.get(tag).and_then(|c| c.capital) else {
            return true;
        };
        if self.controller.get(&capital).map(String::as_str) != Some(tag) {
            return false;
        }
        let passable = |p: u32| {
            ctx.province(p).is_some_and(|i| !i.is_water())
                && self.controller.get(&p).is_some_and(|c| {
                    c == tag
                        || self.diplomacy.allied(tag, c)
                        || self.access.contains(&(c.clone(), tag.to_owned()))
                })
        };
        if !passable(province) {
            return false;
        }
        let mut seen = BTreeSet::from([province]);
        let mut queue = VecDeque::from([province]);
        while let Some(p) = queue.pop_front() {
            if p == capital {
                return true;
            }
            for link in ctx.adjacency.neighbours(p) {
                if link.kind != dh_map::AdjKind::Impassable
                    && passable(link.to)
                    && seen.insert(link.to)
                {
                    queue.push_back(link.to);
                }
            }
        }
        false
    }

    /// Supply efficiency of a land stack standing in `province` (spec §2):
    /// `(infrastructure + country ESE) · 0.5` on land, with country ESE 1.0.
    pub fn supply_efficiency(&self, ctx: &MoveContext, province: u32) -> f32 {
        let country = 1.0;
        match ctx.province(province) {
            Some(p) if !p.is_water() => (p.infra + country) * 0.5,
            _ => country,
        }
    }

    /// Speed factor from supply for land movement (land-movement.md §3.1):
    /// `min(ESE, 1)` in supply, `combat[208]` = 0.1 out of supply.
    pub fn supply_speed_factor(&self, ctx: &MoveContext, tag: &str, province: u32) -> f32 {
        if self.in_supply(ctx, tag, province) {
            self.supply_efficiency(ctx, province).min(1.0)
        } else {
            0.1
        }
    }
}
