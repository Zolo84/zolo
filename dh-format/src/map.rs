//! Завантаження мапи: tiles.bmp, index.tbl, boundbox.tbl, adjacent.tbl, airdist.tbl,
//! navaldist2.tbl, lightmap1-4.tbl.
//!
//! RE: re/RE-mapformats-full.md, re/RE-lightmap.md, re/RE-border-table.md.
//! Усі розміри/формули нижче перевірені на реальних файлах гри (map/Map_1).

use crate::{BBox, GamePaths, ProvinceId};
use anyhow::{anyhow, ensure, Context};
use byteorder::{ByteOrder, LittleEndian};
use std::path::Path;

/// Розмір мапи в пікселях (запис 0 boundbox.tbl; лог гри).
pub const MAP_W: u32 = 29952;
pub const MAP_H: u32 = 11520;
/// Сторона блока території в пікселях мапи.
pub const TILE_PX: u32 = 32;
/// Сітка блоків: 29952/32 × 11520/32 = 936×360 = 336 960 блоків.
pub const BLOCKS_X: u32 = 936;
pub const BLOCKS_Y: u32 = 360;
/// Кількість реальних провінцій (Id 1..2769; PROV0 = 0 фіктивна).
pub const PROV_COUNT: u16 = 2769;
/// Слотів в атласі tiles.bmp: 256×44 тайлів (11 264); index.tbl: 0 = океан, 1..11225 = тайл.
pub const TILE_SLOTS: u32 = 11264;
/// Розміри атласа tiles.bmp (BMP 8 біт з палітрою).
pub const ATLAS_W: u32 = 8192;
pub const ATLAS_H: u32 = 1408;

/// Повні дані мапи, завантажені з map/Map_1.
#[derive(Debug, Clone)]
pub struct MapData {
    /// Кількість реальних провінцій (= 2769 = bounds.len()-1).
    pub prov_count: u16,
    /// Розмір мапи в пікселях (з запису 0 boundbox.tbl): 29952×11520.
    pub map_w: u32,
    pub map_h: u32,
    /// Атлас тайлів 8192×1408 (32×32-тайли, сітка 256×44).
    /// tiles.bmp — це атлас **річкових** тайлів (RE-звірка з HoI2-Editor/Zolo84):
    /// кожен піксель = ІНДЕКС палітри tile.bmp; 0 = прозорий (піксель не малюється).
    /// Кольори палітри — відтінки води; тайл використовується для ОДНОГО блока
    /// (у index.tbl кожен номер 1..11225 трапляється рівно один раз — річка в
    /// кожному блоці унікальна). Тайли малюються ПОВЕРХ lightmap-фона.
    pub tiles_indices: Vec<u8>,
    /// Палітра річкових тайлів: 256 кольорів RGB з tile.bmp (вона ж — палітра
    /// tiles.bmp; запис 0 = ключ прозорості (0,255,0)).
    pub tiles_palette: Vec<[u8; 3]>,
    /// Розкладка: на блок 32×32 мапи — номер тайла в атласі (0 = океан/порожньо).
    /// 336 960 елементів у порядку (y,x): блок (x,y) = index[y*936 + x].
    pub index: Vec<u32>,
    /// Bounding box кожної провінції (2770 записів; запис 0 = PROV0 = розмір мапи).
    /// Координати — у пікселях повної мапи (перевірено: bbox пров. 1 охоплює місто
    /// (13159, 749); RE-примітка про «півмасштаб» не підтвердилась даними).
    pub bounds: Vec<BBox>,
    /// Граф суміжності: adjacent[p] = сусіди провінції p (порядок = порядок off у border-кодах).
    pub adjacent: Vec<Vec<ProvinceId>>,
    /// Повітряні відстані (велике коло, км) — верхній трикутник матриці 2769×2769,
    /// див. [`Airdist::dist`].
    pub airdist: Airdist,
    /// Морські відстані: матриця m×m float32 (m = 1380 морських зон) у тих самих км
    /// (≈1/72.4 одиниць RE). None, якщо файл відсутній.
    pub navaldist: Option<Vec<Vec<f32>>>,
    /// 4 зум-рівні lightmap (L1..L4).
    pub lightmap: Vec<LightmapLevel>,
}

/// Верхній трикутник матриці повітряних відстаней airdist.tbl.
#[derive(Debug, Clone)]
pub struct Airdist {
    n: u16,
    /// N×(N−1)/2 значень uint16 LE, рядок за рядком, без діагоналі.
    tri: Vec<u16>,
}

impl Airdist {
    /// Відстань між провінціями a і b у кілометрах (велике коло, округлено до км).
    ///
    /// Файл: uint16 N=2769 + верхній трикутник симетричної матриці N×(N−1)/2 = 3 832 296
    /// значень uint16 (розмір файлу 7 664 594 = 2 + 3 832 296×2 ✓), без діагоналі,
    /// d(a,b), a<b, рядок за рядком.
    ///
    /// Формула офсета (id 1-based, a < b):
    /// ```text
    /// off(a,b) = (a−1)·N − (a−1)·a/2 + (b−a−1)
    /// ```
    /// Рядок a має N−a значень (пари (a, a+1)..(a, N)); до рядка a лежить
    /// Σ_{i=1}^{a−1}(N−i) = (a−1)·N − (a−1)·a/2; усередині рядка позиція = b−a−1.
    ///
    /// ПЕРЕВІРЕНО на реальних даних: off(1,2)=0→741, off(1,3)=1→252, off(4,6)=8302→152,
    /// off(2768,2769)=3832295 (останній) → 0, максимум 20028 ≈ пів-обводу Землі.
    /// Гіпотеза з ТЗ (a·N + b − a(a+1)/2 − a − 1) СПРОСТОВАНА: дає зсув +(N−a),
    /// off(1,2)=2768 → значення 653 замість 741.
    pub fn dist(&self, a: u16, b: u16) -> u16 {
        if a == b || a == 0 || b == 0 || a > self.n || b > self.n {
            return 0; // PROV0 та діагональ не мають відстаней
        }
        let (a, b) = if a < b { (a, b) } else { (b, a) };
        let (a, b, n) = (a as usize, b as usize, self.n as usize);
        let off = (a - 1) * n - (a - 1) * a / 2 + (b - a - 1);
        self.tri[off]
    }
}

/// Один зум-рівень lightmap (lightmap1..4.tbl).
///
/// Файл: [таблиця зсувів: N×uint32 LE] [uint32 dataSize] [дані: dataSize байтів],
/// N = (936/s)·(360/s), s = 2^(level−1): L1→336960, L2→84240, L3→21060, L4→5265.
/// Зсуви — відносно початку області даних; offsets[N] == data.len().
#[derive(Debug, Clone)]
pub struct LightmapLevel {
    /// Рівень зуму 1..4 (scale = 2^(level−1)).
    pub level: u8,
    /// Крок тайла в пікселях мапи: 32·2^(level−1).
    pub scale: u32,
    /// Сітка тайлів рівня: 936/s × 360/s.
    pub tiles_x: u32,
    pub tiles_y: u32,
    /// Таблиця зсувів секцій (N+1 запис, останній = data.len()).
    pub offsets: Vec<u32>,
    /// Область даних: секції змінної довжини, секція i = data[offsets[i]..offsets[i+1]].
    pub data: Vec<u8>,
}

/// Результат декодування одного тайла lightmap: сітка 32×32 «світлопікселів».
#[derive(Debug, Clone, Default)]
pub struct TileInfo {
    /// Необроблений список ID секції (провінції ≤ 2769 + border-коди > 2769).
    pub id_list: Vec<u16>,
    /// 32×32: провінція кожного світлопікселя тайла, border-коди розв'язані до
    /// провінції-власника (список[idx−4] за RE-border-table.md §1).
    pub prov_ids: Vec<u16>,
    /// 32×32: 6-бітні значення освітлення (0..63) кожного світлопікселя.
    pub light_vals: Vec<u8>,
}

/// Прямокутник-лист квадродерева всередині тайла 32×32.
#[derive(Debug, Clone, Copy)]
struct Leaf {
    x0: u32,
    y0: u32,
    size: u32,
}

impl LightmapLevel {
    /// Декодує секцію тайла (x_block, y_block) у сітку 32×32 провінцій та освітлення.
    ///
    /// Алгоритм за RE-lightmap.md §4, перевірений на реальних даних:
    /// список ID парами байтів (термінатор hi ≥ 0x80), бітовий потік
    /// квадродерева з кореня 32×32 (перший біт — «розбити корінь»;
    /// діти відвідуються SE→SW→NE→NW — порядок файлу, підтверджено
    /// звіркою 2753 міст Province.csv: 2751 збігів), потік refs
    /// (розрядність за k: 1→0, 2→1, 3..4→2, 5..16→4, >16→8 біт, LSB-first),
    /// потік 6-бітних значень освітлення (4 значення на 3 байти, LSB-first).
    pub fn decode_tile(&self, x_block: u32, y_block: u32) -> anyhow::Result<TileInfo> {
        ensure!(
            x_block < self.tiles_x && y_block < self.tiles_y,
            "lightmap L{}: блок ({x_block},{y_block}) поза сіткою {}×{}",
            self.level,
            self.tiles_x,
            self.tiles_y
        );
        let idx = (y_block * self.tiles_x + x_block) as usize;
        let sec = &self.data[self.offsets[idx] as usize..self.offsets[idx + 1] as usize];

        // ---- 1. Список ID: пари (lo, hi), значення = ((hi & 0x7F) << 8) | lo;
        // ----    термінатор = пара з hi ≥ 0x80 (сама пара входить у список).
        let mut ids: Vec<u16> = Vec::new();
        let mut p = 0usize;
        loop {
            ensure!(
                p + 1 < sec.len(),
                "lightmap L{} секція {idx}: список ID не закінчено",
                self.level
            );
            let (lo, hi) = (sec[p], sec[p + 1]);
            p += 2;
            ids.push((((hi & 0x7F) as u16) << 8) | lo as u16);
            if hi >= 0x80 {
                break;
            }
        }
        let k = ids.len();
        ensure!(k >= 1, "lightmap L{} секція {idx}: порожній список ID", self.level);
        ensure!(p < sec.len(), "lightmap L{} секція {idx}: немає байта прапорця", self.level);

        // ---- 2. Квадродерево: біти LSB-first з байта 2k.
        // Перший біт = «розбити корінь 32×32» (0 = однорідний тайл).
        // Порядок відвідування дітей: SE → SW → NE → NW (знизу-справа),
        // щоб shade-інтерполяція мала вже розкодованих сусідів.
        // (Перевірено звіркою 2753 міст Province.csv: 2751 збігів; обидва
        // порядки дають однаковий розмір секції, тому перевірка end==len
        // порядок не розрізняє — критична саме семантична звірка!)
        let mut br = BitReader::new(&sec[p..]);
        let mut leaves: Vec<Leaf> = Vec::new();
        let mut stack: Vec<(u8, u8, u8)> = vec![(5u8, 0u8, 0u8)]; // (рівень, x, y)
        while let Some((l, x, y)) = stack.pop() {
            if !br.read()? {
                leaves.push(Leaf { x0: x as u32, y0: y as u32, size: 1u32 << l });
                continue;
            }
            if l >= 2 {
                let h = 1u8 << (l - 1);
                // LIFO: SE обробляється першим, NW — останнім.
                stack.push((l - 1, x, y));            // NW
                stack.push((l - 1, x + h, y));        // NE
                stack.push((l - 1, x, y + h));        // SW
                stack.push((l - 1, x + h, y + h));    // SE
            } else {
                // рівень 1: чотири окремі пікселі, SE, SW, NE, NW.
                leaves.extend([
                    Leaf { x0: (x + 1) as u32, y0: (y + 1) as u32, size: 1 },
                    Leaf { x0: x as u32, y0: (y + 1) as u32, size: 1 },
                    Leaf { x0: (x + 1) as u32, y0: y as u32, size: 1 },
                    Leaf { x0: x as u32, y0: y as u32, size: 1 },
                ]);
            }
        }
        let qt_bits = br.bits_read();
        let n_leaves = leaves.len();
        ensure!(
            n_leaves <= 32 * 32,
            "lightmap L{} секція {idx}: листів {} > 1024",
            self.level,
            n_leaves
        );

        // ---- 3. Потік refs: N значень по depth біт (LSB-first), з наступної границі байта.
        let refs_start = p + (qt_bits + 7) / 8;
        let depth: u32 = match k {
            1 => 0,
            2 => 1,
            3..=4 => 2,
            5..=16 => 4,
            _ => 8,
        };
        let mut refs = vec![0u16; n_leaves];
        if depth > 0 {
            let mut br = BitReader::new(&sec[refs_start..]);
            for r in &mut refs {
                let mut v = 0u16;
                for j in 0..depth {
                    v |= (br.read()? as u16) << j;
                }
                *r = v;
            }
        }
        let refs_end = refs_start + (n_leaves * depth as usize + 7) / 8;

        // ---- 4. Потік 6-бітних значень освітлення (4 на 3 байти, LSB-first).
        let light_bytes = (n_leaves + 3) / 4 * 3;
        let mut light = vec![0u8; n_leaves];
        for g in 0..light_bytes / 3 {
            let o = refs_end + g * 3;
            let b0 = *sec.get(o).ok_or_else(|| anyhow!("lightmap L{} секція {idx}: обрізаний потік світла", self.level))?;
            let b1 = *sec.get(o + 1).ok_or_else(|| anyhow!("lightmap L{} секція {idx}: обрізаний потік світла", self.level))?;
            let b2 = *sec.get(o + 2).ok_or_else(|| anyhow!("lightmap L{} секція {idx}: обрізаний потік світла", self.level))?;
            let w = b0 as u32 | (b1 as u32) << 8 | (b2 as u32) << 16;
            for j in 0..4 {
                let vi = g * 4 + j;
                if vi < n_leaves {
                    light[vi] = ((w >> (6 * j)) & 0x3F) as u8;
                }
            }
        }
        let end = refs_end + light_bytes;
        ensure!(
            end == sec.len(),
            "lightmap L{} секція {idx}: розкодовано {end} Б із {} (k={k}, N={n_leaves})",
            self.level,
            sec.len()
        );

        // ---- 5. Розгортання в сітку 32×32 (листи → прямокутники; border-коди → власник).
        let mut prov_ids = vec![0u16; 32 * 32];
        let mut light_vals = vec![0u8; 32 * 32];
        for (li, leaf) in leaves.iter().enumerate() {
            let prov = resolve_owner(ids[refs[li] as usize], &ids);
            let lv = light[li];
            for yy in leaf.y0..leaf.y0 + leaf.size {
                for xx in leaf.x0..leaf.x0 + leaf.size {
                    let c = (yy * 32 + xx) as usize;
                    prov_ids[c] = prov;
                    light_vals[c] = lv;
                }
            }
        }

        Ok(TileInfo {
            id_list: ids,
            prov_ids,
            light_vals,
        })
    }
}

/// Border-код → провінція-власник пікселя: A = список[idx−4] (RE-border-table.md §1).
/// Звичайний id (≤ PROV_COUNT) повертається як є.
fn resolve_owner(v: u16, ids: &[u16]) -> u16 {
    if v <= PROV_COUNT {
        return v;
    }
    let idx = ((v >> 8) & 0x3F) as usize;
    if idx >= 4 && idx < ids.len() + 4 {
        ids[idx - 4]
    } else {
        0
    }
}

/// Бітовий потік LSB-first: біт 0 байта, далі біти 1..7, потім біт 0 наступного байта.
struct BitReader<'a> {
    bytes: &'a [u8],
    pos: usize,
    mask: u8,
}

impl<'a> BitReader<'a> {
    fn new(bytes: &'a [u8]) -> Self {
        Self { bytes, pos: 0, mask: 0x01 }
    }
    fn read(&mut self) -> anyhow::Result<bool> {
        let b = *self
            .bytes
            .get(self.pos)
            .ok_or_else(|| anyhow!("бітовий потік вийшов за межі секції"))?;
        let bit = b & self.mask != 0;
        if self.mask == 0x80 {
            self.mask = 0x01;
            self.pos += 1;
        } else {
            self.mask <<= 1;
        }
        Ok(bit)
    }
    /// Скільки бітів прочитано (враховуючи поточний байт).
    fn bits_read(&self) -> usize {
        self.pos * 8 + self.mask.trailing_zeros() as usize
    }
}

/// Читає весь файл з контекстом у помилці.
fn read_file(path: &Path, what: &str) -> anyhow::Result<Vec<u8>> {
    std::fs::read(path).with_context(|| format!("читання {what} ({})", path.display()))
}

/// Завантажує мапу з map/Map_1 (спершу paths.root, тоді paths.mod_dir).
pub fn load(paths: &GamePaths) -> anyhow::Result<MapData> {
    let map_dir = paths.root.join("map/Map_1");
    let map_dir = if map_dir.exists() {
        map_dir
    } else {
        let m = paths.mod_dir.join("map/Map_1");
        ensure!(
            m.exists(),
            "каталог мапи не знайдено: ні {:?}, ні {:?}",
            map_dir,
            m
        );
        m
    };

    // tiles.bmp — атлас 8192×1408, 8-бітний палітровий BMP.
    // ВАЖЛИВО (RE-звірка з HoI2-Editor/Zolo84): цей атлас містить **річкові**
    // тайли, а не тайли місцевості. Пікселі = індекси палітри tile.bmp;
    // 0 = прозорий (зелений ключ (0,255,0)), решта індексів — відтінки води.
    // Тайл малюється ПОВЕРХ lightmap-карти і лише для блоків з index != 0.
    let (tiles_indices, tiles_palette) = {
        let p = map_dir.join("tiles.bmp");
        let raw = read_file(&p, "tiles.bmp")?;
        ensure!(
            raw.len() >= 54 + 1024,
            "tiles.bmp: замалий для заголовка+палітри ({})",
            raw.len()
        );
        let px_off = LittleEndian::read_u32(&raw[10..14]) as usize;
        let width = LittleEndian::read_i32(&raw[18..22]);
        let height = LittleEndian::read_i32(&raw[22..26]);
        let bpp = LittleEndian::read_u16(&raw[28..30]);
        ensure!(
            width == ATLAS_W as i32 && height == ATLAS_H as i32 && bpp == 8,
            "tiles.bmp: {width}×{height} {bpp}біт ≠ {ATLAS_W}×{ATLAS_H} 8біт"
        );
        // Палітра BMP: 256 записів BGRX починаючи з байта 54.
        let mut palette = Vec::with_capacity(256);
        for i in 0..256 {
            let o = 54 + i * 4;
            palette.push([raw[o + 2], raw[o + 1], raw[o]]);
        }
        let stride = ((width as usize * bpp as usize + 31) / 32) * 4;
        let mut indices = Vec::with_capacity((width * height) as usize);
        // bottom-up BMP: рядок 0 у файлі = нижній.
        for y in (0..height as usize).rev() {
            let row = &raw[px_off + y * stride..];
            indices.extend_from_slice(&row[..width as usize]);
        }
        (indices, palette)
    };

    // index.tbl — uint32 на блок 32×32, 336 960 = 936×360 блоків, 0 = океан, 1..11225 = тайл атласу.
    // ВАЖЛИВО: файл зберігається **стовпцями** (column-major): зміщення(bx,by) = (bx·360+by)·4
    // (RE-звірка з HoI2-Editor/Zolo84: при такому порядку річкові тайли складаються в
    // зв'язні системи — 70% з'єднань між блоками проти 14% при row-major).
    // У пам'яті транспонуємо до row-major (index[by·936+bx]), щоб решта коду не мінялась.
    let index = {
        let p = map_dir.join("index.tbl");
        let raw = read_file(&p, "index.tbl")?;
        let n = (BLOCKS_X * BLOCKS_Y) as usize;
        ensure!(raw.len() == n * 4, "index.tbl: розмір {} ≠ {n}×4", raw.len());
        let mut v = vec![0u32; n];
        for bx_i in 0..BLOCKS_X as usize {
            for by_i in 0..BLOCKS_Y as usize {
                let t = LittleEndian::read_u32(&raw[(bx_i * BLOCKS_Y as usize + by_i) * 4..]);
                ensure!(t < TILE_SLOTS, "index.tbl[{bx_i},{by_i}] = {t} ≥ {TILE_SLOTS} (поза атласом)");
                v[by_i * BLOCKS_X as usize + bx_i] = t;
            }
        }
        v
    };

    // boundbox.tbl — 16 Б × 2770: (x1, y1, x2, y2) у пікселях повної мапи; запис 0 = розмір мапи.
    let (bounds, prov_count, map_w, map_h) = {
        let p = map_dir.join("boundbox.tbl");
        let raw = read_file(&p, "boundbox.tbl")?;
        ensure!(raw.len() == (PROV_COUNT as usize + 1) * 16, "boundbox.tbl: розмір {} ≠ 2770×16", raw.len());
        let n = raw.len() / 16;
        let mut v = Vec::with_capacity(n);
        for i in 0..n {
            let o = i * 16;
            v.push(BBox {
                x1: LittleEndian::read_i32(&raw[o..]),
                y1: LittleEndian::read_i32(&raw[o + 4..]),
                x2: LittleEndian::read_i32(&raw[o + 8..]),
                y2: LittleEndian::read_i32(&raw[o + 12..]),
            });
        }
        let pc = (n - 1) as u16;
        ensure!(pc == PROV_COUNT, "boundbox.tbl: провінцій {pc} ≠ {PROV_COUNT}");
        let (mw, mh) = (v[0].x1 as u32, v[0].y1 as u32);
        ensure!(mw == MAP_W && mh == MAP_H, "boundbox.tbl: розмір мапи {mw}×{mh} ≠ {MAP_W}×{MAP_H}");
        (v, pc, mw, mh)
    };

    // adjacent.tbl — [2770 префіксних сум uint32] + [uint32 total=15751] + [15751 записів × 12 Б:
    // (uint32 сусід, uint32 0, uint32 0xCDCDCDCD)].
    let adjacent = {
        let p = map_dir.join("adjacent.tbl");
        let raw = read_file(&p, "adjacent.tbl")?;
        let n = (prov_count as usize) + 1;
        ensure!(raw.len() >= (n + 1) * 4, "adjacent.tbl: замалий розмір {}", raw.len());
        let mut sums = vec![0u32; n + 1];
        for i in 0..=n {
            sums[i] = LittleEndian::read_u32(&raw[i * 4..]);
        }
        let total = sums[n] as usize;
        ensure!(
            raw.len() == (n + 1) * 4 + total * 12,
            "adjacent.tbl: розмір {} ≠ {}×4 + {}×12",
            raw.len(),
            n + 1,
            total
        );
        let mut graph = vec![Vec::new(); n];
        for prov in 0..n {
            let (s, e) = (sums[prov] as usize, sums[prov + 1] as usize);
            let mut nb = Vec::with_capacity(e - s);
            for j in s..e {
                let v = LittleEndian::read_u32(&raw[(n + 1) * 4 + j * 12..]);
                ensure!(v <= u16::MAX as u32, "adjacent.tbl: сусід {v} поза u16");
                nb.push(v as u16);
            }
            graph[prov] = nb;
        }
        graph
    };

    // airdist.tbl — uint16 N + верхній трикутник N×(N−1)/2 × uint16
    // (розмір 7 664 594 = 2 + 2769×2768/2×2 ✓; N = 2769).
    let airdist = {
        let p = map_dir.join("airdist.tbl");
        let raw = read_file(&p, "airdist.tbl")?;
        ensure!(raw.len() >= 2, "airdist.tbl: замалий розмір");
        let n = LittleEndian::read_u16(&raw[..2]);
        ensure!(n == prov_count, "airdist.tbl: N = {n} ≠ {prov_count}");
        let pairs = (n as usize) * (n as usize - 1) / 2;
        ensure!(
            raw.len() == 2 + pairs * 2,
            "airdist.tbl: розмір {} ≠ 2 + {}×2",
            raw.len(),
            pairs
        );
        let mut tri = Vec::with_capacity(pairs);
        for i in 0..pairs {
            tri.push(LittleEndian::read_u16(&raw[2 + i * 2..]));
        }
        Airdist { n, tri }
    };

    // navaldist2.tbl — uint16 m=1380 + uint16 0 + матриця m×m float32 (симетрична, діагональ 0).
    let navaldist = {
        let p = map_dir.join("navaldist2.tbl");
        if !p.exists() {
            log::warn!("navaldist2.tbl відсутній — navaldist = None");
            None
        } else {
            let raw = read_file(&p, "navaldist2.tbl")?;
            ensure!(raw.len() >= 4, "navaldist2.tbl: замалий розмір");
            let m = LittleEndian::read_u16(&raw[..2]) as usize;
            ensure!(
                raw.len() == 4 + m * m * 4,
                "navaldist2.tbl: розмір {} ≠ 4 + {m}²×4",
                raw.len()
            );
            let mut mat = vec![vec![0f32; m]; m];
            for r in 0..m {
                for c in 0..m {
                    mat[r][c] = LittleEndian::read_f32(&raw[4 + (r * m + c) * 4..]);
                }
            }
            Some(mat)
        }
    };

    // lightmap1..4.tbl — [N×uint32 зсувів] + [uint32 dataSize] + [дані]; N = (936/s)·(360/s).
    let mut lightmap = Vec::with_capacity(4);
    for lvl in 1..=4u32 {
        let scale = 1u32 << (lvl - 1);
        let (tx, ty) = (BLOCKS_X / scale, BLOCKS_Y / scale);
        let n = (tx * ty) as usize;
        let p = map_dir.join(format!("lightmap{lvl}.tbl"));
        let raw = read_file(&p, &format!("lightmap{lvl}.tbl"))?;
        ensure!(raw.len() >= (n + 1) * 4 + 4, "lightmap{lvl}.tbl: замалий розмір {}", raw.len());
        let mut offsets = Vec::with_capacity(n + 1);
        for i in 0..=n {
            offsets.push(LittleEndian::read_u32(&raw[i * 4..]));
        }
        let data_size = offsets[n] as usize;
        ensure!(
            raw.len() == (n + 1) * 4 + data_size,
            "lightmap{lvl}.tbl: розмір {} ≠ {}×4 + {data_size}",
            raw.len(),
            n + 1
        );
        ensure!(offsets[0] == 0, "lightmap{lvl}.tbl: offsets[0] = {}", offsets[0]);
        for i in 0..n {
            ensure!(
                offsets[i] <= offsets[i + 1],
                "lightmap{lvl}.tbl: offsets[{i}] > offsets[{}]",
                i + 1
            );
        }
        lightmap.push(LightmapLevel {
            level: lvl as u8,
            scale,
            tiles_x: tx,
            tiles_y: ty,
            offsets,
            data: raw[(n + 1) * 4..].to_vec(),
        });
    }

    Ok(MapData {
        prov_count,
        map_w,
        map_h,
        tiles_indices,
        tiles_palette,
        index,
        bounds,
        adjacent,
        airdist,
        navaldist,
        lightmap,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Перевірка на реальних файлах гри (потрібна встановлена гра через Steam).
    #[test]
    #[ignore = "потребує встановленої гри (map/Map_1)"]
    fn real_map_data() -> anyhow::Result<()> {
        let paths = GamePaths::from_steam()?;
        let map = load(&paths)?;

        // Базові константи (RE-mapformats-full.md).
        assert_eq!(map.prov_count, 2769);
        assert_eq!((map.map_w, map.map_h), (29952, 11520));
        assert_eq!(map.tiles_indices.len(), 8192 * 1408);
        assert_eq!(map.index.len(), 336_960); // 936×360
        assert_eq!(map.bounds.len(), 2770);
        assert_eq!(map.adjacent.len(), 2770);
        assert_eq!(map.adjacent[0], Vec::<u16>::new());
        assert_eq!(map.adjacent[1], vec![3, 2664]); // Рейк'явік: Акурейрі + море
        assert_eq!(map.lightmap.len(), 4);
        assert_eq!(map.lightmap[0].tiles_x * map.lightmap[0].tiles_y, 336_960);
        assert_eq!(map.lightmap[0].offsets.len(), 336_960 + 1);
        assert_eq!(map.lightmap[3].tiles_x * map.lightmap[3].tiles_y, 5265);
        if let Some(m) = &map.navaldist {
            assert_eq!(m.len(), 1380);
            assert!(m.iter().enumerate().all(|(r, row)| row[r] == 0.0));
        }

        // index: є і суша, і океан; значення в межах атласа.
        assert!(map.index.iter().any(|&v| v == 0));
        assert!(map.index.iter().any(|&v| v != 0));
        assert!(map.index.iter().all(|&v| v < TILE_SLOTS));

        // airdist: контрольні значення (RE §2) + симетрія + діагональ.
        assert_eq!(map.airdist.dist(1, 2), 741); // Рейк'явік–Торсгавн
        assert_eq!(map.airdist.dist(2, 1), 741);
        assert_eq!(map.airdist.dist(1, 3), 252); // Рейк'явік–Акурейрі
        assert_eq!(map.airdist.dist(4, 6), 152); // Сторновей–Інвернесс
        assert_eq!(map.airdist.dist(2768, 2769), 0); // фіктивні провінції
        assert_eq!(map.airdist.dist(7, 7), 0);

        // lightmap L1: тайл Рейк'явіка, координати блока — з центру boundbox провінції 1:
        // bbox = (12986, 636, 13194, 824) у пікселях повної мапи, центр (13090, 730),
        // блок = центр / 32 = (409, 22). Весь тайл — провінція 1.
        let b = map.bounds[1];
        let bx = ((b.x1 + b.x2) / 2 / 32) as u32;
        let by = ((b.y1 + b.y2) / 2 / 32) as u32;
        assert_eq!((bx, by), (409, 22));
        let ti = map.lightmap[0].decode_tile(bx, by)?;
        assert!(ti.id_list.contains(&1), "список ID: {:?}", ti.id_list);
        assert!(
            ti.prov_ids.iter().all(|&p| p == 1),
            "весь тайл Рейк'явіка має бути провінцією 1"
        );
        assert_eq!(ti.light_vals.len(), 32 * 32);
        assert!(ti.light_vals.iter().all(|&v| v <= 63));

        // Тайл міста (13159, 749) = блок (411, 23): список ID точно як у RE-border-table §2.1.
        let ti2 = map.lightmap[0].decode_tile(411, 23)?;
        assert_eq!(ti2.id_list, vec![1, 17408, 17409, 3, 18176, 18177]);
        assert!(ti2.prov_ids.contains(&1));
        assert!(ti2.prov_ids.contains(&3));

        // Зум-піраміда: той самий географічний пункт на L2..L4 містить провінцію 1.
        for (lvl, (bx, by)) in [(1usize, (205, 11)), (2, (102, 5)), (3, (51, 2))] {
            let t = map.lightmap[lvl].decode_tile(bx, by)?;
            assert!(t.id_list.contains(&1), "L{}: немає провінції 1 у {:?}", lvl + 1, t.id_list);
        }

        // Поза межами — помилка, а не паніка.
        assert!(map.lightmap[0].decode_tile(9999, 0).is_err());

        Ok(())
    }
}
