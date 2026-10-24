//! Virtual file system over the game install and mod directories.
//!
//! The original engine runs on Windows, so data files refer to each other with
//! backslashes and arbitrary letter case (`scenarios\1936\GER.inc` vs
//! `Scenarios/1936/ger.inc`). On case-sensitive file systems every lookup has to
//! be resolved component by component. Mods are layered on top of the base
//! game: the last added root that contains a file wins.

use std::collections::{BTreeMap, HashMap};
use std::ffi::OsString;
use std::fs;
use std::io;
use std::path::{Path, PathBuf};
use std::sync::Mutex;

pub struct Vfs {
    roots: Vec<PathBuf>,
    dir_cache: Mutex<HashMap<PathBuf, Vec<OsString>>>,
}

impl Vfs {
    /// A VFS rooted at the game install directory.
    pub fn new(game_dir: impl Into<PathBuf>) -> Self {
        Vfs {
            roots: vec![game_dir.into()],
            dir_cache: Mutex::new(HashMap::new()),
        }
    }

    /// Layers another directory (e.g. `Mods/<name>`) over the existing roots.
    pub fn push_root(&mut self, dir: impl Into<PathBuf>) {
        self.roots.push(dir.into());
    }

    pub fn roots(&self) -> &[PathBuf] {
        &self.roots
    }

    /// Resolves a game-relative path (either slash style, any case) to a real file
    /// or directory, searching mod roots first.
    pub fn resolve(&self, rel: &str) -> Option<PathBuf> {
        self.roots
            .iter()
            .rev()
            .find_map(|root| self.resolve_in(root, rel))
    }

    fn resolve_in(&self, root: &Path, rel: &str) -> Option<PathBuf> {
        let mut path = root.to_path_buf();
        for part in split(rel) {
            let exact = path.join(part);
            if exact.exists() {
                path = exact;
                continue;
            }
            let entries = self.list_real(&path)?;
            let name = entries
                .iter()
                .find(|n| n.to_string_lossy().eq_ignore_ascii_case(part))?;
            path = path.join(name);
        }
        path.exists().then_some(path)
    }

    fn list_real(&self, dir: &Path) -> Option<Vec<OsString>> {
        let mut cache = self.dir_cache.lock().unwrap_or_else(|e| e.into_inner());
        if let Some(entries) = cache.get(dir) {
            return Some(entries.clone());
        }
        let entries: Vec<OsString> = fs::read_dir(dir)
            .ok()?
            .filter_map(|e| Some(e.ok()?.file_name()))
            .collect();
        cache.insert(dir.to_path_buf(), entries.clone());
        Some(entries)
    }

    pub fn exists(&self, rel: &str) -> bool {
        self.resolve(rel).is_some()
    }

    pub fn read(&self, rel: &str) -> io::Result<Vec<u8>> {
        let path = self.resolve(rel).ok_or_else(|| {
            io::Error::new(
                io::ErrorKind::NotFound,
                format!("not found in game data: {rel}"),
            )
        })?;
        fs::read(path)
    }

    /// Files directly inside a game directory, merged across roots. Returned
    /// paths are game-relative with `/` separators; mod files shadow base files
    /// that differ only by case.
    pub fn list_files(&self, rel_dir: &str) -> Vec<String> {
        let mut merged = BTreeMap::new();
        for root in &self.roots {
            let Some(dir) = self.resolve_in(root, rel_dir) else {
                continue;
            };
            let Ok(entries) = fs::read_dir(&dir) else {
                continue;
            };
            for entry in entries.flatten() {
                if entry.file_type().map(|t| t.is_file()).unwrap_or(false) {
                    let name = entry.file_name().to_string_lossy().into_owned();
                    merged.insert(name.to_ascii_lowercase(), join(rel_dir, &name));
                }
            }
        }
        merged.into_values().collect()
    }

    /// Every file under every root, game-relative, de-duplicated case-insensitively.
    pub fn walk(&self) -> Vec<String> {
        let mut merged = BTreeMap::new();
        for root in &self.roots {
            let mut stack = vec![(root.clone(), String::new())];
            while let Some((dir, rel)) = stack.pop() {
                let Ok(entries) = fs::read_dir(&dir) else {
                    continue;
                };
                for entry in entries.flatten() {
                    let name = entry.file_name().to_string_lossy().into_owned();
                    let child = join(&rel, &name);
                    match entry.file_type() {
                        Ok(t) if t.is_dir() => stack.push((entry.path(), child)),
                        Ok(t) if t.is_file() => {
                            merged.insert(child.to_ascii_lowercase(), child);
                        }
                        _ => {}
                    }
                }
            }
        }
        merged.into_values().collect()
    }
}

fn split(rel: &str) -> impl Iterator<Item = &str> {
    rel.split(['/', '\\'])
        .filter(|p| !p.is_empty() && *p != ".")
}

fn join(dir: &str, name: &str) -> String {
    let dir: Vec<&str> = split(dir).collect();
    if dir.is_empty() {
        name.to_owned()
    } else {
        format!("{}/{name}", dir.join("/"))
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn temp_dir(name: &str) -> PathBuf {
        let dir = std::env::temp_dir().join(format!("dh-vfs-{}-{name}", std::process::id()));
        let _ = fs::remove_dir_all(&dir);
        fs::create_dir_all(&dir).unwrap();
        dir
    }

    #[test]
    fn resolves_case_insensitively_and_layers_mods() {
        let base = temp_dir("base");
        fs::create_dir_all(base.join("Scenarios/1936")).unwrap();
        fs::write(base.join("Scenarios/1936/GER.inc"), b"base").unwrap();
        fs::write(base.join("Scenarios/1936/ENG.inc"), b"eng").unwrap();
        let module = temp_dir("mod");
        fs::create_dir_all(module.join("scenarios/1936")).unwrap();
        fs::write(module.join("scenarios/1936/ger.INC"), b"mod").unwrap();

        let mut vfs = Vfs::new(&base);
        assert_eq!(vfs.read("scenarios\\1936\\ger.inc").unwrap(), b"base");
        vfs.push_root(&module);
        assert_eq!(vfs.read("SCENARIOS/1936/Ger.inc").unwrap(), b"mod");
        assert_eq!(vfs.read("scenarios/1936/eng.inc").unwrap(), b"eng");
        assert!(vfs.read("scenarios/1936/missing.inc").is_err());
        assert_eq!(
            vfs.list_files("scenarios/1936"),
            ["scenarios/1936/ENG.inc", "scenarios/1936/ger.INC"]
        );
        assert_eq!(vfs.walk().len(), 2);

        fs::remove_dir_all(base).unwrap();
        fs::remove_dir_all(module).unwrap();
    }
}
