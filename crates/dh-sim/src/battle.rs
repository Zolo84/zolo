//! Land battles: when they start (`docs/spec/land-movement.md` §8).
//!
//! Every hour a land stack that has a route attacks the first province on it
//! as soon as that province holds land units of a country at war with it,
//! unless it is already fighting for that province. Battles are not resolved
//! yet; while one lasts the attackers wait at the border (assumed: the spec
//! has not located the arrival code, §11).

use crate::{Rng, System, World};
use dh_data::Branch;

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Battle {
    pub province: u32,
    /// Indices into `World::units`.
    pub attackers: Vec<usize>,
    /// Simulation hour the battle started.
    pub started: u64,
    /// Hours fought so far (`+0x64`, land-combat.md §3.1).
    pub hours: u32,
    /// The attacking side, then the defending one.
    pub sides: [BattleSide; 2],
    /// The combat event in force for both sides (`+0x5E`, §3.6).
    pub event: Option<ActiveEvent>,
}

impl Battle {
    pub fn new(province: u32, attackers: Vec<usize>, started: u64) -> Self {
        Battle {
            province,
            attackers,
            started,
            hours: 0,
            sides: Default::default(),
            event: None,
        }
    }

    pub fn side(&self, attacking: bool) -> &BattleSide {
        &self.sides[usize::from(!attacking)]
    }

    pub fn side_mut(&mut self, attacking: bool) -> &mut BattleSide {
        &mut self.sides[usize::from(!attacking)]
    }
}

/// What a battle keeps about each side (§2.1, §2.4, §3.7).
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct BattleSide {
    /// The stack whose leader commands the side (`+0x46`, §2.4).
    pub commander: Option<usize>,
    /// The commander's country (`+0x4A`): kept when a commander without
    /// one takes over.
    pub country: Option<String>,
    /// Caught by surprise in the first hour (`+0x4F`, §3.7).
    pub surprised: bool,
}

/// The seven combat events (§3.6), in the game's order.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum CombatEvent {
    CounterAttack,
    Assault,
    Encirclement,
    Ambush,
    Delay,
    TacticalWithdrawal,
    Breakthrough,
}

impl CombatEvent {
    pub const ALL: [CombatEvent; 7] = [
        CombatEvent::CounterAttack,
        CombatEvent::Assault,
        CombatEvent::Encirclement,
        CombatEvent::Ambush,
        CombatEvent::Delay,
        CombatEvent::TacticalWithdrawal,
        CombatEvent::Breakthrough,
    ];

    /// Whether the defenders draw it rather than the attackers (`0x4C1190`).
    pub fn defensive(self) -> bool {
        matches!(
            self,
            CombatEvent::CounterAttack | CombatEvent::Delay | CombatEvent::TacticalWithdrawal
        )
    }

    /// The commander's trait that makes it likelier (bits 24..=30, in the
    /// same order).
    pub fn trait_mask(self) -> u32 {
        dh_data::leaders::traits::COUNTER_ATTACKER << self as u32
    }
}

/// A combat event and the last hour it is in force (§3.6).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct ActiveEvent {
    pub kind: CombatEvent,
    /// Simulation hour; the event ends once the clock is past it.
    pub until: u64,
}

impl World {
    /// Land units in `province` belonging to a country at war with `tag`.
    pub fn enemy_land_units<'a>(
        &'a self,
        tag: &'a str,
        province: u32,
    ) -> impl Iterator<Item = usize> + 'a {
        self.units.iter().enumerate().filter_map(move |(i, u)| {
            (u.unit.branch == Branch::Land
                && u.unit.location == Some(province)
                && self.at_war(tag, u.controller()))
            .then_some(i)
        })
    }

    pub fn battle_at(&self, province: u32) -> Option<&Battle> {
        self.battles.iter().find(|b| b.province == province)
    }

    /// Whether a stack takes part in a battle: attacking a province it is
    /// still heading for, or standing in a battle province with an attacker
    /// at war with it.
    pub fn in_battle(&self, unit: usize) -> bool {
        let u = &self.units[unit];
        self.battles.iter().any(|b| {
            (b.attackers.contains(&unit) && u.route.front() == Some(&b.province))
                || (u.unit.location == Some(b.province)
                    && b.attackers
                        .iter()
                        .any(|&a| self.at_war(self.units[a].controller(), u.controller())))
        })
    }
}

/// Starts battles for stacks whose next step is held by the enemy, and ends
/// battles whose province no longer holds defenders or attackers.
pub struct Engage;

impl System for Engage {
    fn name(&self) -> &str {
        "engage"
    }

    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        for i in 0..world.units.len() {
            let unit = &world.units[i];
            if unit.unit.branch != Branch::Land {
                continue;
            }
            let Some(&next) = unit.route.front() else {
                continue;
            };
            let tag = unit.controller().to_owned();
            if world.enemy_land_units(&tag, next).next().is_none() {
                continue;
            }
            let hour = world.hour;
            match world.battles.iter_mut().find(|b| b.province == next) {
                Some(b) if b.attackers.contains(&i) => {}
                Some(b) => b.attackers.push(i),
                None => world.battles.push(Battle::new(next, vec![i], hour)),
            }
        }
        // A battle ends when its province is empty of anyone the attackers fight,
        // or no attacker is still heading there.
        let units = &world.units;
        let still_on = |b: &Battle| {
            b.attackers.iter().any(|&i| {
                let tag = units[i].controller();
                units[i].route.front() == Some(&b.province)
                    && world.enemy_land_units(tag, b.province).next().is_some()
            })
        };
        let keep: Vec<bool> = world.battles.iter().map(still_on).collect();
        let mut keep = keep.into_iter();
        world.battles.retain(|_| keep.next().unwrap());
    }
}
