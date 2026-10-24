//! Зонд: блокові координати камери для першої GER-стопки юнітів (1933).
//! Запуск: cargo run -p dh-engine --example units_cam
#[path = "../src/sim_link.rs"]
mod sim_link;

fn main() -> anyhow::Result<()> {
    let paths = dh_format::GamePaths::from_steam()?;
    // А4: єдиний завантажувач — dh-data через VFS, далі from_scenario.
    let vfs = dh_data::open_install(&paths.root);
    let mut warnings = Vec::new();
    let data = dh_data::Scenario::load(&vfs, "scenarios/1933.eug", &mut warnings)?;
    let link = sim_link::SimLink::from_scenario(&vfs, &data)?;
    let stacks = link.unit_stacks();
    let ger = stacks
        .iter()
        .find(|s| s.tag == "GER")
        .expect("GER units in 1933");
    let map = dh_format::map::load(&paths)?;
    let b = map.bounds.get(ger.prov as usize).expect("bounds");
    println!(
        "GER stack: prov {} ({} дивізій), блок {} ,{}",
        ger.prov,
        ger.divisions,
        (b.x1 + b.x2) / 2 / 32,
        (b.y1 + b.y2) / 2 / 32
    );
    let total: usize = stacks.iter().map(|s| s.divisions).sum();
    println!("стопок: {}, дивізій усього: {}", stacks.len(), total);
    Ok(())
}
