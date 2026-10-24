//! Technology applications from the nine `db/tech/*_tech.txt` files
//! (`docs/spec/tech-commands.md` §2.1, §3.2). Only the commands of each
//! application's `effects` are kept, which is all the simulation applies so
//! far; the first application with a given ID wins (§3.2.4).

use crate::{load_script, Vfs, Warning};
use dh_text::Block;
use std::collections::BTreeMap;

/// The technology files in load order; a mod may replace any of them.
pub const TECH_FILES: [&str; 9] = [
    "db/tech/infantry_tech.txt",
    "db/tech/armor_tech.txt",
    "db/tech/naval_tech.txt",
    "db/tech/aircraft_tech.txt",
    "db/tech/industry_tech.txt",
    "db/tech/land_doctrines_tech.txt",
    "db/tech/secret_weapons_tech.txt",
    "db/tech/naval_doctrines_tech.txt",
    "db/tech/air_doctrines_tech.txt",
];

/// One `command = { type = … which = … value = … }` of an `effects` block
/// (§3.3); `when`, `where` and triggers are not kept yet.
#[derive(Debug, Clone, PartialEq)]
pub struct Command {
    /// `type`, lower case.
    pub kind: String,
    /// `which` as written (a word or a number).
    pub which: Option<String>,
    pub value: Option<f64>,
}

impl Command {
    fn from_block(b: &Block) -> Option<Self> {
        Some(Command {
            kind: b.get_str("type")?.to_ascii_lowercase(),
            which: b.get_str("which").map(str::to_owned),
            value: b.get_f64("value"),
        })
    }
}

#[derive(Debug, Clone, Default, PartialEq)]
pub struct Techs {
    /// Commands of each application, by application ID, in file order.
    pub effects: BTreeMap<i64, Vec<Command>>,
}

impl Techs {
    /// Reads every file of [`TECH_FILES`]; a missing one is a warning.
    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> Self {
        let mut techs = Techs::default();
        for file in TECH_FILES {
            match load_script(vfs, file, warnings) {
                Ok(root) => techs.add(&root),
                Err(e) => warnings.push(Warning {
                    file: file.to_owned(),
                    line: 0,
                    message: e.to_string(),
                }),
            }
        }
        techs
    }

    /// Adds the applications of a file's `technology` groups; IDs already
    /// known keep their first definition.
    pub fn add(&mut self, root: &Block) {
        for group in blocks(root, "technology") {
            for app in blocks(group, "application") {
                let Some(id) = app.get_i64("id") else {
                    continue;
                };
                let commands = blocks(app, "effects")
                    .flat_map(|e| blocks(e, "command"))
                    .filter_map(Command::from_block)
                    .collect();
                self.effects.entry(id).or_insert(commands);
            }
        }
    }

    /// Commands of an application; none for an unknown ID.
    pub fn commands(&self, id: i64) -> &[Command] {
        self.effects.get(&id).map_or(&[], Vec::as_slice)
    }
}

fn blocks<'a>(b: &'a Block, key: &'a str) -> impl Iterator<Item = &'a Block> + 'a {
    b.get_all(key).filter_map(|v| v.as_block())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn keeps_the_commands_of_each_application() {
        let mut techs = Techs::default();
        techs.add(
            &dh_text::script::parse_str(
                "technology = { id = 5 category = industry
                   application = { id = 5080 name = X
                     component = { id = 5081 type = management difficulty = 5 }
                     effects = { command = { type = Allow_Dig_In }
                                 command = { type = allow_building which = land_fort } } }
                   application = { id = 5350 effects = { command = { type = surprise which = land value = 15 } } }
                   application = { id = 5090 } }",
            )
            .root,
        );
        // A second definition of 5080 is ignored.
        techs.add(
            &dh_text::script::parse_str(
                "technology = { application = { id = 5080 effects = { command = { type = coal } } } }",
            )
            .root,
        );
        let kinds: Vec<&str> = techs
            .commands(5080)
            .iter()
            .map(|c| c.kind.as_str())
            .collect();
        assert_eq!(kinds, ["allow_dig_in", "allow_building"]);
        assert_eq!(techs.commands(5080)[1].which.as_deref(), Some("land_fort"));
        assert_eq!(
            techs.commands(5350),
            [Command {
                kind: "surprise".into(),
                which: Some("land".into()),
                value: Some(15.0),
            }]
        );
        assert!(techs.commands(5090).is_empty());
        assert!(techs.commands(1).is_empty());
    }
}
