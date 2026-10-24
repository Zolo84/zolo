//! Рендер мапи: атлас тайлів tiles.bmp + index.tbl + освітлення lightmap.
//!
//! RE: re/RE-mapformats-full.md §tiles/index, re/RE-lightmap.md §4.
//! Сітка атласа: 8192/32 = 256 колонок × 1408/32 = 44 рядки; тайл n:
//! tile_x = (n % 256)·32, tile_y = (n / 256)·32 (перевірено у [`tile_atlas_rect`]).
//! index.tbl: блок (x,y) = index[y·936 + x], 0 = океан, 1..11225 = тайл атласа.

use crate::canvas::{Canvas, Color};
use dh_format::map::{MapData, TileInfo, ATLAS_W, BLOCKS_X, BLOCKS_Y, TILE_PX, TILE_SLOTS};
use dh_format::map_color::GameColorModel;
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
        Self {
            x,
            y,
            w_blocks,
            h_blocks,
        }
    }
    /// Розмір в'юпорта в екранних пікселях при заданому zoom.
    pub fn screen_size(&self, zoom: i8) -> (u32, u32) {
        let px = |blocks: u32| {
            if zoom >= 0 {
                blocks * TILE_PX << zoom
            } else {
                (blocks * TILE_PX) >> (-zoom)
            }
        };
        (px(self.w_blocks), px(self.h_blocks))
    }
}

/// Межі зуму: -3 = вся мапа (lightmap L4, 1 світлопіксель = 8 пікселів мапи),
/// 0 = 1:1 (L1), +4 = ×16 (збільшення).
pub const ZOOM_MIN: i8 = -3;
pub const ZOOM_MAX: i8 = 4;

/// Масштаб для zoom ≥ 0: скільки екранних пікселів у пікселі мапи
/// (zoom 0 = 1:1, zoom 1 = 2:1, ...). Кожен тайл 32×32 мапи займає
/// 32·2^zoom екранних пікселів.
///
/// Зум-аут (zoom < 0) дробовий: 1 екранний піксель = 2^k пікселів мапи,
/// тому тут він не представлений — див. [`MapRenderer::map_to_screen`].
pub fn screen_scale(zoom: i8) -> u32 {
    debug_assert!(zoom >= 0, "screen_scale лише для zoom ≥ 0");
    if zoom < 0 {
        1
    } else {
        1u32 << zoom
    }
}

/// Позиція тайла n в атласі tiles.bmp (сітка 256×44, тайли 32×32).
/// Порядок — рядок за рядком: tile_x = (n % 256)·32, tile_y = (n / 256)·32.
pub fn tile_atlas_rect(n: u32) -> (u32, u32) {
    debug_assert!(
        n < TILE_SLOTS,
        "тайл {n} поза атласом (слотів {TILE_SLOTS})"
    );
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
        canvas.fill_rect(
            (sx + px * scale) as i32,
            (sy + py * scale) as i32,
            scale,
            scale,
            color,
        );
    }
}

// ============================================================================
// MapRenderer
// ============================================================================

/// Рендер мапи з тайлів атласа + освітлення lightmap у канвас.
///
/// `zoom` від `-3` до `+4`: додатний = збільшення ×2^zoom (рівень lightmap
/// = min(zoom, 3), тобто L1..L4); від'ємний = зум-аут 1/2^k з mipmap:
/// використовується грубіший рівень Lightmap L(k+1), і кожен світлопіксель
/// рівня стає рівно 1 екранним пікселем (L2..L4, RE-lightmap.md §2).
pub struct MapRenderer<'a> {
    pub map: &'a MapData,
    pub zoom: i8,
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
    /// Точна модель кольору гри (палітра 0xA44C34 + LUT 0xAA41CB + шкали
    /// провінцій): колір пікселя = palette565[(LUT[light-off] << 6) | scale].
    /// Коли встановлено — використовується замість [`prov_colors`] та
    /// [`shade`], тобто політична карта рендериться точно як в оригіналі.
    pub color_model: Option<&'a GameColorModel>,
    /// Шкали провінцій (індекс = ProvinceId): байт scale політичної карти, як
    /// його обчислює гра (FUN_004dcb20 case 0 → FUN_004e8a40):
    /// власник → номер кольору country.csv (FUN_004aee40); вода → 23|0x20;
    /// без власника → 2|0x20; біт 0x20 = «не видима гравцеві» (темна колонка).
    /// Коли разом із [`color_model`] — рендер політичної карти без дампів.
    pub prov_scales: Option<&'a [u8]>,
}

impl<'a> MapRenderer<'a> {
    pub fn new(map: &'a MapData, zoom: i8, view: Viewport) -> Self {
        debug_assert!(
            (ZOOM_MIN..=ZOOM_MAX).contains(&zoom),
            "zoom {zoom} поза {ZOOM_MIN}..={ZOOM_MAX}"
        );
        Self {
            map,
            zoom,
            view,
            show_provinces: false,
            prov_colors: None,
            prov_terrain: None,
            terrain_palettes: None,
            color_model: None,
            prov_scales: None,
        }
    }

    /// Зручність-білдер: увімкнути рамки провінцій.
    pub fn with_provinces(mut self, on: bool) -> Self {
        self.show_provinces = on;
        self
    }

    /// Зручність-білдер: шкали провінцій з власників (політична карта як у грі).
    pub fn with_province_scales(mut self, scales: &'a [u8]) -> Self {
        self.prov_scales = Some(scales);
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

    /// Екранних пікселів на піксель мапи (тільки для zoom ≥ 0; для зум-ауту
    /// масштаб дробовий — використовуйте [`Self::map_to_screen`]).
    pub fn scale(&self) -> u32 {
        screen_scale(self.zoom)
    }

    /// Зсув зум-ауту: `Some(k)` коли zoom = -k (1..=3, mipmap L2..L4), інакше None.
    pub fn zoom_out_shift(&self) -> Option<u32> {
        (self.zoom < 0).then_some((-self.zoom) as u32)
    }

    /// Світові пікселі мапи → екранні (z ≥ 0: ×2^z; z < 0: ÷2^k).
    fn map_to_screen(&self, v: i64) -> i64 {
        if self.zoom >= 0 {
            v << self.zoom
        } else {
            v >> (-self.zoom)
        }
    }

    /// Рендер в'юпорта в канвас (канвас попередньо очищується кольором океану).
    pub fn render(&self, canvas: &mut Canvas) {
        canvas.clear(OCEAN_COLOR);
        match self.zoom_out_shift() {
            Some(k) => self.render_zoom_out(canvas, k),
            None => self.render_zoom_in(canvas),
        }
        if self.show_provinces {
            self.draw_province_frames(canvas);
        }
    }

    /// Рендер zoom ≥ 0: тайли/світло 1:1 із масштабуванням ×2^zoom.
    fn render_zoom_in(&self, canvas: &mut Canvas) {
        let scale = self.scale();
        // Рівень lightmap 0..=3 (L1..L4); світлопіксель = 2^lshift пікселів мапи.
        let level = (self.zoom as usize).min(3);
        let light_level = self.map.lightmap.get(level);
        let lshift = level as u32;

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
                let light =
                    light_level.and_then(|ll| match ll.decode_tile(bx >> lshift, by >> lshift) {
                        Ok(ti) => Some(ti),
                        Err(e) => {
                            log::warn!("lightmap L{} блок ({bx},{by}): {e:#}", ll.level);
                            None
                        }
                    });

                match (tile, light) {
                    (tile, Some(ti)) => {
                        // Шар 1 — фон ЗАВЖДИ з lightmap-провінцій: колір провінції
                        // (політичний або палітра місцевості) + світло. Море та
                        // провінції без кольору → колір океану.
                        for py in 0..TILE_PX {
                            for px in 0..TILE_PX {
                                let c = light_idx(bx, by, px, py, lshift);
                                let color = self.tile_px_color(&ti, c);
                                put_block_px(canvas, scale, sx, sy, px, py, color);
                            }
                        }
                        // Шар 2 — річки ПОВЕРХ фона (RE-звірка HoI2-Editor/Zolo84):
                        // tiles.bmp = атлас річкових тайлів, піксель = індекс
                        // палітри tile.bmp; 0 = прозорий; колір — сама палітра.
                        if let Some((tx, ty)) = tile {
                            for py in 0..TILE_PX {
                                for px in 0..TILE_PX {
                                    let ri = self.river_px(tx, ty, px, py);
                                    if ri == 0 {
                                        continue; // прозорий — лишаємо фон
                                    }
                                    let [r, g, b] = self
                                        .map
                                        .tiles_palette
                                        .get(ri)
                                        .copied()
                                        .unwrap_or([63, 89, 97]); // default: вода
                                    put_block_px(
                                        canvas,
                                        scale,
                                        sx,
                                        sy,
                                        px,
                                        py,
                                        0xFF00_0000 | (r as u32) << 16 | (g as u32) << 8 | b as u32,
                                    );
                                }
                            }
                        }
                    }
                    (Some((tx, ty)), None) => {
                        // Немає lightmap (поза межами L1?) — річки все одно малюємо.
                        for py in 0..TILE_PX {
                            for px in 0..TILE_PX {
                                let ri = self.river_px(tx, ty, px, py);
                                if ri == 0 {
                                    continue;
                                }
                                let [r, g, b] = self
                                    .map
                                    .tiles_palette
                                    .get(ri)
                                    .copied()
                                    .unwrap_or([63, 89, 97]);
                                put_block_px(
                                    canvas,
                                    scale,
                                    sx,
                                    sy,
                                    px,
                                    py,
                                    0xFF00_0000 | (r as u32) << 16 | (g as u32) << 8 | b as u32,
                                );
                            }
                        }
                    }
                    (None, None) => {
                        // Ні тайла, ні lightmap — суцільний океан (як у базовому ТЗ).
                        canvas.fill_rect(
                            sx as i32,
                            sy as i32,
                            TILE_PX * scale,
                            TILE_PX * scale,
                            OCEAN_COLOR,
                        );
                    }
                }
            }
        }
    }

    /// Рендер zoom < 0 (зум-аут): mipmap-рівень lightmap L(k+1), кожен
    /// світлопіксель рівня = 1 екранний піксель; річки семплюються
    /// з кроком 2^k (один піксель атласа на 2^k пікселів мапи).
    ///
    /// Обхід — по СВІТЛО-ТАЙЛАХ рівня, а не по блоках: один декод тайла
    /// покриває 2^k×2^k блоків (весь світ на L4 = 117·45 = 5265 декодів,
    /// а не 936·360). Клітинки, чий тайл не розкодувався, — океан.
    fn render_zoom_out(&self, canvas: &mut Canvas, k: u32) {
        let Some(ll) = self.map.lightmap.get(k as usize) else {
            // Без рівня зуму-ауту нічого малювати — канвас уже океан.
            return;
        };
        // Екранних пікселів на блок тайла (32 >> k): 16/8/4 для k = 1..3.
        let sub = TILE_PX >> k;
        debug_assert!(sub >= 1, "zoom_out_shift у межах 1..=3");

        let bx0 = self.view.x;
        let by0 = self.view.y;
        let bx1 = self.view.x.saturating_add(self.view.w_blocks).min(BLOCKS_X);
        let by1 = self.view.y.saturating_add(self.view.h_blocks).min(BLOCKS_Y);

        // Сітка світло-тайлів, що перетинає в'юпорт.
        let tlx0 = bx0 >> k;
        let tlx1 = (bx1.saturating_sub(1) >> k).saturating_add(1);
        let tly0 = by0 >> k;
        let tly1 = (by1.saturating_sub(1) >> k).saturating_add(1);

        for lty in tly0..tly1 {
            for ltx in tlx0..tlx1 {
                let ti = match ll.decode_tile(ltx, lty) {
                    Ok(ti) => ti,
                    Err(e) => {
                        log::warn!("lightmap L{} тайл ({ltx},{lty}): {e:#}", ll.level);
                        // Усі блоки цього тайла — суцільний океан.
                        let cbx0 = (ltx << k).max(bx0);
                        let cby0 = (lty << k).max(by0);
                        let cbx1 = ((ltx + 1) << k).min(bx1);
                        let cby1 = ((lty + 1) << k).min(by1);
                        canvas.fill_rect(
                            self.map_to_screen((cbx0 - bx0) as i64 * TILE_PX as i64) as i32,
                            self.map_to_screen((cby0 - by0) as i64 * TILE_PX as i64) as i32,
                            (cbx1 - cbx0) * sub,
                            (cby1 - cby0) * sub,
                            OCEAN_COLOR,
                        );
                        continue;
                    }
                };

                // Блоки 32×32 мапи, які покриває цей світло-тайл.
                let cbx0 = (ltx << k).max(bx0);
                let cby0 = (lty << k).max(by0);
                let cbx1 = ((ltx + 1) << k).min(bx1);
                let cby1 = ((lty + 1) << k).min(by1);
                for by in cby0..cby1 {
                    let sy0 = self.map_to_screen((by - by0) as i64 * TILE_PX as i64) as u32;
                    // Рядок світлопікселів тайла, з якого починається блок.
                    let base_ly = (((by * TILE_PX) >> k) % TILE_PX) * TILE_PX;
                    for bx in cbx0..cbx1 {
                        let sx0 = self.map_to_screen((bx - bx0) as i64 * TILE_PX as i64) as u32;
                        let idx = self.map.index[(by * BLOCKS_X + bx) as usize];
                        let tile = (idx != 0 && idx < TILE_SLOTS).then(|| tile_atlas_rect(idx));
                        let base_lx = ((bx * TILE_PX) >> k) % TILE_PX;

                        for py in 0..sub {
                            let prow = base_ly + py * TILE_PX;
                            for px in 0..sub {
                                let c = (prow + base_lx + px) as usize;
                                let color = self.tile_px_color(&ti, c);
                                canvas.set_pixel((sx0 + px) as i32, (sy0 + py) as i32, color);
                            }
                        }
                        if let Some((tx, ty)) = tile {
                            self.put_rivers_out(canvas, tx, ty, sx0, sy0, k);
                        }
                    }
                }
            }
        }
    }

    /// Річки при зум-ауті: семпл атласа з кроком 2^k по пікселях блока.
    fn put_rivers_out(&self, canvas: &mut Canvas, tx: u32, ty: u32, sx0: u32, sy0: u32, k: u32) {
        let sub = TILE_PX >> k;
        for py in 0..sub {
            for px in 0..sub {
                let ri = self.river_px(tx, ty, px << k, py << k);
                if ri == 0 {
                    continue;
                }
                let [r, g, b] = self
                    .map
                    .tiles_palette
                    .get(ri)
                    .copied()
                    .unwrap_or([63, 89, 97]);
                canvas.set_pixel(
                    (sx0 + px) as i32,
                    (sy0 + py) as i32,
                    0xFF00_0000 | (r as u32) << 16 | (g as u32) << 8 | b as u32,
                );
            }
        }
    }

    /// Індекс палітри річкового пікселя атласа (0 = прозорий).
    fn river_px(&self, tx: u32, ty: u32, mx: u32, my: u32) -> usize {
        self.map.tiles_indices[((ty + my) * ATLAS_W + (tx + mx)) as usize] as usize
    }

    /// Колір пікселя тайла lightmap (провінція + світло) за поточною моделлю.
    fn tile_px_color(&self, ti: &TileInfo, c: usize) -> u32 {
        match (self.color_model, self.prov_scales) {
            (Some(m), Some(scales)) => {
                // Політична карта як у грі: шкала з власника (FUN_004dcb20).
                // Незнайома провінція → вода (23|0x20), як для блоків поза мапою.
                let s = scales
                    .get(ti.prov_ids[c] as usize)
                    .copied()
                    .unwrap_or(crate::WATER_SCALE_DARK);
                let [r, g, b] = m.color_scale(s, ti.light_vals[c]);
                (r as u32) << 16 | (g as u32) << 8 | b as u32
            }
            (Some(m), None) => {
                let [r, g, b] = m.color_exact(ti.prov_ids[c] as usize, ti.light_vals[c]);
                (r as u32) << 16 | (g as u32) << 8 | b as u32
            }
            (None, _) => {
                let base = self.prov_color(ti.prov_ids[c]);
                shade(
                    (base >> 16) as u8,
                    (base >> 8) as u8,
                    base as u8,
                    Some(ti.light_vals[c] as u32),
                )
            }
        }
    }

    /// Тонка рамка навколо boundbox кожної провінції, що перетинає в'юпорт.
    /// «Підсвітлення» = фіксований колір рамки; TODO: звірити з оригінальним виділенням.
    fn draw_province_frames(&self, canvas: &mut Canvas) {
        for (sx1, sy1, sx2, sy2) in province_frames_screen(self.map, self.zoom, self.view) {
            let (w, h) = ((sx2 - sx1).max(0) as u32, (sy2 - sy1).max(0) as u32);
            // Рамка = 4 смуги (fill_rect сам кліпить до канваса).
            canvas.fill_rect(sx1, sy1, w, 1, PROV_FRAME_COLOR);
            canvas.fill_rect(sx1, sy2 - 1, w, 1, PROV_FRAME_COLOR);
            canvas.fill_rect(sx1, sy1, 1, h, PROV_FRAME_COLOR);
            canvas.fill_rect(sx2 - 1, sy1, 1, h, PROV_FRAME_COLOR);
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
        project(&self.view, self.zoom, cx, cy)
    }

    /// Екранний піксель → тайл мапи (блок 32×32), для майбутнього кліку.
    /// None: поза в'юпортом або поза мапою.
    pub fn screen_to_world(&self, x: u32, y: u32) -> Option<(u32, u32)> {
        unproject(&self.view, self.zoom, x, y)
    }
}

/// Проєкція світової точки (пікселі мапи) в екранні пікселі в'юпорта.
fn project(view: &Viewport, zoom: i8, wx: i64, wy: i64) -> Option<(u32, u32)> {
    let ox = wx - view.x as i64 * TILE_PX as i64;
    let oy = wy - view.y as i64 * TILE_PX as i64;
    if ox < 0 || oy < 0 {
        return None;
    }
    let (sx, sy) = if zoom >= 0 {
        (ox << zoom, oy << zoom)
    } else {
        (ox >> -zoom, oy >> -zoom)
    };
    let (vw, vh) = view.screen_size(zoom);
    if sx >= vw as i64 || sy >= vh as i64 {
        return None;
    }
    Some((sx as u32, sy as u32))
}

/// Обернена проєкція: екранний піксель → тайл мапи.
fn unproject(view: &Viewport, zoom: i8, x: u32, y: u32) -> Option<(u32, u32)> {
    let (vw, vh) = view.screen_size(zoom);
    if x >= vw || y >= vh {
        return None;
    }
    let (wx, wy) = if zoom >= 0 {
        (
            view.x as u64 * TILE_PX as u64 + (x as u64 >> zoom),
            view.y as u64 * TILE_PX as u64 + (y as u64 >> zoom),
        )
    } else {
        let sh = (-zoom) as u32;
        (
            view.x as u64 * TILE_PX as u64 + ((x as u64) << sh),
            view.y as u64 * TILE_PX as u64 + ((y as u64) << sh),
        )
    };
    if wx >= BLOCKS_X as u64 * TILE_PX as u64 || wy >= BLOCKS_Y as u64 * TILE_PX as u64 {
        return None; // поза мапою
    }
    Some(((wx / TILE_PX as u64) as u32, (wy / TILE_PX as u64) as u32))
}

/// Світові пікселі мапи для екранного пікселя (будь-який zoom). None — поза
/// в'юпортом або поза мапою.
pub fn screen_to_world_px(zoom: i8, view: Viewport, x: u32, y: u32) -> Option<(u32, u32)> {
    let (vw, vh) = view.screen_size(zoom);
    if x >= vw || y >= vh {
        return None;
    }
    let (wx, wy) = if zoom >= 0 {
        (
            view.x as u64 * TILE_PX as u64 + (x as u64 >> zoom),
            view.y as u64 * TILE_PX as u64 + (y as u64 >> zoom),
        )
    } else {
        let sh = (-zoom) as u32;
        (
            view.x as u64 * TILE_PX as u64 + ((x as u64) << sh),
            view.y as u64 * TILE_PX as u64 + ((y as u64) << sh),
        )
    };
    if wx >= BLOCKS_X as u64 * TILE_PX as u64 || wy >= BLOCKS_Y as u64 * TILE_PX as u64 {
        return None;
    }
    Some((wx as u32, wy as u32))
}

/// Блок мапи (32×32) під екранним пікселем — для клік-пікінгу.
pub fn screen_to_block(zoom: i8, view: Viewport, x: u32, y: u32) -> Option<(u32, u32)> {
    let (wx, wy) = screen_to_world_px(zoom, view, x, y)?;
    Some((wx / TILE_PX, wy / TILE_PX))
}

/// Провінція під екранним пікселем: `(блок_x, блок_y, prov_id)` через lightmap
/// L1 (точність 1 піксель мапи). None — поза мапою або L1 недоступний.
pub fn pick_province(
    map: &MapData,
    zoom: i8,
    view: Viewport,
    x: u32,
    y: u32,
) -> Option<(u32, u32, u16)> {
    let (wx, wy) = screen_to_world_px(zoom, view, x, y)?;
    let (bx, by) = (wx / TILE_PX, wy / TILE_PX);
    let l1 = map.lightmap.first()?;
    let ti = l1.decode_tile(bx, by).ok()?;
    let lx = (wx % TILE_PX) as usize;
    let ly = (wy % TILE_PX) as usize;
    let prov = ti.prov_ids[ly * TILE_PX as usize + lx];
    Some((bx, by, prov))
}

/// Рамки boundbox видимих провінцій в екранних пікселях: `(x1, y1, x2, y2)`
/// (зовнішні краї). Той самий обхід, що `MapRenderer::draw_province_frames` —
/// для GPU-рендера (окремий прохід ліній).
pub fn province_frames_screen(
    map: &MapData,
    zoom: i8,
    view: Viewport,
) -> Vec<(i32, i32, i32, i32)> {
    let to_screen = |v: i64| -> i32 {
        if zoom >= 0 {
            (v << zoom) as i32
        } else {
            (v >> (-zoom)) as i32
        }
    };
    let vx0 = view.x as i64 * TILE_PX as i64;
    let vy0 = view.y as i64 * TILE_PX as i64;
    let (vw, vh) = view.screen_size(zoom);
    let vx1 = vx0 + vw as i64;
    let vy1 = vy0 + vh as i64;

    let mut out = Vec::new();
    for prov in 1..map.bounds.len() {
        // bounds[0] = розмір мапи, не провінція.
        let b = map.bounds[prov];
        let (bx1, by1, bx2, by2) = (b.x1 as i64, b.y1 as i64, b.x2 as i64, b.y2 as i64);
        if bx2 < vx0 || by2 < vy0 || bx1 > vx1 || by1 > vy1 {
            continue; // не видима у в'юпорті
        }
        let sx1 = to_screen(bx1 - vx0);
        let sy1 = to_screen(by1 - vy0);
        let sx2 = to_screen(bx2 - vx0) + 1;
        let sy2 = to_screen(by2 - vy0) + 1;
        out.push((sx1, sy1, sx2, sy2));
    }
    out
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
            assert!(
                tx % TILE_PX == 0 && ty % TILE_PX == 0,
                "тайл {n}: поза сіткою"
            );
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
    /// (zoom = степінь двійки: 0 = 1:1, 1 = 2:1, ...)
    #[test]
    fn projection_roundtrip() {
        let view = Viewport::new(400, 10, 16, 16); // при zoom 0 = 512×512 пікселів
        assert_eq!(view.screen_size(0), (512, 512));
        assert_eq!(view.screen_size(1), (1024, 1024));

        // Піксель (409·32+16, 22·32+16) світу → офсет (9·32+16, 12·32+16) екрана.
        assert_eq!(
            project(&view, 0, 409 * 32 + 16, 22 * 32 + 16),
            Some((9 * 32 + 16, 12 * 32 + 16))
        );
        // Той самий пункт при zoom 1 (2:1) — удвічі далі від лівого верхнього кута.
        assert_eq!(
            project(&view, 1, 409 * 32 + 16, 22 * 32 + 16),
            Some((2 * (9 * 32 + 16), 2 * (12 * 32 + 16)))
        );
        // Ліворуч від в'юпорта й правіше краю — None.
        assert_eq!(project(&view, 0, 400 * 32 - 1, 22 * 32), None);
        assert_eq!(project(&view, 0, 416 * 32, 22 * 32), None);

        // Обернена проєкція: піксель (288, 384) = блок (409, 22) (Ісландія).
        assert_eq!(unproject(&view, 0, 288, 384), Some((409, 22)));
        assert_eq!(unproject(&view, 0, 511, 511), Some((415, 25)));
        // Піксель правіше в'юпорта — None.
        assert_eq!(unproject(&view, 0, 512, 0), None);
    }

    /// Геометрія зум-ауту: mipmap-масштаб 1/2^k, проєкції, межі зуму.
    #[test]
    fn zoom_out_geometry() {
        let view = Viewport::new(400, 10, 16, 16);
        // 16 блоків × 32 пікселі: zoom -1 → 256 (÷2), -2 → 128 (÷4), -3 → 64 (÷8).
        assert_eq!(view.screen_size(-1), (256, 256));
        assert_eq!(view.screen_size(-2), (128, 128));
        assert_eq!(view.screen_size(-3), (64, 64));
        // Zoom поза межами (немає lightmap L5 на -4; на 5 теж).
        assert_eq!(ZOOM_MIN, -3);
        assert_eq!(ZOOM_MAX, 4);

        // Світова точка (409·32+64, 22·32+64) при zoom -2: офсет (9·32+64, 12·32+64)
        // ділиться на 4: (88, 112).
        assert_eq!(
            project(&view, -2, 409 * 32 + 64, 22 * 32 + 64),
            Some((88, 112))
        );
        // Обернена проєкція: світловий піксель (88·4+12800, 112·4+320) = блок (411, 24).
        assert_eq!(unproject(&view, -2, 88, 112), Some((411, 24)));
        // Поза в'юпортом — None; правий нижній кут екрана (127,127) — межа.
        assert_eq!(project(&view, -2, 400 * 32 - 1, 22 * 32), None);
        assert_eq!(unproject(&view, -2, 128, 0), None);
        assert_eq!(unproject(&view, -2, 127, 127), Some((415, 25)));

        // Вся мапа при zoom -3: 936×360 блоків → 3744×1440 екрана.
        let world = Viewport::new(0, 0, BLOCKS_X, BLOCKS_Y);
        assert_eq!(world.screen_size(-3), (BLOCKS_X * 4, BLOCKS_Y * 4));
        // Кожен її піксель = світлопіксель L4 (8 пікселів мапи): 29952 >> 3 = 3744.
        assert_eq!(BLOCKS_X * TILE_PX >> 3, 3744);
        assert_eq!(BLOCKS_Y * TILE_PX >> 3, 1440);
    }

    /// Геометрія клік-пікінгу: екранний піксель → блок мапи на будь-якому zoom.
    #[test]
    fn pick_geometry() {
        let view = Viewport::new(400, 10, 16, 16);
        // zoom 0: піксель (288, 384) → світові px (400·32+288, 10·32+384) = (13088, 704).
        assert_eq!(screen_to_world_px(0, view, 288, 384), Some((13088, 704)));
        assert_eq!(screen_to_block(0, view, 288, 384), Some((409, 22)));
        // zoom -2: піксель (88, 112) → світові px (400·32+88·4, 10·32+112·4).
        assert_eq!(screen_to_world_px(-2, view, 88, 112), Some((13152, 768)));
        assert_eq!(screen_to_block(-2, view, 88, 112), Some((411, 24)));
        // zoom 2: піксель (512, 512) → світові px (400·32+512/4, ...) = (12928, 448).
        assert_eq!(screen_to_world_px(2, view, 512, 512), Some((12928, 448)));
        assert_eq!(screen_to_block(2, view, 512, 512), Some((404, 14)));
        // Поза в'юпортом і поза мапою — None.
        assert_eq!(screen_to_world_px(0, view, 512, 0), None);
        let far = Viewport::new(1000, 1000, 16, 16);
        assert_eq!(screen_to_world_px(0, far, 288, 384), None);
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

    /// Зум-аут реальної мапи: в'юпорт 16×16 блоків навколо Ісландії при zoom -2
    /// (mipmap L3): блок (409,22) має стати 4×4 суходільних пікселів, без
    /// яскравих «дірок». Кожен піксель = світлопіксель L3 (4 пікселі мапи).
    ///
    /// Потрібна встановлена гра (DH_GAME_DIR або Steam).
    #[test]
    #[ignore = "потребує встановленої гри (DH_GAME_DIR або Steam)"]
    fn real_map_render_zoom_out_iceland() -> anyhow::Result<()> {
        let paths = match std::env::var("DH_GAME_DIR") {
            Ok(p) => GamePaths::with_custom(std::path::PathBuf::from(p)),
            Err(_) => GamePaths::from_steam()?,
        };
        let map = dh_format::map::load(&paths)?;

        let csv = province::load(&paths.root.join("map/Map_1/Province.csv"))?;
        let mut colors = vec![0u32; map.prov_count as usize + 1];
        for p in &csv {
            let (r, g, b) = match p.terrain {
                Terrain::Ocean | Terrain::Water => (20, 58, 106),
                t => terrain_color(t),
            };
            colors[p.id as usize] = 0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32;
        }

        // zoom -2: 16 блоків × 8 пікселів = канвас 128×128.
        let view = Viewport::new(400, 10, 16, 16);
        let renderer = MapRenderer::new(&map, -2, view).with_province_colors(&colors);
        let mut canvas = Canvas::new(128, 128);
        renderer.render(&mut canvas);

        // Блок Ісландії (409,22): кожен блок = 32>>2 = 8 екранних пікселів,
        // позиція ((409−400)·32>>2, (22−10)·32>>2) = (72, 96), квадрат 72..80 × 96..104.
        let mut land = 0u32;
        for y in 96..104 {
            for x in 72..80 {
                if pix(&canvas, x, y) != OCEAN_COLOR.0 {
                    land += 1;
                }
            }
        }
        assert!(
            land * 2 > 32,
            "Ісландія (zoom -2): суходолу {land}/64 пікселів"
        );

        // Центр провінції 1 (13090,730): ((13090−400·32)>>2, (730−10·32)>>2) = (72,102).
        assert_eq!(renderer.world_to_screen(1), Some((72, 102)));
        // Обернена проєкція пікселя Ісландії: 400·32+72·4 = блок (409, 22).
        assert_eq!(renderer.screen_to_world(72, 96), Some((409, 22)));

        Ok(())
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
            colors[p.id as usize] = 0xFF00_0000 | ((r as u32) << 16) | ((g as u32) << 8) | b as u32;
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
        assert!(
            land * 2 > 32 * 32,
            "Ісландія: суходолу {land}/1024 пікселів"
        );

        // Центр провінції 1 (Рейк'явік; bbox (12986,636,13194,824) → центр (13090,730))
        // на екрані = (13090−400·32, 730−10·32) = (290, 410).
        assert_eq!(renderer.world_to_screen(1), Some((290, 410)));
        // Клік у блок Ісландії.
        assert_eq!(renderer.screen_to_world(288, 384), Some((409, 22)));

        // Пікінг: той самий піксель → провінція 1 через lightmap L1.
        assert_eq!(screen_to_world_px(0, view, 288, 384), Some((13088, 704)));
        assert_eq!(pick_province(&map, 0, view, 288, 384), Some((409, 22, 1)));
        // Рамки: bbox пров. 1 видимий у в'юпорті; (x1,y1) = (186, 316).
        let frames = province_frames_screen(&map, 0, view);
        assert!(
            frames.iter().any(|&(x1, y1, _, _)| x1 == 186 && y1 == 316),
            "рамка провінції 1: {frames:?}"
        );

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
