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
