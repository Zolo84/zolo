//! Land supply (`docs/spec/supply.md`, first pass).
//!
//! A stack is in supply when its province connects over land, through
//! territory of its own country, allies or countries it has military access
//! to, to its country's capital (which that country must control).
//! Stockpiles, transport capacity and convoys are not modelled yet, so the
//! country-level supply efficiency is 1.0 and the stockpile is assumed
//! non-empty. The spec's +0.25 date-dependent bonus is not applied (its
//! condition is unidentified).

use crate::movement::MoveContext;
use crate::{LeaderState, World};
use dh_data::leaders::traits;
use std::collections::{BTreeSet, HashSet, VecDeque};

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
                    c == tag || self.diplomacy.allied(tag, c) || self.has_access(tag, c)
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

    /// Every province where land stacks of `tag` are in supply, worked out
    /// once from the capital (the same test as [`World::in_supply`], searched
    /// the other way); `None` when all are (no capital).
    pub fn supply_network(&self, ctx: &MoveContext, tag: &str) -> Option<HashSet<u32>> {
        let capital = self.countries.get(tag).and_then(|c| c.capital)?;
        let mut seen = HashSet::new();
        if self.controller.get(&capital).map(String::as_str) != Some(tag) {
            return Some(seen);
        }
        let passable = |p: u32| {
            ctx.province(p).is_some_and(|i| !i.is_water())
                && self.controller.get(&p).is_some_and(|c| {
                    c == tag || self.diplomacy.allied(tag, c) || self.has_access(tag, c)
                })
        };
        seen.insert(capital);
        let mut queue = VecDeque::from([capital]);
        while let Some(p) = queue.pop_front() {
            for link in ctx.adjacency.neighbours(p) {
                if link.kind != dh_map::AdjKind::Impassable
                    && passable(link.to)
                    && seen.insert(link.to)
                {
                    queue.push_back(link.to);
                }
            }
        }
        Some(seen)
    }

    /// Supply efficiency of a land stack of `tag` standing in `province`
    /// (spec §2): `(infrastructure + national ESE) · 0.5` on land.
    pub fn supply_efficiency(&self, ctx: &MoveContext, tag: &str, province: u32) -> f32 {
        let country = self.countries.get(tag).map_or(1.0, |c| c.ese);
        match ctx.province(province) {
            Some(p) if !p.is_water() => (p.infra + country) * 0.5,
            _ => country,
        }
    }

    /// Supply efficiency of the divisions of land stack `unit` (spec §2,
    /// `0x4FD120` with the stack): the province's, raised by `combat[161]`
    /// while below 1 (to at most 1) when `leader`, the leader the stack
    /// fights under, is a Logistics Wizard and the stack is within his
    /// command limit; then `country[14]` more, past that cap, when the stack
    /// is under HQ influence (`hq`).
    pub fn stack_supply_efficiency(
        &self,
        ctx: &MoveContext,
        unit: usize,
        leader: &LeaderState,
        hq: bool,
    ) -> f32 {
        let u = &self.units[unit];
        let mut ese = self.supply_efficiency(ctx, &u.owner, u.unit.location.unwrap_or(0));
        let within = u.unit.divisions.len() <= leader.command_limit(&self.params) as usize;
        if ese < 1.0 && within && leader.has_trait(traits::LOGISTICS_WIZARD) {
            ese = (ese + self.params.logistics_wizard_ese).min(1.0);
        }
        if hq {
            ese += self.params.hq_ese;
        }
        ese
    }

    /// Speed factor from supply for land movement (land-movement.md §3.1):
    /// `min(ESE, 1)` in supply, `combat[208]` out of supply.
    pub fn supply_speed_factor(&self, ctx: &MoveContext, tag: &str, province: u32) -> f32 {
        if self.in_supply(ctx, tag, province) {
            self.supply_efficiency(ctx, tag, province).min(1.0)
        } else {
            self.params.out_of_supply_speed
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::movement::{ProvinceInfo, UnitModifiers};
    use crate::Country;
    use dh_data::{GameDate, UnitDb};
    use dh_map::{AdjKind, Adjacency, Link};

    /// Provinces 1 - 2 - 3 in a row: Germany holds 1 (its capital) and 3,
    /// Austria 2 in between.
    #[test]
    fn supply_passes_through_countries_we_have_access_to() {
        let link = |to| Link {
            to,
            kind: AdjKind::Normal,
            through: None,
        };
        let plain = Some(ProvinceInfo {
            terrain: 0,
            infra: 1.0,
            army_pos: (0, 0),
            climate: Default::default(),
            ic: 0.0,
            centre: (0, 0),
            north: true,
            ..Default::default()
        });
        let ctx = MoveContext {
            adjacency: Adjacency::from_lists(vec![
                vec![],
                vec![link(2)],
                vec![link(1), link(3)],
                vec![link(2)],
            ]),
            provinces: vec![None, plain, plain, plain],
            terrain_move: [1.0; 12],
            modifiers: UnitModifiers::default(),
            units: UnitDb::default(),
            airdist: None,
        };
        let mut world = World::empty(GameDate::new(1936, 1, 1));
        for tag in ["GER", "AUS"] {
            world.countries.insert(tag.into(), Country::new(tag));
        }
        world.countries.get_mut("GER").unwrap().capital = Some(1);
        for (p, tag) in [(1, "GER"), (2, "AUS"), (3, "GER")] {
            world.controller.insert(p, tag.into());
        }
        assert!(world.in_supply(&ctx, "GER", 1));
        assert!(!world.in_supply(&ctx, "GER", 3));
        // Austria's access to Germany does not help; Germany's to Austria does.
        world.access.insert(("AUS".into(), "GER".into()));
        assert!(!world.in_supply(&ctx, "GER", 3));
        world.access.insert(("GER".into(), "AUS".into()));
        assert!(world.in_supply(&ctx, "GER", 3));
    }
}
