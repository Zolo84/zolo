//! `settings.cfg`: one setting per line, the value before the `#` comment.
//! Line 14 names the mod folder (`Mods`) and line 15 the selected mod.

use crate::Vfs;
use std::path::{Path, PathBuf};

pub const SETTINGS_FILE: &str = "settings.cfg";
const MOD_DIR_LINE: usize = 14;
const MOD_LINE: usize = 15;

#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct Settings {
    lines: Vec<String>,
}

impl Settings {
    pub fn parse(bytes: &[u8]) -> Self {
        let text = dh_text::encoding::decode(bytes);
        let lines = text
            .lines()
            .map(|l| l.split('#').next().unwrap_or("").trim().to_owned())
            .collect();
        Settings { lines }
    }

    /// Value of the n-th line (from 1), if present and not empty.
    pub fn line(&self, n: usize) -> Option<&str> {
        let v = self.lines.get(n.checked_sub(1)?)?;
        (!v.is_empty()).then_some(v.as_str())
    }

    /// Game-relative directory of the selected mod (`Mods/<name>`).
    pub fn mod_dir(&self) -> Option<String> {
        let name = self.line(MOD_LINE)?;
        Some(format!(
            "{}/{name}",
            self.line(MOD_DIR_LINE).unwrap_or("Mods")
        ))
    }
}

/// The install as the game sees it: the selected mod layered over the base
/// files when `settings.cfg` names one that exists.
pub fn open_install(game_dir: impl AsRef<Path>) -> Vfs {
    let game_dir = game_dir.as_ref();
    let mut vfs = Vfs::new(game_dir);
    let dir: Option<PathBuf> = vfs
        .read(SETTINGS_FILE)
        .ok()
        .and_then(|b| Settings::parse(&b).mod_dir())
        .and_then(|d| vfs.resolve(&d));
    if let Some(dir) = dir.filter(|d| d.is_dir()) {
        vfs.push_root(dir);
    }
    vfs
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn mod_comes_from_lines_14_and_15() {
        let mut text = String::new();
        for i in 1..=13 {
            text.push_str(&format!("{i} # setting {i}\r\n"));
        }
        text.push_str("Mods # MODDIR folder\r\nDarkest Hour Full # Selected mod\r\n");
        let s = Settings::parse(text.as_bytes());
        assert_eq!(s.line(1), Some("1"));
        assert_eq!(s.mod_dir().as_deref(), Some("Mods/Darkest Hour Full"));
        assert_eq!(Settings::parse(b"0\n").mod_dir(), None);
    }
}
