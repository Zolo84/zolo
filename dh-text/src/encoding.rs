//! Windows-1252 (CP1252) decoding and encoding.

/// Code points for bytes 0x80..=0x9F. `None` marks the five bytes CP1252 leaves undefined;
/// they are decoded as the matching C1 control character so decoding never fails.
const HIGH: [Option<char>; 32] = [
    Some('\u{20AC}'),
    None,
    Some('\u{201A}'),
    Some('\u{0192}'),
    Some('\u{201E}'),
    Some('\u{2026}'),
    Some('\u{2020}'),
    Some('\u{2021}'),
    Some('\u{02C6}'),
    Some('\u{2030}'),
    Some('\u{0160}'),
    Some('\u{2039}'),
    Some('\u{0152}'),
    None,
    Some('\u{017D}'),
    None,
    None,
    Some('\u{2018}'),
    Some('\u{2019}'),
    Some('\u{201C}'),
    Some('\u{201D}'),
    Some('\u{2022}'),
    Some('\u{2013}'),
    Some('\u{2014}'),
    Some('\u{02DC}'),
    Some('\u{2122}'),
    Some('\u{0161}'),
    Some('\u{203A}'),
    Some('\u{0153}'),
    None,
    Some('\u{017E}'),
    Some('\u{0178}'),
];

/// Decodes one CP1252 byte.
pub fn decode_byte(b: u8) -> char {
    match b {
        0x80..=0x9F => HIGH[(b - 0x80) as usize].unwrap_or(b as char),
        _ => b as char,
    }
}

/// Decodes a CP1252 byte string. A leading UTF-8 BOM switches to (lossy) UTF-8,
/// since some community-edited files were re-saved by modern editors.
pub fn decode(bytes: &[u8]) -> String {
    if let Some(rest) = bytes.strip_prefix(b"\xEF\xBB\xBF") {
        return String::from_utf8_lossy(rest).into_owned();
    }
    bytes.iter().map(|&b| decode_byte(b)).collect()
}

/// Encodes a string as CP1252; unrepresentable characters become `?`.
pub fn encode(text: &str) -> Vec<u8> {
    text.chars()
        .map(|c| match c as u32 {
            0x00..=0x7F | 0xA0..=0xFF => c as u8,
            _ => HIGH
                .iter()
                .position(|h| *h == Some(c))
                .map(|i| 0x80 + i as u8)
                .unwrap_or(b'?'),
        })
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn round_trips_all_defined_bytes() {
        for b in (0u8..=255).filter(|b| !matches!(b, 0x81 | 0x8D | 0x8F | 0x90 | 0x9D)) {
            assert_eq!(encode(&decode(&[b])), vec![b], "byte {b:#04x}");
        }
    }

    #[test]
    fn decodes_specials() {
        assert_eq!(decode(b"\x80 \xe9\x9c"), "€ éœ");
        assert_eq!(decode(b"\xEF\xBB\xBFK\xc3\xb6ln"), "Köln");
    }
}
