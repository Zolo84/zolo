//! `colorscales.csv`: named 64-step colour gradients indexed by shade
//! (`docs/spec/map.md` §6). Each record is six lines: name, a header line,
//! then four `R;G;B;Pos` stops.

use std::collections::BTreeMap;

pub type Scale = [[u8; 3]; 64];

#[derive(Debug, Clone, Default)]
pub struct ColorScales {
    pub scales: BTreeMap<String, Scale>,
}

impl ColorScales {
    pub fn parse(bytes: &[u8]) -> Self {
        let text = dh_text::encoding::decode(bytes);
        let mut lines = text.lines();
        let mut scales = BTreeMap::new();
        while let Some(line) = lines.next() {
            if line.trim().is_empty() {
                continue;
            }
            let name = line
                .split(';')
                .next()
                .unwrap_or("")
                .trim()
                .trim_matches('"')
                .to_ascii_lowercase();
            lines.next(); // column header
            let stops: Option<Vec<[i32; 4]>> =
                (0..4).map(|_| lines.next().and_then(parse_stop)).collect();
            if let Some(stops) = stops {
                scales.insert(name, build(&stops));
            }
        }
        ColorScales { scales }
    }

    pub fn get(&self, name: &str) -> Option<&Scale> {
        self.scales.get(&name.to_ascii_lowercase())
    }
}

fn parse_stop(line: &str) -> Option<[i32; 4]> {
    let mut f = line
        .split(';')
        .map(|v| v.trim().parse::<i32>().ok().map(|v| v.clamp(0, 255)));
    Some([f.next()??, f.next()??, f.next()??, f.next()??.min(64)])
}

/// Linear interpolation between stops in 10-bit fixed point.
fn build(stops: &[[i32; 4]]) -> Scale {
    let mut scale = [[0u8; 3]; 64];
    for pair in stops.windows(2) {
        let ([c0 @ .., p0], [c1 @ .., p1]) = (pair[0], pair[1]);
        let width = p1 - p0;
        for ch in 0..3 {
            let step = if width > 0 {
                ((c1[ch] - c0[ch]) << 10) / width
            } else {
                0
            };
            let mut v = c0[ch] << 10;
            for i in p0.max(0)..p1.min(64) {
                scale[i as usize][ch] = (v >> 10) as u8;
                v += step;
            }
        }
    }
    scale
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn builds_gradient() {
        // docs/spec/map.md §6.4
        let csv = b"\"orange\";;;\r\nR;G;B;Pos\r\n255;220;150;0\r\n230;160;80;20\r\n180;100;40;45\r\n90;40;10;64\r\n";
        let cs = ColorScales::parse(csv);
        let s = cs.get("Orange").unwrap();
        assert_eq!(
            [s[0], s[1], s[19], s[20], s[45], s[63]],
            [
                [255, 220, 150],
                [253, 217, 146],
                [231, 163, 83],
                [230, 160, 80],
                [180, 100, 40],
                [94, 43, 11]
            ]
        );
    }
}
