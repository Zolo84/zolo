//! Checks against a real Darkest Hour install. Skipped unless `DH_GAME_DIR`
//! points at the game directory (the files are never part of the repository).

use dh_map::{BoundBox, ColorScales, Level, LightMap, BLOCK};
use std::path::PathBuf;

fn map_dir() -> Option<PathBuf> {
    let dir = PathBuf::from(std::env::var_os("DH_GAME_DIR")?).join("map");
    dir.is_dir().then_some(dir)
}

fn load(dir: &std::path::Path, level: Level) -> LightMap {
    let data = std::fs::read(dir.join(level.file_name())).expect("lightmap file");
    LightMap::parse(data, level).expect("offset table")
}

#[test]
fn every_block_matches_offset_table() {
    let Some(dir) = map_dir() else { return };
    for level in Level::ALL {
        let map = load(&dir, level);
        let (bw, bh) = map.grid();
        let (mut leaves, mut max_ids) = (0usize, 0usize);
        for by in 0..bh {
            for bx in 0..bw {
                let block = map
                    .block_checked(bx, by)
                    .unwrap_or_else(|e| panic!("{} block ({bx},{by}): {e}", level.file_name()));
                let area: usize = block.leaves.iter().map(|l| l.size() * l.size()).sum();
                assert_eq!(area, BLOCK * BLOCK);
                leaves += block.leaves.len();
                max_ids = max_ids.max(block.ids.len());
            }
        }
        eprintln!(
            "{}: {} blocks, {leaves} leaves, max {max_ids} ids/block",
            level.file_name(),
            bw * bh
        );
    }
}

#[test]
fn provinces_lie_inside_their_bounding_boxes() {
    let Some(dir) = map_dir() else { return };
    let bb = BoundBox::parse(&std::fs::read(dir.join("boundbox.tbl")).unwrap());
    let level = Level::new(3).unwrap();
    let map = load(&dir, level);
    let raster = map.province_raster().unwrap();
    let (w, h) = map.size();
    let scale = 1u32 << level.index();
    let (mut outside, mut unknown) = (0usize, 0usize);
    for y in 0..h {
        for x in 0..w {
            let id = raster[y * w + x];
            let Some(r) = bb.get(id) else {
                unknown += 1;
                continue;
            };
            // A level-4 pixel covers `scale` level-1 pixels per axis.
            let (x1, y1) = (x as u32 * scale, y as u32 * scale);
            let hit = |x1: u32| {
                x1 + scale > r.left && x1 <= r.right && y1 + scale > r.top && y1 <= r.bottom
            };
            if !hit(x1) && !hit(x1 + (w as u32) * scale) {
                outside += 1;
            }
        }
    }
    eprintln!(
        "level 4: {} px, {outside} outside their box, {unknown} with ids beyond boundbox.tbl",
        w * h
    );
    assert_eq!(unknown, 0);
    assert!(
        outside * 1000 < w * h,
        "{outside} pixels outside their bounding box"
    );
}

#[test]
fn colorscales_parse() {
    let Some(dir) = map_dir() else { return };
    let cs = ColorScales::parse(&std::fs::read(dir.join("colorscales.csv")).unwrap());
    eprintln!("colour scales: {:?}", cs.scales.keys().collect::<Vec<_>>());
    assert!(cs.scales.len() >= 4);
}
