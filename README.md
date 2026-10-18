# zolo

Відкритий двигун для **Darkest Hour: A Hearts of Iron Game** (Paradox, 2011; Europa Engine, лінія HoI2),
написаний на Rust. Мета — запускати гру на сучасних системах (Linux, macOS, Windows, 64-bit)
без оригінального `DarkestHour.exe`, використовуючи дані з **вашої легальної копії** гри.

> Проєкт не містить і не поширює жодних файлів оригінальної гри. Двигун лише читає їх
> з каталогу встановлення, вказаного користувачем.

## Структура

| Крейт | Призначення |
|---|---|
| `crates/dh-text` | Кодування CP1252, парсер/записувач Paradox script (`.txt`, `.eug`, `.inc`, сейви), CSV з `;` |
| `crates/dh-vfs`  | Віртуальна ФС: регістронезалежні шляхи з `\`, накладання модів поверх гри |
| `crates/dh-data` | Типізовані дані: дати, локалізація, провінції, сценарії з `include` |
| `crates/dh-sim`  | Детерміноване ядро симуляції: погодинні тіки, системи правил, seed-RNG |
| `crates/dh-tool` | CLI для дослідження даних і реверсу бінарних форматів |

## Швидкий старт

```sh
cargo test
cargo run -p dh-tool -- scan      "/шлях/до/Darkest Hour"
cargo run -p dh-tool -- scenarios "/шлях/до/Darkest Hour"
cargo run -p dh-tool -- sim       "/шлях/до/Darkest Hour" scenarios/1936.eug --days 30
cargo run -p dh-tool -- probe     "/шлях/до/Darkest Hour/map/id.tbl"
cargo run -p dh-tool -- hexdump   "/шлях/до/Darkest Hour/map/id.tbl" --offset 0x100 --len 64
```

Мод підключається як додатковий шар: `--mod "/шлях/до/Darkest Hour/Mods/<назва>"`.

Для локальної роботи файли гри можна покласти в `game_data/` — цей каталог у `.gitignore`.

## Документація

* [docs/ROADMAP.md](docs/ROADMAP.md) — етапи розробки
* [docs/formats.md](docs/formats.md) — що відомо про формати файлів і наскільки це перевірено
* [docs/reverse-engineering.md](docs/reverse-engineering.md) — методика і правила реверсу
