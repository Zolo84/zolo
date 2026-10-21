//! Movement against a real Darkest Hour install; skipped unless `DH_GAME_DIR` is set.

use dh_data::{Scenario, Vfs};
use dh_sim::march::March;
use dh_sim::movement::MoveContext;
use dh_sim::{Simulation, World};
use std::sync::Arc;

fn load() -> Option<(MoveContext, Scenario)> {
    let dir = std::path::PathBuf::from(std::env::var_os("DH_GAME_DIR")?);
    let vfs = Vfs::new(dir);
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
/// every run, after 11–24 hours (mean 15.5).
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
