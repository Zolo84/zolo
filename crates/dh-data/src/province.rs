//! The province database `db/province.csv` (one row per province, with a header row).
//!
//! Only `Id` and `Name` are interpreted so far; every other column is kept
//! verbatim under its lower-cased header name until its meaning is confirmed.

use crate::{Vfs, Warning};
use dh_text::CsvTable;
use std::collections::BTreeMap;

pub const PROVINCE_CSV: &str = "db/province.csv";

#[derive(Debug, Clone)]
pub struct Province {
    pub id: u32,
    /// Localisation key or literal name.
    pub name: String,
    pub fields: BTreeMap<String, String>,
}

#[derive(Debug, Default)]
pub struct Provinces {
    pub by_id: BTreeMap<u32, Province>,
}

impl Provinces {
    pub fn load(vfs: &Vfs, warnings: &mut Vec<Warning>) -> std::io::Result<Self> {
        Ok(Self::from_table(
            &CsvTable::parse_with_header(&vfs.read(PROVINCE_CSV)?),
            warnings,
        ))
    }

    pub fn from_table(table: &CsvTable, warnings: &mut Vec<Warning>) -> Self {
        let id_col = table.column("id").unwrap_or(0);
        let name_col = table.column("name").unwrap_or(1);
        let mut provinces = Provinces::default();
        for (line, row) in &table.rows {
            let warn = |message: String| Warning {
                file: PROVINCE_CSV.into(),
                line: *line,
                message,
            };
            let id = match row.get(id_col).map(|s| s.parse::<u32>()) {
                Some(Ok(id)) => id,
                _ => {
                    warnings.push(warn(format!("bad province id {:?}", row.get(id_col))));
                    continue;
                }
            };
            let fields = table
                .headers()
                .iter()
                .zip(row)
                .filter(|(h, v)| !h.is_empty() && !v.is_empty())
                .map(|(h, v)| (h.to_ascii_lowercase(), v.clone()))
                .collect();
            let name = row.get(name_col).cloned().unwrap_or_default();
            if provinces
                .by_id
                .insert(id, Province { id, name, fields })
                .is_some()
            {
                warnings.push(warn(format!("duplicate province id {id}")));
            }
        }
        provinces
    }

    pub fn get(&self, id: u32) -> Option<&Province> {
        self.by_id.get(&id)
    }

    pub fn len(&self) -> usize {
        self.by_id.len()
    }

    pub fn is_empty(&self) -> bool {
        self.by_id.is_empty()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn loads_rows_and_reports_bad_ones() {
        let table =
            CsvTable::parse_with_header(b"Id;Name;Terrain\n1;PROV1;Plains\nx;Bad;\n1;Dup;\n");
        let mut warnings = Vec::new();
        let p = Provinces::from_table(&table, &mut warnings);
        assert_eq!(p.len(), 1);
        assert_eq!(p.get(1).unwrap().name, "Dup");
        assert_eq!(warnings.len(), 2);
        assert_eq!(warnings[0].line, 3);
    }
}
