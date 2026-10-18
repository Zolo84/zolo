//! Heuristics for unknown binary files (map tables, sprites, save chunks):
//! magic numbers, entropy, header integers, embedded strings and likely record sizes.

use std::fmt::Write;

const MAGICS: &[(&[u8], &str)] = &[
    (b"MZ", "DOS/Windows executable"),
    (b"BM", "Windows bitmap (BMP)"),
    (b"RIFF", "RIFF container (WAV/AVI)"),
    (b"PK\x03\x04", "ZIP archive"),
    (b"DDS ", "DirectDraw surface (DDS)"),
    (b"OggS", "Ogg stream"),
    (b"ID3", "MP3 with ID3 tag"),
    (b"\x78\x9C", "zlib stream (default compression)"),
    (b"\x78\xDA", "zlib stream (best compression)"),
    (b"\x78\x01", "zlib stream (no compression)"),
    (b"\x1F\x8B", "gzip stream"),
    (b"\x89PNG", "PNG image"),
    (b"\xFF\xD8\xFF", "JPEG image"),
    (b"xof ", "DirectX .x model"),
];

pub fn entropy(data: &[u8]) -> f64 {
    if data.is_empty() {
        return 0.0;
    }
    let mut counts = [0u64; 256];
    for &b in data {
        counts[b as usize] += 1;
    }
    let n = data.len() as f64;
    counts
        .iter()
        .filter(|&&c| c > 0)
        .map(|&c| c as f64 / n)
        .map(|p| -p * p.log2())
        .sum()
}

pub fn hexdump(data: &[u8], base: usize) -> String {
    let mut out = String::new();
    for (i, chunk) in data.chunks(16).enumerate() {
        let _ = write!(out, "{:08x}  ", base + i * 16);
        for j in 0..16 {
            match chunk.get(j) {
                Some(b) => write!(out, "{b:02x} "),
                None => write!(out, "   "),
            }
            .unwrap();
            if j == 7 {
                out.push(' ');
            }
        }
        out.push_str(" |");
        out.extend(chunk.iter().map(|&b| {
            if b.is_ascii_graphic() || b == b' ' {
                b as char
            } else {
                '.'
            }
        }));
        out.push_str("|\n");
    }
    out
}

/// Strides at which bytes most often repeat — fixed-size records show up as peaks.
pub fn record_size_candidates(data: &[u8], max_stride: usize) -> Vec<(usize, f64)> {
    let sample = &data[..data.len().min(1 << 16)];
    let mut scores: Vec<(usize, f64)> = (2..=max_stride.min(sample.len() / 4))
        .map(|k| {
            let same = sample
                .iter()
                .zip(&sample[k..])
                .filter(|(a, b)| a == b)
                .count();
            (k, same as f64 / (sample.len() - k) as f64)
        })
        .collect();
    // Multiples of the real record size score as well as (or better than) the size
    // itself; drop a stride when one of its divisors scores nearly as high.
    let by_stride = scores.clone();
    scores.retain(|&(k, score)| {
        !by_stride
            .iter()
            .any(|&(d, s)| d < k && k % d == 0 && s >= score * 0.9)
    });
    scores.sort_by(|a, b| b.1.total_cmp(&a.1).then(a.0.cmp(&b.0)));
    scores.truncate(5);
    scores
}

pub fn strings(data: &[u8], min_len: usize) -> Vec<(usize, String)> {
    let mut out = Vec::new();
    let mut start = None;
    for (i, &b) in data.iter().chain(std::iter::once(&0)).enumerate() {
        let printable = b.is_ascii_graphic() || b == b' ';
        match (printable, start) {
            (true, None) => start = Some(i),
            (false, Some(s)) => {
                if i - s >= min_len {
                    out.push((s, String::from_utf8_lossy(&data[s..i]).into_owned()));
                }
                start = None;
            }
            _ => {}
        }
    }
    out
}

pub fn report(data: &[u8]) -> String {
    let mut out = String::new();
    let _ = writeln!(out, "size:     {} bytes ({:#x})", data.len(), data.len());
    let magic = MAGICS
        .iter()
        .find(|(m, _)| data.starts_with(m))
        .map(|(_, d)| *d);
    let _ = writeln!(out, "magic:    {}", magic.unwrap_or("unknown"));
    let text_ratio = data
        .iter()
        .filter(|b| b.is_ascii_graphic() || b.is_ascii_whitespace())
        .count() as f64
        / data.len().max(1) as f64;
    let _ = writeln!(
        out,
        "text:     {:.0}% printable ASCII{}",
        text_ratio * 100.0,
        if text_ratio > 0.95 {
            " (likely a text file)"
        } else {
            ""
        }
    );

    let e = entropy(data);
    let verdict = match e {
        e if e > 7.5 => "compressed or encrypted",
        e if e > 5.5 => "dense binary / packed data",
        e if e > 3.0 => "structured binary",
        _ => "sparse / highly repetitive",
    };
    let _ = writeln!(out, "entropy:  {e:.3} bits/byte — {verdict}");
    if data.len() > 4096 {
        let blocks: Vec<f64> = data.chunks(4096).map(entropy).collect();
        let bar: String = blocks
            .iter()
            .take(64)
            .map(|e| {
                [' ', '▁', '▂', '▃', '▄', '▅', '▆', '▇', '█'][(e / 8.0 * 8.0).round() as usize]
            })
            .collect();
        let _ = writeln!(
            out,
            "per-4K:   [{bar}]{}",
            if blocks.len() > 64 { " …" } else { "" }
        );
    }

    let _ = writeln!(
        out,
        "\nheader u32 LE (✱ = matches file size / remaining size / plausible offset):"
    );
    for (i, w) in data.chunks_exact(4).take(8).enumerate() {
        let v = u32::from_le_bytes(w.try_into().unwrap());
        let off = i * 4;
        let mark = if v as usize == data.len() || v as usize == data.len() - off - 4 {
            " ✱ size"
        } else if v as usize > off && (v as usize) < data.len() && v % 4 == 0 {
            " ✱ offset?"
        } else {
            ""
        };
        let _ = writeln!(out, "  +{off:#04x}: {v:>11} {v:#010x}{mark}");
    }

    let _ = writeln!(out, "\nrecord-size candidates (stride: byte-repeat ratio):");
    for (k, score) in record_size_candidates(data, 512) {
        let _ = writeln!(
            out,
            "  {k:>4}: {:.1}%{}",
            score * 100.0,
            if data.len() % k == 0 {
                "  (divides file size)"
            } else {
                ""
            }
        );
    }

    let s = strings(data, 6);
    let _ = writeln!(out, "\nstrings (≥6 chars): {}", s.len());
    for (off, text) in s.iter().take(10) {
        let _ = writeln!(
            out,
            "  {off:#08x}: {}",
            text.chars().take(70).collect::<String>()
        );
    }

    let _ = writeln!(
        out,
        "\nfirst bytes:\n{}",
        hexdump(&data[..data.len().min(64)], 0)
    );
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn finds_record_stride() {
        let data: Vec<u8> = (0..1000u32)
            .flat_map(|i| [0xAA, (i % 7) as u8, 0, 0, 0, 0x55, (i >> 3) as u8])
            .collect();
        assert_eq!(record_size_candidates(&data, 64)[0].0, 7);
    }

    #[test]
    fn entropy_bounds() {
        assert_eq!(entropy(&[7; 100]), 0.0);
        let all: Vec<u8> = (0..=255).collect();
        assert!((entropy(&all) - 8.0).abs() < 1e-9);
    }

    #[test]
    fn extracts_strings() {
        assert_eq!(
            strings(b"\0\0hello world\x01ab\x02gfx/x.bmp", 6),
            [(2, "hello world".into()), (17, "gfx/x.bmp".into())]
        );
    }
}
