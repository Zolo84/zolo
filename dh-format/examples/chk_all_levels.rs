// Перевірка цілісності ВСІХ секцій усіх 4 рівнів lightmap після зміни
// порядку обходу квадродерева (SE→SW→NE→NW). Статистика по дзеркальності.
use dh_format::map::{LightmapLevel, BLOCKS_X};
use std::fs;

fn main() -> anyhow::Result<()> {
    let game = "/home/andriy/.local/share/Steam/steamapps/common/Darkest Hour A HOI Game";
    for level in 1..=4u32 {
        let path = format!("{game}/map/Map_1/lightmap{level}.tbl");
        let data = fs::read(&path)?;
        let s = 1u32 << (level - 1);
        let (tx, ty) = (BLOCKS_X / s, 360 / s);
        let n = (tx * ty) as usize;
        let table = 4 * (n + 1);
        let mut offs = Vec::with_capacity(n + 1);
        for i in 0..=n {
            offs.push(u32::from_le_bytes(
                data[4 * i..4 * i + 4].try_into().unwrap(),
            ));
        }
        let lvl = LightmapLevel {
            level: level as u8,
            scale: 32 * s,
            tiles_x: tx,
            tiles_y: ty,
            offsets: offs.clone(),
            data: data[table..].to_vec(),
        };
        let mut err = 0u32;
        let mut total_leaves = 0u64;
        let mut max_leaves = 0u32;
        for by in 0..ty {
            for bx in 0..tx {
                match lvl.decode_tile(bx, by) {
                    Ok(t) => {
                        total_leaves += t.prov_ids.iter().filter(|&&v| v != 0).count() as u64;
                        max_leaves = max_leaves.max(
                            t.prov_ids
                                .chunks(32)
                                .map(|row| row.iter().filter(|&&v| v != 0).count() as u32)
                                .sum::<u32>(),
                        );
                    }
                    Err(e) => {
                        err += 1;
                        if err <= 3 {
                            eprintln!("L{level} блок ({bx},{by}): {e:#}");
                        }
                    }
                }
            }
        }
        println!(
            "L{level}: {tx}×{ty} блоків, помилок: {err}, ненульових пікселів: {total_leaves} ({:.1}% від {})",
            total_leaves as f64 / (tx * ty * 1024) as f64 * 100.0,
            tx * ty * 1024
        );
    }
    Ok(())
}
