//! Leaders in play (`docs/spec/land-combat.md` §2.3–2.4): the stored rank and
//! its promotion by date, skill from experience, command limits, HQ
//! influence, and the built-in leader every stack without a real one fights
//! under.
//!
//! Ministers are not modelled, so every country's skill multiplier is 1.0;
//! human players are not either, so every country promotes its leaders by
//! date the way the AI does. Leaders whose `End Year` has passed are not
//! taken out of play (the game marks them unavailable, §2.3.3).

use crate::combat::params;
use crate::movement::MoveContext;
use crate::World;
use dh_data::leaders::traits;
use dh_data::{Branch, Leaders, Vfs};
use std::borrow::Cow;

/// Experience at which each skill level 0..=10 starts (hard-coded in the exe,
/// `0x84A0EC`), with a sentinel above level 10.
pub const SKILL_EXPERIENCE: [f32; 12] = [
    0.0, 10.0, 20.0, 40.0, 80.0, 120.0, 180.0, 250.0, 330.0, 430.0, 600.0, 1e8,
];
/// Rank of a stack's built-in leader, below every real rank.
pub const UNRANKED: u8 = 25;
/// Rank a CSV leader holds before its promotions by date.
const START_RANK: u8 = 3;
/// Division type of headquarters (class 10).
const HQ_KIND: &str = dh_data::unitdb::DIVISION_TYPES[10];

/// A leader as the game keeps it (§2.3.1).
#[derive(Debug, Clone, PartialEq)]
pub struct LeaderState {
    /// `None` for a stack's built-in leader.
    pub id: Option<i64>,
    /// Country tag; empty once retired.
    pub country: String,
    pub branch: Branch,
    /// 0 is the highest; [`UNRANKED`] for a built-in leader.
    pub rank: u8,
    /// Year each rank is reached, by rank.
    pub rank_years: [i32; 4],
    /// Whole skill level, 0..=10.
    pub skill: u8,
    pub max_skill: i32,
    pub experience: f32,
    /// Bit mask of [`dh_data::leaders::traits`].
    pub traits: u32,
    pub retirement_year: Option<i32>,
    /// The stack it commands (index into `World::units`).
    pub unit: Option<usize>,
}

impl LeaderState {
    /// A CSV leader put into play in `year` (§2.3.3): promoted by date from
    /// rank 3, skill clamped to 0..=10 and experience raised to that level.
    pub fn new(data: &dh_data::Leader, year: i32) -> Self {
        let mut leader = LeaderState {
            id: Some(data.id),
            country: data.country.clone(),
            // Every shipped leader has a valid type; anything else is taken as army (assumed).
            branch: data.branch.unwrap_or(Branch::Land),
            rank: START_RANK,
            rank_years: data.rank_years,
            skill: 0,
            max_skill: data.max_skill,
            experience: data.experience,
            traits: data.traits,
            retirement_year: data.retirement_year,
            unit: None,
        };
        leader.set_skill(data.skill);
        leader.promote_by_date(year);
        leader
    }

    /// The leader of a stack without one (§2.3.2): rank 25, no skill, no
    /// traits, the owner's country and the stack's branch. It never gains
    /// experience or rank.
    pub fn built_in(country: &str, branch: Branch) -> Self {
        LeaderState {
            id: None,
            country: country.to_owned(),
            branch,
            rank: UNRANKED,
            rank_years: [3000, 3000, 3000, 1],
            skill: 0,
            max_skill: 1,
            experience: 0.0,
            traits: 0,
            retirement_year: None,
            unit: None,
        }
    }

    pub fn has_trait(&self, mask: u32) -> bool {
        self.traits & mask != 0
    }

    /// Promotion by date (`0x50A060`): the highest rank whose year has come,
    /// if that is above the current rank. Never demotes.
    pub fn promote_by_date(&mut self, year: i32) {
        if let Some(r) = (0..4u8).find(|&r| self.rank_years[r as usize] <= year && self.rank > r) {
            self.rank = r;
        }
    }

    /// Promotion by the player (`0x509F20`): one rank up (nothing at rank 0)
    /// and, unless `without_penalty`, one skill level down, never above the
    /// maximum skill, keeping the progress towards the next level.
    pub fn promote(&mut self, without_penalty: bool) {
        if self.rank == 0 {
            return;
        }
        self.rank -= 1;
        if without_penalty {
            return;
        }
        let progress = self.level_progress();
        if self.skill > 0 {
            self.set_skill(self.skill as i32 - 1);
        }
        if self.skill as i32 > self.max_skill {
            self.set_skill(self.max_skill);
        }
        let s = self.skill as usize;
        self.experience =
            SKILL_EXPERIENCE[s] + (SKILL_EXPERIENCE[s + 1] - SKILL_EXPERIENCE[s]) * progress;
    }

    /// Sets the whole skill level (`0x509D00`), clamped to 0..=10, raising
    /// experience to the start of that level.
    pub fn set_skill(&mut self, skill: i32) {
        self.skill = skill.clamp(0, 10) as u8;
        self.experience = self.experience.max(SKILL_EXPERIENCE[self.skill as usize]);
    }

    /// Progress from the current skill level to the next, 0..=1. Experience
    /// below the level counts as its start (the game also writes that back).
    fn level_progress(&self) -> f32 {
        let s = self.skill as usize;
        let (low, high) = (SKILL_EXPERIENCE[s], SKILL_EXPERIENCE[s + 1]);
        if self.experience < low {
            0.0
        } else if self.experience >= high {
            1.0
        } else {
            (self.experience - low) / (high - low)
        }
    }

    /// Skill level plus progress towards the next one, before the country
    /// multiplier (see [`World::leader_skill`]).
    pub fn skill_level(&self) -> f32 {
        self.skill as f32 + self.level_progress()
    }

    /// Command limit in divisions (`0x50A330`, §2.3.5), by branch and rank;
    /// any rank below 2 counts as rank 3, so a built-in leader gets 1.
    pub fn command_limit(&self) -> u32 {
        let by_rank = match self.branch {
            Branch::Land => params::LAND_COMMAND_LIMIT,
            Branch::Air => params::AIR_COMMAND_LIMIT,
            Branch::Naval => params::NAVAL_COMMAND_LIMIT,
        };
        by_rank[(self.rank as usize).min(3)]
    }

    /// Experience from a battle (`0x509E30` and its caller, §2.3.4). `base`
    /// is the battle's own share (for land `0.01 · base₀ · combat[1]`, with
    /// base₀ not yet known). Raises the skill by at most one level.
    pub fn gain_experience(&mut self, base: f32) {
        if self.id.is_none() {
            return; // built-in leaders never learn
        }
        let mut x = base * params::LEADER_EXPERIENCE;
        if self.has_trait(traits::OLD_GUARD) {
            x /= 3.0;
        }
        let gap = (self.max_skill - self.skill as i32) as f32;
        let mut factor = 1.0 + 0.2 * gap * gap;
        if self.skill as i32 >= self.max_skill {
            factor /= 3.0;
        }
        factor *= match self.rank {
            0 => 0.1,
            1 => 0.33,
            2 => 0.66,
            _ => 1.0,
        };
        self.experience += factor * x;
        if self.experience > SKILL_EXPERIENCE[self.skill as usize + 1]
            && (self.skill as i32) < self.max_skill
        {
            self.set_skill(self.skill as i32 + 1);
        }
    }
}

impl World {
    /// Loads `db/leaders` and assigns them to the stacks (see
    /// [`World::add_leaders`]); returns load warnings and assignment conflicts.
    pub fn load_leaders(&mut self, vfs: &Vfs) -> Result<Vec<String>, String> {
        let mut warnings = Vec::new();
        let leaders = Leaders::load(vfs, &mut warnings).map_err(|e| e.to_string())?;
        let mut notes: Vec<String> = warnings.iter().map(ToString::to_string).collect();
        notes.extend(self.add_leaders(&leaders));
        Ok(notes)
    }

    /// Puts every CSV leader into play with its rank for the current year,
    /// then gives each stack the leader its scenario `leader = N` names
    /// (§2.3.2): the leader takes the stack owner's country; unknown or
    /// already assigned IDs are reported and dropped.
    pub fn add_leaders(&mut self, leaders: &Leaders) -> Vec<String> {
        let year = self.date.year;
        self.leaders = leaders
            .by_id
            .values()
            .map(|l| (l.id, LeaderState::new(l, year)))
            .collect();
        let mut conflicts = Vec::new();
        for i in 0..self.units.len() {
            let Some(id) = self.units[i].unit.leader else {
                continue;
            };
            let unit = &self.units[i];
            match self.leaders.get_mut(&id) {
                None => conflicts.push(format!("{}: invalid leader id {id}", unit.unit.name)),
                Some(l) if l.unit.is_some() => conflicts.push(format!(
                    "{}: leader {id} already commands another unit",
                    unit.unit.name
                )),
                Some(l) => {
                    l.country = unit.owner.clone();
                    l.unit = Some(i);
                    continue;
                }
            }
            self.units[i].unit.leader = None;
        }
        conflicts
    }

    /// The yearly leader pass (§2.3.2–2.3.3): leaders still in a country
    /// are promoted by date, and with `retirement`
    /// (`EnableRetirementYearLeaders`) those whose retirement year has come
    /// leave their stacks and countries.
    pub fn leaders_new_year(&mut self, retirement: bool) {
        let year = self.date.year;
        for leader in self.leaders.values_mut() {
            if retirement && leader.retirement_year.is_some_and(|y| y <= year) {
                if let Some(u) = leader.unit.take() {
                    self.units[u].unit.leader = None;
                }
                leader.country.clear();
            }
            if !leader.country.is_empty() {
                leader.promote_by_date(year);
            }
        }
    }

    /// The leader a stack fights under (`0x51C220`): its own, or the
    /// built-in one when it has none.
    pub fn stack_leader(&self, unit: usize) -> Cow<'_, LeaderState> {
        let u = &self.units[unit];
        match u.unit.leader.and_then(|id| self.leaders.get(&id)) {
            Some(leader) => Cow::Borrowed(leader),
            None => Cow::Owned(LeaderState::built_in(&u.owner, u.unit.branch)),
        }
    }

    fn leader_rank(&self, unit: usize) -> u8 {
        self.units[unit]
            .unit
            .leader
            .and_then(|id| self.leaders.get(&id))
            .map_or(UNRANKED, |l| l.rank)
    }

    /// A leader's skill (`0x509D60`): level plus progress, times its
    /// country's multiplier.
    pub fn leader_skill(&self, leader: &LeaderState) -> f32 {
        let multiplier = self
            .countries
            .get(&leader.country)
            .map_or(1.0, |c| c.leader_skill);
        leader.skill_level() * multiplier
    }

    /// Command limit of a stack's leader.
    pub fn command_limit(&self, unit: usize) -> u32 {
        self.stack_leader(unit).command_limit()
    }

    /// "Within the command limit" (§2.3.5), the condition of every leader
    /// bonus: the stack has no more divisions than its leader's raw limit.
    pub fn within_command_limit(&self, unit: usize) -> bool {
        self.units[unit].unit.divisions.len() <= self.command_limit(unit) as usize
    }

    /// A real headquarters (`0x51C9D0`): an HQ division under a leader of
    /// rank 0 or 1.
    pub fn is_hq(&self, unit: usize) -> bool {
        self.units[unit]
            .unit
            .divisions
            .iter()
            .any(|d| d.kind == HQ_KIND)
            && self.leader_rank(unit) < 2
    }

    /// Whether a stack is under HQ influence (`0x51C8C0`, §2.3.5): it is a
    /// real HQ itself, or its province or a neighbouring one holds a real HQ
    /// of the same owner (allies do not count).
    pub fn under_hq_influence(&self, ctx: &MoveContext, unit: usize) -> bool {
        if self.is_hq(unit) {
            return true;
        }
        let u = &self.units[unit];
        let Some(p) = u.unit.location else {
            return false;
        };
        let near = |q: u32| q == p || ctx.regular_neighbours(p).any(|l| l.to == q);
        self.units
            .iter()
            .enumerate()
            .any(|(i, v)| v.owner == u.owner && v.unit.location.is_some_and(near) && self.is_hq(i))
    }

    /// The stack whose leader ranks highest (`0x527960`): the lowest rank,
    /// the first one on ties. This is how a battle side picks its commander.
    pub fn senior_stack(&self, units: impl IntoIterator<Item = usize>) -> Option<usize> {
        let mut best: Option<(u8, usize)> = None;
        for u in units {
            let rank = self.leader_rank(u);
            if best.is_none_or(|(r, _)| rank < r) {
                best = Some((rank, u));
            }
        }
        best.map(|(_, u)| u)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::movement::{ProvinceInfo, UnitModifiers};
    use crate::UnitState;
    use dh_data::{GameDate, Unit, UnitDb};
    use dh_map::{AdjKind, Adjacency, Link};
    use dh_text::CsvTable;

    const HEADER: &str = "Name;ID;Country;Rank 3 Year;Rank 2 Year;Rank 1 Year;Rank 0 Year;Ideal Rank;Max Skill;Traits;Skill;Experience;Loyalty;Type;Picture;Start Year;End Year;x\n";

    fn leaders(rows: &str) -> Leaders {
        let mut leaders = Leaders::default();
        let mut warnings = Vec::new();
        let table = CsvTable::parse(format!("{HEADER}{rows}").as_bytes());
        leaders.add_table("test.csv", &table, &mut warnings);
        assert!(warnings.is_empty(), "{warnings:?}");
        leaders
    }

    fn csv_leader(row: &str, year: i32) -> LeaderState {
        let leaders = leaders(row);
        LeaderState::new(leaders.by_id.values().next().unwrap(), year)
    }

    fn world(owner: &str, units: &str) -> World {
        let mut world = World::empty(GameDate::new(1936, 1, 1));
        let doc = dh_text::script::parse_str(units);
        world.units = Unit::all_in(&doc.root)
            .into_iter()
            .map(|unit| UnitState::new(owner, unit))
            .collect();
        world
    }

    #[test]
    fn rank_is_promoted_by_date_only() {
        // von Rundstedt: ranks 3..1 from 1930, rank 0 from 1940.
        let row = "von Rundstedt;335;GER;1930;1930;1930;1940;0;8;6;5;0;5;0;L335;1930;1960;x\n";
        let mut l = csv_leader(row, 1936);
        assert_eq!(l.rank, 1);
        l.promote_by_date(1939);
        assert_eq!(l.rank, 1);
        l.promote_by_date(1940);
        assert_eq!(l.rank, 0);
        l.promote_by_date(1930);
        assert_eq!(l.rank, 0);
        // Not yet a major general: still the starting rank 3.
        let late = csv_leader(
            "Abraham;1;GER;1943;1944;1990;1990;3;5;0;2;0;5;0;L1;1943;1960;x\n",
            1936,
        );
        assert_eq!(late.rank, 3);
        assert_eq!(csv_leader(row, 1925).rank, 3);
    }

    #[test]
    fn skill_counts_progress_and_country_multiplier() {
        let mut l = csv_leader(
            "A;1;GER;1930;1990;1990;1990;3;5;0;12;0;5;0;L1;1930;1960;x\n",
            1936,
        );
        // Skill is clamped to 10 and experience raised to that level.
        assert_eq!((l.skill, l.experience), (10, 600.0));
        l.set_skill(2);
        assert_eq!((l.skill, l.experience), (2, 600.0));
        assert_eq!(l.skill_level(), 3.0); // past the next level: full progress
        l.experience = 30.0;
        assert_eq!(l.skill_level(), 2.5);
        l.experience = 5.0;
        assert_eq!(l.skill_level(), 2.0);

        let mut world = World::empty(GameDate::new(1936, 1, 1));
        l.experience = 30.0;
        assert_eq!(world.leader_skill(&l), 2.5);
        world.countries.insert(
            "GER".into(),
            crate::Country {
                leader_skill: 1.2,
                ..crate::Country::new("GER")
            },
        );
        assert_eq!(world.leader_skill(&l), 2.5 * 1.2);
    }

    #[test]
    fn command_limit_by_branch_and_rank() {
        let mut l = LeaderState::built_in("GER", Branch::Land);
        let mut limits = Vec::new();
        for (branch, rank) in [
            (Branch::Land, 0),
            (Branch::Land, 1),
            (Branch::Land, 2),
            (Branch::Land, 3),
            (Branch::Land, UNRANKED),
            (Branch::Air, 0),
            (Branch::Air, UNRANKED),
            (Branch::Naval, 2),
        ] {
            (l.branch, l.rank) = (branch, rank);
            limits.push(l.command_limit());
        }
        assert_eq!(limits, [12, 9, 3, 1, 1, 24, 4, 12]);
    }

    #[test]
    fn experience_raises_skill_one_level_at_a_time() {
        let row = "A;1;GER;1930;1990;1990;1990;3;5;0;2;0;5;0;L1;1930;1960;x\n";
        let mut l = csv_leader(row, 1936);
        assert_eq!((l.rank, l.skill, l.experience), (3, 2, 20.0));
        // 10 · 1.3 · (1 + 0.2 · 3²) = 36.4: past level 3 (40), short of level 4 (80).
        l.gain_experience(10.0);
        assert!((l.experience - 56.4).abs() < 1e-4);
        assert_eq!(l.skill, 3);
        l.gain_experience(1000.0);
        assert_eq!(l.skill, 4);
        // Old guard learns a third as fast; a built-in leader not at all.
        let mut old = csv_leader(&row.replace(";0;2;0;5;", ";512;2;0;5;"), 1936);
        old.gain_experience(10.0);
        assert!((old.experience - (20.0 + 36.4 / 3.0)).abs() < 1e-4);
        let mut dummy = LeaderState::built_in("GER", Branch::Land);
        dummy.gain_experience(1000.0);
        assert_eq!((dummy.skill, dummy.experience), (0, 0.0));
    }

    #[test]
    fn manual_promotion_costs_a_skill_level() {
        let row = "A;1;GER;1930;1930;1990;1990;3;5;0;3;60;5;0;L1;1930;1960;x\n";
        let mut l = csv_leader(row, 1936);
        assert_eq!((l.rank, l.skill), (2, 3));
        l.promote(false);
        // Halfway from level 3 to 4 becomes halfway from level 2 to 3.
        assert_eq!((l.rank, l.skill, l.experience), (1, 2, 30.0));
        l.promote(true);
        assert_eq!((l.rank, l.skill), (0, 2));
        l.promote(false);
        assert_eq!((l.rank, l.skill), (0, 2));
    }

    #[test]
    fn scenario_leaders_are_assigned_once() {
        let mut world = world(
            "CHI",
            "landunit = { name = A location = 1 leader = 7 division = { type = infantry } }\n\
             landunit = { name = B location = 1 leader = 7 division = { type = infantry } }\n\
             landunit = { name = C location = 1 leader = 99 division = { type = infantry } }\n\
             landunit = { name = D location = 1 division = { type = infantry } division = { type = infantry } }\n",
        );
        let conflicts = world.add_leaders(&leaders(
            "Pang;7;CYN;1930;1930;1930;1990;1;5;3;0;0;3;0;L7;1930;1960;x\n",
        ));
        assert_eq!(
            conflicts,
            [
                "B: leader 7 already commands another unit",
                "C: invalid leader id 99"
            ]
        );
        let pang = world.stack_leader(0);
        assert_eq!((pang.id, pang.rank, pang.unit), (Some(7), 1, Some(0)));
        assert_eq!(pang.country, "CHI");
        assert_eq!(pang.command_limit(), 9);
        assert!(
            pang.has_trait(traits::LOGISTICS_WIZARD) && pang.has_trait(traits::DEFENSIVE_DOCTRINE)
        );
        for unit in 1..4 {
            let dummy = world.stack_leader(unit);
            assert_eq!(
                (
                    dummy.id,
                    dummy.rank,
                    dummy.country.as_str(),
                    dummy.command_limit()
                ),
                (None, UNRANKED, "CHI", 1)
            );
            assert_eq!(world.leader_skill(&dummy), 0.0);
        }
        assert!(world.within_command_limit(0) && world.within_command_limit(2));
        assert!(!world.within_command_limit(3));
        assert_eq!(world.senior_stack([3, 2, 0, 1]), Some(0));
        assert_eq!(world.senior_stack([3, 2, 1]), Some(3));
        assert_eq!(world.senior_stack([]), None);
    }

    #[test]
    fn retirement_takes_leaders_off_their_stacks() {
        let mut world = world(
            "GER",
            "landunit = { name = A location = 1 leader = 1 division = { type = infantry } }\n",
        );
        let header = HEADER.replace(";x", ";Retirement Year;x");
        let mut data = Leaders::default();
        let table = CsvTable::parse(
            format!("{header}A;1;GER;1930;1930;1990;1990;3;5;0;3;0;5;0;L1;1930;1960;1937;x\n")
                .as_bytes(),
        );
        data.add_table("test.csv", &table, &mut Vec::new());
        world.add_leaders(&data);
        world.date = GameDate::new(1937, 1, 1);
        world.leaders_new_year(false);
        assert_eq!(world.stack_leader(0).id, Some(1));
        world.leaders_new_year(true);
        assert_eq!(world.stack_leader(0).id, None);
        assert_eq!(world.units[0].unit.leader, None);
        assert!(world.leaders[&1].unit.is_none() && world.leaders[&1].country.is_empty());
    }

    #[test]
    fn hq_influence_reaches_neighbours_of_the_same_owner() {
        // Provinces 1 - 2 - 3 in a row.
        let link = |to| Link {
            to,
            kind: AdjKind::Normal,
            through: None,
        };
        let plain = Some(ProvinceInfo {
            terrain: 0,
            infra: 1.0,
            army_pos: (0, 0),
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
        };
        let mut world = world(
            "GER",
            "landunit = { name = HQ location = 2 leader = 1 division = { type = hq } }\n\
             landunit = { name = A location = 1 division = { type = infantry } }\n\
             landunit = { name = B location = 3 division = { type = infantry } }\n\
             landunit = { name = Far location = 4 division = { type = infantry } }\n\
             landunit = { name = Staff location = 3 division = { type = hq } }\n",
        );
        world.add_leaders(&leaders(
            "A;1;GER;1930;1930;1930;1990;1;5;0;3;0;5;0;L1;1930;1960;x\n",
        ));
        assert!(world.is_hq(0));
        assert!(!world.is_hq(4), "an HQ division without a senior leader");
        let influenced: Vec<bool> = (0..5).map(|u| world.under_hq_influence(&ctx, u)).collect();
        assert_eq!(influenced, [true, true, true, false, true]);
        // Allies do not count.
        world.units[0].owner = "ITA".into();
        assert!(!world.under_hq_influence(&ctx, 1));
        assert!(world.under_hq_influence(&ctx, 0));
    }
}
