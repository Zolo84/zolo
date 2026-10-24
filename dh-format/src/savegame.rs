//! Сейви .eug + bzip2-стиснення (RE-savegames.md).
//!
//! Сейв DH = ТЕКСТ мовою сценарію, стиснутий bz2 (FUN_0040f6f0/0x40f920:
//! fopen ↔ BZ2_bzopen, копіювання блоками 0x1000; на диску .eug = стиснений
//! потік; парсер читає розпакований текст). Магія потоку — "BZh".
//!
//! Завантаження: байти → (bz2? розпакувати) → `dh_text::parse` (той самий
//! парсер, що сценарії) → `scenario::from_root` → наша структура Scenario —
//! далі звичайний `build_world` дає світ на момент сейву (швидкий старт,
//! RE-savegames.md §5: сейв завантажується як сценарій через temp.eug).

use std::path::Path;

use anyhow::{bail, Context, Result};

/// Завантажує сейв .eug (bz2-стиснутий або голий текст) → наш Scenario.
///
/// Дата гри на момент сейву стає стартовою (`save_date` → globaldata);
/// стан провінцій/країн — з country/province-блоків сейву; історія подій —
/// у `events_history`/`slept_events`.
pub fn load(path: &Path) -> Result<crate::scenario::Scenario> {
    let bytes = std::fs::read(path)
        .with_context(|| format!("не вдалось прочитати сейв {}", path.display()))?;
    let name = path
        .file_stem()
        .map(|s| s.to_string_lossy().to_string())
        .unwrap_or_else(|| path.display().to_string());
    from_bytes(&bytes, &name)
}

/// Сейв із байтів (для тестів і VFS-читання).
pub fn from_bytes(bytes: &[u8], name: &str) -> Result<crate::scenario::Scenario> {
    let text =
        decompress_if_needed(bytes).with_context(|| format!("{name}: розпакування сейву"))?;
    let doc = dh_text::parse(&text);
    if !doc.errors.is_empty() {
        // «got a parsing error at line %d» (RE-savegames.md §4) — сейв читаємо
        // далі (гра теж читає до помилки), але повідомляємо.
        for e in doc.errors.iter().take(3) {
            log::warn!(
                "сейв {name}: помилка парсера на рядку {}: {}",
                e.line,
                e.message
            );
        }
    }
    crate::scenario::from_root(&doc.root, name, Vec::new())
}

/// Розпаковує bz2, якщо це bz2-потік (магія "BZh"); інакше повертає байти як є.
fn decompress_if_needed(bytes: &[u8]) -> Result<Vec<u8>> {
    if !bytes.starts_with(b"BZh") {
        return Ok(bytes.to_vec());
    }
    let mut out = Vec::with_capacity(bytes.len() * 8);
    let mut decoder = bzip2::read::MultiBzDecoder::new(bytes);
    std::io::Read::read_to_end(&mut decoder, &mut out)
        .with_context(|| "bz2-потік сейву обірвано")?;
    if out.is_empty() {
        bail!("bz2-потік сейву порожній після розпакування");
    }
    Ok(out)
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Синтетичний сейв (голий текст): дата сейву → стартова дата, країна
    /// з наявними провінціями, історія подій.
    const SYNTH_SAVE: &str = r#"
name = "test save"
save_date = { year = 1936 month = january day = 12 }
globaldata = { startdate = { year = 1933 month = march day = 3 } }
country = { tag = GER capital = 163 ownedprovinces = { 300 301 } controlledprovinces = { 300 } }
events_history = { 1330110043 1330110051 }
slept_events = { 2011042 }
"#;

    #[test]
    fn plain_save_loads_with_save_date_as_start() {
        let sc = from_bytes(SYNTH_SAVE.as_bytes(), "test").unwrap();
        // save_date (1/12/1936... день 12 нуль-базований → 13-те) → старт світу.
        assert_eq!(
            sc.globaldata.startdate,
            Some(crate::GameDate::from_ymd(1936, 1, 13))
        );
        assert_eq!(sc.events_history, vec![1330110043, 1330110051]);
        assert_eq!(sc.slept_events, vec![2011042]);
        let ger = &sc.countries[0];
        assert_eq!(ger.tag, crate::Tag("GER".into()));
        assert!(ger
            .body
            .iter()
            .any(|(k, v)| k == "ownedprovinces" && v == "{ 300 301 }"));
    }

    #[test]
    fn bz2_save_decompresses() {
        let mut enc = bzip2::write::BzEncoder::new(Vec::new(), bzip2::Compression::default());
        std::io::Write::write_all(&mut enc, SYNTH_SAVE.as_bytes()).unwrap();
        let compressed = enc.finish().unwrap();
        assert!(compressed.starts_with(b"BZh"));
        let sc = from_bytes(&compressed, "test").unwrap();
        assert_eq!(sc.events_history, vec![1330110043, 1330110051]);
        assert_eq!(
            sc.globaldata.startdate,
            Some(crate::GameDate::from_ymd(1936, 1, 13))
        );
    }
}
