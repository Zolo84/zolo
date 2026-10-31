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

/// Germany's stockpiles in the 1936 scenario (`scenarios/1936/germany.inc`).
#[test]
fn scenario_stockpiles() {
    let Some(vfs) = vfs() else { return };
    let mut warnings = Vec::new();
    let s = Scenario::load(&vfs, "scenarios/1936.eug", &mut warnings).unwrap();
    let ger = s.countries.iter().find(|c| c.tag == "GER").unwrap();
    let st = ger.stockpiles;
    assert_eq!(
        (
            st.supplies,
            st.oil,
            st.manpower,
            st.money,
            st.transports,
            st.escorts
        ),
        (2000.0, 500.0, 850.0, 70.0, 35.0, 23.0)
    );
    assert_eq!(
        (st.energy, st.metal, st.rare_materials),
        (1000.0, 1000.0, 500.0)
    );
}

/// Germany's 1936 cabinet resolves to its ministers and their personalities:
/// Rudolf Hess, head of government, is a Silent Workhorse (+5 % production).
#[test]
fn german_cabinet_and_personalities() {
    use dh_data::ministers::cabinet_from;
    use dh_data::{Ministers, Personalities};
    let Some(vfs) = vfs() else { return };
    let mut warnings = Vec::new();
    let ministers = Ministers::load(&vfs, &mut warnings);
    let personalities = Personalities::load(&vfs).unwrap();
    assert_eq!(personalities.by_name.len(), 81);
    let s = Scenario::load(&vfs, "scenarios/1936.eug", &mut warnings).unwrap();
    let ger = s.countries.iter().find(|c| c.tag == "GER").unwrap();
    let cabinet = cabinet_from(&ger.raw);
    assert_eq!(cabinet, std::array::from_fn(|i| Some(i as i64 + 1)));
    for (slot, id) in cabinet.iter().enumerate() {
        let m = &ministers.by_id[&id.unwrap()];
        assert_eq!((m.country.as_str(), m.post), ("GER", Some(slot)), "{m:?}");
        assert!(personalities.get(&m.personality).is_some(), "{m:?}");
    }
    let hess = &ministers.by_id[&2];
    assert_eq!(hess.name, "Rudolf Hess");
    let p = personalities.get(&hess.personality).unwrap();
    assert!(p
        .commands
        .iter()
        .any(|c| c.kind == "production" && c.value == 0.05));
}

/// The events of the 1936 scenario (`re/events/events.md` §1.4): 114 files
/// (the `.eug`'s `AI_*.txt` and those of `db/events.txt`), 2255 events,
/// no repeated ID; every trigger key is one the game knows.
#[test]
fn scenario_1936_events() {
    use dh_data::events::{PairKind, Subject, Trigger};
    let Some(vfs) = vfs() else { return };
    let mut warnings = Vec::new();
    let scenario = Scenario::load(&vfs, "scenarios/1936.eug", &mut warnings).unwrap();
    let mut warnings = Vec::new();
    let db = dh_data::EventDb::load(&vfs, &scenario.root, &mut warnings);
    assert!(warnings.is_empty(), "{warnings:?}");
    assert!(db.missing.is_empty());
    assert_eq!(db.files.len(), 114);
    assert_eq!(db.files[0], "db\\events\\AI_GER.txt");
    assert_eq!((db.events.len(), db.distinct_ids()), (2255, 2255));
    assert!(db.dropped_triggers.is_empty(), "{:?}", db.dropped_triggers);
    let count = |f: &dyn Fn(&dh_data::Event) -> bool| db.events.iter().filter(|e| f(e)).count();
    assert_eq!(count(&|e| e.random), 65);
    assert_eq!(count(&|e| e.invention), 16);
    assert_eq!(
        count(&|e| !e.random && !e.invention && !e.date.is_set()),
        239,
        "only through `trigger`"
    );

    // Rhineland (§6): one action, 14 commands, `trigger` 51 and 52.
    let e = db.get(2060).unwrap();
    assert!(e.file.to_ascii_lowercase().ends_with("germany.txt"));
    assert_eq!((e.date.year, e.date.month, e.date.day), (1936, 2, 6));
    let Trigger::And(top) = &e.trigger else {
        panic!()
    };
    assert_eq!(top[0], Trigger::Ai(Subject::Yes));
    assert!(matches!(
        &top[1],
        Trigger::Not(c) if matches!(c[0], Trigger::Pair { kind: PairKind::War, .. })
    ));
    assert_eq!(e.actions.len(), 1);
    assert_eq!(e.actions[0].commands.len(), 14);
    let triggered: Vec<f64> = e.actions[0]
        .commands
        .iter()
        .filter(|c| c.kind == "trigger")
        .map(|c| c.which_num())
        .collect();
    assert_eq!(triggered, [51.0, 52.0]);
    let uk = db.get(51).unwrap();
    assert_eq!(uk.country.as_deref(), Some("ENG"));
    assert!(uk.persistent && !uk.date.is_set());
}
