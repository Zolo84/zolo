//! Hourly organisation regain of land divisions (`docs/spec/organisation.md`):
//! `0x5033C0` gives each division's change for the hour and `0x51D510` adds
//! it, keeping ORG within 0 and the division's maximum.
//!
//! Supplies and fuel never run short here (stockpiles are not modelled), no
//! stack is reinforcing, on a transport, retreating or bombarded, and
//! ministers and policy sliders leave every factor at 1.

use crate::movement::MoveContext;
use crate::{Rng, System, World};
use dh_data::{Branch, Difficulty, Division, Weather};
use std::collections::{HashMap, HashSet};
use std::sync::Arc;

/// Tag of the rebels, who regain a flat `mod[21]` an hour.
pub const REBELS: &str = "REB";

/// Old rules: ORG regain lost to the weather of the stack's province.
fn weather_penalty(w: Weather) -> f32 {
    match w {
        Weather::Snowing | Weather::Storm => 0.2,
        Weather::Blizzard => 0.4,
        Weather::Muddy => 0.3,
        _ => 0.0,
    }
}

/// The stack-wide inputs of ORG regain (one hour).
#[derive(Debug, Clone, Copy, PartialEq)]
pub struct OrgConditions {
    pub rebels: bool,
    pub in_battle: bool,
    /// Supply efficiency of the stack's divisions.
    pub ese: f32,
    /// On land (not at sea or on a river).
    pub land: bool,
    pub infra: f32,
    /// In a province of a friendly owner.
    pub friendly: bool,
    /// `D`, from the distance to the last friendly province.
    pub distance: f32,
    pub moving: bool,
    pub weather: Weather,
    pub in_supply: bool,
}

pub struct OrgRegain {
    ctx: Arc<MoveContext>,
    /// `db/difficulty.csv`; empty means no difficulty modifier.
    pub difficulty: Difficulty,
    pub difficulty_level: usize,
}

impl OrgRegain {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        OrgRegain {
            ctx,
            difficulty: Difficulty::default(),
            difficulty_level: dh_data::difficulty::NORMAL,
        }
    }
}

impl World {
    /// Maximum ORG of a division (`0x4FD2C0`): the model's with its
    /// brigades, times the policy and minister factors (1 here).
    pub fn max_org(&self, ctx: &MoveContext, d: &Division) -> f32 {
        ctx.units
            .division_stats(d)
            .map_or(0.0, |s| s.get("defaultorganisation") as f32)
    }

    /// Current ORG; a division the scenario leaves unset is at its maximum.
    pub fn org(&self, ctx: &MoveContext, d: &Division) -> f32 {
        d.organisation
            .map_or_else(|| self.max_org(ctx, d), |o| o as f32)
    }

    /// Whether `owner`'s provinces count as friendly to a stack of country
    /// `tag` under command of `command` (`0x503D65`): its own or its
    /// commander's, the same alliance — two countries outside any alliance
    /// count as one, as in the game — or military access.
    pub fn friendly_owner(&self, tag: &str, command: &str, owner: &str) -> bool {
        owner == tag
            || owner == command
            || self.diplomacy.alliance_of(owner) == self.diplomacy.alliance_of(tag)
            || self.has_access(tag, owner)
    }

    fn friendly_province(&self, unit: usize, p: u32) -> bool {
        let u = &self.units[unit];
        self.owner
            .get(&p)
            .is_some_and(|o| self.friendly_owner(&u.owner, u.controller(), o))
    }

    /// What ORG regain needs to know about land stack `unit` this hour,
    /// given whether it is under HQ influence and in supply; `None` when it
    /// has no location.
    pub fn org_conditions(
        &self,
        ctx: &MoveContext,
        unit: usize,
        hq: bool,
        in_supply: bool,
    ) -> Option<OrgConditions> {
        let u = &self.units[unit];
        let loc = u.unit.location?;
        let leader = self.stack_leader(unit);
        let land = ctx.province(loc).is_some_and(|i| !i.is_water());
        Some(OrgConditions {
            rebels: u.controller() == REBELS,
            in_battle: self.in_battle(unit),
            ese: self.stack_supply_efficiency(ctx, unit, &leader, hq),
            land,
            infra: ctx.province(loc).map_or(0.0, |i| i.infra),
            friendly: land && self.friendly_province(unit, loc),
            distance: self.supply_distance_factor(ctx, unit),
            moving: u.is_moving(self.hour),
            weather: self.weather_at(loc),
            in_supply,
        })
    }

    /// ORG division `d` gains this hour (`0x5033C0`) in a stack under
    /// `cond`; negative values are losses. `difficulty` is the country's
    /// ORGANISATION modifier as a fraction.
    pub fn org_regain(
        &self,
        ctx: &MoveContext,
        cond: &OrgConditions,
        d: &Division,
        difficulty: f32,
    ) -> f32 {
        let p = &self.params;
        if cond.rebels {
            return p.rebel_org;
        }
        if cond.in_battle {
            return 0.0;
        }
        let morale = ctx
            .units
            .division_stats(d)
            .map_or(0.0, |s| s.get("morale") as f32);
        let max = self.max_org(ctx, d);
        let q = if max > 0.0 {
            self.org(ctx, d) / max
        } else {
            1.0
        };

        if p.new_org_logic {
            let [base, _no_fuel, _no_supplies, low_org, home, _transport, march, _retreat] =
                p.org_land;
            let mut x = cond.ese * (1.0 + morale * p.org_morale) * base;
            if x == 0.0 {
                return 0.0;
            }
            if low_org > 0.0 && q < 1.0 {
                x *= 1.0 + (1.0 - q) * low_org;
            }
            x *= if cond.friendly { home } else { cond.distance };
            if cond.moving {
                if march < 0.0 {
                    return march;
                }
                x *= march;
            }
            if x > 0.0 {
                x *= p.org_weather[cond.weather as usize] * (1.0 + difficulty) / 24.0;
            }
            return x;
        }

        let mut x = cond.ese * (1.0 + (morale - 30.0) * 0.01);
        if cond.land {
            x *= if cond.friendly {
                (2.0 * cond.infra + p.org_friendly_bonus).min(p.org_friendly_cap)
            } else {
                cond.infra
            };
        }
        x *= cond.distance;
        x *= if q < 0.25 {
            3.0
        } else if q < 0.5 {
            2.0
        } else if q >= 0.75 {
            0.5
        } else {
            1.0
        };
        if cond.moving {
            x = -0.2;
        }
        if x >= 0.0 {
            x += (morale - 30.0) * 0.01;
        }
        x -= weather_penalty(cond.weather);
        if !cond.in_supply {
            x = -0.5;
        }
        if x >= 0.0 {
            x * (1.0 + difficulty) * 0.1
        } else {
            x * (1.0 - difficulty) * 0.1
        }
    }

    /// `D` (`0x509350`): regain falls off with the distance to the last
    /// friendly province, `1 − distance · economy[87] / 100` (the distance in
    /// the game's 100-km unit), times `country[10]`, within 0.1..=1.
    pub fn supply_distance_factor(&self, ctx: &MoveContext, unit: usize) -> f32 {
        let p = &self.params;
        let u = &self.units[unit];
        let dist = match (u.unit.location, u.last_friendly) {
            (Some(a), Some(b)) => ctx.distance(a, b).unwrap_or(0.0),
            _ => 0.0,
        };
        ((100.0 - (dist * p.supply_distance).min(100.0)) * 0.01 * p.country_supply_distance)
            .clamp(0.1, 1.0)
    }
}

impl System for OrgRegain {
    fn name(&self) -> &str {
        "org"
    }

    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        let hqs = world.hq_positions();
        let mut networks: HashMap<String, Option<HashSet<u32>>> = HashMap::new();
        for i in 0..world.units.len() {
            if world.units[i].unit.branch != Branch::Land {
                continue;
            }
            let tag = world.units[i].controller().to_owned();
            let difficulty = self.difficulty.modifier(
                "ORGANISATION",
                self.difficulty_level,
                false,
                world.diplomacy.faction_of(&tag),
            );
            let Some(loc) = world.units[i].unit.location else {
                continue;
            };
            let network = networks
                .entry(tag.clone())
                .or_insert_with(|| world.supply_network(&self.ctx, &tag));
            let in_supply = network.as_ref().is_none_or(|n| n.contains(&loc));
            let hq = world.under_hq_influence_near(&self.ctx, i, &hqs);
            let Some(cond) = world.org_conditions(&self.ctx, i, hq, in_supply) else {
                continue;
            };
            let changes: Vec<(f32, f32)> = world.units[i]
                .unit
                .divisions
                .iter()
                .map(|d| {
                    let r = world.org_regain(&self.ctx, &cond, d, difficulty);
                    (world.org(&self.ctx, d) + r, world.max_org(&self.ctx, d))
                })
                .collect();
            for (d, (org, max)) in world.units[i].unit.divisions.iter_mut().zip(changes) {
                d.organisation = Some(f64::from(org.clamp(0.0, max.max(0.0))));
            }
            // `0x51D3D0`: remember the stack's province while it is friendly.
            if let Some(loc) = world.units[i].unit.location {
                if world.friendly_province(i, loc) {
                    world.units[i].last_friendly = Some(loc);
                }
            }
        }
    }
}
