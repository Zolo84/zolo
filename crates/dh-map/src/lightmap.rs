//! `lightmapN.tbl`: the world map at one zoom level, stored as 32×32-pixel
//! blocks. Each block is a quadtree whose leaves carry a province id and a
//! 6-bit shade (relief) value. Format: `docs/spec/map.md` §4.

use crate::MapError;

/// Block edge in pixels.
pub const BLOCK: usize = 32;
/// Quadtree depth of a block: the root covers 2^5 = 32 pixels.
const ROOT_LEVEL: u8 = 5;
/// Level-1 grid size in blocks; each further level halves both axes.
const GRID_LEVEL1: (usize, usize) = (936, 360);

/// One of the four zoom levels, `0` being the most detailed (`lightmap1.tbl`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Level(u8);

impl Level {
    pub const ALL: [Level; 4] = [Level(0), Level(1), Level(2), Level(3)];

    pub fn new(index: u8) -> Option<Self> {
        (index < 4).then_some(Level(index))
    }

    pub fn index(self) -> u8 {
        self.0
    }

    pub fn file_name(self) -> String {
        format!("lightmap{}.tbl", self.0 + 1)
    }

    /// Grid size in blocks.
    pub fn grid(self) -> (usize, usize) {
        (GRID_LEVEL1.0 >> self.0, GRID_LEVEL1.1 >> self.0)
    }

    /// Image size in pixels.
    pub fn size(self) -> (usize, usize) {
        let (bw, bh) = self.grid();
        (bw * BLOCK, bh * BLOCK)
    }
}

/// A quadtree leaf: a `2^level`-pixel square at `(x, y)` inside its block.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Leaf {
    pub level: u8,
    pub x: u8,
    pub y: u8,
    /// Index into [`Block::ids`].
    pub index: u8,
    /// Shade of the leaf's top-left pixel, 0..=63.
    pub shade: u8,
}

impl Leaf {
    pub fn size(&self) -> usize {
        1 << self.level
    }

    pub fn contains(&self, x: usize, y: usize) -> bool {
        let (lx, ly, s) = (self.x as usize, self.y as usize, self.size());
        (lx..lx + s).contains(&x) && (ly..ly + s).contains(&y)
    }
}

/// A decoded block. Leaves are in file order (bottom-right first), which is
/// also the order in which shades must be reconstructed.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct Block {
    pub ids: Vec<u16>,
    pub leaves: Vec<Leaf>,
}

impl Block {
    /// Decodes a block from the start of `data`; returns it with the number of
    /// bytes it occupied.
    pub fn parse(data: &[u8]) -> Result<(Block, usize), MapError> {
        let mut r = Reader { data, pos: 0 };
        let ids = read_id_list(&mut r)?;
        let mut leaves = read_tree(&mut r)?;
        read_indices(&mut r, &mut leaves, ids.len())?;
        read_shades(&mut r, &mut leaves)?;
        Ok((Block { ids, leaves }, r.pos))
    }

    /// Province id of every pixel, row-major 32×32.
    pub fn province_ids(&self) -> [u16; BLOCK * BLOCK] {
        let mut out = [0u16; BLOCK * BLOCK];
        for leaf in &self.leaves {
            let id = self.ids[leaf.index as usize];
            let s = leaf.size();
            for y in leaf.y as usize..leaf.y as usize + s {
                out[y * BLOCK + leaf.x as usize..][..s].fill(id);
            }
        }
        out
    }

    pub fn leaf_at(&self, x: usize, y: usize) -> Option<&Leaf> {
        self.leaves.iter().find(|l| l.contains(x, y))
    }
}

struct Reader<'a> {
    data: &'a [u8],
    pos: usize,
}

impl Reader<'_> {
    fn byte(&mut self) -> Result<u8, MapError> {
        let b = *self.data.get(self.pos).ok_or(MapError::Truncated)?;
        self.pos += 1;
        Ok(b)
    }

    fn u16(&mut self) -> Result<u16, MapError> {
        Ok(u16::from_le_bytes([self.byte()?, self.byte()?]))
    }
}

/// Section A: province ids. Bit 15 ends the list; bit 14 marks a reference to
/// an earlier entry whose index is `bits 8..13 - 4`.
fn read_id_list(r: &mut Reader) -> Result<Vec<u16>, MapError> {
    let mut ids = Vec::new();
    loop {
        let w = r.u16()?;
        let id = if w & 0x4000 != 0 {
            let j = ((w >> 8) & 0x3F) as usize;
            j.checked_sub(4)
                .and_then(|j| ids.get(j).copied())
                .ok_or(MapError::BadReference(j))?
        } else {
            w & 0x3FFF
        };
        ids.push(id);
        if w & 0x8000 != 0 {
            return Ok(ids);
        }
        if ids.len() == 256 {
            return Err(MapError::TooManyIds);
        }
    }
}

/// Section B: the quadtree, one bit per node read LSB-first; children are
/// visited bottom-right, bottom-left, top-right, top-left. Splitting a level-1
/// node yields four pixels without reading further bits.
fn read_tree(r: &mut Reader) -> Result<Vec<Leaf>, MapError> {
    let leaf = |level, x, y| Leaf {
        level,
        x,
        y,
        index: 0,
        shade: 0,
    };
    let mut leaves = Vec::new();
    let mut stack: Vec<(u8, u8, u8)> = Vec::with_capacity(12);
    let (mut byte, mut bit) = (0u8, 8u8);
    let mut node = (ROOT_LEVEL, 0u8, 0u8);
    loop {
        if bit == 8 {
            byte = r.byte()?;
            bit = 0;
        }
        let split = byte >> bit & 1 != 0;
        bit += 1;
        let (l, x, y) = node;
        if !split {
            leaves.push(leaf(l, x, y));
        } else if l >= 2 {
            let h = 1 << (l - 1);
            stack.extend([(l - 1, x, y), (l - 1, x + h, y), (l - 1, x, y + h)]);
            node = (l - 1, x + h, y + h);
            continue;
        } else {
            leaves.extend([
                leaf(0, x + 1, y + 1),
                leaf(0, x, y + 1),
                leaf(0, x + 1, y),
                leaf(0, x, y),
            ]);
        }
        match stack.pop() {
            Some(next) => node = next,
            None => return Ok(leaves),
        }
    }
}

/// Section C: per-leaf indices into the id list, packed LSB-first with a width
/// that depends on the list length.
fn read_indices(r: &mut Reader, leaves: &mut [Leaf], id_count: usize) -> Result<(), MapError> {
    let bits = match id_count {
        1 => return Ok(()),
        2 => 1,
        3..=4 => 2,
        5..=16 => 4,
        _ => 8,
    };
    let per_byte = 8 / bits;
    let mask = ((1u16 << bits) - 1) as u8;
    let mut byte = 0;
    for (i, leaf) in leaves.iter_mut().enumerate() {
        if i % per_byte == 0 {
            byte = r.byte()?;
        }
        let index = byte >> ((i % per_byte) * bits) & mask;
        if index as usize >= id_count {
            return Err(MapError::BadIndex(index));
        }
        leaf.index = index;
    }
    Ok(())
}

/// Section D: 6-bit shades, four leaves per three bytes.
fn read_shades(r: &mut Reader, leaves: &mut [Leaf]) -> Result<(), MapError> {
    for group in leaves.chunks_mut(4) {
        let g = u32::from_le_bytes([r.byte()?, r.byte()?, r.byte()?, 0]);
        for (k, leaf) in group.iter_mut().enumerate() {
            leaf.shade = (g >> (6 * k) & 0x3F) as u8;
        }
    }
    Ok(())
}

/// A whole `lightmapN.tbl` file.
pub struct LightMap {
    level: Level,
    data: Vec<u8>,
    /// `N + 1` offsets relative to the end of the offset table.
    offsets: Vec<u32>,
}

impl LightMap {
    pub fn parse(data: Vec<u8>, level: Level) -> Result<Self, MapError> {
        let (bw, bh) = level.grid();
        let n = bw * bh;
        let table = 4 * (n + 1);
        if data.len() < table {
            return Err(MapError::Truncated);
        }
        let offsets: Vec<u32> = data[..table]
            .chunks_exact(4)
            .map(|c| u32::from_le_bytes(c.try_into().unwrap()))
            .collect();
        if offsets.iter().any(|&o| table + o as usize > data.len()) {
            return Err(MapError::BadOffsetTable);
        }
        Ok(LightMap {
            level,
            data,
            offsets,
        })
    }

    pub fn level(&self) -> Level {
        self.level
    }

    pub fn grid(&self) -> (usize, usize) {
        self.level.grid()
    }

    pub fn size(&self) -> (usize, usize) {
        self.level.size()
    }

    fn block_bytes(&self, bx: usize, by: usize) -> &[u8] {
        let (bw, bh) = self.grid();
        let n = bw * bh;
        let i = by * bw + bx;
        &self.data[4 * (n + 1) + self.offsets[i] as usize..]
    }

    /// Byte length the offset table assigns to a block.
    pub fn stored_len(&self, bx: usize, by: usize) -> usize {
        let i = by * self.grid().0 + bx;
        (self.offsets[i + 1] - self.offsets[i]) as usize
    }

    pub fn block(&self, bx: usize, by: usize) -> Result<Block, MapError> {
        Block::parse(self.block_bytes(bx, by)).map(|(b, _)| b)
    }

    /// Decodes a block and checks that it is exactly as long as the offset table says.
    pub fn block_checked(&self, bx: usize, by: usize) -> Result<Block, MapError> {
        let (block, used) = Block::parse(self.block_bytes(bx, by))?;
        let stored = self.stored_len(bx, by);
        if used != stored {
            return Err(MapError::LengthMismatch { used, stored });
        }
        Ok(block)
    }

    /// Province id of every pixel, row-major.
    pub fn province_raster(&self) -> Result<Vec<u16>, MapError> {
        let (bw, bh) = self.grid();
        let (w, _) = self.size();
        let mut out = vec![0u16; w * bh * BLOCK];
        for by in 0..bh {
            for bx in 0..bw {
                let ids = self.block(bx, by)?.province_ids();
                for (y, row) in ids.chunks_exact(BLOCK).enumerate() {
                    let start = (by * BLOCK + y) * w + bx * BLOCK;
                    out[start..start + BLOCK].copy_from_slice(row);
                }
            }
        }
        Ok(out)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn decodes_worked_example() {
        // docs/spec/map.md §4.3
        let bytes = [
            0x23, 0x01, 0x56, 0x84, 0x09, 0x00, 0x0D, 0x0A, 0xF5, 0x03, 0x05, 0x1A, 0x02,
        ];
        let (block, used) = Block::parse(&bytes).unwrap();
        assert_eq!(used, bytes.len());
        assert_eq!(block.ids, [291, 1110]);
        let got: Vec<_> = block
            .leaves
            .iter()
            .map(|l| (l.level, l.x, l.y, block.ids[l.index as usize], l.shade))
            .collect();
        assert_eq!(
            got,
            [
                (4, 16, 16, 1110, 10),
                (4, 0, 16, 291, 20),
                (3, 24, 8, 1110, 63),
                (3, 16, 8, 1110, 0),
                (3, 24, 0, 291, 5),
                (3, 16, 0, 291, 40),
                (4, 0, 0, 291, 33),
            ]
        );
        let ids = block.province_ids();
        assert_eq!(
            (ids[0], ids[8 * BLOCK + 16], ids[31 * BLOCK + 31]),
            (291, 1110, 1110)
        );
    }

    #[test]
    fn tree_splits_down_to_pixels() {
        // docs/spec/map.md §4.4: one id, 17 tree bits, 16 leaves.
        let mut bytes = vec![0x01, 0x80, 0x1F, 0x00, 0x00];
        bytes.extend([0; 12]); // 16 shades
        let (block, used) = Block::parse(&bytes).unwrap();
        assert_eq!(used, bytes.len());
        let coords: Vec<_> = block.leaves.iter().map(|l| (l.level, l.x, l.y)).collect();
        assert_eq!(
            coords[..5],
            [
                (0, 31, 31),
                (0, 30, 31),
                (0, 31, 30),
                (0, 30, 30),
                (1, 28, 30)
            ]
        );
        assert_eq!(coords[15], (4, 0, 0));
        let area: usize = block.leaves.iter().map(|l| l.size() * l.size()).sum();
        assert_eq!(area, BLOCK * BLOCK);
    }

    #[test]
    fn id_list_back_reference() {
        let mut r = Reader {
            data: &[0x23, 0x01, 0x56, 0x04, 0x00, 0xC5],
            pos: 0,
        };
        assert_eq!(read_id_list(&mut r).unwrap(), [291, 1110, 1110]);
    }
}
