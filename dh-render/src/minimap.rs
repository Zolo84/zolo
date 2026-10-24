//! Міні-карта: увесь світ з lightmap L4 у малий буфер політичних кольорів.
//!
//! Геометрія: світ L4 — 3744×1440 світлопікселів (8 px мапи кожен). Міні-карта
//! бере кожен 16-й світлопіксель → 234×90 пікселів (1 піксель = 128 px мапи).
//! Кольори — політичні (`prov_colors`: власники з country.csv, інакше — терен),
//! вода — `SEA_COLOR`. Будуються один раз (усі 5265 тайлів L4).

use dh_format::map::MapData;

/// Ширина міні-карти в пікселях (3744/16).
pub const MINIMAP_W: u32 = 234;
/// Висота міні-карти (1440/16).
pub const MINIMAP_H: u32 = 90;
/// Крок семплювання у світлопікселях L4.
pub const SAMPLE_STEP: u32 = 16;
/// Колір води (той самий дефолт, що в `prov_colors` двигуна: (135,172,216)).
pub const SEA_COLOR: u32 = 0xFF87_ACD8;

/// Будує міні-карту за політичними кольорами провінцій.
///
/// Один прохід по тайлах L4 (117×45); кожен тайл дає 4 семпли (кути 16-кроку).
/// За межами `prov_colors` (пров. 0 тощо) — `SEA_COLOR`.
pub fn build_minimap(map: &MapData, prov_colors: &[u32]) -> anyhow::Result<Vec<u32>> {
    let Some(l4) = map.lightmap.iter().find(|l| l.level == 4) else {
        anyhow::bail!("у lightmap немає рівня L4");
    };
    debug_assert_eq!(l4.tiles_x * 2, MINIMAP_W, "117·2 = 234");
    debug_assert_eq!(l4.tiles_y * 2, MINIMAP_H, "45·2 = 90");
    let (w, h) = (MINIMAP_W, MINIMAP_H);
    let mut buf = vec![SEA_COLOR; (w * h) as usize];
    for ty in 0..l4.tiles_y {
        for tx in 0..l4.tiles_x {
            let tile = l4.decode_tile(tx, ty)?;
            for dy in [0u32, SAMPLE_STEP] {
                for dx in [0u32, SAMPLE_STEP] {
                    let prov = tile.prov_ids[(dy * 32 + dx) as usize];
                    let c = prov_colors.get(prov as usize).copied().unwrap_or(SEA_COLOR);
                    let my = ty * 2 + dy / SAMPLE_STEP;
                    let mx = tx * 2 + dx / SAMPLE_STEP;
                    buf[(my * w + mx) as usize] = c;
                }
            }
        }
    }
    Ok(buf)
}
