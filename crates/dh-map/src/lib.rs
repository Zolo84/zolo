//! Darkest Hour world map: `lightmap*.tbl` (province ids and relief per
//! pixel at four zoom levels), `boundbox.tbl`, `colorscales.csv` and the
//! province adjacency graph (`adjacent.tbl` + `adj-defs.csv`).
//! Formats are described in `docs/spec/map.md`.

pub mod adjacency;
pub mod boundbox;
pub mod colorscale;
pub mod distance;
pub mod lightmap;
pub mod shade;

pub use adjacency::{AdjKind, Adjacency, Link};
pub use boundbox::{BoundBox, Rect};
pub use colorscale::ColorScales;
pub use distance::{AirDist, NavalDist};
pub use lightmap::{Block, Leaf, Level, LightMap, BLOCK};
pub use shade::{shade_raster, Smoothing};

use std::fmt;

#[derive(Debug, Clone, PartialEq, Eq)]
pub enum MapError {
    Truncated,
    BadOffsetTable,
    TooManyIds,
    /// Back-reference to a missing id-list entry (raw 6-bit field).
    BadReference(usize),
    /// Leaf index outside the block's id list.
    BadIndex(u8),
    /// Decoded block length differs from the offset table.
    LengthMismatch {
        used: usize,
        stored: usize,
    },
}

impl fmt::Display for MapError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            MapError::Truncated => write!(f, "data ends inside a block"),
            MapError::BadOffsetTable => write!(f, "offset table points past the end of the file"),
            MapError::TooManyIds => write!(f, "block id list longer than 256 entries"),
            MapError::BadReference(j) => {
                write!(f, "id list back-reference to missing entry (field {j})")
            }
            MapError::BadIndex(i) => write!(f, "leaf index {i} outside the block id list"),
            MapError::LengthMismatch { used, stored } => {
                write!(
                    f,
                    "block decoded to {used} bytes but the offset table gives {stored}"
                )
            }
        }
    }
}

impl std::error::Error for MapError {}
