//! The daily economy (`economy.md`): what provinces yield, the IC spent on
//! supplies and consumer goods, money, manpower growth, and the AI's IC
//! sliders.
//!
//! At 00:00, before [`crate::Logistics`] works out the day's IC (the game's
//! `0x49C480` comes before `0x49A740` and `0x49AD70`), each country turns
//! the IC on its supplies slider into supplies, grows its manpower, takes
//! the oil, metal, energy and rare materials of the provinces it controls,
//! adds its scenario's `free` resources and earns money from consumer
//! goods, all on yesterday's IC. Once the hour's systems have run (the
//! day's IC is known), consumer goods use their resources, the production
//! queue gets the IC of the production slider ([`crate::production`],
//! economy.md §8) and the AI sets the sliders for the next day. With the
//! scenario's `rules = { production = no }` only the `free` resources come
//! in, consumer goods use theirs and the queue does not advance.
//!
//! Every country is played by the AI. Not modelled yet: provincial depots
//! and their pools (output of provinces cut off from the capital's allied
//! area, which the game keeps in a depot, is lost here), convoys and trade;
//! the energy-to-oil conversion; puppets; spy upkeep (nothing for the AI);
//! stockpile limits (off in the shipped game); dissent; and output lost to
//! bombing or conquest (a province always yields its `Province.csv`
//! amounts). The AI's sliders are simplified (see [`World::set_ai_sliders`]).
//!
//! The game computes on the x87 at double precision and rounds to single
//! precision where it stores; the code does the same (`as f32`), except
//! that stockpiles stay `f64` as elsewhere.

use crate::movement::MoveContext;
use crate::{IcSliders, Rng, System, World};
use dh_data::Difficulty;
use std::collections::{HashSet, VecDeque};
use std::sync::Arc;

/// The share of the IC the AI puts on reinforcement at most while AI files
/// (`ai/*.ai`, their `reinforcement`) are not read.
pub const AI_REINFORCEMENT: f32 = 0.1;

pub struct Economy {
    ctx: Arc<MoveContext>,
    /// `db/difficulty.csv`; empty means no difficulty modifier.
    pub difficulty: Difficulty,
    pub difficulty_level: usize,
    /// The largest reinforcement share the AI gives (its AI file's
    /// `reinforcement`).
    pub ai_reinforcement: f32,
}

impl Economy {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        Economy {
            ctx,
            difficulty: Difficulty::default(),
            difficulty_level: dh_data::difficulty::NORMAL,
            ai_reinforcement: AI_REINFORCEMENT,
        }
    }

    /// A country's difficulty modifiers (`0x76B8B0`), as for the AI.
    pub fn difficulty_of(&self, world: &World, tag: &str) -> EconomyDifficulty {
        let faction = world.diplomacy.faction_of(tag);
        let m = |category| {
            self.difficulty
                .modifier(category, self.difficulty_level, false, faction)
        };
        EconomyDifficulty {
            resources: m("RESOURCES"),
            manpower: m("MANPOWER"),
            dissent: m("DISSENT"),
        }
    }
}

/// Difficulty modifiers of a country's economy, as fractions: the
/// `RESOURCES`, `MANPOWER` and `DISSENT` rows of `db/difficulty.csv`.
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct EconomyDifficulty {
    pub resources: f32,
    pub manpower: f32,
    pub dissent: f32,
}

/// What a province yields its controller in a day.
#[derive(Debug, Clone, Copy, Default, PartialEq)]
pub struct ResourceOutput {
    pub oil: f64,
    pub metal: f64,
    pub energy: f64,
    pub rare_materials: f64,
}

impl World {
    /// The land provinces joined to the capital of `tag` by land it
    /// controls: the game's region of the capital (`+0x482`). With
    /// `allies`, also by land its alliance controls: the capital's allied
    /// area (`+0x6C`), whose provinces deliver to the national stockpile.
    /// `None` when `tag` does not control its capital (the game then
    /// measures from a stand-in, not modelled).
    pub fn capital_area(&self, ctx: &MoveContext, tag: &str, allies: bool) -> Option<HashSet<u32>> {
        let capital = self.countries.get(tag).and_then(|c| c.capital)?;
        if self.controller.get(&capital).map(String::as_str) != Some(tag) {
            return None;
        }
        let joins = |p: u32| {
            ctx.province(p).is_some_and(|i| !i.is_water())
                && self
                    .controller
                    .get(&p)
                    .is_some_and(|c| c == tag || (allies && self.diplomacy.allied(tag, c)))
        };
        let mut area = HashSet::from([capital]);
        let mut queue = VecDeque::from([capital]);
        while let Some(p) = queue.pop_front() {
            for link in ctx.adjacency.neighbours(p) {
                if link.kind != dh_map::AdjKind::Impassable
                    && joins(link.to)
                    && area.insert(link.to)
                {
                    queue.push_back(link.to);
                }
            }
        }
        Some(area)
    }

    /// Uses the resources of `x` IC (`0x44AD50`): `x` metal, `2x` energy
    /// and `x/2` rare materials, each stockpile at least 0. Nothing checks
    /// that they suffice.
    pub fn spend_resources(&mut self, tag: &str, x: f32) {
        let Some(c) = self.countries.get_mut(tag) else {
            return;
        };
        let s = &mut c.stock;
        let x = f64::from(x);
        s.metal = (s.metal - x).max(0.0);
        s.energy = (s.energy - 2.0 * x).max(0.0);
        s.rare_materials = (s.rare_materials - 0.5 * x).max(0.0);
    }

    /// The day's output of province `p` for `tag`, its controller
    /// (`0x4EC350` oil, `0x4EC590` metal, `0x4EC6B0` energy, `0x4EC470`
    /// rare materials): its `Province.csv` amount times the policy's
    /// `MODIFIER_RESOURCE_PROD`, the country's and the cabinet's factor for
    /// the resource and the peacetime or wartime IC modifier; all of that
    /// in national provinces, otherwise `economy[15]` of it for the AI (or,
    /// with that at −1, `economy[14]` when occupied and `economy[13]`
    /// when owned); times `1 + RESOURCES` difficulty. Revolt risk and
    /// partisans do not lower it.
    pub fn resource_output(
        &self,
        ctx: &MoveContext,
        tag: &str,
        p: u32,
        difficulty: f32,
    ) -> ResourceOutput {
        let (Some(c), Some(info)) = (self.countries.get(tag), ctx.province(p)) else {
            return ResourceOutput::default();
        };
        let params = &self.params;
        let policy = f64::from(self.policies.factor("MODIFIER_RESOURCE_PROD", &c.policy));
        let mode = f64::from(if self.diplomacy.in_war(tag) {
            c.wartime_ic_mod
        } else {
            c.peacetime_ic_mod
        });
        let d = f64::from(1.0 + difficulty);
        // Every country is the AI's.
        let share = if c.national.contains(&p) {
            d
        } else if params.resource_non_national_ai != -1.0 {
            f64::from(params.resource_non_national_ai) * d
        } else if self.owner.get(&p).map(String::as_str) != Some(tag) {
            f64::from(params.resource_occupied) * d
        } else {
            f64::from(params.resource_non_national) * d
        };
        let one = |amount: f32, country: f32, minister: f32| {
            let v = (f64::from(amount) * policy * f64::from(country) * f64::from(minister)) as f32;
            let v = (f64::from(v) * mode) as f32;
            share * f64::from(v)
        };
        let m = &c.ministers;
        ResourceOutput {
            oil: one(info.oil, c.oil_modifier, m.oil),
            metal: one(info.metal, c.metal_modifier, m.metal),
            energy: one(info.energy, c.energy_modifier, m.energy),
            rare_materials: one(info.rare_materials, c.rare_modifier, m.rare_materials),
        }
    }

    /// The day's manpower growth of `tag` (`0x49B110`), in thousands.
    ///
    /// Each controlled province adds its `Province.csv` manpower times
    /// `economy[26]` (national) or `economy[27]` (else, plus `economy[26]`
    /// times the cabinet's non-national population growth), the sum
    /// rounded to single precision after each. A province outside the
    /// capital's region ([`World::capital_area`] without allies) gives
    /// nothing at war, or `economy[30]` of it when that is above 0; one
    /// also on another continent than the capital is colonial,
    /// `economy[28]` of it. The sum is scaled by the cabinet's national
    /// population growth, the policy's `MODIFIER_MP_GROWTH`, `1 + MANPOWER`
    /// difficulty, the country's relative manpower and `economy[31]`
    /// (peace) or `economy[32]` (war); `economy[33]` of the pool retires;
    /// the scenario's `free` manpower comes on top. Not limited to 0 (as in
    /// the game).
    pub fn manpower_growth(&self, ctx: &MoveContext, tag: &str, difficulty: f32) -> f64 {
        let Some(c) = self.countries.get(tag) else {
            return 0.0;
        };
        let p = &self.params;
        let war = self.diplomacy.in_war(tag);
        // With the capital lost the game measures from its stand-in (not
        // modelled); every province then counts as home.
        let region = self.capital_area(ctx, tag, false);
        let continent = c
            .capital
            .and_then(|cap| ctx.province(cap))
            .map(|i| i.continent);
        let non_national = f64::from(c.ministers.non_national_population_growth);
        let national = f64::from(p.manpower_national);
        let mut s = 0.0f32;
        for (&prov, ctrl) in &self.controller {
            if ctrl != tag {
                continue;
            }
            let Some(info) = ctx.province(prov) else {
                continue;
            };
            let mp = f64::from(info.manpower);
            if mp == 0.0 {
                continue;
            }
            let home = region.as_ref().is_none_or(|r| r.contains(&prov));
            let colonial = if !home && Some(info.continent) != continent {
                f64::from(p.manpower_colonial)
            } else {
                1.0
            };
            let k = if war && !home {
                if p.manpower_overseas_war <= 0.0 {
                    continue;
                }
                f64::from(p.manpower_overseas_war) * colonial
            } else {
                colonial
            };
            if c.national.contains(&prov) {
                s = (f64::from(s) + national * mp * k) as f32;
            } else {
                s = (f64::from(s) + f64::from(p.manpower_non_national) * mp * k) as f32;
                if non_national > 0.0 {
                    s = (f64::from(s) + national * mp * non_national * k) as f32;
                }
            }
        }
        let policy = f64::from(self.policies.factor("MODIFIER_MP_GROWTH", &c.policy));
        let s = f64::from(s) * f64::from(c.ministers.population_growth) * policy;
        let mut g = f64::from(1.0 + difficulty) * f64::from(s as f32);
        g *= f64::from(c.relative_manpower);
        g *= f64::from(if war {
            p.manpower_war
        } else {
            p.manpower_peace
        });
        let pool = c.stock.manpower;
        if pool > 0.0 {
            g -= pool * f64::from(p.manpower_retired);
        }
        g + c.free.manpower
    }

    /// The share of its IC `tag` must put on consumer goods (`0x4A3300`):
    /// `(1 − DISSENT difficulty) · MODIFIER_CG_DEMAND · base / economy[3]`
    /// times the cabinet's consumer factor, `base` 0.2 at peace and 0.1 at
    /// war, within 0.01..=0.9.
    pub fn consumer_goods_need(&self, tag: &str, dissent_difficulty: f32) -> f32 {
        let Some(c) = self.countries.get(tag) else {
            return 0.0;
        };
        let base: f32 = if self.diplomacy.in_war(tag) { 0.1 } else { 0.2 };
        let demand = f64::from(self.policies.factor("MODIFIER_CG_DEMAND", &c.policy));
        let f = (1.0 - f64::from(dissent_difficulty)) * (demand * f64::from(base))
            / f64::from(self.params.ic_to_consumer_goods)
            * f64::from(c.ministers.consumer);
        (f as f32).clamp(0.01, 0.9)
    }

    /// The part of the day at 00:00 (`0x49C480`) for `tag`, on yesterday's
    /// IC: supplies from the supplies slider (using their resources),
    /// manpower growth up to `economy[61]`, the output of the provinces it
    /// controls in the capital's allied area ([`World::capital_area`]),
    /// the `free` resources, and money from consumer goods (at least 0, as
    /// for the AI). With the `production` rule off, only the `free`
    /// resources and money.
    pub fn produce(&mut self, ctx: &MoveContext, tag: &str, difficulty: EconomyDifficulty) {
        let Some(c) = self.countries.get(tag) else {
            return;
        };
        if !self.rules.production {
            let free = c.free;
            let s = &mut self.countries.get_mut(tag).unwrap().stock;
            s.supplies = (s.supplies + free.supplies).max(0.0);
            s.oil = (s.oil + free.oil).max(0.0);
            s.rare_materials = (s.rare_materials + free.rare_materials).max(0.0);
            s.metal = (s.metal + free.metal).max(0.0);
            s.energy = (s.energy + free.energy).max(0.0);
            s.money = (s.money + free.money).max(0.0);
            return;
        }
        let p = &self.params;
        let ic = c.ic as f32;
        let x = ic * c.sliders.supplies;
        let supplies = f64::from(p.ic_to_supplies)
            * f64::from(c.supply_modifier)
            * f64::from(c.ministers.supplies)
            * f64::from(x);
        let money = f64::from(self.policies.factor("MODIFIER_CG_TO_MONEY", &c.policy))
            * f64::from(ic)
            * f64::from(c.sliders.consumer)
            * f64::from(c.money_modifier)
            * f64::from(c.ministers.money)
            * f64::from(p.ic_to_money);
        let max_manpower = f64::from(p.max_manpower);
        let growth = self.manpower_growth(ctx, tag, difficulty.manpower);
        let area = self.capital_area(ctx, tag, true);
        let output: Vec<ResourceOutput> = self
            .controller
            .iter()
            .filter(|(prov, ctrl)| *ctrl == tag && area.as_ref().is_none_or(|a| a.contains(prov)))
            .map(|(&prov, _)| self.resource_output(ctx, tag, prov, difficulty.resources))
            .collect();

        self.spend_resources(tag, x);
        let c = self.countries.get_mut(tag).unwrap();
        let s = &mut c.stock;
        s.supplies = (s.supplies + supplies).max(0.0);
        s.manpower += growth;
        if s.manpower > max_manpower {
            s.manpower = max_manpower;
        }
        for o in output {
            s.oil = (s.oil + o.oil).max(0.0);
            s.rare_materials = (s.rare_materials + o.rare_materials).max(0.0);
            s.energy = (s.energy + o.energy).max(0.0);
            s.metal = (s.metal + o.metal).max(0.0);
        }
        let free = c.free;
        s.supplies = (s.supplies + free.supplies).max(0.0);
        s.oil = (s.oil + free.oil).max(0.0);
        s.rare_materials = (s.rare_materials + free.rare_materials).max(0.0);
        s.metal = (s.metal + free.metal).max(0.0);
        s.energy = (s.energy + free.energy).max(0.0);
        s.money = (s.money + money).max(0.0);
        s.money = (s.money + free.money).max(0.0);
    }

    /// Consumer goods use the resources of their IC on the day's IC
    /// (`0x484898`), whatever the stockpiles hold.
    pub fn spend_consumer_goods(&mut self, tag: &str) {
        let Some(c) = self.countries.get(tag) else {
            return;
        };
        let x = c.sliders.consumer * c.ic as f32;
        self.spend_resources(tag, x);
    }

    /// The AI's IC sliders for `tag`, simplified from `0x676D10` and
    /// `0x67A010` (economy.md §7.4): consumer goods get their need
    /// ([`World::consumer_goods_need`]), reinforcement the share of the IC
    /// [`World::reinforcement_need`] asks for, at most `reinforcement_cap`
    /// (the AI file's) and what consumer goods leave, production the share
    /// its queue asks for ([`World::production_need`]) out of what is left,
    /// and supplies the rest. Upgrading gets nothing; the game's
    /// corrections for dissent (more consumer goods), the supply need of
    /// the troops and the desired stockpiles are left out.
    pub fn set_ai_sliders(
        &mut self,
        ctx: &MoveContext,
        tag: &str,
        dissent_difficulty: f32,
        reinforcement_cap: f32,
    ) {
        let Some(c) = self.countries.get(tag) else {
            return;
        };
        let ic = (c.ic as f32).max(1.0);
        let consumer = self.consumer_goods_need(tag, dissent_difficulty);
        let reinforcement = (self.reinforcement_need(ctx, tag) / ic)
            .min(reinforcement_cap.min(1.0 - consumer))
            .max(0.0);
        let production = (self.production_need(tag) / ic)
            .min(1.0 - consumer - reinforcement)
            .max(0.0);
        self.countries.get_mut(tag).unwrap().sliders = IcSliders {
            consumer,
            production,
            supplies: 1.0 - consumer - reinforcement - production,
            reinforcement,
            upgrade: 0.0,
        };
    }
}

impl System for Economy {
    fn name(&self) -> &str {
        "economy"
    }

    /// 00:00: the day's output on yesterday's IC. Add this system before
    /// [`crate::Logistics`]. Other hours: the production queue's hourly
    /// part ([`World::production_hour`]).
    fn on_hour(&mut self, world: &mut World, _rng: &mut Rng) {
        let tags: Vec<String> = world.countries.keys().cloned().collect();
        if world.date.hour != 0 {
            for tag in &tags {
                world.production_hour(&self.ctx.units, tag);
            }
            return;
        }
        for tag in tags {
            let d = self.difficulty_of(world, &tag);
            world.produce(&self.ctx, &tag, d);
        }
    }

    /// After the hour's systems, so on the day's IC: consumer goods (even
    /// with the `production` rule off), the production queue
    /// ([`World::run_production`]) and its 00:00 hour
    /// ([`World::production_hour`]), then the AI's sliders. In the game
    /// reinforcement comes after consumer goods and production; here it
    /// uses its resources first.
    fn on_day(&mut self, world: &mut World, _rng: &mut Rng) {
        let tags: Vec<String> = world.countries.keys().cloned().collect();
        for tag in tags {
            world.spend_consumer_goods(&tag);
            world.run_production(&tag);
            world.production_hour(&self.ctx.units, &tag);
            if world.rules.production {
                let d = self.difficulty_of(world, &tag);
                world.set_ai_sliders(&self.ctx, &tag, d.dissent, self.ai_reinforcement);
            }
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

    /// Provinces 1 - 2 - 3 in a row on one continent and 4, an island on
    /// another. AAA (capital 1) controls all four: 1 and 4 national, 2
    /// owned, 3 occupied from BBB. Each yields 10 energy, 4 metal, 2 rare
    /// materials, 1 oil and 10 manpower.
    fn setup() -> (MoveContext, World) {
        let link = |to| Link {
            to,
            kind: AdjKind::Normal,
            through: None,
        };
        let province = |continent| {
            Some(ProvinceInfo {
                infra: 1.0,
                manpower: 10.0,
                oil: 1.0,
                metal: 4.0,
                energy: 10.0,
                rare_materials: 2.0,
                continent,
                ..Default::default()
            })
        };
        let ctx = MoveContext {
            adjacency: Adjacency::from_lists(vec![
                vec![],
                vec![link(2)],
                vec![link(1), link(3)],
                vec![link(2)],
                vec![],
            ]),
            provinces: vec![None, province(1), province(1), province(1), province(2)],
            terrain_move: [1.0; 12],
            modifiers: UnitModifiers::default(),
            units: UnitDb::default(),
            airdist: None,
        };
        let mut world = World::empty(GameDate::new(1936, 1, 1));
        let mut aaa = Country::new("AAA");
        aaa.capital = Some(1);
        aaa.national = [1, 4].into();
        aaa.peacetime_ic_mod = 0.9;
        world.countries.insert("AAA".into(), aaa);
        world.countries.insert("BBB".into(), Country::new("BBB"));
        for p in 1..=4 {
            let owner = if p == 3 { "BBB" } else { "AAA" };
            world.owner.insert(p, owner.into());
            world.controller.insert(p, "AAA".into());
        }
        (ctx, world)
    }

    #[test]
    fn provinces_yield_by_their_status() {
        let (ctx, mut world) = setup();
        let energy = |w: &World, p| w.resource_output(&ctx, "AAA", p, 0.0).energy;
        let close = |a: f64, b: f64| (a - b).abs() < 1e-5;
        // 10 · 0.9 (peacetime) in national provinces, wherever they lie.
        assert!(close(energy(&world, 1), 9.0) && close(energy(&world, 4), 9.0));
        // The AI takes 0.75 of the others…
        assert!(close(energy(&world, 2), 6.75) && close(energy(&world, 3), 6.75));
        // …or, without that rule, 0.5 of owned and 0.4 of occupied ones.
        world.params.resource_non_national_ai = -1.0;
        assert!(close(energy(&world, 2), 4.5) && close(energy(&world, 3), 3.6));
        // Factors of the country, its cabinet and the difficulty.
        let c = world.countries.get_mut("AAA").unwrap();
        c.metal_modifier = 1.5;
        c.ministers.metal = 2.0;
        let o = world.resource_output(&ctx, "AAA", 1, 0.2);
        assert!(close(o.metal, 4.0 * 1.5 * 2.0 * 0.9 * 1.2), "{o:?}");
        assert!(close(o.oil, 0.9 * 1.2) && close(o.rare_materials, 1.8 * 1.2));
    }

    #[test]
    fn manpower_grows_less_overseas_and_not_at_war() {
        let (ctx, mut world) = setup();
        let close = |a: f64, b: f64| (a - b).abs() < 1e-6;
        // 0.01 · 10 for national 1, 0.001 · 10 for 2 and 3, and island 4 is
        // colonial: 0.01 · 10 · 0.1. Times the relative manpower 0.9.
        let g = world.manpower_growth(&ctx, "AAA", 0.0);
        assert!(close(g, 0.13 * 0.9), "{g}");
        // At war the island, outside the supply network, gives nothing.
        world.declare_war("AAA", "BBB");
        assert!(close(world.manpower_growth(&ctx, "AAA", 0.0), 0.12 * 0.9));
        // A cabinet's non-national growth adds 0.01 · 10 · 0.5 for 2 and 3;
        // the national one multiplies; difficulty, retirement and `free`.
        let c = world.countries.get_mut("AAA").unwrap();
        c.ministers.non_national_population_growth = 0.5;
        c.ministers.population_growth = 2.0;
        c.stock.manpower = 100.0;
        c.free.manpower = 1.0;
        world.params.manpower_retired = 0.001;
        let g = world.manpower_growth(&ctx, "AAA", 0.5);
        assert!(close(g, 0.22 * 2.0 * 1.5 * 0.9 - 0.1 + 1.0), "{g}");
    }

    #[test]
    fn a_day_of_supplies_money_and_resources() {
        let (ctx, mut world) = setup();
        let c = world.countries.get_mut("AAA").unwrap();
        c.ic = 100;
        c.stock.metal = 100.0;
        c.stock.energy = 50.0;
        c.stock.rare_materials = 100.0;
        c.stock.manpower = 9999.0;
        c.free.supplies = 5.0;
        c.free.money = 2.0;
        c.free.oil = -100.0;
        world.produce(&ctx, "AAA", EconomyDifficulty::default());
        let s = world.countries["AAA"].stock;
        let close = |a: f64, b: f64| (a - b).abs() < 1e-4;
        // 40 IC on supplies: 4 · 40 supplies for 40 metal, 80 energy (all
        // there is) and 20 rare materials; then the output of the provinces
        // joined to the capital (9 + 6.75 + 6.75 = 22.5 energy): the
        // island's stays in its depot.
        assert!(close(s.supplies, 160.0 + 5.0), "{s:?}");
        assert!(close(s.metal, 100.0 - 40.0 + 0.4 * 22.5));
        assert!(close(s.energy, 22.5));
        assert!(close(s.rare_materials, 100.0 - 20.0 + 0.2 * 22.5));
        // Free oil takes the stockpile to 0 at most.
        assert_eq!(s.oil, 0.0);
        // 40 IC on consumer goods: 0.25 money each.
        assert!(close(s.money, 10.0 + 2.0));
        assert_eq!(s.manpower, 9999.0, "the cap");

        // Consumer goods then use their resources on the day's IC.
        world.countries.get_mut("AAA").unwrap().ic = 50;
        world.spend_consumer_goods("AAA");
        let s = world.countries["AAA"].stock;
        assert!(close(s.metal, 60.0 + 9.0 - 20.0));
        assert_eq!(s.energy, 0.0);
    }

    #[test]
    fn without_the_production_rule_only_free_resources_come() {
        let (ctx, mut world) = setup();
        world.rules.production = false;
        let c = world.countries.get_mut("AAA").unwrap();
        c.ic = 100;
        c.stock.metal = 100.0;
        c.free.metal = 3.0;
        c.free.money = 2.0;
        world.produce(&ctx, "AAA", EconomyDifficulty::default());
        let s = world.countries["AAA"].stock;
        assert_eq!((s.metal, s.money, s.supplies), (103.0, 2.0, 0.0));
        assert_eq!((s.energy, s.manpower), (0.0, 0.0));
    }

    #[test]
    fn the_allied_area_reaches_through_allies_only() {
        let (ctx, mut world) = setup();
        world.controller.insert(2, "BBB".into());
        let area = |w: &World, allies| {
            let mut a: Vec<_> = w
                .capital_area(&ctx, "AAA", allies)
                .unwrap()
                .into_iter()
                .collect();
            a.sort();
            a
        };
        assert_eq!(area(&world, true), [1]);
        world
            .diplomacy
            .alliances
            .push(dh_data::diplomacy::Alliance {
                faction: dh_data::diplomacy::Faction::Other,
                id: None,
                name: None,
                members: vec!["AAA".into(), "BBB".into()],
                defensive: false,
            });
        assert_eq!(area(&world, true), [1, 2, 3]);
        assert_eq!(area(&world, false), [1]);
    }

    #[test]
    fn the_ai_meets_consumer_goods_and_supplies_the_rest() {
        let (ctx, mut world) = setup();
        world.countries.get_mut("AAA").unwrap().ic = 100;
        let close = |a: f32, b: f32| (a - b).abs() < 1e-6;
        // 0.2 at peace, less a fifth from difficulty.
        assert!(close(world.consumer_goods_need("AAA", 0.2), 0.16));
        world.set_ai_sliders(&ctx, "AAA", 0.2, AI_REINFORCEMENT);
        let s = world.countries["AAA"].sliders;
        assert!(close(s.consumer, 0.16) && close(s.supplies, 0.84), "{s:?}");
        assert_eq!((s.production, s.reinforcement, s.upgrade), (0.0, 0.0, 0.0));
        // Production gets what the queue asks for (items waiting for
        // manpower do not count), at most what consumer goods leave.
        let mut item = crate::QueueItem {
            name: "x".into(),
            id: None,
            build: dh_data::production::Build::Convoy(0),
            location: 0,
            days: 75,
            ic: 8.0,
            size: 1,
            done: 0,
            state: 0,
            halted: false,
            continuity: 0.0,
            funded: 1.0,
            progress: 0.0,
            manpower: 1.0,
            gearing: 0.0,
            upgrade: false,
            new_model: true,
            unitcost: true,
        };
        let mut waiting = item.clone();
        waiting.halted = true;
        world.countries.get_mut("AAA").unwrap().production = vec![item.clone(), waiting];
        world.set_ai_sliders(&ctx, "AAA", 0.2, AI_REINFORCEMENT);
        let s = world.countries["AAA"].sliders;
        assert!(
            close(s.production, 0.08) && close(s.supplies, 0.76),
            "{s:?}"
        );
        item.ic = 200.0;
        world.countries.get_mut("AAA").unwrap().production = vec![item];
        world.set_ai_sliders(&ctx, "AAA", 0.2, AI_REINFORCEMENT);
        let s = world.countries["AAA"].sliders;
        assert!(
            close(s.production, 0.84) && s.supplies.abs() < 1e-6,
            "{s:?}"
        );
        world.countries.get_mut("AAA").unwrap().production.clear();
        // 0.1 at war; within 0.01..=0.9.
        world.declare_war("AAA", "BBB");
        assert!(close(world.consumer_goods_need("AAA", 0.0), 0.1));
        world.countries.get_mut("AAA").unwrap().ministers.consumer = 10.0;
        assert_eq!(world.consumer_goods_need("AAA", 0.0), 0.9);
    }
}
