//! Research (`docs/spec/research.md`): tech teams in a country's research
//! slots work on technology applications one component after another; a
//! finished application becomes known and its effects apply.
//!
//! Each day, after the rest of the country's day:
//! - projects whose team sits in a slot beyond what the day's base IC
//!   allows ([`World::research_slots`]) are cancelled
//!   ([`World::cancel_excess_projects`]; the game does it in the morning of
//!   its daily country handler `0x4846C0`, right after the day's IC, which
//!   changes nothing here);
//! - with the scenario's `rules = { technology = yes }`, every project
//!   advances ([`World::research_progress`]) and finished ones complete
//!   ([`World::tick_research`]): the technology is known, its blueprint
//!   used up, its effects applied ([`World::apply_tech_commands`]), its
//!   team freed; an AI country then picks new projects. The handler queues
//!   this tick (message 0x190 → `0x485DF0`), so it runs once the rest of
//!   the country's day is over.
//!
//! The research AI ([`World::ai_choose_research`], `0x69C4C0`) follows the
//! game's weighting: the AI file's category weight, divided by the share
//! of the category already known, ×5 with a blueprint, divided for years
//! ahead of the historical one, ×2 for its `preference` list; the best
//! goes to the free team with the most skill plus 10 per matching
//! speciality, slot by slot. Left out: its `endgoal` list (whose use,
//! `0x69C310`, is not known) and `0x6A9A50`. The game calls it after each
//! completed AI project and from the AI's periodic re-planning (`0x69C2F0`,
//! with the `technology` rule), whose period is not known: here that is
//! every day after the tick (it does nothing without a free slot).
//!
//! Every country is played by the AI, so nobody pays tech team salaries;
//! [`World::research_cost`] and the `human` branch of
//! [`World::research_progress`] say what a person would pay. Not modelled:
//! sleeping teams (`sleepteam` / `waketeam`), invention events, buying,
//! stealing and sabotaging technologies, and the levels of nuclear
//! reactors and rocket test sites placed by the scenario (only the
//! production queue's count, [`World::first_site_level`]). Projects are
//! started synchronously within the tick (the game sends the AI's start
//! messages through objects not traced).
//!
//! The game computes on the x87 and rounds to single precision where it
//! stores; the code keeps `f64` for the unstored steps.

use crate::ministers::{COST, TIME};
use crate::{Rng, System, World};
use dh_data::tech::{
    Application, Techs, MAX_COMPONENTS, NUCLEAR_ENGINEERING, NUCLEAR_PHYSICS, ROCKETRY,
};
use dh_data::{Difficulty, GameDate, TechAi, TechTeam, TechTeams};
use std::collections::{BTreeMap, BTreeSet};
use std::sync::Arc;

/// `fistp`: the FPU's default rounding, half to even.
fn fistp(x: f32) -> i32 {
    f64::from(x).round_ties_even() as i32
}

/// A date as hours on the game's 30-day months (`0x42DEE0`): its stored
/// fields (month and day 0-based) as `((year · 12 + month) · 30 + day) ·
/// 24 + hour`.
fn hours(d: GameDate) -> i64 {
    ((i64::from(d.year) * 12 + i64::from(d.month) - 1) * 30 + i64::from(d.day) - 1) * 24
        + i64::from(d.hour)
}

/// Whole days from `b` to `a` as the game counts them (`0x42DEE0`,
/// `0x42E060`: the difference in hours split into years, months, days and
/// hours, then `360 · y + 30 · m + d`).
fn days_between(a: GameDate, b: GameDate) -> i64 {
    (hours(a) - hours(b)) / 24
}

/// 1 January of `year` (`0x42DD60` on the zero date).
fn new_year(year: i32) -> GameDate {
    GameDate::new(year, 1, 1)
}

/// A country's research (`C+0x361A` … `C+0x3950`, `C+0xE860`).
#[derive(Debug, Clone, PartialEq)]
pub struct ResearchState {
    /// Blueprints (`C+0x361A`, the scenario's `blueprints`): their
    /// technologies research `blueprint_bonus` times faster; one is used
    /// up when its technology completes.
    pub blueprints: BTreeSet<i64>,
    /// Technologies that cannot be researched (`C+0x362C`, the scenario's
    /// `deactivate`; `deactivate` commands add to it).
    pub deactivated: BTreeSet<i64>,
    /// Projects in the order of the daily tick (`C+0x3650`).
    pub projects: Vec<Project>,
    /// Team in each research slot (`C+0x3674 + 6k`); a missing entry is
    /// an empty slot.
    pub slots: Vec<Option<i64>>,
    /// Research speed (`C+0xE860`; `country[12]` at the start,
    /// `research_mod` commands raise it): it divides the time.
    pub modifier: f32,
    /// Salaries paid today (`C+0x3950`).
    pub spent: f32,
}

impl ResearchState {
    pub fn new(modifier: f32) -> Self {
        ResearchState {
            blueprints: BTreeSet::new(),
            deactivated: BTreeSet::new(),
            projects: Vec::new(),
            slots: Vec::new(),
            modifier,
            spent: 0.0,
        }
    }

    /// The team in slot `k`.
    pub fn slot(&self, k: usize) -> Option<i64> {
        self.slots.get(k).copied().flatten()
    }

    fn set_slot(&mut self, k: usize, team: Option<i64>) {
        if self.slots.len() <= k {
            self.slots.resize(k + 1, None);
        }
        self.slots[k] = team;
    }

    /// The project of a team (`TT+0xD8`).
    pub fn project_of(&self, team: i64) -> Option<usize> {
        self.projects.iter().position(|p| p.team == team)
    }
}

/// A research project (`0x75A4C0`, 0x42 bytes): a team on an application.
#[derive(Debug, Clone, PartialEq)]
pub struct Project {
    pub tech: i64,
    pub team: i64,
    /// Points of each component (`R+0x24 + 4i`), at most its
    /// [`dh_data::tech::Component::points`]. A new project starts from 0.
    pub progress: [f32; MAX_COMPONENTS],
    /// Whether today's salary was paid (`R+0x16`).
    pub paid: bool,
}

impl Project {
    pub fn new(tech: i64, team: i64) -> Self {
        Project {
            tech,
            team,
            progress: [0.0; MAX_COMPONENTS],
            paid: true,
        }
    }

    /// The component being researched: the first short of its points.
    pub fn current(&self, app: &Application) -> Option<usize> {
        app.components
            .iter()
            .enumerate()
            .find(|(i, c)| c.points() as f32 > self.progress[*i])
            .map(|(i, _)| i)
    }

    /// Whether every component has its points (`0x75AC30`: `_ftol` of each
    /// at least 100 or 200).
    pub fn finished(&self, app: &Application) -> bool {
        app.components
            .iter()
            .enumerate()
            .all(|(i, c)| self.progress[i] as i32 >= c.points())
    }
}

/// Why a technology cannot be researched (`0x759FB0`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TechStatus {
    Researchable = 0,
    Known = 1,
    Deactivated = 2,
    /// A `required` technology is unknown, or none of its `or_required`.
    Locked = 5,
    InResearch = 6,
}

impl World {
    /// Research slots of `tag` (`0x4A2F70`): `min_active_teams` plus one per
    /// `ic_per_team` of its base IC (integer division), within
    /// `min_active_teams..=max_active_teams`.
    pub fn research_slots(&self, tag: &str) -> usize {
        let p = &self.params;
        let Some(c) = self.countries.get(tag) else {
            return 0;
        };
        // The game divides by zero there.
        let extra = (c.base_ic as i32).checked_div(p.ic_per_team).unwrap_or(0);
        let n = (p.min_active_teams + extra)
            .min(p.max_active_teams)
            .max(p.min_active_teams);
        n.max(0) as usize
    }

    /// Where an application stands for `tag` (`0x759FB0`; the filter
    /// `0x759430` takes those that are [`TechStatus::Researchable`]). The
    /// year does not matter (an early start is only slower) and neither do
    /// the teams' specialities.
    pub fn tech_status(&self, techs: &Techs, tag: &str, id: i64) -> TechStatus {
        let Some(c) = self.countries.get(tag) else {
            return TechStatus::Locked;
        };
        if c.techs.contains(&id) {
            return TechStatus::Known;
        }
        if c.research.deactivated.contains(&id) {
            return TechStatus::Deactivated;
        }
        let Some(app) = techs.app(id) else {
            return TechStatus::Locked;
        };
        let or_ok =
            app.or_required.is_empty() || app.or_required.iter().any(|t| c.techs.contains(t));
        if !or_ok || !app.required.iter().all(|t| c.techs.contains(t)) {
            return TechStatus::Locked;
        }
        if c.research.projects.iter().any(|p| p.tech == id) {
            return TechStatus::InResearch;
        }
        TechStatus::Researchable
    }

    /// What `tag` can research, category by category in file order (the
    /// nine category objects through `0x759430`).
    pub fn researchable(&self, techs: &Techs, tag: &str) -> Vec<i64> {
        techs
            .by_category
            .iter()
            .flatten()
            .copied()
            .filter(|&id| self.tech_status(techs, tag, id) == TechStatus::Researchable)
            .collect()
    }

    /// ACTIVATE_TEAM (`0x47C1C0`): puts `team` in slot `k` of `tag`,
    /// cancelling the project of the team it replaces. Like the game's
    /// handler it checks nothing else.
    pub fn activate_team(&mut self, techs: &Techs, tag: &str, k: usize, team: i64) {
        let Some(c) = self.countries.get(tag) else {
            return;
        };
        if let Some(i) = c.research.slot(k).and_then(|t| c.research.project_of(t)) {
            self.cancel_project(techs, tag, i);
        }
        let c = self.countries.get_mut(tag).unwrap();
        c.research.set_slot(k, Some(team));
    }

    /// START_PROJECT (`0x47BB40`): `team` starts on `tech` from scratch,
    /// last in the tick order, unless the team is unknown or already busy;
    /// the technologies its `deactivate` effects name are deactivated at
    /// once. Slots, requirements and years are not checked (the caller's
    /// job). Returns whether it started.
    pub fn start_project(
        &mut self,
        techs: &Techs,
        teams: &TechTeams,
        tag: &str,
        tech: i64,
        team: i64,
    ) -> bool {
        let Some(c) = self.countries.get_mut(tag) else {
            return false;
        };
        if !teams.by_id.contains_key(&team) || c.research.project_of(team).is_some() {
            return false;
        }
        c.research.projects.push(Project::new(tech, team));
        for target in deactivate_targets(techs, tech) {
            c.research.deactivated.insert(target);
        }
        true
    }

    /// CANCEL_PROJECT (`0x47B840`): drops project `index` of `tag` and its
    /// progress, frees its team (which stays in its slot) and takes the
    /// technologies its `deactivate` effects name off the deactivated list.
    pub fn cancel_project(&mut self, techs: &Techs, tag: &str, index: usize) {
        let Some(c) = self.countries.get_mut(tag) else {
            return;
        };
        if index >= c.research.projects.len() {
            return;
        }
        let project = c.research.projects.remove(index);
        for target in deactivate_targets(techs, project.tech) {
            c.research.deactivated.remove(&target);
        }
    }

    /// The start of the day (`0x48489D`): a busy team in a slot at or past
    /// [`World::research_slots`] loses its project and the slot.
    pub fn cancel_excess_projects(&mut self, techs: &Techs, tag: &str) {
        let n = self.research_slots(tag);
        let max = self.params.max_active_teams.max(0) as usize;
        for k in n..max {
            let Some(c) = self.countries.get(tag) else {
                return;
            };
            let Some(i) = c.research.slot(k).and_then(|t| c.research.project_of(t)) else {
                continue;
            };
            self.cancel_project(techs, tag, i);
            self.countries
                .get_mut(tag)
                .unwrap()
                .research
                .set_slot(k, None);
        }
    }

    /// A team's daily salary (`0x75AFD0`): skill · `cost_per_skill`, times
    /// the `MODIFIER_TECH_TEAM_SALARIES` policy factor of its country and,
    /// while it works on `tech`, its cabinet's cost factor for the
    /// category. Only human players pay it ([`World::research_progress`]).
    pub fn research_cost(&self, techs: &Techs, team: &TechTeam, tech: Option<i64>) -> f32 {
        let p = &self.params;
        let mut cost = f64::from(team.skill_within(p.max_team_skill)) * f64::from(p.cost_per_skill);
        if let Some(c) = self.countries.get(&team.country) {
            cost *= f64::from(
                self.policies
                    .factor("MODIFIER_TECH_TEAM_SALARIES", &c.policy),
            );
            if let Some(app) = tech.and_then(|id| techs.app(id)) {
                cost *= f64::from(c.ministers.research[app.category][COST]);
            }
        }
        cost as f32
    }

    /// The level of the first nuclear reactor or rocket test site (by
    /// building index, `dh_data::production::BUILDINGS`) among the
    /// provinces `tag` owns (`0x44E620`, `0x44E670`: the current size in
    /// the first province of the owned list `C+0xE892` that has one; taken
    /// here in province ID order, not the scenario's list order), 0
    /// without one. Only what the production queue built counts.
    pub fn first_site_level(&self, tag: &str, building: usize) -> f32 {
        self.provinces_owned_by(tag)
            .filter_map(|p| self.buildings_built.get(&p))
            .map(|b| b.get(building).copied().unwrap_or(0.0))
            .find(|&l| l > 0.0)
            .unwrap_or(0.0)
    }

    /// One day of project `index` of `tag` (`0x75A5F0`; research.md §3).
    ///
    /// With `D = clamp(f32((0.2f·difficulty + 0.4) · (1/modifier ·
    /// 1/(1 + RESEARCH difficulty)) · cabinet time · MODIFIER_RESEARCH_TIME),
    /// 0.1, 20)` and `S = f32(0.1f·skill + 0.6f)`, doubled when the team
    /// has the component's speciality (plus the site level for rocketry and
    /// nuclear components), the component gains `3 · S / D` points, times
    /// `max(0.1, 1 + days early · pre_historical)` before the historical
    /// year, else (outside rocketry and nuclear components) `min(1 +
    /// days past the next year · post_historical, blueprint_bonus)`, times
    /// `blueprint_bonus` with a blueprint; at most its 100 or 200 points. A
    /// `human` pays the salary first, or without the money works at skill 0.
    pub fn research_progress(
        &mut self,
        techs: &Techs,
        teams: &TechTeams,
        tag: &str,
        index: usize,
        difficulty: f32,
        human: bool,
    ) {
        let Some(c) = self.countries.get(tag) else {
            return;
        };
        let Some(project) = c.research.projects.get(index) else {
            return;
        };
        let Some(app) = techs.app(project.tech) else {
            return;
        };
        let p = &self.params;
        let now = self.date;
        let h = new_year(app.year);
        let early = if h > now { days_between(h, now) } else { 0 };
        let blueprint = c.research.blueprints.contains(&app.id);
        let f_diff = (1.0 / (f64::from(difficulty) + 1.0)) as f32;
        let f_mod = (1.0 / f64::from(c.research.modifier)) as f32;
        let Some(team) = teams.by_id.get(&project.team) else {
            return;
        };
        let mut skill = fistp(team.skill_within(p.max_team_skill));
        let cost = self.research_cost(techs, team, Some(app.id));
        let money = c.stock.money;
        let mut paid = true;
        if human {
            if money < f64::from(cost) {
                paid = false;
                skill = 0;
            } else {
                let c = self.countries.get_mut(tag).unwrap();
                c.research.spent = (f64::from(c.research.spent) + f64::from(cost)) as f32;
                c.stock.money -= f64::from(cost);
            }
        }
        let c = &self.countries[tag];
        let project = &c.research.projects[index];
        let Some(i) = project.current(app) else {
            self.countries.get_mut(tag).unwrap().research.projects[index].paid = paid;
            return;
        };
        let component = app.components[i];
        let cap = component.points() as f32;
        let time = c.ministers.research[app.category][TIME];
        let policy = self.policies.factor("MODIFIER_RESEARCH_TIME", &c.policy);
        let d = ((f64::from(0.2f32) * f64::from(component.difficulty) + 0.4)
            * (f64::from(f_mod) * f64::from(f_diff))
            * f64::from(time)
            * f64::from(policy)) as f32;
        let d = d.clamp(0.1, 20.0);
        let mut s = (f64::from(skill) * f64::from(0.1f32) + f64::from(0.6f32)) as f32;
        if team.has(component.kind) {
            s += s;
        }
        let kind = component.kind;
        if kind == NUCLEAR_PHYSICS || kind == NUCLEAR_ENGINEERING {
            let reactor = dh_data::production::building_index("nuclear_reactor");
            s = (f64::from(self.first_site_level(tag, reactor)) + f64::from(s)) as f32;
        }
        // The rocket site's level joins unrounded.
        let s = if kind == ROCKETRY {
            let site = dh_data::production::building_index("rocket_test");
            f64::from(self.first_site_level(tag, site)) + f64::from(s)
        } else {
            f64::from(s)
        };
        let r = s / f64::from(d);
        let stored = r as f32;
        let mut r = if early > 0 {
            let f = (early as f64 * f64::from(p.pre_historical) + 1.0).max(f64::from(0.1f32));
            r * f
        } else if p.post_historical > 0.0 {
            // This path goes on from the rounded value.
            if kind == ROCKETRY || kind == NUCLEAR_PHYSICS || kind == NUCLEAR_ENGINEERING {
                f64::from(stored)
            } else {
                let next = new_year(app.year + 1);
                let late = if next >= now {
                    0
                } else {
                    days_between(now, next)
                };
                let f = (late as f64 * f64::from(p.post_historical) + 1.0)
                    .min(f64::from(p.blueprint_bonus));
                f * f64::from(stored)
            }
        } else {
            r
        };
        if blueprint {
            r *= f64::from(p.blueprint_bonus);
        }
        r *= 3.0;
        let project = &mut self.countries.get_mut(tag).unwrap().research.projects[index];
        project.paid = paid;
        let x = &mut project.progress[i];
        if r > 0.0 {
            *x = (r + f64::from(*x)) as f32;
        }
        if cap < *x {
            *x = cap;
        }
    }

    /// The daily research tick of `tag` (`0x485DF0`): every project
    /// advances in order, and a finished one completes: its technology is
    /// known, its blueprint used up, its effects applied, its team freed
    /// (and taken out of its slot when no longer available that year);
    /// an AI country (`ai`) then picks new projects at once, which this
    /// day's tick still reaches unless the finished project was the last.
    /// Returns the completed technologies.
    pub fn tick_research(
        &mut self,
        techs: &Techs,
        teams: &TechTeams,
        tag: &str,
        difficulty: f32,
        human: bool,
        ai: Option<&TechAi>,
    ) -> Vec<i64> {
        let mut done = Vec::new();
        let mut i = 0;
        while let Some(c) = self.countries.get(tag) {
            let len = c.research.projects.len();
            if i >= len {
                break;
            }
            // The list node's successor is read before the project runs.
            let has_next = i + 1 < len;
            self.research_progress(techs, teams, tag, i, difficulty, human);
            let project = &self.countries[tag].research.projects[i];
            let finished = techs.app(project.tech).is_some_and(|a| project.finished(a));
            if !finished {
                if !has_next {
                    break;
                }
                i += 1;
                continue;
            }
            let tech = project.tech;
            self.complete_project(techs, teams, tag, i);
            done.push(tech);
            if let Some(ai) = ai {
                self.ai_choose_research(techs, teams, ai, tag);
            }
            if !has_next {
                break;
            }
        }
        done
    }

    /// Completes project `index` of `tag` (the completion branch of
    /// `0x485DF0`).
    fn complete_project(&mut self, techs: &Techs, teams: &TechTeams, tag: &str, index: usize) {
        let year = self.date.year;
        let c = self.countries.get_mut(tag).unwrap();
        let project = c.research.projects.remove(index);
        c.techs.insert(project.tech);
        c.research.blueprints.remove(&project.tech);
        self.apply_tech_commands(tag, techs.commands(project.tech));
        let available = teams
            .by_id
            .get(&project.team)
            .is_some_and(|t| t.available(year));
        if !available {
            let max = self.params.max_active_teams.max(0) as usize;
            let c = self.countries.get_mut(tag).unwrap();
            for k in 0..max.min(c.research.slots.len()) {
                if c.research.slots[k] == Some(project.team) {
                    c.research.slots[k] = None;
                }
            }
        }
    }

    /// The research AI of `tag` (`0x69C4C0`, research.md §6): frees the
    /// slots whose team has no project, then, while slots and candidates
    /// last, starts the best-weighted researchable technology (not in the
    /// AI's `ignore` list) with the best free team that works this year.
    ///
    /// A candidate's weight, in single precision: the category's weight,
    /// divided by `known / (applications + 1)` of its category (infinite
    /// when none is known), ×5 with a blueprint, divided by `30a + 5` when
    /// its year is `a > 2` years ahead or by `10a + 2` when 1 or 2, ×2 when
    /// preferred; the first strictly largest above 0 wins. A team scores
    /// its skill plus 10 per component of its speciality; the first
    /// strictly highest wins. Each pick doubles the known count of its
    /// category for the rest of the call.
    pub fn ai_choose_research(&mut self, techs: &Techs, teams: &TechTeams, ai: &TechAi, tag: &str) {
        let n = self
            .research_slots(tag)
            .min(self.params.max_active_teams.max(0) as usize);
        let year = self.date.year;
        let Some(c) = self.countries.get_mut(tag) else {
            return;
        };
        let mut free = Vec::new();
        for k in 0..n {
            match c.research.slot(k) {
                Some(t) if c.research.project_of(t).is_some() => {}
                Some(_) => {
                    free.push(k);
                    c.research.set_slot(k, None);
                }
                None => free.push(k),
            }
        }
        if free.is_empty() {
            return;
        }
        let max_skill = self.params.max_team_skill;
        let idle = |w: &World, t: &TechTeam| {
            w.countries[tag].research.project_of(t.id).is_none() && t.available(year)
        };
        if !teams.of(tag).any(|t| idle(self, t)) {
            return;
        }
        let total: Vec<usize> = techs.by_category.iter().map(|l| l.len() + 1).collect();
        let mut candidates: Vec<i64> = self
            .researchable(techs, tag)
            .into_iter()
            .filter(|id| !ai.ignore.contains(id))
            .collect();
        let mut known = [0i32; 9];
        for id in &self.countries[tag].techs {
            if let Some(app) = techs.app(*id) {
                known[app.category] += 1;
            }
        }
        let mut used: Vec<i64> = Vec::new();
        while !candidates.is_empty() && !free.is_empty() {
            candidates.retain(|&id| self.tech_status(techs, tag, id) == TechStatus::Researchable);
            let c = &self.countries[tag];
            let mut best: Option<&Application> = None;
            let mut best_w = 0.0f32;
            for app in candidates.iter().filter_map(|&id| techs.app(id)) {
                let cat = app.category;
                let mut w = ai.weights[cat];
                if total[cat] > 0 {
                    w = (f64::from(w) / (f64::from(known[cat]) / total[cat] as f64)) as f32;
                }
                if c.research.blueprints.contains(&app.id) {
                    w = (f64::from(w) * 5.0) as f32;
                }
                let a = app.year - year;
                if a > 2 {
                    w = (f64::from(w) / f64::from(30 * a + 5)) as f32;
                } else if a > 0 {
                    w = (f64::from(w) / f64::from(10 * a + 2)) as f32;
                }
                if ai.preference.contains(&app.id) {
                    w += w;
                }
                if w > best_w {
                    best_w = w;
                    best = Some(app);
                }
            }
            let Some(app) = best else {
                break;
            };
            let mut pick: Option<(i64, f32)> = None;
            for t in teams.of(tag) {
                if !idle(self, t) || used.contains(&t.id) {
                    continue;
                }
                let mut score = t.skill_within(max_skill);
                for component in &app.components {
                    if t.has(component.kind) {
                        score = (f64::from(score) + 10.0) as f32;
                    }
                }
                if pick.is_none_or(|(_, s)| score > s) {
                    pick = Some((t.id, score));
                }
            }
            let Some((team, _)) = pick else {
                break;
            };
            used.push(team);
            let k = free.remove(0);
            let (id, cat) = (app.id, app.category);
            self.activate_team(techs, tag, k, team);
            self.start_project(techs, teams, tag, id, team);
            candidates.retain(|&t| t != id);
            known[cat] <<= 1;
        }
    }
}

/// Technologies a `deactivate` command of `tech`'s effects names.
fn deactivate_targets(techs: &Techs, tech: i64) -> Vec<i64> {
    techs
        .commands(tech)
        .iter()
        .filter(|c| c.kind == "deactivate")
        .filter_map(|c| c.which.as_deref()?.trim().parse().ok())
        .collect()
}

/// The daily research of every country ([`crate::research`]); add it after
/// the other daily systems ([`crate::Economy`], [`crate::Logistics`]…):
/// the game runs the tick once the country's day is over, and the slots
/// follow the day's base IC.
pub struct Research {
    pub techs: Arc<Techs>,
    pub teams: Arc<TechTeams>,
    /// Each country's AI file (`technology` block); a country without one
    /// gets [`TechAi::default`].
    pub ai: BTreeMap<String, TechAi>,
    /// `db/difficulty.csv`; empty means no difficulty modifier.
    pub difficulty: Difficulty,
    pub difficulty_level: usize,
    /// Countries a person plays: they pay salaries and the AI leaves them
    /// alone. Empty: every country is the AI's.
    pub humans: BTreeSet<String>,
    /// Whether the research AI picks projects (off: only projects started
    /// by hand run).
    pub ai_enabled: bool,
}

impl Research {
    pub fn new(techs: Arc<Techs>, teams: Arc<TechTeams>) -> Self {
        Research {
            techs,
            teams,
            ai: BTreeMap::new(),
            difficulty: Difficulty::default(),
            difficulty_level: dh_data::difficulty::NORMAL,
            humans: BTreeSet::new(),
            ai_enabled: true,
        }
    }

    /// The `RESEARCH` difficulty modifier of `tag` (`0x76B8B0(C, 3)`).
    pub fn difficulty_of(&self, world: &World, tag: &str) -> f32 {
        self.difficulty.modifier(
            "RESEARCH",
            self.difficulty_level,
            self.humans.contains(tag),
            world.diplomacy.faction_of(tag),
        )
    }
}

impl System for Research {
    fn name(&self) -> &str {
        "research"
    }

    fn on_day(&mut self, world: &mut World, _rng: &mut Rng) {
        let default_ai = TechAi::default();
        let tags: Vec<String> = world.countries.keys().cloned().collect();
        for tag in tags {
            world.cancel_excess_projects(&self.techs, &tag);
            if !world.rules.technology {
                continue;
            }
            let human = self.humans.contains(&tag);
            let ai = (!human && self.ai_enabled).then(|| self.ai.get(&tag).unwrap_or(&default_ai));
            let difficulty = self.difficulty_of(world, &tag);
            world.countries.get_mut(&tag).unwrap().research.spent = 0.0;
            world.tick_research(&self.techs, &self.teams, &tag, difficulty, human, ai);
            if let Some(ai) = ai {
                world.ai_choose_research(&self.techs, &self.teams, ai, &tag);
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::Country;

    const FARBEN: i64 = 3;
    const KRUPP: i64 = 8;
    const ZUSE: i64 = 5;

    /// Four industry applications (5050 like the game's Basic Machine
    /// Tools) and two land doctrines that exclude each other.
    fn techs() -> Techs {
        let mut t = Techs::default();
        t.add(
            &dh_text::script::parse_str(
                "technology = { category = industry
                   application = { id = 5050 year = 1936
                     component = { type = chemistry difficulty = 5 }
                     component = { type = industrial_engineering difficulty = 5 }
                     component = { type = industrial_engineering difficulty = 5 }
                     component = { type = industrial_engineering difficulty = 6 }
                     component = { type = industrial_engineering difficulty = 7 double_time = yes }
                     effects = { command = { type = industrial_modifier which = total value = 5 } } }
                   application = { id = 5060 year = 1937 required = { 5050 }
                     component = { type = chemistry difficulty = 6 }
                     effects = { command = { type = research_mod value = 5 } } }
                   application = { id = 5310 year = 1936
                     component = { type = mathematics difficulty = 4 }
                     effects = { command = { type = research_mod value = 5 } } }
                   application = { id = 5550 year = 1940 or_required = { 5050 5310 }
                     component = { type = rocketry difficulty = 4 } } }
                 technology = { category = land_doctrines
                   application = { id = 6010 year = 1936
                     component = { type = training difficulty = 3 }
                     effects = { command = { type = deactivate which = 6020 } } }
                   application = { id = 6020 year = 1936
                     component = { type = training difficulty = 3 }
                     effects = { command = { type = deactivate which = 6010 } } } }",
            )
            .root,
        );
        t
    }

    /// Three German teams as in `db/tech/teams/teams_ger.csv`.
    fn teams() -> TechTeams {
        let mut t = TechTeams::default();
        for (id, skill, specialities, start) in [
            (FARBEN, 9.0, vec![3, 12, 5, 11, 18], 1930),
            (ZUSE, 7.0, vec![13, 2, 1], 1935),
            (KRUPP, 9.0, vec![12, 1, 18, 0], 1930),
        ] {
            t.by_id.insert(
                id,
                TechTeam {
                    id,
                    country: "GER".into(),
                    name: format!("team {id}"),
                    picture: String::new(),
                    skill,
                    start_year: start,
                    end_year: 1970,
                    specialities,
                },
            );
            t.by_country.entry("GER".into()).or_default().push(id);
        }
        t
    }

    /// Germany on the first day tick of 1936 with 142 base IC and research
    /// speed 1.05 (one `research_mod` technology).
    fn world() -> World {
        let mut world = World::empty(GameDate::new(1936, 1, 2));
        let mut ger = Country::new("GER");
        ger.base_ic = 142;
        ger.research.modifier = 1.05;
        world.countries.insert("GER".into(), ger);
        world
    }

    fn ger(world: &mut World) -> &mut Country {
        world.countries.get_mut("GER").unwrap()
    }

    /// Runs one project alone and returns the points it gains each day.
    fn gains(world: &mut World, techs: &Techs, tech: i64, team: i64, days: usize) -> Vec<f32> {
        let teams = teams();
        assert!(world.start_project(techs, &teams, "GER", tech, team));
        let mut out = Vec::new();
        for _ in 0..days {
            let before: f32 = ger(world).research.projects[0].progress.iter().sum();
            world.research_progress(techs, &teams, "GER", 0, 0.0, false);
            let after: f32 = ger(world).research.projects[0].progress.iter().sum();
            out.push(after - before);
            world.date = world.date.next_day();
        }
        ger(world).research.projects.clear();
        out
    }

    #[test]
    fn slots_follow_the_base_ic() {
        let mut world = world();
        let slots = |w: &mut World, ic| {
            ger(w).base_ic = ic;
            w.research_slots("GER")
        };
        assert_eq!(slots(&mut world, 142), 5, "1 + 7, at most 5");
        assert_eq!(slots(&mut world, 0), 1);
        assert_eq!(slots(&mut world, 39), 2);
        assert_eq!(slots(&mut world, 60), 4);
        world.params.max_active_teams = 50;
        assert_eq!(slots(&mut world, 142), 8);
        world.params.min_active_teams = 3;
        assert_eq!(slots(&mut world, 0), 3);
    }

    /// research.md §7: 5050 with I.G. Farben (skill 9, every component's
    /// speciality) at research speed 1.05 gains 6.75, 6.75, 6.75, 5.906
    /// and 5.25 a day on its five components and needs 101 days; the
    /// surplus of a day is lost.
    #[test]
    fn basic_machine_tools_take_101_days() {
        let techs = techs();
        let teams = teams();
        let mut world = world();
        assert!(world.start_project(&techs, &teams, "GER", 5050, FARBEN));
        let mut days = 0;
        let mut per_component = Vec::new();
        while !ger(&mut world).research.projects.is_empty() {
            let p = ger(&mut world).research.projects[0].clone();
            let app = techs.app(5050).unwrap();
            let i = p.current(app).unwrap();
            let done = world.tick_research(&techs, &teams, "GER", 0.0, false, None);
            days += 1;
            let gain = match ger(&mut world).research.projects.first() {
                Some(q) => q.progress[i] - p.progress[i],
                None => app.components[i].points() as f32 - p.progress[i],
            };
            if per_component.len() == i {
                per_component.push((gain, 0));
            }
            per_component[i].1 += 1;
            if !done.is_empty() {
                assert_eq!(done, [5050]);
            }
            world.date = world.date.next_day();
        }
        assert_eq!(days, 101);
        let ticks: Vec<i32> = per_component.iter().map(|c| c.1).collect();
        assert_eq!(ticks, [15, 15, 15, 17, 39]);
        for (got, want) in per_component.iter().zip([6.75, 6.75, 6.75, 5.90625, 5.25]) {
            assert!((got.0 - want).abs() < 1e-5, "{per_component:?}");
        }
        let c = ger(&mut world);
        assert!(c.techs.contains(&5050));
        assert!((c.industrial_modifier - 1.05).abs() < 1e-6);
        assert!((c.oil_modifier - 1.05).abs() < 1e-6);
        assert_eq!(c.money_modifier, 1.0);
    }

    #[test]
    fn progress_needs_skill_speciality_and_time() {
        let techs = techs();
        let mut world = world();
        // Krupp lacks chemistry: half the points on the first component.
        let krupp = gains(&mut world, &techs, 5050, KRUPP, 1)[0];
        assert!((krupp - 3.375).abs() < 1e-5, "{krupp}");
        // A blueprint doubles them.
        ger(&mut world).research.blueprints.insert(5050);
        let bp = gains(&mut world, &techs, 5050, FARBEN, 1)[0];
        assert!((bp - 13.5).abs() < 1e-5, "{bp}");
        ger(&mut world).research.blueprints.clear();
        // A slow cabinet and the difficulty lengthen the time.
        ger(&mut world).ministers.research[4][TIME] = 1.5;
        let slow = gains(&mut world, &techs, 5050, FARBEN, 1)[0];
        assert!((slow - 4.5).abs() < 1e-5, "{slow}");
        ger(&mut world).ministers.research[4][TIME] = 1.0;
        let teams = teams();
        world.start_project(&techs, &teams, "GER", 5050, FARBEN);
        world.research_progress(&techs, &teams, "GER", 0, -0.5, false);
        let p = ger(&mut world).research.projects[0].progress[0];
        assert!((p - 3.375).abs() < 1e-5, "{p}");
        ger(&mut world).research.projects.clear();
        // The time is at least 0.1: 3 · 3 / 0.1 a day.
        ger(&mut world).research.modifier = 100.0;
        let fast = gains(&mut world, &techs, 5050, FARBEN, 2);
        assert!((fast[0] - 90.0).abs() < 1e-4, "{fast:?}");
        assert_eq!(fast[1], 10.0, "capped at 100");
    }

    #[test]
    fn early_and_late_research() {
        let techs = techs();
        let mut world = world();
        ger(&mut world).research.modifier = 1.0;
        ger(&mut world).techs.insert(5050);
        // 5060 (1937, chemistry 6) on 2 January 1936: 359 days early.
        let base = 9.0 / ((f64::from(0.2f32) * 6.0 + 0.4) as f32) as f64;
        let early = gains(&mut world, &techs, 5060, FARBEN, 1)[0];
        let want = base * (1.0 + 359.0 * f64::from(-0.00125f32));
        assert!((f64::from(early) - want).abs() < 1e-5, "{early} {want}");
        // From 1 January of the year it is on time…
        world.date = GameDate::new(1937, 1, 1);
        let on_time = gains(&mut world, &techs, 5060, FARBEN, 1)[0];
        assert!((f64::from(on_time) - base).abs() < 1e-5);
        // …at most 0.1 of it long before.
        world.date = GameDate::new(1920, 6, 1);
        let ancient = gains(&mut world, &techs, 5060, FARBEN, 1)[0];
        assert!((f64::from(ancient) - 0.1 * base).abs() < 1e-5, "{ancient}");
        // After the following year it speeds up, at most to the
        // blueprint bonus: 1080 and 1440 days past 1 January 1938.
        world.date = GameDate::new(1941, 1, 1);
        let late = gains(&mut world, &techs, 5060, FARBEN, 1)[0];
        let want = base * (1.0 + 1080.0 * f64::from(0.000925f32));
        assert!((f64::from(late) - want).abs() < 1e-4, "{late} {want}");
        world.date = GameDate::new(1942, 1, 1);
        let capped = gains(&mut world, &techs, 5060, FARBEN, 1)[0];
        assert!((f64::from(capped) - 2.0 * base).abs() < 1e-4, "{capped}");
        // Not rocketry: 5550 (1940) with Zuse (no rocketry), skill 7.
        world.date = GameDate::new(1945, 1, 1);
        let rocket = gains(&mut world, &techs, 5550, ZUSE, 1)[0];
        let s = (7.0 * f64::from(0.1f32) + f64::from(0.6f32)) as f32;
        let d = (f64::from(0.2f32) * 4.0 + 0.4) as f32;
        let want = 3.0 * f64::from((f64::from(s) / f64::from(d)) as f32);
        assert!((f64::from(rocket) - want).abs() < 1e-5, "{rocket} {want}");
        // A rocket test site adds its level to the skill term.
        world.buildings_built.insert(7, [0.0; 11]);
        world.buildings_built.get_mut(&7).unwrap()[10] = 2.0;
        world.owner.insert(7, "GER".into());
        let site = gains(&mut world, &techs, 5550, ZUSE, 1)[0];
        let want = 3.0 * (f64::from(s) + 2.0) / f64::from(d);
        assert!((f64::from(site) - want).abs() < 1e-4, "{site} {want}");
    }

    #[test]
    fn what_can_be_researched() {
        let techs = techs();
        let teams = teams();
        let mut world = world();
        assert_eq!(world.researchable(&techs, "GER"), [5050, 5310, 6010, 6020]);
        assert_eq!(world.tech_status(&techs, "GER", 5060), TechStatus::Locked);
        ger(&mut world).techs.insert(5310);
        ger(&mut world).research.deactivated.insert(6020);
        assert_eq!(world.researchable(&techs, "GER"), [5050, 5550, 6010]);
        ger(&mut world).techs.insert(5050);
        assert_eq!(world.researchable(&techs, "GER"), [5060, 5550, 6010]);
        assert_eq!(world.tech_status(&techs, "GER", 5050), TechStatus::Known);
        assert_eq!(
            world.tech_status(&techs, "GER", 6020),
            TechStatus::Deactivated
        );
        world.start_project(&techs, &teams, "GER", 5060, FARBEN);
        assert_eq!(
            world.tech_status(&techs, "GER", 5060),
            TechStatus::InResearch
        );
        assert_eq!(world.researchable(&techs, "GER"), [5550, 6010]);
    }

    #[test]
    fn starting_cancelling_and_completing() {
        let techs = techs();
        let teams = teams();
        let mut world = world();
        // Starting 6010 deactivates 6020; a busy team takes no second project.
        world.activate_team(&techs, "GER", 0, FARBEN);
        assert!(world.start_project(&techs, &teams, "GER", 6010, FARBEN));
        assert!(!world.start_project(&techs, &teams, "GER", 6020, FARBEN));
        assert!(!world.start_project(&techs, &teams, "GER", 6020, 999));
        assert!(ger(&mut world).research.deactivated.contains(&6020));
        // Replacing the team in its slot cancels the project and its
        // deactivation; the progress is lost.
        world.research_progress(&techs, &teams, "GER", 0, 0.0, false);
        world.activate_team(&techs, "GER", 0, KRUPP);
        let c = ger(&mut world);
        assert!(c.research.projects.is_empty() && c.research.deactivated.is_empty());
        assert_eq!(c.research.slot(0), Some(KRUPP));

        // Completion: known, blueprint used, effects, the team freed but
        // kept in its slot.
        ger(&mut world).research.blueprints.insert(5310);
        world.activate_team(&techs, "GER", 1, ZUSE);
        world.start_project(&techs, &teams, "GER", 5310, ZUSE);
        let mut days = 0;
        while world
            .tick_research(&techs, &teams, "GER", 0.0, false, None)
            .is_empty()
        {
            days += 1;
        }
        let c = ger(&mut world);
        assert!(days > 0 && c.techs.contains(&5310));
        assert!(c.research.blueprints.is_empty() && c.research.projects.is_empty());
        assert!((c.research.modifier - 1.1).abs() < 1e-6);
        assert_eq!(c.research.slot(1), Some(ZUSE));
        // A team past its end year leaves the slot when it finishes.
        let mut teams = teams;
        teams.by_id.get_mut(&KRUPP).unwrap().end_year = 1936;
        world.start_project(&techs, &teams, "GER", 6020, KRUPP);
        ger(&mut world).research.projects[0].progress = [100.0; MAX_COMPONENTS];
        let done = world.tick_research(&techs, &teams, "GER", 0.0, false, None);
        assert_eq!(done, [6020]);
        let c = ger(&mut world);
        assert_eq!(c.research.slot(0), None);
        assert!(c.research.deactivated.contains(&6010));
    }

    #[test]
    fn a_smaller_base_ic_cancels_the_last_slots() {
        let techs = techs();
        let teams = teams();
        let mut world = world();
        for (k, team, tech) in [(0, FARBEN, 5050), (1, ZUSE, 5310)] {
            world.activate_team(&techs, "GER", k, team);
            world.start_project(&techs, &teams, "GER", tech, team);
        }
        world.activate_team(&techs, "GER", 2, KRUPP);
        world.cancel_excess_projects(&techs, "GER");
        assert_eq!(ger(&mut world).research.projects.len(), 2);
        ger(&mut world).base_ic = 10;
        world.cancel_excess_projects(&techs, "GER");
        let c = ger(&mut world);
        assert_eq!(c.research.projects.len(), 1);
        assert_eq!(c.research.projects[0].tech, 5050);
        // Only a busy team loses its slot.
        assert_eq!(c.research.slots, [Some(FARBEN), None, Some(KRUPP)]);
    }

    #[test]
    fn the_ai_spreads_its_picks() {
        let techs = techs();
        let teams = teams();
        let mut world = world();
        ger(&mut world).base_ic = 60;
        ger(&mut world).techs.insert(5050);
        let ai = TechAi::default();
        world.ai_choose_research(&techs, &teams, &ai, "GER");
        // No land doctrine known: infinite weight, first in the list, best
        // skill (the first of two). It deactivates 6020. Then industry
        // (5 / 1 known): 5310 this year beats 5060 next year (÷ 12); Zuse
        // scores 7 + 10 for mathematics. With the known count doubled,
        // 5060 (2.5 / 12) beats 5550 (2.5 / 125) and goes to Krupp; the
        // fourth slot finds no team.
        let picks: Vec<(i64, i64)> = ger(&mut world)
            .research
            .projects
            .iter()
            .map(|p| (p.tech, p.team))
            .collect();
        assert_eq!(picks, [(6010, FARBEN), (5310, ZUSE), (5060, KRUPP)]);
        assert_eq!(
            ger(&mut world).research.slots,
            [Some(FARBEN), Some(ZUSE), Some(KRUPP)]
        );
        // Run again: nothing free, nothing changes.
        world.ai_choose_research(&techs, &teams, &ai, "GER");
        assert_eq!(ger(&mut world).research.projects.len(), 3);

        // Ignored technologies are skipped; preferred ones weigh double;
        // weights per category.
        let mut world2 = self::world();
        ger(&mut world2).base_ic = 20;
        ger(&mut world2).techs.extend([5050, 6020]);
        let ai = TechAi {
            ignore: vec![5310],
            preference: vec![5550],
            weights: [1.0, 1.0, 1.0, 1.0, 30.0, 1.0, 1.0, 1.0, 1.0],
            ..TechAi::default()
        };
        world2.ai_choose_research(&techs, &teams, &ai, "GER");
        // 6010: 1 / (1/3) = 3; 5060: 30 · 5 / 12 = 12.5; 5550: 2 · 150 / 125.
        let picks: Vec<i64> = ger(&mut world2)
            .research
            .projects
            .iter()
            .map(|p| p.tech)
            .collect();
        assert_eq!(picks, [5060, 6010]);
    }

    #[test]
    fn people_pay_salaries() {
        let techs = techs();
        let teams = teams();
        let mut world = world();
        // freedom 2 → −0.16, free market 5 → −0.05 (policy_effects.csv).
        world.policies = dh_data::PolicyEffects::parse(
            b"#_POLICY_DEMOCRATIC_;1;2;3;4;5;6;7;8;9;10;x\n\
              #_POLICY_POLITICAL_LEFT_;1;2;3;4;5;6;7;8;9;10;x\n\
              #_POLICY_FREEDOM_;1;2;3;4;5;6;7;8;9;10;x\n\
              MODIFIER_TECH_TEAM_SALARIES;-0.2;-0.16;-0.12;-0.08;-0.04;0.04;0.08;0.12;0.16;0.2;x\n\
              #_POLICY_FREE_MARKET_;1;2;3;4;5;6;7;8;9;10;x\n\
              MODIFIER_TECH_TEAM_SALARIES;-0.25;-0.2;-0.15;-0.1;-0.05;0.05;0.1;0.15;0.2;0.25;x\n",
        );
        ger(&mut world).policy = [1, 1, 2, 5, 7, 6, 5];
        let farben = &teams.by_id[&FARBEN];
        let cost = world.research_cost(&techs, farben, None);
        assert!((cost - 0.711).abs() < 1e-5, "{cost}");
        ger(&mut world).ministers.research[4][COST] = 2.0;
        let cost = world.research_cost(&techs, farben, Some(5050));
        assert!((cost - 1.422).abs() < 1e-5, "{cost}");

        world.start_project(&techs, &teams, "GER", 5050, FARBEN);
        ger(&mut world).stock.money = 2.0;
        world.research_progress(&techs, &teams, "GER", 0, 0.0, true);
        let c = ger(&mut world);
        assert!((c.stock.money - (2.0 - f64::from(cost))).abs() < 1e-6);
        assert_eq!(c.research.spent, cost);
        assert!(c.research.projects[0].paid);
        // Without the money the team works at skill 0: S = 2 · 0.6.
        let before = c.research.projects[0].progress[0];
        world.research_progress(&techs, &teams, "GER", 0, 0.0, true);
        let c = ger(&mut world);
        assert!(!c.research.projects[0].paid);
        let gain = c.research.projects[0].progress[0] - before;
        assert!((gain - 2.7).abs() < 1e-5, "{gain}");
    }

    #[test]
    fn the_system_runs_with_the_technology_rule() {
        let techs = Arc::new(techs());
        let teams = Arc::new(teams());
        let mut world = world();
        world.date = GameDate::new(1936, 1, 1);
        world.rules.technology = false;
        let mut sim = crate::Simulation::new(world, 1);
        sim.add_system(Research::new(techs.clone(), teams.clone()));
        sim.run_days(3);
        assert!(sim.world.countries["GER"].research.projects.is_empty());
        sim.world.rules.technology = true;
        sim.run_days(1);
        // The AI fills the five slots it can with its three teams.
        let ger = &sim.world.countries["GER"];
        assert_eq!(ger.research.projects.len(), 3);
        assert!(ger.research.projects.iter().all(|p| p.progress[0] == 0.0));
        sim.run_days(1);
        let ger = &sim.world.countries["GER"];
        assert!(ger.research.projects.iter().all(|p| p.progress[0] > 0.0));
    }
}
