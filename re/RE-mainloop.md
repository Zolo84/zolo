# RE: Головний цикл та WinMain — Darkest Hour.exe (1.05.2, движок HoI2)

Об'єкт: `/home/andriy/Projects/darkest-hour/Darkest Hour.exe` (PE32, MSVC6, image base 0x400000).
Джерела: декомпіляції `/tmp/dh-decomp/`, індекс `/tmp/dh-functions-index.txt`, рядки зняті напряму з `.rdata/.data` (VA = file_offset + 0x400000).
Ключове: всі твердження нижче — з коду/рядків, без домислів; там, де семантика не визначається, це сказано явно.

---

## 1. WinMain — FUN_00791fe9 @ 0x791fe9 (10754 байти, сигнатура HINSTANCE, undefined4, char*, int)

Точка входу гри. Повний життєвий цикл:

### 1.1 Старт (cmdline + налаштування)
- Перевірка командного рядка: якщо `param_3` (lpCmdLine) починається з **"WINDOWED"** (порівняння по байтах `local_bc8..local_bc1`, довжина ≥ 9) → `DAT_0088fae8 = 1` (віконний режим). `DAT_00dc2ca4 = 0`, `DAT_00dc3a00 = 0` (прапорець файлу налаштувань з командного рядка).
- Створюються 2 об'єкти-читача файлів по 0x13e байт (ctor `FUN_00426d70`, vtable `PTR_FUN_007e3ba0`), потім третій через `FUN_00426f50`; він відкривається через `FUN_00427570` (повертає 0 = успіх).
- Читання налаштувань **по-рядково** через `FUN_004276c0()` (fgets-обгортка: рядки "Error reading file %s", "No valid file") + `FUN_007a7b3c` (чисельне значення рядка). У .rdata поруч лежить рядок `settings.cfg` (VA 0x87b7e4) — це файл налаштувань. Парситься:
  - роздільність (switch): 1→1152x864, 2→1280x768, 3→1280x1024, 4→1440x900, 5→1600x1024, 6→кастомна w/h (`DAT_00877218/1c`); дефолт 1024x768;
  - прапорець віконного режиму → `DAT_0088fae8`; біт "грати відео" → біт `local_734`; `DAT_00dc4b5e` (debug, значення 1/2); звукові прапори `DAT_00877222/20/21/23` (можуть вимикатися окремими рядками "0").
- Додаткові рядки файлу: зрізання коментарів `#`, обрізка `\r\n# \t`; рядок порівнюється з **"Mods"** (`DAT_0087b7fc` = "Mods") — шлях мода формується як `%s\%s` (рядки `Mods`, `%s\%s` у .rdata).

### 1.2 Глобальні ініціалізації (порядок викликів з коду)
- `FUN_00533f75` — побудова **таблиці ключових слів скрипт-парсера** (0x69a слотів, 0x685 = 1669 ключів з глобального масиву).
- `FUN_00534930` (ctor 0x316 байт) + цикл `FUN_00535490` — **парсинг парадокс-скрипта** (токени через `FUN_00534391`/`FUN_005343dc`; рядок "ERROR: %s %s %s %s Line: %d %s", "Missing ; in statement"; токен 4 = `}`, 0x531 = кінець). Цикл `do { while (FUN_00535490()==1) {...} } while (rc != 2 && rc != -1)`; помилки → `FUN_005349b0` (друк помилки) / `FUN_00429a50` (критична помилка).
- `FUN_0042e3d0` — версія **"Darkest Hour v1.05.2(%s)"** + завантаження `db\building_costs.txt`, `db\convoy_costs.txt`.
- `_DAT_00dc2ca0 = GetCurrentThread()`; `DAT_00dc4b68 = CreateMutexA(NULL, FALSE, "Netlog Mutex")` (рядок VA 0x87b8ac) — захист netlog від одночасного доступу потоків.
- `FUN_004af160` — `db\country.csv` (помилки "Error in db\country.csv ... Invalid ...").
- `FUN_0042a492` — `config\boostertext.csv`, `config\darkest_hour.csv` ("AI EVENT", "AI Loaded").
- `FUN_00429b50`, `FUN_00408030` — без рядків (не ідентифіковані ініціалізатори); `FUN_0042a492` перевіряється (`FUN_0042a492()==0` → `FUN_00429a50`).
- `FUN_004ef470` — `%s terrain_types.csv` ("TERRAIN_PLAINS"); `FUN_005b5d30` — `db\randomleaders.csv`; `FUN_005bd94b` — `db\airnames/armynames/navynames/unitnames.csv` (помилки "ERROR: Invalid TAG %s in ...").
- `FUN_007411f0` — перевірка наявності файлів інсталяції: `accessories\win95_ws2setup.exe`, `avi\paradox.avi`, `gfx\interface\cover65.bmp`, `map\incognita.tbl`, `music\tmp.dat`, `sfx\wave\gbme.wav`.
- `DAT_00dc3b00 = param_1` (HINSTANCE); `CoInitialize(NULL)`; далі `FUN_0078f7a5` (створення вікна, див. п.3) — при невдачі: `FUN_005349a0(); return 0`.

### 1.3 Вікно та графіка (DirectDraw)
- `FUN_0078f7a5 @ 0x78f7a5` (553Б): `RegisterClassExA` з `lpfnWndProc = FUN_00794a03`; клас **"StubDirectDrawWndClass"** (`PTR_s_StubDirectDrawWndClass_0087b638`) для повноекранного режиму (style 8, WS_POPUP|WS_VISIBLE = 0x90000000, розмір екрана GetSystemMetrics) або динамічний клас для віконного (style 0xb, WS_VISIBLE = 0x10000000, `DAT_00877218/1c` + рамки). Іконка `LoadIconA(0x65)` або IDI_APPLICATION (0x7f00). HWND → `DAT_00dc4a58`. При помилці: `MessageBoxA("Error Creating Window!", caption "Europa Universalis")`. Успіх → `ShowCursor(0)` (у вік. режимі → SetFocus + ShowCursor(1)), ShowWindow(5), UpdateWindow.
- Після вікна: `LoadImageA(0x65)` + `PostMessageA(hwnd, 0x80 /*WM_SETICON*/, 1, ...)`.
- Створюються: input-об'єкт `FUN_0040e0c0` (0x44Б) → `DAT_0088eb2c`; `FUN_005812f0` (4Б) → `DAT_00bd13e8`; `FUN_00579770`; `FUN_0042d860` (0x10cБ) → `DAT_0088faf8`; `FUN_007411f0` — перевірка файлів.
- **Відео-інтро** (див. п.4): лише якщо `(local_734 & 0xff) != 0` (відео увімкнено в налаштуваннях).
- Потім: `FUN_00405ad0` (лог), `FUN_00429a00`=***лог у savedebug.txt*** ("savedebug.txt", "wb" у .rdata), `FUN_00583ac0` — **DirectDraw mode set** (рядки "Setting Mode: %s", "Mode Set: %s", "DD Is not initialized properly"; викликається з `DAT_00877218, DAT_0087721c, 0x10 (16bpp), DAT_0088fae8!=0`); при невдачі → відмова (quit). У віконному режимі — перерахунок позиції через GetWindowRect/GetSystemMetrics + `FUN_005841f0`.
- `FUN_00583750` (4Б, `palette_act`) → `DAT_00bd1ba8`; `FUN_0040e0c0` (input); `FUN_00415020` (0x7eБ) → `DAT_00dc4b74`; `FUN_00411598` ×9 + `FUN_00411b53` — **завантаження шрифтів** (`gfx\fonts\%d\%s`, "didn't find FONT: %s", "bitmap error: %s"); `FUN_00519650`.

### 1.4 Звук
- `FUN_005aebb0` (0x12Б) → `DAT_00bdc100`; `FUN_0057ffb0` (0xc6Б) → `DAT_00bd0e14` (звуковий менеджер); `FUN_0057e300` (0x16414Б) → `DAT_00bd0e18` — звуковий "DJ"/виконавець, у який **інлайн-реєструються ~33 сема `sfx\wave\*.wav`** через vtable+4: CBA1..CBA3, CGFB1..3, CGFI1..3, CGFP1..3, CGFT1..2, CNB1, CRI1, CRTA, CSA1..2, GBME, GCMI, GEC1, GFB1, GMWO, GSB1, GVC1, UAFM1, UAFS1, UAM1, UAS1, UNM1, UNS1, UTFR, UUFB (кожен виклик: (id, рядок, група, адреса змінної гучності)). Після реєстрації — `vtable+0x38` (старт?).
- Рядки поруч у .rdata: "INIT_SOUND", "Starting to Initialize sound!\r\n", "Fonts Initialized!\r\n", "Loadimage!\r\n", "gfx\load_1024.bmp".

### 1.5 Мережа
- `FUN_004af160` (db\country.csv) та `FUN_006cd260` (0x16Б) → `DAT_00d12b40` — об'єкт мережі (клас 0x6cdxxx використовує `s_localhost_00874c60` — "localhost", та `europa.valkyrienet.com` з .rdata — дефолтний MP-сервер). Далі `FUN_006cd2e0`, `FUN_00429b50`, `FUN_00408030`, `FUN_0042a492`, `FUN_0042b6c9` — **DBText-локаль** ("Unable to find string for key: %s", "UNKNOWN STRING WANTED"), `FUN_004ef470`, `FUN_005b5d30`, `FUN_005bd94b` — як вище.

### 1.6 Інтерфейс та дані
- `FUN_0043ada0` (tbsmall), `FUN_004411d0` ×3 → `DAT_0089c0b4/b8/bc` (tooltips: `gfx\interface\tt11_bmp`, `dialogue_act`), `FUN_004d6cc0` → `DAT_00a983fc`, `FUN_0042c9c0` (перевірка), `FUN_0078a150` — **`db\misc.txt`** ("Unknown Type: misc.txt"), `FUN_004d7400` ("Done!", `palette_act`, "%s boundbox.tbl"), `FUN_00413d60` ×4 (об'єкти), `FUN_006d3430` (0x84Б, курсори `cursor_active.bmp`/`cursor_inactive`) → `DAT_00d13360`, `FUN_005842f0/005843f0` → `DAT_00d13358/60`, `FUN_0065ed50`, **`FUN_0076f740`** (апгрейди/карта, див. п.6), `FUN_006ff200` — **frontend головного меню** (`gfx\interface\frontend\bg_frontend.bmp`, `bg_start`, `bg_tutorial`, `bg_valkyr...`).
- **Flow-об'єкт завантаження**: `FUN_006fe8b0` (0x36Б, рядок `config\famous_quotes.csv` — цитати на екранах завантаження) → `local_720`; перед ним `FUN_006feb60`, `local_720[6] = стан`; кожен етап: стан 10 → 0x28 (40) → 0x2a (42) → 0x2d (45) → 0x5f (95) → 0x62 (98), між ними `(**(code **)(*local_720 + 0x10))()` (крок flow) та (у debug) `FUN_0042b6c9`/`FUN_006fed70`. Після останнього — `(**(code **)*local_720)()` (знищення flow).

### 1.7 Вихід-помилки ініціалізації
`DAT_00dc4b60` (лічильник помилок) > 0 → `FUN_00429a50` (діалог "Critical error: %s", "Do you want to suppress error reporting?", "Do you still want to ...").

---

## 2. Головний цикл повідомлень (WinMain, рядки 1029–1183)

```
while (local_744 != 0) {                       // local_744 = 0 → вихід
  while (true) {
    PeekMessageA(&DAT_00dc2ca8, NULL,0,0,0);   // PM_NOREMOVE — чи є щось?
    if (не має повідомлень) break;
    if (GetMessageA(&DAT_00dc2ca8,...) == 0)   // WM_QUIT → вихід з циклу
      local_744 = 0;
    else { TranslateMessage; DispatchMessageA; }
  }
  // --- тіло одного кадру ---
  if (DAT_00bd14fc != 0) FUN_0057ccf0();       // очікування потоків звуку/завантаження
                                               //   (WaitForMultipleObjects на 2 хендлах, timeout 0 — поллінг)
  if (DAT_00bd1524 != 0) FUN_00583090();       // перевірка реініціалізації графіки (vtable+0x24)
  if (DAT_00dc4b5c == 0) {                     // прапорець "виходимо" (ставиться при quit)
    FUN_0040e500(); → FUN_0040e510() → *DAT_0088eb2c  // опитування вводу (клавіатура/миша)
    if (DAT_00d43159 == 0) {                   // НЕ в стані очікування
      if (перший кадр) {
        if (DAT_0087b63c != 0) {               // вікно активне (WM_ACTIVATEAPP)
          ... MP-лобі "WAITING FOR PLAYERS" (s_WAITING_FOR_PLAYERS, шрифт eurostilecond24bold.bmp,
              рядки "%s(%s)   -    %s %s", "MP_OK"/"MP_WAITING") ...
        }
        FUN_005830b0/005830c0; флаш логу (FUN_007a630a/FUN_007a6615/FUN_007a6429);
        знищення старих мережевих об'єктів;
        DAT_008e4320 = FUN_004b2160() (0x16Б, мережа);
        DAT_00893750 = FUN_0042e830() (0x122Б, ЯДРО ГРИ);
        FUN_0042e910()==0 → скидання мережевих об'єктів (помилка);
        FUN_006d37e0()  // інтерфейс (fullscreen.bmp, topbar_plate.bmp, sidebar_A.bmp, topbar.bmp)
      }
      FUN_007901b0();   // = ГОЛОВНИЙ ТІК ГРИ, один раз на кадр (див. п.5)
      перший кадр = зроблено;
    } else {
      Sleep(0xf);       // 15 мс — стан очікування (MP/pause)
      if (мережеві об'єкти відсутні) { FUN_007911ed(); скинути прапорець першого кадру; }
    }
  }
}
FUN_007ae467();  // закриття всіх лог-файлів (fclose через FUN_007a6429, DeleteCriticalSection)
uVar9 = DAT_00dc2cb0;  // код повернення (завжди 0 — ніде не встановлюється)
FUN_00411bb3();        // CoUninitialize
FUN_005349a0();        // "викликати віртуальний метод об'єкта з аргументом 1" (хелпер)
return uVar9;          // 0
```

**Частота тику**: цикл не містить жодного sleep/лімітера кадрів — після викачування черги повідомлень щоразу виконується один кадр (busy-loop, обмежений CPU/VSync прапорами DirectDraw). Єдиний явний Sleep(15 мс) — у стані очікування `DAT_00d43159 != 0`. Ігровий час усередині тіка регулюється самою грою (у циклі цього не видно).

## 3. WndProc — FUN_00794a03 @ 0x794a03 (3530 байт)

- **Миша**: WM_LBUTTONDOWN (0x201) / UP (0x202) / DBLCLK (0x203) / RBUTTONDOWN (0x204) / UP (0x205): створюють об'єкт події (0xc + 0x1e байт, ctor `FUN_0042d320`/`FUN_0042d6c0`/`FUN_0042d2d0`) з координатами, тип події (0x11/0xe/0x14/0x12/0xf), ставлять у чергу `FUN_00577f00`. WM_MOUSEWHEEL (0x20a): дельта = `(param_3>>16)/0x78`, об'єкт 0x1e байт → черга. Вхід при активному вводі (DAT_0088eb2c) ігнорується/скидається.
- **Клавіатура**: WM_KEYDOWN (0x100)/SYSKEYDOWN (0x104) → `FUN_00581490`; ремап цифр numpad (0x6b→'+', 0x6d→'-'); WM_CHAR (0x102) → `FUN_00581350`; WM_KEYUP (0x101)/SYSKEYUP (0x105): Esc при вводі → скидання вводу.
- **WM_ACTIVATEAPP (0x1c)**: `DAT_0087b63c = param_3` (ознака активності вікна; використовується головним циклом).
- **WM_DESTROY (2) та WM_QUIT (0x12)**: `FUN_0078f9ce()` (**повний teardown усіх глобальних об'єктів** — мережа DAT_00d12b40, ядро DAT_00893750, DAT_008e4320, звук DAT_00bd0e14 через FUN_00580040, input DAT_0088eb2c, інші) → `PostQuitMessage(0)` → `DAT_00dc4b5c = 1` (вимкнути кадрову роботу в циклі).
- **WM_MOVING (0x216)**: GetWindowRect + FUN_005841f0; WM_ERASEBKGND (0x14): return 0; 0x3b9: return 0 (кастомне повідомлення, призначення не визначене); все інше → DefWindowProcA.

## 4. Запуск відео (binkplay)

- Рядок (VA 0x87b914, off 0x47b914):
  `avi\binkplay.exe avi\publisher.bik avi\paradox.bik avi\game.bik /C /I2 /R /D508 /B2`
  і `avi\binkplay.exe` (VA 0x87b968) — окремий рядок для lpApplicationName.
- Використання — єдине місце, WinMain (рядки 586–601):
  `CreateProcessA(s_avi_binkplay_exe_0087b968 /*"avi\binkplay.exe"*/, s_...b914 /*повний рядок*/, NULL, NULL, TRUE /*bInheritHandles*/, 0, NULL, NULL, &si, &pi)`
  під умовою `(local_734 & 0xff) != 0` (відео увімкнено). Далі **синхронне очікування**: цикл `GetExitCodeProcess(hProcess)` поки код == 0x103 (STILL_ACTIVE), з `Sleep(2000)` між перевірками. Тобто гра блокується, поки binkplay не прокрутить усі три .bik (publisher → paradox → game) і не закриється.
- Поруч у .rdata: "avi played\n", "About to Initialize video!\r\n", "Failed to initialize video.\r\n", "Fatal error: Could not initialize Video!\n" — ці рядки не згадуються в декомпільованих .c (використовуються невідкомпільованими бібліотечними функціями відео-ініціалізації, ймовірно FUN_00579770).

## 5. Головний тік гри — FUN_007901b0 @ 0x7901b0 (4157 байт)

Один виклик на кадр з головного циклу. Захист від ре-ентрансу `DAT_00dc4b7c`. Тіло:
- pre-тік `FUN_00790195`, початок вводу `FUN_00581ab0`, обробка черги подій `FUN_00577f20`/`FUN_00577d20`, хук завантаження `FUN_005822e0(0)`.
- Якщо є "жива" анімація/флаг у DAT_00d0ca90+0x21e90 → `FUN_00654700`.
- Якщо ядро (DAT_00893750) існує:
  - `FUN_0042e9a0()` == 0 → перестворення відеорежиму (`FUN_00583ac0` з 1024x768/16bpp/чи fullscreen), скидання UI;
  - інакше — якщо "вихід з гри в меню": знищення списку ядер (кожне через vtable+0 → видалення), `FUN_004161c0`;
  - знищення/від'єднання мережевих об'єктів за потребою.
- **MP-оверлей лобі**: при наявності мережі — малює рядки гравців `"%s(%s)   -    %s %s"` зі статусами MP_OK/MP_WAITING (шрифт eurostilecond14bold.bmp), позиції через FUN_004af740/FUN_00413509.
- Кадр GUI: `FUN_00583f10` + `FUN_00406270` + вивід текстів (`FUN_004136a0`).
- **Автозбереження кожні 100 днів**: `iVar5 = day(DAT_00893530+0x20) - DAT_00dc4b80; if (100 < iVar5) { якщо гра не порожня (список гравців ≠ 0) → створити об'єкт збереження (0xc+0x12 байт, ctor FUN_0042d6c0 з ім'ям файлу), поставити в чергу через FUN_00582390/FUN_005661a0; DAT_00dc4b80 = day; }`.
- Перевірка мережі `FUN_0042e980` + `FUN_00582540` (синхронізація) — при розриві створюється оверлей "з'єднання втрачено" (0x844 байт, `FUN_006dfa00` → DAT_00d36194).
- `FUN_00565c30` (обробка черги подій), `FUN_00430110` — екран завантаження (`gfx\load_1024.bmp`, рядки "Loadimage!", "Loadimage used!") при активному ядрі.

## 6. Допоміжні цикли повідомлень

- **FUN_00791646 @ 0x791646** (71Б): один "pump": `PeekMessageA` (перевірка) → якщо є → `GetMessageA` → Translate+Dispatch. Викликається з ctor'ів `FUN_00426d20`/`FUN_00426f80` (клас 0x13e-байт файлових об'єктів) — дозволяє обробляти повідомлення під час довгих операцій.
- **FUN_0079580c @ 0x79580c** (103Б): цикл `while (*param_1 != 0) { pump один раз; *param_1 = FUN_0040e510(); }` — **викачує чергу, доки активний прапорець вводу** (очікування "клавіша натиснута/відпущена"); викликається з input-класу `FUN_0040e5f0`.
- **FUN_00753270 @ 0x753270** (360Б): `while (PeekMessage) { GetMessage+Translate+Dispatch }` — викачує ВСЮ чергу, потім: читає конфіг `*(param_1+0x88)+0x232`, `FUN_00582170` (перевірка); при невдачі — очищення лобі (`FUN_005820d0/00582270/005821e0`, знищення DAT_00bd1500) і вихід; при успіху — **TCP-з'єднання з "localhost"** (`FUN_006cd7d0(s_localhost_00874c60)`, `FUN_006cd7a0`), `*(param_1+0x84) = 7`, `FUN_006ff680(7, param_1)` (зміна стану на 7), `FUN_00750750`, vtable-виклики. Це обробник **підключення до локального/хостового MP-сервера (VNet)**.

## 7. Вихід з гри

- PostQuitMessage використовується рівно у 2 місцях:
  1. `FUN_00794a03` (WndProc): WM_DESTROY / WM_QUIT → `FUN_0078f9ce` (teardown) + `PostQuitMessage(0)` + `DAT_00dc4b5c = 1`;
  2. `FUN_0079156f` (меню Esc / діалог виходу): кожен кадр рахує `DAT_00dc4b84`; якщо `FUN_00581e70()` (дозвіл виходу) і лічильник > 0x14 (20), АБО лічильник > 400 → `FUN_0078f9ce` + `PostQuitMessage(0)` + `DAT_00dc4b5c = 1`.
- WM_QUIT забирає головний цикл: `GetMessageA == 0` → `local_744 = 0` → вихід з циклу → `FUN_007ae467` (закриття всіх відкритих лог-файлів: прохід по реєстру `DAT_00dc5c78`/`DAT_00dc6c80`, fclose через FUN_007a6429, DeleteCriticalSection для слотів > 0x13) → `CoUninitialize` → return 0.
- **Збереження на виході в цих шляхах НЕ виконується** — збереження робить ігрова логіка (меню/автозбереження кажді 100 днів у тіку, п.5). Рядки "scenarios\save games\temp.txt"/"gfx\skins\arg\temp.txt" (у .rdata) стосуються тимчасових файлів збережень і в WinMain-ланцюжку не використовуються.
- Файли логів, що відкриваються грою (з .rdata, поряд з "Netlog Mutex"): `savedebug.txt` ("wb"), `invasions.txt`, `history.txt` — пишуться через `FUN_00429a00` (savedebug.txt) та netlog (мутекс "Netlog Mutex" захищає).

## 8. Сусідні великі функції

- **FUN_0076f740 @ 0x76f740 (70 336 Б)** — викликається ОДИН раз із WinMain (після misc.txt/palette, до frontend; стан flow 0x5f). Рядки: "Upgrades to", "Build cost (IC:days)", "Upgrade cost (IC:days)", "Can be upgraded to %s (%.4f Cost:", "%s %d upgrades to %s %d", "Invalid upgrade model for %s %d", "Invalid upgrade path ...", "ERROR: Invalid upgrade model/upgrade path", "WARNING: No valid models found", "%d model(s) loaded 0 to %d", "ERROR: Incorrect number of provinces", "Lat %d (%10f) Lon %d (%10f)", "INFO: %s ui_list_priority is n...", "GetSystemTime", великі локальні масиви (140/204/222 int, 8КБ рядок). Висновок: **завантажувач/валідатор моделей юнітів та шляхів апгрейдів + перевірка карти (кількість провінцій, координати Lat/Lon) з масовим логуванням INFO/WARNING/ERROR**. Ніяких файлових рядків усередині немає — дані бере з уже завантажених глобальних структур.
- **FUN_00713790 @ 0x713790 (34 070 Б)** — `__thiscall(void*, int*, undefined4*, int)`, БЕЗ рядків. Викликається з FUN_00483ab0 (логіка провінцій: координати, FUN_0044df10 — ітерація провінцій), FUN_00486640, FUN_00711c60 (завантаження подій: "Adding Events for %s ... DONE", EVENT_SIMPLE/EVENT_SELECTION). Всередині — густа математика (x87 float10, floats), доступ через дрібні акцесори (FUN_0045fec0 = `lea eax,[ecx+4]; ret`, FUN_0070a4b0 = `fld [ecx+8]; ret`, FUN_00496e60 = `mov eax,[ecx+0xc]; ret`). Семантика за рядомками не визначається: **великий обчислювальний модуль стану гри (країни/провінції/події)**, використовується на етапах завантаження даних.
- **FUN_0071ebc0 @ 0x71ebc0 (29 515 Б)** — сигнатура і профіль викликів ПРАКТИЧНО ІДЕНТИЧНІ 00713790 (ті самі акцесори: FUN_0045fec0 ×189, FUN_0070a4b0 ×150, FUN_00496e60 ×124, FUN_00458280, FUN_00465c30, FUN_006902c0...), теж без рядків. Прямих викликів із жодного .c немає і адреса не зустрічається як дані → **викликається непрямо (vtable/pointer)**. Ймовірно, парний модуль до 00713790 (дві фази/два об'єкти однієї логіки); точну роль за декомпіляцією встановити не можна.
- **FUN_00702a00 @ 0x702a00 (29 534 Б)** — приймає `char*` (рядок команди). Використовує ~120 рядків `s_EE_*` — це **ключові слова ефектів подій** (EE_ADDCLAIM, EE_ADD_CORE_AREA, EE_CHANGE_COUNTRY_NAME, EE_REVOLT... / "A Not yet described Event Command"). Розбирає текст ефекту події на типові поля (цілі/рядки 256Б) і виконує відповідний ефект великим розгалуженням. Тобто: **диспетчер/виконавець ефектів подій парадокс-скрипта**. Викликається з FUN_0075a210 (модуль подій).
- **FUN_00782090 @ 0x782090 (24 205 Б)** — рядків майже немає: `"%d %s %s %s %s"` та "Naval". Викликається з FUN_00565d00 (обробка черги подій). Без додаткових рядків семантика не визначається: **велика функція обробки списків/повідомлень, пов'язана з морською тематикою ("Naval")**.

---

## Швидкі орієнтири (адреси → символи)

| VA | Роль |
|---|---|
| 0x791fe9 | WinMain |
| 0x78f7a5 | реєстрація класу вікна + CreateWindowExA |
| 0x794a03 | WndProc (миша/клавіатура/quit) |
| 0x7901b0 | головний тік гри (1/кадр) |
| 0x79156f | цикл меню Esc → PostQuitMessage |
| 0x78f9ce | teardown усіх систем при виході |
| 0x7ae467 | закриття лог-файлів |
| 0x791646 / 0x79580c / 0x753270 | pump-хелпери / очікування вводу / connect localhost |
| 0x6fe8b0 / 0x6ff200 | flow завантаження (famous_quotes) / frontend-меню |
| 0x76f740 / 0x713790 / 0x71ebc0 / 0x702a00 / 0x782090 | великі модулі (див. п.8) |