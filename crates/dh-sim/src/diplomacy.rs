//! Diplomacy: wars, peace, alliances, annexation, puppets, independence,
//! civil war and province transfers (`re/diplomacy/diplomacy.md`, with the
//! corrections of its independent review `diplomacy-verify.md`).
//!
//! **State** (notes §0.2). The war list ([`dh_data::Diplomacy::wars`],
//! `0xD615A0`; each war's attackers and defenders, the first of a side its
//! leader) and the alliances (`C+0x3350`, the first member the leader) are
//! the truth; the game's war, co-belligerent and alliance bytes are a cache
//! `0x5883A0` rebuilds from them, so here they are worked out from the
//! lists ([`World::at_war`], [`World::war_allies`],
//! [`dh_data::Diplomacy::allied`]). [`World::refresh_diplomacy`] is the
//! rebuild's other half: from a war that started in a year above 0 it drops
//! countries that no longer exist and deletes it once a side is empty. A
//! country exists while it owns a province ([`World::exists`]); annexation
//! removes its record as the game empties its slot. Guarantees
//! ([`World::guarantees`]), treaties, military access and relations live
//! in their own maps.
//!
//! **Messages** (notes §0.1). What a handler sends synchronously is a call
//! here; what it posts to the scheduler's immediate FIFO (`0x5659E0`:
//! JOIN_WAR, the cancellation of a non-aggression pact, a puppet's
//! puppets) goes to [`World::messages`] as a [`Message`] and runs after the
//! current message. The event system moves them into its own FIFO in
//! order; elsewhere call [`World::run_messages`] (the `declare_war`
//! wrapper does).
//!
//! **Wars** (§1). [`World::request_war`] is REQ_SETUP_WAR on the host
//! (`0x5B371D`): the checks of `0x4A2030`, then the merges — the victim's
//! overlord's war, the attacker's ally's war, the victim's ally's war, the
//! faction rule (an unaligned country attacked by a member of the Axis or
//! the Allies joins the other one when the two are at war, misc
//! `diplomacy[12]`) — and otherwise a new war (EXEC_SETUP_WAR,
//! WE_DECLARE_WAR, THEY_DECLARE_WAR): relations −400 both ways, third
//! countries' relations by ideology, belligerence, the attacker's allies
//! and the victim's allies and overlord called in, +2 interventionism for
//! guarantors of the victim on its continent, and the state of war
//! (`0x462520`: access, guarantees and treaties end; allies at war break
//! their alliance). Joining a war (JOIN_WAR) puts the joiner at war with
//! every enemy and, on the war's first hour, gives a joiner of the
//! attackers belligerence as a declaration on the defenders' leader would.
//!
//! **Peace** (§2, [`World::make_peace`]): the side of `c` (or `c` alone)
//! leaves the war with every enemy, occupied provinces go back to their
//! owners — as captures in battle (`0x4617D0` passes `battle = 1`) — and a
//! peace treaty is signed; a war whose side empties is deleted.
//!
//! **Alliances** (§3): the `alliance` command ([`World::alliance_command`]),
//! REQ_JOIN_ALLIANCE (the joiner brings its old allies and enters the
//! leader's wars, the members enter its wars), EXEC_LEAVE_ALLIANCE
//! ([`World::leave_alliance`]: −100 relations with the leader, a separate
//! peace in the wars fought beside the leader with `when = 1`).
//!
//! **Annexation, puppets, independence, civil war** (§4):
//! [`World::annex`], [`World::make_puppet`], [`World::end_mastery`],
//! [`World::independence`] (the provinces of the tag's `db/revolt.txt`
//! lists the country controls), [`World::civil_war`].
//!
//! **Provinces** (§5): [`World::set_controller`] (`0x4E70B0`: belligerence
//! for a capture in battle, a quarter of the stockpiles with the capital),
//! [`World::set_owner`] (`0x4E6F40`: control follows when the old owner
//! held it) and [`World::change_control`] (PROVCHANGECONTROL: a province
//! an ally of its owner takes goes back to the owner).
//!
//! **Not modelled**: money and dissent costs of a declaration (`0x585B60`,
//! `0x4A43B0`) and of leaving an alliance; the non-forced declaration
//! rules that read AI policy data (belligerence and relation thresholds of
//! `0x4A2030`, the puppet / leader checks under bytes `0xDC18A8/9`, the
//! declaration ban date); the doubling of the ideology penalty by byte
//! `A+0xE8D6+X`; trade bytes; war statistics and journals; news; the AI
//! callbacks; units standing in foreign territory after peace (`0x44BAD0`);
//! what a capture does to resource output, buildings, depots, convoys and
//! construction (the engine has no state for them); nationalism and the
//! dates of ownership and control; the "liberation" rule `0x4E8900` (taken
//! here as "back to the owner"); claims; the production queue moving with
//! an annexation (a game option); the sliders of a new country under
//! `when = 1` (copied as in the other case) and its technologies; moving a
//! puppet's capital (`0x449610`); rebels.

use crate::{Country, Rng, World};
use dh_data::diplomacy::{Alliance, Faction, Treaty, TreatyKind, War};
use dh_data::{Branch, TypeId};
use std::collections::BTreeSet;

/// ID type of wars and their sides (the scenario's `type = 9430`).
pub const WAR_ID_TYPE: i64 = 9430;
/// ID type of alliances (`type = 15000`).
pub const ALLIANCE_ID_TYPE: i64 = 15000;
/// `0x4A0930`: country IDs 1, 2, 3, 6, 7, 11, 49.
pub const GREAT_POWERS: [&str; 7] = ["ENG", "FRA", "GER", "ITA", "SOV", "JAP", "USA"];
/// Country 163, a service tag no unforced declaration and no faction rule
/// may target.
pub const SERVICE_TAG: &str = "ALI";
/// A guarantee holds while fewer than 60 thirty-day months have passed
/// (`0x588250`).
const GUARANTEE_DAYS: i64 = 60 * 30;

/// A side of a war.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Side {
    Attackers,
    Defenders,
}

impl Side {
    pub fn other(self) -> Side {
        match self {
            Side::Attackers => Side::Defenders,
            Side::Defenders => Side::Attackers,
        }
    }
}

fn side(w: &War, s: Side) -> &Vec<String> {
    match s {
        Side::Attackers => &w.attackers,
        Side::Defenders => &w.defenders,
    }
}

fn side_mut(w: &mut War, s: Side) -> &mut Vec<String> {
    match s {
        Side::Attackers => &mut w.attackers,
        Side::Defenders => &mut w.defenders,
    }
}

/// The side `c` is on (the attackers first, as `0x490060` looks).
pub fn side_of(w: &War, c: &str) -> Option<Side> {
    [Side::Attackers, Side::Defenders]
        .into_iter()
        .find(|&s| side(w, s).iter().any(|m| m == c))
}

/// The flags of a declaration (REQ_SETUP_WAR `+0x28`, `+0x29`).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct WarFlags {
    /// `b1`: no belligerence for the attacker and none of the victim's
    /// gains (an event's declaration).
    pub no_penalties: bool,
    /// `b2`: only the first checks of `0x4A2030` apply.
    pub force: bool,
}

impl WarFlags {
    /// What the event command `war` sends: `b1 = 1`, `b2 = 1`.
    pub const EVENT: WarFlags = WarFlags {
        no_penalties: true,
        force: true,
    };
}

/// A message posted to the scheduler's immediate FIFO.
#[derive(Debug, Clone, PartialEq)]
pub enum Message {
    /// JOIN_WAR 0xBF (`0x47F320`): `country` joins `side` of war `war`.
    JoinWar {
        country: String,
        war: TypeId,
        side: Side,
    },
    /// DIPLOMATIC_EVENT 0x89 with subtype 0x14 from `country` to `other`,
    /// read as the end of their non-aggression pact (🔎).
    BreakPact { country: String, other: String },
    /// DIPLOMATIC_EVENT 0x89 subtype 0x10 with `+0x1E = 1`: `puppet`
    /// becomes `overlord`'s, without its belligerence (misc
    /// `diplomacy[8]`).
    Puppet { overlord: String, puppet: String },
}

impl World {
    // ----- loading -------------------------------------------------------

    /// Loads `db/revolt.txt`; returns load warnings.
    pub fn load_revolt(&mut self, vfs: &dh_data::Vfs) -> Vec<String> {
        let mut warnings = Vec::new();
        match dh_data::Revolt::load(vfs, &mut warnings) {
            Ok(r) => self.revolt = r,
            Err(e) => warnings.push(dh_data::Warning {
                file: dh_data::revolt::REVOLT_FILE.into(),
                line: 0,
                message: e.to_string(),
            }),
        }
        warnings.iter().map(ToString::to_string).collect()
    }

    /// The provinces' continents, for the interventionism rule.
    pub fn set_continents(&mut self, ctx: &crate::movement::MoveContext) {
        self.continents = ctx
            .provinces
            .iter()
            .map(|p| p.as_ref().map_or(0, |i| i.continent))
            .collect();
    }

    /// Gives every war and alliance without one an ID and moves the
    /// counter past the highest; likewise for stacks and divisions with
    /// IDs of [`crate::deploy::UNIT_ID_TYPE`] (those without one get one).
    pub(crate) fn assign_ids(&mut self) {
        let d = &self.diplomacy;
        let wars = d.wars.iter().filter_map(|w| w.id);
        let max = wars.chain(d.alliances.iter().filter_map(|a| a.id));
        self.next_id = self.next_id.max(max.map(|i| i.id).max().unwrap_or(0));
        let units = self.units.iter().flat_map(|u| {
            let divisions = u.unit.divisions.iter().map(|d| d.id);
            std::iter::once(u.unit.id).chain(divisions)
        });
        let own = units
            .flatten()
            .filter(|i| i.kind == crate::deploy::UNIT_ID_TYPE);
        self.next_id = self.next_id.max(own.map(|i| i.id).max().unwrap_or(0));
        for i in 0..self.units.len() {
            if self.units[i].unit.id.is_none() {
                self.units[i].unit.id = Some(self.new_unit_id());
            }
            for k in 0..self.units[i].unit.divisions.len() {
                if self.units[i].unit.divisions[k].id.is_none() {
                    self.units[i].unit.divisions[k].id = Some(self.new_unit_id());
                }
            }
        }
        for i in 0..self.diplomacy.wars.len() {
            if self.diplomacy.wars[i].id.is_none() {
                self.diplomacy.wars[i].id = Some(self.new_id(WAR_ID_TYPE));
            }
        }
        for i in 0..self.diplomacy.alliances.len() {
            if self.diplomacy.alliances[i].id.is_none() {
                self.diplomacy.alliances[i].id = Some(self.new_id(ALLIANCE_ID_TYPE));
            }
        }
    }

    pub(crate) fn new_id(&mut self, kind: i64) -> TypeId {
        self.next_id += 1;
        TypeId {
            kind,
            id: self.next_id,
        }
    }

    // ----- queries -------------------------------------------------------

    /// The countries that exist: they have a record and own a province.
    pub fn alive(&self) -> BTreeSet<String> {
        self.owner
            .values()
            .filter(|t| self.countries.contains_key(*t))
            .cloned()
            .collect()
    }

    /// Whether `a` and `b` are on the same side of a war (`rec+0x26`).
    pub fn war_allies(&self, a: &str, b: &str) -> bool {
        a != b
            && self.diplomacy.wars.iter().any(|w| {
                [Side::Attackers, Side::Defenders].into_iter().any(|s| {
                    let m = side(w, s);
                    m.iter().any(|x| x == a) && m.iter().any(|x| x == b)
                })
            })
    }

    /// The first war with `a` and `b` on opposite sides (`0x585FD0`).
    pub fn war_between(&self, a: &str, b: &str) -> Option<usize> {
        self.diplomacy.wars.iter().position(|w| w.opposes(a, b))
    }

    pub fn war_index(&self, id: TypeId) -> Option<usize> {
        self.diplomacy.wars.iter().position(|w| w.id == Some(id))
    }

    fn war_id(&mut self, i: usize) -> TypeId {
        if let Some(id) = self.diplomacy.wars[i].id {
            return id;
        }
        let id = self.new_id(WAR_ID_TYPE);
        self.diplomacy.wars[i].id = Some(id);
        id
    }

    fn alliance_index(&self, id: Option<TypeId>) -> Option<usize> {
        let id = id?;
        self.diplomacy
            .alliances
            .iter()
            .position(|a| a.id == Some(id))
    }

    /// The members of `tag`'s alliance, the leader first (none without one).
    pub fn alliance_members(&self, tag: &str) -> Vec<String> {
        self.diplomacy
            .alliance_of(tag)
            .map(|i| self.diplomacy.alliances[i].members.clone())
            .unwrap_or_default()
    }

    /// The faction alliance of a kind (`[0xD61582]` Axis, `[0xD61586]`
    /// Allies, `[0xD6158A]` Comintern).
    pub fn faction_alliance(&self, f: Faction) -> Option<usize> {
        self.diplomacy.alliances.iter().position(|a| a.faction == f)
    }

    /// `0x4A0930`.
    pub fn is_great_power(tag: &str) -> bool {
        GREAT_POWERS.contains(&tag)
    }

    /// The `regular_id` of a country: its record's, or the static data's
    /// for a country without one.
    pub fn regular_id(&self, tag: &str) -> Option<String> {
        match self.countries.get(tag) {
            Some(c) => c.regular_id.clone(),
            None => self.revolt.get(tag).and_then(|r| r.regular_id.clone()),
        }
    }

    /// `0x49EBF0(a, j)`, "the same nation": `j`'s regular ID is `a` or
    /// `a`'s, or `a`'s regular ID is `j`; never for `a` itself.
    pub fn same_nation(&self, a: &str, j: &str) -> bool {
        if a == j {
            return false;
        }
        let ra = self.regular_id(a);
        if let Some(rj) = self.regular_id(j) {
            if rj == a || Some(&rj) == ra.as_ref() {
                return true;
            }
        }
        ra.as_deref() == Some(j)
    }

    /// Whether `x` guarantees `t` (`0x585EA0` on `x`'s record about `t`):
    /// fewer than 60 months since the guarantee was given.
    pub fn guarantees(&self, x: &str, t: &str) -> bool {
        self.guarantees
            .get(&(x.to_owned(), t.to_owned()))
            .is_some_and(|&d| {
                crate::events::game_day(self.date) - crate::events::game_day(d) < GUARANTEE_DAYS
            })
    }

    /// An active treaty of `kind` between `a` and `b` (started, not
    /// expired).
    pub fn has_treaty(&self, kind: TreatyKind, a: &str, b: &str) -> bool {
        self.diplomacy.treaties.iter().any(|t| {
            t.kind == kind
                && pair(t, a, b)
                && t.start.is_none_or(|d| d <= self.date)
                && t.expiry.is_none_or(|d| d > self.date)
        })
    }

    fn has_peace_treaty(&self, a: &str, b: &str) -> bool {
        let t = &self.diplomacy.treaties;
        t.iter()
            .any(|t| t.kind == TreatyKind::Peace && pair(t, a, b))
    }

    fn at_war_with_any(&self, c: &str, list: &[String]) -> bool {
        list.iter().any(|x| self.at_war(c, x))
    }

    /// Everyone `c` is at war with.
    pub fn enemies(&self, c: &str) -> BTreeSet<String> {
        let mut out = BTreeSet::new();
        for w in &self.diplomacy.wars {
            if let Some(s) = side_of(w, c) {
                out.extend(side(w, s.other()).iter().cloned());
            }
        }
        out
    }

    /// `0x4A2030(a, t, force)`: whether `a` may declare war on `t`. Never
    /// on a country it is allied with, has military access to, is at war
    /// with or fights beside; with `force` that is all; otherwise not
    /// under a non-aggression pact, not on a country that does not exist
    /// or is its own puppet, not on the service tag. The rules that read
    /// AI policy data and the declaration ban are not modelled.
    pub fn can_declare_war(&self, a: &str, t: &str, force: bool) -> bool {
        if !self.countries.contains_key(t)
            || (a != t && self.diplomacy.allied(a, t))
            || self.has_access(a, t)
            || a == t
            || self.at_war(a, t)
            || self.war_allies(a, t)
        {
            return false;
        }
        if force {
            return true;
        }
        !self.has_treaty(TreatyKind::NonAggression, a, t)
            && self.exists(t)
            && self.countries[t].sovereign.as_deref() != Some(a)
            && t != SERVICE_TAG
    }

    fn sovereign(&self, tag: &str) -> Option<String> {
        self.countries.get(tag).and_then(|c| c.sovereign.clone())
    }

    fn is_national(&self, tag: &str, p: u32) -> bool {
        self.countries
            .get(tag)
            .is_some_and(|c| c.national.contains(&p))
    }

    fn capital_continent(&self, tag: &str) -> Option<u8> {
        let cap = self.countries.get(tag)?.capital?;
        self.continents.get(cap as usize).copied()
    }

    // ----- relations -----------------------------------------------------

    fn set_relation(&mut self, a: &str, b: &str, v: f32) {
        self.relations
            .insert((a.to_owned(), b.to_owned()), v.clamp(-200.0, 200.0));
    }

    /// What `a` thinks of `b` moves by `delta` (within ±200) and `b` takes
    /// the same view (EXEC_RELATION's way).
    fn add_relation_both(&mut self, a: &str, b: &str, delta: f32) {
        let v = (self.relation(a, b) + delta).clamp(-200.0, 200.0);
        self.set_relation(a, b, v);
        self.set_relation(b, a, v);
    }

    // ----- messages ------------------------------------------------------

    fn post(&mut self, m: Message) {
        self.messages.push_back(m);
    }

    /// Handles the posted messages until none is left (what they post
    /// too).
    pub fn run_messages(&mut self) {
        while let Some(m) = self.messages.pop_front() {
            self.handle_message(m);
        }
    }

    pub fn handle_message(&mut self, m: Message) {
        match m {
            Message::JoinWar { country, war, side } => self.join_war(&country, war, side),
            Message::BreakPact { country, other } => {
                self.diplomacy
                    .treaties
                    .retain(|t| t.kind != TreatyKind::NonAggression || !pair(t, &country, &other));
            }
            Message::Puppet { overlord, puppet } => self.make_puppet_with(&overlord, &puppet, true),
        }
    }

    // ----- the cache rebuild ----------------------------------------------

    /// The war-list half of `0x5883A0`: a war that started in a year above
    /// 0 loses the countries that no longer exist and is deleted when one
    /// side is left without members.
    pub fn refresh_diplomacy(&mut self) {
        let alive = self.alive();
        self.diplomacy.wars.retain_mut(|w| {
            if !w.start.is_some_and(|d| d.year > 0) {
                return true;
            }
            w.attackers.retain(|m| alive.contains(m));
            w.defenders.retain(|m| alive.contains(m));
            !w.attackers.is_empty() && !w.defenders.is_empty()
        });
    }

    // ----- wars ----------------------------------------------------------

    /// A war between two countries alone, as a scenario lists one: no
    /// declaration and none of its effects. Returns its ID (that of the
    /// war already between them, if any).
    pub fn add_war(&mut self, attacker: &str, defender: &str) -> TypeId {
        if let Some(i) = self.war_between(attacker, defender) {
            return self.war_id(i);
        }
        let id = self.new_id(WAR_ID_TYPE);
        self.diplomacy.wars.push(War {
            id: Some(id),
            start: Some(self.date),
            end: None,
            attackers: vec![attacker.to_owned()],
            defenders: vec![defender.to_owned()],
        });
        id
    }

    /// `attacker` declares war on `target` ([`World::request_war`]) and
    /// what that posts runs at once.
    pub fn declare_war(&mut self, attacker: &str, target: &str, flags: WarFlags) {
        self.request_war(attacker, target, flags);
        self.run_messages();
    }

    /// REQ_SETUP_WAR on the host (`0x5B371D`, notes §1.3): nothing unless
    /// [`World::can_declare_war`]; then the first merge that applies, else
    /// a new war. JOIN_WAR messages are left in [`World::messages`].
    pub fn request_war(&mut self, a: &str, t: &str, flags: WarFlags) {
        if !self.countries.contains_key(t) || !self.can_declare_war(a, t, flags.force) {
            return;
        }
        // (a) A puppet without an alliance whose overlord fights A joins
        // the overlord's alliance (one is made for it) and its wars.
        if self.diplomacy.alliance_of(t).is_none() {
            if let Some(m) = self.sovereign(t).filter(|m| self.at_war(m, a)) {
                let ai = match self.diplomacy.alliance_of(&m) {
                    Some(i) => i,
                    None => self.create_alliance(&m),
                };
                self.exec_join_alliance(ai, t, &m);
                self.enter_wars_of(t, &m, true);
                return;
            }
        }
        // (b) An ally of A already fights T: A joins its wars.
        let x = self
            .alliance_members(a)
            .into_iter()
            .find(|x| x != a && self.at_war(x, t));
        if let Some(wi) = x.as_ref().and_then(|x| self.war_between(x, t)) {
            let id = self.war_id(wi);
            self.enter_wars_of(a, x.as_deref().unwrap(), true);
            self.they_declare_war(id, false, a, t, false);
            return;
        }
        // (c) An ally of T already fights A: T joins its wars.
        let y = self
            .alliance_members(t)
            .into_iter()
            .find(|y| y != t && self.at_war(y, a));
        if let Some(wi) = y.as_ref().and_then(|y| self.war_between(y, a)) {
            let id = self.war_id(wi);
            self.enter_wars_of(t, y.as_deref().unwrap(), true);
            self.they_declare_war(id, false, a, t, false);
            return;
        }
        // (d) The faction rule.
        if self.faction_rule(a, t, flags) {
            return;
        }
        // (e) A new war (EXEC_SETUP_WAR, sent to A).
        self.setup_war(a, t, flags.no_penalties);
    }

    /// REQ_SETUP_WAR (d): with misc `diplomacy[12]` at 1, a target outside
    /// any faction attacked by a member of the Axis or the Allies while
    /// the two leaders are at war joins the other faction (its alliance is
    /// broken up and every member joins) and its leader's wars; no war of
    /// its own begins.
    fn faction_rule(&mut self, a: &str, t: &str, flags: WarFlags) -> bool {
        if self.params.factions_join_attacked != 1.0 || t == SERVICE_TAG {
            return false;
        }
        if let Some(ti) = self.diplomacy.alliance_of(t) {
            if self.diplomacy.alliances[ti].faction != Faction::Other {
                return false;
            }
        }
        let (Some(axis), Some(allies)) = (
            self.faction_alliance(Faction::Axis),
            self.faction_alliance(Faction::Allies),
        ) else {
            return false;
        };
        let al = &self.diplomacy.alliances;
        let (Some(lx), Some(ll)) = (al[axis].members.first(), al[allies].members.first()) else {
            return false;
        };
        let (lx, ll) = (lx.clone(), ll.clone());
        if !self.at_war(&lx, &ll) {
            return false;
        }
        let f = if al[axis].members.iter().any(|m| m == a) {
            Faction::Allies
        } else if al[allies].members.iter().any(|m| m == a) {
            Faction::Axis
        } else {
            return false;
        };
        let Some(ww) = self.war_between(&lx, &ll) else {
            return false;
        };
        let ww = self.war_id(ww);
        let fi = self.faction_alliance(f).unwrap();
        if self.at_war_with_any(t, &self.diplomacy.alliances[fi].members.clone()) {
            return false;
        }
        let joining = match self.diplomacy.alliance_of(t) {
            Some(ti) => {
                let members = self.diplomacy.alliances[ti].members.clone();
                self.destroy_alliance(ti);
                members
            }
            None => vec![t.to_owned()],
        };
        for (k, c) in joining.iter().enumerate() {
            let fi = self.faction_alliance(f).unwrap();
            let Some(leader) = self.diplomacy.alliances[fi].members.first().cloned() else {
                break;
            };
            self.exec_join_alliance(fi, c, &leader);
            self.enter_wars_of(c, &leader, true);
            let b1 = if k == 0 { flags.no_penalties } else { true };
            self.they_declare_war(ww, false, a, c, b1);
        }
        true
    }

    /// EXEC_SETUP_WAR (`0x47E550`): a new war at the end of the list with
    /// `a` attacking and `t` defending, started now; then WE_DECLARE_WAR
    /// and THEY_DECLARE_WAR. Nothing if they are at war already.
    fn setup_war(&mut self, a: &str, t: &str, no_penalties: bool) -> Option<TypeId> {
        if self.at_war(a, t) {
            return None;
        }
        let id = self.new_id(WAR_ID_TYPE);
        self.diplomacy.wars.push(War {
            id: Some(id),
            start: Some(self.date),
            end: None,
            attackers: Vec::new(),
            defenders: Vec::new(),
        });
        let wi = self.diplomacy.wars.len() - 1;
        self.add_to_side(wi, Side::Attackers, a);
        self.add_to_side(wi, Side::Defenders, t);
        self.we_declare_war(id, a, t, no_penalties);
        self.they_declare_war(id, true, a, t, no_penalties);
        Some(id)
    }

    /// `0x460200` for a side of a war: `c` joins it unless there, its
    /// relation towards each member raised to at least −145.
    fn add_to_side(&mut self, wi: usize, s: Side, c: &str) {
        let members = side(&self.diplomacy.wars[wi], s).clone();
        if members.iter().any(|m| m == c) {
            return;
        }
        for m in &members {
            if self.relation(c, m) < -145.0 {
                self.set_relation(c, m, -145.0);
            }
        }
        side_mut(&mut self.diplomacy.wars[wi], s).push(c.to_owned());
    }

    /// WE_DECLARE_WAR (`0x47E910`, to the attacker).
    fn we_declare_war(&mut self, war: TypeId, a: &str, t: &str, no_penalties: bool) {
        let v = (self.relation(a, t) - 400.0).clamp(-200.0, 200.0);
        self.set_relation(a, t, v);
        self.set_relation(t, a, v);
        if !no_penalties {
            self.declaration_belligerence(a, t);
        }
        // Every other country: −3 per step between the ideologies, and
        // the view made mutual.
        if let Some(ia) = self.ideology(a) {
            let others: Vec<String> = self.countries.keys().cloned().collect();
            for x in others.iter().filter(|x| *x != a && *x != t) {
                let Some(ix) = self.ideology(x) else {
                    continue;
                };
                let pen = 3.0 * (ix.index() as f32 - ia.index() as f32).abs();
                let v = (self.relation(a, x) - pen).clamp(-200.0, 200.0);
                self.set_relation(a, x, v);
                self.set_relation(x, a, v);
            }
        }
        if self.sovereign(a).as_deref() == Some(t) {
            self.countries.get_mut(a).unwrap().sovereign = None;
        }
        for m in self.alliance_members(a) {
            if m != a && !self.at_war(t, &m) {
                self.post(Message::JoinWar {
                    country: m,
                    war,
                    side: Side::Attackers,
                });
            }
        }
        self.go_to_war(a, t);
    }

    /// THEY_DECLARE_WAR (`0x47ED20`, to the victim); `new` for a war just
    /// set up (its sides in the message), not for a merge.
    fn they_declare_war(&mut self, war: TypeId, new: bool, a: &str, t: &str, no_penalties: bool) {
        if self.war_index(war).is_none() {
            return;
        }
        if !no_penalties {
            let d = if self.same_nation(t, a) {
                0.0
            } else if World::is_great_power(a) {
                -12.5
            } else {
                -5.0
            };
            if let Some(x) = self.countries.get_mut(t) {
                x.belligerence = (x.belligerence + d).max(0.0);
            }
        }
        if new {
            self.go_to_war(t, a);
            for m in self.alliance_members(t) {
                if m != t {
                    self.post(Message::JoinWar {
                        country: m,
                        war,
                        side: Side::Defenders,
                    });
                }
            }
        }
        // Guarantors of the victim on its continent, not at war with it.
        if self.policies.moves(6).normal {
            let continent = self.capital_continent(t);
            let alive = self.alive();
            for x in alive.iter().filter(|x| *x != a && *x != t) {
                if !self.at_war(x, t)
                    && self.guarantees(x, t)
                    && continent.is_some()
                    && self.capital_continent(x) == continent
                {
                    let v = i64::from(self.countries[x].policy[6]) - 1 + 2;
                    self.set_slider(x, 6, v);
                }
            }
        }
        if self.sovereign(t).as_deref() == Some(a) {
            self.countries.get_mut(t).unwrap().sovereign = None;
        }
        // The overlord, through the defenders' side (null in a merge).
        if new {
            if let Some(m) = self.sovereign(t).filter(|m| !self.at_war(a, m)) {
                self.post(Message::JoinWar {
                    country: m,
                    war,
                    side: Side::Defenders,
                });
            }
        }
    }

    /// `0x451120(a, t)`: belligerence for declaring war on `t` — 10, or 25
    /// on a great power; none on the same nation; a democracy (ideology
    /// 3..=6) less `t`'s belligerence; +10 after a peace with `t`.
    pub fn declaration_belligerence(&mut self, a: &str, t: &str) {
        let mut b: f64 = if World::is_great_power(t) { 25.0 } else { 10.0 };
        if self.same_nation(a, t) {
            b = 0.0;
        }
        if self
            .ideology(a)
            .is_some_and(|i| (3..=6).contains(&i.index()))
        {
            let tb = self.countries.get(t).map_or(0.0, |x| x.belligerence);
            b = (b - f64::from(tb)).max(0.0);
        }
        if self.has_peace_treaty(a, t) {
            b += 10.0;
        }
        if let Some(x) = self.countries.get_mut(a) {
            x.belligerence = (f64::from(x.belligerence) + b).max(0.0) as f32;
        }
    }

    /// `0x462520(c, j)`: `c` is at war with `j` — no military access
    /// either way, the guarantees between them end, the first treaty
    /// between them goes unless it is a non-aggression pact, an alliance
    /// they share breaks up (REQ_DESTROY_ALLIANCE) and `j` stops being
    /// `c`'s overlord.
    fn go_to_war(&mut self, c: &str, j: &str) {
        let (cj, jc) = ((c.to_owned(), j.to_owned()), (j.to_owned(), c.to_owned()));
        self.access.remove(&cj);
        self.access.remove(&jc);
        self.guarantees.remove(&cj);
        self.guarantees.remove(&jc);
        let t = &self.diplomacy.treaties;
        if let Some(i) = t.iter().position(|t| pair(t, c, j)) {
            if t[i].kind != TreatyKind::NonAggression {
                self.diplomacy.treaties.remove(i);
            }
        }
        if let (Some(i), Some(k)) = (self.diplomacy.alliance_of(c), self.diplomacy.alliance_of(j)) {
            if i == k && c != j {
                self.destroy_alliance(i);
            }
        }
        if self.sovereign(c).as_deref() == Some(j) {
            self.countries.get_mut(c).unwrap().sovereign = None;
        }
    }

    /// `0x462360(c, j)`: the state of war ends; a peace treaty between
    /// them is signed unless there is one or `j` does not exist.
    fn end_war_state(&mut self, c: &str, j: &str) {
        if self.exists(j) && !self.has_peace_treaty(c, j) {
            self.diplomacy.treaties.push(Treaty {
                kind: TreatyKind::Peace,
                id: None,
                countries: [c.to_owned(), j.to_owned()],
                start: Some(self.date),
                expiry: None,
            });
        }
    }

    /// JOIN_WAR (`0x47F320`, to `m`): `m` joins the side; an alliance
    /// leader whose ally leads the side takes the lead; on the war's first
    /// hour a joiner of the attackers gains belligerence as for a
    /// declaration on the defenders' leader (whatever the declaration's
    /// flags); then `m` is at war with every enemy (a pact with one is
    /// cancelled, queued).
    fn join_war(&mut self, m: &str, war: TypeId, s: Side) {
        let Some(wi) = self.war_index(war) else {
            return;
        };
        self.add_to_side(wi, s, m);
        let leader = side(&self.diplomacy.wars[wi], s)[0].clone();
        if leader != m {
            if let Some(ai) = self.diplomacy.alliance_of(m) {
                let members = &self.diplomacy.alliances[ai].members;
                if members[0] == m && members.contains(&leader) {
                    let list = side_mut(&mut self.diplomacy.wars[wi], s);
                    list.retain(|x| x != m);
                    list.insert(0, m.to_owned());
                }
            }
        }
        let w = &self.diplomacy.wars[wi];
        let first_hour = w.start.is_some_and(|d| self.date <= d);
        if first_hour && !w.defenders.iter().any(|x| x == m) {
            if let Some(d) = w.defenders.first().cloned() {
                self.declaration_belligerence(m, &d);
            }
        }
        let enemies = side(&self.diplomacy.wars[wi], s.other()).clone();
        for e in &enemies {
            if self.has_treaty(TreatyKind::NonAggression, m, e) {
                self.post(Message::BreakPact {
                    country: m.to_owned(),
                    other: e.clone(),
                });
            }
            self.go_to_war(e, m);
            self.go_to_war(m, e);
        }
        self.refresh_diplomacy();
    }

    /// LEAVE_WAR (`0x47F770`, to `p`): the state of war with every enemy
    /// ends; the war is deleted when `p` was alone on its side.
    fn leave_war(&mut self, war: TypeId, p: &str) {
        for s in [Side::Defenders, Side::Attackers] {
            let Some(wi) = self.war_index(war) else {
                return;
            };
            if !side(&self.diplomacy.wars[wi], s).iter().any(|x| x == p) {
                continue;
            }
            for e in side(&self.diplomacy.wars[wi], s.other()).clone() {
                self.end_war_state(p, &e);
                self.end_war_state(&e, p);
            }
            let list = side_mut(&mut self.diplomacy.wars[wi], s);
            if list.len() == 1 {
                self.diplomacy.wars.remove(wi);
                return;
            }
            list.retain(|x| x != p);
        }
    }

    /// `0x5B0790(p, q, rec)`: `p` enters `q`'s wars. With `rec` it first
    /// leaves its own wars where it stands without `q` against an enemy
    /// they share; then it joins (queued) each war of `q` it is not in
    /// and none of whose members it fights; with `rec` the other members
    /// of `q`'s alliance enter `p`'s wars.
    pub(crate) fn enter_wars_of(&mut self, p: &str, q: &str, rec: bool) {
        let common: BTreeSet<String> = self
            .enemies(q)
            .intersection(&self.enemies(p))
            .cloned()
            .collect();
        if rec {
            let ids: Vec<Option<TypeId>> = self.diplomacy.wars.iter().map(|w| w.id).collect();
            for id in ids.into_iter().flatten() {
                let Some(wi) = self.war_index(id) else {
                    continue;
                };
                let w = &self.diplomacy.wars[wi];
                if w.attackers.is_empty() || w.defenders.is_empty() {
                    continue;
                }
                let leaves = [Side::Attackers, Side::Defenders].into_iter().any(|s| {
                    let own = side(w, s);
                    own.iter().any(|x| x == p)
                        && !own.iter().any(|x| x == q)
                        && side(w, s.other()).iter().any(|x| common.contains(x))
                });
                if leaves {
                    self.leave_war(id, p);
                }
            }
        }
        let mut joins = Vec::new();
        for w in &self.diplomacy.wars {
            let Some(id) = w.id else {
                continue;
            };
            for s in [Side::Attackers, Side::Defenders] {
                if side(w, s).iter().any(|x| x == q)
                    && side_of(w, p).is_none()
                    && !self.at_war_with_any(p, &w.attackers)
                    && !self.at_war_with_any(p, &w.defenders)
                {
                    joins.push(Message::JoinWar {
                        country: p.to_owned(),
                        war: id,
                        side: s,
                    });
                }
            }
        }
        for m in joins {
            self.post(m);
        }
        if rec {
            for m in self.alliance_members(q) {
                if m != p {
                    self.enter_wars_of(&m, p, false);
                }
            }
        }
    }

    // ----- peace ---------------------------------------------------------

    /// PEACE (0x165 → `0x490060`, the event command `peace`): in the first
    /// war between `c` and `t`, every member of `c`'s side, the last
    /// first (only `c` when `separate`), leaves its war with `t` giving
    /// back what it occupies and getting back what it lost.
    pub fn make_peace(&mut self, c: &str, t: &str, separate: bool) {
        if !self.countries.contains_key(t) {
            return;
        }
        let Some(wi) = self.war_between(c, t) else {
            return;
        };
        let w = &self.diplomacy.wars[wi];
        let members = side(w, side_of(w, c).unwrap()).clone();
        for x in members.iter().rev() {
            if separate && x != c {
                continue;
            }
            self.exit_war(x, t, true, false);
        }
        self.refresh_diplomacy();
    }

    /// `0x473DE0(x, t, give_back, capitulate)`: `x` leaves its first war
    /// with `t`, at peace with each enemy; capitulating it hands its
    /// occupations of an enemy back and cedes what that enemy occupies of
    /// it, otherwise (`give_back`) occupations are returned both ways. A
    /// side left empty deletes the war.
    fn exit_war(&mut self, x: &str, t: &str, give_back: bool, capitulate: bool) {
        let Some(wi) = self.war_between(x, t) else {
            return;
        };
        let id = self.war_id(wi);
        let w = &self.diplomacy.wars[wi];
        let own = side_of(w, x).unwrap();
        for e in side(w, own.other()).clone() {
            self.end_war_state(x, &e);
            self.end_war_state(&e, x);
            if capitulate {
                self.return_control(x, &e);
                self.cede_occupied(x, &e);
            } else if give_back {
                self.return_control(x, &e);
                self.return_control(&e, x);
            }
        }
        if let Some(wi) = self.war_index(id) {
            let list = side_mut(&mut self.diplomacy.wars[wi], own);
            list.retain(|m| m != x);
            if list.is_empty() {
                self.diplomacy.wars.remove(wi);
            }
        }
    }

    /// `0x4617D0(a, b)`: the provinces `a` controls and `b` owns go back to
    /// `b` — through SetController with `battle = 1`.
    fn return_control(&mut self, a: &str, b: &str) {
        let back: Vec<u32> = self
            .controller
            .iter()
            .filter(|(p, c)| c.as_str() == a && self.owner.get(p).is_some_and(|o| o == b))
            .map(|(p, _)| *p)
            .collect();
        for p in back {
            self.set_controller(p, b, true);
        }
    }

    /// `0x461840(a, b)`: the provinces `b` controls and `a` owns become
    /// `b`'s.
    fn cede_occupied(&mut self, a: &str, b: &str) {
        let ceded: Vec<u32> = self
            .controller
            .iter()
            .filter(|(p, c)| c.as_str() == b && self.owner.get(p).is_some_and(|o| o == a))
            .map(|(p, _)| *p)
            .collect();
        for p in ceded {
            self.set_owner(p, b);
        }
    }

    // ----- alliances -----------------------------------------------------

    /// `0x460200` for an alliance: nothing for a country in an alliance;
    /// otherwise it joins, its relation towards each member raised to at
    /// least −145.
    fn add_to_alliance(&mut self, ai: usize, c: &str) -> bool {
        if self.diplomacy.alliance_of(c).is_some() {
            return false;
        }
        for m in self.diplomacy.alliances[ai].members.clone() {
            if self.relation(c, &m) < -145.0 {
                self.set_relation(c, &m, -145.0);
            }
        }
        self.diplomacy.alliances[ai].members.push(c.to_owned());
        true
    }

    /// CREATE_ALLIANCE (`0x47E420`): a new alliance with its founder.
    fn create_alliance(&mut self, founder: &str) -> usize {
        let id = self.new_id(ALLIANCE_ID_TYPE);
        self.diplomacy.alliances.push(Alliance {
            faction: Faction::Other,
            id: Some(id),
            name: None,
            members: Vec::new(),
            defensive: false,
        });
        let ai = self.diplomacy.alliances.len() - 1;
        self.add_to_alliance(ai, founder);
        ai
    }

    /// EXEC_JOIN_ALLIANCE (`0x47D4F0`, to `receiver`, the leader or the
    /// founder): `joiner` (`msg+0x18`) joins alliance `ai` and the
    /// receiver's view of it rises by 20, made mutual. No war follows
    /// from it.
    fn exec_join_alliance(&mut self, ai: usize, joiner: &str, receiver: &str) {
        self.add_to_alliance(ai, joiner);
        if joiner != receiver {
            self.add_relation_both(receiver, joiner, 20.0);
        }
        self.refresh_diplomacy();
    }

    /// EXEC_DESTROY_ALLIANCE (`0x47D1E0`): every member leaves; a faction
    /// stays, empty.
    fn destroy_alliance(&mut self, ai: usize) {
        if self.diplomacy.alliances[ai].faction == Faction::Other {
            self.diplomacy.alliances.remove(ai);
        } else {
            self.diplomacy.alliances[ai].members.clear();
        }
        self.refresh_diplomacy();
    }

    /// Takes `c` out of its alliance, dropping an alliance (not a faction)
    /// left without members; the alliance's ID.
    fn remove_from_alliance(&mut self, c: &str) -> Option<TypeId> {
        let ai = self.diplomacy.alliance_of(c)?;
        let a = &mut self.diplomacy.alliances[ai];
        a.members.retain(|m| m != c);
        let id = a.id;
        if a.members.is_empty() && a.faction == Faction::Other {
            self.diplomacy.alliances.remove(ai);
        }
        id
    }

    /// REQ_JOIN_ALLIANCE on the host (`0x5B2DFF`): refused when `j` is in
    /// the alliance or fights a member, or the alliance has no existing
    /// leader. `j` and the members of its old alliance outside this one
    /// that fight none of its members leave their alliance, join, and
    /// enter the leader's wars (the members entering theirs).
    fn request_join_alliance(&mut self, j: &str, ai: usize) {
        let s = &self.diplomacy.alliances[ai];
        let Some(leader) = s.members.first() else {
            return;
        };
        if s.members.iter().any(|m| m == j)
            || !self.exists(leader)
            || self.at_war_with_any(j, &s.members)
        {
            return;
        }
        let id = s.id;
        let members = s.members.clone();
        let mut joining = vec![j.to_owned()];
        for c in self.alliance_members(j) {
            if c != j && !members.contains(&c) && !self.at_war_with_any(&c, &members) {
                joining.push(c);
            }
        }
        for c in joining {
            if self.diplomacy.alliance_of(&c).is_some() {
                self.leave_alliance(&c, false);
            }
            let Some(ai) = self.alliance_index(id) else {
                return;
            };
            let Some(leader) = self.diplomacy.alliances[ai].members.first().cloned() else {
                return;
            };
            self.exec_join_alliance(ai, &c, &leader);
            self.enter_wars_of(&c, &leader, true);
        }
    }

    /// The event command `alliance` (`0x714232`). With `faction` 1 (Axis),
    /// 2 (Allies) or 3 (Comintern) and a leader in it, `c` leaves its
    /// alliance unless `when = 1` (with a separate peace for `when = 2`)
    /// and asks to join. Otherwise with `which`: two members of different
    /// alliances — `c` asks to join `which`'s if `which` leads the Axis or
    /// the Allies, else `which` asks to join `c`'s (the one asking leaves
    /// its own first unless `when = 1`); one in an alliance — the other
    /// asks to join it; neither — `c` founds one, `which` joins, and each
    /// enters the other's wars.
    pub fn alliance_command(&mut self, c: &str, which: Option<&str>, faction: i64, when: i64) {
        let f = match faction {
            1 => Some(Faction::Axis),
            2 => Some(Faction::Allies),
            3 => Some(Faction::Comintern),
            _ => None,
        };
        if let Some(fi) = f.and_then(|f| self.faction_alliance(f)) {
            let id = self.diplomacy.alliances[fi].id;
            if !self.diplomacy.alliances[fi].members.is_empty() {
                if when != 1 && self.diplomacy.alliance_of(c).is_some() {
                    self.leave_alliance(c, when == 2);
                }
                if let Some(fi) = self.alliance_index(id) {
                    self.request_join_alliance(c, fi);
                }
            } else {
                // A faction without a leader (`0x7143C7`): `c` leaves its
                // alliance and goes in directly, its old allies ask to
                // follow.
                let allies: Vec<String> = self
                    .alliance_members(c)
                    .into_iter()
                    .filter(|m| m != c)
                    .collect();
                self.leave_alliance(c, false);
                if let Some(fi) = self.alliance_index(id) {
                    self.exec_join_alliance(fi, c, c);
                }
                for m in allies {
                    if let Some(fi) = self.alliance_index(id) {
                        self.request_join_alliance(&m, fi);
                    }
                }
            }
            return;
        }
        if faction > 3 {
            // `where ≥ 4` names no faction (not traced further).
            return;
        }
        let Some(t) = which.filter(|t| *t != c && self.countries.contains_key(*t)) else {
            return;
        };
        let d = &self.diplomacy;
        match (d.alliance_of(c), d.alliance_of(t)) {
            (Some(i), Some(j)) if i == j => {}
            (Some(i), Some(j)) => {
                let tj = &d.alliances[j];
                let (asker, target) = if tj.members[0] == t
                    && matches!(tj.faction, Faction::Axis | Faction::Allies)
                {
                    (c, tj.id)
                } else {
                    (t, d.alliances[i].id)
                };
                if when != 1 {
                    self.leave_alliance(asker, when == 2);
                }
                if let Some(ai) = self.alliance_index(target) {
                    self.request_join_alliance(asker, ai);
                }
            }
            (Some(i), None) => self.request_join_alliance(t, i),
            (None, Some(j)) => self.request_join_alliance(c, j),
            (None, None) => {
                let ai = self.create_alliance(c);
                self.exec_join_alliance(ai, t, c);
                self.enter_wars_of(t, c, true);
            }
        }
    }

    /// EXEC_LEAVE_ALLIANCE (`0x47D880`, the event command `leave_alliance`):
    /// `c` and its puppets in the alliance leave; −100 relations with the
    /// leader left; with `separate_peace`, `c` makes a separate peace in
    /// every war it fights on the leader's side.
    pub fn leave_alliance(&mut self, c: &str, separate_peace: bool) {
        let Some(ai) = self.diplomacy.alliance_of(c) else {
            return;
        };
        let id = self.diplomacy.alliances[ai].id;
        self.diplomacy.alliances[ai].members.retain(|m| m != c);
        let puppets: Vec<String> = self.diplomacy.alliances[ai]
            .members
            .iter()
            .filter(|p| self.sovereign(p).as_deref() == Some(c))
            .cloned()
            .collect();
        for p in puppets {
            self.leave_alliance(&p, separate_peace);
        }
        let leader = self
            .alliance_index(id)
            .and_then(|ai| self.diplomacy.alliances[ai].members.first().cloned());
        if let Some(l) = &leader {
            self.add_relation_both(c, l, -100.0);
        }
        self.refresh_diplomacy();
        if let (true, Some(l)) = (separate_peace, &leader) {
            let wars: Vec<(Side, String)> = self
                .diplomacy
                .wars
                .iter()
                .filter_map(|w| {
                    let s = side_of(w, c)?;
                    let beside = side(w, s).iter().any(|m| m == l);
                    let enemy = side(w, s.other()).first()?;
                    beside.then(|| (s, enemy.clone()))
                })
                .collect();
            for (_, enemy) in wars {
                self.make_peace(c, &enemy, true);
            }
        }
        if let Some(ai) = self.alliance_index(id) {
            let a = &self.diplomacy.alliances[ai];
            if a.members.is_empty() && a.faction == Faction::Other {
                self.diplomacy.alliances.remove(ai);
            }
        }
        self.refresh_diplomacy();
    }

    // ----- annexation, puppets, new countries -------------------------------

    /// EXEC_SET_ANNEXATION (`0x47CD80` → `0x447360`, the event command
    /// `inherit`; an event's has no relation penalties): `a` annexes `v`.
    /// Its provinces go to whoever controls them — `a` for those `v` holds
    /// — unless a core of `a`'s alliance leader or overlord, of a fellow
    /// member, or of the controlling ally's overlord says otherwise; an
    /// occupier whose alliance differs from `a`'s (two countries without
    /// one count as alike) keeps it. Its occupations go back to their
    /// owners; its units, manpower and production queue go to `a` when
    /// they are the same nation or with `units` (`value = 1`), otherwise
    /// the units vanish (and `a` gains 0.5 belligerence per province); `a`
    /// takes all its oil, rare materials, metal, energy, supplies and
    /// money; its treaties, alliances, wars, puppets and everyone's
    /// records about it end, and its record goes.
    pub fn annex(&mut self, a: &str, v: &str, units: bool) {
        if a == v || !self.countries.contains_key(a) || !self.countries.contains_key(v) {
            return;
        }
        let transfer = self.same_nation(a, v) || units;
        for c in self.countries.values_mut() {
            if c.sovereign.as_deref() == Some(v) {
                c.sovereign = None;
            }
        }
        for u in &mut self.units {
            if u.unit.control.as_deref() == Some(v) {
                u.unit.control = (u.owner != a).then(|| a.to_owned());
            }
        }
        let owned: Vec<u32> = self.provinces_owned_by(v).collect();
        if !transfer {
            let x = self.countries.get_mut(a).unwrap();
            x.belligerence = (x.belligerence + 0.5 * owned.len() as f32).max(0.0);
        }
        let a_alliance = self.diplomacy.alliance_of(a);
        let z = a_alliance
            .and_then(|i| self.diplomacy.alliances[i].members.first().cloned())
            .filter(|z| z != v);
        let o = self.sovereign(a).filter(|o| o != v);
        for p in owned {
            let ctrl = self.controller.get(&p).cloned();
            let c = match ctrl.as_deref() {
                Some(k) if k != v => k.to_owned(),
                _ => a.to_owned(),
            };
            let national = |w: &World, tag: &Option<String>| {
                tag.as_deref().is_some_and(|t| w.is_national(t, p))
            };
            let c_ally = a_alliance.is_some() && self.diplomacy.alliance_of(&c) == a_alliance;
            let mut heir = c.clone();
            if self.is_national(&c, p) {
                if c == a {
                    if national(self, &z) {
                        heir = z.clone().unwrap();
                    } else if national(self, &o) {
                        heir = o.clone().unwrap();
                    }
                }
            } else if c_ally {
                let sc = self.sovereign(&c).filter(|s| s != v);
                if national(self, &z) {
                    heir = z.clone().unwrap();
                } else if national(self, &sc) {
                    heir = sc.unwrap();
                }
            } else if let Some(ai) = a_alliance {
                let first = self.diplomacy.alliances[ai]
                    .members
                    .iter()
                    .find(|m| *m != v && self.is_national(m, p));
                if let Some(m) = first {
                    heir = m.clone();
                }
            }
            // An occupier keeps the province when its alliance (or the
            // lack of one) differs from `a`'s.
            let ctrl_alliance = ctrl.as_deref().and_then(|k| self.diplomacy.alliance_of(k));
            let outsider = ctrl.as_deref().filter(|k| {
                *k != v
                    && *k != SERVICE_TAG
                    && self.countries.contains_key(*k)
                    && ctrl_alliance != a_alliance
            });
            if let Some(k) = outsider.map(str::to_owned) {
                self.set_owner(p, &k);
            } else {
                if ctrl_alliance.is_some() && ctrl_alliance == a_alliance {
                    self.set_controller(p, &heir, false);
                }
                self.set_owner(p, &heir);
            }
        }
        let occupied: Vec<(u32, String)> = self
            .controller
            .iter()
            .filter(|(_, c)| c.as_str() == v)
            .filter_map(|(p, _)| Some((*p, self.owner.get(p)?.clone())))
            .collect();
        for (p, owner) in occupied {
            self.set_controller(p, &owner, false);
        }
        let gone = self.countries.remove(v).unwrap();
        if transfer {
            for u in &mut self.units {
                if u.owner == v {
                    u.owner = a.to_owned();
                    if u.unit.control.as_deref() == Some(a) {
                        u.unit.control = None;
                    }
                }
            }
        } else {
            // The units vanish with the country: emptied, not removed, so
            // that unit indices stay valid.
            for u in self.units.iter_mut().filter(|u| u.owner == v) {
                u.unit.divisions.clear();
                u.route.clear();
                u.unit.location = None;
            }
        }
        let x = self.countries.get_mut(a).unwrap();
        if transfer {
            // Also its manpower and production queue (`+0x39CC`,
            // `+0x3B6C`), and here its undeployed units.
            x.stock.manpower += gone.stock.manpower;
            x.production.extend(gone.production);
            x.undeployed.extend(gone.undeployed);
        }
        let (s, g) = (&mut x.stock, &gone.stock);
        s.oil += g.oil;
        s.rare_materials += g.rare_materials;
        s.metal += g.metal;
        s.energy += g.energy;
        s.supplies += g.supplies;
        s.money += g.money;
        self.diplomacy
            .treaties
            .retain(|t| !t.countries.iter().any(|c| c == v));
        self.remove_from_alliance(v);
        let wars: Vec<TypeId> = self
            .diplomacy
            .wars
            .iter()
            .filter(|w| side_of(w, v).is_some())
            .filter_map(|w| w.id)
            .collect();
        for id in wars {
            let Some(wi) = self.war_index(id) else {
                continue;
            };
            let w = &self.diplomacy.wars[wi];
            let s = side_of(w, v).unwrap();
            for e in side(w, s.other()).clone() {
                self.end_war_state(&e, v);
            }
            let wi = self.war_index(id).unwrap();
            let list = side_mut(&mut self.diplomacy.wars[wi], s);
            list.retain(|m| m != v);
            if list.is_empty() {
                self.diplomacy.wars.remove(wi);
            }
        }
        self.relations.retain(|(x, y), _| x != v && y != v);
        self.access.retain(|(x, y)| x != v && y != v);
        self.guarantees.retain(|(x, y), _| x != v && y != v);
        self.refresh_diplomacy();
    }

    /// DIPLOMATIC_EVENT subtype 0x10 (`0x474247`, the event command
    /// `make_puppet`): `puppet` becomes `overlord`'s.
    pub fn make_puppet(&mut self, overlord: &str, puppet: &str) {
        self.make_puppet_with(overlord, puppet, false);
    }

    /// The puppet cedes the overlord's cores it owns (not its capital),
    /// leaves its alliance for the overlord's, loses all military access,
    /// guarantees and (queued) pacts, gives the overlord access, takes its
    /// sliders that may move (then the cabinet check at 2.0) and 200
    /// relations with it; it makes peace with the overlord, capitulates to
    /// its other enemies and enters the overlord's wars. The overlord
    /// gains 2.5 belligerence unless `chain` (misc `diplomacy[8]`'s
    /// puppets of a new puppet, which follow, queued).
    fn make_puppet_with(&mut self, m: &str, p: &str, chain: bool) {
        if m == p || !self.countries.contains_key(m) || !self.countries.contains_key(p) {
            return;
        }
        let cap = self.countries[p].capital;
        let ceded: Vec<u32> = self
            .provinces_owned_by(p)
            .filter(|&q| Some(q) != cap && self.is_national(m, q))
            .collect();
        for q in ceded {
            self.set_owner(q, m);
        }
        let old = self.remove_from_alliance(p);
        if let Some(mi) = self.diplomacy.alliance_of(m) {
            self.add_to_alliance(mi, p);
        }
        let others: Vec<String> = self.countries.keys().filter(|y| *y != p).cloned().collect();
        for y in &others {
            self.access.remove(&(p.to_owned(), y.clone()));
            self.access.remove(&(y.clone(), p.to_owned()));
            self.guarantees.remove(&(y.clone(), p.to_owned()));
            if self.has_treaty(TreatyKind::NonAggression, y, p) {
                self.post(Message::BreakPact {
                    country: y.clone(),
                    other: p.to_owned(),
                });
            }
        }
        if let Some(ai) = self.alliance_index(old) {
            let puppets: Vec<String> = self.diplomacy.alliances[ai]
                .members
                .iter()
                .filter(|x| self.sovereign(x).as_deref() == Some(p))
                .cloned()
                .collect();
            for x in puppets {
                self.leave_alliance(&x, false);
            }
        }
        self.access.insert((m.to_owned(), p.to_owned()));
        self.countries.get_mut(p).unwrap().sovereign = Some(m.to_owned());
        if !chain {
            let x = self.countries.get_mut(m).unwrap();
            x.belligerence += 2.5;
        }
        let sliders = self.countries[m].policy;
        for (i, &v) in sliders.iter().enumerate() {
            if self.policies.moves(i).normal {
                self.countries.get_mut(p).unwrap().policy[i] = v;
            }
        }
        self.cabinet_check(p, 2.0);
        self.set_relation(p, m, 200.0);
        self.set_relation(m, p, 200.0);
        self.exit_war(p, m, true, false);
        for y in self.enemies(p) {
            self.exit_war(p, &y, false, true);
        }
        self.enter_wars_of(p, m, true);
        if self.params.puppets_of_puppets == 1.0 {
            let theirs: Vec<String> = self
                .countries
                .iter()
                .filter(|(_, c)| c.sovereign.as_deref() == Some(p))
                .map(|(t, _)| t.clone())
                .collect();
            for x in theirs {
                self.post(Message::Puppet {
                    overlord: m.to_owned(),
                    puppet: x,
                });
            }
        }
        self.refresh_diplomacy();
    }

    /// END_MASTERY (`0x489140`, the event command `end_mastery`): `which`
    /// has no overlord any more; nothing else changes.
    pub fn end_mastery(&mut self, which: &str) {
        if let Some(x) = self.countries.get_mut(which) {
            x.sovereign = None;
        }
    }

    /// The event command `independence` (`0x461210` → LIBERATE_VASSAL on
    /// the host, `0x5B1389`): unless `t` exists, the provinces of its
    /// `db/revolt.txt` lists that `r` controls — not `r`'s capital, and of
    /// `extra` only those not national for `r` — make `t` a new, free
    /// country (CREATE_COUNTRY); with `units` (`value ≤ 0`) `r`'s land
    /// units in them switch to `t`.
    pub fn independence(&mut self, r: &str, t: &str, units: bool, force_democracy: bool) {
        if !self.exists(r) || self.exists(t) {
            return;
        }
        let Some(s) = self.revolt.get(t).cloned() else {
            return;
        };
        let cap = self.countries[r].capital;
        let mut list: Vec<u32> = Vec::new();
        let held =
            |w: &World, q: u32| w.controller.get(&q).is_some_and(|c| c == r) && Some(q) != cap;
        for &q in &s.minimum {
            if held(self, q) && !list.contains(&q) {
                list.push(q);
            }
        }
        for &q in &s.extra {
            if held(self, q) && !self.is_national(r, q) && !list.contains(&q) {
                list.push(q);
            }
        }
        if list.is_empty() {
            return;
        }
        self.create_country(t, r, &list, force_democracy);
        for &q in &list {
            self.change_control(q, t, true);
            if units {
                for u in &mut self.units {
                    if u.owner == r && u.unit.branch == Branch::Land && u.unit.location == Some(q) {
                        u.owner = t.to_owned();
                        u.unit.control = None;
                    }
                }
            }
        }
        self.refresh_diplomacy();
    }

    /// CREATE_COUNTRY (`0x4864F0`): `t`'s record (a fresh one unless it
    /// has one) with the static `regular_id` and `intrinsic_gov_type`,
    /// the provinces, its capital (the static one if among them, else the
    /// first), `src`'s sliders, the ministers of its files and the cabinet
    /// check at 0.
    fn create_country(&mut self, t: &str, src: &str, provinces: &[u32], _force_democracy: bool) {
        let s = self.revolt.get(t).cloned().unwrap_or_default();
        let sliders = self.countries.get(src).map(|c| c.policy);
        let rec = self
            .countries
            .entry(t.to_owned())
            .or_insert_with(|| Country::new(t));
        rec.regular_id = s.regular_id;
        rec.gov_type = s.intrinsic_gov_type;
        if let Some(v) = sliders {
            rec.policy = v;
        }
        for &q in provinces {
            self.set_owner(q, t);
        }
        let capital = s
            .capital
            .filter(|c| self.owner.get(c).is_some_and(|o| o == t))
            .or(provinces.first().copied());
        let pool: Vec<crate::cabinet::PoolEntry> = self
            .ministers
            .values()
            .filter(|m| m.country == t)
            .map(|m| crate::cabinet::PoolEntry {
                id: m.id,
                post: m.post,
            })
            .collect();
        let rec = self.countries.get_mut(t).unwrap();
        rec.capital = capital;
        if rec.minister_pool.is_empty() {
            rec.minister_pool = pool;
        }
        self.cabinet_check(t, 0.0);
        self.recompute_ministers(t);
        self.refresh_diplomacy();
    }

    /// CIVIL_WAR (`0x48EB60`, the event command `civil_war`): `r` (`which`,
    /// or else the first tag of `db/revolt.txt` that qualifies) must not
    /// exist and be the same nation as `c`; the provinces of its `minimum`
    /// list that `c` owns and controls make it a new country, each land
    /// unit of `c` switches to it when `rand() % 10 < 5`, and `c` declares
    /// war on it at once (EXEC_SETUP_WAR without the host's merges, as an
    /// event: no belligerence).
    pub fn civil_war(&mut self, c: &str, which: Option<&str>, rng: &mut Rng) {
        if !self.exists(c) {
            return;
        }
        let r = match which.filter(|t| !t.is_empty() && *t != "0") {
            Some(t) => t.to_owned(),
            None => {
                let first = self
                    .revolt
                    .by_tag
                    .keys()
                    .find(|t| !self.exists(t) && self.same_nation(c, t));
                match first {
                    Some(t) => t.clone(),
                    None => return,
                }
            }
        };
        if self.exists(&r) || !self.same_nation(c, &r) {
            return;
        }
        let Some(s) = self.revolt.get(&r).cloned() else {
            return;
        };
        let list: Vec<u32> = s
            .minimum
            .iter()
            .copied()
            .filter(|q| {
                self.owner.get(q).is_some_and(|o| o == c)
                    && self.controller.get(q).is_some_and(|k| k == c)
            })
            .collect();
        if list.is_empty() {
            return;
        }
        self.create_country(&r, c, &list, false);
        for u in &mut self.units {
            if u.owner == c
                && u.controller() == c
                && u.unit.branch == Branch::Land
                && !u.unit.divisions.is_empty()
                && rng.rand15() % 10 < 5
            {
                u.owner = r.clone();
                u.unit.control = None;
            }
        }
        self.setup_war(c, &r, true);
        self.refresh_diplomacy();
    }

    // ----- provinces -----------------------------------------------------

    /// SetController (`0x4E70B0`): `n` controls `p`. A capture in `battle`
    /// gives `n` 0.2 + 0.05 per victory point of belligerence (a third of
    /// it for one of its cores) and takes three quarters of that from the
    /// old controller. Taking someone's capital moves a quarter of its
    /// supplies, oil, rare materials, metal and energy (not money) to `n`;
    /// the capital stays where it is.
    pub fn set_controller(&mut self, p: u32, n: &str, battle: bool) {
        let old = self.controller.get(&p).cloned();
        if old.as_deref() == Some(n) {
            return;
        }
        if battle {
            let vp = self.points.get(&p).copied().unwrap_or(0) as f64;
            let mut b = (vp * f64::from(0.05f32) + f64::from(0.2f32)) as f32;
            if self.is_national(n, p) {
                b = (f64::from(b) * f64::from(1.0f32 / 3.0)) as f32;
            }
            if let Some(x) = self.countries.get_mut(n) {
                x.belligerence = (f64::from(x.belligerence) + f64::from(b)).max(0.0) as f32;
            }
            if let Some(x) = old.as_deref().and_then(|o| self.countries.get_mut(o)) {
                x.belligerence = (f64::from(x.belligerence) - f64::from(b) * 0.75).max(0.0) as f32;
            }
        }
        self.controller.insert(p, n.to_owned());
        let Some(o) = old else {
            return;
        };
        if self.countries.get(&o).is_some_and(|c| c.capital == Some(p))
            && self.countries.contains_key(n)
        {
            let taken = {
                let s = &mut self.countries.get_mut(&o).unwrap().stock;
                let take = |x: &mut f64| {
                    let q = *x * 0.25;
                    *x -= q;
                    q
                };
                [
                    take(&mut s.supplies),
                    take(&mut s.oil),
                    take(&mut s.rare_materials),
                    take(&mut s.metal),
                    take(&mut s.energy),
                ]
            };
            let s = &mut self.countries.get_mut(n).unwrap().stock;
            for (x, q) in [
                &mut s.supplies,
                &mut s.oil,
                &mut s.rare_materials,
                &mut s.metal,
                &mut s.energy,
            ]
            .into_iter()
            .zip(taken)
            {
                *x += q;
            }
        }
    }

    /// SetOwner (`0x4E6F40`, PROVCHANGEOWNER): `n` owns `p`; control
    /// follows (not as a battle) when the old owner controlled it. Cores
    /// do not change.
    pub fn set_owner(&mut self, p: u32, n: &str) {
        let old = self.owner.get(&p).cloned();
        if old.as_deref() == Some(n) {
            return;
        }
        let follows = old == self.controller.get(&p).cloned();
        self.owner.insert(p, n.to_owned());
        if follows {
            self.set_controller(p, n, false);
        }
    }

    /// PROVCHANGECONTROL (`0x47FFA0`): `n` takes control of `p` — the
    /// event commands `control` and `secedeprovince` without `battle`, a
    /// capture by troops with it. A province of an ally `n` is not at war
    /// with goes back to its owner instead (the rule `0x4E8900`,
    /// simplified).
    pub fn change_control(&mut self, p: u32, n: &str, battle: bool) {
        let mut new = n.to_owned();
        if let Some(o) = self.owner.get(&p) {
            if o != n && self.diplomacy.allied(n, o) && !self.at_war(n, o) {
                new = o.clone();
            }
        }
        self.set_controller(p, &new, battle);
    }
}

fn pair(t: &Treaty, a: &str, b: &str) -> bool {
    (t.countries[0] == a && t.countries[1] == b) || (t.countries[0] == b && t.countries[1] == a)
}

#[cfg(test)]
mod tests {
    use super::*;
    use dh_data::{GameDate, Ideology};

    /// The `democratic` slider alone sets the ideology: position d is
    /// ideology d − 1.
    fn matrix() -> dh_data::IdeologyMatrix {
        let mut text = String::new();
        for r in 0..10 {
            let code = Ideology::from_index(9 - r).unwrap().code();
            text.push_str(&[code; 10].join(";"));
            text.push('\n');
        }
        dh_data::IdeologyMatrix::parse(text.as_bytes())
    }

    /// Each country owns and controls its provinces, the first its
    /// capital: GER 1 2, FRA 3 4, ENG 5, ITA 6, POL 7 8 13, AUS 9 10,
    /// HUN 11, CZE 12 14 15 16; all nazi (the matrix's 1), every slider
    /// may move, one continent; 1 June 1938.
    fn world() -> World {
        let mut w = World::empty(GameDate::new(1938, 6, 1));
        let lands: [(&str, &[u32]); 8] = [
            ("GER", &[1, 2]),
            ("FRA", &[3, 4]),
            ("ENG", &[5]),
            ("ITA", &[6]),
            ("POL", &[7, 8, 13]),
            ("AUS", &[9, 10]),
            ("HUN", &[11]),
            ("CZE", &[12, 14, 15, 16]),
        ];
        for (tag, ps) in lands {
            let mut c = Country::new(tag);
            c.capital = Some(ps[0]);
            c.policy[0] = 1;
            w.countries.insert(tag.into(), c);
            for &p in ps {
                w.owner.insert(p, tag.into());
                w.controller.insert(p, tag.into());
            }
        }
        w.ideologies = matrix();
        w.policies = dh_data::PolicyEffects::parse(
            "#_POLICY_X_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;1\n"
                .repeat(7)
                .as_bytes(),
        );
        w.continents = vec![1; 40];
        w
    }

    fn alliance(w: &mut World, faction: Faction, members: &[&str]) {
        let id = w.new_id(ALLIANCE_ID_TYPE);
        w.diplomacy.alliances.push(Alliance {
            faction,
            id: Some(id),
            name: None,
            members: members.iter().map(|m| m.to_string()).collect(),
            defensive: false,
        });
    }

    fn treaty(w: &mut World, kind: TreatyKind, a: &str, b: &str) {
        w.diplomacy.treaties.push(Treaty {
            kind,
            id: None,
            countries: [a.into(), b.into()],
            start: None,
            expiry: None,
        });
    }

    fn land_unit(w: &mut World, owner: &str, location: u32) -> usize {
        let doc = dh_text::script::parse_str(&format!(
            "landunit = {{ location = {location} division = {{ type = infantry }} }}"
        ));
        let unit = dh_data::Unit::all_in(&doc.root).remove(0);
        w.units.push(crate::UnitState::new(owner, unit));
        w.units.len() - 1
    }

    fn sides(w: &World) -> Vec<(Vec<String>, Vec<String>)> {
        let d = &w.diplomacy.wars;
        d.iter()
            .map(|w| (w.attackers.clone(), w.defenders.clone()))
            .collect()
    }

    fn tags(list: &[&str]) -> Vec<String> {
        list.iter().map(|t| t.to_string()).collect()
    }

    const NORMAL: WarFlags = WarFlags {
        no_penalties: false,
        force: true,
    };

    /// GER (nazi) declares war on POL, allied with CZE: relations, third
    /// countries by ideology, belligerence, the victim's ally called in,
    /// access, treaties, and a guarantor's interventionism.
    #[test]
    fn a_declaration_and_its_effects() {
        let mut w = world();
        w.countries.get_mut("FRA").unwrap().policy[0] = 6; // social liberal
        w.countries.get_mut("ITA").unwrap().policy[0] = 2; // fascist
        w.relations.insert(("GER".into(), "ITA".into()), 50.0);
        w.relations.insert(("ITA".into(), "GER".into()), 10.0);
        w.relations.insert(("POL".into(), "GER".into()), 30.0);
        w.countries.get_mut("POL").unwrap().belligerence = 8.0;
        alliance(&mut w, Faction::Other, &["POL", "CZE"]);
        w.access.insert(("POL".into(), "GER".into()));
        w.guarantees.insert(("FRA".into(), "POL".into()), w.date);
        w.guarantees.insert(("GER".into(), "POL".into()), w.date);
        treaty(&mut w, TreatyKind::Trade, "GER", "POL");
        treaty(&mut w, TreatyKind::NonAggression, "POL", "GER");
        w.declare_war("GER", "POL", NORMAL);

        assert_eq!(sides(&w), [(tags(&["GER"]), tags(&["POL", "CZE"]))]);
        assert!(w.at_war("GER", "CZE") && w.war_allies("POL", "CZE"));
        // −400 from GER's view, then mutual.
        assert_eq!(
            (w.relation("GER", "POL"), w.relation("POL", "GER")),
            (-200.0, -200.0)
        );
        // 3 per step between the ideologies, mutual: ITA 1, FRA 5 away.
        assert_eq!(
            (w.relation("GER", "ITA"), w.relation("ITA", "GER")),
            (47.0, 47.0)
        );
        assert_eq!(
            (w.relation("FRA", "GER"), w.relation("GER", "FRA")),
            (-15.0, -15.0)
        );
        // 10 on a minor; the victim loses 5 to a great power's attack
        // (12.5); CZE, joining the defenders, gains nothing.
        assert_eq!(w.countries["GER"].belligerence, 10.0);
        assert_eq!(w.countries["POL"].belligerence, 8.0 - 12.5_f32.min(8.0));
        assert_eq!(w.countries["CZE"].belligerence, 0.0);
        // Access and GER's guarantee end; the first treaty (trade) goes,
        // the pact stays.
        assert!(!w.has_access("POL", "GER") && !w.guarantees("GER", "POL"));
        assert_eq!(w.diplomacy.treaties.len(), 1);
        assert!(w.has_treaty(TreatyKind::NonAggression, "GER", "POL"));
        // France guarantees Poland on its continent: interventionism +2.
        assert_eq!(w.countries["FRA"].policy[6], 7);
        assert!(w.guarantees("FRA", "POL"));
        assert_eq!(w.countries["ENG"].policy[6], 5);
        // A second declaration does nothing.
        w.declare_war("GER", "POL", NORMAL);
        assert_eq!(w.diplomacy.wars.len(), 1);
    }

    /// The attacker's allies join it (on the war's first hour with
    /// belligerence, even for an event's war), the victim's overlord the
    /// victim; the attacker's puppets stay out.
    #[test]
    fn allies_and_overlords_are_called_in() {
        let mut w = world();
        alliance(&mut w, Faction::Other, &["GER", "ITA"]);
        w.countries.get_mut("HUN").unwrap().sovereign = Some("AUS".into());
        w.countries.get_mut("CZE").unwrap().sovereign = Some("GER".into());
        w.request_war("GER", "HUN", WarFlags::EVENT);
        // The joins are queued.
        assert_eq!(sides(&w), [(tags(&["GER"]), tags(&["HUN"]))]);
        assert_eq!(w.messages.len(), 2);
        w.run_messages();
        assert_eq!(sides(&w), [(tags(&["GER", "ITA"]), tags(&["HUN", "AUS"]))]);
        assert_eq!(w.countries["GER"].belligerence, 0.0);
        assert_eq!(w.countries["ITA"].belligerence, 10.0);
        assert_eq!(w.countries["AUS"].belligerence, 0.0);
        assert!(!w.at_war("CZE", "HUN") && w.at_war("ITA", "AUS"));
        // An hour later a joiner gains nothing.
        w.date = w.date.add_hours(1);
        let id = w.diplomacy.wars[0].id.unwrap();
        w.handle_message(Message::JoinWar {
            country: "ENG".into(),
            war: id,
            side: Side::Attackers,
        });
        assert!(w.at_war("ENG", "HUN") && w.countries["ENG"].belligerence == 0.0);
    }

    /// The host's merges, in order: the victim's overlord's war, an
    /// attacker's ally's war, a victim's ally's war, the faction rule.
    #[test]
    fn declarations_merge_into_existing_wars() {
        // (a) HUN, AUS's puppet with no alliance, joins AUS's (new)
        // alliance and its war with GER.
        let mut w = world();
        w.countries.get_mut("HUN").unwrap().sovereign = Some("AUS".into());
        w.add_war("AUS", "GER");
        w.declare_war("GER", "HUN", WarFlags::EVENT);
        assert_eq!(sides(&w), [(tags(&["AUS", "HUN"]), tags(&["GER"]))]);
        assert_eq!(w.alliance_members("HUN"), ["AUS", "HUN"]);

        // (b) GER's ally ITA fights POL: GER joins that war; the victim
        // loses belligerence (b1 = 0 in the merge).
        let mut w = world();
        alliance(&mut w, Faction::Other, &["ITA", "GER"]);
        w.add_war("ITA", "POL");
        w.countries.get_mut("POL").unwrap().belligerence = 20.0;
        w.declare_war("GER", "POL", WarFlags::EVENT);
        assert_eq!(sides(&w), [(tags(&["ITA", "GER"]), tags(&["POL"]))]);
        assert_eq!(w.countries["POL"].belligerence, 7.5);

        // (c) POL's ally CZE already attacks GER: POL joins CZE's side.
        let mut w = world();
        alliance(&mut w, Faction::Other, &["POL", "CZE"]);
        w.add_war("CZE", "GER");
        w.declare_war("GER", "POL", WarFlags::EVENT);
        // POL leads its alliance, so it takes the lead of CZE's side.
        assert_eq!(sides(&w), [(tags(&["POL", "CZE"]), tags(&["GER"]))]);

        // (d) The Axis and the Allies are at war: unaligned POL attacked
        // by an Allied ENG joins the Axis and its leader's war.
        let mut w = world();
        alliance(&mut w, Faction::Axis, &["GER"]);
        alliance(&mut w, Faction::Allies, &["FRA", "ENG"]);
        w.add_war("GER", "FRA");
        w.run_messages();
        w.declare_war("ENG", "POL", WarFlags::EVENT);
        let axis = w.faction_alliance(Faction::Axis).unwrap();
        assert_eq!(w.diplomacy.alliances[axis].members, ["GER", "POL"]);
        assert_eq!(sides(&w), [(tags(&["GER", "POL"]), tags(&["FRA"]))]);
        assert!(!w.at_war("ENG", "POL"), "no war of its own");
        // Off with misc diplomacy[12] = 0: a war of its own.
        let mut w2 = world();
        w2.params.factions_join_attacked = 0.0;
        alliance(&mut w2, Faction::Axis, &["GER"]);
        alliance(&mut w2, Faction::Allies, &["FRA", "ENG"]);
        w2.add_war("GER", "FRA");
        w2.declare_war("ENG", "POL", WarFlags::EVENT);
        assert!(w2.at_war("ENG", "POL"));
    }

    #[test]
    fn who_may_declare() {
        let mut w = world();
        alliance(&mut w, Faction::Other, &["GER", "ITA"]);
        w.access.insert(("GER".into(), "POL".into()));
        w.add_war("GER", "ENG");
        w.diplomacy.wars[0].attackers.push("FRA".into());
        treaty(&mut w, TreatyKind::NonAggression, "GER", "CZE");
        w.countries.get_mut("HUN").unwrap().sovereign = Some("GER".into());
        for t in ["ITA", "POL", "GER", "ENG", "FRA", "XXX"] {
            assert!(!w.can_declare_war("GER", t, true), "{t}");
        }
        assert!(w.can_declare_war("GER", "CZE", true));
        assert!(!w.can_declare_war("GER", "CZE", false));
        assert!(!w.can_declare_war("GER", "HUN", false));
        assert!(w.can_declare_war("GER", "AUS", false));
        w.declare_war("GER", "ITA", WarFlags::EVENT);
        assert_eq!(w.diplomacy.wars.len(), 1);
    }

    /// Peace: the whole side leaves, occupations go back as captures in
    /// battle, a peace treaty follows (+10 on the next declaration).
    #[test]
    fn peace_returns_control_and_ends_the_war() {
        let mut w = world();
        w.points.insert(8, 10);
        w.countries
            .get_mut("POL")
            .unwrap()
            .national
            .extend([7, 8, 13]);
        w.countries.get_mut("GER").unwrap().national.insert(2);
        w.countries.get_mut("POL").unwrap().belligerence = 5.0;
        alliance(&mut w, Faction::Other, &["GER", "ITA"]);
        w.declare_war("GER", "POL", WarFlags::EVENT);
        assert_eq!(sides(&w), [(tags(&["GER", "ITA"]), tags(&["POL"]))]);
        let ita = w.countries["ITA"].belligerence;
        // Captures: 0.2 + 0.05 · 10 for GER, three quarters of it off POL.
        w.change_control(8, "GER", true);
        assert!((w.countries["GER"].belligerence - 0.7).abs() < 1e-6);
        assert!((w.countries["POL"].belligerence - (5.0 - 0.525)).abs() < 1e-6);
        w.change_control(2, "POL", true);
        w.change_control(6, "POL", false);
        // A separate peace takes ITA alone out, getting 6 back (0.2).
        w.make_peace("ITA", "POL", true);
        assert_eq!(sides(&w), [(tags(&["GER"]), tags(&["POL"]))]);
        assert_eq!(w.controller[&6], "ITA");
        assert!(!w.at_war("ITA", "POL"));
        assert!((w.countries["ITA"].belligerence - ita - 0.2).abs() < 1e-6);
        let (g, p) = (
            w.countries["GER"].belligerence,
            w.countries["POL"].belligerence,
        );
        // Then the rest: back to the owners, each a capture of a core
        // (a third).
        w.make_peace("POL", "GER", false);
        assert!(w.diplomacy.wars.is_empty());
        assert_eq!(
            (w.controller[&8].as_str(), w.controller[&2].as_str()),
            ("POL", "GER")
        );
        let third = (0.7f64 * f64::from(1.0f32 / 3.0)) as f32;
        let small = (0.2f64 * f64::from(1.0f32 / 3.0)) as f32;
        assert!((w.countries["POL"].belligerence - (p + third - 0.75 * small)).abs() < 1e-5);
        assert!((w.countries["GER"].belligerence - (g - 0.75 * third + small)).abs() < 1e-5);
        assert!(w.has_peace_treaty("GER", "POL") && w.has_peace_treaty("ITA", "POL"));
        // A new declaration after the peace: 10 + 10.
        let before = w.countries["GER"].belligerence;
        w.declare_war("GER", "POL", NORMAL);
        assert!((w.countries["GER"].belligerence - before - 20.0).abs() < 1e-5);
    }

    #[test]
    fn alliances_join_and_leave() {
        let mut w = world();
        w.declare_war("GER", "POL", WarFlags::EVENT);
        // Neither in an alliance: ITA founds one, GER joins (+20) and ITA
        // enters GER's war.
        w.alliance_command("ITA", Some("GER"), 0, 0);
        w.run_messages();
        assert_eq!(w.alliance_members("GER"), ["ITA", "GER"]);
        assert_eq!(w.relation("ITA", "GER"), 20.0);
        assert!(w.at_war("ITA", "POL") && w.war_allies("ITA", "GER"));
        // HUN asks to join GER's alliance and enters the leader's wars.
        w.alliance_command("HUN", Some("GER"), 0, 0);
        w.run_messages();
        assert_eq!(w.alliance_members("HUN"), ["ITA", "GER", "HUN"]);
        assert!(w.at_war("HUN", "POL"));
        // Leaving with a separate peace: −100 with the leader.
        w.leave_alliance("HUN", true);
        assert_eq!(w.relation("HUN", "ITA"), 20.0 - 100.0);
        assert!(!w.at_war("HUN", "POL") && w.alliance_members("HUN").is_empty());
        // Without: still at war.
        w.leave_alliance("GER", false);
        assert!(w.at_war("GER", "POL") && w.alliance_members("ITA") == ["ITA"]);
        // A faction by number: 1 is the Axis.
        alliance(&mut w, Faction::Axis, &["CZE"]);
        alliance(&mut w, Faction::Allies, &["ENG"]);
        w.alliance_command("AUS", None, 1, 0);
        w.alliance_command("FRA", None, 2, 0);
        assert_eq!(w.alliance_members("AUS"), ["CZE", "AUS"]);
        assert_eq!(w.alliance_members("FRA"), ["ENG", "FRA"]);
        // Nobody joins an alliance whose member it fights.
        w.alliance_command("POL", Some("ITA"), 0, 0);
        assert!(w.alliance_members("POL").is_empty());
    }

    /// GER annexes AUS (the same nation): its provinces, units,
    /// stockpiles and manpower, no belligerence; an occupier keeps what it
    /// holds (unallied like GER, as the heir of its own occupation), AUS's
    /// occupations go back; AUS's record, wars and relations end.
    #[test]
    fn annexation_moves_everything() {
        let mut w = world();
        w.countries.get_mut("AUS").unwrap().regular_id = Some("GER".into());
        w.countries.get_mut("GER").unwrap().national.extend([9, 10]);
        {
            let a = &mut w.countries.get_mut("AUS").unwrap().stock;
            (a.oil, a.metal, a.money, a.manpower, a.supplies) = (100.0, 50.0, 10.0, 65.0, 7.0);
        }
        w.countries.get_mut("GER").unwrap().stock.oil = 1.0;
        let u = land_unit(&mut w, "AUS", 9);
        w.change_control(7, "AUS", false);
        w.change_control(10, "HUN", false);
        w.declare_war("AUS", "ENG", WarFlags::EVENT);
        w.relations.insert(("FRA".into(), "AUS".into()), 50.0);
        w.guarantees.insert(("AUS".into(), "HUN".into()), w.date);
        w.annex("GER", "AUS", false);
        assert!(!w.countries.contains_key("AUS") && !w.exists("AUS"));
        assert_eq!(
            (w.owner[&9].as_str(), w.controller[&9].as_str()),
            ("GER", "GER")
        );
        assert_eq!(
            (w.owner[&10].as_str(), w.controller[&10].as_str()),
            ("HUN", "HUN")
        );
        assert_eq!(w.controller[&7], "POL");
        assert_eq!(w.units[u].owner, "GER");
        let s = w.countries["GER"].stock;
        assert_eq!(
            (s.oil, s.metal, s.money, s.supplies, s.manpower),
            (101.0, 50.0, 10.0, 7.0, 65.0)
        );
        assert_eq!(w.countries["GER"].belligerence, 0.0);
        assert!(w.diplomacy.wars.is_empty());
        assert!(!w.relations.keys().any(|(a, b)| a == "AUS" || b == "AUS"));
        assert!(w.guarantees.is_empty());
        // Another nation: its units vanish, 0.5 belligerence a province.
        let u = land_unit(&mut w, "CZE", 12);
        w.annex("GER", "CZE", false);
        assert!(w.units[u].unit.divisions.is_empty() && w.units[u].unit.location.is_none());
        assert_eq!(w.countries["GER"].belligerence, 2.0);
        assert_eq!(w.provinces_owned_by("GER").count(), 2 + 1 + 4);
        // With `value = 1` they come along, without belligerence.
        let u = land_unit(&mut w, "HUN", 11);
        w.annex("GER", "HUN", true);
        assert_eq!(
            (w.units[u].owner.as_str(), w.countries["GER"].belligerence),
            ("GER", 2.0)
        );
    }

    /// An ally's core goes to the alliance leader holding it as a core.
    #[test]
    fn annexed_provinces_go_to_the_leader_with_the_core() {
        let mut w = world();
        alliance(&mut w, Faction::Other, &["ITA", "GER"]);
        w.countries.get_mut("ITA").unwrap().national.insert(9);
        w.countries.get_mut("GER").unwrap().national.insert(10);
        w.annex("GER", "AUS", false);
        assert_eq!(
            (w.owner[&9].as_str(), w.owner[&10].as_str()),
            ("ITA", "GER")
        );
        // An ally's occupation goes to the leader with the core; an
        // unallied occupier keeps its own.
        w.countries.get_mut("ITA").unwrap().national.insert(14);
        w.change_control(14, "GER", false);
        w.change_control(15, "HUN", false);
        w.annex("ITA", "CZE", false);
        assert_eq!(
            (w.owner[&14].as_str(), w.controller[&14].as_str()),
            ("ITA", "ITA")
        );
        assert_eq!(
            (w.owner[&15].as_str(), w.controller[&15].as_str()),
            ("HUN", "HUN")
        );
        assert_eq!(w.owner[&12], "ITA");
    }

    #[test]
    fn a_puppet() {
        let mut w = world();
        w.countries.get_mut("GER").unwrap().national.extend([7, 8]);
        w.countries.get_mut("GER").unwrap().policy = [1, 2, 3, 4, 5, 6, 7];
        alliance(&mut w, Faction::Other, &["GER", "ITA"]);
        alliance(&mut w, Faction::Other, &["POL", "CZE"]);
        w.access.insert(("POL".into(), "FRA".into()));
        w.add_war("POL", "HUN");
        w.change_control(13, "HUN", false);
        w.change_control(11, "POL", false);
        w.make_puppet("GER", "POL");
        w.run_messages();
        let pol = &w.countries["POL"];
        assert_eq!(pol.sovereign.as_deref(), Some("GER"));
        // Cores ceded, not the capital.
        assert_eq!((w.owner[&7].as_str(), w.owner[&8].as_str()), ("POL", "GER"));
        assert_eq!(w.alliance_members("POL"), ["GER", "ITA", "POL"]);
        assert_eq!(w.alliance_members("CZE"), ["CZE"]);
        assert!(w.has_access("GER", "POL") && !w.has_access("POL", "FRA"));
        assert_eq!(pol.policy, [1, 2, 3, 4, 5, 6, 7]);
        assert_eq!(
            (w.relation("POL", "GER"), w.relation("GER", "POL")),
            (200.0, 200.0)
        );
        assert_eq!(w.countries["GER"].belligerence, 2.5);
        // It capitulated to HUN: 13 ceded, 11 handed back.
        assert!(!w.at_war("POL", "HUN") && w.diplomacy.wars.is_empty());
        assert_eq!(
            (w.owner[&13].as_str(), w.controller[&11].as_str()),
            ("HUN", "HUN")
        );
        w.end_mastery("POL");
        assert!(w.countries["POL"].sovereign.is_none());
    }

    #[test]
    fn independence_of_a_tag() {
        let mut w = world();
        w.revolt = dh_data::Revolt::parse_str(
            "SLO = { minimum = { 12 14 } extra = { 15 16 } capital = 15 regular_id = CZE }",
        );
        w.countries.get_mut("CZE").unwrap().national.insert(16);
        w.countries.get_mut("CZE").unwrap().policy = [3, 3, 3, 3, 3, 3, 3];
        let u = land_unit(&mut w, "CZE", 14);
        let home = land_unit(&mut w, "CZE", 12);
        w.independence("CZE", "SLO", true, false);
        let slo = &w.countries["SLO"];
        // Not CZE's capital, not its core from `extra`.
        assert_eq!(w.provinces_owned_by("SLO").collect::<Vec<_>>(), [14, 15]);
        assert_eq!(
            (w.controller[&14].as_str(), w.owner[&16].as_str()),
            ("SLO", "CZE")
        );
        assert_eq!(slo.capital, Some(15));
        assert_eq!(slo.regular_id.as_deref(), Some("CZE"));
        assert_eq!(slo.policy, [3; 7]);
        assert!(slo.sovereign.is_none() && !w.at_war("SLO", "CZE"));
        assert_eq!(
            (w.units[u].owner.as_str(), w.units[home].owner.as_str()),
            ("SLO", "CZE")
        );
        assert!(w.same_nation("SLO", "CZE"));
        // It exists now: a second time does nothing.
        w.independence("CZE", "SLO", true, false);
        assert_eq!(w.provinces_owned_by("SLO").count(), 2);
    }

    #[test]
    fn civil_war_splits_the_country() {
        let mut w = world();
        w.revolt = dh_data::Revolt::parse_str("SPA = { minimum = { 13 8 } capital = 8 }");
        w.countries.get_mut("POL").unwrap().regular_id = Some("SPA".into());
        let units: Vec<usize> = (0..12).map(|_| land_unit(&mut w, "POL", 7)).collect();
        let mut rng = Rng::new(5);
        let mut copy = rng.clone();
        w.civil_war("POL", Some("SPA"), &mut rng);
        assert_eq!(w.provinces_owned_by("SPA").collect::<Vec<_>>(), [8, 13]);
        assert_eq!(w.countries["SPA"].capital, Some(8));
        // POL attacks, as an event: no belligerence.
        assert_eq!(sides(&w), [(tags(&["POL"]), tags(&["SPA"]))]);
        assert_eq!(w.countries["POL"].belligerence, 0.0);
        let expected: Vec<&str> = units
            .iter()
            .map(|_| if copy.rand15() % 10 < 5 { "SPA" } else { "POL" })
            .collect();
        let got: Vec<&str> = units.iter().map(|&u| w.units[u].owner.as_str()).collect();
        assert_eq!(got, expected);
        assert!(got.contains(&"SPA") && got.contains(&"POL"));
    }

    #[test]
    fn capitals_and_owners() {
        let mut w = world();
        w.countries.get_mut("GER").unwrap().stock.supplies = 100.0;
        w.countries.get_mut("GER").unwrap().stock.money = 100.0;
        // The capital taken: a quarter of the stockpiles (not money).
        w.set_controller(1, "FRA", false);
        let (g, f) = (w.countries["GER"].stock, w.countries["FRA"].stock);
        assert_eq!(
            (g.supplies, g.money, f.supplies, f.money),
            (75.0, 100.0, 25.0, 0.0)
        );
        assert_eq!(w.countries["GER"].capital, Some(1));
        // Control follows ownership only from an owner holding it.
        w.set_owner(2, "FRA");
        assert_eq!(w.controller[&2], "FRA");
        w.set_controller(3, "ENG", false);
        w.set_owner(3, "GER");
        assert_eq!(
            (w.owner[&3].as_str(), w.controller[&3].as_str()),
            ("GER", "ENG")
        );
        // An ally taking a province gives it back to its owner.
        alliance(&mut w, Faction::Other, &["GER", "ITA"]);
        w.change_control(3, "ITA", true);
        assert_eq!(w.controller[&3], "GER");
    }

    #[test]
    fn the_war_list_drops_countries_that_are_gone() {
        let mut w = world();
        w.add_war("GER", "AUS");
        w.add_war("ITA", "AUS");
        w.diplomacy.wars[1].start = None;
        w.set_owner(9, "GER");
        w.set_owner(10, "GER");
        w.refresh_diplomacy();
        // Only the war with a start date loses AUS (and so ends).
        assert_eq!(sides(&w), [(tags(&["ITA"]), tags(&["AUS"]))]);
    }

    #[test]
    fn guarantees_and_nations() {
        let mut w = world();
        w.guarantees
            .insert(("FRA".into(), "POL".into()), GameDate::new(1933, 6, 2));
        assert!(w.guarantees("FRA", "POL") && !w.guarantees("POL", "FRA"));
        w.date = GameDate::new(1938, 6, 2);
        assert!(!w.guarantees("FRA", "POL"), "60 months");
        w.countries.get_mut("AUS").unwrap().regular_id = Some("GER".into());
        assert!(w.same_nation("GER", "AUS") && w.same_nation("AUS", "GER"));
        assert!(!w.same_nation("GER", "GER") && !w.same_nation("GER", "ITA"));
        w.countries.get_mut("HUN").unwrap().regular_id = Some("GER".into());
        assert!(w.same_nation("HUN", "AUS"));
        // A tag without a record: its static data.
        w.revolt = dh_data::Revolt::parse_str("DDR = { regular_id = GER }");
        assert!(w.same_nation("GER", "DDR"));
    }
}
