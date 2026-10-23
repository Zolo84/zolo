//! Рендер мапи: атлас тайлів tiles.bmp + index.tbl + освітлення lightmap.
//!
//! RE: re/RE-mapformats-full.md §tiles/index, re/RE-lightmap.md §4.
//! Сітка атласа: 8192/32 = 256 колонок × 1408/32 = 44 рядки; тайл n:
//! tile_x = (n % 256)·32, tile_y = (n / 256)·32 (перевірено у [`tile_atlas_rect`]).
//! index.tbl: блок (x,y) = index[y·936 + x], 0 = океан, 1..11225 = тайл атласа.

use crate::canvas::{Canvas, Color};
use dh_format::map::{ATLAS_W, BLOCKS_X, BLOCKS_Y, TILE_PX, TILE_SLOTS, MapData};
use dh_format::palette::TerrainPalettes;
use dh_format::ProvinceId;

/// Колір океану (index = 0): темно-синій (ARGB8888, див. [`Canvas`]).
/// TODO: звірити з оригінальним кольором гри (палітри/colorscales.csv) — RE-mapformats-full.md.
pub const OCEAN_COLOR: Color = Color::rgb(135, 172, 216);

/// Колір тонкої рамки-підсвітки провінцій при `show_provinces` (тимчасовий).
/// TODO: точної семантики «підсвітлення» провінцій в оригіналі не підтверджено.
pub const PROV_FRAME_COLOR: Color = Color::rgb(255, 255, 255);

/// Прямокутник в'юпорта в тайлах 32×32 світу (блоках index.tbl/lightmap).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Viewport {
    /// Лівий верхній кут у тайлах 32×32 світу.
    pub x: u32,
    pub y: u32,
    /// Ширина/висота в тайлах.
    pub w_blocks: u32,
    pub h_blocks: u32,
}

impl Viewport {
    pub fn new(x: u32, y: u32, w_blocks: u32, h_blocks: u32) -> Self {
        debug_assert!(w_blocks > 0 && h_blocks > 0, "порожній в'юпорт");
        Self { x, y, w_blocks, h_blocks }
    }
    /// Розмір в'юпорта в екранних пікселях при заданому zoom.
    pub fn screen_size(&self, zoom: u8) -> (u32, u32) {
        let s = screen_scale(zoom);
        (self.w_blocks * TILE_PX * s, self.h_blocks * TILE_PX * s)
    }
}

/// Масштаб: скільки екранних пікселів у пікселі мапи (zoom 0 = 1:1, zoom 1 = 2:1, ...).
/// Кожен тайл 32×32 мапи займає 32·2^zoom екранних пікселів.
/// TODO: повноцінний «зум-аут» (вся мапа на екрані, zoom > 0 зі зменшенням) —
/// потрібен mipmap-підхід на основі lightmap; зараз zoom > 0 = просте збільшення.
pub fn screen_scale(zoom: u8) -> u32 {
    1u32 << zoom.min(4)
}

/// Позиція тайла n в атласі tiles.bmp (сітка 256×44, тайли 32×32).
/// Порядок — рядок за рядком: tile_x = (n % 256)·32, tile_y = (n / 256)·32.
pub fn tile_atlas_rect(n: u32) -> (u32, u32) {
    debug_assert!(n < TILE_SLOTS, "тайл {n} поза атласом (слотів {TILE_SLOTS})");
    ((n % 256) * TILE_PX, (n / 256) * TILE_PX)
}

/// Індекс світлопікселя у сітці 32×32 розкодованого lightmap-тайла для
/// світового пікселя (bx·32+px, by·32+py). Крок світлопікселя = 2^lshift
/// пікселів мапи; при zoom 0 (lshift=0) це просто (py, px).
#[inline]
fn light_idx(bx: u32, by: u32, px: u32, py: u32, lshift: u32) -> usize {
    let lx = ((bx * TILE_PX + px) >> lshift) % TILE_PX;
    let ly = ((by * TILE_PX + py) >> lshift) % TILE_PX;
    (ly * TILE_PX + lx) as usize
}

/// Колір (r,g,b) із застосуванням освітлення: множник ≈ (light+16)/63
/// у 8.8-фіксованій арифметиці, кліп на 255. Без світла — множник 1.0.
/// TODO: точну криву оригіналу не підтверджено (RE-lightmap.md §6) —
/// звірити з грою (мінімальна яскравість +16 при light=0).
#[inline]
fn shade(r: u8, g: u8, b: u8, light: Option<u32>) -> u32 {
    let m = match light {
        // 6-біт світло 0..63: у грі день ~24-40 (не затемнює сильно).
        // Множник зміщений у світлу зону: light=24 → ~0.95, light=63 → ~1.6 (кап 255).
        Some(lv) => (((lv + 40) * 256) / 63).min(400),
        None => 256,
    };
    let f = |c: u8| ((c as u32 * m) >> 8).min(255) as u8;
    ((f(r) as u32) << 16) | ((f(g) as u32) << 8) | f(b) as u32
}

/// Копіює піксель блока (px, py) у канвас із масштабом scale (zoom 0 = 1:1).
#[inline]
fn put_block_px(canvas: &mut Canvas, scale: u32, sx: u32, sy: u32, px: u32, py: u32, color: u32) {
    if scale == 1 {
        canvas.set_pixel((sx + px) as i32, (sy + py) as i32, color);
    } else {
        canvas.fill_rect((sx + px * scale) as i32, (sy + py * scale) as i32, scale, scale, color);
    }
}

// ============================================================================
// MapRenderer
// ============================================================================

/// Рендер мапи з тайлів атласа + освітлення lightmap у канвас.
///
/// `zoom` 0..=4: 0 = 1:1 з найдетальнішою lightmap L1, далі масштаб ×2^zoom
/// (рівень lightmap = min(zoom, 3), тобто L1..L4). Для MVP повноцінно
/// підтримується zoom = 0; zoom > 0 — просте збільшення (TODO див. [`screen_scale`]).
pub struct MapRenderer<'a> {
    pub map: &'a MapData,
    pub zoom: u8,
    pub view: Viewport,
    /// Малювати тонку рамку навколо boundbox усіх видимих провінцій.
    pub show_provinces: bool,
    /// Кольори провінцій ARGB8888 (індекс = ProvinceId; запис 0 не
    /// використовується). Якщо None — блоки без тайла атласа малюються
    /// кольором океану (тобто видно лише тайловий шар index.tbl).
    pub prov_colors: Option<&'a [u32]>,
    /// Тип місцевості кожної провінції (індекс 0..6 у TerrainPalettes;
    /// Province.csv Terrain → Plains=0, Forest=1, Mountain=2, Desert=3,
    /// Marsh=4, Hills=5, Jungle=6 — як у FUN_00417740). Потрібен для
    /// розфарбування індексного атласа tiles.bmp.
    pub prov_terrain: Option<&'a [u8]>,
    /// Палітри місцевості (TerrainPalettes::load): колір тайла =
    /// palettes[терен блока][індекс пікселя у tiles_indices].
    pub terrain_palettes: Option<&'a TerrainPalettes>,
}

impl<'a> MapRenderer<'a> {
    pub fn new(map: &'a MapData, zoom: u8, view: Viewport) -> Self {
        debug_assert!(zoom <= 4, "zoom {zoom} поза 0..=4");
        Self {
            map,
            zoom,
            view,
            show_provinces: false,
            prov_colors: None,
            prov_terrain: None,
            terrain_palettes: None,
        }
    }

    /// Зручність-білдер: увімкнути рамки провінцій.
    pub fn with_provinces(mut self, on: bool) -> Self {
        self.show_provinces = on;
        self
    }

    /// Зручність-білдер: таблиця кольорів провінцій (див. [`prov_colors`]).
    pub fn with_province_colors(mut self, colors: &'a [u32]) -> Self {
        self.prov_colors = Some(colors);
        self
    }

    /// Колір провінції (ARGB): з таблиці, або океан, якщо таблиці немає/провінція поза нею.
    fn prov_color(&self, prov: u16) -> u32 {
        match self.prov_colors {
            Some(cs) => cs.get(prov as usize).copied().unwrap_or(OCEAN_COLOR.0),
            None => OCEAN_COLOR.0,
        }
    }

    /// Екранних пікселів на піксель мапи.
    pub fn scale(&self) -> u32 {
        screen_scale(self.zoom)
    }

    /// Рендер в'юпорта в канвас (канвас попередньо очищується кольором океану).
    pub fn render(&self, canvas: &mut Canvas) {
        let scale = self.scale();
        // Рівень lightmap 0..=3 (L1..L4); світлопіксель = 2^lshift пікселів мапи.
        let level = (self.zoom as usize).min(3);
        let light_level = self.map.lightmap.get(level);
        let lshift = level as u32;

        canvas.clear(OCEAN_COLOR);

        // Блоки в межах мапи (в'юпорт може виходити за край).
        let bx0 = self.view.x;
        let by0 = self.view.y;
        let bx1 = self.view.x.saturating_add(self.view.w_blocks).min(BLOCKS_X);
        let by1 = self.view.y.saturating_add(self.view.h_blocks).min(BLOCKS_Y);

        // TODO (продуктивність): кешувати розкодовані lightmap-тайли (при zoom > 0
        // один тайл L2..L4 покриває 4^lshift блоків) і копіювати рядки блоками.
        for by in by0..by1 {
            for bx in bx0..bx1 {
                let idx = self.map.index[(by * BLOCKS_X + bx) as usize];
                let sx = (bx - bx0) * TILE_PX * scale;
                let sy = (by - by0) * TILE_PX * scale;

                // Тайл атласа: лише 3.33% блоків мають ненульовий index (фактично —
                // фрагменти узбережжя; вся решта, зокрема Ісландія, index == 0).
                let tile = (idx != 0 && idx < TILE_SLOTS).then(|| tile_atlas_rect(idx));

                // Світло/провінції з lightmap (RE-lightmap.md §6, §10): на кожен
                // піксель блока — провінція (суша/море) і яскравість 0..63.
                let light = light_level.and_then(|ll| {
                    match ll.decode_tile(bx >> lshift, by >> lshift) {
                        Ok(ti) => Some(ti),
                        Err(e) => {
                            log::warn!("lightmap L{} блок ({bx},{by}): {e:#}", ll.level);
                            None
                        }
                    }
                });

                match (tile, light) {
                    (Some((tx, ty)), light) => {
                        // Шар 2 — тайл атласа (index.tbl): тайли зберігають ІНДЕКСИ
                        // палітри, а не кольори! Колір пікселя = palettes[терен
                        // блока][індекс] (RE FUN_00417740: тип місцевості → своя
                        // палітра landscape/trees/mountain/desert/marsh/hills/djungle).
                        // Індекс 0 = прозорий — просвічує фон провінцій.
                        let terrain_idx = light
                            .as_ref()
                            .and_then(|ti| {
                                // Провінція центрального пікселя блока → тип терену.
                                let c = light_idx(bx, by, TILE_PX / 2, TILE_PX / 2, lshift);
                                let pid = ti.prov_ids[c] as usize;
                                self.prov_terrain.and_then(|t| t.get(pid)).copied()
                            })
                            .unwrap_or(0);
                        let palettes = self.terrain_palettes;
                        for py in 0..TILE_PX {
                            for px in 0..TILE_PX {
                                let idx =
                                    self.map.tiles_indices[((ty + py) * ATLAS_W + (tx + px)) as usize]
                                        as usize;
                                if idx == 0 {
                                    continue; // прозорий — фон з lightmap лишається
                                }
                                let (r, g, b) = match palettes {
                                    Some(p) => {
                                        let [r, g, b] =
                                            p.color(terrain_idx as usize, idx);
                                        (r, g, b)
                                    }
                                    // Без палітр — сірий (щоб не плутати з фоном).
                                    None => (128, 128, 128),
                                };
                                let lv = light
                                    .as_ref()
                                    .map(|ti| ti.light_vals[light_idx(bx, by, px, py, lshift)] as u32);
                                let color = shade(r, g, b, lv);
                                put_block_px(canvas, scale, sx, sy, px, py, color);
                            }
                        }
                    }
                    (None, Some(ti)) => {
                        // Шар 1 — фон з провінцій lightmap (RE-lightmap.md §6/§10):
                        // колір пікселя = колір провінції (terrain_color/палітра) + світло.
                        // Море та провінції без кольору в таблиці → колір океану.
                        // TODO: точну LUT «світло+колір провінції → піксель» (0x00AA41CB
                        // з RE-lightmap.md §6) не підтверджено — звірити з оригіналом.
                        for py in 0..TILE_PX {
                            for px in 0..TILE_PX {
                                let c = light_idx(bx, by, px, py, lshift);
                                let base = self.prov_color(ti.prov_ids[c]);
                                let color = shade((base >> 16) as u8, (base >> 8) as u8, base as u8, Some(ti.light_vals[c] as u32));
                                put_block_px(canvas, scale, sx, sy, px, py, color);
                            }
                        }
                    }
                    (None, None) => {
                        // Ні тайла, ні lightmap — суцільний океан (як у базовому ТЗ).
                        canvas.fill_rect(sx as i32, sy as i32, TILE_PX * scale, TILE_PX * scale, OCEAN_COLOR);
                    }
                }
            }
        }

        if self.show_provinces {
            self.draw_province_frames(canvas, scale);
        }
    }

    /// Тонка рамка навколо boundbox кожної провінції, що перетинає в'юпорт.
    /// «Підсвітлення» = фіксований колір рамки; TODO: звірити з оригінальним виділенням.
    fn draw_province_frames(&self, canvas: &mut Canvas, scale: u32) {
        let vx0 = self.view.x as i64 * TILE_PX as i64;
        let vy0 = self.view.y as i64 * TILE_PX as i64;
        let vx1 = vx0 + self.view.w_blocks as i64 * TILE_PX as i64;
        let vy1 = vy0 + self.view.h_blocks as i64 * TILE_PX as i64;
        let t = scale.max(1) as i64; // товщина рамки в пікселях

        for prov in 1..self.map.bounds.len() {
            // bounds[0] = розмір мапи, не провінція.
            let b = self.map.bounds[prov];
            let (bx1, by1, bx2, by2) = (b.x1 as i64, b.y1 as i64, b.x2 as i64, b.y2 as i64);
            if bx2 < vx0 || by2 < vy0 || bx1 > vx1 || by1 > vy1 {
                continue; // не видима у в'юпорті
            }
            let sx1 = ((bx1 - vx0) * scale as i64) as i32;
            let sy1 = ((by1 - vy0) * scale as i64) as i32;
            let sx2 = ((bx2 - vx0) * scale as i64) as i32 + t as i32;
            let sy2 = ((by2 - vy0) * scale as i64) as i32 + t as i32;
            let w = (sx2 - sx1).max(0) as u32;
            let h = (sy2 - sy1).max(0) as u32;
            // Рамка = 4 смуги (fill_rect сам кліпить до канваса).
            canvas.fill_rect(sx1, sy1, w, t as u32, PROV_FRAME_COLOR);
            canvas.fill_rect(sx1, sy2 - t as i32, w, t as u32, PROV_FRAME_COLOR);
            canvas.fill_rect(sx1, sy1, t as u32, h, PROV_FRAME_COLOR);
            canvas.fill_rect(sx2 - t as i32, sy1, t as u32, h, PROV_FRAME_COLOR);
        }
    }

    /// Центр boundbox провінції → екранні пікселі (None: поза в'юпортом або невідома провінція).
    pub fn world_to_screen(&self, prov: ProvinceId) -> Option<(u32, u32)> {
        let p = prov as usize;
        if p == 0 || p >= self.map.bounds.len() {
            return None;
        }
        let b = self.map.bounds[p];
        let cx = (b.x1 as i64 + b.x2 as i64) / 2;
        let cy = (b.y1 as i64 + b.y2 as i64) / 2;
        project(&self.view, self.scale(), cx, cy)
    }

    /// Екранний піксель → тайл мапи (блок 32×32), для майбутнього кліку.
    /// None: поза в'юпортом або поза мапою.
    pub fn screen_to_world(&self, x: u32, y: u32) -> Option<(u32, u32)> {
        unproject(&self.view, self.scale(), x, y)
    }
}

/// Проєкція світової точки (пікселі мапи) в екранні пікселі в'юпорта.
fn project(view: &Viewport, scale: u32, wx: i64, wy: i64) -> Option<(u32, u32)> {
    let ox = wx - view.x as i64 * TILE_PX as i64;
    let oy = wy - view.y as i64 * TILE_PX as i64;
    if ox < 0 || oy < 0 {
        return None;
    }
    let (sx, sy) = (ox * scale as i64, oy * scale as i64);
    let (vw, vh) = (
        view.w_blocks as i64 * TILE_PX as i64 * scale as i64,
        view.h_blocks as i64 * TILE_PX as i64 * scale as i64,
    );
    if sx >= vw || sy >= vh {
        return None;
    }
    Some((sx as u32, sy as u32))
}

/// Обернена проєкція: екранний піксель → тайл мапи.
fn unproject(view: &Viewport, scale: u32, x: u32, y: u32) -> Option<(u32, u32)> {
    let vw = view.w_blocks * TILE_PX * scale;
    let vh = view.h_blocks * TILE_PX * scale;
    if x >= vw || y >= vh {
        return None;
    }
    let wx = view.x as u64 * TILE_PX as u64 + x as u64 / scale as u64;
    let wy = view.y as u64 * TILE_PX as u64 + y as u64 / scale as u64;
    if wx >= BLOCKS_X as u64 * TILE_PX as u64 || wy >= BLOCKS_Y as u64 * TILE_PX as u64 {
        return None; // поза мапою
    }
    Some(((wx / TILE_PX as u64) as u32, (wy / TILE_PX as u64) as u32))
}

#[cfg(test)]
mod tests {
    use super::*;
    use dh_format::province::{self, terrain_color};
    use dh_format::{GamePaths, Terrain};

    /// Сітка атласа tiles.bmp: 256 колонок × 44 рядки, тайли 32×32.
    /// RE: re/RE-mapformats-full.md (розмір 8192×1408 = 256·32 × 44·32).
    #[test]
    fn tile_grid_256x44() {
        assert_eq!(TILE_SLOTS, 256 * 44);
        for n in 0..TILE_SLOTS {
            let (tx, ty) = tile_atlas_rect(n);
            assert!(tx % TILE_PX == 0 && ty % TILE_PX == 0, "тайл {n}: поза сіткою");
            assert!(
                tx + TILE_PX <= 8192 && ty + TILE_PX <= 1408,
                "тайл {n}: ({tx},{ty}) поза атласом"
            );
        }
        assert_eq!(tile_atlas_rect(0), (0, 0));
        assert_eq!(tile_atlas_rect(1), (32, 0)); // 2-й тайл рядка 0
        assert_eq!(tile_atlas_rect(255), (255 * 32, 0)); // останній тайл рядка 0
        assert_eq!(tile_atlas_rect(256), (0, 32)); // перший тайл рядка 1
        assert_eq!(tile_atlas_rect(11225), (11225 % 256 * 32, 11225 / 256 * 32));
        assert_eq!(tile_atlas_rect(11263), (255 * 32, 1376)); // останній слот
    }

    /// Геометрія в'юпорта: проєкція світ→екран і екран→тайл.
    #[test]
    fn projection_roundtrip() {
        let view = Viewport::new(400, 10, 16, 16); // при zoom 0 = 512×512 пікселів
        assert_eq!(view.screen_size(0), (512, 512));
        assert_eq!(view.screen_size(1), (1024, 1024));

        // Піксель (409·32+16, 22·32+16) світу → офсет (9·32+16, 12·32+16) екрана.
        assert_eq!(project(&view, 1, 409 * 32 + 16, 22 * 32 + 16), Some((9 * 32 + 16, 12 * 32 + 16)));
        // Той самий пункт при zoom 1 (2:1) — удвічі далі від лівого верхнього кута.
        assert_eq!(project(&view, 2, 409 * 32 + 16, 22 * 32 + 16), Some((2 * (9 * 32 + 16), 2 * (12 * 32 + 16))));
        // Ліворуч від в'юпорта й правіше краю — None.
        assert_eq!(project(&view, 1, 400 * 32 - 1, 22 * 32), None);
        assert_eq!(project(&view, 1, 416 * 32, 22 * 32), None);

        // Обернена проєкція: піксель (288, 384) = блок (409, 22) (Ісландія).
        assert_eq!(unproject(&view, 1, 288, 384), Some((409, 22)));
        assert_eq!(unproject(&view, 1, 511, 511), Some((415, 25)));
        // Піксель правіше в'юпорта — None.
        assert_eq!(unproject(&view, 1, 512, 0), None);
    }

    /// Піксель канваса за координатами (0 поза межами); канвас не має get_pixel.
    fn pix(c: &Canvas, x: u32, y: u32) -> u32 {
        if x < c.width() && y < c.height() {
            c.buf()[(y * c.width() + x) as usize]
        } else {
            0
        }
    }

    /// Кліп-поведінка канваса (canvas::Canvas).
    #[test]
    fn canvas_clips() {
        let mut c = Canvas::new(8, 8);
        // Прямокутник виходить за лівий і правий краї; x∈[0,8), y∈[2,5).
        c.fill_rect(-4, 2, 12, 3, OCEAN_COLOR);
        assert_eq!(pix(&c, 0, 2), OCEAN_COLOR.0);
        assert_eq!(pix(&c, 7, 4), OCEAN_COLOR.0);
        assert_eq!(pix(&c, 7, 5), 0); // нижче прямокутника
        c.set_pixel(100, 100, 0x123456); // поза канвасом — ігнор
        assert_eq!(pix(&c, 100, 100), 0);
        c.clear(0u32);
        assert_eq!(pix(&c, 3, 3), 0);
        assert_eq!(c.buf().len(), 64);
    }

    /// Рендер реальної мапи (потрібна встановлена гра: DH_GAME_DIR або Steam).
    /// В'юпорт 16×16 блоків навколо Ісландії; блок (409, 22) — суша (провінція 1).
    ///
    /// ФАКТ ДАНИХ (перевірено на реальних файлах): index.tbl покриває лише
    /// 3.33% блоків (унікальні тайли-фрагменти; RE-mapformats-full.md §5), блок
    /// Ісландії (409,22) там = 0. Суша/море визначає lightmap (провінція на
    /// піксель, RE-lightmap.md §6/§10), тож фон малюється кольорами провінцій
    /// (terrain_color), а атласні тайли лягають поверх. Саме тому тест передає
    /// рендереру таблицю кольорів провінцій з Province.csv.
    #[test]
    #[ignore = "потребує встановленої гри (DH_GAME_DIR або Steam)"]
    fn real_map_render_iceland() -> anyhow::Result<()> {
        let paths = match std::env::var("DH_GAME_DIR") {
            Ok(p) => GamePaths::with_custom(std::path::PathBuf::from(p)),
            Err(_) => GamePaths::from_steam()?,
        };
        let map = dh_format::map::load(&paths)?;

        // Кольори провінцій: суша = terrain_color, море = колір океану.
        let csv = province::load(&paths.root.join("map/Map_1/Province.csv"))?;
        let mut colors = vec![0u32; map.prov_count as usize + 1];
        for p in &csv {
            let (r, g, b) = match p.terrain {
                Terrain::Ocean | Terrain::Water => (20, 58, 106),
                t => terrain_color(t),
            };
            colors[p.id as usize] =
                0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32;
        }

        // В'юпорт 16×16 блоків: (409,22) → екран (9·32, 12·32) = (288, 384).
        let view = Viewport::new(400, 10, 16, 16);
        assert_eq!(view.screen_size(0), (512, 512));
        let renderer = MapRenderer::new(&map, 0, view).with_province_colors(&colors);
        let mut canvas = Canvas::new(512, 512);
        renderer.render(&mut canvas);

        // Більшість пікселів блока Ісландії — не океанські: весь тайл lightmap —
        // провінція 1 (Hills → terrain_color (172,162,102) + світло).
        let mut land = 0u32;
        for y in 384..416 {
            for x in 288..320 {
                if pix(&canvas, x, y) != OCEAN_COLOR.0 {
                    land += 1;
                }
            }
        }
        assert!(land * 2 > 32 * 32, "Ісландія: суходолу {land}/1024 пікселів");

        // Центр провінції 1 (Рейк'явік; bbox (12986,636,13194,824) → центр (13090,730))
        // на екрані = (13090−400·32, 730−10·32) = (290, 410).
        assert_eq!(renderer.world_to_screen(1), Some((290, 410)));
        // Клік у блок Ісландії.
        assert_eq!(renderer.screen_to_world(288, 384), Some((409, 22)));

        // Рамки провінцій: лівий край рамки bbox пров. 1 (x=186, товщина 1) і
        // верхній (y=316..317) — видимі в канвасі.
        let renderer2 = MapRenderer::new(&map, 0, view)
            .with_province_colors(&colors)
            .with_provinces(true);
        let mut canvas2 = Canvas::new(512, 512);
        renderer2.render(&mut canvas2);
        assert_eq!(pix(&canvas2, 186, 320), PROV_FRAME_COLOR.0, "ліва рамка");
        assert_eq!(pix(&canvas2, 320, 316), PROV_FRAME_COLOR.0, "верхня рамка");

        Ok(())
    }
}
