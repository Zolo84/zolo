// Перевірка: блок Парижа (468,80), піксель (3,28) — там має бути id 56.
use dh_format::map::{LightmapLevel, BLOCKS_X};
use std::fs;

fn main() -> anyhow::Result<()> {
    let game = "/home/andriy/.local/share/Steam/steamapps/common/Darkest Hour A HOI Game";
    let path = format!("{game}/map/Map_1/lightmap1.tbl");
    let data = fs::read(&path)?;

    let n = (BLOCKS_X * 360) as usize;
    let table = 4 * (n + 1);
    let mut offs = Vec::with_capacity(n + 1);
    for i in 0..=n {
        offs.push(u32::from_le_bytes(
            data[4 * i..4 * i + 4].try_into().unwrap(),
        ));
    }
    let lvl = LightmapLevel {
        level: 1,
        scale: 32,
        tiles_x: BLOCKS_X,
        tiles_y: 360,
        offsets: offs.clone(),
        data: data[table..].to_vec(),
    };

    for (bx, by, px, py) in [(468u32, 80u32, 3, 28), (468, 81, 0, 0), (456, 70, 0, 0)] {
        // y-індекс блока by: idx = (by * tiles_x + bx)
        let t = lvl.decode_tile(bx, by)?;
        let idx = (py * 32 + px) as usize;
        let pid = t.prov_ids[idx];
        let lv = t.light_vals[idx];
        println!(
            "блок ({bx},{by}) піксель ({px},{py}): провінція {pid}, світло {lv} — {}",
            if pid == 56 { "ПАРИЖ ✓" } else { "" }
        );
        // як розподілені провінції в блоці — друк 32 рядків по 32
        if bx == 468 && by == 80 {
            println!("матриця провінцій (P=56, .=0, #=інша):");
            for y in 0..32 {
                let mut row = String::new();
                for x in 0..32 {
                    let v = t.prov_ids[(y * 32 + x) as usize];
                    row.push(if v == 56 {
                        'P'
                    } else if v == 0 {
                        '.'
                    } else {
                        '#'
                    });
                }
                println!("{row}");
            }
            println!("ids у секції: {:?}", &t.id_list);
        }
    }
    Ok(())
}
