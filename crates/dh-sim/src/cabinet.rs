//! Cabinet, government and domestic policy (`docs/spec/cabinet.md`).
//!
//! **Government** (spec §1). A country's ideology is the cell of the ideology
//! matrix its `democratic` and `political_left` sliders pick
//! ([`World::ideology`], `0x760460`), never its ministers'; its government
//! group follows (NS, FA, PA fascist; SC, ML, SL, SD democratic; LWR, LE,
//! ST communist). Both change as soon as one of the two sliders does.
//!
//! **Ministers** (§4). [`World::ministers`] holds every minister of the CSV
//! files by ID (the game's registry, keys `{9, ID}`), with its country,
//! post, ideology, personality, start year and a "dead" flag. Each
//! country also has a pool ([`Country::minister_pool`], `C+0x2A0`): at the
//! start every minister of its CSV in load order, those already in a slot
//! and those not started yet included; a minister a slot loses joins its
//! end. Putting a minister in a slot ([`World::set_cabinet_slot`],
//! `0x458250`) recomputes the cabinet's modifiers (`0x451390`,
//! ministers.md) and does nothing else.
//!
//! **Policy** (§2). Sliders are kept on the files' 1..=10 scale; the game's
//! setter (`0x761140`) clamps to its 0..=9. A change through
//! EXEC_CHANGE_POLICY ([`World::exec_change_policy`]) stamps the
//! next-change date (`misc diplomacy[2]` days ahead) unless the sender asks
//! not to, and runs the cabinet check at 2.0 after `democratic` or
//! `political_left`. Events' `domestic` / `set_domestic` do not stamp;
//! `change_policy` goes through the rules of `0x4A0120`
//! ([`World::can_change_policy`]: the range, `MANUAL_OR_BY_INFLUENCE_MOVES`,
//! the ideology's bounds on `freedom` and `free_market`, the next-change
//! date) and is dropped silently when they fail. Policy factors are worked
//! out from the sliders where they are used, so nothing else needs
//! updating. Changes by diplomacy, new countries and declarations of war
//! (§8) are not modelled.
//!
//! **The cabinet check** (§3, [`World::cabinet_check`], `0x44D880`) runs at
//! the start with threshold 4.0 ([`World::start_cabinets`]) and after a
//! change of the two political sliders with 2.0. A slot keeps its minister
//! when `0x4A46C0` accepts it — but that function looks the minister up in
//! the pool of the *local player's* country (`[0xD0CA50]`, the game's bug),
//! so for every other country it fails and each slot is scored: the
//! sitting minister by its ideology distance to the government, any
//! candidate from the pool by the distance but at least the threshold. A
//! valid minister thus only gives way when its distance exceeds the
//! threshold (with 4.0 only distances of 5 and more). Here no country is
//! the player's unless [`World::player`] names one (the game would read a
//! null pointer without a player), so every country takes the scored way.
//! The winner is seated in the slot of its *own* post (`0x44DBB5`): a
//! candidate let in through a personality for all posts (`all`, a missing
//! `position`, the generic one every made-up minister has) overwrites that
//! slot, and the slot checked keeps its minister. Each replacement
//! multiplies dissent by 0.95 (only here, not in CHANGE_MINISTER).
//! Yearly retirement (`0x462E00`) runs only with `misc mod[35]` ("Enable
//! Retirement Year for ministers", byte `0xDC191C`) at 1, 0 in the shipped
//! game; it is not modelled, so made-up ministers never retire.

use crate::{Country, World};
use dh_data::ideology::{Government, Ideology};
use dh_data::ministers::{Personalities, Personality};
use std::collections::BTreeMap;
use std::sync::Arc;

/// A minister (`0xC0`-byte object, ctor `0x761960`).
#[derive(Debug, Clone, PartialEq)]
pub struct MinisterState {
    pub id: i64,
    /// The country of its CSV (`+0x7C`).
    pub country: String,
    /// Its post (`+0x80`), an index into `dh_data::ministers::POSTS`;
    /// none for an unknown one (`0xA`).
    pub post: Option<usize>,
    pub name: String,
    /// Year it becomes available (`+0x1A`).
    pub start_year: i32,
    /// Year it retires (`+0x22`; not acted on, see the module notes).
    pub retirement_year: i32,
    pub ideology: Ideology,
    /// Its personality, a key of [`CabinetData::personalities`]: the CSV's,
    /// or the generic one when that is unknown (empty when the file has
    /// none: the built-in generic personality, without commands).
    pub personality: String,
    /// Its CSV group (`dh_data::ministers::GROUPS`; 0 is the starting
    /// cabinet, as for the ministers the game makes up).
    pub group: u8,
    /// Put to sleep by `sleepminister` (`+0xBE`).
    pub dead: bool,
}

/// A node of a country's pool: a minister and a post (`{type, id, post}`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct PoolEntry {
    pub id: i64,
    pub post: Option<usize>,
}

/// What the cabinet rules read besides the ministers.
#[derive(Debug, Clone, Default)]
pub struct CabinetData {
    pub personalities: Personalities,
    /// Each personality's worth (`+0x2E` once the game has started).
    pub values: BTreeMap<String, i64>,
    /// For the brigade rows of the modifiers (`extra` commands).
    pub units: dh_data::UnitDb,
    /// `db/randomleaders.csv` by tag.
    pub random_names: BTreeMap<String, Vec<String>>,
}

impl CabinetData {
    pub fn new(
        personalities: Personalities,
        units: dh_data::UnitDb,
        random_names: BTreeMap<String, Vec<String>>,
    ) -> Self {
        let values = personalities
            .by_name
            .iter()
            .map(|(k, p)| (k.clone(), p.worth()))
            .collect();
        CabinetData {
            personalities,
            values,
            units,
            random_names,
        }
    }

    pub fn personality(&self, name: &str) -> Option<&Personality> {
        self.personalities.by_name.get(name)
    }

    /// Whether a personality is for every post (`+4 == 0xA`: `all`,
    /// `generic`, the built-in generic one).
    pub fn for_all_posts(&self, name: &str) -> bool {
        self.personality(name).is_none_or(|p| p.position.is_none())
    }

    pub fn value(&self, name: &str) -> i64 {
        self.values.get(name).copied().unwrap_or(0)
    }
}

/// Bounds (0-based, inclusive) the ideology puts on `freedom` (slider 2)
/// and `free_market` (3) for [`World::can_change_policy`] (jump table
/// `0x4A0318`); none for the other sliders.
pub fn slider_bounds(ideology: Ideology, slider: usize) -> Option<(i64, i64)> {
    use Ideology::*;
    let (freedom, free_market) = match ideology {
        NationalSocialist => ((0, 1), (0, 5)),
        Fascist => ((0, 2), (0, 5)),
        PaternalAutocrat => ((0, 4), (1, 5)),
        SocialConservative => ((2, 7), (2, 8)),
        MarketLiberal => ((7, 9), (5, 9)),
        SocialLiberal => ((7, 9), (3, 7)),
        SocialDemocrat => ((4, 8), (0, 5)),
        LeftWingRadical => ((0, 5), (0, 5)),
        Leninist => ((0, 2), (0, 3)),
        Stalinist => ((0, 1), (0, 1)),
    };
    match slider {
        2 => Some(freedom),
        3 => Some(free_market),
        _ => None,
    }
}

/// A moment on the game's 360-day calendar, in hours: what the policy's
/// next-change date and the clock compare as (`0x42DDD0`).
pub fn game_hour(d: dh_data::GameDate) -> i64 {
    crate::events::game_day(d) * 24 + i64::from(d.hour)
}

/// The next-change date of a scenario's `policy = { date = … }` as a
/// [`game_hour`]; 0 (any time) without one.
pub fn policy_date_from(b: Option<&dh_text::Block>) -> i64 {
    dh_data::policy::next_change_from(b).map_or(0, |d| d.day_number() * 24 + i64::from(d.hour))
}

impl World {
    /// The ideology of a country's sliders (`0x44D7D0`).
    pub fn ideology(&self, tag: &str) -> Option<Ideology> {
        let c = self.countries.get(tag)?;
        Some(self.ideologies.of_sliders(&c.policy))
    }

    pub fn government(&self, tag: &str) -> Option<Government> {
        self.ideology(tag).map(Ideology::government)
    }

    /// The minister in slot `k` of a country, if its ID names one
    /// (`0x44C600`; dead and not yet started ones included).
    pub fn slot_minister(&self, tag: &str, k: usize) -> Option<&MinisterState> {
        let id = (*self.countries.get(tag)?.cabinet.get(k)?)?;
        self.ministers.get(&id)
    }

    /// Whether minister `id` sits in some slot of the country.
    pub fn in_cabinet(&self, tag: &str, id: i64) -> bool {
        (0..10).any(|k| self.slot_minister(tag, k).is_some_and(|m| m.id == id))
    }

    /// Registers the ministers and personalities and fills each country's
    /// pool with the ministers of its CSV in load order (ADD_MINISTER,
    /// `0x473C50`, from the country setup `0x482CE0`; the shipped game's
    /// `misc mod[34]` = 0 keeps those already retired or not started
    /// too). A minister whose personality is unknown gets the generic one.
    pub fn set_ministers(&mut self, ministers: &dh_data::Ministers, data: CabinetData) {
        self.ministers.clear();
        for c in self.countries.values_mut() {
            c.minister_pool.clear();
        }
        for id in &ministers.order {
            let Some(m) = ministers.by_id.get(id) else {
                continue;
            };
            let personality = if data.personality(&m.personality).is_some() {
                m.personality.clone()
            } else {
                data.personalities.generic.clone().unwrap_or_default()
            };
            self.ministers.insert(
                m.id,
                MinisterState {
                    id: m.id,
                    country: m.country.clone(),
                    post: m.post,
                    name: m.name.clone(),
                    start_year: m.start_year,
                    retirement_year: m.retirement_year,
                    ideology: Ideology::from_code(&m.ideology),
                    personality,
                    group: m.group,
                    dead: false,
                },
            );
            if let Some(c) = self.countries.get_mut(&m.country) {
                pool_add(c, m.id, m.post);
            }
        }
        self.cabinet_data = Arc::new(data);
    }

    /// GAME_STARTED for every country: its modifiers (`0x451390`, from
    /// `0x781D90`) and the cabinet check at 4.0 (`0x482E48`).
    pub fn start_cabinets(&mut self) {
        let tags: Vec<String> = self.countries.keys().cloned().collect();
        for tag in tags {
            self.recompute_ministers(&tag);
            self.cabinet_check(&tag, 4.0);
        }
    }

    /// `0x451390`: the country's modifiers from the personalities of the
    /// ministers its slots name (dead or not; an unknown ID adds nothing).
    pub fn recompute_ministers(&mut self, tag: &str) {
        let Some(c) = self.countries.get(tag) else {
            return;
        };
        let data = self.cabinet_data.clone();
        let commands: Vec<&dh_data::ministers::MinisterCommand> = c
            .cabinet
            .iter()
            .flatten()
            .filter_map(|id| self.ministers.get(id))
            .filter_map(|m| data.personality(&m.personality))
            .flat_map(|p| &p.commands)
            .collect();
        let m = crate::MinisterModifiers::from_commands(commands, &data.units);
        let c = self.countries.get_mut(tag).unwrap();
        c.leader_skill = m.leader_skill;
        c.ministers = m;
    }

    /// `0x458250`: slot `k` names `id` (none: empty), then the modifiers
    /// are recomputed. No other check or effect.
    pub fn set_cabinet_slot(&mut self, tag: &str, k: usize, id: Option<i64>) {
        let Some(slot) = self
            .countries
            .get_mut(tag)
            .and_then(|c| c.cabinet.get_mut(k))
        else {
            return;
        };
        *slot = id;
        self.recompute_ministers(tag);
    }

    /// CHANGE_MINISTER (0x127 → `0x473A00`): the minister slot `k` held,
    /// if its ID names one, joins the pool (unless there), then `id` takes
    /// the slot — whoever it is: another country's, not started, dead, or
    /// no minister at all; it stays in the pool and no cabinet check
    /// follows. With `penalty` dissent rises by 2 for a
    /// democracy's posts 0..=5, else by 1 (only the player's own change in
    /// the interface sends it).
    pub fn change_minister(&mut self, tag: &str, k: usize, id: i64, penalty: bool) {
        if k >= 10 || !self.countries.contains_key(tag) {
            return;
        }
        if let Some(old) = self.slot_minister(tag, k).map(|m| m.id) {
            pool_add(self.countries.get_mut(tag).unwrap(), old, Some(k));
        }
        self.set_cabinet_slot(tag, k, Some(id));
        if penalty {
            let up = if self.government(tag) == Some(Government::Democratic) && k < 6 {
                2.0
            } else {
                1.0
            };
            let c = self.countries.get_mut(tag).unwrap();
            c.dissent = (c.dissent + up).clamp(0.0, 100.0);
        }
    }

    /// KILL_MINISTER (0x167 → `0x47C600`), what `sleepminister` sends to
    /// the country of the minister's CSV (not the event's): every slot of
    /// that country held by someone of the same name (case-insensitive) is
    /// refilled from its pool — candidates in pool order that are not the
    /// sitting one, alive, of that post (any post when the *slept*
    /// minister's personality is for all), started and in no slot — the
    /// one with the highest personality value (the first of equals; just
    /// the first unless `misc diplomacy[4]` is 1), or else a made-up
    /// minister ([`World::temporary_minister`]); the sitting one goes to
    /// the pool. No ideology check. Then the minister, everyone of its
    /// name in the pool and everyone replaced are marked dead.
    pub fn kill_minister(&mut self, id: i64) {
        let Some(m) = self.ministers.get(&id) else {
            return;
        };
        let owner = m.country.clone();
        let Some(country) = self.countries.get(&owner) else {
            return;
        };
        let name = m.name.clone();
        let any_post = self.cabinet_data.for_all_posts(&m.personality);
        let same_name = |m: &MinisterState| m.name.eq_ignore_ascii_case(&name);
        let mut dead = vec![id];
        for e in &country.minister_pool {
            if self.ministers.get(&e.id).is_some_and(same_name) && !dead.contains(&e.id) {
                dead.push(e.id);
            }
        }
        let year = self.date.year;
        for k in 0..10 {
            let Some(cur) = self.slot_minister(&owner, k).filter(|m| same_name(m)) else {
                continue;
            };
            let cur = cur.id;
            let pool = self.countries[&owner].minister_pool.clone();
            let mut candidates: Vec<i64> = pool
                .iter()
                .filter_map(|e| self.ministers.get(&e.id))
                .filter(|m| {
                    m.id != cur
                        && !m.dead
                        && (m.post == Some(k) || any_post)
                        && m.start_year <= year
                        && !self.in_cabinet(&owner, m.id)
                })
                .map(|m| m.id)
                .collect();
            if candidates.is_empty() {
                candidates.push(self.temporary_minister(&owner, k));
            }
            let mut chosen = candidates[0];
            if self.params.minister_value_replacing == 1.0 {
                let value = |id: &i64| {
                    let p = &self.ministers[id].personality;
                    self.cabinet_data.value(p)
                };
                for c in &candidates[1..] {
                    if value(c) > value(&chosen) {
                        chosen = *c;
                    }
                }
            }
            self.change_minister(&owner, k, chosen, false);
            if !dead.contains(&cur) {
                dead.push(cur);
            }
        }
        for x in dead {
            if let Some(m) = self.ministers.get_mut(&x) {
                m.dead = true;
            }
        }
    }

    /// A minister `0x47C600` makes up when nobody can fill post `k`: the
    /// next free ID (the game's `0x428EB0` is not traced; here one above
    /// the largest), named after entry `ID % n` of the country's
    /// `randomleaders.csv` names (by tag here, by culture in the game; the
    /// tag without any), of the country's ideology, with the generic
    /// personality, in group 0, starting this year and retiring the next
    /// (which never comes, see the module notes); it joins the registry and
    /// the pool.
    pub fn temporary_minister(&mut self, tag: &str, k: usize) -> i64 {
        let id = self
            .ministers
            .keys()
            .next_back()
            .map_or(1, |m| m + 1)
            .max(1);
        let name = match self.cabinet_data.random_names.get(tag) {
            Some(names) if !names.is_empty() => names[id as usize % names.len()].clone(),
            _ => tag.to_owned(),
        };
        let year = self.date.year;
        let m = MinisterState {
            id,
            country: tag.to_owned(),
            post: Some(k),
            name,
            start_year: year,
            retirement_year: year + 1,
            ideology: self.ideology(tag).unwrap_or_default(),
            personality: self
                .cabinet_data
                .personalities
                .generic
                .clone()
                .unwrap_or_default(),
            group: 0,
            dead: false,
        };
        self.ministers.insert(id, m);
        if let Some(c) = self.countries.get_mut(tag) {
            pool_add(c, id, Some(k));
        }
        id
    }

    /// The cabinet check `0x44D880(C, threshold)`: for each slot, the
    /// sitting minister — when its ID names one that has started and is
    /// alive — scores its ideology distance to the government, else the
    /// slot scores 1000; each candidate of the pool (in order) of the
    /// slot's post (or with a personality for all), in no slot, started
    /// and alive scores its distance but at least `threshold`; for an
    /// empty slot (no minister named) a candidate of the starting cabinet
    /// (CSV group 0) fit for the government ([`World::fits_government`])
    /// scores 10 less, or with `misc diplomacy[4]` = 1 `−value · (1 −
    /// 0.1 · s)`. The lowest score below the sitting one's wins (the first
    /// of equals): the sitting one joins the pool, the winner takes the slot
    /// of its own post (`0x44DBB5`; one without a known post goes nowhere,
    /// the game writing past the ten slots), and dissent falls by 5 %.
    /// Retirement and end years are not looked at; nobody is made up.
    pub fn cabinet_check(&mut self, tag: &str, threshold: f32) {
        let Some(gov) = self.ideology(tag) else {
            return;
        };
        let distance = |m: &MinisterState| (m.ideology.index() as i32 - gov.index() as i32).abs();
        let year = self.date.year;
        let with_value = self.params.minister_value_replacing == 1.0;
        let data = self.cabinet_data.clone();
        for k in 0..10 {
            let cur = self.slot_minister(tag, k).cloned();
            let valid = cur.as_ref().filter(|m| m.start_year <= year && !m.dead);
            if let Some(m) = valid {
                if self.player_keeps(tag, m, m.post) {
                    continue;
                }
            }
            let (mut best, mut best_score) = match valid {
                Some(m) => (Some(m.id), distance(m) as f32),
                None => (None, 1000.0),
            };
            let cur_id = cur.as_ref().map(|m| m.id);
            let mut cur_in_pool = false;
            for e in &self.countries[tag].minister_pool {
                let Some(m) = self.ministers.get(&e.id) else {
                    continue;
                };
                if Some(m.id) == cur_id {
                    cur_in_pool = true;
                    continue;
                }
                if (m.post != Some(k) && !data.for_all_posts(&m.personality))
                    || self.in_cabinet(tag, m.id)
                    || m.start_year > year
                    || m.dead
                {
                    continue;
                }
                let mut score = (distance(m) as f32).max(threshold);
                if cur.is_none() && m.group == 0 && self.fits_government(tag, m, m.post) {
                    score -= 10.0;
                    if with_value {
                        score = -(data.value(&m.personality) as f32) * (1.0 - 0.1 * score);
                    }
                }
                if score < best_score {
                    best_score = score;
                    best = Some(m.id);
                }
            }
            let Some(best) = best.filter(|b| Some(*b) != cur_id) else {
                continue;
            };
            if let (Some(old), false) = (cur_id, cur_in_pool) {
                pool_add(self.countries.get_mut(tag).unwrap(), old, Some(k));
            }
            match self.ministers[&best].post {
                Some(p) => self.set_cabinet_slot(tag, p, Some(best)),
                None => self.recompute_ministers(tag),
            }
            let c = self.countries.get_mut(tag).unwrap();
            let d = f64::from(c.dissent);
            c.dissent = ((d - 0.05 * d) as f32).clamp(0.0, 100.0);
        }
    }

    /// `0x4A4900`: whether minister `m` would fit the country's government
    /// in post `p` (its CSV post; none counts as 10): started, alive, not
    /// in a slot when its personality is for all posts; for a post other
    /// than head of state an ideology within 1 (posts 1..=4) or 3 of the
    /// government's, and no NS, FA, LE or ST minister for a democracy; a
    /// head of state of the government's group (a democrat within 3 of it
    /// and not under NS, FA, LE or ST), or an LWR under SD, or a PA under
    /// SC.
    pub fn fits_government(&self, tag: &str, m: &MinisterState, p: Option<usize>) -> bool {
        let Some(gov) = self.ideology(tag) else {
            return false;
        };
        let p = p.unwrap_or(10);
        let max = if (1..=4).contains(&p) { 1 } else { 3 };
        if m.start_year > self.date.year || m.dead {
            return false;
        }
        if self.cabinet_data.for_all_posts(&m.personality) && self.in_cabinet(tag, m.id) {
            return false;
        }
        let (g, x) = (gov.index() as i32, m.ideology.index() as i32);
        if p != 0 {
            if (3..=6).contains(&g) && (x <= 1 || x >= 8) {
                return false;
            }
            return (x - g).abs() <= max;
        }
        match x {
            3..=6 => !(g <= 1 || g >= 8) && (x - g).abs() <= 3,
            7.. => g >= 7 || (x == 7 && g == 6),
            _ => g <= 2 || (x == 2 && g == 3),
        }
    }

    /// `0x4A46C0`: [`World::fits_government`] once `m` is found in the
    /// pool of the local player's country with post `p` (or a personality
    /// for all) — the player's pool whatever the country checked.
    fn player_keeps(&self, tag: &str, m: &MinisterState, p: Option<usize>) -> bool {
        let Some(player) = self.player.as_deref().and_then(|t| self.countries.get(t)) else {
            return false;
        };
        let any_post = self.cabinet_data.for_all_posts(&m.personality);
        player
            .minister_pool
            .iter()
            .any(|e| e.id == m.id && (e.post == p || any_post))
            && self.fits_government(tag, m, p)
    }

    /// `0x761140`: slider `i` ([`dh_data::policy::SLIDERS`] order) set to
    /// `v` on the game's 0..=9 scale, clamped (stored as `v + 1`).
    pub fn set_slider(&mut self, tag: &str, i: usize, v: i64) {
        if let Some(x) = self
            .countries
            .get_mut(tag)
            .and_then(|c| c.policy.get_mut(i))
        {
            *x = v.clamp(0, 9) as u8 + 1;
        }
    }

    /// EXEC_CHANGE_POLICY (0x62 → `0x4799C0`): the slider is set; unless
    /// `no_stamp`, the next change is barred for `misc diplomacy[2]` days
    /// (`_ftol`); after `democratic` or `political_left` the cabinet check
    /// runs at 2.0. No dissent or other cost.
    pub fn exec_change_policy(&mut self, tag: &str, i: usize, v: i64, no_stamp: bool) {
        if i >= 7 || !self.countries.contains_key(tag) {
            return;
        }
        self.set_slider(tag, i, v);
        if !no_stamp {
            let days = self.params.slider_move_days as i64;
            let now = game_hour(self.date);
            self.countries.get_mut(tag).unwrap().policy_date = now + days * 24;
        }
        if i <= 1 {
            self.cabinet_check(tag, 2.0);
        }
    }

    /// `0x4A0120`: whether slider `i` may be put at `v` (0..=9): within
    /// range, a slider whose `MANUAL_OR_BY_INFLUENCE_MOVES` is not 0, not
    /// beyond the ideology's bounds of `freedom` or `free_market` (unless
    /// moving back towards them; [`slider_bounds`]), and the next-change
    /// date has come (the cheat that lifts it is not modelled). Any step
    /// size.
    pub fn can_change_policy(&self, tag: &str, i: usize, v: i64) -> bool {
        let Some(c) = self.countries.get(tag) else {
            return false;
        };
        if !(0..=9).contains(&v) || i >= 7 || !self.policies.moves(i).normal {
            return false;
        }
        let cur = i64::from(c.policy[i]) - 1;
        if let Some((lo, hi)) = slider_bounds(self.ideologies.of_sliders(&c.policy), i) {
            if (v > hi && cur <= v) || (v < lo && cur >= v) {
                return false;
            }
        }
        game_hour(self.date) >= c.policy_date
    }

    /// A normal change (REQ_CHANGE_POLICY 0x61 from `0x45BBB0`, as the
    /// host handles it, `0x5B4AA2`): dropped unless
    /// [`World::can_change_policy`], else EXEC_CHANGE_POLICY with the
    /// date stamp.
    pub fn request_change_policy(&mut self, tag: &str, i: usize, v: i64) {
        if self.can_change_policy(tag, i, v) {
            self.exec_change_policy(tag, i, v, false);
        }
    }
}

/// ADD_MINISTER (`0x473C50`): to the end of the pool unless there.
fn pool_add(c: &mut Country, id: i64, post: Option<usize>) {
    if !c.minister_pool.iter().any(|e| e.id == id) {
        c.minister_pool.push(PoolEntry { id, post });
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use dh_data::GameDate;

    /// A matrix whose cell is `democratic` (0..=9) as an ideology: the
    /// `democratic` slider alone sets the ideology.
    fn matrix() -> dh_data::IdeologyMatrix {
        let mut text = String::new();
        for r in 0..10 {
            let code = Ideology::from_index(9 - r).unwrap().code();
            text.push_str(&[code; 10].join(";"));
            text.push('\n');
        }
        dh_data::IdeologyMatrix::parse(text.as_bytes())
    }

    /// GER's ministers: 1..=3 in the starting group, the rest
    /// replacements; Anyone (31, for all posts) starts in 1950.
    const GER_CSV: &str =
        "GER;Ruling Cabinet - Start;Name;Pool;Ideology;Personality;Loyalty;Picturename;x\n\
        1;Head of State;Leader;36;NS;Silent Workhorse;High;M1;x\n\
        2;Head of Government;Deputy;36;NS;Silent Workhorse;High;M2;x\n\
        3;Foreign Minister;Diplomat;36;NS;Silent Workhorse;High;M3;x\n\
        ;Replacements;;;;;;;x\n\
        11;Head of State;Democrat;36;SD;Silent Workhorse;High;M1;x\n\
        12;Head of State;Liberal;36;SL;Silent Workhorse;High;M1;x\n\
        13;Head of State;Future;40;NS;Silent Workhorse;High;M1;x\n\
        14;Head of State;Marshal;36;FA;Silent Workhorse;High;M1;x\n\
        21;Foreign Minister;Diplomat;36;SC;Silent Workhorse;High;M3;x\n\
        22;Foreign Minister;Clerk;36;NS;Silent Workhorse;High;M3;x\n\
        23;Foreign Minister;Star;36;NS;Busy Bee;High;M3;x\n\
        31;Head of Government;Anyone;50;FA;Jack Of All Trades;High;M2;x\n";

    const ITA_CSV: &str =
        "ITA;Ruling Cabinet - Start;Name;Pool;Ideology;Personality;Loyalty;Picturename;x\n\
        41;Head of State;Stranger;36;NS;Silent Workhorse;High;M1;x\n\
        43;Foreign Minister;Envoy;36;NS;Mystery Man;High;M3;x\n";

    /// Values: Silent Workhorse 40, Busy Bee 80, Jack Of All Trades 50,
    /// Generic −1.
    const TRAITS: &str = r#"
        minister = { trait = "Silent Workhorse" position = HeadOfGovernment
            command = { type = production which = production value = 0.05 } }
        minister = { trait = "Busy Bee" position = ForeignMinister
            command = { type = production which = production value = 0.1 } }
        minister = { trait = "Jack Of All Trades" position = all
            command = { type = leader_skill value = 0.1 } }
        minister = { trait = "Generic" position = generic value = -1 }"#;

    /// GER and ITA at democratic 1 (NS); GER's slots 0..=2 hold 1..=3, its
    /// dissent is 10; ITA's cabinet is empty.
    fn world() -> World {
        let mut w = World::empty(GameDate::new(1936, 1, 1));
        w.ideologies = matrix();
        for tag in ["GER", "ITA"] {
            let mut c = crate::Country::new(tag);
            c.policy = [1, 1, 5, 5, 5, 5, 5];
            w.countries.insert(tag.into(), c);
        }
        let ger = w.countries.get_mut("GER").unwrap();
        ger.cabinet[..3].copy_from_slice(&[Some(1), Some(2), Some(3)]);
        ger.dissent = 10.0;
        let mut m = dh_data::Ministers::default();
        let mut warnings = Vec::new();
        m.add_file("ger.csv", GER_CSV.as_bytes(), &mut warnings);
        m.add_file("ita.csv", ITA_CSV.as_bytes(), &mut warnings);
        assert!(warnings.is_empty(), "{warnings:?}");
        let names = BTreeMap::from([("GER".to_owned(), vec!["Weber".into(), "Huber".into()])]);
        let data = CabinetData::new(
            Personalities::parse(TRAITS.as_bytes()),
            dh_data::UnitDb::default(),
            names,
        );
        w.set_ministers(&m, data);
        w
    }

    fn pool(w: &World, tag: &str) -> Vec<i64> {
        w.countries[tag]
            .minister_pool
            .iter()
            .map(|e| e.id)
            .collect()
    }

    fn slots(w: &World, tag: &str) -> [Option<i64>; 3] {
        let c = &w.countries[tag].cabinet;
        [c[0], c[1], c[2]]
    }

    #[test]
    fn ideology_and_government_follow_the_sliders() {
        let mut w = world();
        assert_eq!(w.ideology("GER"), Some(Ideology::NationalSocialist));
        assert_eq!(w.government("GER"), Some(Government::Fascist));
        w.set_slider("GER", 0, 6);
        assert_eq!(w.countries["GER"].policy[0], 7);
        assert_eq!(w.ideology("GER"), Some(Ideology::SocialDemocrat));
        assert_eq!(w.government("GER"), Some(Government::Democratic));
        // Clamped to 0..=9 (1..=10 in the files).
        w.set_slider("GER", 0, 12);
        assert_eq!(w.countries["GER"].policy[0], 10);
        assert_eq!(w.government("GER"), Some(Government::Communist));
        w.set_slider("GER", 0, -3);
        assert_eq!(w.countries["GER"].policy[0], 1);
        assert_eq!(w.ideology("XXX"), None);
    }

    #[test]
    fn pools_hold_every_minister_of_the_csv_in_order() {
        let w = world();
        assert_eq!(pool(&w, "GER"), [1, 2, 3, 11, 12, 13, 14, 21, 22, 23, 31]);
        assert_eq!(pool(&w, "ITA"), [41, 43]);
        assert_eq!(w.ministers[&1].group, 0);
        assert_eq!(w.ministers[&11].group, 8);
        // An unknown personality is the generic one.
        assert_eq!(w.ministers[&43].personality, "generic");
        assert_eq!(w.cabinet_data.value("silent workhorse"), 40);
        assert_eq!(w.cabinet_data.value("generic"), -1);
        assert!(w.cabinet_data.for_all_posts("generic"));
        assert!(w.cabinet_data.for_all_posts("jack of all trades"));
        assert!(!w.cabinet_data.for_all_posts("busy bee"));
    }

    #[test]
    fn the_start_check_keeps_close_ministers() {
        let mut w = world();
        // GER: every sitting minister at distance 0, nobody for the empty
        // slots. ITA's empty head of state slot takes Stranger; Envoy
        // (generic, for all posts) wins slot 1 and sits in its own, 2.
        w.start_cabinets();
        let ger = &w.countries["GER"];
        assert_eq!(slots(&w, "GER"), [Some(1), Some(2), Some(3)]);
        assert!(ger.cabinet[3..].iter().all(Option::is_none));
        assert_eq!(ger.dissent, 10.0);
        assert!((ger.ministers.production - 1.15).abs() < 1e-6);
        assert_eq!(slots(&w, "ITA"), [Some(41), None, Some(43)]);
    }

    #[test]
    fn a_distant_minister_gives_way_to_the_closest_candidate() {
        let mut w = world();
        // Democrat (SD) is at distance 6 from NS; Leader, in no slot now,
        // scores max(0, 4) = 4, Liberal (SL) 5, Marshal (FA) 4 but later.
        w.countries.get_mut("GER").unwrap().cabinet[0] = Some(11);
        w.cabinet_check("GER", 4.0);
        let ger = &w.countries["GER"];
        assert_eq!(ger.cabinet[0], Some(1));
        assert!((ger.dissent - 9.5).abs() < 1e-6, "×0.95 per replacement");
        // The democrat was in the pool already: no second entry.
        assert_eq!(pool(&w, "GER").iter().filter(|&&i| i == 11).count(), 1);
        // With threshold 6 every candidate scores at least 6: no change.
        let mut w = world();
        w.countries.get_mut("GER").unwrap().cabinet[0] = Some(11);
        w.cabinet_check("GER", 6.0);
        assert_eq!(w.countries["GER"].cabinet[0], Some(11));
    }

    #[test]
    fn a_threshold_of_zero_takes_any_closer_candidate() {
        let mut w = world();
        // Under SC (democratic 4) the NS ministers are at distance 3:
        // Liberal (SL, 2) takes post 0 and Diplomat 21 (SC, 0) post 2;
        // nobody else can be head of government.
        w.set_slider("GER", 0, 3);
        w.cabinet_check("GER", 0.0);
        assert_eq!(slots(&w, "GER"), [Some(12), Some(2), Some(21)]);
        // Under PA (distance 2) and threshold 2: a candidate at distance
        // 1 still scores 2, not below.
        let mut w = world();
        w.set_slider("GER", 0, 2);
        w.cabinet_check("GER", 2.0);
        assert_eq!(slots(&w, "GER"), [Some(1), Some(2), Some(3)]);
    }

    #[test]
    fn empty_and_invalid_slots_are_filled() {
        let mut w = world();
        let ger = w.countries.get_mut("GER").unwrap();
        ger.cabinet[0] = Some(13); // starts in 1940
        ger.cabinet[1] = None;
        ger.cabinet[2] = Some(999); // no such minister: empty
        w.cabinet_check("GER", 4.0);
        // Slot 0: Leader scores 4 (no bonus: the slot names a minister).
        // Slots 1 and 2: Deputy and Diplomat 3 are of the starting group
        // and fit, 4 − 10 = −6, then −40 · (1 − 0.1 · −6) = −64, below
        // the others' 4.
        assert_eq!(slots(&w, "GER"), [Some(1), Some(2), Some(3)]);
        let d = w.countries["GER"].dissent;
        assert!((d - 10.0 * 0.95 * 0.95 * 0.95).abs() < 1e-4, "{d}");
        // The one not started is in the pool once, the unknown ID not.
        assert_eq!(pool(&w, "GER").iter().filter(|&&i| i == 13).count(), 1);
        assert!(!pool(&w, "GER").contains(&999));
    }

    #[test]
    fn without_personality_values_the_bonus_is_ten() {
        let mut w = world();
        w.params.minister_value_replacing = 0.0;
        w.countries.get_mut("GER").unwrap().cabinet[2] = None;
        w.cabinet_check("GER", 4.0);
        // Diplomat 3: 4 − 10 = −6, the lowest.
        assert_eq!(w.countries["GER"].cabinet[2], Some(3));
    }

    #[test]
    fn all_posts_winners_take_their_own_post() {
        let mut w = world();
        w.ministers.get_mut(&31).unwrap().start_year = 1936;
        w.cabinet_check("GER", 4.0);
        // Anyone (head of government, FA, for all posts) wins the first
        // empty slot, 3, with 4 — and is seated in its own post, 1, over
        // Deputy; slot 3 stays empty, and being in a slot it wins nothing
        // more.
        let ger = &w.countries["GER"];
        assert_eq!(slots(&w, "GER"), [Some(1), Some(31), Some(3)]);
        assert!(ger.cabinet[3..].iter().all(Option::is_none));
        assert!((ger.dissent - 9.5).abs() < 1e-6, "still ×0.95");
        assert!((ger.ministers.leader_skill - 1.1).abs() < 1e-6);
        assert!((ger.ministers.production - 1.1).abs() < 1e-6);
        // A winner without a known post is seated nowhere.
        let mut w = world();
        let anyone = w.ministers.get_mut(&31).unwrap();
        anyone.start_year = 1936;
        anyone.post = None;
        w.cabinet_check("GER", 4.0);
        assert_eq!(slots(&w, "GER"), [Some(1), Some(2), Some(3)]);
        assert!(!w.in_cabinet("GER", 31));
        assert!(w.countries["GER"].dissent < 10.0);
    }

    #[test]
    fn fit_for_the_government() {
        let mut w = world();
        let m = |w: &World, id| w.ministers[&id].clone();
        // NS: an SD head of state does not fit, an NS foreign minister
        // does; one not started never does.
        assert!(!w.fits_government("GER", &m(&w, 11), Some(0)));
        assert!(w.fits_government("GER", &m(&w, 22), Some(2)));
        assert!(!w.fits_government("GER", &m(&w, 13), Some(0)));
        // FA as head of government (within 1) fits NS.
        let mut fa = m(&w, 31);
        fa.start_year = 1936;
        assert!(w.fits_government("GER", &fa, Some(1)));
        // SD: an LWR head of state fits, an NS foreign minister not (no NS,
        // FA, LE or ST in a democracy).
        w.set_slider("GER", 0, 6);
        let mut lwr = m(&w, 11);
        lwr.ideology = Ideology::LeftWingRadical;
        assert!(w.fits_government("GER", &lwr, Some(0)));
        assert!(!w.fits_government("GER", &m(&w, 22), Some(2)));
        // A personality for all posts does not fit while in a slot.
        w.set_slider("GER", 0, 1);
        w.countries.get_mut("GER").unwrap().cabinet[5] = Some(31);
        assert!(!w.fits_government("GER", &fa, Some(1)));
    }

    #[test]
    fn only_the_players_pool_keeps_ministers() {
        // ITA's head of state is GER's Marshal (FA, distance 1); threshold 0.
        let check = |player: Option<&str>| {
            let mut w = world();
            w.player = player.map(Into::into);
            w.countries.get_mut("ITA").unwrap().cabinet[0] = Some(14);
            w.cabinet_check("ITA", 0.0);
            w.countries["ITA"].cabinet[0]
        };
        // No player: scored, Stranger (NS, 0) replaces it.
        assert_eq!(check(None), Some(41));
        // GER the player: Marshal is in GER's pool as head of state and an
        // FA head of state fits ITA's NS government, so ITA keeps it.
        assert_eq!(check(Some("GER")), Some(14));
        // ITA the player: Marshal is not in its own pool, so it goes.
        assert_eq!(check(Some("ITA")), Some(41));
    }

    #[test]
    fn change_minister_puts_anyone_in_the_slot() {
        let mut w = world();
        w.recompute_ministers("GER");
        // Star (Busy Bee, +0.1) for Diplomat 3 (+0.05).
        w.change_minister("GER", 2, 23, false);
        let ger = &w.countries["GER"];
        assert_eq!(ger.cabinet[2], Some(23));
        assert!((ger.ministers.production - 1.2).abs() < 1e-6);
        assert_eq!(ger.dissent, 10.0);
        // Not started, another country's: taken as they are.
        w.change_minister("GER", 0, 13, false);
        w.change_minister("GER", 1, 41, false);
        assert_eq!(slots(&w, "GER"), [Some(13), Some(41), Some(23)]);
        // 41 joins GER's pool only when it leaves the slot.
        assert!(!pool(&w, "GER").contains(&41));
        w.change_minister("GER", 1, 2, false);
        assert_eq!(pool(&w, "GER").last(), Some(&41));
        // An ID that names nobody: the slot adds nothing.
        w.change_minister("GER", 2, 777, false);
        assert!((w.countries["GER"].ministers.production - 1.1).abs() < 1e-6);
        // The penalty: +1, not being a democracy.
        w.change_minister("GER", 2, 3, true);
        assert_eq!(w.countries["GER"].dissent, 11.0);
    }

    #[test]
    fn sleepminister_refills_every_post_of_the_name() {
        let mut w = world();
        // Diplomat 3 sits in post 2; candidates there: Diplomat 21 (its
        // namesake, alive until the end), Clerk 22 (both 40), Star 23 (80).
        w.kill_minister(3);
        assert_eq!(w.countries["GER"].cabinet[2], Some(23));
        assert!(w.ministers[&3].dead && w.ministers[&21].dead);
        assert!(!w.ministers[&22].dead && !w.ministers[&23].dead);
        // Without values: the first in the pool — the namesake, dead after.
        let mut w = world();
        w.params.minister_value_replacing = 0.0;
        w.kill_minister(3);
        assert_eq!(w.countries["GER"].cabinet[2], Some(21));
        assert!(w.ministers[&21].dead);
    }

    #[test]
    fn sleepminister_makes_up_a_minister_when_nobody_is_left() {
        let mut w = world();
        // Nobody else can be head of government in 1936.
        w.kill_minister(2);
        let new = w.countries["GER"].cabinet[1].unwrap();
        assert_eq!(new, 44, "one above the largest ID");
        let m = &w.ministers[&new];
        // 44 % 2 = 0: GER's first name.
        assert_eq!(m.name, "Weber");
        assert_eq!(
            (m.post, m.start_year, m.retirement_year),
            (Some(1), 1936, 1937)
        );
        assert_eq!(m.ideology, Ideology::NationalSocialist);
        assert_eq!((m.personality.as_str(), m.group), ("generic", 0));
        assert_eq!(pool(&w, "GER").last(), Some(&44));
        assert!(w.ministers[&2].dead);
        // The generic personality adds nothing.
        assert!((w.countries["GER"].ministers.production - 1.1).abs() < 1e-6);
        // A minister in no slot is only marked.
        let mut w = world();
        w.kill_minister(12);
        assert!(w.ministers[&12].dead);
        assert_eq!(slots(&w, "GER"), [Some(1), Some(2), Some(3)]);
        // A dead minister is no candidate of the cabinet check: Democrat
        // (distance 6) gives way to Marshal (4), not Leader (4, first).
        let mut w = world();
        w.countries.get_mut("GER").unwrap().cabinet[0] = Some(11);
        w.kill_minister(1);
        w.cabinet_check("GER", 4.0);
        assert_eq!(w.countries["GER"].cabinet[0], Some(14));
        // Another country's minister goes to its own country: ITA's
        // Stranger is in no ITA slot, GER's cabinet stays.
        w.change_minister("GER", 1, 41, false);
        w.kill_minister(41);
        assert!(w.ministers[&41].dead);
        assert_eq!(w.countries["GER"].cabinet[1], Some(41));
    }

    #[test]
    fn policy_changes_and_their_rules() {
        let mut w = world();
        w.policies = dh_data::PolicyEffects::parse(
            b"#_POLICY_DEMOCRATIC_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;1\n\
              #_POLICY_POLITICAL_LEFT_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;0\n\
              #_POLICY_FREEDOM_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;2\n\
              #_POLICY_FREE_MARKET_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;-1\n",
        );
        // Range and the moves row.
        assert!(w.can_change_policy("GER", 0, 3));
        assert!(!w.can_change_policy("GER", 0, 10) && !w.can_change_policy("GER", 0, -1));
        assert!(!w.can_change_policy("GER", 1, 2), "events only");
        assert!(!w.can_change_policy("GER", 4, 2), "no row");
        // NS: freedom at most 1 (0-based), free market at most 5; moving
        // back towards the bound is allowed, by any step.
        w.set_slider("GER", 2, 1);
        assert!(w.can_change_policy("GER", 2, 0) && !w.can_change_policy("GER", 2, 2));
        w.set_slider("GER", 2, 4);
        assert!(w.can_change_policy("GER", 2, 3) && w.can_change_policy("GER", 2, 0));
        assert!(!w.can_change_policy("GER", 2, 5));
        assert!(w.can_change_policy("GER", 3, 5) && !w.can_change_policy("GER", 3, 6));
        // A normal change stamps the date: nothing for 360 game days.
        w.request_change_policy("GER", 3, 2);
        assert_eq!(w.countries["GER"].policy[3], 3);
        assert!(!w.can_change_policy("GER", 3, 3));
        w.request_change_policy("GER", 3, 3);
        assert_eq!(w.countries["GER"].policy[3], 3, "dropped");
        w.date = GameDate::new(1936, 12, 30);
        assert!(!w.can_change_policy("GER", 3, 3));
        w.date = GameDate::new(1937, 1, 1);
        assert!(w.can_change_policy("GER", 3, 3));
        // Without the stamp (events' `domestic`) the date stays.
        w.exec_change_policy("GER", 3, 1, true);
        assert_eq!(w.countries["GER"].policy[3], 2);
        assert!(w.can_change_policy("GER", 3, 3));
        // A political slider runs the cabinet check at 2.0: under SC the
        // NS ministers are at distance 3 and give way to Liberal (2) and
        // Diplomat 21 (0); nobody else can be head of government.
        w.exec_change_policy("GER", 0, 3, true);
        assert_eq!(slots(&w, "GER"), [Some(12), Some(2), Some(21)]);
        // Another slider does not.
        let mut w = world();
        w.set_slider("GER", 0, 3);
        w.exec_change_policy("GER", 5, 3, true);
        assert_eq!(slots(&w, "GER"), [Some(1), Some(2), Some(3)]);
    }

    #[test]
    fn bounds_by_ideology() {
        assert_eq!(slider_bounds(Ideology::PaternalAutocrat, 3), Some((1, 5)));
        assert_eq!(slider_bounds(Ideology::MarketLiberal, 2), Some((7, 9)));
        assert_eq!(slider_bounds(Ideology::Stalinist, 4), None);
    }
}
