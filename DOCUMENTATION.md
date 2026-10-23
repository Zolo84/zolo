# Документація: аналіз Darkest Hour.exe

> Проєкт: `~/Projects/darkest-hour/` — реверс-инжиниринг головного виконуемого файла гри
> **Darkest Hour: A Hearts of Iron Game** (Steam).
> Метод: статичний аналіз бінарного файла (PE-заголовки, таблиця імпорту, рядки).
> Гри не запускалась — всі висновки про поведение — реконструкція по коду і відомостям про движок.

---

## 1. Паспорт файла

| Параметр          | Значение |
|-------------------|----------|
| Файл              | `Darkest Hour.exe` (рядом: `Darkest Hour Launcher.exe`) |
| Розмір            | 4 730 956 байт |
| SHA-256           | `7a1ae8bb802377b6c9ec808f420ace58475d1816464390422cf97ad450a51eb4` |
| Формат            | PE32 (32-біт), Intel i386, Windows GUI (subsystem 2) |
| Компилятор/лінкер | Microsoft Visual C++ 6.0 (linker 6.0) |
| Дата збірки       | 2022-06-08 (PE timestamp `0x62A07EF0`) |
| Версія продукту   | 1.05.2 (з ресурсів `VS_VERSION_INFO`) |
| Упаковка          | відсутняє (звичайні імена секцій, нормальні энтропії) |

Секції:

```
.text    va=0x001000  ~3.9 МБ  код движка              entropy 6.65
.rdata   va=0x3e3000  ~290 КБ  константи/рядки         entropy 5.14
.data    va=0x42c000  ~5.6 МБ  статичні масиви даних   entropy 4.97
.rsrc    va=0x9c7000  ~5.6 КБ  іконка/ресурси (icon, version info)
```

Точка входу: RVA `0x3A9B08` (стандартний CRT-старт MSVC6).

---

## 2. Що за программа

`Darkest Hour.exe` — головний виконуемый файл гранд-стратегии «Darkest Hour: A Hearts of Iron Game»
(альтернативная історія Другої світовой, 1933–1964, розробка — модифікація движка
**Hearts of Iron 2** від Paradox).

**Пряме доказательство в бінарнике** — зборочні шляхи в рядках (assert/помилки):

```
C:\Dev\HoI2 Projects\Darkest Hour\imagebase.cpp
C:\Dev\HoI2 Projects\Darkest Hour\DirectDraw.cpp
C:\Dev\HoI2 Projects\Darkest Hour\DirectSound.cpp
C:\Dev\HoI2 Projects\Darkest Hour\Bsocket.cpp
C:\Dev\HoI2 Projects\Darkest Hour\ClientLobby.cpp
C:\Dev\HoI2 Projects\Darkest Hour\Mutex.h / PSemaphore.h / PThread.h
C:\Dev\HoI2 Projects\Darkest Hour\Release\_Darkest Hour.pdb
```

Т.е. движок — спадок HoI2-кодебазы Paradox того поколения (та сама лінія, що EU2/HoI1/HoI2),
пересобраний спеціально для Darkest Hour.

---

## 3. Що використує імпорт (DOS-коло движка)

### Графіка — DirectDraw (не OpenGL/3D!)
```
DDRAW.dll   DirectDrawCreate
```
Движок повністю 2D: малює в DirectDraw-surface і перекидує сторінки (page flip).
Цвет — через палітри (8-біт BMP-палітри для терайнів, про що нижче).

### Звук — DirectSound + MIDI/MP3
```
DSOUND.dll  (ordinal — DirectSoundCreate)
WINMM.dll   mciSendCommandA  — управление MIDI/музыкой
            timeGetTime, timeSetEvent — високоточні таймери (ігровий тик!)
```
Музыка — MP3-файли з папки `music\`, які движок шукає сам
(рядок: `MUSIC: %s\%s.mp3 cannot be found!`), еффекты — WAV (`sfx\wave\*.wav`).

### Мультиплеер — «чистый» TCP/IP, без зовнішніх серверів
```
WS2_32.dll socket/bind/listen/accept/connect/send/recv/... (18 символов)
```
Гра вміє хостить IP-сессию напряму: лобі (модуль `ClientLobby.cpp`),
своя обгортка сокетів (`Bsocket.cpp`), потоки (`PThread.h`, `Mutex.h`, `PSemaphore.h`).

### Вікно и головной цикл — стандартні Windows-повідомлення
```
USER32.dll GetMessageA/PeekMessageA/DispatchMessageA/CreateWindowExA/
           DialogBoxParamA/MessageBoxA/ShowCursor/SetCursorPos/...
```
Без OpenGL, без DirectInput — клавиатура/мыша через стандартні повідомленні вікна.

### Ресурси системи
```
KERNEL32.dll  CreateThread, CreateMutexA, CreateSemaphoreA, CreateEventA —
              многонитевость (мережа, звук, таймеры)
              CreateProcessA — запуск зовнішніх процесов (Bink-плеер відео!)
              SetUnhandledExceptionFilter — свой обробник крашів → savedebug.txt
              GetUserDefaultLCID / GetLocaleInfoA — локаль, настройки
              GlobalMemoryStatus — проверка памяти при старте
ole32.dll     CoCreateInstance — інтерфейси DirectX (DirectDraw/Input)
```

---

## 4. Модулі движка (із зборочных шляхів)

| Модуль | Роль (по названию и использованию) |
|--------|-------------------------------------|
| `imagebase.cpp` | Абстракція «зображення/поверхности» над DirectDraw; помилки `CImageBase FAILED to created surface` |
| `DirectDraw.cpp` | Обгортка DirectDraw (сторінки, палітри, бліт) |
| `DirectSound.cpp`| Обгортка DirectSound |
| `Bsocket.cpp/.h` | Обгортка WinSock (TCP-соединения для мультиплеера) |
| `ClientLobby.cpp`| Лобі мультиплеера (список гри, IP) |
| `PThread.h`, `Mutex.h`, `PSemaphore.h` | Примітиви для потоків |

Файли чистого C++ («С»-класи в рядках): `CImageBase`, `CEUEvent`
(EU = Europa Universalis — событія в стилі EU-движка), `CAIMilitaryMinister`, `CAIAgent`.

---

## 5. Формати и файли, з которыми працює гра

### Графіка (BMP + спрайти)
```
gfx\map\landscape\{Plains,hills,Marsh,Desert,Djungle,Mountain,trees}%d.bmp
gfx\map\landscape\*_palette.bmp          ← палітри терайнів
gfx\palette\%s.bmp
gfx\map\T-MAP_ARROWS.bmp, arrow.bmp
gfx\map\units\*.spr                      ← свой спрайтовый формат юнитов
gfx\load_1024.bmp                        ← екран загрузки (1024x768)
gfx\interface\frontend\bink_logo.bmp
```
Шрифты — готові растрові BMP: `eurostilecond14.bmp`, `eurostilecond20bold.bmp`
(текст — бліт шрифтовых картинок, типово для DirectDraw-движков).

### Данні (текстовие файли з периодом, CSV)
```
db\ministers\minister_personalities.txt
db\policy_effects.csv, db\mission_eff.csv
db\units\brigade_types.txt, db\units\brigades\%s.txt
db\units\division_types.txt, db\units\divisions\%s.txt
db\units\modifiers.csv, db\units\brigade_modifiers.csv
db\tech\{naval,secret_weapons,...}_tech.txt
config\scenario_text.csv                  ← локалізація/тексти
```
Формат — рядкові txt/CSV «ключ = значение», скриптовий синтаксис EU-движка:
в бінарнике видно ключеві слова событий: `event`, `trigger`, `command`, `random`,
`ai_chance`, `effects`, `decision_trigger`.

### Сейвы и логи
```
*.eug      — сейви (формат спадку EU-движка)
savedebug.txt — лог краша (обробник exception)
LogSpyAI.csv / LogDiploAI.csv / LogCountry.csv — логи AI/дипломатии
SwitchAI.txt, history.txt
```

### Видео
```
avi\binkplay.exe avi\publisher.bik avi\paradox.bik avi\game.bik /C /I2 /R /D508 /B2
```
Інтро-ролики — Bink (.bik), програються **зовнішним процессом** `binkplay.exe`
(запуск через `CreateProcessA`), а не внутри движка.

### Музыка и настройки
```
music\*.mp3            (когда нема файла — рядок-помилка MUSIC: ... cannot be found)
sfx\wave\*.wav
OPTION_MUSICVOLUME / OPTION_SFXVOLUME — ключи настроек
```

---

## 6. Як працює: реконструкція жизненного цикла

1. **Старт (CRT → WinMain)**:
   - створює вікно (`CreateWindowExA`), реестрація класса;
   - DirectDrawCreate → повноекранний surface (fullscreen);
   - ініціализация звуку (рядок `Starting to Initialize sound!`).

2. **Загрузка баз знань** (порядок видно по рядкам загрузки):
   Tech Teams → Ministers → minister personalities → Leaders →
   события (history, slept events) → типи юнитов/бригад → модификаторы →
   distances → production availability → звук.

3. **Сценарий**: «Scenario Validation (provinces)...» — валідація карты
   (провинции/прилегание), парсинг сценария, карта терайнів по палітрам.

4. **Головной цикл**: `GetMessage/PeekMessage` — ввод и повідомленні;
   ирга тикає по таймеру (`timeSetEvent`, `timeGetTime`);
   рендер — малювання в DirectDraw surface + page flip; FPS обмежен таймером.
   Графіка 2D: карта — бліт BMP-тайлов з палітрами, юниты — `.spr` спрайти.

5. **Мультиплеер**: окремий потік (PThread) з Bsocket-сервером/кліентом,
   лобі (ClientLobby), TCP direct-IP — классика того поколения.

6. **Краші**: `SetUnhandledExceptionFilter` → свой фильтр пише `savedebug.txt` —
   стандартный спосіб Paradox-движков отлавливать помилки в пользе.

7. **Консоль/чити** (вводятся в гри): `money`, `energy`, `metal`, `manpower`,
   `nofog`, `revolt`, `control`, `event`, `sprite`, `cheat` — класичний
   набір EU/HoI.

---

## 7. Лаунчер (окрема програма)

`Darkest Hour Launcher.exe` — **.NET/Mono** (PE32 i386, Mono/.Net assembly):
- кнопки `buttonLaunch` (запуск гри) і `buttonUpdate` (перевірка патчей);
- поля версій `labelCurrentGameVersion` / `labelLatestGameVersion`;
- URL перевірки патчей (`latestPatchURL`) — типовой «перевірка оновлений перед запуском».

---

## 8. Висновки

**Підтверждено безпосередственно из бінарника:**
- 32-біт, MSVC 6.0, збірка 2022-06-08, версія 1.05.2, не упакований;
- DirectDraw-графіка + DirectSound + MIDI/MP3 + TCP/IP мультиплеер;
- спадок движка HoI2 (зборочні шляхи `C:\Dev\HoI2 Projects\Darkest Hour\`);
- данні: BMP-палітри/терайни, `.spr` спрайти, `.eug` сейви, txt/CSV бази, Bink-відео зовні;
- своя обробка крашів через savedebug.txt; чити-консоль; локалізація через CSV.

**Припущенія (потребують запуску/дизассемблера):** детальні алгоритми AI, точної
структури `.spr`/`.eug`, порядок ігрового тика, протокол мережи.

**Обмеження аналізу:** це статичний разбор без символів (Release-білд; `_Darkest Hour.pdb`
не входит в поставку). Для повного дизассемблера — **Ghidra** (безкоштовна, є аналіз
MSVC-бінарников), **IDA Free**, `rizin`/`radare2`; для поведенческого — запуск під
**Wine** (+ `winedbg`/логування API), знятие сейва и сравнение `savedebug.txt`.

---

*Згенеровано: статичний аналіз PE + розбор рядків (32 711 рядків, всі категорії збережені в `/tmp/dh-strings.txt`).*