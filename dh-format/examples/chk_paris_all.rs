// Париж id=56: всі пари координат у CSV. City = одна з них.
// Перевіряємо обидва декодери (наш + дзеркальний) на всіх точках.
use dh_format::map::{LightmapLevel, BLOCKS_X};
use std::collections::HashMap;
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
    let mut cache: HashMap<u32, Vec<u16>> = HashMap::new();
    let csv = fs::read_to_string(format!("{game}/map/Map_1/Province.csv"))?;
    for line in csv.lines().skip(1) {
        let c: Vec<&str> = line.split(';').collect();
        let pid: u32 = match c[0].trim().parse() {
            Ok(v) => v,
            Err(_) => continue,
        };
        if pid != 56 && pid != 50 && pid != 53 && pid != 101 {
            continue;
        }
        // всі пари координат
        let nums: Vec<i32> = c.iter().map(|s| s.trim().parse().unwrap_or(-1)).collect();
        println!("провінція {pid} ({name}):", name = c[1]);
        for j in (16..nums.len() - 1).step_by(2) {
            let (x, y) = (nums[j], nums[j + 1]);
            if x <= 0 || y <= 0 || x >= 29952 || y >= 11520 {
                continue;
            }
            let (bx, by) = ((x / 32) as u32, (y / 32) as u32);
            let (px, py) = ((x % 32) as usize, (y % 32) as usize);
            let idx = by * BLOCKS_X + bx;
            let provs = cache.entry(idx).or_insert_with(|| {
                lvl.decode_tile(bx, by)
                    .map(|t| t.prov_ids)
                    .unwrap_or_default()
            });
            let got = provs.get(py * 32 + px).copied().unwrap_or(0);
            let got_mir = provs.get((31 - py) * 32 + (31 - px)).copied().unwrap_or(0);
            let mark = if got == pid as u16 {
                "← ПРЯМИЙ ЗБІГ"
            } else if got_mir == pid as u16 {
                "← дзерк. збіг"
            } else {
                ""
            };
            println!(
                "   ({x},{y}) блок ({bx},{by}) пкс ({px},{py}): {got} / дзерк {got_mir}  {mark}"
            );
        }
    }
    Ok(())
}
