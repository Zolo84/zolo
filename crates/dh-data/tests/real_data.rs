//! Checks against a real Darkest Hour install; skipped unless `DH_GAME_DIR` is set.

use dh_data::leaders::traits;
use dh_data::{Branch, Leaders, Scenario, UnitDb, Vfs};

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

#[test]
fn leader_files_load_completely() {
    let Some(vfs) = vfs() else { return };
    let mut warnings = Vec::new();
    let leaders = Leaders::load(&vfs, &mut warnings).unwrap();
    assert!(warnings.is_empty(), "{warnings:?}");
    // docs/spec/leaders-ministers-misc.md §3.3: 180 files, 16 757 records, no duplicate IDs.
    assert_eq!(leaders.len(), 16757);
    let rundstedt = leaders.get(335).unwrap();
    assert_eq!(
        (rundstedt.name.as_str(), rundstedt.country.as_str()),
        ("von Rundstedt", "GER")
    );
    assert_eq!(rundstedt.rank_years, [1940, 1930, 1930, 1930]);
    assert_eq!((rundstedt.skill, rundstedt.max_skill), (5, 8));
    assert!(rundstedt.has_trait(traits::OFFENSIVE_DOCTRINE));
    assert!(rundstedt.has_trait(traits::DEFENSIVE_DOCTRINE));
    assert_eq!(rundstedt.branch, Some(Branch::Land));
    assert_eq!((rundstedt.start_year, rundstedt.end_year), (1930, 1960));
    assert_eq!(rundstedt.retirement_year, None);
    let long_yun = leaders.get(501006).unwrap();
    assert_eq!(
        (
            long_yun.country.as_str(),
            long_yun.rank_years[1],
            long_yun.ideal_rank
        ),
        ("CYN", 1930, Some(1))
    );
    // Vanilla land leaders only carry trait bits 0..9 (§3.5).
    assert!(leaders
        .by_id
        .values()
        .filter(|l| l.branch == Some(Branch::Land))
        .all(|l| l.traits < 1 << 10));
}

/// The nine technology files load; `allow_dig_in` comes only with Basic
/// Construction Engineering (5080), and the seven cryptography
/// applications each add 15 to land surprise (land-combat.md §3.7, §4.4).
#[test]
fn tech_effects_load() {
    let Some(vfs) = vfs() else { return };
    let mut warnings = Vec::new();
    let techs = dh_data::Techs::load(&vfs, &mut warnings);
    assert!(warnings.is_empty(), "{warnings:?}");
    let with = |kind: &str, which: Option<&str>| -> Vec<i64> {
        techs
            .effects
            .iter()
            .filter(|(_, commands)| {
                commands
                    .iter()
                    .any(|c| c.kind == kind && c.which.as_deref() == which)
            })
            .map(|(&id, _)| id)
            .collect()
    };
    assert_eq!(with("allow_dig_in", None), [5080]);
    let surprise = with("surprise", Some("land"));
    assert_eq!(surprise, [5350, 5360, 5370, 5380, 5390, 5400, 13060]);
    for id in surprise {
        let land = techs
            .commands(id)
            .iter()
            .find(|c| c.kind == "surprise" && c.which.as_deref() == Some("land"))
            .unwrap();
        assert_eq!(land.value, Some(15.0));
    }
}

/// `db/misc.txt` of the game and of the mod `settings.cfg` selects.
#[test]
fn misc_values_by_position_with_the_selected_mod() {
    use dh_data::{open_install, Misc, Settings};
    let Some(vfs) = vfs() else { return };
    let misc = Misc::load(&vfs).unwrap();
    assert_eq!(misc.len("combat"), 263);
    assert_eq!(misc.len("country"), 45);
    assert_eq!(misc.get("combat", 1), Some(3.0)); // land XP gain factor
    assert_eq!(misc.get("combat", 17), Some(-0.2)); // surprise
    assert_eq!(misc.get("country", 44), Some(20.0)); // dig-in maximum

    let settings = Settings::parse(&vfs.read("settings.cfg").unwrap());
    assert_eq!(
        settings.mod_dir().as_deref(),
        Some("Mods/Darkest Hour Full")
    );
    let modded = Misc::load(&open_install(&vfs.roots()[0])).unwrap();
    assert_eq!(modded.len("combat"), 263);
    assert_eq!(modded.get("combat", 17), Some(-0.4));
    assert_eq!(modded.get("combat", 41), Some(6.0));
    assert_eq!(modded.get("country", 44), Some(30.0));
}

/// `ardennes.eug` is the shipped scenario with weather: one front over the
/// Ardennes and 49 provinces under snow.
#[test]
fn ardennes_scenario_weather() {
    use dh_data::{Weather, WeatherSetup};
    let Some(vfs) = vfs() else { return };
    let mut warnings = Vec::new();
    let s = Scenario::load(&vfs, "scenarios/ardennes.eug", &mut warnings).unwrap();
    let WeatherSetup {
        is_static,
        patterns,
    } = &s.weather;
    assert!(!is_static);
    assert_eq!(patterns.len(), 1);
    assert_eq!(patterns[0].centre, Some(71));
    assert_eq!(patterns[0].provinces.len(), 49);
    // `heading = "northwest"` is quoted, so the game ignores it.
    assert_eq!(patterns[0].heading, None);
    let snowing = s
        .provinces
        .iter()
        .filter(|p| p.weather == Some(Weather::Snowing))
        .count();
    assert_eq!(snowing, 49);
    assert!(s
        .provinces
        .iter()
        .all(|p| p.weather != Some(Weather::Clear)));
}
