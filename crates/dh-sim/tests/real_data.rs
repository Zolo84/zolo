//! Movement against a real Darkest Hour install; skipped unless `DH_GAME_DIR` is set.

use dh_data::{Scenario, Vfs};
use dh_sim::march::March;
use dh_sim::movement::MoveContext;
use dh_sim::{Simulation, World};
use std::sync::Arc;

fn game_vfs() -> Option<Vfs> {
    let dir = std::path::PathBuf::from(std::env::var_os("DH_GAME_DIR")?);
    Some(Vfs::new(dir))
}

fn load() -> Option<(MoveContext, Scenario)> {
    let vfs = game_vfs()?;
    let mut warnings = Vec::new();
    let scenario = Scenario::load(&vfs, "scenarios/1936.eug", &mut warnings).ok()?;
    Some((MoveContext::load(&vfs).unwrap(), scenario))
}

/// The worked example of `docs/spec/land-movement.md` §9 for VIII. Armeekorps,
/// in the variants without the chief of staff's speed bonus (not modelled yet).
#[test]
fn hop_times_match_worked_example() {
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let corps = scenario
        .countries
        .iter()
        .flat_map(|c| &c.units)
        .find(|u| u.name == "VIII. Armeekorps")
        .expect("VIII. Armeekorps in the 1936 scenario");
    assert_eq!(corps.location, Some(300));
    let hours = |from: u32, to: u32| {
        ctx.hop_hours(
            &corps.divisions,
            from,
            ctx.adjacency.link(from, to).unwrap(),
            false,
            1.0,
        )
    };
    assert_eq!(hours(300, 299), Some(21), "Berlin → Potsdam");
    assert_eq!(
        hours(300, 308),
        Some(60),
        "Berlin → Küstrin across the Oder"
    );
    assert_eq!(
        hours(302, 301),
        Some(125),
        "Stettin → Stralsund (forest, river)"
    );
}

#[test]
fn corps_marches_along_its_route() {
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (world, _) = World::from_scenario(&scenario);
    let mut sim = Simulation::new(world, 1);
    let index = sim
        .world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    let route = March::order(&ctx, &mut sim.world, index, 299).unwrap();
    assert_eq!(route, [300, 299]);
    sim.add_system(March::new(ctx));
    sim.run_hours(20);
    assert_eq!(sim.world.units[index].unit.location, Some(300));
    sim.run_hours(1);
    assert_eq!(sim.world.units[index].unit.location, Some(299));
    assert!(sim.world.units[index].route.is_empty());
}

/// Without a war German troops stay out of France; with one they cross the
/// border and take control of the French provinces they enter (French troops
/// on the route are removed first, as battles are not resolved yet).
#[test]
fn war_opens_the_border() {
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (mut world, _) = World::from_scenario(&scenario);
    let index = world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    assert!(March::order(&ctx, &mut world, index, 56).is_err());
    world.declare_war("GER", "FRA");
    let route = March::order(&ctx, &mut world, index, 56).expect("route to Paris once at war");
    assert_eq!(route.first(), Some(&300));
    for &p in &route {
        let defenders: Vec<usize> = world.enemy_land_units("GER", p).collect();
        for d in defenders {
            world.units[d].unit.location = None;
        }
    }
    let mut sim = Simulation::new(world, 1);
    sim.add_system(March::new(ctx));
    while !sim.world.units[index].route.is_empty() && sim.world.hour < 5000 {
        sim.tick();
    }
    assert_eq!(sim.world.units[index].unit.location, Some(56));
    assert_eq!(
        sim.world.controller.get(&56).map(String::as_str),
        Some("GER")
    );
    assert_eq!(sim.world.owner.get(&56).map(String::as_str), Some("FRA"));
}

/// A battle starts as soon as the next province on the route holds enemy land
/// units; the attacker waits at the border until the province is clear.
#[test]
fn battle_starts_before_entering_a_defended_province() {
    use dh_sim::Engage;
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (mut world, _) = World::from_scenario(&scenario);
    world.declare_war("GER", "FRA");
    let corps = world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    let route = March::order(&ctx, &mut world, corps, 56).unwrap();
    // The first French-held province on the way and the stop before it.
    let pos = route
        .iter()
        .position(|&p| world.enemy_land_units("GER", p).next().is_some())
        .expect("French troops somewhere on the road to Paris");
    let (border, defended) = (route[pos - 1], route[pos]);
    let defenders: Vec<usize> = world.enemy_land_units("GER", defended).collect();

    let mut sim = Simulation::new(world, 1);
    sim.add_system(Engage);
    sim.add_system(March::new(ctx));
    let limit = 5000;
    while sim.world.units[corps].unit.location != Some(border) && sim.world.hour < limit {
        sim.tick();
    }
    assert_eq!(sim.world.units[corps].unit.location, Some(border));
    let reached = sim.world.hour;
    sim.tick();
    let battle = sim
        .world
        .battle_at(defended)
        .expect("battle for the defended province");
    assert!(battle.attackers.contains(&corps));
    assert!(battle.started <= reached + 1);

    sim.run_hours(1000); // far past any hop time: still held up at the border
    assert_eq!(sim.world.units[corps].unit.location, Some(border));

    for d in defenders {
        sim.world.units[d].unit.location = None; // defenders destroyed
    }
    sim.run_hours(2);
    assert!(sim.world.battle_at(defended).is_none());
    assert_eq!(sim.world.units[corps].unit.location, Some(defended));
    assert_eq!(
        sim.world.controller.get(&defended).map(String::as_str),
        Some("GER")
    );
}

/// The worked example of `docs/spec/land-combat.md` §6: V. Armeekorps attacks
/// 8ème Armée in Strasbourg across the Rhine and into the Maginot forts. The
/// spec's own simulation (no night, 2000 runs) has the attackers break off in
/// every run, after 11–24 hours (mean 15.5). Like the example it assumes no
/// leaders, no command-limit penalty, no surprise and no combat events,
/// dig-in 0 and dissent 0 (both sides have neither in the 1936 scenario).
#[test]
fn strasbourg_attack_breaks_off_like_the_spec_example() {
    use dh_sim::{Combat, Engage};
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (mut base, _) = World::from_scenario(&scenario);
    base.declare_war("GER", "FRA");
    let corps = base
        .units
        .iter()
        .position(|u| u.unit.name == "V. Armeekorps")
        .unwrap();
    assert_eq!(base.units[corps].unit.location, Some(314));
    assert!(
        base.enemy_land_units("GER", 73).next().is_some(),
        "French troops in Strasbourg"
    );

    let (mut broke_off, mut hours) = (0, Vec::new());
    for seed in 1..=200u64 {
        let mut world = base.clone();
        March::order(&ctx, &mut world, corps, 73).unwrap();
        let mut sim = Simulation::new(world, seed);
        let mut combat = Combat::new(ctx.clone(), &scenario);
        combat.night = false;
        combat.supply = false; // the example assumes ESE = 1
        combat.leaders = false;
        combat.command_limit = false;
        combat.surprise = false;
        combat.events = false;
        sim.add_system(Engage);
        sim.add_system(combat);
        sim.add_system(March::new(ctx.clone()));
        let start = sim.world.hour;
        while sim.world.units[corps].route.front() == Some(&73) && sim.world.hour < start + 200 {
            sim.tick();
        }
        if sim.world.units[corps].unit.location == Some(314) {
            broke_off += 1;
            hours.push(sim.world.hour - start);
        }
    }
    let mean = hours.iter().sum::<u64>() as f64 / hours.len().max(1) as f64;
    eprintln!(
        "attack broke off in {broke_off}/200 runs after {}..={} h (mean {mean:.1})",
        hours.iter().min().unwrap_or(&0),
        hours.iter().max().unwrap_or(&0)
    );
    assert!(broke_off >= 190);
    assert!((12.0..=20.0).contains(&mean), "mean {mean}");
}

/// Berlin connects to the German capital; a lone captured Paris does not.
#[test]
fn supply_follows_controlled_land_to_the_capital() {
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let (mut world, _) = World::from_scenario(&scenario);
    assert!(world.in_supply(&ctx, "GER", 300));
    world.declare_war("GER", "FRA");
    world.controller.insert(56, "GER".into());
    assert!(!world.in_supply(&ctx, "GER", 56));
    assert_eq!(world.supply_speed_factor(&ctx, "GER", 56), 0.1);
}

/// Leaders of the 1936 scenario (land-combat.md §2.3): the German corps have
/// none and fight under the built-in rank-25 leader (limit 1, skill 0); the
/// 21 `leader = N` lines of China and Yunnan all resolve, with the ranks the
/// spec lists for 1 January 1936.
#[test]
fn scenario_1936_leaders_resolve() {
    use dh_sim::leaders::UNRANKED;
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let (mut world, _) = World::from_scenario(&scenario);
    let notes = world.load_leaders(&game_vfs().unwrap()).unwrap();
    assert!(notes.is_empty(), "{notes:?}");
    assert_eq!(world.leaders.len(), 16757);

    for name in ["VIII. Armeekorps", "V. Armeekorps"] {
        let corps = world
            .units
            .iter()
            .position(|u| u.unit.name == name)
            .unwrap();
        let leader = world.stack_leader(corps);
        assert_eq!(
            (leader.id, leader.rank, leader.country.as_str()),
            (None, UNRANKED, "GER")
        );
        assert_eq!(leader.command_limit(), 1);
        assert_eq!(world.leader_skill(&leader), 0.0);
        assert_eq!(world.units[corps].unit.divisions.len(), 3);
        assert!(!world.within_command_limit(corps));
        assert!(!world.under_hq_influence(&ctx, corps));
    }

    let assigned: Vec<_> = world
        .leaders
        .values()
        .filter(|l| l.unit.is_some())
        .collect();
    assert_eq!(assigned.len(), 21);
    let rank = |id: i64| world.leaders[&id].rank;
    assert_eq!((rank(50250), rank(501006)), (1, 1));
    assert_eq!(
        [rank(50082), rank(50208), rank(50206), rank(50319)],
        [2, 2, 2, 2]
    );
    assert_eq!(assigned.iter().filter(|l| l.rank == 3).count(), 15);

    // Long Yun (skill 1, rank 1) commands Yunnan Jingbei, now of Yunnan.
    let yunnan = world
        .units
        .iter()
        .position(|u| u.unit.name == "Yunnan Jingbei")
        .unwrap();
    let long_yun = world.stack_leader(yunnan);
    assert_eq!(
        (long_yun.id, long_yun.country.as_str()),
        (Some(501006), "CYN")
    );
    assert_eq!(long_yun.command_limit(), 9);
    assert_eq!(world.leader_skill(&long_yun), 1.0);
    assert!(world.within_command_limit(yunnan));

    // German land leaders available in 1936 by rank 0..=3 (§2.3.3: 2/16/67/94).
    let data = dh_data::Leaders::load(&game_vfs().unwrap(), &mut Vec::new()).unwrap();
    let mut by_rank = [0; 4];
    for l in data
        .of_country("GER")
        .filter(|l| l.branch == Some(dh_data::Branch::Land) && l.start_year <= 1936)
    {
        by_rank[world.leaders[&l.id].rank as usize] += 1;
    }
    assert_eq!(by_rank, [2, 16, 67, 94]);
    // No stack of the 1936 scenario is a real HQ: no leader of rank 0 or 1 has
    // an HQ division.
    assert!((0..world.units.len()).all(|u| !world.is_hq(u)));
}

/// Islands of the shipped map (land-combat.md §4.3): 125 land provinces
/// whose regular neighbours are all sea, Malta and Crete among them;
/// multi-province islands such as Sicily are not.
#[test]
fn islands_of_the_shipped_map() {
    let Some((ctx, _)) = load() else {
        return;
    };
    // Province 0 is the dummy without links.
    let islands: Vec<u32> = (1..ctx.provinces.len() as u32)
        .filter(|&p| ctx.is_island(p))
        .collect();
    for p in [31, 396, 444, 576, 800, 1193, 1599, 1685, 1729, 1867] {
        assert!(islands.contains(&p), "{p} is an island");
    }
    for p in [292, 293, 294, 405] {
        assert!(!islands.contains(&p), "{p} is linked to land");
    }
    assert_eq!(islands.len(), 125);
}

/// Country dissent and stack dig-in come from the 1936 scenario
/// (land-combat.md §4.4, §4.6); the shipped difficulty table has no combat
/// modifier on NORMAL.
#[test]
fn scenario_dissent_dig_in_and_difficulty() {
    let Some((_, scenario)) = load() else {
        return;
    };
    let (world, _) = World::from_scenario(&scenario);
    let dissent = |tag: &str| world.countries[tag].dissent;
    assert_eq!(
        [
            dissent("SOV"),
            dissent("CHI"),
            dissent("SIK"),
            dissent("GER")
        ],
        [15.0, 25.0, 30.0, 0.0]
    );
    let jun = world
        .units
        .iter()
        .find(|u| u.owner == "CHI" && u.unit.name == "1. Jun")
        .unwrap();
    assert_eq!(jun.dig_in, 20.0);
    let corps = world
        .units
        .iter()
        .find(|u| u.unit.name == "V. Armeekorps")
        .unwrap();
    assert_eq!(corps.dig_in, 0.0);

    let difficulty = dh_data::Difficulty::load(&game_vfs().unwrap()).unwrap();
    let combat =
        |block: &str| -> Vec<i32> { (0..5).map(|l| difficulty.get(block, "COMBAT", l)).collect() };
    assert_eq!(combat("HUMAN"), [10, 5, 0, -5, -10]);
    assert_eq!(combat("AI"), [-20, -10, 0, 10, 20]);
    for block in ["AXIS", "ALLIES", "COMINTERN", "NEUTRAL"] {
        assert_eq!(combat(block), [0; 5]);
    }
    assert_eq!(difficulty.modifier("COMBAT", 2, false, None), 0.0);
}

/// The Strasbourg battle of `strasbourg_attack_breaks_off_like_the_spec_example`
/// with leaders loaded and the command limit on, as in the game
/// (land-combat.md §6, §7 question 16). Neither stack has a leader, so each
/// has limit 1: two of the three attacking divisions and three of the four
/// defending ones fight at a quarter. Prints the outcome.
#[test]
fn strasbourg_attack_with_command_limits() {
    use dh_sim::{Combat, Engage};
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (mut base, _) = World::from_scenario(&scenario);
    base.load_leaders(&game_vfs().unwrap()).unwrap();
    base.declare_war("GER", "FRA");
    let corps = base
        .units
        .iter()
        .position(|u| u.unit.name == "V. Armeekorps")
        .unwrap();
    let defenders: Vec<usize> = base.enemy_land_units("GER", 73).collect();
    assert!(defenders
        .iter()
        .all(|&d| base.units[d].unit.leader.is_none()));
    let strength = |world: &World, units: &[usize]| -> f64 {
        units
            .iter()
            .flat_map(|&u| &world.units[u].unit.divisions)
            .map(|d| d.strength.unwrap_or(100.0))
            .sum()
    };

    let runs = 200u64;
    let (mut broke_off, mut held, mut hours) = (0, 0, Vec::new());
    let (mut att_left, mut def_left) = (0.0, 0.0);
    for seed in 1..=runs {
        let mut world = base.clone();
        March::order(&ctx, &mut world, corps, 73).unwrap();
        let mut sim = Simulation::new(world, seed);
        let mut combat = Combat::new(ctx.clone(), &scenario);
        combat.night = false;
        combat.supply = false;
        sim.add_system(Engage);
        sim.add_system(combat);
        sim.add_system(March::new(ctx.clone()));
        let start = sim.world.hour;
        while sim.world.units[corps].route.front() == Some(&73) && sim.world.hour < start + 300 {
            sim.tick();
        }
        match sim.world.units[corps].unit.location {
            Some(314) => broke_off += 1,
            Some(73) => held += 1,
            _ => {}
        }
        hours.push(sim.world.hour - start);
        att_left += strength(&sim.world, &[corps]);
        def_left += strength(&sim.world, &defenders);
    }
    let mean = hours.iter().sum::<u64>() as f64 / hours.len() as f64;
    eprintln!(
        "with command limits: attack broke off in {broke_off}/{runs} runs, took the province in \
         {held}; {}..={} h (mean {mean:.1}); strength left: attackers {:.0}/300, defenders {:.0}/340",
        hours.iter().min().unwrap(),
        hours.iter().max().unwrap(),
        att_left / runs as f64,
        def_left / runs as f64,
    );
    assert_eq!(broke_off + held, runs);
    // Both sides hit far less often, so the attack holds on longer than
    // without the penalty (mean 15.5 h), but still breaks off.
    assert!(broke_off >= 190);
    assert!((35.0..=70.0).contains(&mean), "mean {mean}");
}

/// Technologies the 1936 countries start with (land-combat.md §3.7, §4.4):
/// Basic Construction Engineering (5080) lets most of them dig in, and
/// Japan's cryptography (5350) raises its land surprise to 1.15. Only
/// stacks of countries at war dig in: China's grow from 01:00 on the first
/// day (its scenario level of 20 is already the maximum), Germany's only
/// once it goes to war.
#[test]
fn scenario_techs_and_dig_in() {
    use dh_sim::DigIn;
    let Some((_, scenario)) = load() else {
        return;
    };
    let (mut world, _) = World::from_scenario(&scenario);
    let warnings = world.load_techs(&game_vfs().unwrap());
    assert!(warnings.is_empty(), "{warnings:?}");
    let country = |world: &World, tag: &str| world.countries[tag].clone();
    assert!((country(&world, "JAP").land_surprise - 1.15).abs() < 1e-6);
    assert_eq!(country(&world, "GER").land_surprise, 1.0);
    for tag in ["GER", "FRA", "ITA", "JAP", "CHI", "CHC"] {
        assert!(country(&world, tag).allow_dig_in, "{tag}");
    }
    let allowed = world.countries.values().filter(|c| c.allow_dig_in).count();
    eprintln!(
        "{allowed} of {} countries may dig in",
        world.countries.len()
    );
    assert!(allowed < world.countries.len());

    let find = |world: &World, owner: &str, dug: bool| {
        world
            .units
            .iter()
            .position(|u| {
                u.owner == owner
                    && u.unit.branch == dh_data::Branch::Land
                    && u.unit.location.is_some()
                    && (u.dig_in > 0.0) == dug
            })
            .unwrap()
    };
    let (chi_dug, chi_new) = (find(&world, "CHI", true), find(&world, "CHI", false));
    assert_eq!(world.units[chi_dug].dig_in, 20.0);
    let corps = world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    let mut sim = Simulation::new(world, 1);
    sim.add_system(DigIn);
    while sim.date().hour != 1 {
        sim.tick();
    }
    let level = |sim: &Simulation, u: usize| sim.world.units[u].dig_in;
    assert_eq!(
        [chi_dug, chi_new, corps].map(|u| level(&sim, u)),
        [20.0, 1.0, 0.0]
    );
    sim.world.declare_war("GER", "FRA");
    sim.run_days(3);
    assert_eq!(
        [chi_dug, chi_new, corps].map(|u| level(&sim, u)),
        [20.0, 4.0, 3.0]
    );
}

/// The Strasbourg battle with von Rundstedt (rank 1, skill 5, both
/// doctrines) given to V. Armeekorps, leaders, command limits, surprise and
/// combat events on (land-combat.md §2.4, §3.6, §3.7). He commands the
/// attackers; his three divisions are within his limit of 9 and fight at
/// 1.1 · 1.25. Surprise catches the defenders with 5 in 1000 (skill 5
/// against the built-in leader's 0), and an attackers' event comes with
/// 25 in 1000 an hour, of which about one in 25 draws an event. Prints the
/// outcome.
#[test]
fn strasbourg_attack_under_von_rundstedt() {
    use dh_sim::{Combat, Engage};
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (mut base, _) = World::from_scenario(&scenario);
    base.load_leaders(&game_vfs().unwrap()).unwrap();
    base.declare_war("GER", "FRA");
    let corps = base
        .units
        .iter()
        .position(|u| u.unit.name == "V. Armeekorps")
        .unwrap();
    let rundstedt = base.leaders.get_mut(&335).unwrap();
    assert_eq!((rundstedt.rank, rundstedt.skill), (1, 5));
    rundstedt.unit = Some(corps);
    base.units[corps].unit.leader = Some(335);
    assert!(base.within_command_limit(corps));

    let runs = 200u64;
    let (mut broke_off, mut held, mut hours) = (0, 0, Vec::new());
    let (mut surprised, mut events) = (0, std::collections::BTreeMap::new());
    for seed in 1..=runs {
        let mut world = base.clone();
        March::order(&ctx, &mut world, corps, 73).unwrap();
        let mut sim = Simulation::new(world, seed);
        let mut combat = Combat::new(ctx.clone(), &scenario);
        combat.night = false;
        combat.supply = false;
        sim.add_system(Engage);
        sim.add_system(combat);
        sim.add_system(March::new(ctx.clone()));
        let start = sim.world.hour;
        let mut last_event = None;
        while sim.world.units[corps].route.front() == Some(&73) && sim.world.hour < start + 400 {
            sim.tick();
            let Some(battle) = sim.world.battle_at(73) else {
                continue;
            };
            assert_eq!(battle.side(true).commander, Some(corps));
            assert_eq!(battle.side(true).country.as_deref(), Some("GER"));
            if battle.hours == 1 && battle.side(false).surprised {
                surprised += 1;
            }
            if battle.event != last_event {
                if let Some(e) = battle.event {
                    assert!(!e.kind.defensive(), "the defenders have no skill");
                    *events.entry(format!("{:?}", e.kind)).or_insert(0) += 1;
                }
                last_event = battle.event;
            }
        }
        match sim.world.units[corps].unit.location {
            Some(314) => broke_off += 1,
            Some(73) => held += 1,
            _ => {}
        }
        hours.push(sim.world.hour - start);
    }
    let mean = hours.iter().sum::<u64>() as f64 / hours.len() as f64;
    eprintln!(
        "under von Rundstedt: attack broke off in {broke_off}/{runs} runs, took the province in \
         {held}; {}..={} h (mean {mean:.1}); defenders surprised in {surprised}; events {events:?}",
        hours.iter().min().unwrap(),
        hours.iter().max().unwrap(),
    );
    assert_eq!(broke_off + held, runs);
    // About 1 surprise and 15 events expected over all runs.
    assert!(surprised <= 6);
    assert!((1..=40).contains(&events.values().sum::<u32>()));
}
