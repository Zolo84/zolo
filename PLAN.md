# Архітектура власного двигуна Darkest Hour (Rust)

Мета: відтворити оригінальну гру, читаючи ЇЇ файли (сценарії, бази, мапу, шрифти) —
без використання оригінального exe. Код 100% свій (clean-room за документацією RE).

## Крейти

```
dh-format   — читання форматів: скрипти, мапа, csv, сценарії, сейви, шрифти, палітри
dh-core     — ігрове ядро: світ, країни, провінції, час, 7 фаз тіка, команди, тригери
dh-render   — рендер: softbuffer-канвас, мапа з тайлів+lightmap, текст шрифтами
dh-engine   — бінарник: завантаження, цикл гри, ввід (winit)
```

## Контракти (вже є в dh-format/src/lib.rs, dates.rs — НЕ змінювати сигнатури!)

- `Tag(String)` — код країни
- `ProvinceId(u16)` — id провінції
- `ObjId { kind: u16, id: u32 }` — скриптовий id (type/id)
- `Terrain`, `Climate` — типи місцевості/клімату
- `ProvinceResources { ic, manpower, oil, metal, energy, rare_materials, infrastructure }`
- `BBox { x1,y1,x2,y2 }` — bbox у пікселях (мапа 29952×11520)
- `BorderCode { raw }` — lightmap border-код (idx/off/side методи)
- `GamePaths { root, mod_dir }` — де лежить гра
- `GameDate { day: i64 }` — 360-денний рік, 30-денний місяць; від epoch (1.1.1900 = 0);
  методи: year(), month(), day_of_month(), month_index(), is_month_start(),
  is_year_start(), from_ymd(), add_days(), display()

## Правила розробки

- Кожен агент пише ТІЛЬКИ свої файли (список у завданні), чужі не чіпає.
- `cargo build -p <crate>` має проходити (можна тестувати окремим крейтом).
- Коментувати джерело: `// RE: re/RE-mapformats-full.md §3` — щоб було видно звідки взято.
- Помилки: thiserror + anyhow (bail!). Логування: log::{info,warn,error}.
- Тести формату — на РЕАЛЬНИХ файлах гри (шлях передається змінною оточення
  DH_GAME_DIR або аргументом). Тести, що потребують гри, позначати #[ignore].
- Не вигадувати семантику: якщо в RE-звітах не підтверджено — marked TODO.

## Де лежить що

- RE-звіти: /home/andriy/Projects/darkest-hour/re/*.md (ключові перелічені в завданнях)
- Головний звіт: /home/andriy/Projects/darkest-hour/RE-FULL.md
- Декомпіляції exe: /home/andriy/Projects/darkest-hour/decomp/ (файл = адреса)
- Гра (оригінальні файли): /home/andriy/.local/share/Steam/steamapps/common/Darkest Hour A HOI Game/
  Плюс мод: <root>/Mods/Darkest Hour Full/