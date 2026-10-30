//! `dh-tool` — inspection and reverse-engineering helper for Darkest Hour data.

mod probe;
mod render;

use dh_data::{
    load_script, localisation::Language, Localisation, Provinces, Scenario, Vfs, Warning,
};
use dh_sim::{Simulation, World};
use std::collections::BTreeMap;
use std::path::PathBuf;
use std::process::ExitCode;

const USAGE: &str = "\
dh-tool — Darkest Hour reverse-engineering toolkit

USAGE:
  dh-tool scan      <game-dir> [--mod <dir>]          inventory files, parse every script/CSV, report errors
  dh-tool parse     <file>                            parse a script file and print it normalised
  dh-tool csv       <file> [--limit N]                print a semicolon table
  dh-tool probe     <file>                            heuristics for an unknown binary file
  dh-tool hexdump   <file> [--offset N] [--len N]     hex dump (N may be 0x-prefixed)
  dh-tool scenarios <game-dir> [--mod <dir>]          list scenarios
  dh-tool loc       <game-dir> <KEY>... [--mod <dir>] look up localisation keys
  dh-tool map       <game-dir> --out <file.png> [--level 1-4] [--mode political|terrain]
                    [--scenario <scenario.eug>] [--smoothing full|downhill|none] [--mod <dir>]
                                                      render the world map
  dh-tool adj       <game-dir> <province-id>... [--mod <dir>]
                                                      neighbours with connection types (adjacent.tbl + adj-defs.csv)
  dh-tool route     <game-dir> <from-id> <to-id> [--mod <dir>]
                                                      shortest land route (old distance model, impassable links avoided)
  dh-tool march     <game-dir> <scenario.eug> <unit name> <to-id> [--war TAG] [--mod <dir>]
                                                      march a land unit and print its hourly progress
  dh-tool sim       <game-dir> <scenario.eug> [--days N] [--mod <dir>]
                                                      load a scenario and run the headless simulation

--mod <dir> layers a mod over the game files; --mod selected uses the mod settings.cfg selects.
";

struct Args {
    positional: Vec<String>,
    options: BTreeMap<String, String>,
}

fn parse_args(raw: impl Iterator<Item = String>) -> Result<Args, String> {
    let mut args = Args {
        positional: Vec::new(),
        options: BTreeMap::new(),
    };
    let mut raw = raw.peekable();
    while let Some(a) = raw.next() {
        if let Some(name) = a.strip_prefix("--") {
            let value = raw
                .next()
                .ok_or_else(|| format!("--{name} needs a value"))?;
            args.options.insert(name.to_owned(), value);
        } else {
            args.positional.push(a);
        }
    }
    Ok(args)
}

impl Args {
    fn pos(&self, i: usize, what: &str) -> Result<&str, String> {
        self.positional
            .get(i)
            .map(String::as_str)
            .ok_or_else(|| format!("missing <{what}>\n\n{USAGE}"))
    }

    fn num(&self, name: &str, default: usize) -> Result<usize, String> {
        match self.options.get(name) {
            None => Ok(default),
            Some(v) => match v.strip_prefix("0x") {
                Some(hex) => usize::from_str_radix(hex, 16),
                None => v.parse(),
            }
            .map_err(|_| format!("--{name}: not a number: {v}")),
        }
    }

    fn vfs(&self) -> Result<Vfs, String> {
        let dir = PathBuf::from(self.pos(1, "game-dir")?);
        if !dir.is_dir() {
            return Err(format!("not a directory: {}", dir.display()));
        }
        // `--mod selected` layers the mod `settings.cfg` selects, as the game does.
        if self.options.get("mod").map(String::as_str) == Some("selected") {
            return Ok(dh_data::open_install(dir));
        }
        let mut vfs = Vfs::new(dir);
        if let Some(m) = self.options.get("mod") {
            vfs.push_root(m);
        }
        Ok(vfs)
    }
}

fn main() -> ExitCode {
    let result = parse_args(std::env::args().skip(1)).and_then(|args| {
        match args.positional.first().map(String::as_str) {
            Some("scan") => scan(&args),
            Some("parse") => parse(&args),
            Some("csv") => csv(&args),
            Some("probe") => read(args.pos(1, "file")?).map(|d| print!("{}", probe::report(&d))),
            Some("hexdump") => hexdump(&args),
            Some("scenarios") => scenarios(&args),
            Some("loc") => loc(&args),
            Some("sim") => sim(&args),
            Some("map") => map(&args),
            Some("adj") => adj(&args),
            Some("route") => route(&args),
            Some("march") => march(&args),
            Some("help" | "-h") | None => {
                print!("{USAGE}");
                Ok(())
            }
            Some(other) => Err(format!("unknown command: {other}\n\n{USAGE}")),
        }
    });
    match result {
        Ok(()) => ExitCode::SUCCESS,
        Err(e) => {
            eprintln!("error: {e}");
            ExitCode::FAILURE
        }
    }
}

fn read(path: &str) -> Result<Vec<u8>, String> {
    std::fs::read(path).map_err(|e| format!("{path}: {e}"))
}

fn print_warnings(warnings: &[Warning], limit: usize) {
    for w in warnings.iter().take(limit) {
        eprintln!("warning: {w}");
    }
    if warnings.len() > limit {
        eprintln!("... and {} more warnings", warnings.len() - limit);
    }
}

/// Counts warnings per file and per message so systematic parser gaps stand out.
fn summarize_warnings(warnings: &[Warning]) {
    let mut by_file: BTreeMap<&str, usize> = BTreeMap::new();
    let mut by_message: BTreeMap<&str, usize> = BTreeMap::new();
    for w in warnings {
        *by_file.entry(&w.file).or_default() += 1;
        *by_message.entry(&w.message).or_default() += 1;
    }
    for (title, counts) in [("files", by_file), ("messages", by_message)] {
        let mut counts: Vec<_> = counts.into_iter().collect();
        counts.sort_by_key(|(_, n)| std::cmp::Reverse(*n));
        println!("  top {title} ({} distinct):", counts.len());
        for (name, n) in counts.iter().take(15) {
            println!("    {n:>6}  {name}");
        }
    }
}

fn scan(args: &Args) -> Result<(), String> {
    let vfs = args.vfs()?;
    let files = vfs.walk();
    let mut by_ext: BTreeMap<String, (usize, u64)> = BTreeMap::new();
    let mut warnings = Vec::new();
    let mut parsed = 0;
    for f in &files {
        let ext = f
            .rsplit_once('.')
            .map(|(_, e)| e.to_ascii_lowercase())
            .unwrap_or_default();
        let size = vfs
            .resolve(f)
            .and_then(|p| p.metadata().ok())
            .map(|m| m.len())
            .unwrap_or(0);
        let entry = by_ext.entry(ext.clone()).or_default();
        entry.0 += 1;
        entry.1 += size;
        if matches!(ext.as_str(), "txt" | "eug" | "inc" | "ai") {
            parsed += 1;
            let _ = load_script(&vfs, f, &mut warnings);
        }
    }
    println!("{} files under {:?}\n", files.len(), vfs.roots());
    println!("{:<8} {:>7} {:>12}", "ext", "files", "bytes");
    let mut exts: Vec<_> = by_ext.into_iter().collect();
    exts.sort_by_key(|e| std::cmp::Reverse(e.1 .0));
    for (ext, (count, bytes)) in exts {
        println!(
            "{:<8} {count:>7} {bytes:>12}",
            if ext.is_empty() { "(none)" } else { &ext }
        );
    }
    println!(
        "\nparsed {parsed} script files: {} parse warnings",
        warnings.len()
    );
    summarize_warnings(&warnings);
    print_warnings(&warnings, 30);

    let mut warnings = Vec::new();
    match Provinces::load_active(&vfs, &mut warnings) {
        Ok(p) => println!(
            "provinces: {} rows in {}",
            p.len(),
            dh_data::province::PROVINCE_CSV
        ),
        Err(e) => println!("provinces: {e}"),
    }
    print_warnings(&warnings, 10);
    println!(
        "localisation: {} keys",
        Localisation::load(&vfs, Language::English).len()
    );
    Ok(())
}

fn parse(args: &Args) -> Result<(), String> {
    let doc = dh_text::parse(&read(args.pos(1, "file")?)?);
    print!("{}", doc.root);
    for e in &doc.errors {
        eprintln!("parse error: {e}");
    }
    if doc.errors.is_empty() {
        Ok(())
    } else {
        Err(format!("{} parse errors", doc.errors.len()))
    }
}

fn csv(args: &Args) -> Result<(), String> {
    let table = dh_text::CsvTable::parse(&read(args.pos(1, "file")?)?);
    for (line, row) in table.rows.iter().take(args.num("limit", usize::MAX)?) {
        println!("{line:>6}: {}", row.join(" | "));
    }
    Ok(())
}

fn hexdump(args: &Args) -> Result<(), String> {
    let data = read(args.pos(1, "file")?)?;
    let offset = args.num("offset", 0)?.min(data.len());
    let end = offset.saturating_add(args.num("len", 256)?).min(data.len());
    print!("{}", probe::hexdump(&data[offset..end], offset));
    Ok(())
}

fn scenarios(args: &Args) -> Result<(), String> {
    let vfs = args.vfs()?;
    let mut warnings = Vec::new();
    for s in Scenario::list(&vfs, &mut warnings) {
        let start = s.start.map(|d| d.to_string()).unwrap_or_else(|| "?".into());
        println!(
            "{:<40} {:<17} {:<40} {}",
            s.path,
            start,
            s.name,
            s.selectable.join(" ")
        );
    }
    print_warnings(&warnings, 20);
    Ok(())
}

fn loc(args: &Args) -> Result<(), String> {
    let vfs = args.vfs()?;
    let loc = Localisation::load(&vfs, Language::English);
    for key in args.positional.iter().skip(2) {
        println!("{key} = {}", loc.get(key).unwrap_or("<missing>"));
    }
    Ok(())
}

fn map(args: &Args) -> Result<(), String> {
    let vfs = args.vfs()?;
    let out = args
        .options
        .get("out")
        .ok_or("--out <file.png> is required")?;
    let level = dh_map::Level::new(args.num("level", 4)?.wrapping_sub(1) as u8)
        .ok_or("--level must be 1..4")?;
    let mode = match args.options.get("mode").map(String::as_str) {
        None | Some("political") => render::Mode::Political,
        Some("terrain") => render::Mode::Terrain,
        Some(m) => return Err(format!("unknown --mode {m}")),
    };
    let smoothing = match args.options.get("smoothing").map(String::as_str) {
        None | Some("full") => dh_map::Smoothing::Full,
        Some("downhill") => dh_map::Smoothing::DownhillOnly,
        Some("none") => dh_map::Smoothing::None,
        Some(s) => return Err(format!("unknown --smoothing {s}")),
    };
    let mut warnings = Vec::new();
    let scenario = match (mode, args.options.get("scenario")) {
        (render::Mode::Political, Some(path)) => Some(path.clone()),
        (render::Mode::Political, None) => Some("scenarios/1936.eug".to_owned()),
        _ => None,
    }
    .map(|path| Scenario::load(&vfs, &path, &mut warnings).map_err(|e| format!("{path}: {e}")))
    .transpose()?;
    let img = render::render(&vfs, level, mode, scenario.as_ref(), smoothing)?;
    render::write_png(&img, out)?;
    println!("wrote {out} ({}x{})", img.width, img.height);
    Ok(())
}

/// Adjacency graph as the game builds it: the table plus `adj-defs.csv`.
fn load_adjacency(vfs: &Vfs, provinces: &Provinces) -> Result<dh_map::Adjacency, String> {
    let bytes = vfs.read("map/adjacent.tbl").map_err(|e| e.to_string())?;
    let n = dh_map::Adjacency::infer_count(&bytes)
        .ok_or("cannot determine the province count of adjacent.tbl")?;
    let mut adj = dh_map::Adjacency::parse(&bytes, n).map_err(|e| e.to_string())?;
    if let Ok(defs) = vfs.read("map/adj-defs.csv") {
        let has_area = |p: u32| {
            provinces
                .get(p)
                .and_then(|p| p.fields.get("area"))
                .is_some_and(|a| a != "-")
        };
        for w in adj.apply_defs(&defs, has_area) {
            eprintln!("warning: adj-defs.csv: {w}");
        }
    }
    Ok(adj)
}

fn adj(args: &Args) -> Result<(), String> {
    let vfs = args.vfs()?;
    let mut warnings = Vec::new();
    let provinces = Provinces::load_active(&vfs, &mut warnings).map_err(|e| e.to_string())?;
    let loc = Localisation::load(&vfs, Language::English);
    let name = |p: u32| {
        provinces
            .get(p)
            .map(|p| loc.text(&p.name).to_owned())
            .unwrap_or_else(|| format!("#{p}"))
    };
    let adj = load_adjacency(&vfs, &provinces)?;
    for id in args.positional.iter().skip(2) {
        let p: u32 = id.parse().map_err(|_| format!("not a province id: {id}"))?;
        println!("{p} {}:", name(p));
        for l in adj.neighbours(p) {
            let via = l
                .through
                .map(|t| format!(" via {t} {}", name(t)))
                .unwrap_or_default();
            println!("  {:>5} {:<28} {}{via}", l.to, name(l.to), l.kind.name());
        }
    }
    Ok(())
}

/// Land route by straight-line distance between army positions, the game's
/// default (`DistanceCalculationModel = 0`) distance. Sea zones and
/// impassable links are excluded; real movement costs come later.
fn route(args: &Args) -> Result<(), String> {
    let vfs = args.vfs()?;
    let mut warnings = Vec::new();
    let provinces = Provinces::load_active(&vfs, &mut warnings).map_err(|e| e.to_string())?;
    let loc = Localisation::load(&vfs, Language::English);
    let adj = load_adjacency(&vfs, &provinces)?;
    let id = |i: usize| -> Result<u32, String> {
        let s = args.pos(i, "province-id")?;
        s.parse().map_err(|_| format!("not a province id: {s}"))
    };
    let (from, to) = (id(2)?, id(3)?);
    let field = |p: u32, f: &str| provinces.get(p).and_then(|p| p.fields.get(f).cloned());
    let pos = |p: u32| -> Option<(i64, i64)> {
        Some((
            field(p, "army xpos")?.parse().ok()?,
            field(p, "army ypos")?.parse().ok()?,
        ))
    };
    let is_land = |p: u32| field(p, "terrain").is_some_and(|t| !t.eq_ignore_ascii_case("ocean"));
    let dist = |a: u32, b: u32| Some(dh_map::distance::pixel_distance(pos(a)?, pos(b)?));
    let goal = pos(to).ok_or("goal has no army position")?;
    let path = dh_map::shortest_path(
        &adj,
        from,
        to,
        |p, l| {
            (l.kind != dh_map::AdjKind::Impassable && is_land(l.to))
                .then(|| dist(p, l.to))
                .flatten()
        },
        |p| {
            pos(p)
                .map(|xy| dh_map::distance::pixel_distance(xy, goal))
                .unwrap_or(0.0)
        },
    )
    .ok_or("no land route")?;
    let name = |p: u32| {
        provinces
            .get(p)
            .map(|p| loc.text(&p.name).to_owned())
            .unwrap_or_else(|| format!("#{p}"))
    };
    let mut total = 0.0;
    for pair in path.provinces.windows(2) {
        let d = dist(pair[0], pair[1]).unwrap_or(0.0) * 100.0;
        total += d;
        let kind = adj
            .link(pair[0], pair[1])
            .map(|l| l.kind.name())
            .unwrap_or("?");
        println!(
            "  {:>5} {:<24} → {:>5} {:<24} {:>5.0} km  {kind}",
            pair[0],
            name(pair[0]),
            pair[1],
            name(pair[1]),
            d
        );
    }
    println!("{} hops, {total:.0} km", path.provinces.len() - 1);
    Ok(())
}

fn march(args: &Args) -> Result<(), String> {
    use dh_sim::march::March;
    let vfs = args.vfs()?;
    let path = args.pos(2, "scenario.eug")?;
    let name = args.pos(3, "unit name")?;
    let target: u32 = args
        .pos(4, "to-id")?
        .parse()
        .map_err(|_| "to-id must be a province id")?;
    let mut warnings = Vec::new();
    let scenario = Scenario::load(&vfs, path, &mut warnings).map_err(|e| format!("{path}: {e}"))?;
    let ctx = std::sync::Arc::new(dh_sim::movement::MoveContext::load(&vfs)?);
    let provinces = Provinces::load_active(&vfs, &mut warnings).map_err(|e| e.to_string())?;
    let loc = Localisation::load(&vfs, Language::English);
    let pname = |p: u32| {
        provinces
            .get(p)
            .map(|p| loc.text(&p.name).to_owned())
            .unwrap_or_else(|| format!("#{p}"))
    };

    let (mut world, _) = World::from_scenario(&scenario);
    world
        .load_misc(&vfs)
        .map_err(|e| format!("db/misc.txt: {e}"))?;
    world.load_leaders(&vfs)?;
    world.load_techs(&vfs);
    world
        .load_policies(&vfs)
        .map_err(|e| format!("policy_effects.csv: {e}"))?;
    world.load_ministers(&vfs, &ctx.units);
    if let Some(enemy) = args.options.get("war") {
        let owner = world
            .units
            .iter()
            .find(|u| u.unit.name.eq_ignore_ascii_case(name))
            .map(|u| u.owner.clone())
            .ok_or_else(|| format!("no unit named {name:?}"))?;
        world.declare_war(&owner, &enemy.to_ascii_uppercase());
    }
    let mut sim = Simulation::new(world, 0xD412_0001);
    let index = sim
        .world
        .units
        .iter()
        .position(|u| u.unit.name.eq_ignore_ascii_case(name))
        .ok_or_else(|| format!("no unit named {name:?}"))?;
    let route = March::order(&ctx, &mut sim.world, index, target)?;
    let unit = &sim.world.units[index];
    println!(
        "{} ({}, {} divisions) at {}: route {}",
        unit.unit.name,
        unit.owner,
        unit.unit.divisions.len(),
        sim.date(),
        route
            .iter()
            .map(|&p| pname(p))
            .collect::<Vec<_>>()
            .join(" → ")
    );
    // The day's economy comes before its IC, TC and supply efficiency, and
    // those before reinforcement.
    let mut economy = dh_sim::Economy::new(ctx.clone());
    economy.difficulty = dh_data::Difficulty::load(&vfs).unwrap_or_default();
    sim.add_system(economy);
    sim.add_system(dh_sim::Logistics::new(ctx.clone()));
    sim.add_system(dh_sim::Reinforce::new(ctx.clone()));
    sim.add_system(dh_sim::WeatherSystem::new(ctx.clone()));
    sim.add_system(dh_sim::OrgRegain::new(ctx.clone()));
    sim.add_system(March::new(ctx.clone()));
    let start = sim.date();
    let mut last = route[0];
    sim.add_system(dh_sim::Engage);
    sim.add_system(dh_sim::Combat::new(ctx.clone(), &scenario));
    let limit = sim.world.hour + 24 * 365;
    while !sim.world.units[index].route.is_empty() {
        if sim.world.hour >= limit {
            let next = sim.world.units[index].route[0];
            println!(
                "  still held up before {} after a year (battles are not resolved yet)",
                pname(next)
            );
            break;
        }
        let before: Vec<u32> = sim.world.battles.iter().map(|b| b.province).collect();
        sim.tick();
        for b in sim
            .world
            .battles
            .iter()
            .filter(|b| !before.contains(&b.province))
        {
            println!(
                "  {}  attacks {} (enemy troops there)",
                sim.date(),
                pname(b.province)
            );
        }
        for p in before.iter().filter(|p| sim.world.battle_at(**p).is_none()) {
            let u = &sim.world.units[index];
            let (strength, org) = u.unit.divisions.iter().fold((0.0, 0.0), |(s, o), d| {
                (
                    s + d.strength.unwrap_or(100.0),
                    o + d.organisation.unwrap_or(0.0),
                )
            });
            let n = u.unit.divisions.len().max(1) as f64;
            let outcome = if u.route.front() == Some(p) {
                "defenders gone"
            } else {
                "attack broken off"
            };
            println!(
                "  {}  battle for {} over: {outcome} (strength {strength:.1}, average org {:.1})",
                sim.date(),
                pname(*p),
                org / n
            );
        }
        if sim.world.units[index].route.is_empty()
            && sim.world.units[index].unit.location != Some(target)
        {
            break;
        }
        let here = sim.world.units[index].unit.location.unwrap_or(last);
        if here != last {
            println!(
                "  {}  arrived in {:<24} (+{} h)",
                sim.date(),
                pname(here),
                sim.world.hour
            );
            last = here;
        }
    }
    println!("{start} → {}: {} hours", sim.date(), sim.world.hour);
    Ok(())
}

fn sim(args: &Args) -> Result<(), String> {
    let vfs = args.vfs()?;
    let path = args.pos(2, "scenario.eug")?;
    let mut warnings = Vec::new();
    let scenario = Scenario::load(&vfs, path, &mut warnings).map_err(|e| format!("{path}: {e}"))?;
    print_warnings(&warnings, 20);
    let (world, conflicts) = World::from_scenario(&scenario);
    for c in conflicts.iter().take(20) {
        eprintln!("conflict: {c}");
    }
    let loc = Localisation::load(&vfs, Language::English);
    println!(
        "{} — {} countries, {} owned provinces",
        scenario.info.name,
        world.countries.len(),
        world.owner.len()
    );
    let mut sim = Simulation::new(world, 0xD412_0001);
    let start = sim.date();
    sim.run_days(args.num("days", 30)? as u32);
    println!("simulated {start} → {}", sim.date());

    let mut sizes: Vec<_> = sim
        .world
        .countries
        .keys()
        .map(|t| (sim.world.provinces_owned_by(t).count(), t))
        .collect();
    sizes.sort_by(|a, b| b.cmp(a));
    println!("\nlargest countries by provinces:  provinces  land/naval/air divisions");
    for (n, tag) in sizes.into_iter().take(10) {
        let mut divs = [0usize; 3];
        for u in sim.world.units_of(tag) {
            let i = u.unit.branch as usize;
            divs[i] += u.unit.divisions.len();
        }
        println!(
            "  {tag} {:<30} {n:>4}       {:>3}/{:>3}/{:>3}",
            loc.text(tag),
            divs[0],
            divs[1],
            divs[2]
        );
    }
    let total: usize = sim.world.units.iter().map(|u| u.unit.divisions.len()).sum();
    println!(
        "\n{} units with {total} divisions on the map",
        sim.world.units.len()
    );
    Ok(())
}
