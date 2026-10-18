//! Reconstructs the per-pixel shade (relief) image of a lightmap.
//!
//! A leaf stores only the shade of its top-left pixel. The rest of the leaf is
//! interpolated in 8.8 fixed point: its left column toward the pixel just below
//! it, each row toward the pixel just right of it. Those neighbours are always
//! decoded earlier, because blocks are processed from the bottom-right corner
//! and leaves within a block in file order (`docs/spec/map.md` §7).
//!
//! Deliberate deviations from the HoI2Editor decoder (whose output is not the
//! game's): values are clamped between the two interpolated endpoints, so
//! level-5 leaves cannot overshoot or wrap to 255; the wrap-around neighbour of
//! the rightmost block column is the real left column of block `(0, by)`; and
//! the bottom map edge has no vertical gradient.

use crate::{LightMap, MapError, BLOCK};

/// Which differences are interpolated.
#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub enum Smoothing {
    /// Interpolate towards both brighter and darker neighbours.
    #[default]
    Full,
    /// Only towards smaller values, like HoI2Editor (threshold 0).
    DownhillOnly,
    /// Every leaf is flat.
    None,
}

impl Smoothing {
    fn step(self, diff: i32, level: u8) -> i32 {
        match self {
            Smoothing::Full => diff >> level,
            Smoothing::DownhillOnly if diff < 0 => diff >> level,
            _ => 0,
        }
    }

    /// The `2^level` values from `from` towards `to`, both in 8.8 fixed point;
    /// results stay between the endpoints.
    fn ramp(self, from: i32, to: i32, level: u8, mut put: impl FnMut(usize, i32)) {
        let (lo, hi) = (from.min(to), from.max(to));
        let step = self.step(to - from, level);
        let mut v = from;
        for i in 0..1usize << level {
            put(i, v.clamp(lo, hi));
            v += step;
        }
    }
}

fn fixed(v: u8) -> i32 {
    (v as i32) << 8
}

/// Shade 0..=63 of every pixel, row-major.
pub fn shade_raster(map: &LightMap, smoothing: Smoothing) -> Result<Vec<u8>, MapError> {
    let (bw, bh) = map.grid();
    let (w, h) = map.size();
    let mut img = vec![0u8; w * h];
    for by in (0..bh).rev() {
        let wrap = left_column(map, &img, by, smoothing)?;
        for bx in (0..bw).rev() {
            let block = map.block(bx, by)?;
            for leaf in &block.leaves {
                let (gx, gy) = (bx * BLOCK + leaf.x as usize, by * BLOCK + leaf.y as usize);
                let s = leaf.size();
                if leaf.level == 0 {
                    img[gy * w + gx] = leaf.shade;
                    continue;
                }
                let below = if gy + s < h {
                    img[(gy + s) * w + gx]
                } else {
                    leaf.shade
                };
                let mut left = [0i32; BLOCK];
                smoothing.ramp(fixed(leaf.shade), fixed(below), leaf.level, |i, v| {
                    left[i] = v
                });
                for (r, &start) in left[..s].iter().enumerate() {
                    let y = gy + r;
                    let right = if gx + s < w {
                        img[y * w + gx + s]
                    } else {
                        wrap[y - by * BLOCK]
                    };
                    let row = &mut img[y * w + gx..][..s];
                    smoothing.ramp(start, fixed(right), leaf.level, |i, v| {
                        row[i] = (v >> 8) as u8
                    });
                }
            }
        }
    }
    Ok(img)
}

/// Left pixel column of block `(0, by)`, which the rightmost block column
/// needs before that block is decoded (the map wraps east–west).
fn left_column(
    map: &LightMap,
    img: &[u8],
    by: usize,
    smoothing: Smoothing,
) -> Result<[u8; BLOCK], MapError> {
    let (w, h) = map.size();
    let block = map.block(0, by)?;
    let mut edge: Vec<_> = block.leaves.iter().filter(|l| l.x == 0).collect();
    edge.sort_by_key(|l| std::cmp::Reverse(l.y));
    let mut col = [0u8; BLOCK];
    for leaf in edge {
        let (y, s) = (leaf.y as usize, leaf.size());
        let below = if y + s < BLOCK {
            col[y + s]
        } else if (by + 1) * BLOCK < h {
            img[(by + 1) * BLOCK * w]
        } else {
            leaf.shade
        };
        smoothing.ramp(fixed(leaf.shade), fixed(below), leaf.level, |i, v| {
            col[y + i] = (v >> 8) as u8
        });
    }
    Ok(col)
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn ramp_matches_spec_example() {
        // docs/spec/map.md §7.2: 4×4 leaf, shade 40, below 20, right 48/24/30/10.
        let mut left = [0i32; 4];
        Smoothing::Full.ramp(fixed(40), fixed(20), 2, |i, v| left[i] = v);
        assert_eq!(left, [10240, 8960, 7680, 6400]);
        let want = [
            [40, 42, 44, 46],
            [35, 32, 29, 26],
            [30, 30, 30, 30],
            [25, 21, 17, 13],
        ];
        for (r, right) in [48, 24, 30, 10].into_iter().enumerate() {
            let mut row = [0u8; 4];
            Smoothing::Full.ramp(left[r], fixed(right), 2, |i, v| row[i] = (v >> 8) as u8);
            assert_eq!(row, want[r]);
        }
        let mut row = [0u8; 4];
        Smoothing::DownhillOnly.ramp(fixed(40), fixed(48), 2, |i, v| row[i] = (v >> 8) as u8);
        assert_eq!(row, [40; 4]);
    }

    #[test]
    fn level5_never_overshoots() {
        let mut row = [0i32; 32];
        Smoothing::Full.ramp(fixed(1) - 16, 0, 5, |i, v| row[i] = v);
        assert!(row.iter().all(|&v| (0..=256).contains(&v)));
    }
}
