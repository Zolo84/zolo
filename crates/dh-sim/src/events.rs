//! Events (`re/events/events.md`, with the corrections of its independent
//! review `events-verify.md`): scheduled checks of each event for its
//! countries, trigger evaluation, the AI's choice of an action and the
//! execution of the action's commands.
//!
//! **Scheduling** (§1.3, §2.1). When the events load ([`Events::start`],
//! in file order) a non-random event with an `offset` moves its `date`
//! by `rand() % offset` days (`0x70D180`); then `0x700D50` registers it:
//! random and invention events go to their pools, an event whose last
//! day (`deathdate`, or `date + offset` without a later one) has passed
//! is obsolete, one in the history or slept is skipped, and every other
//! gets one check (EXECUTE_EVENT) per target country — its `country`,
//! else each of its `tag` list, else every country — on its date, or
//! `rand() % offset` days from now (tomorrow without an offset) when the
//! date has passed. A check (`0x700210`) whose trigger holds for the
//! country and which has an available action fires the event; otherwise
//! it comes back `offset` days later while today is before the
//! `deathdate` (only once without one). A check for a country that does
//! not exist comes back `offset + 1` days later until the `deathdate`.
//! A non-persistent, non-random event that fires joins the global
//! history and fires once a game (for whichever country is first); a
//! `persistent` one is checked again `offset` days after each firing
//! while its last day is in a year above 0; an `invention` one fires
//! once per country.
//!
//! **Firing** (§2.2, §2.3, §4). The AI picks an action
//! ([`choose_action`], `0x711DB0`); the choice waits in the scheduler's
//! immediate FIFO (`0x5659E0`), which runs right after the current
//! message. Every country is played by the AI unless listed in
//! [`Events::humans`]; a human's event is answered the same way (as with
//! the "auto reply" switch, `misc mod[14]`), since there is nobody to
//! ask. Random events (§2.4) are only drawn for human countries, so with
//! no humans they never fire. Invention events (§2.5) are drawn in each
//! country's day ([`Events::on_day`]).
//!
//! **Commands** (§5) run in file order for the country the event fired
//! for; a command whose own trigger fails, or whose numeric `which` is
//! negative (allowed only for the `secede*` types), is skipped
//! (`0x7102E0`; of its per-type target checks only the one of the post
//! commands and `sleepminister`, a `which` naming a minister, is
//! modelled). Most act at once (`secedeprovince`, `control`, `addcore` /
//! `removecore`, `trigger`, `sleepevent`, `war`, `alliance`,
//! `leave_alliance`, `inherit`, `end_mastery`, `independence`,
//! `civil_war`, `province_keypoints`, `domestic` / `set_domestic` /
//! `change_policy`, the post commands `headofstate` … `chiefofair`,
//! `sleepminister`, the flags, the technology commands;
//! [`crate::cabinet`] and [`crate::diplomacy`] have their rules), but
//! the executor's tail `0x71B921` posts the messages of `dissent`,
//! `money`, the resource pools, `manpowerpool`, `relation` /
//! `set_relation`, `peace`, `belligerence`, `access`, `make_puppet` and
//! `gain_tech` to the FIFO ([`Effect`]): they land after the whole action
//! (and after choices queued before them), so later commands' triggers
//! and events `trigger`ed by the same action do not see them yet. What
//! these change: `dissent` (0..=100), `money` (not below 0 for the AI),
//! the national pools of `supplies` / `oilpool` / `energypool` /
//! `metalpool` / `rarematerialspool` (at least 0; a `where` province pool
//! is not modelled), `manpowerpool` (`when = 1` needs the province data
//! of [`Events::ctx`]), relations (both directions, −200..=200),
//! `belligerence` (of `which`, at least 0), `access` (`which`'s record
//! about this country), `gain_tech` (a blueprint), `peace` and
//! `make_puppet` ([`World::make_peace`], [`World::make_puppet`]). What the
//! diplomacy handlers post themselves (JOIN_WAR when a war calls allies
//! in, …, [`World::messages`]) joins the same FIFO in order, after the
//! command that posted it. Every other command is counted in
//! [`EventStats::commands_unmodelled`].
//!
//! **Triggers** (§3) are evaluated for the country the event is checked
//! for; `minister`, the cabinet slots, `government`, `ideology` and
//! `can_change_policy` follow [`crate::cabinet`], `guarantee` and the
//! other pairs [`crate::diplomacy`]. Those without state here
//! (leaders' lives, difficulty, force ratios, division counts,
//! the untraced keys…) are false and counted in
//! [`EventStats::triggers_unmodelled`], so events do not fire on missing
//! data (a `NOT` around one holds).
//!
//! Every `rand()` of the game is a 15-bit number ([`Rng::rand15`]) and the
//! rules keep its `rand() % n`, with the bias that brings (the AI's first
//! action takes 86.28 %, not 85 %, of the draws with misc `ai[24]` = 85
//! and two actions). Divergences: the game draws `random = N` triggers
//! after reseeding from a real-time counter (`0x733DD0`, not
//! reproducible) and reseeds before each firing from a number stored in
//! the message; here every draw comes from the simulation's [`Rng`] in
//! turn. Checks due on the same day run in the order they were posted
//! (the game's heap order is not traced) and global events are posted for
//! the countries in tag order (the game: slot order). The engine's
//! calendar is the Gregorian one while the game counts twelve 30-day
//! months: checks are scheduled in game days ([`game_day`]), so the 31st
//! of a month is the same game day as the 30th and the game's 29th and
//! 30th of February fall on 1 March. Checks run in the first hour of
//! their day ([`Events::on_hour`]), before the day's other systems (the
//! order of the game's daily country handler and its scheduler is not
//! traced). A check or persistent repeat `0` days ahead waits one day
//! (the game would loop within the hour; no vanilla event does it).

use crate::diplomacy::{Message, WarFlags};
use crate::movement::MoveContext;
use crate::{Rng, System, World};
use dh_data::events::{
    Action, Command, Event, EventDb, FlagTest, GarrisonKind, PairKind, Subject, Trigger, Whose,
};
use dh_data::{Branch, GameDate};
use std::collections::{BTreeMap, BTreeSet, VecDeque};
use std::sync::Arc;

/// A date as a day number on the game's calendar of twelve 30-day
/// months, as [`dh_data::events::EventDate::day_number`] counts (the 31st
/// counts as the 30th).
pub fn game_day(d: GameDate) -> i64 {
    (i64::from(d.year) * 12 + i64::from(d.month) - 1) * 30 + i64::from(d.day.min(30)) - 1
}

/// What the countries' `month` / `day` triggers see: the month (0..=11)
/// and day (0..=29) on the game's calendar.
fn game_month_day(d: GameDate) -> (i64, i64) {
    (i64::from(d.month) - 1, i64::from(d.day.min(30)) - 1)
}

/// A pending check of an event for a country (EXECUTE_EVENT, message 0xA0).
#[derive(Debug, Clone, PartialEq, Eq)]
struct Check {
    event: usize,
    country: String,
}

/// A national stockpile a command adds to.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Pool {
    Supplies,
    Oil,
    Energy,
    Metal,
    RareMaterials,
}

/// A command's message posted to the FIFO (tail `0x71B921`), with what the
/// executor worked out when it ran the command.
#[derive(Debug, Clone, PartialEq)]
pub enum Effect {
    /// DISSENT 0x14A (`0x48E7E0`).
    Dissent { country: String, value: f32 },
    /// MONEY 0x164 (`0x49EA80`).
    Money { country: String, value: f64 },
    /// SUPPLIES / OIL / ENERGY / METAL / RARE 0x15D..0x161 (`0x48FED0`).
    Pool {
        country: String,
        pool: Pool,
        value: f64,
    },
    /// GAIN_MANPOWER 0x63 (`0x49B090`), the amount already scaled.
    Manpower { country: String, amount: f64 },
    /// EXEC_RELATION 0x125 (`0x4881B0`).
    Relation {
        country: String,
        other: String,
        delta: f32,
    },
    /// BELLIGERENCE 0x1B9 (`0x4909B0`), to the country it changes.
    Belligerence { country: String, value: f32 },
    /// PEACE 0x165 (`0x490060`).
    Peace {
        country: String,
        other: String,
        separate: bool,
    },
    /// ACCESS 0x166 (`0x490230`): `other`'s record about `country` gets
    /// the access flag.
    Access { country: String, other: String },
    /// DIPLOMATIC_EVENT 0x89 subtype 0x10 (`0x474247`): `puppet` becomes
    /// `overlord`'s ([`World::make_puppet`]).
    Puppet { overlord: String, puppet: String },
    /// GAIN_TECH 0x157 (`0x48DEC0`).
    Blueprint { country: String, tech: i64 },
}

/// What waits in the scheduler's immediate FIFO.
#[derive(Debug, Clone, PartialEq)]
enum Queued {
    /// SET_EVENTSELECTION (0x84): an action the AI chose.
    Choice {
        event: usize,
        country: String,
        action: usize,
    },
    Effect(Effect),
    /// What a diplomacy handler posted ([`World::messages`]).
    Diplomacy(Message),
}

/// An event that fired: its action ran for `country`.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Fired {
    pub date: GameDate,
    pub id: i64,
    pub country: String,
    /// Index of the action in the event's list.
    pub action: usize,
}

/// What the system did, for reports and tests.
#[derive(Debug, Clone, Default, PartialEq)]
pub struct EventStats {
    /// Events not scheduled at load because their last day had passed.
    pub obsolete: usize,
    /// Checks of an event for a country (EXECUTE_EVENT handled).
    pub checks: u64,
    /// Actions executed.
    pub fired: u64,
    /// Commands run (valid ones), modelled or not.
    pub commands: u64,
    /// Evaluations of triggers without state here (each false), by key.
    pub triggers_unmodelled: BTreeMap<String, u64>,
    /// Commands run that change nothing here, by type.
    pub commands_unmodelled: BTreeMap<String, u64>,
}

/// The event manager (`M = [0xD61572]`) as a [`System`].
pub struct Events {
    db: Arc<EventDb>,
    /// Province data, for `manpowerpool when = 1`.
    pub ctx: Option<Arc<MoveContext>>,
    /// Countries a person plays (`0xDC0F94[idx] ≠ 0`); the others are AI.
    pub humans: BTreeSet<String>,
    /// Events that happened (`M+0x1D4F6`): non-persistent, non-random,
    /// non-invention ones once they fired, and slept ones.
    pub history: BTreeSet<i64>,
    /// Events put to sleep (`M+0x1D4E4`).
    pub slept: BTreeSet<i64>,
    /// Game day each `save_date` event fired (`M+0x1D508`).
    pub saved_dates: BTreeMap<i64, i64>,
    /// Invention events each country had (`C+0x363E`).
    pub inventions: BTreeMap<String, BTreeSet<i64>>,
    /// Everything that fired, in order.
    pub fired: Vec<Fired>,
    pub stats: EventStats,
    started: bool,
    /// Per event: fired or slept (`E+0x1235`), waiting for its choice
    /// (`E+0x1234`), and its date after the load-time shift, as a game day.
    done: Vec<bool>,
    pending: Vec<bool>,
    date: Vec<i64>,
    queue: BTreeMap<(i64, u64), Check>,
    seq: u64,
    fifo: VecDeque<Queued>,
    randoms: Vec<usize>,
    invention_pool: Vec<usize>,
    /// Countries that exist ([`World::exists`]), refreshed before each
    /// batch of checks and after a command moves provinces.
    existing: BTreeSet<String>,
}

impl Events {
    /// The manager with nothing scheduled yet: [`Events::start`] (or the
    /// first hour) schedules.
    pub fn new(db: Arc<EventDb>) -> Self {
        let n = db.events.len();
        Events {
            date: db.events.iter().map(|e| e.date.day_number()).collect(),
            db,
            ctx: None,
            humans: BTreeSet::new(),
            history: BTreeSet::new(),
            slept: BTreeSet::new(),
            saved_dates: BTreeMap::new(),
            inventions: BTreeMap::new(),
            fired: Vec::new(),
            stats: EventStats::default(),
            started: false,
            done: vec![false; n],
            pending: vec![false; n],
            queue: BTreeMap::new(),
            seq: 0,
            fifo: VecDeque::new(),
            randoms: Vec::new(),
            invention_pool: Vec::new(),
            existing: BTreeSet::new(),
        }
    }

    pub fn db(&self) -> &EventDb {
        &self.db
    }

    /// Loads the events (`0x70D180` and `0x700D50` for each, in file
    /// order) with `world.date` as now (the scenario's start, set before
    /// the event files load), then draws each country's first random
    /// event (GAME_STARTED, `0x483159`). Call it once, after the history
    /// and humans are set; the first hour calls it otherwise.
    pub fn start(&mut self, world: &World, rng: &mut Rng) {
        if self.started {
            return;
        }
        self.started = true;
        self.refresh(world);
        let db = self.db.clone();
        let today = game_day(world.date);
        for (i, e) in db.events.iter().enumerate() {
            if !e.random && e.offset != 0 {
                self.date[i] += i64::from(rng.rand15() % offset_range(e.offset));
            }
            self.register(i, today, world, rng);
        }
        let tags: Vec<String> = world.countries.keys().cloned().collect();
        for tag in tags {
            self.schedule_random(&tag, world, rng);
        }
    }

    /// `0x700D50`: pools, obsolete events, the first checks.
    fn register(&mut self, i: usize, today: i64, world: &World, rng: &mut Rng) {
        let db = self.db.clone();
        let e = &db.events[i];
        if e.invention {
            self.invention_pool.push(i);
            return;
        }
        if e.random {
            self.randoms.push(i);
            return;
        }
        if today >= self.last_day(i) {
            self.stats.obsolete += 1;
            return;
        }
        if self.history.contains(&e.id) || self.slept.contains(&e.id) {
            return;
        }
        let mut day = self.date[i];
        if day <= today {
            day = today
                + if e.offset > 0 {
                    i64::from(rng.rand15() % offset_range(e.offset))
                } else {
                    1
                };
        }
        let targets: Vec<String> = if let Some(c) = &e.country {
            vec![c.clone()]
        } else if !e.tags.is_empty() {
            e.tags.clone()
        } else {
            world.countries.keys().cloned().collect()
        };
        for c in targets {
            self.post(day, i, c);
        }
    }

    /// The event's last day (`0x711D10`): its `deathdate` when later
    /// than its (shifted) date, else the date plus `offset` days.
    fn last_day(&self, i: usize) -> i64 {
        let e = &self.db.events[i];
        let death = e.deathdate.day_number();
        if death > self.date[i] {
            death
        } else {
            self.date[i] + e.offset
        }
    }

    fn post(&mut self, day: i64, event: usize, country: String) {
        self.queue.insert((day, self.seq), Check { event, country });
        self.seq += 1;
    }

    /// Pending checks of an event: game day and country, in order.
    pub fn scheduled(&self, id: i64) -> Vec<(i64, String)> {
        let Some(i) = self.db.index_of(id) else {
            return Vec::new();
        };
        self.queue
            .iter()
            .filter(|(_, c)| c.event == i)
            .map(|(k, c)| (k.0, c.country.clone()))
            .collect()
    }

    fn refresh(&mut self, world: &World) {
        self.existing = world.owner.values().cloned().collect();
        self.existing.retain(|t| world.countries.contains_key(t));
    }

    fn exists(&self, tag: &str) -> bool {
        self.existing.contains(tag)
    }

    /// Runs the checks due today, each followed by what it queued.
    pub fn run_due(&mut self, world: &mut World, rng: &mut Rng) {
        let today = game_day(world.date);
        let due = |q: &BTreeMap<(i64, u64), Check>| q.keys().next().is_some_and(|k| k.0 <= today);
        if !due(&self.queue) {
            return;
        }
        self.refresh(world);
        while due(&self.queue) {
            let key = *self.queue.keys().next().unwrap();
            let check = self.queue.remove(&key).unwrap();
            self.execute_event(check.event, &check.country, world, rng);
            self.drain(world, rng);
        }
    }

    /// Runs the FIFO until it is empty (what runs may queue more).
    fn drain(&mut self, world: &mut World, rng: &mut Rng) {
        while let Some(q) = self.fifo.pop_front() {
            match q {
                Queued::Choice {
                    event,
                    country,
                    action,
                } => self.select(event, country, action, world, rng),
                Queued::Effect(effect) => self.apply(effect, world),
                Queued::Diplomacy(m) => {
                    world.handle_message(m);
                    self.refresh(world);
                }
            }
            self.take_messages(world);
        }
    }

    /// Moves what the diplomacy handlers posted to the FIFO, in order.
    fn take_messages(&mut self, world: &mut World) {
        self.fifo
            .extend(world.messages.drain(..).map(Queued::Diplomacy));
    }

    /// A check of event `i` for the country in slot `target`
    /// (`0x700210`).
    fn execute_event(&mut self, i: usize, target: &str, world: &World, rng: &mut Rng) {
        let db = self.db.clone();
        let e = &db.events[i];
        self.stats.checks += 1;
        let today = game_day(world.date);
        if self.done[i] || self.slept.contains(&e.id) {
            return;
        }
        let country = if self.exists(target) {
            Some(target.to_owned())
        } else {
            self.province_owner(e.province, world)
        };
        let Some(c) = country else {
            if !e.random && !self.history.contains(&e.id) && today < e.deathdate.day_number() {
                self.post(today + e.offset + 1, i, target.to_owned());
            }
            return;
        };
        if !e.random && self.history.contains(&e.id) {
            return;
        }
        if self.can_fire(i, &c, world, rng) {
            self.fire(i, &c, world, rng);
            if e.random {
                self.schedule_random(&c, world, rng);
            }
        } else if today < e.deathdate.day_number() {
            self.post(today + e.offset.max(1), i, c);
        }
    }

    /// Owner of an event's `province` (`0x712400`), if it exists.
    fn province_owner(&self, province: i64, world: &World) -> Option<String> {
        let p = u32::try_from(province).ok()?;
        world.owner.get(&p).filter(|t| self.exists(t)).cloned()
    }

    /// `0x70D130`: the trigger holds for `c` and an action is available.
    fn can_fire(&mut self, i: usize, c: &str, world: &World, rng: &mut Rng) -> bool {
        let db = self.db.clone();
        let e = &db.events[i];
        self.eval(&e.trigger, c, world, rng) && self.any_available(e, c, world, rng)
    }

    fn any_available(&mut self, e: &Event, c: &str, world: &World, rng: &mut Rng) -> bool {
        e.actions
            .iter()
            .any(|a| self.available(e, a, c, world, rng))
    }

    /// `0x7116E0`: whether action `a` can be taken. An action without a
    /// valid command is not (unless `misc mod[15]` forces it; the game
    /// then adds an empty command to it, not modelled); in a random event
    /// its first command decides.
    fn available(&mut self, e: &Event, a: &Action, c: &str, world: &World, rng: &mut Rng) -> bool {
        if let Some(t) = &a.trigger {
            if !self.eval(t, c, world, rng) {
                return false;
            }
        }
        for cmd in &a.commands {
            if self.command_valid(cmd, c, world, rng) {
                return true;
            }
            if e.random {
                return false;
            }
        }
        let force = world.params.force_event_actions;
        if force == 0 || e.random || e.persistent {
            return false;
        }
        force == 2 || a.trigger.is_some()
    }

    /// `0x7102E0` as far as traced: the command's own trigger, a
    /// negative numeric `which` only for `secedeprovince`, `secedearea`
    /// and `secederegion`, and for the post commands and `sleepminister` a
    /// `which` that names a minister (of any country or year, dead or not;
    /// case 17 at `0x710D89`).
    fn command_valid(&mut self, cmd: &Command, c: &str, world: &World, rng: &mut Rng) -> bool {
        if let Some(t) = &cmd.trigger {
            if !self.eval(t, c, world, rng) {
                return false;
            }
        }
        if post_command(&cmd.kind).is_some() || cmd.kind == "sleepminister" {
            return cmd.which_num() >= 0.0
                && world.ministers.contains_key(&(cmd.which_num() as i64));
        }
        cmd.which_num() >= 0.0
            || matches!(
                cmd.kind.as_str(),
                "secedeprovince" | "secedearea" | "secederegion"
            )
    }

    /// `0x712010` for EXECUTE_EVENT: the AI's choice goes to the FIFO.
    fn fire(&mut self, i: usize, c: &str, world: &World, rng: &mut Rng) {
        let db = self.db.clone();
        let e = &db.events[i];
        if !self.any_available(e, c, world, rng) {
            return;
        }
        self.pending[i] = true;
        let mut pos = Vec::new();
        let mut chances = Vec::new();
        for (k, a) in e.actions.iter().enumerate() {
            if pos.len() >= 256 {
                break;
            }
            if self.available(e, a, c, world, rng) {
                pos.push(k);
                chances.push(a.ai_chance.max(-1));
            }
        }
        let rule = world.params.event_action_rule;
        let action = choose_action(&pos, &chances, rule, &mut || rng.rand15());
        self.fifo.push_back(Queued::Choice {
            event: i,
            country: c.to_owned(),
            action,
        });
    }

    /// SET_EVENTSELECTION (`0x71229B`): run the action; a persistent
    /// event is checked again `offset` days later.
    fn select(&mut self, i: usize, c: String, k: usize, world: &mut World, rng: &mut Rng) {
        let db = self.db.clone();
        let e = &db.events[i];
        self.execute_action(i, &c, k, world, rng);
        if e.persistent && self.last_day(i).div_euclid(360) > 0 {
            let day = game_day(world.date) + e.offset.max(1);
            self.post(day, i, c);
        }
    }

    /// `0x711960`: history, then the commands of action `k`.
    fn execute_action(&mut self, i: usize, c: &str, k: usize, world: &mut World, rng: &mut Rng) {
        let db = self.db.clone();
        let e = &db.events[i];
        self.pending[i] = false;
        if self.history.contains(&e.id) {
            return;
        }
        if e.invention {
            self.inventions
                .entry(c.to_owned())
                .or_default()
                .insert(e.id);
        } else if !e.persistent && !e.random {
            self.history.insert(e.id);
            self.done[i] = true;
            if e.save_date {
                self.saved_dates.insert(e.id, game_day(world.date));
            }
        }
        if !self.any_available(e, c, world, rng) {
            return;
        }
        let Some(a) = e.actions.get(k) else {
            return;
        };
        self.fired.push(Fired {
            date: world.date,
            id: e.id,
            country: c.to_owned(),
            action: k,
        });
        self.stats.fired += 1;
        for cmd in &a.commands {
            if !self.command_valid(cmd, c, world, rng) {
                continue;
            }
            self.stats.commands += 1;
            if !self.run_command(e, cmd, c, world, rng) {
                *self
                    .stats
                    .commands_unmodelled
                    .entry(cmd.kind.clone())
                    .or_default() += 1;
            }
            self.take_messages(world);
        }
    }

    /// One command for country `c` (`0x713490`): done at once, or queued
    /// as an [`Effect`]; whether it is modelled.
    fn run_command(
        &mut self,
        e: &Event,
        cmd: &Command,
        c: &str,
        world: &mut World,
        rng: &mut Rng,
    ) -> bool {
        let v = cmd.value_num();
        // `which` / `where` naming a country (0x70B510 maps tags).
        let country = |s: &Option<String>, world: &World| {
            s.as_deref()
                .map(|t| t.trim().to_ascii_uppercase())
                .filter(|t| world.countries.contains_key(t))
        };
        let me = c.to_owned();
        let queue = |events: &mut Events, effect| events.fifo.push_back(Queued::Effect(effect));
        match cmd.kind.as_str() {
            "dissent" => queue(
                self,
                Effect::Dissent {
                    country: me,
                    value: v as f32,
                },
            ),
            "money" => queue(
                self,
                Effect::Money {
                    country: me,
                    value: v,
                },
            ),
            "supplies" | "oilpool" | "energypool" | "metalpool" | "rarematerialspool" => {
                let pool = match cmd.kind.as_str() {
                    "supplies" => Pool::Supplies,
                    "oilpool" => Pool::Oil,
                    "energypool" => Pool::Energy,
                    "metalpool" => Pool::Metal,
                    _ => Pool::RareMaterials,
                };
                // Supplies and oil go to province `where` when it is set.
                if matches!(pool, Pool::Supplies | Pool::Oil) && cmd.where_num() > 0.0 {
                    return false;
                }
                queue(
                    self,
                    Effect::Pool {
                        country: me,
                        pool,
                        value: v,
                    },
                );
            }
            // `0x714D94`: `when = 1` scales by the manpower of the
            // national provinces the country owns.
            "manpowerpool" => {
                let amount = if cmd.when_num() as i64 == 1 {
                    let Some(ctx) = &self.ctx else {
                        return false;
                    };
                    let Some(x) = world.countries.get(c) else {
                        return true;
                    };
                    let sum: f64 = world
                        .owner
                        .iter()
                        .filter(|(p, o)| o.as_str() == c && x.national.contains(p))
                        .filter_map(|(&p, _)| ctx.province(p))
                        .map(|p| f64::from(p.manpower))
                        .sum();
                    v * sum
                } else {
                    v
                };
                queue(
                    self,
                    Effect::Manpower {
                        country: me,
                        amount,
                    },
                );
            }
            // `set_relation`: the difference to the relation as it stands
            // when the command runs, truncated (`_ftol`).
            "relation" | "set_relation" => {
                if let Some(other) = country(&cmd.which, world) {
                    let delta = if cmd.kind == "set_relation" {
                        (v as f32 - world.relation(c, &other)).trunc()
                    } else {
                        v as f32
                    };
                    queue(
                        self,
                        Effect::Relation {
                            country: me,
                            other,
                            delta,
                        },
                    );
                }
            }
            // Of `which`; nothing without one.
            "belligerence" => {
                if let Some(t) = country(&cmd.which, world) {
                    queue(
                        self,
                        Effect::Belligerence {
                            country: t,
                            value: v as f32,
                        },
                    );
                }
            }
            "peace" => {
                if let Some(other) = country(&cmd.which, world) {
                    queue(
                        self,
                        Effect::Peace {
                            country: me,
                            other,
                            separate: v > 0.0,
                        },
                    );
                }
            }
            "access" => {
                if let Some(other) = country(&cmd.which, world) {
                    queue(self, Effect::Access { country: me, other });
                }
            }
            "make_puppet" => {
                if let Some(puppet) = country(&cmd.which, world) {
                    queue(
                        self,
                        Effect::Puppet {
                            overlord: me,
                            puppet,
                        },
                    );
                }
            }
            "gain_tech" => queue(
                self,
                Effect::Blueprint {
                    country: me,
                    tech: cmd.which_num() as i64,
                },
            ),
            "secedeprovince" => {
                self.secede(cmd, c, world);
                self.refresh(world);
            }
            // PROVCHANGECONTROL to `which` for province `value`, not as a
            // battle (`+0x12 = 1`).
            "control" => {
                if let (Some(t), Some(p)) = (country(&cmd.which, world), province(v, world)) {
                    world.change_control(p, &t, false);
                    self.refresh(world);
                }
            }
            // PROVINCE_KEYPOINTS 0x163 (`0x490020`): province `which`
            // gains `value` victory points.
            "province_keypoints" => {
                if let Some(p) = province(cmd.which_num(), world) {
                    *world.points.entry(p).or_insert(0) += v as i64;
                }
            }
            // ADD_CORE / REMOVE_CORE: province `which`, of `where` or this
            // country.
            "addcore" | "removecore" => {
                let target = country(&cmd.where_, world).unwrap_or_else(|| c.to_owned());
                let p = cmd.which_num() as i64;
                if let (Some(x), Ok(p)) = (world.countries.get_mut(&target), u32::try_from(p)) {
                    if cmd.kind == "addcore" {
                        x.national.insert(p);
                    } else {
                        x.national.remove(&p);
                    }
                }
            }
            "trigger" => self.trigger_command(e, cmd, c, world, rng),
            // Sleeping: slept and in the history, never fires again.
            "sleepevent" => {
                if let Some(t) = self.db.index_of(cmd.which_num() as i64) {
                    let id = self.db.events[t].id;
                    self.slept.insert(id);
                    self.history.insert(id);
                    self.done[t] = true;
                }
            }
            // SET_FLAG (0x18E): 1 for `value = 0`, `when = 1` adds the
            // current value, within 0..=32767; clearing sets 0.
            "setflag" | "clrflag" | "local_setflag" | "local_clrflag" => {
                let name = cmd.which.clone().unwrap_or_default();
                let flags = if cmd.kind.starts_with("local_") {
                    match world.countries.get_mut(c) {
                        Some(x) => &mut x.flags,
                        None => return true,
                    }
                } else {
                    &mut world.flags
                };
                let cur = flags.get(&name).copied().unwrap_or(0);
                let new = if cmd.kind.ends_with("clrflag") {
                    0
                } else {
                    let mut x = if v as f32 == 0.0 { 1 } else { v as f32 as i32 };
                    if cmd.when_num() as i32 == 1 {
                        x = x.saturating_add(cur);
                    }
                    x.clamp(0, 32767)
                };
                if new == 0 {
                    flags.remove(&name);
                } else {
                    flags.insert(name, new);
                }
            }
            // REQ_SETUP_WAR with `b1 = b2 = 1` (synchronous; its JOIN_WARs
            // are queued).
            "war" => {
                if let Some(t) = country(&cmd.which, world).filter(|t| t != c) {
                    world.request_war(c, &t, WarFlags::EVENT);
                }
            }
            // `where` names a faction (1 Axis, 2 Allies, 3 Comintern).
            "alliance" => {
                let t = country(&cmd.which, world);
                let (f, when) = (cmd.where_num() as i64, cmd.when_num() as i64);
                world.alliance_command(c, t.as_deref(), f, when);
            }
            // `when = 1`: a separate peace in the leader's wars.
            "leave_alliance" => world.leave_alliance(c, cmd.when_num() as i64 == 1),
            // EXEC_SET_ANNEXATION to this country (`value > 0`: the units
            // too).
            "inherit" => {
                if let Some(t) = country(&cmd.which, world).filter(|t| t != c) {
                    world.annex(c, &t, v > 0.0);
                    self.refresh(world);
                }
            }
            "end_mastery" => {
                if let Some(t) = country(&cmd.which, world) {
                    world.end_mastery(&t);
                }
            }
            // `0x461210(C, which, value ≤ 0, 1, when > 0)`: `which` is
            // any tag of `db/revolt.txt`.
            "independence" => {
                let t = tag(&cmd.which);
                if !t.is_empty() {
                    world.independence(c, &t, v <= 0.0, cmd.when_num() > 0.0);
                    self.refresh(world);
                }
            }
            "civil_war" => {
                let t = tag(&cmd.which);
                world.civil_war(c, Some(t.as_str()).filter(|t| !t.is_empty()), rng);
                self.refresh(world);
            }
            // EXEC_CHANGE_POLICY without the date stamp (`0x713D1C`,
            // `0x713DA8`): `domestic` moves the slider by `value` from its
            // 0-based position, truncated; `set_domestic` puts it at
            // `value − 1` rounded (ties to even); clamped to 0..=9, then
            // the cabinet check at 2.0 for `democratic` / `political_left`.
            "domestic" | "set_domestic" => {
                let Some(k) = cmd.which.as_deref().and_then(slider_index) else {
                    return false;
                };
                let Some(x) = world.countries.get(c) else {
                    return true;
                };
                let value = f64::from(v as f32);
                let new = if cmd.kind == "domestic" {
                    (f64::from(x.policy[k]) - 1.0 + value) as i64
                } else {
                    (value - 1.0).round_ties_even() as i64
                };
                world.exec_change_policy(c, k, new, true);
            }
            // `0x713E22`: a normal change by `value` (truncated), under the
            // rules of `can_change_policy` and with the date stamp; dropped
            // silently when they fail (synchronous, assumed).
            "change_policy" => {
                let Some(k) = cmd.which.as_deref().and_then(slider_index) else {
                    return false;
                };
                let Some(x) = world.countries.get(c) else {
                    return true;
                };
                let new = (f64::from(x.policy[k]) - 1.0 + f64::from(v as f32)) as i64;
                world.request_change_policy(c, k, new);
            }
            // CHANGE_MINISTER (synchronous, no penalty): minister `which`
            // into the post, whoever it is.
            kind if post_command(kind).is_some() => {
                let k = post_command(kind).unwrap();
                world.change_minister(c, k, cmd.which_num() as i64, false);
            }
            // KILL_MINISTER to the minister's own country (synchronous).
            "sleepminister" => world.kill_minister(cmd.which_num() as i64),
            // At once (their tail is not classified, except `activate` /
            // `deactivate`, which are synchronous).
            _ => return world.apply_tech_command(c, &cmd.to_tech()),
        }
        true
    }

    /// A queued command's message arrives.
    fn apply(&mut self, effect: Effect, world: &mut World) {
        match effect {
            // Within 0..=100.
            Effect::Dissent { country, value } => {
                if let Some(x) = world.countries.get_mut(&country) {
                    x.dissent = (x.dissent + value).clamp(0.0, 100.0);
                }
            }
            // Below 0 only for a human.
            Effect::Money { country, value } => {
                let ai = !self.humans.contains(&country);
                if let Some(x) = world.countries.get_mut(&country) {
                    x.stock.money += value;
                    if ai && x.stock.money < 0.0 {
                        x.stock.money = 0.0;
                    }
                }
            }
            // At least 0.
            Effect::Pool {
                country,
                pool,
                value,
            } => {
                if let Some(x) = world.countries.get_mut(&country) {
                    let s = &mut x.stock;
                    let p = match pool {
                        Pool::Supplies => &mut s.supplies,
                        Pool::Oil => &mut s.oil,
                        Pool::Energy => &mut s.energy,
                        Pool::Metal => &mut s.metal,
                        Pool::RareMaterials => &mut s.rare_materials,
                    };
                    *p = (*p + value).max(0.0);
                }
            }
            Effect::Manpower { country, amount } => {
                if let Some(x) = world.countries.get_mut(&country) {
                    x.stock.manpower = (x.stock.manpower + amount).max(0.0);
                }
            }
            // The sum within ±200, then the other side takes the same.
            Effect::Relation {
                country,
                other,
                delta,
            } => {
                let new = (world.relation(&country, &other) + delta).clamp(-200.0, 200.0);
                world
                    .relations
                    .insert((country.clone(), other.clone()), new);
                world.relations.insert((other, country), new);
            }
            // At least 0, no upper bound.
            Effect::Belligerence { country, value } => {
                if let Some(x) = world.countries.get_mut(&country) {
                    x.belligerence = (x.belligerence + value).max(0.0);
                }
            }
            Effect::Peace {
                country,
                other,
                separate,
            } => world.make_peace(&country, &other, separate),
            Effect::Puppet { overlord, puppet } => {
                world.make_puppet(&overlord, &puppet);
                self.refresh(world);
            }
            // `D_other[country]+0x37`: what the `access = { country =
            // country country = other }` trigger reads and `other`'s
            // stacks consult before entering `country`'s provinces
            // (land-movement.md §1.4). No consent.
            Effect::Access { country, other } => {
                world.access.insert((other, country));
            }
            // Unless deactivated (whether the technology exists is not
            // checked here).
            Effect::Blueprint { country, tech } => {
                if let Some(x) = world.countries.get_mut(&country) {
                    if !x.research.deactivated.contains(&tech) {
                        x.research.blueprints.insert(tech);
                    }
                }
            }
        }
    }

    /// `secedeprovince` (0x716D2C): province `value` to `which` (a tag,
    /// −1 its controller, −2 its owner); `when = 1` hands over only what
    /// this country holds and only to another country, `when = 2` only
    /// what the target lacks, otherwise both.
    fn secede(&self, cmd: &Command, c: &str, world: &mut World) {
        let Some(p) = province(cmd.value_num(), world) else {
            return;
        };
        let target = match cmd.which_num() as i64 {
            -1 => world.controller.get(&p).cloned(),
            -2 => world.owner.get(&p).cloned(),
            _ => cmd.which.as_deref().map(|t| t.trim().to_ascii_uppercase()),
        };
        let Some(t) = target.filter(|t| world.countries.contains_key(t)) else {
            return;
        };
        let (control, own) = match cmd.when_num() as i64 {
            1 => (
                t != c && world.controller.get(&p).is_some_and(|x| x == c),
                t != c && world.owner.get(&p).is_some_and(|x| x == c),
            ),
            2 => (
                world.controller.get(&p) != Some(&t),
                world.owner.get(&p) != Some(&t),
            ),
            _ => (true, true),
        };
        // PROVCHANGECONTROL (not as a battle), then PROVCHANGEOWNER.
        if control {
            world.change_control(p, &t, false);
        }
        if own {
            world.set_owner(p, &t);
        }
    }

    /// `trigger` (0x716598): check event `which` now for the owner of this
    /// event's `province` (over the target's own `country`), else its
    /// `country`, else (`all = yes`) each existing country of its `tag`
    /// list or every one, else this country (when in its `tag` list, if
    /// any).
    fn trigger_command(&mut self, e: &Event, cmd: &Command, c: &str, world: &World, rng: &mut Rng) {
        let Some(t) = self.db.index_of(cmd.which_num() as i64) else {
            return;
        };
        let db = self.db.clone();
        let target = &db.events[t];
        let countries: Vec<String> = if let Some(owner) = self.province_owner(e.province, world) {
            vec![owner]
        } else if let Some(x) = &target.country {
            vec![x.clone()]
        } else if target.all {
            if target.tags.is_empty() {
                self.existing.iter().cloned().collect()
            } else {
                let tags = target.tags.iter();
                tags.filter(|x| self.exists(x)).cloned().collect()
            }
        } else if target.tags.is_empty() || target.tags.iter().any(|x| x == c) {
            vec![c.to_owned()]
        } else {
            Vec::new()
        };
        for x in countries {
            self.execute_event(t, &x, world, rng);
        }
    }

    /// `0x6FFF20`: draw the next random event of a human country. The
    /// 101st candidate is drawn and checked, but only the first 100 can
    /// be taken.
    fn schedule_random(&mut self, c: &str, world: &World, rng: &mut Rng) {
        if self.randoms.is_empty() || !self.humans.contains(c) {
            return;
        }
        let db = self.db.clone();
        for attempt in 1..=101 {
            let i = self.randoms[(rng.rand15() % self.randoms.len() as u32) as usize];
            let e = &db.events[i];
            let ok = !self.pending[i]
                && e.country.as_deref().is_none_or(|x| x == c)
                && (e.tags.is_empty() || e.tags.iter().any(|x| x == c))
                && self.can_fire(i, c, world, rng);
            if attempt > 100 {
                return;
            }
            if ok {
                // 133 for democracies (SC, ML, SL, SD), else 400.
                let range = if world.government(c) == Some(dh_data::Government::Democratic) {
                    133
                } else {
                    400
                };
                let day = game_day(world.date) + i64::from(rng.rand15() % range + range / 2);
                self.post(day, i, c.to_owned());
                return;
            }
        }
    }

    /// `0x7008E0`, each country's day: with `rand() % 360` at most
    /// `research[5]`, the invention event with the highest `rand() &
    /// 0x3FF` among those that can fire fires.
    pub fn invention_checks(&mut self, world: &mut World, rng: &mut Rng) {
        if !self.started {
            return;
        }
        self.refresh(world);
        let db = self.db.clone();
        let tags: Vec<String> = self.existing.iter().cloned().collect();
        for tag in tags {
            if (rng.rand15() % 360) as f32 > world.params.invention_events {
                continue;
            }
            let mut best: Option<usize> = None;
            let mut best_v = -1i64;
            for &i in &self.invention_pool.clone() {
                let id = db.events[i].id;
                if self.pending[i] || self.inventions.get(&tag).is_some_and(|s| s.contains(&id)) {
                    continue;
                }
                let v = i64::from(rng.rand15() & 0x3FF);
                if v > best_v && self.can_fire(i, &tag, world, rng) {
                    best = Some(i);
                    best_v = v;
                }
            }
            if let Some(i) = best {
                self.fire(i, &tag, world, rng);
                self.drain(world, rng);
            }
        }
    }

    fn unmodelled(&mut self, key: &str) -> bool {
        *self
            .stats
            .triggers_unmodelled
            .entry(key.to_owned())
            .or_default() += 1;
        false
    }

    /// Whether trigger `t` holds for country `c` (notes §3; the
    /// container's evaluation stops at the first child that decides).
    pub fn eval(&mut self, t: &Trigger, c: &str, world: &World, rng: &mut Rng) -> bool {
        let country = world.countries.get(c);
        // A tag naming an existing country.
        let existing = |s: &str| -> Option<&crate::Country> {
            if self.exists(s) {
                world.countries.get(s)
            } else {
                None
            }
        };
        match t {
            Trigger::And(ch) => ch.iter().all(|x| self.eval(x, c, world, rng)),
            Trigger::Or(ch) => ch.iter().any(|x| self.eval(x, c, world, rng)),
            Trigger::Not(ch) => !ch.iter().any(|x| self.eval(x, c, world, rng)),
            Trigger::Year(n) => i64::from(world.date.year) >= *n,
            Trigger::Month(n) => game_month_day(world.date).0 >= *n,
            Trigger::Day(n) => game_month_day(world.date).1 >= *n,
            Trigger::Dissent(n) => country.is_some_and(|x| f64::from(x.dissent) >= *n),
            Trigger::Random(n) => i64::from(rng.rand15() % 100) <= *n,
            Trigger::Ai(s) => match s {
                Subject::Yes => !self.humans.contains(c),
                Subject::No => self.humans.contains(c),
                Subject::Tag(t) => self.exists(t) && !self.humans.contains(t),
            },
            Trigger::AtWar(s) => match s {
                Subject::Yes => world.diplomacy.in_war(c),
                Subject::No => !world.diplomacy.in_war(c),
                Subject::Tag(t) => self.exists(t) && world.diplomacy.in_war(t),
            },
            Trigger::IsPuppet(s) => match s {
                Subject::Yes => country.is_some_and(|x| x.sovereign.is_some()),
                Subject::No => false,
                Subject::Tag(t) => existing(t).is_some_and(|x| x.sovereign.is_some()),
            },
            Trigger::Exists(t) => self.exists(t),
            Trigger::Country(t) => c == t,
            Trigger::Event(id) => !self.slept.contains(id) && self.history.contains(id),
            Trigger::EventDays { id, days } => self
                .saved_dates
                .get(id)
                .is_some_and(|d| game_day(world.date) - d >= *days),
            Trigger::Flag(f) => f.holds(flag(&world.flags, f)),
            Trigger::LocalFlag(f) => country.is_some_and(|x| f.holds(flag(&x.flags, f))),
            // A slot naming the minister (dead or not started too).
            Trigger::HeadOfState(id) => world.slot_minister(c, 0).is_some_and(|m| m.id == *id),
            Trigger::HeadOfGovernment(id) => world.slot_minister(c, 1).is_some_and(|m| m.id == *id),
            Trigger::InCabinet(id) => world.in_cabinet(c, *id),
            // `0x7328E0`: the minister exists, has started and is alive —
            // whatever its country or post.
            Trigger::Minister(id) => world
                .ministers
                .get(id)
                .is_some_and(|m| m.start_year <= world.date.year && !m.dead),
            // Of the sliders now; `country` names another one (a missing
            // country fails).
            Trigger::Government { kind, country: x } => {
                let tag = x.as_deref().unwrap_or(c);
                match dh_data::Government::from_name(kind) {
                    Some(g) => world.government(tag) == Some(g),
                    None => false,
                }
            }
            Trigger::Ideology { kind, country: x } => {
                let tag = x.as_deref().unwrap_or(c);
                match dh_data::Ideology::from_name(kind) {
                    Some(i) => world.ideology(tag) == Some(i),
                    None => false,
                }
            }
            // `0x73C110`: `0x4A0120` for the slider moved by `value`
            // (`atoi`).
            Trigger::CanChangePolicy { slider, value } => match slider_index(slider) {
                Some(k) => country.is_some_and(|x| {
                    world.can_change_policy(c, k, i64::from(x.policy[k]) - 1 + *value as i64)
                }),
                None => false,
            },
            Trigger::Pair {
                kind,
                first,
                second,
            } => {
                let pick = |s: &Option<String>| match s {
                    Some(t) if world.countries.contains_key(t) => t.clone(),
                    _ => c.to_owned(),
                };
                let (a, b) = (pick(first), pick(second));
                if !self.exists(&a) || !self.exists(&b) {
                    return false;
                }
                match kind {
                    PairKind::Alliance => a != b && world.diplomacy.allied(&a, &b),
                    PairKind::War => world.at_war(&a, &b),
                    PairKind::Access => world.has_access(&b, &a),
                    PairKind::NonAggression => {
                        world.has_treaty(dh_data::diplomacy::TreatyKind::NonAggression, &a, &b)
                    }
                    PairKind::Trade => {
                        world.has_treaty(dh_data::diplomacy::TreatyKind::Trade, &a, &b)
                    }
                    PairKind::Puppet => world
                        .countries
                        .get(&a)
                        .is_some_and(|x| x.sovereign.as_deref() == Some(b.as_str())),
                    // `D_A[B]`: A guarantees B.
                    PairKind::Guarantee => world.guarantees(&a, &b),
                }
            }
            Trigger::Province {
                owned,
                province,
                whose,
            } => {
                let map = if *owned {
                    &world.owner
                } else {
                    &world.controller
                };
                let Some(holder) = u32::try_from(*province).ok().and_then(|p| map.get(&p)) else {
                    return false;
                };
                whose_matches(whose, holder, c, world)
            }
            Trigger::Garrison(g) => {
                if g.area != 0 {
                    return self.unmodelled("garrison");
                }
                let Ok(p) = u32::try_from(g.province) else {
                    return false;
                };
                let mut total = 0i64;
                for u in &world.units {
                    let kind_ok = match g.kind {
                        GarrisonKind::All => true,
                        GarrisonKind::Land => u.unit.branch == Branch::Land,
                        GarrisonKind::Air => u.unit.branch == Branch::Air,
                        GarrisonKind::Naval => u.unit.branch == Branch::Naval,
                    };
                    if u.unit.location != Some(p)
                        || !kind_ok
                        || !whose_matches(&g.owner, &u.owner, c, world)
                    {
                        continue;
                    }
                    total += u.unit.divisions.len() as i64;
                    if total >= g.size {
                        return true;
                    }
                }
                false
            }
            Trigger::Manpower(n) => country.is_some_and(|x| x.stock.manpower > *n),
            Trigger::Technology { country: x, id } => {
                let tag = x.as_deref().unwrap_or(c);
                existing(tag).is_some_and(|x| x.techs.contains(id))
            }
            Trigger::IsTechActive(id) => {
                country.is_some_and(|x| !x.research.deactivated.contains(id))
            }
            Trigger::Relation { which, value } => which
                .as_deref()
                .filter(|t| self.exists(t))
                .is_some_and(|t| f64::from(world.relation(c, t)) >= *value),
            Trigger::Domestic { slider, value } => match slider_index(slider) {
                Some(k) => country.is_some_and(|x| f64::from(x.policy[k]) - 1.0 >= value - 1.0),
                None => false,
            },
            Trigger::Belligerence { country: x, value } => existing(x.as_deref().unwrap_or(c))
                .is_some_and(|x| f64::from(x.belligerence) >= *value),
            Trigger::Attack(t) => {
                self.exists(t)
                    && world.diplomacy.in_war(t)
                    && world.at_war(c, t)
                    && world.diplomacy.wars.iter().any(|w| {
                        w.attackers.iter().any(|m| m == t) && w.defenders.iter().any(|m| m == c)
                    })
            }
            // The defenders of a war are the side it was declared on.
            Trigger::UnderAttack(t) => {
                let x = if world.countries.contains_key(t) {
                    t.as_str()
                } else {
                    c
                };
                self.exists(x)
                    && world.diplomacy.in_war(x)
                    && world
                        .diplomacy
                        .wars
                        .iter()
                        .any(|w| w.defenders.iter().any(|m| m == x))
            }
            Trigger::LostNational { country: x, value } => {
                let tag = x.as_deref().unwrap_or(c);
                let Some(x) = existing(tag) else {
                    return false;
                };
                let (mut n, mut lost) = (0u32, 0u32);
                for (p, owner) in &world.owner {
                    if owner == tag && x.national.contains(p) {
                        n += 1;
                        if world.controller.get(p).is_some_and(|k| k != tag) {
                            lost += 1;
                        }
                    }
                }
                // 0 / 0 compares as true on the FPU.
                n == 0 || f64::from(lost) / f64::from(n) >= value * 0.01
            }
            Trigger::Leader(_)
            | Trigger::Difficulty(_)
            | Trigger::LandPercentage { .. }
            | Trigger::Divisions { .. }
            | Trigger::Unknown { .. } => self.unmodelled(t.key()),
        }
    }
}

impl System for Events {
    fn name(&self) -> &str {
        "events"
    }

    /// Checks due today run in the first hour of the day (the start's
    /// first hour schedules the events if [`Events::start`] did not).
    fn on_hour(&mut self, world: &mut World, rng: &mut Rng) {
        if !self.started {
            self.start(world, rng);
        }
        self.run_due(world, rng);
    }

    /// The countries' invention events.
    fn on_day(&mut self, world: &mut World, rng: &mut Rng) {
        self.invention_checks(world, rng);
    }
}

/// The AI's pick (`0x711DB0`) among the available actions at positions
/// `pos` with chances `chances` (−1 for a missing `ai_chance`), as an
/// index into the event's actions; `rand` gives 15-bit numbers like the
/// game's `rand()`. One available action is taken; with positive chances,
/// `rand() % sum` picks among those (`rule` −3: the first of the
/// largest); with none, `rule` (`misc ai[24]`) decides: −1 any alike, −2
/// / −3 the first, otherwise `rand() % 10000` against thresholds that
/// give the first `rule` percent and the others the rest (the modulo's
/// bias puts the first at 86.28 % for 85).
pub fn choose_action(
    pos: &[usize],
    chances: &[i64],
    rule: i32,
    rand: &mut dyn FnMut() -> u32,
) -> usize {
    let n = pos.len();
    if n == 1 {
        return pos[0];
    }
    let sum: i64 = chances.iter().filter(|&&x| x >= 0).sum();
    if sum > 0 {
        if rule == -3 {
            let mut best = (0, 0);
            for (k, &x) in chances.iter().enumerate() {
                if x > best.0 {
                    best = (x, k);
                }
            }
            return pos[best.1];
        }
        let mut r = i64::from(rand()) % sum;
        for (k, &x) in chances.iter().enumerate() {
            if x > 0 {
                if r < x {
                    return pos[k];
                }
                r -= x;
            }
        }
        return 0;
    }
    if n == 0 {
        return 0;
    }
    match rule {
        -1 => pos[(rand() % n as u32) as usize],
        -2 | -3 => pos[0],
        g => {
            let p = (((100 - g) as f32 / (n - 1) as f32) * 100.0).round_ties_even() as i64;
            let r = i64::from(rand() % 10_000);
            let mut acc = 10_000 - (n as i64 - 1) * p;
            for &k in pos {
                if r <= acc {
                    return k;
                }
                acc += p;
            }
            0
        }
    }
}

/// `rand() % offset` takes the remainder's size from `|offset|`.
fn offset_range(offset: i64) -> u32 {
    offset.unsigned_abs().min(u64::from(u32::MAX)) as u32
}

fn flag(flags: &BTreeMap<String, i32>, f: &FlagTest) -> i64 {
    i64::from(flags.get(&f.name).copied().unwrap_or(0))
}

/// The post a post command (`headofstate` … `chiefofair`) fills.
fn post_command(kind: &str) -> Option<usize> {
    dh_data::ministers::POSTS
        .iter()
        .position(|(k, _)| *k == kind)
}

fn slider_index(name: &str) -> Option<usize> {
    dh_data::policy::SLIDERS
        .iter()
        .position(|s| s.eq_ignore_ascii_case(name.trim()))
}

/// A province of the map (one with an owner or a controller).
fn province(v: f64, world: &World) -> Option<u32> {
    let p = u32::try_from(v as i64).ok()?;
    (world.owner.contains_key(&p) || world.controller.contains_key(&p)).then_some(p)
}

/// Whether `holder` (a province's controller or owner, a stack's owner)
/// is what `whose` asks of country `c` (notes §3.4).
fn whose_matches(whose: &Whose, holder: &str, c: &str, world: &World) -> bool {
    match whose {
        Whose::Tag(t) => holder == t,
        Whose::This => holder == c,
        Whose::Any => true,
        // `0x44B240`: at war and without a non-aggression pact.
        Whose::Enemy => {
            world.at_war(holder, c)
                && !world.has_treaty(dh_data::diplomacy::TreatyKind::NonAggression, holder, c)
        }
        // `0x44A650`: the same country, an ally, overlord or puppet, and
        // not at war.
        Whose::Friendly => {
            let puppet = |a: &str, b: &str| {
                world
                    .countries
                    .get(a)
                    .is_some_and(|x| x.sovereign.as_deref() == Some(b))
            };
            !world.at_war(holder, c)
                && (holder == c
                    || world.diplomacy.allied(holder, c)
                    || puppet(holder, c)
                    || puppet(c, holder))
        }
    }
}

/// A tag as a command names it.
fn tag(s: &Option<String>) -> String {
    s.as_deref()
        .map(|t| t.trim().to_ascii_uppercase())
        .unwrap_or_default()
}

#[cfg(test)]
mod tests {
    use super::*;

    fn db(text: &str) -> Arc<EventDb> {
        let mut db = EventDb::default();
        let mut warnings = Vec::new();
        db.add_text("test.txt", text, &mut warnings);
        assert!(warnings.is_empty(), "{warnings:?}");
        Arc::new(db)
    }

    /// GER holds 1 and 2, FRA 3, ENG 4; 1 January 1936.
    fn world() -> World {
        let mut w = World::empty(GameDate::new(1936, 1, 1));
        for (p, tag) in [(1, "GER"), (2, "GER"), (3, "FRA"), (4, "ENG")] {
            w.countries
                .entry(tag.into())
                .or_insert_with(|| crate::Country::new(tag));
            w.owner.insert(p, tag.into());
            w.controller.insert(p, tag.into());
        }
        w
    }

    fn sim(text: &str, seed: u64) -> (crate::Simulation, Arc<EventDb>) {
        let db = db(text);
        let mut sim = crate::Simulation::new(world(), seed);
        let mut events = Events::new(db.clone());
        events.start(&sim.world, &mut sim.rng);
        sim.add_system(events);
        (sim, db)
    }

    fn sim_events(sim: &crate::Simulation) -> &Events {
        sim.system::<Events>().unwrap()
    }

    #[test]
    fn game_days() {
        assert_eq!(game_day(GameDate::new(1936, 1, 1)), 1936 * 360);
        assert_eq!(
            game_day(GameDate::new(1936, 3, 7)),
            dh_data::events::EventDate {
                year: 1936,
                month: 2,
                day: 6,
                hour: 0
            }
            .day_number()
        );
        assert_eq!(
            game_day(GameDate::new(1936, 1, 31)),
            game_day(GameDate::new(1936, 1, 30))
        );
        assert_eq!(
            game_day(GameDate::new(1936, 3, 1)) - game_day(GameDate::new(1936, 2, 28)),
            3
        );
    }

    #[test]
    fn load_time_shift_stays_within_the_offset() {
        let text = "event = { id = 1 country = GER date = { day = 10 month = january year = 1936 } offset = 20
                       deathdate = { year = 1937 } action_a = { command = { type = dissent value = 1 } } }
                     event = { id = 2 country = GER date = { day = 10 month = january year = 1936 }
                       action_a = { command = { type = dissent value = 1 } } }
                     event = { id = 3 date = { day = 5 month = january year = 1935 } offset = 7 deathdate = { year = 1940 }
                       action_a = { command = { type = dissent value = 1 } } }
                     event = { id = 4 date = { year = 1935 } deathdate = { year = 1935 month = june }
                       action_a = { command = { type = dissent value = 1 } } }
                     event = { id = 5 action_a = { command = { type = dissent value = 1 } } }";
        let base = dh_data::events::EventDate {
            year: 1936,
            month: 0,
            day: 10,
            hour: 0,
        }
        .day_number();
        let mut seen = BTreeSet::new();
        for seed in 0..64 {
            let mut events = Events::new(db(text));
            let w = world();
            events.start(&w, &mut Rng::new(seed));
            let first = events.scheduled(1);
            assert_eq!(first.len(), 1);
            assert!((base..base + 20).contains(&first[0].0), "{first:?}");
            seen.insert(first[0].0);
            // No offset: no shift.
            assert_eq!(events.scheduled(2), [(base, "GER".to_owned())]);
            // A past date: within `offset` days from now, for every country.
            let third = events.scheduled(3);
            assert_eq!(third.len(), 3);
            let today = game_day(w.date);
            assert!(third.iter().all(|(d, _)| (today..today + 7).contains(d)));
            // Past its deathdate, or without any date: never checked.
            assert!(events.scheduled(4).is_empty() && events.scheduled(5).is_empty());
            assert_eq!(events.stats.obsolete, 2);
        }
        assert!(seen.len() > 10, "the shift varies with the seed");
    }

    #[test]
    fn retries_every_offset_days_until_the_deathdate() {
        // Holds from 1 March: checked every 10 days from 5 January.
        let text = "event = { id = 1 country = GER trigger = { month = 2 }
                       date = { day = 4 month = january year = 1936 } offset = 10 deathdate = { day = 4 month = april year = 1936 }
                       action_a = { command = { type = dissent value = 1 } } }
                     event = { id = 2 country = GER trigger = { month = 5 }
                       date = { day = 4 month = january year = 1936 } offset = 10 deathdate = { day = 4 month = april year = 1936 }
                       action_a = { command = { type = dissent value = 1 } } }
                     event = { id = 3 country = GER trigger = { month = 2 }
                       date = { day = 4 month = january year = 1936 }
                       action_a = { command = { type = dissent value = 1 } } }";
        let (mut sim, _) = sim(text, 7);
        sim.run_days(200);
        let e = sim_events(&sim);
        // Event 1: its first check is shifted by up to 9 days; the first
        // check on or after game day March 0 fires.
        assert_eq!(e.fired.len(), 1, "{:?}", e.fired);
        assert_eq!(e.fired[0].id, 1);
        let d = game_day(e.fired[0].date);
        let march = (1936 * 12 + 2) * 30;
        assert!((march..march + 10).contains(&d), "{}", e.fired[0].date);
        // Event 2 never held and stopped at its deathdate; event 3 had a
        // single check.
        assert!(e.scheduled(2).is_empty() && e.scheduled(3).is_empty());
        assert!(e.history.contains(&1) && !e.history.contains(&2));
        assert_eq!(sim.world.countries["GER"].dissent, 1.0);
    }

    #[test]
    fn global_history_and_persistent_events() {
        let text = "event = { id = 1 trigger = { NOT = { country = GER } }
                       date = { day = 1 month = january year = 1936 } offset = 5 deathdate = { year = 1937 }
                       action_a = { command = { type = dissent value = 1 } } }
                     event = { id = 2 country = FRA persistent = yes
                       date = { day = 1 month = january year = 1936 } offset = 30 deathdate = { year = 1937 }
                       action_a = { command = { type = money value = 10 } } }
                     event = { id = 3 country = ENG persistent = yes
                       action_a = { command = { type = money value = 10 } } }
                     event = { id = 4 country = GER trigger = { event = 1 NOT = { event = 2 } }
                       date = { day = 1 month = january year = 1936 } offset = 1 deathdate = { year = 1937 }
                       action_a = { command = { type = trigger which = 3 } command = { type = trigger which = 3 } } }";
        let (mut sim, _) = sim(text, 3);
        sim.run_days(120);
        let e = sim_events(&sim);
        // Event 1 fires for one country only (FRA or ENG), once.
        let ones: Vec<_> = e.fired.iter().filter(|f| f.id == 1).collect();
        assert_eq!(ones.len(), 1);
        assert_ne!(ones[0].country, "GER");
        // Persistent: never in the history (`event = 2` stays false), fires
        // every 30 days.
        let twos = e.fired.iter().filter(|f| f.id == 2).count();
        assert!((3..=5).contains(&twos), "{twos}");
        assert!(!e.history.contains(&2));
        assert_eq!(sim.world.countries["FRA"].stock.money, 10.0 * twos as f64);
        // Event 4 fired once, triggering event 3 twice (persistent, so not
        // blocked by the history); event 3 has no date, so no repeats.
        let threes: Vec<_> = e.fired.iter().filter(|f| f.id == 3).collect();
        assert_eq!(threes.len(), 2);
        assert!(threes.iter().all(|f| f.country == "ENG"));
        assert_eq!(sim.world.countries["ENG"].stock.money, 20.0);
        assert!(e.scheduled(3).is_empty());
    }

    #[test]
    fn sleepevent_blocks_and_hides_an_event() {
        let text = "event = { id = 1 country = GER date = { day = 5 month = january year = 1936 }
                       action_a = { command = { type = sleepevent which = 2 } command = { type = setflag which = one } } }
                     event = { id = 2 country = GER trigger = { flag = one }
                       date = { day = 1 month = january year = 1936 } offset = 1 deathdate = { year = 1937 }
                       action_a = { command = { type = dissent value = 5 } } }
                     event = { id = 3 country = GER trigger = { NOT = { event = 2 } flag = one }
                       date = { day = 1 month = january year = 1936 } offset = 1 deathdate = { year = 1937 }
                       action_a = { command = { type = trigger which = 2 } command = { type = local_setflag which = l value = 7 } } }";
        let (mut sim, _) = sim(text, 1);
        sim.run_days(30);
        let e = sim_events(&sim);
        let ids: Vec<i64> = e.fired.iter().map(|f| f.id).collect();
        // 2 was slept by 1 before its flag came up; slept counts as not
        // happened for 3, and `trigger` cannot wake it.
        assert_eq!(ids, [1, 3]);
        assert!(e.slept.contains(&2) && e.history.contains(&2));
        assert_eq!(sim.world.countries["GER"].dissent, 0.0);
        assert_eq!(sim.world.flags.get("one"), Some(&1));
        assert_eq!(sim.world.countries["GER"].flags.get("l"), Some(&7));
    }

    #[test]
    fn trigger_logic() {
        let db = db("");
        let mut e = Events::new(db);
        let mut w = world();
        w.add_war("GER", "FRA");
        w.flags.insert("f".into(), 3);
        e.refresh(&w);
        let mut rng = Rng::new(1);
        let parse = |s: &str| {
            let doc = dh_text::script::parse_str(s);
            Trigger::And(Trigger::parse_block(&doc.root, &mut BTreeMap::new()))
        };
        let mut holds = |s: &str, c: &str| e.eval(&parse(s), c, &w, &mut rng);
        assert!(holds("", "GER"), "an empty AND holds");
        assert!(!holds("OR = { }", "GER"), "an empty OR fails");
        assert!(holds("NOT = { }", "GER"));
        // NOT of several children is NOR.
        assert!(!holds("NOT = { country = FRA country = GER }", "GER"));
        assert!(holds("NOT = { country = FRA country = ENG }", "GER"));
        assert!(holds(
            "OR = { country = FRA war = { country = GER country = FRA } }",
            "ENG"
        ));
        // `hour` is no trigger of the game: no node, so AND is unaffected,
        // NOT holds and OR alone fails.
        assert!(holds("hour = 5", "GER"));
        assert!(holds("NOT = { hour = 5 }", "GER"));
        assert!(!holds("OR = { hour = 5 }", "GER"));
        // `under_attack`: the country (this one for a tag that is none)
        // defends in a war.
        assert!(holds("under_attack = FRA", "GER"));
        assert!(!holds("under_attack = GER", "FRA"), "GER attacks");
        assert!(holds("OR = { under_attack = FRA }", "ENG"));
        assert!(holds("under_attack = XYZ", "FRA") && !holds("under_attack = XYZ", "ENG"));
        // `atwar = TAG`: TAG at war with anyone, not with this country.
        assert!(holds("atwar = FRA", "ENG"));
        assert!(holds("atwar = yes", "GER") && !holds("atwar = yes", "ENG"));
        // `ispuppet = no` never holds.
        assert!(!holds("ispuppet = no", "GER"));
        assert!(!holds("ispuppet = yes", "GER"));
        // A missing country of a pair is this one.
        assert!(holds("war = { country = FRA }", "GER"));
        assert!(!holds("war = { country = FRA }", "ENG"));
        // Flags: missing ones are 0; `when` compares.
        assert!(holds("flag = f", "GER") && !holds("flag = g", "GER"));
        assert!(holds("flag = { which = f when = 0 value = 3 }", "GER"));
        assert!(holds("flag = { which = f when = 2 value = 2 }", "GER"));
        assert!(!holds("flag = { which = f when = -2 value = 3 }", "GER"));
        assert!(!holds("flag = { which = f when = 7 value = 3 }", "GER"));
        assert!(holds(
            "NOT = { flag = { which = g when = -1 value = -1 } }",
            "GER"
        ));
        // Dates: year / month (0-based) / day (0-based) at least.
        assert!(holds("year = 1936 month = 0 day = 0", "GER"));
        assert!(!holds("month = 1", "GER") && !holds("day = 1", "GER"));
        // `manpower` is strict, `dissent` is not.
        assert!(!holds("manpower = 0", "GER") && holds("dissent = 0", "GER"));
        // Province holders: tag, this country (−1 / 0 / none), enemy, friend.
        assert!(holds("control = { province = 3 data = FRA }", "GER"));
        assert!(holds("control = { province = 1 data = -1 }", "GER"));
        assert!(holds("owned = { province = 1 }", "GER"));
        assert!(holds("control = { province = 3 data = -2 }", "GER"));
        assert!(!holds("control = { province = 4 data = -2 }", "GER"));
        assert!(holds("control = { province = 2 data = -3 }", "GER"));
        assert!(!holds("control = { province = 99 data = -1 }", "GER"));
        // `lost_national` with no national provinces: 0 / 0 holds.
        assert!(holds("lost_national = { value = 50 }", "GER"));
        // AI: everybody unless human.
        assert!(holds("ai = yes", "GER") && !holds("ai = no", "GER"));
        // Governments come from the sliders: the matrix not loaded is NS
        // throughout.
        assert!(holds("government = fascist ideology = nazi", "GER"));
        assert!(!holds(
            "government = { type = democratic country = FRA }",
            "GER"
        ));
        assert!(!holds("ideology = monarchist", "GER"));
        // Unmodelled triggers are false (and counted).
        assert!(!holds("major = yes", "GER"));
        assert!(holds("NOT = { major = yes }", "GER"));
        assert_eq!(e.stats.triggers_unmodelled.get("major"), Some(&2));
        assert_eq!(e.stats.triggers_unmodelled.get("government"), None);
    }

    /// Every 15-bit `rand()` value once: how often each action is picked.
    fn exact(pos: &[usize], chances: &[i64], rule: i32) -> BTreeMap<usize, u32> {
        let mut n = BTreeMap::new();
        for r in 0..32_768u32 {
            let mut calls = 0;
            let mut rand = || {
                calls += 1;
                r
            };
            *n.entry(choose_action(pos, chances, rule, &mut rand))
                .or_insert(0) += 1;
            assert!(calls <= 1);
        }
        n
    }

    #[test]
    fn ai_choice_follows_the_chances() {
        // A single available action is taken whatever its chance.
        assert_eq!(exact(&[2], &[0], 85), BTreeMap::from([(2, 32_768)]));
        // Positive chances: `rand() % sum`; 0 and −1 never win. 32768 =
        // 546 · 60 + 8, so remainders 0..=7 come once more.
        assert_eq!(
            exact(&[0, 1, 2, 3], &[30, 0, 30, -1], 85),
            BTreeMap::from([(0, 8 * 547 + 22 * 546), (2, 30 * 546)])
        );
        // −3: the first of the largest.
        assert_eq!(
            exact(&[0, 1, 2], &[10, 40, 40], -3),
            BTreeMap::from([(1, 32_768)])
        );
        // No chances, rule 85: thresholds 8500 (and 9250) of `rand() %
        // 10000`, whose remainders 0..=2767 come four times: 86.28 % for
        // the first action, then 6.87 % and 6.86 %.
        assert_eq!(
            exact(&[0, 1], &[-1, -1], 85),
            BTreeMap::from([(0, 28_271), (1, 4_497)])
        );
        assert_eq!(
            exact(&[0, 1, 2], &[-1, -1, 0], 85),
            BTreeMap::from([(0, 28_271), (1, 2_250), (2, 2_247)])
        );
        // −1: `rand() % n`; −2: the first.
        assert_eq!(
            exact(&[1, 3], &[-1, -1], -1),
            BTreeMap::from([(1, 16_384), (3, 16_384)])
        );
        assert_eq!(exact(&[1, 3], &[-1, -1], -2), BTreeMap::from([(1, 32_768)]));
        // The positions are indices into the event's actions.
        assert_eq!(
            exact(&[1, 3], &[-1, -1], 100),
            BTreeMap::from([(1, 32_768)])
        );
    }

    #[test]
    fn actions_without_valid_commands_are_not_offered() {
        // Action a has no command, b's command trigger fails, c's `which`
        // is negative: only d can be taken, whatever the chances.
        let text = "event = { id = 1 country = GER date = { day = 2 month = january year = 1936 }
                       action_a = { ai_chance = 90 }
                       action_b = { ai_chance = 90 command = { trigger = { year = 1990 } type = dissent value = 1 } }
                       action_c = { ai_chance = 90 command = { type = sleepminister which = -1 } }
                       action_d = { ai_chance = 0 command = { type = money value = 5 } } }
                     event = { id = 2 country = GER date = { day = 2 month = january year = 1936 }
                       action_a = { name = only } }";
        let (mut sim, _) = sim(text, 5);
        sim.run_days(10);
        let e = sim_events(&sim);
        assert_eq!(
            e.fired.iter().map(|f| (f.id, f.action)).collect::<Vec<_>>(),
            [(1, 3)]
        );
        // An event with no available action does not fire.
        assert!(!e.history.contains(&2));
        assert_eq!(sim.world.countries["GER"].stock.money, 5.0);
    }

    #[test]
    fn commands_change_the_world() {
        let text = "event = { id = 1 country = GER date = { day = 2 month = january year = 1936 }
                       action_a = {
                         command = { type = relation which = FRA value = -150 }
                         command = { type = relation which = FRA value = -100 }
                         command = { type = set_relation which = ENG value = 50.7 }
                         command = { type = money value = -100 }
                         command = { type = dissent value = -5 }
                         command = { type = manpowerpool value = 25 }
                         command = { type = belligerence which = FRA value = 4 }
                         command = { type = belligerence which = GER value = 2 }
                         command = { type = belligerence value = 9 }
                         command = { type = secedeprovince which = GER value = 3 }
                         command = { type = control which = ENG value = 2 }
                         command = { type = secedeprovince which = FRA value = 1 when = 1 }
                         command = { type = secedeprovince which = FRA value = 2 when = 1 }
                         command = { type = addcore which = 3 }
                         command = { type = addcore which = 4 where = FRA }
                         command = { type = removecore which = 4 where = FRA }
                         command = { type = war which = ENG }
                         command = { type = alliance which = FRA }
                         command = { type = access which = FRA }
                         command = { type = set_domestic which = defense_lobby value = 9 }
                         command = { type = domestic which = defense_lobby value = 3 }
                         command = { type = deactivate which = 1010 }
                         command = { type = gain_tech which = 1010 }
                         command = { type = gain_tech which = 1020 }
                         command = { type = research_mod value = 10 }
                         command = { type = ai which = \"x.ai\" }
                         command = { type = HeadOfState which = 7 }
                         command = { type = sleepminister which = 7 }
                       } }
                     event = { id = 2 country = GER date = { day = 4 month = january year = 1936 }
                       action_a = { command = { type = peace which = ENG } command = { type = leave_alliance } } }";
        let (mut sim, _) = sim(text, 2);
        sim.run_days(2);
        let w = &sim.world;
        // +20 for the alliance, then −250; FRA's view rose to −145 when it
        // joined GER's side of the war (queued after the relations).
        assert_eq!(w.relation("GER", "FRA"), -200.0);
        assert_eq!(w.relation("FRA", "GER"), -145.0);
        // The war at once (−400), then `set_relation`'s truncated
        // difference measured before it (+50).
        assert_eq!(w.relation("ENG", "GER"), -150.0);
        assert_eq!(w.relation("GER", "ENG"), -150.0);
        let ger = &w.countries["GER"];
        assert_eq!(
            (ger.stock.money, ger.dissent, ger.stock.manpower),
            (0.0, 0.0, 25.0)
        );
        // Of `which`; nothing without one. The event's war gives GER
        // none, but FRA, entering it as GER's new ally on its first hour,
        // gains 25 for a great power victim.
        assert_eq!(ger.belligerence, 2.0);
        assert_eq!(w.countries["FRA"].belligerence, 4.0 + 25.0);
        assert!(w.at_war("FRA", "ENG") && w.war_allies("GER", "FRA"));
        assert_eq!(
            (w.owner[&3].as_str(), w.controller[&3].as_str()),
            ("GER", "GER")
        );
        // `when = 1`: only what GER holds — province 1 wholly, of 2 only
        // the ownership (ENG controls it).
        assert_eq!(
            (w.owner[&1].as_str(), w.controller[&1].as_str()),
            ("FRA", "FRA")
        );
        assert_eq!(
            (w.owner[&2].as_str(), w.controller[&2].as_str()),
            ("FRA", "ENG")
        );
        assert!(ger.national.contains(&3) && w.countries["FRA"].national.is_empty());
        assert!(w.at_war("GER", "ENG"));
        // FRA's record about GER: `access = { country = GER country = FRA }`.
        assert!(w.diplomacy.allied("GER", "FRA") && w.has_access("FRA", "GER"));
        assert_eq!(ger.policy[5], 10, "within 1..=10");
        // A deactivated technology gives no blueprint.
        assert!(ger.research.deactivated.contains(&1010));
        assert_eq!(ger.research.blueprints, BTreeSet::from([1020]));
        assert!((ger.research.modifier - 1.1).abs() < 1e-6);
        // No minister 7: the minister commands are not valid, and do not run.
        let e = sim_events(&sim);
        assert_eq!(
            e.stats.commands_unmodelled,
            BTreeMap::from([("ai".to_owned(), 1)])
        );
        sim.run_days(2);
        let w = &sim.world;
        // `peace`: GER's whole side; leaving the alliance costs 100.
        assert!(!w.at_war("GER", "ENG") && !w.at_war("FRA", "ENG"));
        assert!(w.diplomacy.wars.is_empty() && !w.diplomacy.allied("GER", "FRA"));
        assert_eq!(w.alliance_members("FRA"), ["FRA"]);
    }

    /// The diplomacy commands: `inherit`, `independence`, `war`,
    /// `end_mastery` and `civil_war` act at once, `make_puppet` after the
    /// action; the `guarantee` trigger reads the guarantees.
    #[test]
    fn diplomacy_commands() {
        let text = "event = { id = 1 country = GER date = { day = 2 month = january year = 1936 }
                       action_a = {
                         command = { type = inherit which = ENG }
                         command = { type = setflag which = gone trigger = { NOT = { exists = ENG } } }
                         command = { type = make_puppet which = FRA }
                         command = { type = setflag which = early trigger = { puppet = { country = FRA country = GER } } }
                         command = { type = independence which = SLO }
                         command = { type = war which = SLO }
                         command = { type = setflag which = war trigger = { war = { country = GER country = SLO } } }
                         command = { type = setflag which = g trigger = { guarantee = { country = FRA country = GER } } }
                         command = { type = setflag which = h trigger = { guarantee = { country = GER country = FRA } } }
                       } }
                     event = { id = 2 country = GER date = { day = 4 month = january year = 1936 }
                       action_a = { command = { type = end_mastery which = FRA } } }
                     event = { id = 3 country = FRA date = { day = 4 month = january year = 1936 }
                       action_a = { command = { type = civil_war which = SPA } } }";
        let mut w = world();
        w.countries.get_mut("GER").unwrap().capital = Some(1);
        w.countries.get_mut("FRA").unwrap().regular_id = Some("SPA".into());
        for p in [5, 6] {
            w.owner.insert(p, "FRA".into());
            w.controller.insert(p, "FRA".into());
        }
        w.revolt = dh_data::Revolt::parse_str(
            "SLO = { minimum = { 2 } capital = 2 } SPA = { minimum = { 5 6 } capital = 5 }",
        );
        w.guarantees
            .insert(("FRA".into(), "GER".into()), GameDate::new(1935, 1, 1));
        let mut sim = crate::Simulation::new(w, 8);
        let mut events = Events::new(db(text));
        events.start(&sim.world, &mut sim.rng);
        sim.add_system(events);
        sim.run_days(2);
        let w = &sim.world;
        let flags: Vec<&str> = w.flags.keys().map(String::as_str).collect();
        assert_eq!(flags, ["g", "gone", "war"]);
        assert!(!w.countries.contains_key("ENG") && w.owner[&4] == "GER");
        assert_eq!(w.countries["GER"].belligerence, 0.5 + 2.5);
        assert_eq!(w.countries["FRA"].sovereign.as_deref(), Some("GER"));
        assert_eq!(w.owner[&2], "SLO");
        assert!(w.at_war("GER", "SLO"));
        sim.run_days(2);
        let w = &sim.world;
        assert!(w.countries["FRA"].sovereign.is_none());
        assert_eq!(w.provinces_owned_by("SPA").collect::<Vec<_>>(), [5, 6]);
        assert!(w.at_war("FRA", "SPA"));
        let e = sim_events(&sim);
        assert!(
            e.stats.commands_unmodelled.is_empty(),
            "{:?}",
            e.stats.commands_unmodelled
        );
    }

    /// Messages a command posts land after the action: neither a later
    /// command's trigger nor an event it `trigger`s sees them, and a
    /// `set_relation` measures from the relation before them.
    #[test]
    fn queued_effects_land_after_the_action() {
        let text = "event = { id = 1 country = GER date = { day = 2 month = january year = 1936 }
                       action_a = {
                         command = { type = dissent value = 20 }
                         command = { type = relation which = ENG value = 30 }
                         command = { type = set_relation which = ENG value = 50 }
                         command = { type = setflag which = early trigger = { dissent = 10 } }
                         command = { type = trigger which = 2 }
                         command = { type = trigger which = 3 }
                         command = { type = setflag which = sync }
                       } }
                     event = { id = 2 country = GER trigger = { dissent = 10 }
                       action_a = { command = { type = setflag which = two } } }
                     event = { id = 3 country = GER trigger = { flag = sync }
                       action_a = { command = { type = setflag which = three } } }
                     event = { id = 4 country = GER trigger = { dissent = 10 }
                       date = { day = 2 month = january year = 1936 }
                       action_a = { command = { type = setflag which = four } } }";
        let (mut sim, _) = sim(text, 6);
        sim.run_days(2);
        let w = &sim.world;
        assert_eq!(w.countries["GER"].dissent, 20.0);
        // 30 from `relation`, then 50 − 0 from `set_relation`.
        assert_eq!(w.relation("GER", "ENG"), 80.0);
        let flags: Vec<&str> = w.flags.keys().map(String::as_str).collect();
        // Event 4, checked after event 1's message, sees the dissent.
        assert_eq!(flags, ["four", "sync"]);
        let ids: Vec<i64> = sim_events(&sim).fired.iter().map(|f| f.id).collect();
        assert_eq!(ids, [1, 4]);
    }

    /// The cabinet commands and triggers (`crate::cabinet` has their rules).
    #[test]
    fn ministers_and_policy_in_events() {
        let text = "event = { id = 1 country = GER trigger = { minister = 3 NOT = { incabinet = 3 } headofstate = 1 }
                       date = { day = 2 month = january year = 1936 }
                       action_a = {
                         command = { type = foreignminister which = 3 }
                         command = { type = setflag which = fm trigger = { incabinet = 3 } }
                         command = { type = sleepminister which = 2 }
                         command = { type = set_domestic which = democratic value = 6.5 }
                         command = { type = setflag which = dem trigger = { government = democratic ideology = social_democrat } }
                         command = { type = change_policy which = free_market value = 2 }
                         command = { type = change_policy which = free_market value = 1 }
                         command = { type = setflag which = no trigger = { can_change_policy = { type = freedom value = 1 } } }
                         command = { type = headofgovernment which = 99 }
                       } }
                     event = { id = 2 country = GER trigger = { minister = 4 }
                       date = { day = 2 month = january year = 1936 }
                       action_a = { command = { type = setflag which = four } } }";
        let db = db(text);
        let mut w = world();
        // Democratic d (1-based) is ideology d − 1.
        let mut m = String::new();
        for r in 0..10 {
            let code = dh_data::Ideology::from_index(9 - r).unwrap().code();
            m.push_str(&[code; 10].join(";"));
            m.push('\n');
        }
        w.ideologies = dh_data::IdeologyMatrix::parse(m.as_bytes());
        w.policies = dh_data::PolicyEffects::parse(
            b"#_POLICY_DEMOCRATIC_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;1\n\
              #_POLICY_POLITICAL_LEFT_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;1\n\
              #_POLICY_FREEDOM_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;2\n\
              #_POLICY_FREE_MARKET_;1\nMANUAL_OR_ BY_INFLUENCE _MOVES;2\n",
        );
        let mut ministers = dh_data::Ministers::default();
        let mut warnings = Vec::new();
        ministers.add_file(
            "ger.csv",
            b"GER;Ruling Cabinet - Start;Name;Pool;Ideology;Personality;Loyalty;Picturename;x\n\
              1;Head of State;Leader;36;NS;Silent Workhorse;High;M1;x\n\
              2;Head of Government;Deputy;36;NS;Silent Workhorse;High;M2;x\n\
              3;Foreign Minister;Diplomat;36;SD;Silent Workhorse;High;M3;x\n\
              4;Foreign Minister;Later;38;SD;Silent Workhorse;High;M3;x\n\
              99;Head of State;Abroad;36;SD;Silent Workhorse;High;M3;x\n",
            &mut warnings,
        );
        let traits = br#"minister = { trait = "Silent Workhorse" position = HeadOfGovernment
            command = { type = production which = production value = 0.05 } }"#;
        let data = crate::cabinet::CabinetData::new(
            dh_data::Personalities::parse(traits),
            dh_data::UnitDb::default(),
            BTreeMap::new(),
        );
        let ger = w.countries.get_mut("GER").unwrap();
        ger.policy = [1, 1, 5, 5, 5, 5, 5];
        ger.cabinet[..2].copy_from_slice(&[Some(1), Some(2)]);
        w.set_ministers(&ministers, data);
        let mut sim = crate::Simulation::new(w, 9);
        let mut events = Events::new(db);
        events.start(&sim.world, &mut sim.rng);
        sim.add_system(events);
        sim.run_days(2);
        let w = &sim.world;
        let ger = &w.countries["GER"];
        // The foreign minister came at once; Deputy slept, and with nobody
        // left for post 1 a made-up minister took it; the democratic
        // slider at 6.5 − 1 = 5.5 → 6 (SD), and the cabinet check at 2.0
        // that follows gave post 0 to Abroad (SD, 0 away) for Leader (NS,
        // 6 away); free market up by 2 is beyond SD's bound (at most 6 in
        // the files) and dropped, up by 1 is taken and bars further
        // changes; then headofgovernment put Abroad in post 1 as well.
        assert_eq!(&ger.cabinet[..3], [Some(99), Some(99), Some(3)]);
        assert!(w.ministers[&2].dead);
        assert_eq!(
            ger.minister_pool.last().map(|e| e.id),
            Some(100),
            "the made-up one"
        );
        assert_eq!(ger.policy[0], 7);
        assert_eq!(ger.policy[3], 6);
        let flags: Vec<&str> = w.flags.keys().map(String::as_str).collect();
        assert_eq!(flags, ["dem", "fm"]);
        let e = sim_events(&sim);
        // Event 2: minister 4 starts in 1938.
        assert_eq!(e.fired.iter().map(|f| f.id).collect::<Vec<_>>(), [1]);
        assert!(
            e.stats.commands_unmodelled.is_empty(),
            "{:?}",
            e.stats.commands_unmodelled
        );
        assert!(e.stats.triggers_unmodelled.is_empty());
    }

    #[test]
    fn random_events_fire_only_for_humans() {
        // The event that fires waits for its choice when the next one is
        // drawn, so the draw takes the other one.
        let text = "event = { id = 1 random = yes action_a = { command = { type = dissent value = 1 } } }
                    event = { id = 2 random = yes action_a = { command = { type = dissent value = 1 } } }";
        let (mut sim, _) = sim(text, 4);
        sim.run_days(1000);
        assert!(sim_events(&sim).fired.is_empty());

        let mut sim = crate::Simulation::new(world(), 4);
        let mut events = Events::new(db(text));
        events.humans.insert("FRA".into());
        events.start(&sim.world, &mut sim.rng);
        sim.add_system(events);
        sim.run_days(2500);
        let e = sim_events(&sim);
        assert!(e.fired.len() >= 2, "{:?}", e.fired);
        assert!(e.fired.iter().all(|f| f.country == "FRA"));
        // The next one comes 200..=599 days after.
        let days: Vec<i64> = e.fired.iter().map(|f| game_day(f.date)).collect();
        assert!(days.windows(2).all(|d| (200..600).contains(&(d[1] - d[0]))));
        assert!(e.fired.windows(2).all(|f| f[0].id != f[1].id));
    }
}
