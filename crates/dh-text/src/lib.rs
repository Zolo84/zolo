//! Text formats used by Darkest Hour / Europa Engine (HoI2 lineage).
//!
//! * [`encoding`] — Windows-1252 decoding (all game text is CP1252, not UTF-8).
//! * [`script`] — the Paradox `key = value` / `key = { ... }` script format used
//!   by `.txt` databases, `.eug` scenarios and save games.
//! * [`csv`] — semicolon-separated tables (`db/*.csv`, `config/*.csv`).

pub mod csv;
pub mod encoding;
pub mod script;

pub use csv::CsvTable;
pub use script::{parse, Block, Document, Field, Item, Op, ParseError, Scalar, Value};
