//! `dh-tool` — inspection and reverse-engineering helper for Darkest Hour data.

mod probe;

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
  dh-tool sim       <game-dir> <scenario.eug> [--days N] [--mod <dir>]
                                                      load a scenario and run the headless simulation
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
    print_warnings(&warnings, 30);

    let mut warnings = Vec::new();
    match Provinces::load(&vfs, &mut warnings) {
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
    println!("\nlargest countries by provinces:");
    for (n, tag) in sizes.into_iter().take(10) {
        println!("  {tag} {:<30} {n}", loc.text(tag));
    }
    Ok(())
}
