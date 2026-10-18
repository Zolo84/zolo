//! Semicolon-separated tables as used by `db/*.csv` and `config/*.csv`.
//!
//! The game format is minimal: one record per line, `;` separators, no quoting,
//! `#` starts a comment line. Localisation lines usually end with an `X` column
//! marking the end of the record.

use crate::encoding;
use std::collections::HashMap;

#[derive(Debug, Clone, Default)]
pub struct CsvTable {
    /// Records, with their 1-based source line numbers.
    pub rows: Vec<(u32, Vec<String>)>,
    header: Option<HashMap<String, usize>>,
    header_names: Vec<String>,
}

impl CsvTable {
    /// Parses a CP1252 table without treating any row as a header.
    pub fn parse(bytes: &[u8]) -> Self {
        let text = encoding::decode(bytes);
        let rows = text
            .lines()
            .enumerate()
            .filter(|(_, l)| {
                let t = l.trim();
                !t.is_empty() && !t.starts_with('#')
            })
            .map(|(i, l)| {
                (
                    i as u32 + 1,
                    l.split(';').map(|f| f.trim().to_owned()).collect(),
                )
            })
            .collect();
        CsvTable {
            rows,
            header: None,
            header_names: Vec::new(),
        }
    }

    /// Parses a table whose first record is a header row; it is removed from `rows`.
    pub fn parse_with_header(bytes: &[u8]) -> Self {
        let mut table = Self::parse(bytes);
        if !table.rows.is_empty() {
            let (_, header) = table.rows.remove(0);
            table.header_names = header.clone();
            table.header = Some(
                header
                    .into_iter()
                    .enumerate()
                    .filter(|(_, h)| !h.is_empty())
                    .map(|(i, h)| (h.to_ascii_lowercase(), i))
                    .collect(),
            );
        }
        table
    }

    /// Header names in column order (empty without a header row).
    pub fn headers(&self) -> &[String] {
        &self.header_names
    }

    /// Column index for a header name (case-insensitive).
    pub fn column(&self, name: &str) -> Option<usize> {
        self.header
            .as_ref()?
            .get(&name.to_ascii_lowercase())
            .copied()
    }

    /// Field of `row` in the column named `name`; empty fields read as `None`.
    pub fn get<'a>(&self, row: &'a [String], name: &str) -> Option<&'a str> {
        row.get(self.column(name)?)
            .map(String::as_str)
            .filter(|s| !s.is_empty())
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_header_and_comments() {
        let t = CsvTable::parse_with_header(
            b"Id;Name;Area\r\n# comment\r\n1;Berlin;Brandenburg\r\n\r\n2;M\xfcnchen;\r\n",
        );
        assert_eq!(t.rows.len(), 2);
        let (line, row) = &t.rows[1];
        assert_eq!(*line, 5);
        assert_eq!(t.get(row, "NAME"), Some("München"));
        assert_eq!(t.get(row, "area"), None);
        assert_eq!(t.get(row, "missing"), None);
    }
}
