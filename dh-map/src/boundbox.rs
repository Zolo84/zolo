//! `boundbox.tbl`: per-province bounding rectangles in level-1 pixels,
//! 16 bytes per province id (`docs/spec/map.md` §5).

#[derive(Debug, Clone, Copy, PartialEq, Eq, Default)]
pub struct Rect {
    pub left: u32,
    pub top: u32,
    /// Inclusive.
    pub right: u32,
    /// Inclusive.
    pub bottom: u32,
}

impl Rect {
    pub fn contains(&self, x: u32, y: u32) -> bool {
        (self.left..=self.right).contains(&x) && (self.top..=self.bottom).contains(&y)
    }
}

#[derive(Debug, Clone, Default)]
pub struct BoundBox {
    /// Indexed by province id.
    pub rects: Vec<Rect>,
}

impl BoundBox {
    /// Fields are read as 32-bit integers; the editor only uses their low halves.
    pub fn parse(data: &[u8]) -> Self {
        let field =
            |r: &[u8], i: usize| u32::from_le_bytes(r[i * 4..i * 4 + 4].try_into().unwrap());
        let rects = data
            .chunks_exact(16)
            .map(|r| Rect {
                left: field(r, 0),
                top: field(r, 1),
                right: field(r, 2),
                bottom: field(r, 3),
            })
            .collect();
        BoundBox { rects }
    }

    pub fn get(&self, province: u16) -> Option<&Rect> {
        self.rects.get(province as usize)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_records() {
        let mut data = vec![0u8; 16];
        data.extend([10, 0, 0, 0, 20, 0, 0, 0, 30, 0, 0, 0, 40, 0, 0, 0, 0xFF]);
        let bb = BoundBox::parse(&data);
        assert_eq!(bb.rects.len(), 2);
        assert_eq!(
            bb.get(1),
            Some(&Rect {
                left: 10,
                top: 20,
                right: 30,
                bottom: 40
            })
        );
        assert!(bb.get(1).unwrap().contains(30, 40));
    }
}
