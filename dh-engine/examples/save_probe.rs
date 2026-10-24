//! Зонд Б.8: зробити сейв (1933 + 10 діб з подіями) → файл сейву →
//! повторне завантаження через savegame → звірка дати/власників.
//! Запуск: cargo run -p dh-engine --example save_probe

#[path = "../src/sim_link.rs"]
mod sim_link;

use anyhow::Result;
use dh_core::time::{GameTime, TimeEvent};
use dh_core::world::build_world;

fn main() -> Result<()> {
    let paths = dh_format::GamePaths::from_steam()?;
    // 1) 1933 → світ + події → 10 діб.
    let vfs = dh_data::open_install(&paths.root);
    let mut warnings = Vec::new();
    let data = dh_format::scenario::load_data(&vfs, "scenarios/1933.eug", &mut warnings)?;
    let sc = dh_format::scenario::from_data(&data)?;
    let prov_csv = dh_format::province::load(&paths.root.join("map/Map_1/Province.csv"))?;
    let mut world = build_world(&sc, &prov_csv, 3);
    // Події (та сама логіка, що bootstrap_events у бінарнику).
    let files = sc.events.clone();
    let read = |p: &str| vfs.read(p).map_err(|e| anyhow::anyhow!("{p}: {e}"));
    let db = dh_core::events::EventDb::load(&files, &read)?;
    let db = std::sync::Arc::new(db);
    world.attach_events(db.clone(), 0xD412_0002);
    let loc = dh_data::Localisation::load(&vfs, dh_data::localisation::Language::English);
    if let Some(engine) = world.event_engine.as_mut() {
        for def in db.events.values() {
            if let Some(k) = &def.name {
                engine
                    .names
                    .entry(k.clone())
                    .or_insert_with(|| loc.text(k).to_owned());
            }
        }
    }

    let mut gt = GameTime::new(world.date);
    for _ in 0..10 {
        let ev = gt.advance(
            dh_core::time::SPEED_MS_PER_DAY[world.speed as usize],
            world.speed,
        );
        for e in ev {
            if matches!(e, TimeEvent::DayTick(_)) {
                world.tick_day();
            }
        }
    }
    let owners_before = world.provinces.iter().filter(|p| p.owner.is_some()).count();
    let fired: Vec<u64> = world
        .event_engine
        .as_ref()
        .map(|e| e.snapshot().0)
        .unwrap_or_default();
    println!(
        "до сейву: дата {}, власників {}, подій спрацювало {}",
        world.date.display(),
        owners_before,
        fired.len()
    );

    // 2) Сейв → файл (голий текст; bz2 теж читається — тест savegame).
    let text = dh_core::save::save_world_text(&world, "probe", &files);
    let out = "/tmp/dh-probe-save.eug";
    std::fs::write(out, &text)?;
    println!("сейв: {out} ({} байт)", text.len());

    // 3) Завантаження сейву тим самим шляхом, що --save у бінарнику.
    let sc2 = dh_format::savegame::load(std::path::Path::new(out))?;
    let world2 = build_world(&sc2, &prov_csv, 3);
    println!(
        "після завантаження: дата {}, країн {}, власників {}, подій-файлів {}, історія подій {}",
        world2.date.display(),
        world2.countries.len(),
        world2
            .provinces
            .iter()
            .filter(|p| p.owner.is_some())
            .count(),
        sc2.events.len(),
        sc2.events_history.len()
    );
    assert_eq!(world2.date, world.date, "дата сейву відновилась");
    // Власники — попіксельно однакові.
    for (a, b) in world.provinces.iter().zip(world2.provinces.iter()) {
        assert_eq!(a.owner, b.owner, "owner пров. {}", a.id);
        assert_eq!(a.controller, b.controller, "controller пров. {}", a.id);
        assert_eq!(a.occupied, b.occupied, "occupied пров. {}", a.id);
    }
    // Капітоли відновлені.
    for c in &world.countries {
        if let Some(cap) = c.capital {
            let c2 = &world2.countries[world2.tags[&c.tag]];
            assert_eq!(c2.capital, Some(cap), "capital {}: {}", c.tag.as_str(), cap);
        }
    }
    // Історія подій переноситься.
    assert_eq!(sc2.events_history, fired, "events_history");
    // VP провінцій зберігаються.
    let vp_before = world.provinces.iter().filter(|p| p.has_vp).count();
    let vp_after = world2.provinces.iter().filter(|p| p.has_vp).count();
    assert_eq!(vp_before, vp_after, "has_vp до/після сейву");
    println!(
        "OK: дата, власники/контролери/окупації, капітоли, історія подій, VP ({vp_before}) — 1:1"
    );
    Ok(())
}
