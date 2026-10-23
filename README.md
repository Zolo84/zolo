# Darkest Hour — Reverse Engineering Data

Локальний репозиторій даних реверс-інжинірингу гри
**Darkest Hour: A Hearts of Iron Game** (v1.05.2, Steam).

## Структура

```
RE-FULL.md              — головний звіт (28 розділів, всі підсистеми)
DOCUMENTATION.md        — початковий статичний аналіз (перша версія)
decomp/                 — декомпіляції Ghidra: 21 329 функцій (файл = адреса)
re/
  RE-*.md               — детальні звіти по підсистемах (20 файлів)
  functions-index.txt   — індекс функцій: адреса, розмір, ім'я
  strings-full.txt      — повний дамп рядків (32 711 рядків)
  wine-savedebug.txt    — живий лог запуску гри під Wine
  wine-menu-screenshot.png — скріншот головного меню (Wine/Xvfb 16-bit)
```

## Що всередині (коротко)

- **Формати мапи:** tiles.bmp (атлас 11264 тайлів 32×32), index.tbl (936×360 блоків),
  boundbox.tbl, adjacent.tbl (CSR-граф), airdist.tbl (матриця км), navaldist2.tbl,
  lightmap1-4.tbl (квадродерево + 6-біт освітлення + border-коди `0x4000|(idx<<8)|(off<<1)|side`)
- **Скрипти:** реєстр 1669 токенів, диспетчер 289 команд (обробники = world.vtable),
  trigger-парсер (88 умов), ланцюг виконання події
- **Сейви:** .eug (текст) + bzip2-стиснення, секції eyr/saved, автозбереження (місячний тік 0x19)
- **Мережа:** Bsocket (живий TCP-клієнт), wire-протокол, мертві серверні частини
- **Час:** winmm-таймер 15 мс, 360-денний рік / 30-денний місяць, 7 фаз денного циклу
- **Графіка:** DirectDraw 2D, CImageBase, палітри, шрифти (RLE-гліфи, 3 кодові сторінки)
- **Звук:** 34 WAV (DirectSound), mp3 (DirectShow), CD-Audio (MCI)

## Відтворення запуску під Wine

```bash
Xvfb :7 -screen 0 1280x1024x16 &
WINEPREFIX=~/.cache/dh-wine DISPLAY=:7 wine "Darkest Hour.exe"   # з каталогу гри
```
(Гра потребує 16-bit дисплей; на 32-bit — "Unknown RGBFormat = 32".)

## Джерела

- Бінарник: Steam-каталог (`.../common/Darkest Hour A HOI Game/`) — файли гри НЕ в репозиторії
- Декомпіляції: Ghidra 12.1.2 headless + скрипти Java (ExportAll / ExportAllSmall)
- Інструменти: rizin, objdump, pefile, Python