# Звіт: canvas.rs (канвас рендера)

## Що зроблено
Реалізовано `dh-render/src/canvas.rs` (~545 рядків, коментарі українською):

- **`Color(pub u32)`** — ARGB8888; `From<[u8; 3]>` (alpha=0xFF) і `From<u32>`, конст-конструктори `rgb`/`argb`. Усі методи канваса приймають `impl Into<Color>` — можна передавати і `[r,g,b]`, і `u32`.
- **`Canvas { width, height, buf: Vec<u32> }`** — CPU-буфер ARGB8888 (рядок за рядком):
  - `new(w, h)`, `width()/height()/buf()`, `clear(color)`;
  - `set_pixel(x, y, color)` — no-op поза межами;
  - `fill_rect(x, y, w, h, color)` — кліпінг через спільний `clip_rect` (арифметика в i64 — без переповнення);
  - `draw_bitmap_mask(x, y, width, height, mask, color)` — біт-маска у форматі шрифтів (рядки зверху вниз, `ceil(w/8)` байт, біт 7 = найлівіший), кліпінг і координат, і країв маски; замала маска — debug_assert (release: no-op);
  - `draw_text(font, text, x, y, color, scale)` — через `dh_format::fonts::render_text` (маска → `draw_bitmap_mask`).
- **`RenderSurface`** — трейт із `fn present(&mut self) -> anyhow::Result<()>`.
- **`SoftbufferCanvas<'a>`** — обгортка `softbuffer::Surface` + `winit::window::Window`: `new(&Window, w, h)`, `resize(w, h)`, `present()` (копіює buf у `buffer_mut()` і презентує), `Deref/DerefMut` до `Canvas`, гетери `context()/surface()`.

## Нюанси API, з'ясовані з вихідників залежностей (softbuffer 0.4.8, winit 0.30.13, raw-window-handle 0.6)
- `winit::Window` не `Clone`, але RWH реалізує `HasDisplayHandle/HasWindowHandle` для `&Window` → `Surface<&'a Window, &'a Window>` (позичає вікно, без клонування).
- `softbuffer::SoftBufferError` містить `RawDisplayHandle/RawWindowHandle` → **не** `Send + Sync`, тому `anyhow::Context` не застосовний — помилки перетворюються через `anyhow!` (рядок + Display).
- `Context::new(display)` і `Surface::new(&context, window)` приймають значення (reference works); `sresize` потребує `NonZeroU32`.
- X11-бекенд тримає `Arc` контексту всередині поверхні; контекст у структурі збережено для явності й створення додаткових поверхонь.

## Тести (13 юніт-тестів у canvas.rs, без вікна)
`Canvas::new` нулями; set_pixel ([u8;3]/Color/u32) і no-op поза межами включно з i32::MAX; fill_rect (повний, частковий, кліп з усіх боків, цілком поза межами, нульовий розмір); draw_bitmap_mask (базова, кліп верх-ліво, кліп низ-право, цілком поза, багатобайтовий stride: пікселі 8/9 = біти 7/6 другого байта); clear; draw_text (scale 1 і 2, кліпінг); Color-конверсії.

## Результати
- `cargo build -p dh-render` — OK (dh-format/dh-core збираються).
- `cargo test -p dh-render` — **33 passed, 0 failed** (1 ignored — тест, що потребує Steam-гри, з dh-format).
- `lib.rs` вже мав `pub mod canvas;` — не змінювався.
- `Cargo.toml` dh-render — не змінювався (softbuffer/winit/image уже були).

## Правки поза canvas.rs (мінімальні, у чужих файлах)
Під час фінального прогону виявилось, що паралельний агент дописав `dh-render/src/text.rs`; його тести мали 3 помилкові очікування (не збігалися з геометрією маски та порядком кольорових тегів; canvas-код був правильним). Поправлено лише очікування в тестах text.rs (тінь для гліфа ширини 1: (7,6)→(6,7)+EMPTY; колір A до тега §R — WHITE + додаткова перевірка скидання кольору рядка). `map_render.rs` не чіпав (там лишився warning про unused import — файл іншого агента, у процесі роботи).

## Файли
- Створено/переписано: `dh-render/src/canvas.rs`
- Виправлено тести: `dh-render/src/text.rs` (3 assert-и)
- Цей звіт: `dh-render/canvas_report.md`
