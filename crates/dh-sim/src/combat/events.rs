//! What a battle decides for each side before the hour's multipliers
//! (`docs/spec/land-combat.md` §2.4, §3.6, §3.7): its commander, whether it
//! is caught by surprise in the first hour, and combat events.
//!
//! The rolls use the world's [`Rng`] in the game's order (surprise, then
//! the attackers' event, then the defenders'), with `rng.below(n)` standing
//! in for `rand() % n`, and each roll is made exactly when the game makes
//! it, including the ones that cannot succeed. The game updates the
//! commanders as stacks join and leave, and once more every hour after the
//! rolls ([`Combat::begin_hour`]).

use super::Combat;
use crate::battle::{ActiveEvent, BattleSide};
use crate::leaders::LeaderState;
use crate::params::Params;
use crate::{Battle, CombatEvent, Rng, World};
use dh_data::leaders::traits;
use std::borrow::Cow;

/// Hours after the first that a side stays surprised: the battle compares
/// its hour count with a hard-coded 8 once the multipliers are set
/// (`0x4B9850`), so the penalty covers hours 1–9.
pub const SURPRISE_HOURS: u32 = 8;
/// What a Trickster adds to the score in its side's favour, and what a
/// Spotter takes off a score against its own side (`0x4B9500`).
const SURPRISE_TRAIT: f32 = 33.0;
/// Event weights of a side under HQ influence are tripled (`0x4BEBE0`).
const HQ_EVENT_WEIGHT: f32 = 3.0;

/// Weight of one combat event for a side (§3.6), out of 100 per hour once
/// an event comes: `country[16] · 100`, tripled under HQ influence, plus
/// `combat[85] · 100` when the commander has the event's trait;
/// encirclement and breakthrough grow by `combat[232]` per km/h the side's
/// stacks average above `combat[230]`, up to `combat[231]` km/h.
pub fn event_weight(
    p: &Params,
    kind: CombatEvent,
    commander_traits: u32,
    hq: bool,
    speed: f32,
) -> f32 {
    let mut weight = p.event_chance * 100.0;
    if hq {
        weight *= HQ_EVENT_WEIGHT;
    }
    if commander_traits & kind.trait_mask() != 0 {
        weight += p.event_trait;
    }
    let over = speed - p.event_speed_min;
    if matches!(kind, CombatEvent::Encirclement | CombatEvent::Breakthrough) && over > 0.0 {
        weight *= 1.0 + over.min(p.event_speed_range) * p.event_speed_bonus;
    }
    weight
}

impl Combat {
    /// Steps 2–4 of a battle hour up to the multipliers (§3.1). Stacks that
    /// joined or left since the last hour change the commanders first, as
    /// they would have on the spot ([`Combat::muster`]); then surprise in
    /// the first hour, combat events for the attackers and then the
    /// defenders, and last the hourly commander update
    /// ([`Combat::elect_commander`]), so a leader promoted meanwhile takes
    /// over only after this hour's rolls.
    pub(super) fn begin_hour(
        &self,
        world: &World,
        battle: &mut Battle,
        attackers: &[usize],
        defenders: &[usize],
        rng: &mut Rng,
    ) {
        self.muster(world, battle.side_mut(true), attackers);
        self.muster(world, battle.side_mut(false), defenders);
        if battle.hours == 0 && self.surprise {
            self.roll_surprise(world, battle, attackers, defenders, rng);
        }
        if battle.event.is_some_and(|e| world.hour > e.until) {
            battle.event = None;
        }
        if self.events {
            self.roll_event(world, battle, attackers, true, rng);
            self.roll_event(world, battle, defenders, false, rng);
        }
        self.elect_commander(world, battle.side_mut(true), attackers);
        self.elect_commander(world, battle.side_mut(false), defenders);
    }

    /// Stacks joining and leaving a side (§2.4, `0x4BD890`, `0x4BDCE0`):
    /// `stacks` are the side's stacks now, in the order they joined. When
    /// the commander's stack has left, or there is no commander yet, the
    /// best of them takes over; otherwise only a stack that has just joined
    /// can, by ranking strictly higher.
    pub(super) fn muster(&self, world: &World, side: &mut BattleSide, stacks: &[usize]) {
        if side.commander.is_some_and(|c| !stacks.contains(&c)) {
            side.commander = None;
        }
        let anew = side.commander.is_none();
        let candidates: Vec<usize> = stacks
            .iter()
            .copied()
            .filter(|u| anew || !side.stacks.contains(u))
            .collect();
        self.promote_commander(world, side, &candidates);
        side.stacks = stacks.to_vec();
    }

    /// The hourly commander update (`0x4BD860`, §2.4): `stacks` are the
    /// side's stacks in the order they joined. When the commander's stack
    /// has left, the side elects anew; a stack's leader takes over only if
    /// it ranks strictly higher, so ties keep the stack that came first.
    pub(super) fn elect_commander(&self, world: &World, side: &mut BattleSide, stacks: &[usize]) {
        if side.commander.is_some_and(|c| !stacks.contains(&c)) {
            side.commander = None;
        }
        self.promote_commander(world, side, stacks);
    }

    /// Makes each candidate in turn the commander if there is none or its
    /// leader ranks strictly higher. The side's country follows the
    /// commander when the commander has one.
    fn promote_commander(&self, world: &World, side: &mut BattleSide, candidates: &[usize]) {
        let rank = |u: usize| self.leader(world, u).rank;
        for &u in candidates {
            if side.commander.is_none_or(|c| rank(u) < rank(c)) {
                side.commander = Some(u);
                let leader = self.leader(world, u);
                if !leader.country.is_empty() {
                    side.country = Some(leader.country.clone());
                }
            }
        }
    }

    /// The leader a side counts on for surprise (§3.7): the lowest
    /// `10·rank − 2·[Trickster] − [Spotter] − 0.1·skill` over its stacks,
    /// the first on ties.
    fn surprise_leader<'w>(
        &self,
        world: &'w World,
        stacks: &[usize],
    ) -> Option<Cow<'w, LeaderState>> {
        let mut best = None;
        let mut lowest = 100_000f32;
        for &u in stacks {
            let leader = self.leader(world, u);
            // The game stores the first two terms as f32, subtracts the rest
            // in double precision and keeps the minimum as f32.
            let mut score = f32::from(leader.rank) * 10.0;
            if leader.has_trait(traits::TRICKSTER) {
                score -= 2.0;
            }
            let mut score = f64::from(score);
            if leader.has_trait(traits::SPOTTER) {
                score -= 1.0;
            }
            score -= 0.1 * f64::from(world.leader_skill(&leader));
            if score < f64::from(lowest) {
                lowest = score as f32;
                best = Some(leader);
            }
        }
        best
    }

    /// Who may be surprised and the chance in 1000 (`0x4B9500`, §3.7):
    /// `true` for the attackers. The score starts from the two countries'
    /// land surprise, gains the skill of the attackers' best leader (and 33
    /// for a Trickster) and loses the defenders'. Below 0 the attackers may
    /// be caught, above 0 the defenders, unless their best leader is a
    /// Spotter (33 off). `None` when nothing is rolled: a side's country is
    /// unknown or the score is exactly 0.
    pub(super) fn surprise_odds(
        &self,
        world: &World,
        battle: &Battle,
        attackers: &[usize],
        defenders: &[usize],
    ) -> Option<(bool, i64)> {
        let country = |attacking: bool| {
            let tag = battle.side(attacking).country.as_ref()?;
            world.countries.get(tag)
        };
        let (a, d) = (country(true)?, country(false)?);
        let mut s = (a.land_surprise - 1.0) * 100.0 - (d.land_surprise - 1.0) * 100.0;
        let best_a = self.surprise_leader(world, attackers);
        let best_d = self.surprise_leader(world, defenders);
        let has = |l: &Option<Cow<LeaderState>>, t: u32| l.as_ref().is_some_and(|l| l.has_trait(t));
        if let Some(l) = &best_a {
            s += world.leader_skill(l);
        }
        if has(&best_a, traits::TRICKSTER) {
            s += SURPRISE_TRAIT;
        }
        if let Some(l) = &best_d {
            s -= world.leader_skill(l);
        }
        if has(&best_d, traits::TRICKSTER) {
            s -= SURPRISE_TRAIT;
        }
        let (attacking, chance) = if s < 0.0 {
            if has(&best_a, traits::SPOTTER) {
                s += SURPRISE_TRAIT;
            }
            (true, -s)
        } else if s > 0.0 {
            if has(&best_d, traits::SPOTTER) {
                s -= SURPRISE_TRAIT;
            }
            (false, s)
        } else {
            return None;
        };
        // Rounded half to even, like the x87 in its default mode.
        Some((attacking, chance.round_ties_even() as i64))
    }

    /// Rolls surprise (first hour only) and marks the side caught; one roll
    /// of `rng` whenever [`Combat::surprise_odds`] gives odds, even hopeless
    /// ones.
    pub(super) fn roll_surprise(
        &self,
        world: &World,
        battle: &mut Battle,
        attackers: &[usize],
        defenders: &[usize],
        rng: &mut Rng,
    ) {
        if let Some((attacking, chance)) = self.surprise_odds(world, battle, attackers, defenders) {
            if i64::from(rng.below(1000)) < chance {
                battle.side_mut(attacking).surprised = true;
            }
        }
    }

    /// Average speed of a side's stacks where they stand (`+0x78` of each
    /// stack, §3.6).
    fn average_speed(&self, world: &World, stacks: &[usize]) -> f32 {
        if stacks.is_empty() {
            return 0.0;
        }
        let total: f32 = stacks
            .iter()
            .map(|&u| {
                let unit = &world.units[u];
                let p = unit.unit.location.unwrap_or(0);
                let supply = if self.supply {
                    world.supply_speed_factor(&self.ctx, unit.controller(), p)
                } else {
                    1.0
                };
                self.ctx.stack_speed(&unit.unit.divisions, p, supply)
            })
            .sum();
        total / stacks.len() as f32
    }

    /// A side's chance of a combat event this hour (`0x4BEBE0`, §3.6).
    /// Nothing happens while an event is in force or without a known side
    /// country. Otherwise one roll in 1000 against the square of the
    /// commander's skill decides whether an event comes; if one does, the
    /// side's own events are tried in order with one roll in 100 each
    /// against [`event_weight`] (whole part), and the first that passes is
    /// in force for this hour and the next `event_hours`.
    pub(super) fn roll_event(
        &self,
        world: &World,
        battle: &mut Battle,
        stacks: &[usize],
        attacking: bool,
        rng: &mut Rng,
    ) {
        let p = &world.params;
        let side = battle.side(attacking);
        let known = side
            .country
            .as_ref()
            .is_some_and(|c| world.countries.contains_key(c));
        if battle.event.is_some() || !known {
            return;
        }
        let Some(commander) = side.commander else {
            return;
        };
        let commander = self.leader(world, commander);
        let skill = world.leader_skill(&commander);
        let hq = stacks.iter().any(|&u| self.under_hq_influence(world, u));
        let mut chance = skill * skill;
        if hq {
            chance *= p.event_hq_chance;
        }
        let speed = self.average_speed(world, stacks);
        if rng.below(1000) as f32 >= chance {
            return;
        }
        for kind in CombatEvent::ALL {
            if kind.defensive() == attacking {
                continue;
            }
            let weight = event_weight(&world.params, kind, commander.traits, hq, speed);
            if i64::from(rng.below(100)) < weight as i64 {
                battle.event = Some(ActiveEvent {
                    kind,
                    until: world.hour + p.event_hours,
                });
                return;
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::combat::tests::{combat, lead, map, stack, world};
    use crate::movement::terrain;
    use dh_map::AdjKind;

    /// A battle for province 1 whose sides already have their commanders.
    fn battle(combat: &Combat, world: &World, attackers: &[usize], defenders: &[usize]) -> Battle {
        let mut battle = Battle::new(1, attackers.to_vec(), world.hour);
        combat.elect_commander(world, battle.side_mut(true), attackers);
        combat.elect_commander(world, battle.side_mut(false), defenders);
        battle
    }

    #[test]
    fn commanders_go_by_rank_then_by_join_order() {
        let mut world = world();
        let combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        let s: Vec<usize> = (0..4)
            .map(|_| stack(&mut world, "GER", 2, &["infantry"]))
            .collect();
        let mut side = BattleSide::default();
        combat.elect_commander(&world, &mut side, &s[..1]);
        assert_eq!(side.commander, Some(s[0]));
        assert_eq!(side.country.as_deref(), Some("GER"));
        // Any real leader outranks the built-in one; equal ranks keep the
        // stack that joined first.
        lead(&mut world, s[1], 2, 0, 0);
        lead(&mut world, s[2], 2, 0, 0);
        combat.elect_commander(&world, &mut side, &s[..3]);
        assert_eq!(side.commander, Some(s[1]));
        // A promotion takes over only with a strictly higher rank.
        world.leaders.get_mut(&(1000 + s[2] as i64)).unwrap().rank = 1;
        combat.elect_commander(&world, &mut side, &s[..3]);
        assert_eq!(side.commander, Some(s[2]));
        world.leaders.get_mut(&(1000 + s[1] as i64)).unwrap().rank = 1;
        combat.elect_commander(&world, &mut side, &s[..3]);
        assert_eq!(side.commander, Some(s[2]));
        // The commander's stack leaves: the best of the rest, first on ties.
        combat.elect_commander(&world, &mut side, &[s[0], s[1], s[3]]);
        assert_eq!(side.commander, Some(s[1]));
        // A commander without a country leaves the side's country as it was.
        lead(&mut world, s[3], 0, 0, 0);
        world
            .leaders
            .get_mut(&(1000 + s[3] as i64))
            .unwrap()
            .country = String::new();
        side.country = Some("ITA".into());
        combat.elect_commander(&world, &mut side, &s);
        assert_eq!(
            (side.commander, side.country.as_deref()),
            (Some(s[3]), Some("ITA"))
        );
        // The side is gone.
        combat.elect_commander(&world, &mut side, &[]);
        assert_eq!(side.commander, None);
    }

    #[test]
    fn surprise_odds_follow_the_best_leaders() {
        let mut world = world();
        let mut combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        let a = stack(&mut world, "GER", 2, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        let odds = |combat: &Combat, world: &World, att: &[usize], def: &[usize]| {
            combat.surprise_odds(world, &battle(combat, world, att, def), att, def)
        };
        // Built-in leaders on both sides of two ordinary countries: 0, no roll.
        assert_eq!(odds(&combat, &world, &[a], &[d]), None);

        // The spec's example: skill 5 with Trickster against skill 2.
        lead(&mut world, a, 3, 5, traits::TRICKSTER);
        lead(&mut world, d, 3, 2, 0);
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((false, 36)));
        // The other way round the attackers may be caught; a Spotter of
        // theirs takes 33 off.
        lead(&mut world, a, 3, 2, 0);
        lead(&mut world, d, 3, 5, traits::TRICKSTER);
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((true, 36)));
        lead(&mut world, a, 3, 2, traits::SPOTTER);
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((true, 3)));

        // Rank comes first: a rank-2 leader without skill outweighs a
        // rank-3 Trickster of skill 9 on the same side.
        lead(&mut world, d, 3, 0, 0);
        lead(&mut world, a, 3, 9, traits::TRICKSTER);
        let second = stack(&mut world, "GER", 3, &["infantry"]);
        lead(&mut world, second, 2, 0, 0);
        assert_eq!(odds(&combat, &world, &[a, second], &[d]), None);
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((false, 42)));

        // Fractional skill (2.5) rounds half to even; 3.5 rounds up.
        lead(&mut world, a, 3, 2, 0);
        world
            .leaders
            .get_mut(&(1000 + a as i64))
            .unwrap()
            .experience = 30.0;
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((false, 2)));
        lead(&mut world, a, 3, 3, 0);
        world
            .leaders
            .get_mut(&(1000 + a as i64))
            .unwrap()
            .experience = 60.0;
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((false, 4)));

        // Skill counts with the country's multiplier: 5 · 2.
        lead(&mut world, a, 3, 5, 0);
        world.countries.get_mut("GER").unwrap().leader_skill = 2.0;
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((false, 10)));
        world.countries.get_mut("GER").unwrap().leader_skill = 1.0;

        // Country surprise (`country[32]`, e.g. with cryptography) counts
        // per point above 1.0 in hundredths.
        lead(&mut world, a, 3, 0, 0);
        world.countries.get_mut("GER").unwrap().land_surprise = 1.15;
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((false, 15)));
        // Without leaders only the countries count.
        combat.leaders = false;
        assert_eq!(odds(&combat, &world, &[a], &[d]), Some((false, 15)));
        // An unknown side country: no roll.
        world.countries.remove("FRA");
        assert_eq!(odds(&combat, &world, &[a], &[d]), None);
    }

    #[test]
    fn surprise_is_rolled_once_and_lasts_nine_hours() {
        let mut world = world();
        let mut combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        combat.events = false;
        let a = stack(&mut world, "GER", 2, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        world.units[a].route.push_back(1);
        for u in [a, d] {
            world.units[u].unit.divisions[0].organisation = Some(1000.0);
        }
        // A rank-2 skill-5 Trickster leads the attack: 5 + 33 = 38 in 1000.
        lead(&mut world, a, 2, 5, traits::TRICKSTER);
        let mut rng = Rng::new(7);
        let caught = (0..20_000)
            .filter(|_| {
                let mut b = battle(&combat, &world, &[a], &[d]);
                combat.roll_surprise(&world, &mut b, &[a], &[d], &mut rng);
                assert!(!b.side(true).surprised);
                b.side(false).surprised
            })
            .count();
        assert!((650..=870).contains(&caught), "{caught} of 20000");

        // A country surprise of 11 makes it certain: the defenders fight at
        // 80 % in hours 1–9 and never again, as surprise is rolled in the
        // first hour only.
        world.countries.get_mut("GER").unwrap().land_surprise = 11.0;
        let mut battle = Battle::new(1, vec![a], 0);
        let mut surprised = Vec::new();
        for _ in 0..12 {
            assert_eq!(combat.round(&mut world, &mut battle, &mut rng), None);
            surprised.push(battle.side(false).surprised);
        }
        let mut expected = vec![true; 8];
        expected.resize(12, false);
        assert_eq!(surprised, expected);
        assert_eq!(battle.hours, 12);
        let mut b = Battle::new(1, vec![a], 0);
        b.side_mut(false).surprised = true;
        let fighters = combat.fighters(&world, &[d], &[a], &b, false);
        assert!((fighters[0].defence_mult - 0.8).abs() < 1e-6);
        let fighters = combat.fighters(&world, &[a], &[d], &b, true);
        assert!((fighters[0].defence_mult - 1.25).abs() < 1e-6); // skill only

        // However certain, it is not rolled again after the first hour.
        for hours in [1, 5, 9, 10] {
            let mut b = Battle::new(1, vec![a], 0);
            b.hours = hours;
            combat.begin_hour(&world, &mut b, &[a], &[d], &mut rng);
            assert!(!b.side(false).surprised, "hour {hours}");
        }

        // Switched off, nobody is surprised.
        combat.surprise = false;
        let mut battle = Battle::new(1, vec![a], 0);
        combat.round(&mut world, &mut battle, &mut rng);
        assert!(!battle.sides.iter().any(|s| s.surprised));
    }

    /// The hour's rolls go by the commanders as stacks joined and left, and
    /// the hourly update comes after them (§3.1 steps 2–4).
    #[test]
    fn rolls_come_before_the_hourly_commander_update() {
        let mut world = world();
        let mut combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        combat.surprise = false;
        let a1 = stack(&mut world, "GER", 2, &["infantry"]);
        let a2 = stack(&mut world, "GER", 3, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        // A1 (rank 2) is certain to see an event come: skill 10 · 10;
        // A2 (rank 3) has no skill.
        lead(&mut world, a1, 2, 10, 0);
        lead(&mut world, a2, 3, 0, 0);
        world.countries.get_mut("GER").unwrap().leader_skill = 10.0;
        let mut battle = Battle::new(1, vec![a1, a2], 0);
        let mut rng = Rng::new(1);
        // Rolls each `begin_hour` makes: A1's are the one in 1000 for
        // whether an event comes and four in 100 for its events (none is
        // drawn with this seed), plus one for the defenders' built-in
        // commander; a commander without skill rolls once.
        let hour = |battle: &mut Battle, world: &World, stacks: &[usize], rng: &mut Rng| {
            let mut counted = rng.clone();
            combat.begin_hour(world, battle, stacks, &[d], rng);
            assert_eq!(battle.event, None);
            (0..100)
                .position(|_| counted.next_u64() == rng.clone().next_u64())
                .unwrap()
        };
        assert_eq!(hour(&mut battle, &world, &[a1, a2], &mut rng), 6);
        assert_eq!(battle.side(true).commander, Some(a1));
        // A2 is promoted over A1 between hours: A1 still rolls for this
        // hour, and A2 takes over after.
        world.leaders.get_mut(&(1000 + a2 as i64)).unwrap().rank = 1;
        assert_eq!(hour(&mut battle, &world, &[a1, a2], &mut rng), 6);
        assert_eq!(battle.side(true).commander, Some(a2));
        assert_eq!(hour(&mut battle, &world, &[a1, a2], &mut rng), 2);
        // A newcomer of higher rank takes over as it joins, before the
        // rolls; one of equal rank does not.
        let a3 = stack(&mut world, "GER", 3, &["infantry"]);
        lead(&mut world, a3, 1, 10, 0);
        assert_eq!(hour(&mut battle, &world, &[a1, a2, a3], &mut rng), 2);
        assert_eq!(battle.side(true).commander, Some(a2));
        let a4 = stack(&mut world, "GER", 3, &["infantry"]);
        lead(&mut world, a4, 0, 10, 0);
        assert_eq!(hour(&mut battle, &world, &[a1, a2, a3, a4], &mut rng), 6);
        assert_eq!(battle.side(true).commander, Some(a4));
        // When the commander's stack leaves, the best of the rest takes
        // over at once: A2 and A3 tie, and A2 joined first.
        assert_eq!(hour(&mut battle, &world, &[a1, a2, a3], &mut rng), 2);
        assert_eq!(battle.side(true).commander, Some(a2));
    }

    #[test]
    fn attackers_roll_their_event_before_the_defenders() {
        let mut world = world();
        let mut combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        combat.surprise = false;
        let a = stack(&mut world, "GER", 2, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        // Both commanders are certain to see an event come and have every
        // event trait (weight 6 each).
        let all = CombatEvent::ALL
            .iter()
            .fold(0, |mask, e| mask | e.trait_mask());
        lead(&mut world, a, 1, 10, all);
        lead(&mut world, d, 1, 10, all);
        for tag in ["GER", "FRA"] {
            world.countries.get_mut(tag).unwrap().leader_skill = 10.0;
        }
        let alone = |attacking: bool, seed: u64| {
            let mut b = battle(&combat, &world, &[a], &[d]);
            let stacks = if attacking { [a] } else { [d] };
            combat.roll_event(&world, &mut b, &stacks, attacking, &mut Rng::new(seed));
            b.event.map(|e| e.kind)
        };
        // A seed under which either side alone would draw an event: the
        // attackers roll first, and theirs is the one in force.
        let seed = (0..1000)
            .find(|&s| alone(true, s).is_some() && alone(false, s).is_some())
            .unwrap();
        let mut b = Battle::new(1, vec![a], 0);
        combat.begin_hour(&world, &mut b, &[a], &[d], &mut Rng::new(seed));
        assert_eq!(b.event.map(|e| e.kind), alone(true, seed));
    }

    #[test]
    fn hq_influence_and_speed_raise_the_event_weights() {
        let mut world = world();
        let combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        let slow = stack(&mut world, "GER", 2, &["infantry"]);
        let fast = stack(&mut world, "GER", 3, &["armor"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        // Events certain to come (skill 10 · 10); without traits each of
        // the four attackers' events weighs 1.
        lead(&mut world, slow, 1, 10, 0);
        lead(&mut world, fast, 1, 10, 0);
        world.countries.get_mut("GER").unwrap().leader_skill = 10.0;
        let mut rng = Rng::new(13);
        let mut counts = |world: &World, stack: usize| {
            let mut counts = [0u32; 7];
            for _ in 0..20_000 {
                let mut b = battle(&combat, world, &[stack], &[d]);
                combat.roll_event(world, &mut b, &[stack], true, &mut rng);
                if let Some(e) = b.event {
                    counts[e.kind as usize] += 1;
                }
            }
            counts
        };
        let total = |counts: [u32; 7]| counts.iter().sum::<u32>();
        // About 3.9 % of the hours bring an event; next to a real German
        // HQ the weights triple, to about 11.5 %.
        assert!((650..=950).contains(&total(counts(&world, slow))));
        let hq = stack(&mut world, "GER", 2, &["hq"]);
        lead(&mut world, hq, 1, 0, 0);
        assert!((2000..=2600).contains(&total(counts(&world, slow))));
        world.units[hq].unit.location = None;

        // With Encircler and Blitzer those two weigh 6; the armour's 9 km/h
        // (12 · 0.75) is 6 above `combat[230]`, which adds the full 40 %:
        // 8.4, of which 8 counts.
        let traits = traits::ENCIRCLER | traits::BLITZER;
        lead(&mut world, slow, 1, 10, traits);
        lead(&mut world, fast, 1, 10, traits);
        let (slow, fast) = (counts(&world, slow), counts(&world, fast));
        for e in [CombatEvent::Encirclement, CombatEvent::Breakthrough] {
            let (s, f) = (slow[e as usize] as f32, fast[e as usize] as f32);
            assert!(f > 1.15 * s && f < 1.6 * s, "{e:?}: {s} vs {f}");
        }
    }

    #[test]
    fn event_weights() {
        use CombatEvent::*;
        let all = traits::ASSAULTER | traits::ENCIRCLER | traits::BLITZER;
        let p = Params::default();
        assert_eq!(event_weight(&p, Assault, 0, false, 0.0), 1.0);
        assert_eq!(event_weight(&p, Assault, 0, true, 0.0), 3.0);
        assert_eq!(event_weight(&p, Assault, all, false, 0.0), 6.0);
        assert_eq!(event_weight(&p, Assault, all, true, 0.0), 8.0);
        assert_eq!(event_weight(&p, Ambush, all, false, 0.0), 1.0);
        // Fast stacks favour encirclement and breakthrough: +10 % per km/h
        // above 3, at most +40 %.
        assert_eq!(event_weight(&p, Assault, all, false, 5.0), 6.0);
        assert!((event_weight(&p, Encirclement, all, false, 5.0) - 7.2).abs() < 1e-5);
        assert!((event_weight(&p, Breakthrough, 0, true, 20.0) - 4.2).abs() < 1e-5);
        assert_eq!(event_weight(&p, Breakthrough, 0, false, 3.0), 1.0);
        assert_eq!(
            CombatEvent::ALL.map(|e| e.defensive()),
            [true, false, false, false, true, true, false]
        );
        assert_eq!(Breakthrough.trait_mask(), traits::BLITZER);
        assert_eq!(Delay.trait_mask(), traits::DISCIPLINED);
    }

    #[test]
    fn events_come_with_the_commanders_skill() {
        let mut world = world();
        let combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        let a = stack(&mut world, "GER", 2, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        let mut rng = Rng::new(11);

        // Without skill an event never comes, but the roll is made.
        let mut b = battle(&combat, &world, &[a], &[d]);
        let mut expected = rng.clone();
        expected.below(1000);
        combat.roll_event(&world, &mut b, &[a], true, &mut rng);
        assert_eq!((b.event, rng.next_u64()), (None, expected.next_u64()));

        // Skill 10 with a country multiplier of 10 makes an event certain to
        // come (10 000 in 1000); an Assaulter makes the assault the likeliest.
        lead(&mut world, a, 1, 10, traits::ASSAULTER);
        lead(&mut world, d, 1, 10, traits::COUNTER_ATTACKER);
        for tag in ["GER", "FRA"] {
            world.countries.get_mut(tag).unwrap().leader_skill = 10.0;
        }
        let mut counts = std::collections::BTreeMap::new();
        for attacking in [true, false] {
            for _ in 0..20_000 {
                let mut b = battle(&combat, &world, &[a], &[d]);
                let stacks = if attacking { [a] } else { [d] };
                combat.roll_event(&world, &mut b, &stacks, attacking, &mut rng);
                if let Some(e) = b.event {
                    assert_eq!(e.until, world.hour + 8);
                    assert_ne!(e.kind.defensive(), attacking);
                    *counts.entry(e.kind as usize).or_insert(0) += 1;
                }
            }
        }
        // Weights 6, 1, 1, 1 for the attackers' events in order (assault
        // 6 %, then 0.94 %, …) and 6, 1, 1 for the defenders'.
        let count = |e: CombatEvent| counts.get(&(e as usize)).copied().unwrap_or(0);
        for e in [CombatEvent::Assault, CombatEvent::CounterAttack] {
            assert!((1050..=1350).contains(&count(e)), "{e:?}: {counts:?}");
        }
        for e in [
            CombatEvent::Encirclement,
            CombatEvent::Ambush,
            CombatEvent::Breakthrough,
            CombatEvent::Delay,
            CombatEvent::TacticalWithdrawal,
        ] {
            assert!((120..=260).contains(&count(e)), "{e:?}: {counts:?}");
        }

        // While an event is in force, or for a side of unknown country,
        // nothing is rolled.
        let mut b = battle(&combat, &world, &[a], &[d]);
        b.event = Some(ActiveEvent {
            kind: CombatEvent::Delay,
            until: 5,
        });
        let before = rng.clone().next_u64();
        combat.roll_event(&world, &mut b, &[a], true, &mut rng);
        let mut b = battle(&combat, &world, &[a], &[d]);
        b.side_mut(true).country = Some("XXX".into());
        combat.roll_event(&world, &mut b, &[a], true, &mut rng);
        assert_eq!((b.event, rng.next_u64()), (None, before));
    }

    #[test]
    fn events_last_eight_hours_after_the_first() {
        let mut world = world();
        let mut combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        combat.surprise = false;
        let a = stack(&mut world, "GER", 2, &["infantry"]);
        let d = stack(&mut world, "FRA", 1, &["infantry"]);
        world.units[a].route.push_back(1);
        for u in [a, d] {
            world.units[u].unit.divisions[0].organisation = Some(1000.0);
        }
        let mut rng = Rng::new(3);
        let mut battle = Battle::new(1, vec![a], 0);
        world.hour = 100;
        battle.event = Some(ActiveEvent {
            kind: CombatEvent::Ambush,
            until: 100 + Params::default().event_hours,
        });
        // Built-in commanders never start another one.
        let mut active = Vec::new();
        for _ in 0..11 {
            combat.round(&mut world, &mut battle, &mut rng);
            active.push(battle.event.is_some());
            world.hour += 1;
        }
        let mut expected = vec![true; 9];
        expected.resize(11, false);
        assert_eq!(active, expected);
    }

    #[test]
    fn events_change_the_damage_each_side_takes() {
        let mut world = world();
        let combat = combat(map(terrain::PLAINS, AdjKind::Normal));
        let a = stack(&mut world, "GER", 2, &["infantry"; 4]);
        let d = stack(&mut world, "FRA", 1, &["infantry", "hq"]);
        let b = Battle::new(1, vec![a], 0);
        // Total damage taken by each side in one hour of fire, from the same
        // rolls (the multipliers use none).
        let damage = |event: Option<CombatEvent>| {
            let mut att = combat.fighters(&world, &[a], &[d], &b, true);
            let mut def = combat.fighters(&world, &[d], &[a], &b, false);
            let mut rng = Rng::new(5);
            Combat::fire(&Params::default(), &att, &mut def, true, event, &mut rng);
            Combat::fire(&Params::default(), &def, &mut att, false, event, &mut rng);
            let sum = |side: &[super::super::Fighter], hq: bool| {
                side.iter()
                    .filter(|f| (f.class == super::super::HQ_CLASS) == hq)
                    .fold((0.0, 0.0), |(o, s), f| (o + f.acc_org, s + f.acc_str))
            };
            [sum(&att, false), sum(&def, false), sum(&def, true)]
        };
        let base = damage(None);
        assert!(base[0].0 > 0.0 && base[1].0 > 0.0 && base[2].0 > 0.0);
        // Headquarters lose no strength but to a breakthrough.
        assert_eq!(base[2].1, 0.0);
        for e in CombatEvent::ALL {
            let [att_org, att_str, def_org, def_str] = Params::default().event_damage[e as usize];
            let got = damage(Some(e));
            let close = |x: f32, y: f32| (x - y).abs() < 1e-4 * y.max(1.0);
            assert!(close(got[0].0, base[0].0 * att_org), "{e:?}");
            assert!(close(got[0].1, base[0].1 * att_str), "{e:?}");
            assert!(close(got[1].0, base[1].0 * def_org), "{e:?}");
            assert!(close(got[1].1, base[1].1 * def_str), "{e:?}");
            assert!(close(got[2].0, base[2].0 * def_org), "{e:?}");
            assert_eq!(got[2].1 > 0.0, e == CombatEvent::Breakthrough, "{e:?}");
        }
    }
}
