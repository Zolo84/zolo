//! Typed game data loaded from a Darkest Hour install through the [`Vfs`].
//!
//! Each loader keeps going on bad input and reports [`Warning`]s, mirroring how
//! the original engine tolerates broken mod files.

pub mod ai;
pub mod date;
pub mod difficulty;
pub mod diplomacy;
pub mod leaders;
pub mod localisation;
pub mod ministers;
pub mod misc;
pub mod policy;
pub mod production;
pub mod province;
pub mod scenario;
pub mod settings;
pub mod teams;
pub mod tech;
pub mod unitdb;
pub mod units;
pub mod weather;

pub use ai::TechAi;
pub use date::GameDate;
pub use dh_vfs::Vfs;
pub use difficulty::Difficulty;
pub use diplomacy::{Diplomacy, Relation, War};
pub use leaders::{Leader, Leaders};
pub use localisation::Localisation;
pub use ministers::{Minister, Ministers, Personalities};
pub use misc::Misc;
pub use policy::PolicyEffects;
pub use production::{Development, ProductionCosts};
pub use province::{Province, Provinces};
pub use scenario::{CountrySetup, ProvinceSetup, Rules, Scenario, ScenarioInfo, Stockpiles};
pub use settings::{open_install, Settings};
pub use teams::{TechTeam, TechTeams};
pub use tech::Techs;
pub use unitdb::{DivisionStats, UnitDb};
pub use units::{Branch, Brigade, Division, TypeId, Unit};
pub use weather::{Climate, Weather, WeatherSetup};

use std::fmt;

/// A non-fatal problem found while loading data.
#[derive(Debug, Clone)]
pub struct Warning {
    pub file: String,
    pub line: u32,
    pub message: String,
}

impl fmt::Display for Warning {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}:{}: {}", self.file, self.line, self.message)
    }
}

/// Parses a script file from the VFS, turning parse errors into warnings.
pub fn load_script(
    vfs: &Vfs,
    rel: &str,
    warnings: &mut Vec<Warning>,
) -> std::io::Result<dh_text::Block> {
    let doc = dh_text::parse(&vfs.read(rel)?);
    warnings.extend(doc.errors.into_iter().map(|e| Warning {
        file: rel.to_owned(),
        line: e.line,
        message: e.message,
    }));
    Ok(doc.root)
}
