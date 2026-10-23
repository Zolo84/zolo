# Darkest Hour.exe — звукова та відео підсистеми (DirectSound / MCI / DirectShow / Bink)

Об'єкт: 32-бітний PE (MSVC6), движок Hearts of Iron 2 (Paradox). Розбір за декомпіляціями `/tmp/dh-decomp/` (імена `FUN_XXXX` = адреси), індексом `/tmp/dh-functions-index.txt` та рядками, знятими напряму з `.rdata/.data` (VA — це file_offset + 0x400000). Усе — за кодом; нічого не вигадано. Імпорти/рядки перевірено по бінарнику (`/home/andriy/Projects/darkest-hour/Darkest Hour.exe`).

Підсумкова схема:
- **WAV-ефекти** → DirectSound (імпорт `DSOUND.dll` ординал 1 = `DirectSoundCreate`), вторинні буфери, 34 зареєстрованих звуки.
- **MP3-музика** → DirectShow (`CLSID_FilterGraph`, `IGraphBuilder`/`IMediaControl`/`IBasicAudio`/`IMediaEvent(Ex)`), плейлисти `music\lobby.txt`/`war.txt`/`peace.txt`.
- **MIDI** → MCI (`winmm.dll`, `mciSendCommandA`), пристрій відкривається через `MCI_OPEN`.
- **Відео** → зовнішній `avi\binkplay.exe` через `CreateProcessA` (+ очікування завершення).

---

## 1. Ініціалізація звуку (рядки і порядок)

Рядки ініціалізації у бінарнику (у `.data`):
- `"INIT_SOUND"` — VA `0x0087bb4c` (ключ локалізації заголовка)
- `"Starting to Initialize sound!\n"` — VA `0x0087bb58`
- `"Sound fully initialized!\n"` — VA `0x0087be20`

Місця використання (xref у `.text`): `0x7938c7`, `0x7938f5`, `0x793d37` — усе в межах тіла **WinMain (`FUN_00791fe9` @ 0x791fe9, розмір 0x2a02, покриває 0x791fe9–0x7949eb)**. Машинний код:
- `0x7938c5`: `push 0x87bb4c; call FUN_0042b6c9` — локалізація ключа `INIT_SOUND` (FUN_0042b6c9 = пошук тексту за ключем, вона ж використовується для `ERROR_SOUND_NAME`).
- `0x7938f5`: `push 0x87bb58; call FUN_00429a00` — вивід `"Starting to Initialize sound!"` (FUN_00429a00 = лог/printf гри, 17 викликів у WinMain).
- `0x7939a7`: `mov cl,[0x00877222]; test ecx,ecx; jz +0x354` — якщо `DAT_00877222` (прапорець «звук увімкнено», з налаштувань) == 0 — **уся реєстрація WAV пропускається**.
- `0x7939b6 – 0x793cf1`: реєстрація WAV-файлів (див. §2).
- `0x793d32`: `call FUN_00582e00` — створення музичного менеджера (плейлисти, §3); одразу після — `0x793d37`:
- `push 0x87be20; call FUN_00429a00` — `"Sound fully initialized!"`. Далі (`0x793d95`) — `"Network initialized!"`.

Декомпіляція WinMain (00791fe9.c) показує той самий порядок: `FUN_00579770()` (MIDI-об'єкт, рядок 571) → `FUN_007411f0()` + binkplay (581–602) → `FUN_0057ffb0()` → об'єкт `DAT_00bd0e14` (725–732) → `FUN_0057e300()` → об'єкт `DAT_00bd0e18` (733–740) → реєстрація WAV під `if (DAT_00877222)` (741–874).

### 1.1 Конструктор звукового движка — `FUN_0057e300` @ 0x57e300 (vtable `PTR_FUN_007ead88`)

Створює великий об'єкт (**0x16414 байт**, глобальний `DAT_00bd0e18`):

```c
CoInitialize(NULL);
iVar2 = Ordinal_1(0, puVar8, 0);          // DSOUND.dll ординал 1 = DirectSoundCreate(NULL, &lpDS, NULL)
if (iVar2 != 0) FUN_0057f100("C:\Dev\HoI2 Projects\Darkest Hour\DirectSound.cpp", 0x1e, err);
iVar2 = (**(code**)(*(int*)*puVar8 + 0x18))(*puVar8, DAT_00dc4a58, 1);  // IDirectSound::SetCooperativeLevel(hwnd, DSSCL_NORMAL=1)
if (iVar2 != 0) FUN_0057f100("...\DirectSound.cpp", 0x23, err);
```

- `Ordinal_1` — єдиний імпорт `DSOUND.dll` (у IAT лише `0x80000001`); це `DirectSoundCreate`.
- `SetCooperativeLevel` викликається через **vtable+0x18** з hwnd (`DAT_00dc4a58`) і рівнем 1.
- Помилки — через `FUN_0057f100(файл, рядок, HRESULT)`; вихідник у рядку: `C:\Dev\HoI2 Projects\Darkest Hour\DirectSound.cpp` (VA `0x008572bc`). На цей рядок — **18 xref** у `.text` (0x57e372…0x57e7b0), тобто всі операції DirectSound логуються з нього.
- `FUN_0057f100` = мапер помилок DX: `"Error Reported in %s (%d)\n"` + switch по негативних HRESULT (`DirectDraw does not have enough memory!`, `The device is full!` тощо).
- Після створення об'єкт містить `IDirectSound*` за зсувом **+0xc**, 64 слоти буферів: `IDirectSoundBuffer*` на **+0x10 + i*4**, прапорці на **+0x210 + i*4**, стани на **+0x8018 + i*0x300**.

### 1.2 Налаштування звуку при старті — `FUN_0057ffb0` @ 0x57ffb0 (об'єкт 0xc6 байт, `DAT_00bd0e14`)

Конструктор конфігурації аудіо, дефолти: `*p = 1` (увімкнено), `+0x9c/0x9e = 1`, `+0xa0 = 0x2b11` (**11025 Гц**), `+0xa4 = 0x5622` (**22050 Гц**), `+0xa8 = 2` (канали), `+0xaa = 0x10` (**16 біт**), плюс `GetVersionExA`.

### 1.3 Прапорці з `settings.cfg` (WinMain, рядки 272–380):

| Прапорець | Зміст |
|---|---|
| `DAT_00877222` (дефолт 1) | «звук»: 0 → WAV не реєструються взагалі (рядок 365) |
| `DAT_00dc4b5e` (+`DAT_00dc4b5f`) | «звук» = 1/2 → SFX увімкнено на час гри |
| `DAT_00dc4b88` | «музика» = 0 → `DAT_00dc4b88 = 1` (музика вимкнена; перевіряється в `FUN_005830c0`) |
| біт 0 `local_734` | «відео/повноекран» = 0 → прапорець запуску binkplay скидається (рядок 350–352) |

У таблиці рядків є ключі локалізації: `OPTION_MUSICVOLUME` (VA `0x0086b76c`), `OPTION_SFXVOLUME` (VA `0x0086b780`).

---

## 2. WAV-ефекти: реєстрація та відтворення

### 2.1 Реєстрація (WinMain, 0x7939b6–0x793cf1)

Кожен звук реєструється «стовпець»-послідовністю (25 байт): `push flag; push &"sfx\wave\X.wav"; push id; mov eax,[0x00bd0e18]; mov edx,[eax]; mov ecx,[0x00bd0e18]; call [edx+4]` → виклик **методу vtable+4 = `FUN_0057ea80`** (у декомпіляції не експортована) з аргументами **(id, шлях, прапорець)**. Перший стовпець — `0x7939b6` (`CBA1.wav`, id 0, прапорець 1), останній — `0x793ce8` (`UUFB.wav`, id 0x21=33, прапорець 0 — єдиний з прапорцем 0).

**Усі 34 звуки `sfx\wave\*.wav`** (адреси рядків, id):

| id | Файл (VA рядка) | id | Файл (VA рядка) |
|---|---|---|---|
| 0 | CBA1.wav `0x0087bb78` | 17 | CSA1.wav `0x0087bccc` |
| 1 | CBA2.wav `0x0087bb8c` | 18 | CSA2.wav `0x0087bce0` |
| 2 | CBA3.wav `0x0087bba0` | 19 | GBME.wav `0x0087bcf4` |
| 3 | CGFB1.wav `0x0087bbb4` | 20 | GCMI.wav `0x0087bd08` |
| 4 | CGFB2.wav `0x0087bbc8` | 21 | GEC1.wav `0x0087bd1c` |
| 5 | CGFB3.wav `0x0087bbdc` | 22 | GFB1.wav `0x0087bd30` |
| 6 | CGFI1.wav `0x0087bbf0` | 23 | GMWO.wav `0x0087bd44` |
| 7 | CGFI2.wav `0x0087bc04` | 24 | GSB1.wav `0x0087bd58` |
| 8 | CGFI3.wav `0x0087bc18` | 25 | GVC1.wav `0x0087bd6c` |
| 9 | CGFP1.wav `0x0087bc2c` | 26 | UAFM1.wav `0x0087bd80` |
| 10 | CGFP2.wav `0x0087bc40` | 27 | UAFS1.wav `0x0087bd94` |
| 11 | CGFP3.wav `0x0087bc54` | 28 | UAM1.wav `0x0087bda8` |
| 12 | CGFT1.wav `0x0087bc68` | 29 | UAS1.wav `0x0087bdbc` |
| 13 | CGFT2.wav `0x0087bc7c` | 30 | UNM1.wav `0x0087bdd0` |
| 14 | CNB1.wav `0x0087bc90` | 31 | UNS1.wav `0x0087bde4` |
| 15 | CRI1.wav `0x0087bca4` | 32 | UTFR.wav `0x0087bdf8` |
| 16 | CRTA.wav `0x0087bcb8` | 33 | UUFB.wav `0x0087be0c` |

(У декомпіляції WinMain ці виклики виглядають як `pcStackY_48 = s_sfx_wave_CGFB2_wav_0087bbc8; uStackY_4c = 4; ... (**(code**)(*DAT_00bd0e18 + 4))();` — «магічні» супутні константи 0x793a19/0x793a32/0x793a4b… — це насправді адреси сусідніх стовпців-реєстраторів у тілі WinMain (крок 25 байт), а не окремі дані.)

Окремий файл `sfx\wave\gbme.wav` (VA `0x00874338`) йде не через цю реєстрацію — він читається функцією «розшифровки» `FUN_007411f0` (§6).

### 2.2 Відтворення і управління

- **`FUN_0057eca0`** («відтворити WAV-буфер»): будує `DSBUFFERDESC {dwSize=0x24, dwFlags=0x80e2}` = `DSBCAPS_GLOBALFOCUS(0x8000)|DSBCAPS_CTRLVOLUME(0x80)|DSBCAPS_CTRLPAN(0x40)|DSBCAPS_CTRLFREQUENCY(0x20)|DSBCAPS_STATIC(0x2)`; розмір і формат беруться з переданого PCM-даних; `IDirectSound::CreateSoundBuffer` через **vtable+0xc** на `IDirectSound*` зі зсуву +0xc об'єкта движка. Якщо движка немає — `MessageBoxA(NULL, "ERROR_SOUND_DESC", "ERROR_SOUND_NAME", 0x1000)` (ключі локалізації, VA `0x008572f0`/`0x00857304`, через `FUN_0042b6c9`).
- **`FUN_0057e850`** (vtable+0x2c): ітерація по 64 слотах; для слотів з прапорцем `+0x210+i*4` — усіх, інакше одного; якщо стан слота `+0x8018+i*0x300: int перед = 2` (грає) → `IDirectSoundBuffer::Play` через **vtable+0x30** з останнім аргументом 0/1 = `DSBPLAY_LOOPING`; помилки → `FUN_0057f100(DirectSound.cpp, 0xd8/0xe3)`.
- **`FUN_0057ea00`** (vtable+0x3c): гучність слота: клампить у [-10000..10000], `SetVolume` через **vtable+0x3c** буфера (або всіх 64, якщо прапорець `+0x210+id*4`).
- **Виклик «грати звук за id»** — `(*DAT_00bd0e18 + 0x20)` → `FUN_00580 800` (не експортована). Варіативні обгортки:
  - vtable+0x24 (`FUN_00580820`) — випадковий 1 із 2 id;
  - vtable+0x28 (`FUN_00580860`) — 1 із 3 id;
  - vtable+0x2c (`FUN_005808b0`) — 1 із 4 id.
  Саме тому звуки згруповані варіантами: **CGFB1/2/3, CGFI1/2/3, CGFP1/2/3, CGFT1/2, CSA1/2** — «сімейства» з декількома рандомними варіантами одного й того ж ефекту.

### 2.3 Хто і коли грає (контексти з коду)

| id | Файл | Модуль-викликач |
|---|---|---|
| 0x17 (23) | GMWO.wav | `FUN_00644fc0`–`FUN_00646cf0` — створення вікон-повідомлень (текстові повідомлення з кольорами через `FUN_006446b0(0x16,…,0xf0,8)`, пошук провінції `FUN_00428ee0`) |
| 0x19 (25) | GVC1.wav | `FUN_00433990` — обробник подій юнітів (case 0x11/0x14/0x16); також грає **індивідуальний звук юніта** `param_1[0x26]` (id, заданий типом юніта), якщо він ≥ 0 |
| 0x15 (21) | GEC1.wav | `FUN_00653050` — багаторазово (події/рішення, великий модуль) |
| 0x1c (28) | UAM1.wav | `FUN_005e54c0` — бойовий модуль, гілка «армія» (перевірка методу 0x28 юніта) |
| 0x1a (26) | UAFM1.wav | той самий модуль, гілка «авіація» (метод 0x30) |
| 0x1e (30) | UNM1.wav | той самий модуль, гілка «флот» (інакше) |

**Розшифровка абревіатур** — [інтерпретація за структурою імен/контекстом, в оригіналі описових рядків немає]: `C*` — «канонада/бій» (CGFB — cannon gun fire battle, CGFI — …impact, CGFP/CGFT — …; CBA — повітряна/бомбардувальна серія; CNB — naval bombardment; CRTA — rocket attack), `G*` — глобальні/UI звуки (GMWO — вікно повідомлення; GEC1 — подія; GVC1 — подія юніта/перемога), `U*` = Unit…, пари `UAFM1/UAFS1`, `UAM1/UAS1`, `UNM1/UNS1` — «юніт [авіація/армія/флот] M/S», ймовірно **M=miss / S=success** (M-варіанти реально граються в бойовому модулі). Точну семантику по кожному id код не розкриває.

---

## 3. MP3-музика (DirectShow)

### 3.1 Плейлисти

Музичний менеджер — об'єкт **0x7e байт** (`DAT_00bd1524`), конструктори:
- `FUN_00582f10` (або `FUN_00582e00` з `operator_new(0x7e)` + збереження у `DAT_00bd1524`; `FUN_00582e00` створюється одразу перед `"Sound fully initialized!"`). Всередині: `FUN_007a8800(…, 0x12, 5, FUN_005835f0, FUN_00583610)` — вектор плейлистів; потім **три плейлисти**:
  - `FUN_00583250(0, "lobby.txt")` (VA `0x008576f4`)
  - `FUN_00583250(1, "war.txt")` (VA `0x008576ec`)
  - `FUN_00583250(2, "peace.txt")` (VA `0x008576e0`)
- `FUN_00583250(playlist, filename)` — читає файл-плейлист (`FUN_007a6615` = fopen, режим `"rb"`), кожен рядок — назва mp3:
  - шлях будується як `"%s\%s.mp3"` (VA `0x00857728`, перший каталог — глобал `DAT_00dc1a70`, це музичний каталог гри), а якщо задано додатковий каталог `DAT_00dc3a00` — `"%s\%s\%s.mp3"` (VA `0x00857734`);
  - якщо файл не знайдено: `FUN_00429a00("MUSIC: %s\%s.mp3 cannot be found! (%s)\n", DAT_00dc1a70, name, param_3)` (рядок `0x00857700`); інакше вузол `{FUN_007a8d6d(ім'я), файл, next}` додається до зв'язаного списку плейлиста (голова +4, кількість +0xc у кожному плейлисті, плейлисти — через +0x20+i*0x12).

### 3.2 Вибір наступного треку — `FUN_005830c0`

Пропускається, якщо `DAT_00dc4b88 == 1` (музика вимкнена). Вибір плейлиста:
- у лобі (`DAT_00d0ca90 == 0`) → плейлист 0; у грі: `2 - (FUN_0044beb0()!=0 ? 1 : 0)` → **війна (war.txt) або мир (peace.txt)**; за умови про стан країни через vtable-метод об'єкта на `param_1+0x56` — плейлист 3 (не зареєстрований у конструкторі; у кодовій таблиці його немає — на практиці вибір залишається 0–2);
- випадковий трек: `_rand() % кількість`, обхід списку; прапорець `DAT_008576dc` — «зразу перший трек» (встановлюється при зміні стану гри);
- відкриває файл треку `"rb"` (перевірка існування) і викликає: `(*player+4)(трек, 1)` = Play, `(*player+8)(0)` = Stop-попереднього, `(*player+0x14)(гучність)`, де гучність = `(умовна_величина_DAT_00d12b40+0x376 - 100) * 0x14`, мінімум `-10000` (DSBVOLUME_MIN).

### 3.3 Відтворення через DirectShow — `FUN_00580c80` (базовий клас плеєра, vtable `PTR_FUN_007eae1c`)

```c
CoCreateInstance(&DAT_007fd5d0, NULL, 3 /*CLSCTX_INPROC_SERVER*/, &DAT_007fbd90, &p);
(*p->lpVtbl[0])(p, &DAT_007fc4f0, this+3);   // QueryInterface
(*p->lpVtbl[0])(p, &DAT_007fbe60, this+4);
(*p->lpVtbl[0])(p, &DAT_007fc4b0, this+5);
(*p->lpVtbl[0])(p, &DAT_007fc4d0, this+6);
```

GUID з `.rdata` (зберігання в об'єкті: `param_1` — масив undefined4, місця запису в дужках):
- `0x7fd5d0` = **CLSID_FilterGraph** `{E436EBB3-524F-11CE-9F53-0020AF0BA770}`
- `0x7fbd90` = **IID_IGraphBuilder** `{56A868A9-0AD4-11CE-B03A-0020AF0BA770}` (+8, `param_1+2`)
- `0x7fc4f0` = **IID_IMediaControl** `{56A868B1-0AD4-11CE-B03A-0020AF0BA770}` (+0xc, `param_1+3`)
- `0x7fbe60` = **IID_IBasicAudio** `{36B73880-C2C8-11CF-8B46-00805F6CEF60}` (+0x10, `param_1+4`)
- `0x7fc4b0` = **IID_IMediaEvent** `{56A868B3-0AD4-11CE-B03A-0020AF0BA770}` (+0x14, `param_1+5`)
- `0x7fc4d0` = **IID_IMediaEventEx** `{56A868C0-0AD4-11CE-B03A-0020AF0BA770}` (+0x18, `param_1+6`)

Тобто **MP3 грається стандартним DirectShow-графом** (RenderFile + IMediaControl::Run; гучність — IBasicAudio::put_Volume). Методи плеєра (vtable `007eae1c`: `0x580d20`, `0x580f00`=Play, `0x580ff0`=Stop, `0x581040`, `0x5810a0`, `0x5810d0`=SetVolume, `0x5810f0`, `0x581110`), а обгортка-музичний менеджер — vtable `007eaf14` (`0x582fc0`, `0x580f00`, `0x580ff0`, …, `0x5810d0`, …). `FUN_00580ff0` (Stop): якщо стан потоку 1/2 → викликає vtable+0x1c внутрішнього потоку, при `param_2!=0` чекає готовності через vtable+0x24.

Знищення: у `FUN_0078f9ce` (глобальне завершення) викликаються `FUN_00582ef0()` (музика), `FUN_00580040()` (налаштування `DAT_00bd0e14`), деструктор `DAT_00bd0e18` через `(*(vtable))(1)`; на початку об'єкта був `CoInitialize`, у `FUN_0078f9ce` — `CoUninitialize`.

---

## 4. MIDI через MCI (winmm)

Клас MIDI-програвача — область 0x5797a0–0x579b30 + `FUN_00579b30`/`FUN_00579cc0`/`FUN_00579e30`; об'єкт створюється з WinMain (`FUN_00579770`, рядок 571). Поля об'єкта: `+4` прапорець увімкнено, `+5` «грає зараз», `+6` кількість треків, `+8+i*2` тривалість треку (у 1/1000 с × 1000), `+0xd0/+0x198/+0x260` — per-трекова інформація позицій (для MCI_PLAY FROM/TO), `+0x328/+0x32a` поточний/минулий трек, `+0x32c` час останнього старту (timeGetTime), `+0x330`.

- **Відкриття пристрою** (адреси 0x5797e6–0x579800, не експортовано окремою функцією):
  `push &parms; push 0x3000; push 0x803 (MCI_OPEN); push 0; call [mciSendCommandA]` — прапорці **0x3000 = MCI_OPEN_TYPE_ID(0x1000)|MCI_OPEN_TYPE(0x2000)**; при успіху далі `mciSendCommandA(dev, MCI_SET=0x80d, 0x400 (MCI_SET_TIME_FORMAT), parms {dwTimeFormat=0x0a, dwCallback=hwnd&0xffff})`.
  Ідентифікатор пристрою зберігається в глобалі **`DAT_00bd00fc`** (21 звернення у `.text`, усе в цьому класі).
- **`FUN_00579b30` (@ 0x579b30) — грати трек**:
  ```c
  if (obj+4 == 0 && 0 < track <= obj+6) {
      local_c = DAT_00dc4a58 & 0xffff;                    // dwCallback = hwnd
      local_4 = packed(FROM/TO з таблиць +0xd0/+0x198/+0x260, track);
      mciSendCommandA(DAT_00bd00fc, 0x806 /*MCI_PLAY*/, 0xd /*MCI_NOTIFY|MCI_FROM|MCI_TO*/, &local_c);
      obj+0x32c = timeGetTime(); obj+0x330 = 0; obj+5 = 0; obj+0x328 = track; obj+0x32a = track;
  }
  ```
- **`FUN_00579cc0`** — випадковий трек: `_rand() % count + 1` → `FUN_00579b30(track)`.
- **`FUN_00579e30`** — «тикер» тривалості: якщо не грає (`obj+5==0`) і `timeGetTime()-obj+0x32c < трек[+8+i*2]*1000` — трек ще вважається активним.

Імпорти `winmm.dll` у бінарнику: за іменем — `mciSendCommandA` (VA імені `0x42b4f2`), `timeGetTime` (`0x42b506`), `timeBeginPeriod` (`0x42b4c0`), `timeSetEvent`, `timeKillEvent`, `timeGetDevCaps`; решта winmm-імпортів — ординалами. Рядків типу `".mid"`/`"sequencer"` у бінарнику **немає** — файли MIDI в грі не згадуються явно; дані треків, схоже, вбудовані/«розпаковуються» (див. §6: `music\tmp.dat`). **[деталі завантаження треків не підтверджено — функції не експортовані].**

---

## 5. Відео Bink (зовнішній програвач)

Рядки:
- `"avi\binkplay.exe"` — VA `0x0087b968`
- `"avi\binkplay.exe avi\publisher.bik avi\paradox.bik avi\game.bik /C /I2 /R /D508 /B2"` — VA `0x0087b914`

У **WinMain** (декомп. рядки 581–602; код на 0x7931bd):

```c
FUN_007411f0();                                   // перевірка/«розшифровка» ресурсів (див. §6)
if ((local_734 & 0xff) != 0) {                    // прапорець «показувати відео» (з settings.cfg)
    _memset(&local_e48, 0, 0x44); local_e48.cb = 0x44;
    _memset(&local_e00, 0, 0x10);
    CreateProcessA(s_avi_binkplay_exe_0087b968,
                   s_avi_binkplay_exe_avi_publisher_b_0087b914,  // "avi\binkplay.exe avi\publisher.bik avi\paradox.bik avi\game.bik /C /I2 /R /D508 /B2"
                   NULL, NULL, 1 /*bInheritHandles*/, 0, NULL, NULL, &local_e48, &local_e00);
    local_e04 = 0;
    while (local_e04 == 0) {
        GetExitCodeProcess(local_e00.hProcess, &local_e4c);
        if (GetExitCodeProcess == 0 || local_e4c != 0x103 /*STILL_ACTIVE*/) local_e04 = 1;
        if (local_e04 == 0) Sleep(2000);
    }
}
```

Тобто: запускається зовнішній `avi\binkplay.exe` (Bink-програвач) з трьома відеофайлами **publisher.bik → paradox.bik → game.bik** і параметрами `/C /I2 /R /D508 /B2`, а WinMain **блокується (Sleep 2000 мс) до виходу процесу** — це вступні ролики гри. Файли `.bik` не відтворюються всередині процесу (імпорту Bink API немає; `CreateProcessA` тут єдиний).

## 6. `FUN_007411f0` — «розшифровка» ресурсів (суміжне)

`FUN_007411f0(param)` — завантаження/дешифрування захищених ресурсів (викликається з WinMain перед binkplay; імовірно, це частина саморозпаковки гри):
- case 1: читає `map\incognita.tbl` (VA `0x0087434c`), **`sfx\wave\gbme.wav`** (VA `0x00874338`), `gfx\interface\cover65.bmp` (VA `0x0087431c`)
- case 2: `music\tmp.dat` (VA `0x0087430c`) через `FUN_007410d0(path, 0x1975400)`
- case 3: `avi\paradox.avi` (VA `0x008742fc`)
- case 4: `accessories\win95\ws2setup.exe` (VA `0x008742dc`)

Алгоритм: пам'ять 0x200 байт, байт зсувається відніманням таблиці `DAT_008742a8[цикл по 8]`, контрольна сума = сума всіх байтів порівнюється з першим байтом файлу; при неспівпадінні — `FUN_007a64d3(0)` (аварійне завершення). Поруч у таблиці рядків: `"2setup.exe"`, `"Could not find a usable WinSock DLL with version <= 2.2"`.

---

## 7. Підсумок по файлах декомпіляції

| Файл | Роль |
|---|---|
| `00791fe9` (WinMain) | ініціалізація (INIT_SOUND→реєстрація 34 WAV→музичний менеджер→"Sound fully initialized!"), binkplay |
| `0057e300` | DirectSoundCreate + SetCooperativeLevel (движок 0x16414, `DAT_00bd0e18`) |
| `0057ffb0` | конфіг аудіо (частоти 11025/22050, 16 біт) |
| `0057eca0` | створення DS-буфера (0x80e2) і відтворення |
| `0057e850`, `0057ea00` | Play/loop по 64 слотах, SetVolume |
| `00580820/60/b0` | рандомні варіанти звуку (з 2/3/4 id) |
| `00582e00/82f10` | музичний менеджер (плейлисти lobby/war/peace) |
| `00583250` | додавання mp3-треку ("MUSIC: %s\%s.mp3 cannot be found!") |
| `005830c0` | наступний трек (випадковий, війна/мир/лобі, гучність) |
| `00580c80` | DirectShow-граф (CLSID_FilterGraph + 5 IID) |
| `00580ff0` | Stop потоку |
| `00579b30`, `00579cc0`, `00579e30` | MIDI: MCI_PLAY, випадковий трек, тикер |
| `0057f100` | лог помилок DX ("Error Reported in %s (%d)") |
| `007411f0` | дешифрування ресурсів (gbme.wav, tmp.dat, paradox.avi…) |
| `0078f9ce` | завершення: знищення всіх аудіо-об'єктів, CoUninitialize |

---

## 8. ПОПРАВКИ (за результатами RE-xor-midi.md)

1. **`FUN_007411f0` — не дешифрування, а мертва CD-перевірка**: єдиний виклик іде з WinMain `0x793152` з параметром **0** (`mov [ebp-0x72c],0; push; call`), усі case 1–4 недосяжні. Алгоритм — 32-байтовий підпис (permutation `P@0x874228` + **віднімання** ключа `K@0x8742a8` + контрольна сума `Σ F[P[i]] ≡ F[0]`), не XOR і не повноцінне шифрування файлів. У Steam-інсталяції `tmp.dat`/`paradox.avi`/`incognita.tbl`/`cover65.bmp` відсутні, `GBME.wav` — звичайний WAV без підпису; жоден з 46 082 файлів гри не несе підпису. Див. `re/RE-xor-midi.md`, скрипт `/tmp/dh-xor.py`.
2. **«MIDI» через MCI — насправді CD Audio**: `MCI_OPEN` з `lpstrDeviceType=0x204` = **`MCI_DEVTYPE_CD_AUDIO`** (sequencer був би 0x20B), без елемент-файла; гра опитує `MCI_STATUS NUMBER_OF_TRACKS`/`LENGTH` і грає доріжки через `MCI_PLAY FROM=TMSF(track,…)`. Дані MIDI гра нізвідки не завантажує (немає `.mid`/`MThd`/temp-файлів) — музика = аудіо-дорожки CD у приводі; без CD пристрій не відкривається і музика мовчить. `FUN_00579770` = лише пошук CD-ROM-привода (літери `C..T`), не конструктор MIDI-об'єкта.