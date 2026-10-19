# Специфікації форматів

Описи форматів файлів Darkest Hour власними словами, з посиланнями на джерело (`Файл.cs:рядок`
для HoI2Editor, адреси VA для `Darkest Hour.exe`). Код сторонніх програм не копіюється.

## З HoI2Editor (C#)

| Файл | Що описує | Перевірка скептиком |
|---|---|---|
| [map.md](map.md) | `lightmap1-4.tbl` (квадродерево, ID провінцій, відтінки), `boundbox.tbl`, `colorscales.csv`, `Map_<N>` у DH | ✅ 130 тверджень, виправлено 7 помилок |
| [provinces-config.md](provinces-config.md) | `db/province.csv`, локалізація `config/*.csv`, тип гри, моди, лексери | ✅ 923 твердження, виправлено 5 |
| [scenario.md](scenario.md) | `.eug`/`.inc`, ключі країн, провінцій, юнітів, дати | ✅ 265 тверджень, виправлено 13 |
| [units.md](units.md) | `db/units/**`, назви юнітів, моделей, корпусів | ще ні |
| [tech-commands.md](tech-commands.md) | `db/tech/*.txt`, команди (ефекти) й тригери | ще ні |
| [leaders-ministers-misc.md](leaders-ministers-misc.md) | лідери, міністри, `db/misc.txt` | ще ні |

## З `Darkest Hour.exe` і даних гри (реверс)

| Файл | Що описує | Перевірка скептиком |
|---|---|---|
| [map-adjacency.md](map-adjacency.md) | `adjacent.tbl` (CSR-таблиця сусідів), `adj-defs.csv` (річки, протоки, канали, непрохідні), як гра це використовує | ✅ незалежний декодер; числа відтворено Rust-реалізацією (`dh-map::adjacency`) |

## Звірка зі справжньою грою (DH 1.05.1, GOG)

- `lightmap1-4.tbl`: таблиця зміщень `N+1` (`offs[0] = 0`, `offs[N]` = довжина даних, зміщення монотонні) — ✅ на всіх 4 рівнях.
- `colorscales.csv`: записи по 6 рядків, другий рядок — заголовок `red;green;blue;index`, позиції 0..64 — ✅.
- `lightmap1-4.tbl`: **усі 447 525 блоків** чотирьох рівнів декодуються крейтом `dh-map`, і довжина кожного
  точно збігається з таблицею зміщень (тест `crates/dh-map/tests/real_data.rs`) — ✅. Найбільше ID у блоці: 24/34/49/19.
- Пікселі провінцій лежать у своїх прямокутниках `boundbox.tbl` (поза ними 33 з 5,39 млн пікселів рівня 4) — ✅.
- Підписи країн і морів (Canada, Australia, назви океанів) «запечені» у відтінки (shade) `lightmap`, окремого шару тексту немає — ✅.
- Колір країни: колонка `main color` у `db/country.csv` — це назва шкали з `colorscales.csv` (`LightGray` ↔ `light grey`),
  ступінь шкали = відтінок пікселя. Кольори рельєфу — `Modding documentation/Map colors.txt` — ✅ (рендер `dh-tool map`).
- `colorscales.csv` гри містить 32 шкали, зокрема `border`, `border outline`, `usercolor1-6`.
- `boundbox.tbl`: 2608 записів по 16 байт (`map/`), 2770 (`map/Map_1/`).
- `db/Province.csv`: 48 колонок у заголовку, рядок-термінатор з `Id = -1`.
- Дати сценаріїв: `day = 0` — перше число місяця (1936.eug → 1936-01-01) — ✅.
