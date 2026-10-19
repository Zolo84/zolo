//! Checks against a real Darkest Hour install; skipped unless `DH_GAME_DIR` is set.

use dh_data::{Branch, Scenario, UnitDb, Vfs};

fn vfs() -> Option<Vfs> {
    let dir = std::path::PathBuf::from(std::env::var_os("DH_GAME_DIR")?);
    dir.is_dir().then(|| Vfs::new(dir))
}

#[test]
fn unit_database_matches_shipped_counts() {
    let Some(vfs) = vfs() else { return };
    let mut warnings = Vec::new();
    let db = UnitDb::load(&vfs, &mut warnings).unwrap();
    assert!(warnings.is_empty(), "{warnings:?}");
    let models = |it: &mut dyn Iterator<Item = usize>| it.sum::<usize>();
    // docs/spec/units.md §17.1: 31 division types / 179 models, 27 brigade types / 87 models.
    assert_eq!(db.divisions.len(), 31);
    assert_eq!(db.brigades.len(), 27);
    assert_eq!(
        models(&mut db.divisions.values().map(|c| c.models.len())),
        179
    );
    assert_eq!(
        models(&mut db.brigades.values().map(|c| c.models.len())),
        87
    );
    assert_eq!(db.divisions["infantry"].branch, Branch::Land);
    assert_eq!(db.divisions["interceptor"].branch, Branch::Air);
    assert_eq!(db.divisions["destroyer"].branch, Branch::Naval);
}

#[test]
fn every_1936_division_resolves_and_moves_sensibly() {
    let Some(vfs) = vfs() else { return };
    let mut warnings = Vec::new();
    let db = UnitDb::load(&vfs, &mut warnings).unwrap();
    let scenario = Scenario::load(&vfs, "scenarios/1936.eug", &mut warnings).unwrap();
    let (mut total, mut speeds) = (0, std::collections::BTreeMap::new());
    for unit in scenario.countries.iter().flat_map(|c| &c.units) {
        for d in unit
            .divisions
            .iter()
            .chain(unit.carried.iter().flat_map(|u| &u.divisions))
        {
            let stats = db
                .division_stats(d)
                .unwrap_or_else(|| panic!("unresolved division {} ({})", d.name, d.kind));
            assert!(stats.max_speed >= 0.0);
            total += 1;
            let key = format!(
                "{}{}",
                d.kind,
                d.brigades
                    .first()
                    .map(|b| format!("+{}", b.kind))
                    .unwrap_or_default()
            );
            speeds.entry(key).or_insert(stats.max_speed);
        }
    }
    eprintln!(
        "{total} divisions; sample speeds: {:?}",
        speeds.iter().take(12).collect::<Vec<_>>()
    );
    assert!(total > 1600);
}
