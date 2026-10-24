//! Зонд: звірка стартових власників нашого World (dh-core::build_world)
//! проти dh-sim (World::from_scenario), сценарій 1933.
//!
//! Запуск: cargo run -p dh-engine --example sim_diff

#[path = "../src/sim_link.rs"]
mod sim_link;

use dh_core::world::build_world;
use sim_link::SimLink;

fn main() -> anyhow::Result<()> {
    let paths = dh_format::GamePaths::from_steam()?;
    // А4: один парс сценарію — dh-data через VFS; з нього і наш World, і sim.
    let vfs = dh_data::open_install(&paths.root);
    let mut warnings = Vec::new();
    let data = dh_format::scenario::load_data(&vfs, "scenarios/1933.eug", &mut warnings)?;
    let sc = dh_format::scenario::from_data(&data)?;
    let csv = dh_format::province::load(&paths.root.join("map/Map_1/Province.csv"))?;
    let our = build_world(&sc, &csv, 3);
    let link = SimLink::from_scenario(&vfs, &data)?;

    let our_tag = |i: Option<usize>| -> String {
        i.map(|k| our.countries[k].tag.as_str().to_string())
            .unwrap_or_else(|| "-".into())
    };

    let mut diffs = 0usize;
    let mut our_only = 0usize;
    let mut sim_only = 0usize;
    let mut ctrl_diffs = 0usize;
    let mut diff_tags: Vec<(String, String)> = Vec::new();
    let mut samples: Vec<String> = Vec::new();
    for p in &our.provinces {
        let pid = p.id as u32;
        let o = our_tag(p.owner);
        let oc = our_tag(p.controller);
        let s = link
            .sim
            .world
            .owner
            .get(&pid)
            .cloned()
            .unwrap_or_else(|| "-".into());
        let sc = link
            .sim
            .world
            .controller
            .get(&pid)
            .cloned()
            .unwrap_or_else(|| "-".into());
        if o != s {
            diffs += 1;
            if o != "-" && s == "-" {
                our_only += 1;
            } else if o == "-" && s != "-" {
                sim_only += 1;
            }
            diff_tags.push((o.clone(), s.clone()));
            if samples.len() < 25 {
                samples.push(format!("  prov {pid}: наш owner={o} sim={s}"));
            }
        }
        if oc != sc {
            ctrl_diffs += 1;
            if samples.len() < 25 && ctrl_diffs <= 10 {
                samples.push(format!("  CONTROLLER prov {pid}: наш={oc} sim={sc}"));
            }
        }
    }
    println!(
        "наш світ: {} пров. з власником",
        our.provinces.iter().filter(|p| p.owner.is_some()).count()
    );
    println!("sim: {} пров. з власником", link.sim.world.owner.len());
    println!(
        "країн: наш={}, sim={}",
        our.countries.len(),
        link.sim.world.countries.len()
    );
    println!("розбіжностей owner: {diffs} (лише в нас: {our_only}, лише в sim: {sim_only})");
    println!("розбіжностей controller: {ctrl_diffs}");
    // Хто найчастіше фігурує в розбіжностях.
    let mut counts: Vec<(String, usize)> = diff_tags
        .iter()
        .flat_map(|(o, s)| [o.clone(), s.clone()])
        .filter(|t| t != "-")
        .fold(std::collections::HashMap::new(), |mut m, t| {
            *m.entry(t).or_default() += 1;
            m
        })
        .into_iter()
        .collect::<Vec<_>>();
    counts.sort_by(|a, b| b.1.cmp(&a.1));
    println!(
        "теги-учасники розбіжностей (топ-10): {:?}",
        &counts[..counts.len().min(10)]
    );
    for s in &samples {
        println!("{s}");
    }
    Ok(())
}
