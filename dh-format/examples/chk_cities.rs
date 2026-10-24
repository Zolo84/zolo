// Статистичний тест декодера: для кожного міста з Province.csv перевіряємо,
// чи city-піксель має id своєї провінції. Правильний декодер дає ~100%.
use dh_format::map::{LightmapLevel, BLOCKS_X};
use std::fs;

fn main() -> anyhow::Result<()> {
    let game = "/home/andriy/.local/share/Steam/steamapps/common/Darkest Hour A HOI Game";
    let data = fs::read(format!("{game}/map/Map_1/lightmap1.tbl"))?;
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

    // Кеш декодованих блоків
    use std::collections::HashMap;
    let mut cache: HashMap<u32, Vec<u16>> = HashMap::new();

    let csv = fs::read_to_string(format!("{game}/map/Map_1/Province.csv"))?;
    let mut ok = 0u32;
    let mut mir = 0u32;
    let mut bad = 0u32;
    let mut bad_list = Vec::new();
    for line in csv.lines().skip(1) {
        let c: Vec<&str> = line.split(';').collect();
        if c.len() <= 21 {
            continue;
        }
        let pid: u32 = match c[0].trim().parse() {
            Ok(v) => v,
            Err(_) => continue,
        };
        let cx: u32 = match c[20].trim().parse() {
            Ok(v) => v,
            Err(_) => continue,
        };
        let cy: u32 = match c[21].trim().parse() {
            Ok(v) => v,
            Err(_) => continue,
        };
        if cx == 0 || cy == 0 || cx >= 29952 || cy >= 11520 {
            continue;
        }
        let (bx, by) = (cx / 32, cy / 32);
        let (px, py) = (cx % 32, cy % 32);
        let idx = by * BLOCKS_X + bx;
        let provs = cache.entry(idx).or_insert_with(|| {
            lvl.decode_tile(bx, by)
                .map(|t| t.prov_ids)
                .unwrap_or_default()
        });
        let got = provs.get((py * 32 + px) as usize).copied().unwrap_or(0);
        // Дзеркальна гіпотеза: провінція у точці (px,py) правильного декодера
        // = наша (31-px, 31-py) — поворот блока на 180°.
        let got_mir = provs
            .get(((31 - py) * 32 + (31 - px)) as usize)
            .copied()
            .unwrap_or(0);
        if got == pid as u16 {
            ok += 1;
        } else if got_mir == pid as u16 {
            mir += 1;
        } else {
            bad += 1;
            if bad_list.len() < 15 {
                bad_list.push(format!(
                    "id {pid} ({cx},{cy}) → {got} (блок {bx},{by} пкс {px},{py})"
                ));
            }
        }
    }
    println!(
        "ВСЬОГО міст: {}  прямих збігів: {}  дзеркальних: {}  незбігів: {}",
        ok + bad + mir,
        ok,
        mir,
        bad
    );
    println!("перші незбіги:");
    for b in &bad_list {
        println!("  {b}");
    }
    Ok(())
}
