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
            &Default::default(),
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

    // Weather at Potsdam scales infantry speed by 1 + MOV_<weather>.
    let link = ctx.adjacency.link(300, 299).unwrap();
    let mut cond = dh_sim::movement::MoveConditions::default();
    let mut weather_hours = |w| {
        cond.weather = w;
        ctx.hop_hours(&corps.divisions, 300, link, false, &cond)
            .unwrap()
    };
    use dh_data::Weather;
    // 21 h in clear weather means distance / speed is in 21..22 h.
    assert_eq!(weather_hours(Weather::Snowing), 33); // ÷ 0.65
    assert_eq!(weather_hours(Weather::Muddy), 43); // ÷ 0.5
    assert_eq!(weather_hours(Weather::Blizzard), 72); // ÷ 0.3
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
        assert_eq!(leader.command_limit(&world.params), 1);
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
    assert_eq!(long_yun.command_limit(&world.params), 9);
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
/// with leaders loaded and the command limit on, as in the game: the
/// variant with command limits of land-combat.md §6. Neither stack has a
/// leader, so each has limit 1: two of the three attacking divisions and
/// three of the four defending ones fight at a quarter. Prints the outcome
/// the spec quotes.
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
/// Basic Construction Engineering (5080) lets 59 of the 78 dig in, and
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
    let unable: Vec<&str> = world
        .countries
        .values()
        .filter(|c| !c.allow_dig_in)
        .map(|c| c.tag.as_str())
        .collect();
    assert_eq!(world.countries.len(), 78);
    assert_eq!(
        unable,
        [
            "AFG", "BHU", "CGX", "CSX", "CXB", "CYN", "ETH", "HAI", "IRQ", "LIB", "MON", "NEP",
            "OMN", "PER", "SAU", "SIK", "TAN", "TIB", "YEM"
        ]
    );
    // Only Japan starts with a land surprise technology.
    let surprising: Vec<&str> = world
        .countries
        .values()
        .filter(|c| c.land_surprise != 1.0)
        .map(|c| c.tag.as_str())
        .collect();
    assert_eq!(surprising, ["JAP"]);

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

/// Military access of the 1936 scenario (land-movement.md §1.4): the
/// country whose block has `relation = { tag = X access = yes }` may enter
/// X's territory, e.g. Britain Iraq's and the Soviet Union Mongolia's, not
/// the other way round.
#[test]
fn scenario_military_access() {
    let Some((_, scenario)) = load() else {
        return;
    };
    let (world, _) = World::from_scenario(&scenario);
    let pairs: Vec<String> = world
        .access
        .iter()
        .map(|(a, b)| format!("{a}>{b}"))
        .collect();
    assert_eq!(
        pairs,
        [
            "CHI>CSX", "CHI>CXB", "CSX>CHI", "CSX>CXB", "CXB>CHI", "CXB>CSX", "ENG>BHU", "ENG>IRQ",
            "ENG>NEP", "ENG>OMN", "ENG>YEM", "JAP>MAN", "MAN>JAP", "POR>SAF", "SOV>MON", "SOV>TAN",
            "USA>CUB", "USA>LIB", "USA>PHI"
        ]
    );
    assert!(world.has_access("ENG", "IRQ") && !world.has_access("IRQ", "ENG"));
}

/// The defaults are the shipped `misc.txt` read at the documented positions;
/// the mod `settings.cfg` selects changes them.
#[test]
fn params_come_from_misc_txt() {
    use dh_data::{open_install, Misc};
    use dh_sim::Params;
    let Some(dir) = std::env::var_os("DH_GAME_DIR") else {
        return;
    };
    let vanilla = Params::from_misc(&Misc::load(&Vfs::new(&dir)).unwrap());
    assert_eq!(vanilla, Params::default());

    let modded = Params::from_misc(&Misc::load(&open_install(&dir)).unwrap());
    assert_eq!(modded.surprise, -0.4);
    assert_eq!(modded.land_command_limit, [12, 9, 6, 3]);
    assert_eq!(modded.ground_defence_efficiency, 1.0);
    assert_eq!((modded.dig_in_max, modded.dig_in_daily), (30.0, 1.5));

    let (_, scenario) = load().unwrap();
    let (mut world, _) = World::from_scenario(&scenario);
    world.load_misc(&open_install(&dir)).unwrap();
    assert_eq!(world.params, modded);
}

/// The mod `settings.cfg` selects ("Darkest Hour Full") switches to its own
/// map (`map[1]` = 1: `map/Map_1`, 2770 provinces) with real distances
/// (`map[3]` = 1: `airdist.tbl`); the base game keeps the pixel model.
#[test]
fn the_selected_mod_brings_its_own_map() {
    use dh_data::localisation::Language;
    use dh_data::{open_install, Localisation};
    let Some(dir) = std::env::var_os("DH_GAME_DIR") else {
        return;
    };
    let vanilla = MoveContext::load(&Vfs::new(&dir)).unwrap();
    assert!(vanilla.airdist.is_none());

    let vfs = open_install(&dir);
    let ctx = MoveContext::load(&vfs).unwrap();
    assert_eq!(ctx.provinces.len(), 2770);
    let airdist = ctx.airdist.as_ref().expect("airdist.tbl of Map_1");
    assert_eq!(airdist.max_province(), 2769);
    let loc = Localisation::load(&vfs, Language::English);
    assert_eq!(loc.text("PROV107"), "Strasbourg");
    assert_eq!(loc.text("PROV134"), "Stuttgart");
    // Stuttgart and Strasbourg are about 120 km apart.
    let d = ctx.distance(134, 107).unwrap() * 100.0;
    assert!((90.0..150.0).contains(&d), "{d} km");
}

/// A year of weather on the 1936 map: fronts build up to 24, arctic winters
/// freeze, and summers thaw the temperate north.
#[test]
fn a_year_of_weather() {
    use dh_data::{Climate, Weather};
    use dh_sim::WeatherSystem;
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (world, _) = World::from_scenario(&scenario);
    let mut sim = Simulation::new(world, 7);
    sim.add_system(WeatherSystem::new(ctx.clone()));
    let share = |w: &World, climate: Climate, f: &dyn Fn(Weather) -> bool| {
        let ps: Vec<u32> = (0..ctx.provinces.len() as u32)
            .filter(|&p| {
                ctx.province(p)
                    .is_some_and(|i| i.climate == climate && i.north && !i.is_water())
            })
            .collect();
        ps.iter().filter(|&&p| f(w.weather_at(p))).count() as f32 / ps.len() as f32
    };
    // The state on the first of each month, February 1936 to January 1937.
    let mut stats = Vec::new();
    for month in 1..=12 {
        while sim.world.date.month == month && sim.world.hour < 24 * 400 {
            sim.tick();
        }
        let w = &sim.world;
        let wet = (0..ctx.provinces.len() as u32)
            .filter(|&p| w.weather_at(p).is_precipitation())
            .count() as f32
            / ctx.provinces.len() as f32;
        stats.push((
            w.weather_fronts.len(),
            wet,
            share(w, Climate::Arctic, &|x| x.is_cold()),
            share(w, Climate::Temperate, &|x| x.is_cold()),
            share(w, Climate::Muddy, &|x| x == Weather::Muddy),
        ));
    }
    eprintln!("{stats:?}");
    assert!(
        stats.iter().all(|s| s.0 == 24),
        "one front per update up to 24"
    );
    assert!(
        stats.iter().all(|s| (0.05..0.4).contains(&s.1)),
        "rain or snow"
    );
    let arctic = |i: usize| stats[i].2;
    let temperate = |i: usize| stats[i].3;
    let mud = |i: usize| stats[i].4;
    // Arctic north: frozen from October to April, thawed in summer.
    assert!([0, 1, 2, 9, 10, 11].iter().all(|&i| arctic(i) == 1.0));
    assert!([4, 5, 6].iter().all(|&i| arctic(i) == 0.0));
    // Temperate north: no frost in the first winter (no deep winter there,
    // and the year starts clear), frost from November, gone by April.
    assert_eq!(temperate(0), 0.0);
    assert!(temperate(10) > 0.5 && temperate(11) > 0.5);
    assert!([3, 4, 5, 6, 7, 8].iter().all(|&i| temperate(i) == 0.0));
    // Muddy climate: mud after the April thaw, dried up by July.
    assert!(mud(3) > 0.3 && mud(5) < 0.05);
}

/// A German corps cut off in a Soviet province under a blizzard loses
/// `(1 − infrastructure) · 0.05 %` of its strength a day (half for divisions
/// that use no fuel) plus 0.5 for being out of supply; at home in peace it
/// loses nothing.
#[test]
fn winter_attrition_in_enemy_territory() {
    use dh_data::Weather;
    use dh_sim::movement::terrain;
    use dh_sim::Attrition;
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (mut world, _) = World::from_scenario(&scenario);
    let corps = world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    assert_eq!(world.attrition_rate(&ctx, corps), 0.0, "Berlin in peace");

    world.declare_war("GER", "SOV");
    let place = world
        .provinces_owned_by("SOV")
        .find(|&p| {
            ctx.province(p).is_some_and(|i| {
                !i.is_water() && i.terrain != terrain::DESERT && i.terrain != terrain::JUNGLE
            })
        })
        .unwrap();
    let infra = ctx.province(place).unwrap().infra;
    world.set_weather(place, Weather::Blizzard);
    world.units[corps].unit.location = Some(place);
    let rate = world.attrition_rate(&ctx, corps);
    assert!((rate - (1.0 - infra)).abs() < 1e-6, "{rate} vs {infra}");

    let before: Vec<f64> = world.units[corps]
        .unit
        .divisions
        .iter()
        .map(|d| d.strength.unwrap_or(100.0))
        .collect();
    let mut sim = Simulation::new(world, 1);
    sim.add_system(Attrition::new(ctx.clone()));
    sim.run_hours(24);
    for (d, str) in sim.world.units[corps].unit.divisions.iter().zip(before) {
        let fuel = ctx
            .units
            .division_stats(d)
            .is_some_and(|s| s.get("fuelconsumption") != 0.0);
        let t = if fuel { rate } else { rate * 0.5 };
        let expected = str - f64::from(t * 0.05 * str as f32 / 100.0 + 0.5);
        let after = d.strength.unwrap();
        assert!((after - expected).abs() < 1e-4, "{after} vs {expected}");
    }
}

/// Old (vanilla) ORG rules on the 1936 map: VIII. Armeekorps at 5 ORG in
/// Berlin regains a tenth of
/// `ESE · (1 + m) · min(2 · infra, 1.2) · 3 + m` per hour, `m` being
/// `(morale − 30) / 100`; it climbs back to its maximum, and on the march
/// it loses 0.02 an hour.
#[test]
fn organisation_recovers_at_home_and_wears_on_the_march() {
    use dh_sim::OrgRegain;
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (mut world, _) = World::from_scenario(&scenario);
    let corps = world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    for d in &mut world.units[corps].unit.divisions {
        d.organisation = Some(5.0);
    }
    let infra = ctx.province(300).unwrap().infra;
    let leader = world.stack_leader(corps).into_owned();
    let hq = world.under_hq_influence(&ctx, corps);
    let ese = world.stack_supply_efficiency(&ctx, corps, &leader, hq);
    let expected: Vec<f32> = world.units[corps]
        .unit
        .divisions
        .iter()
        .map(|d| {
            let s = ctx.units.division_stats(d).unwrap();
            let m = (s.get("morale") as f32 - 30.0) * 0.01;
            assert!(5.0 / s.get("defaultorganisation") < 0.25);
            (ese * (1.0 + m) * (2.0 * infra).min(1.2) * 3.0 + m) * 0.1
        })
        .collect();
    let mut sim = Simulation::new(world, 1);
    sim.add_system(OrgRegain::new(ctx.clone()));
    sim.tick();
    for (d, r) in sim.world.units[corps].unit.divisions.iter().zip(&expected) {
        let gained = d.organisation.unwrap() as f32 - 5.0;
        assert!((gained - r).abs() < 1e-4, "{gained} vs {r}");
        assert!(*r > 0.1, "{r}");
    }
    sim.run_hours(300);
    for d in &sim.world.units[corps].unit.divisions {
        assert_eq!(
            d.organisation.unwrap() as f32,
            sim.world.max_org(&ctx, "GER", d),
            "back to full"
        );
    }
    March::order(&ctx, &mut sim.world, corps, 299).unwrap(); // Potsdam, 21 h away
    sim.add_system(March::new(ctx.clone()));
    let full: Vec<f32> = sim.world.units[corps]
        .unit
        .divisions
        .iter()
        .map(|d| d.organisation.unwrap() as f32)
        .collect();
    sim.run_hours(5);
    for (d, f) in sim.world.units[corps].unit.divisions.iter().zip(full) {
        let lost = f - d.organisation.unwrap() as f32;
        assert!((lost - 5.0 * 0.02).abs() < 1e-4, "{lost}");
    }
}

/// The newer ORG rules, as "Darkest Hour Full" switches them on: at home a
/// division regains `ESE · (1 + morale/100) · (1 + (1 − q) · 3) · 1.3 / 24`
/// an hour (`q` its share of full ORG), and nothing on the march.
#[test]
fn organisation_by_the_newer_rules() {
    use dh_data::{open_install, Misc};
    use dh_sim::{OrgRegain, Params};
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let dir = std::env::var_os("DH_GAME_DIR").unwrap();
    let params = Params::from_misc(&Misc::load(&open_install(&dir)).unwrap());
    assert!(params.new_org_logic);
    let ctx = Arc::new(ctx);
    let (mut world, _) = World::from_scenario(&scenario);
    world.set_params(params);
    let corps = world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    for d in &mut world.units[corps].unit.divisions {
        d.organisation = Some(5.0);
    }
    let leader = world.stack_leader(corps).into_owned();
    let hq = world.under_hq_influence(&ctx, corps);
    let ese = world.stack_supply_efficiency(&ctx, corps, &leader, hq);
    let expected: Vec<f32> = world.units[corps]
        .unit
        .divisions
        .iter()
        .map(|d| {
            let s = ctx.units.division_stats(d).unwrap();
            let q = 5.0 / s.get("defaultorganisation") as f32;
            ese * (1.0 + s.get("morale") as f32 * 0.01) * (1.0 + (1.0 - q) * 3.0) * 1.3 / 24.0
        })
        .collect();
    let mut sim = Simulation::new(world, 1);
    sim.add_system(OrgRegain::new(ctx.clone()));
    sim.tick();
    for (d, r) in sim.world.units[corps].unit.divisions.iter().zip(&expected) {
        let gained = d.organisation.unwrap() as f32 - 5.0;
        assert!((gained - r).abs() < 1e-4, "{gained} vs {r}");
    }
}

/// German divisions standing in supply draw a day's supplies (and an idle
/// quarter of their fuel) from the national stockpile; with the stockpile
/// empty they go short, and VIII. Armeekorps' ORG then falls by 0.05 an hour.
#[test]
fn divisions_draw_supplies_and_fuel_from_the_stockpile() {
    use dh_sim::OrgRegain;
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let (world, _) = World::from_scenario(&scenario);
    let german: Vec<usize> = (0..world.units.len())
        .filter(|&i| {
            let u = &world.units[i];
            u.owner == "GER"
                && u.unit.branch == dh_data::Branch::Land
                && u.unit
                    .location
                    .is_some_and(|p| world.in_supply(&ctx, "GER", p))
        })
        .collect();
    let (mut supplies, mut oil) = (0.0f64, 0.0f64);
    for &i in &german {
        let cond = world.need_conditions(&ctx, i);
        for d in &world.units[i].unit.divisions {
            let s = ctx.units.division_stats(d).unwrap();
            let share = d.strength.unwrap_or(100.0) / 100.0;
            supplies += f64::from(world.supply_need(&ctx, &cond, d));
            oil += f64::from(world.fuel_need(&ctx, &cond, d));
            // Idle on easy ground: the model's use times strength, a
            // quarter of it for fuel.
            if !matches!(cond.terrain, 3 | 4 | 6) {
                let expected = s.get("supplyconsumption") * share;
                assert!((f64::from(world.supply_need(&ctx, &cond, d)) - expected).abs() < 1e-4);
            }
            let fuel = s.get("fuelconsumption") * share * 0.25;
            assert!((f64::from(world.fuel_need(&ctx, &cond, d)) - fuel).abs() < 1e-4);
        }
    }
    assert!(supplies > 0.0 && oil > 0.0, "{supplies} {oil}");
    let start = world.countries["GER"].stock;
    let mut sim = Simulation::new(world, 1);
    sim.add_system(OrgRegain::new(ctx.clone()));
    sim.run_hours(24);
    let after = sim.world.countries["GER"].stock;
    assert!(
        (start.supplies - after.supplies - supplies).abs() < 0.01,
        "{supplies}"
    );
    assert!((start.oil - after.oil - oil).abs() < 0.01, "{oil}");
    assert!(german
        .iter()
        .flat_map(|&i| &sim.world.units[i].unit.divisions)
        .all(|d| !d.no_supplies && !d.no_fuel));

    // An empty stockpile: every draw fails.
    let corps = sim
        .world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    sim.world.countries.get_mut("GER").unwrap().stock.supplies = 0.0;
    let before: Vec<f64> = sim.world.units[corps]
        .unit
        .divisions
        .iter()
        .map(|d| d.organisation.unwrap())
        .collect();
    sim.tick();
    for (d, b) in sim.world.units[corps].unit.divisions.iter().zip(before) {
        assert!(d.no_supplies);
        // Full ORG: −0.5 a tenth at a time, kept at most at the maximum.
        assert!((b - d.organisation.unwrap() - 0.05).abs() < 1e-4);
    }
}

/// A division without fuel takes three times as long over a hop
/// (`combat[210]`).
#[test]
fn no_fuel_triples_the_hop() {
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let corps = scenario
        .countries
        .iter()
        .flat_map(|c| &c.units)
        .find(|u| u.name == "VIII. Armeekorps")
        .unwrap();
    let link = ctx.adjacency.link(300, 299).unwrap();
    let cond = dh_sim::movement::MoveConditions::default();
    let mut divisions = corps.divisions.clone();
    assert_eq!(ctx.hop_hours(&divisions, 300, link, false, &cond), Some(21));
    divisions[0].no_fuel = true;
    // 21 h means distance / speed is in 21..22 h, so 63..66 h.
    let h = ctx.hop_hours(&divisions, 300, link, false, &cond).unwrap();
    assert!((63..66).contains(&h), "{h}");
}

/// Germany at the start of 1936: IC 128 (142 national IC, peacetime
/// modifier 0.9; the game has 135 with Hess's +5 %, ministers are not
/// modelled), TC 211 (1.5 per IC, ×1.1 from technology 1310's `tc_mod`),
/// load 62 from its divisions' daily needs (as the independent
/// derivation got), and the national supply efficiency TC/load at most 1.
#[test]
fn germany_ic_and_transport_capacity_in_1936() {
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let dir = std::env::var_os("DH_GAME_DIR").unwrap();
    let (mut world, _) = World::from_scenario(&scenario);
    world.load_policies(&Vfs::new(&dir)).unwrap();
    world.load_techs(&Vfs::new(&dir));
    world.update_logistics(&ctx);
    let ger = &world.countries["GER"];
    eprintln!(
        "GER ic {} tc {} load {} ese {}",
        ger.ic, ger.tc, ger.load, ger.ese
    );
    assert_eq!(ger.ic, 128);
    assert!((ger.tc_bonus - 0.1).abs() < 1e-6);
    assert_eq!(ger.tc, 211);
    assert_eq!(ger.load, 62);
    let ese = (ger.tc as f32 / ger.load as f32).min(1.0);
    assert_eq!(ger.ese, ese);
}

/// Reinforcement on the 1936 map: with no IC on the slider (the starting
/// split) nothing happens; with all of it, a VIII. Armeekorps division at
/// half strength gains `100 / time` a day, `time` being its model's build
/// time · 0.5, and costs `0.8 · manpower / time` manpower.
#[test]
fn divisions_reinforce_from_ic_and_manpower() {
    use dh_sim::{Logistics, Reinforce};
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let dir = std::env::var_os("DH_GAME_DIR").unwrap();
    let (mut world, _) = World::from_scenario(&scenario);
    world.load_policies(&Vfs::new(&dir)).unwrap();
    let corps = world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    world.units[corps].unit.divisions[0].strength = Some(50.0);
    world.update_logistics(&ctx);
    let mut idle = Simulation::new(world.clone(), 1);
    idle.add_system(Reinforce::new(ctx.clone()));
    idle.run_hours(24);
    assert_eq!(
        idle.world.units[corps].unit.divisions[0].strength,
        Some(50.0)
    );

    world
        .countries
        .get_mut("GER")
        .unwrap()
        .sliders
        .reinforcement = 1.0;
    let d = &world.units[corps].unit.divisions[0];
    let model = ctx.units.division_model(&d.kind, d.model).unwrap();
    let time = (model.get("buildtime") * 0.5).max(1.0) as f32;
    let manpower = 0.8 * model.get("manpower") as f32 / time;
    let before = world.countries["GER"].stock.manpower as f32;
    let mut sim = Simulation::new(world, 1);
    sim.add_system(Logistics::new(ctx.clone()));
    sim.add_system(Reinforce::new(ctx.clone()));
    sim.run_hours(24);
    let w = &sim.world;
    assert_eq!(w.countries["GER"].ese, 1.0);
    let gained = w.units[corps].unit.divisions[0].strength.unwrap() as f32 - 50.0;
    let used = before - w.countries["GER"].stock.manpower as f32;
    // Berlin is the corps' own province, so the distance factor is 1.
    assert!(
        (gained - 100.0 / time).abs() < 1e-3,
        "{gained} vs {}",
        100.0 / time
    );
    assert!((used - manpower).abs() < 1e-3, "{used} vs {manpower}");
}

/// Germany's 1936 cabinet: Hess (Silent Workhorse) +5 % production gives
/// IC 135 and so TC 223, as the independent derivation found; Beck (School
/// of Manoeuvre) ×1.1 land speed; Fritsch (Armoured Spearhead Doctrine)
/// armour time and cost ×0.95 and attack +0.05; Frick (Prince of Terror)
/// +0.15 non-national production and ×1.1 consumer goods.
#[test]
fn german_cabinet_modifiers() {
    use dh_sim::ministers::{ATTACK, COST, TIME};
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let dir = std::env::var_os("DH_GAME_DIR").unwrap();
    let vfs = Vfs::new(&dir);
    let (mut world, _) = World::from_scenario(&scenario);
    world.load_policies(&vfs).unwrap();
    world.load_techs(&vfs);
    world.load_ministers(&vfs, &ctx.units);
    let m = &world.countries["GER"].ministers;
    assert_eq!(m.production, 1.05);
    assert!((m.non_national_production - 0.15).abs() < 1e-6);
    assert!((m.consumer - 1.1).abs() < 1e-6);
    assert!((m.speed - 1.1).abs() < 1e-6);
    let armor = m.unit("armor");
    assert!((armor[TIME] - 0.95).abs() < 1e-6 && (armor[COST] - 0.95).abs() < 1e-6);
    assert!((armor[ATTACK] - 0.05).abs() < 1e-6);
    assert_eq!(m.unit("infantry")[ATTACK], 0.0);
    world.update_logistics(&ctx);
    let ger = &world.countries["GER"];
    assert_eq!((ger.ic, ger.tc), (135, 223));
}

/// Germany's first day of 1936 (economy.md §7), at 1936-01-02 00:00 with
/// the cabinet, policies and technologies loaded and the AI on Normal.
/// Expected values come from the game files: Germany controls 38
/// provinces, all national, whose `Province.csv` columns sum to energy
/// 759, metal 159, rare materials 70, oil 2 and manpower 61 (worked out
/// with a separate script); the peacetime IC modifier is 0.9 and its IC
/// 135 with the starting sliders (consumer goods 0.4, supplies 0.4).
/// - Resources: output · 0.9, less 54 IC of supplies and 54 of consumer
///   goods (metal 1, energy 2, rare materials 0.5 each). The game also
///   spends ~8.8 IC on its production queue and turns up to 135 energy into
///   13.5 oil (technology 5190); neither is modelled.
/// - Supplies: 4 · 0.4 · 135 = +216, no troops drawing (OrgRegain is off).
///   East Prussia (304, 510) is cut off by the Polish corridor; the game
///   may send its output to a provincial depot and merges Elbing's
///   `supplypool = 100`; here all goes to the national stockpile and pools
///   are not read.
/// - Money: CG_TO_MONEY 0.9 (free_market 5) · 135 · 0.4 · 0.25 = 12.15
///   (tech team salaries are not modelled).
/// - Manpower: 0.01 · 61 · MP_GROWTH 1.02 (defense_lobby 6) · relative
///   manpower 1.0 (0.9 + 0.05 from each of technologies 5010 and 5020).
/// - The AI then asks for 0.8 · 0.2 · 1.36 · 1.1 = 0.23936 consumer goods
///   (difficulty DISSENT +20 for the AI, CG_DEMAND 1.36, Frick ×1.1) and
///   puts the rest on supplies, no division needing reinforcement.
#[test]
fn germany_first_day_of_the_economy() {
    use dh_sim::{Economy, Logistics};
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let ctx = Arc::new(ctx);
    let vfs = game_vfs().unwrap();
    let (mut world, _) = World::from_scenario(&scenario);
    world.load_misc(&vfs).unwrap();
    world.load_policies(&vfs).unwrap();
    world.load_techs(&vfs);
    world.load_ministers(&vfs, &ctx.units);
    let ger = &world.countries["GER"];
    assert!((ger.relative_manpower - 1.0).abs() < 1e-6);
    assert_eq!((ger.supply_modifier, ger.ministers.supplies), (1.0, 1.0));
    assert_eq!((ger.ministers.money, ger.ministers.energy), (1.0, 1.0));
    let man = &world.countries["MAN"].free;
    assert_eq!(
        (man.energy, man.metal, man.rare_materials),
        (14.0, 7.0, 4.0)
    );

    let mut sums = [0.0f32; 5];
    for (&p, tag) in &world.controller {
        if tag == "GER" {
            let i = ctx.province(p).unwrap();
            assert!(world.countries["GER"].national.contains(&p));
            for (s, v) in
                sums.iter_mut()
                    .zip([i.energy, i.metal, i.rare_materials, i.oil, i.manpower])
            {
                *s += v;
            }
        }
    }
    assert_eq!(sums, [759.0, 159.0, 70.0, 2.0, 61.0]);

    let before = world.countries["GER"].stock;
    let mut economy = Economy::new(ctx.clone());
    economy.difficulty = dh_data::Difficulty::load(&vfs).unwrap();
    let mut sim = Simulation::new(world, 1);
    sim.add_system(economy);
    sim.add_system(Logistics::new(ctx.clone()));
    sim.run_hours(24);
    assert_eq!(sim.date().to_string(), "1936-01-02 00:00");
    let ger = &sim.world.countries["GER"];
    assert_eq!(ger.ic, 135);
    let after = ger.stock;
    let delta = |a: f64, b: f64| a - b;
    let close = |a: f64, b: f64| (a - b).abs() < 1e-3;
    eprintln!(
        "GER before {before:?}\nGER after  {after:?}\nsliders {:?}",
        ger.sliders
    );
    assert!(close(
        delta(after.energy, before.energy),
        683.1 - 108.0 - 108.0
    ));
    assert!(close(delta(after.metal, before.metal), 143.1 - 54.0 - 54.0));
    assert!(close(
        delta(after.rare_materials, before.rare_materials),
        63.0 - 27.0 - 27.0
    ));
    assert!(close(delta(after.oil, before.oil), 1.8));
    assert!(close(delta(after.supplies, before.supplies), 216.0));
    assert!(close(delta(after.money, before.money), 12.15));
    assert!((delta(after.manpower, before.manpower) - 0.6222).abs() < 1e-4);
    let s = ger.sliders;
    assert!((s.consumer - 0.23936).abs() < 1e-5, "{s:?}");
    assert_eq!((s.production, s.reinforcement, s.upgrade), (0.0, 0.0, 0.0));
    assert!((s.supplies - (1.0 - s.consumer)).abs() < 1e-6);
}

/// The reinforcement IC need the AI's slider follows (`C+0x39F4`): a
/// VIII. Armeekorps division at half strength needs half its reinforcement
/// cost a day (full rate: supply efficiency 1, manpower to spare, Berlin);
/// the AI gives it that share of the IC up to its cap of 0.1. With the IC
/// on the slider to finish it today, it no longer counts (`0x450368`).
#[test]
fn reinforcement_need_sets_the_ai_slider() {
    let Some((ctx, scenario)) = load() else {
        return;
    };
    let dir = std::env::var_os("DH_GAME_DIR").unwrap();
    let (mut world, _) = World::from_scenario(&scenario);
    world.load_policies(&Vfs::new(&dir)).unwrap();
    world.update_logistics(&ctx);
    assert_eq!(world.reinforcement_need(&ctx, "GER"), 0.0);
    let corps = world
        .units
        .iter()
        .position(|u| u.unit.name == "VIII. Armeekorps")
        .unwrap();
    world.units[corps].unit.divisions[0].strength = Some(50.0);
    let d = &world.units[corps].unit.divisions[0];
    let model = ctx.units.division_model(&d.kind, d.model).unwrap();
    let cost = (model.get("cost") * 0.8 * model.get("reinforce_cost")) as f32;
    let need = world.reinforcement_need(&ctx, "GER");
    assert!((need - 0.5 * cost).abs() < 1e-4, "{need} vs {}", 0.5 * cost);

    let ic = world.countries["GER"].ic as f32;
    world.set_ai_sliders(&ctx, "GER", 0.0, 0.1);
    let s = world.countries["GER"].sliders;
    assert!(
        (s.reinforcement - (need / ic).min(0.1)).abs() < 1e-6,
        "{s:?}"
    );
    assert!((s.consumer + s.supplies + s.reinforcement - 1.0).abs() < 1e-6);

    // All the IC cannot bring it back faster than `100 / time` a day…
    let slider = |w: &mut World, x| w.countries.get_mut("GER").unwrap().sliders.reinforcement = x;
    slider(&mut world, 1.0);
    assert_eq!(world.reinforcement_need(&ctx, "GER"), need);
    // …but finishes one a hair below full strength, which then needs nothing.
    world.units[corps].unit.divisions[0].strength = Some(99.99);
    assert_eq!(world.reinforcement_need(&ctx, "GER"), 0.0);
    slider(&mut world, 0.0);
    assert!(world.reinforcement_need(&ctx, "GER") > 0.0);
}
