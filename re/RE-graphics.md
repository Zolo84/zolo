# Darkest Hour.exe — графічна підсистема (DirectDraw)

Об'єкт: 32-бітний PE (MSVC6), спадок движка Hearts of Iron 2 / Europa Universalis 2.
Джерело: декомпіляції у `/tmp/dh-decomp/` (імена `FUN_XXXX` = адреси). Усі твердження — за прочитаним кодом; там, де інтерпретація неоднозначна або дані відсутні, це позначено **[не підтверджено]**.

---

## 1. Архітектура DirectDraw: створення об'єктів

Гра використовує класичний DirectDraw 7-ера API, але з **нестандартними зміщеннями vtable** (див. зауваження нижче). Головний об'єкт — «графічний движок» розміром **0x534 байт** (vtable `PTR_FUN_007ead7c`):

| Зсув | Призначення |
|---|---|
| `+0x10` | прапорець повноекранного режиму (0 = віконний) |
| `+0x12` | HWND (активне вікно) |
| `+0x16` | IDirectDraw (з `DirectDrawCreate`) |
| `+0x1a` | IDirectDraw2 (з `QueryInterface`) |
| `+0x1e` | «фронт»-поверхня: у віконному режимі = primary, у повноекранному = backbuffer |
| `+0x22` | primary-поверхня (повноекранний режим) |
| `+0x26`/`+0x92` | DDSURFACEDESC-подібні структури (dwSize=0x6C) |
| `+0x502` | результат GetPixelFormat (для primary) |
| `+0x52a/0x52e` | колбек і буфер опису для EnumDisplayModes |
| `+0x532` | прапорець готовності кадру |

### Ланцюг ініціалізації (адреси/функції)

1. **`FUN_00583a30`** — створює об'єкт 0x534 байт через `operator_new(0x534)` і конструктор **`FUN_00579ed0`** (vtable `007ead7c`, `+0x1e = 0`); зберігає в `DAT_00bd1bb4`, потім викликає `FUN_0057a470()`.
2. **`FUN_0057a470`** — ініціалізація DirectDraw:
   - `DirectDrawCreate(NULL, ...)` у циклі **до 20 спроб**, поки не поверне 0 (DD_OK); при невдачі: `"Failed to create DirectDraw object"` + `FUN_0057f100(путь_до_вихідника, рядок, код)`.
   - `QueryInterface(&IID@DAT_007fce60, &obj+0x1a)` — отримання IDirectDraw2/подібного інтерфейсу (помилка `"Failed to create DirectDraw2 object"`).
   - `SetCooperativeLevel` через vtable (**зміщення +0x50**) з HWND активного вікна та прапором `8` (DDSCL_NORMAL) — тобто стартовий режим **віконний** (помилка `"Failed to set cooperative level"`).
   - `EnumDisplayModes` (vtable +0x20, 5 аргументів: flags, desc, контекст, колбек) — двічі: перший виклик із тимчасовим контекстом, другий — з новим описом (0x6C байт) та колбеком `LAB_00579f20`.
   - Лог `"DirectDraw object created"`.
3. **`FUN_0057a850`** — створення primary-поверхні:
   - **Віконний режим** (`obj+0x10 == 0`): одна поверхня з caps `0x200` = DDSCAPS_PRIMARYSURFACE → у `obj+0x1e`.
   - **Повноекранний**: desc з `dwFlags = 0x21` (CAPS|BACKBUFFERCOUNT), `dwBackBufferCount = 1`, caps `0x218` = PRIMARYSURFACE|FLIP|COMPLEX (фліп-ланцюг) → primary у `obj+0x22`; потім `GetAttachedSurface` (vtable поверхні +0x30, caps `0x14`) → **backbuffer у `obj+0x1e`**; обидва створюються через CreateSurface (vtable DD-об'єкта +0x18) з помилками `"Failed to create primary surface"` / `"Failed to create attached surface"`.
   - `GetPixelFormat` (vtable поверхні +0x54, до 10 спроб) → `obj+0x502` (`0x20` = прапорець піксель-формату [не підтверджено: точне значення]).
   - Lock-тест primary (vtable +0x64) з ретраєм на `0x887601C2` (DDERR_SURFACEBUSY) та повідомленнями `"Primary surface created"`; помилки INVALIDOBJECT/INVALIDARG/OUTOFMEMORY → `FUN_0057f100(файл, 0x76, код)`.
4. **`FUN_0057a6b0(mode)`** — перемикання режиму співпраці:
   - `mode==0` (віконний): `SetCooperativeLevel(hwnd, 0xC)` = DDSCL_NORMAL(8)|DDSCL_ALLOWREBOOT(4).
   - `mode!=0` (повноекранний): `SetCooperativeLevel(hwnd, 0x13)` = DDSCL_FULLSCREEN(1)|DDSCL_ALLOWREBOOT(2)|DDSCL_EXCLUSIVE(0x10).
   - До 20 спроб; помилка `"Failed to SetCooperativeLevel"`; записує `obj+0x10 = mode`.
5. **`FUN_0057a760`** — установка відеорежиму: спершу `FUN_0057a6b0(fullscreen)`; звільняє старі поверхні (`Release` через vtable +8, лог `"FrontSurface released (ERROR: %d)"`); якщо повноекранно — `SetDisplayMode(w, h, bpp, 0, 0)` через vtable (+0x54, до 20 спроб, помилка `"Failed to set video mode"`); потім перестворює primary через `FUN_0057a850`; зберігає w/h/bpp в `obj+4/+8/+0xc`.
6. **`FUN_00583750`** — ініціалізація графічної системи (vtable `007eaf3c`):
   - `DAT_00bd1bb8 = FUN_00583a30()` — створення движка.
   - `DAT_00bd1528 = LoadPalette("palette.act")` — **глобальна палітра** (її кладуть усі CImageBase у конструкторі, поле `+0x242`).
   - `DAT_00bd152c = FUN_0057a5d0()` — **кількість відеорежимів** через EnumDisplayModes (колбек `LAB_00579fb0`, контекст-лічильник).
   - `DAT_00bd1ba4 = new (count*12)` + `FUN_0057a600(...)` — EnumDisplayModes із колбеком `LAB_00579f60` — **список режимів по 12 байт** (w/h/bpp), сортується `qsort`-ом із компаратором `LAB_00583980`.

### Віконний клас-стаб
`FUN_0078f7a5` — реєструє `"StubDirectDrawWndClass"`; у повноекранному режимі створює вікно на весь екран (`GetSystemMetrics`), ховає курсор; помилка → `"Error Creating Window!"` (заголовок `"Europa Universalis"`).

### ⚠ Зауваження про vtable
У коді зміщення методів DirectDraw-об'єкта: `CreateSurface=+0x18` (збігається зі стандартом), а от `EnumDisplayModes=+0x20`, `SetCooperativeLevel=+0x50`, `SetDisplayMode=+0x54` — **не збігаються** зі стандартними ddraw.h (там 0x40/0x30/0x3C). Семантика підтверджена текстовими повідомленнями про помилки («Failed to set cooperative level», «Failed to set video mode», «Failed to create DirectDraw2 object»). Висновок: гра зібрана проти **модифікованих заголовків DirectDraw** або через обгортку; точна розкладка не відновлена **[не підтверджено]**.

Для поверхонь зміщення переважно стандартні: `BltFast=+0x1C`, `Flip=+0x2C`, `GetAttachedSurface=+0x30`, `GetPixelFormat=+0x54`, `GetSurfaceDesc=+0x58`, `Lock=+0x64`, `Release=+8`; але `Unlock=+0x80` (стандартно 0x68) — те саме пояснення.

---

## 2. Клас CImageBase

Клас (vtable `PTR_FUN_007e3360`); назва відома з рядка помилки `"CImageBase FAILED to created surface: %s"` (y `FUN_00405310`) та `"CImageBase FAILED to created sized image at %s"` (у `FUN_00405680`).

### Конструктори
| Функція | Призначення |
|---|---|
| `FUN_00405270` | порожній конструктор: поверхня = 0, обнулення полів |
| `FUN_00405310(name, режим, прапорець)` | «VideoImage» з файлу: режим 0 — спроба `FUN_00405c40(name)` а потім `FUN_00405df0(name)`; при невдачі — повтор із запасним іменем `DAT_0082c3f4` **[не підтверджено, що за файл]**; якщо й воно не вдалось — `"VideoImage could not be allocated"`. Режим 1 — тільки `FUN_00405df0`; режим 2 — без поверхні (тип `param_1[0x8e]=2`). При невдачі: `FUN_007a630a(буфер, "CImageBase FAILED to created surface: %s", name)` → лог, і в `+0xe` копіюється запасне ім'я |
| `FUN_00405680(w, h, bpp?, тип)` | «sized image»: створення чистої поверхні w×h; тип 0 — caps `0x40` (OWNDC-подібний), тип 1 — caps `0x840` (SYSTEMMEMORY|OWNDC; для bpp==8 ширина ділиться навпіл), тип 6 — ще один варіант, тип 2 — без поверхні; після створення — Lock (`+0x64`) із ретраєм на DDERR_SURFACEBUSY, обнулення всіх пікселів, Unlock (`+0x80`); тип зберігається в `param_1[0x8e]`, stride — у `param_1[6]` |
| `FUN_00405ae0` | деструктор: Release поверхні, або звільнення кадрів анімації (`param_1[0xd]`) |

### Поля
`+0x2c` = IDirectDrawSurface; `[1]`=ширина, `[2]`=висота; `[3]`=байт/піксель, `[4]`=bpp, `[6]`=stride (pitch); `+0x10`=bpp; `+0x238`=тип/режим поверхні; `+0x23e`=режим конверсії 8→16 біт (0..4); `+0x242`=палітра (за замовч. `DAT_00bd1528`), `+0x24e`=палітра для картяних тайлів; `+0x252`=прапорець «є ключовий колір»; `+0x34`=анімація; `+0x246/+0x24a`=зсуви (для обгортання карти).

### Методи (vtable +8 / +0xC)
- **Lock/Unlock-обгортки**: `FUN_0057adc0(surface)` — Lock (`+0x64`, аргументи: NULL, desc, `0x21`, 0), ретрай, поки `0x887601C2` (DDERR_SURFACEBUSY), у циклі викликає no-arg метод `+0x6C` (ймовірно «поступитися процесором» **[не підтверджено]**); помилка → `"Surface lock failed"`. `FUN_0057ae50(surface)` — Unlock (`+0x80`, аргумент 0); помилка → `"Surface unlock failed"`. Копіювальні функції беруть вказівник на дані через vtable класу `+8` і знімають через `+0xC`.

### Завантаження BMP
- `FUN_00405c40(name)` — читає BMP (`FUN_0040f470`: перевірка сигнатури 'BM', BITMAPINFOHEADER, ширина/висота/bpp, обчислення stride; `FUN_0040eb60` — конвертація пікселів файлу у поверхню), створює поверхню під розмір файлу (caps 0x40) через `FUN_00579fd0`, Lock → копія → Unlock; поверхня в `+0x2c`.
- `FUN_00405df0(name)` — варіант для палітрових/16-бітних: створення системної поверхні (caps `0x840`), `GetSurfaceDesc` (stride), для 2 байт/піксель — **сканування даних у пошуках «магічного» кольору `0x7E0`** (або `0x3E0`, якщо `DAT_00857744==1`), результат — прапорець `+0x252` (наявність ключового кольору); непідтримувана глибина → `"ERROR: Unsupported image bit count %d"` (лічильник `DAT_00dc4b60`).
- Обгортка CreateSurface: **`FUN_00579fd0(desc)`** — метод движка: якщо caps мають біт `0x40` (OWNDC-подібний) і не `0x800` — спершу спроба з `0x4000` (DDSCAPS_VIDEOMEMORY), при невдачі — відкат на `0x800` (SYSTEMMEMORY); веде лічильники витраченої пам'яті (`obj+0x522` sysmem, `+0x526` videomem); помилки → `FUN_0057f100(файл, рядок, код)`.
- `FUN_0082c3f4`-подібні рядкові константи — **[не підтверджено]** (дані не в декомпіляції).

### Бліт (головний диспетчер) — `FUN_00406300(src, ...)`
10 аргументів: джерело (`this`), координати, розмір, прямокутник, призначення (`param_9` — зазвичай екранний образ `DAT_00bd1bac`), кліп (`param_10`). Логіка:
- відсікання прямокутників `FUN_004061a0`; «обгортання» координат по ширині/висоті зі зсувами `+0x246/+0x24a` (карта зациклюється по X);
- анімація (`+0x34` → `FUN_00409150`);
- **призначення типу 0/2** → апаратний `BltFast` (vtable поверхні +0x1C): `(dest, x, y, srcSurface, &srcRect, 0x11)` — `0x11` = DDBLTFAST_WAIT|DDBLTFAST_SRCCOLORKEY — бліт із прозорістю за ключовим кольором;
- **призначення типу 1** (8-бітні): програмні копії: 8→8 `FUN_00406960`, 16→16 `FUN_00406a30`, 8→16 за режимом `+0x23e` (0..4) — `FUN_00406c00/00406eb0/00407180/00407450/00407720` (п'ять варіантів перетворення палітри/формату);
- **тип 6** (системна пам'ять): Lock (`FUN_0057adc0`) → програмна копія 16-біт → Unlock (`FUN_0057ae50`);
- **тип 3** → `FUN_004079f0` (масштабування **[не підтверджено]**).

**`FUN_00406a30`** — програмний 16-бітний бліт із прозорістю: пікселі, що дорівнюють глобальному `DAT_0088cee8` (ключовий колір), пропускаються; швидкий шлях (4 пікселі за ітерацію, копія dword-ами), коли ключового кольору немає (`+0x252==0`) і режим зсуву 0; інакше — попіксельно з перевіркою прозорості.

---

## 3. Палітри

### Клас CPalette
0x110A байт, vtable `PTR_LAB_007e3620`; **палітра = 256 × PALETTEENTRY-подібних записів (4 байти) на зсуві +0x104** (пам'ять 0x110A = 4 + 2 + 256*4 + службові поля, зокрема +0x504 — другий набір, див. стрілки карти). Конструктор `FUN_00413720(name)`, завантаження вмісту `FUN_004137c0`.

### Джерела палітр
- **`FUN_004137c0(name)`** — будує шлях `"gfx\palette\%s"` (`s_gfx_palette__s_0082f1e4`) або `"gfx\palette\%s.bmp"`; розбирає розширення; завантаження файлу виконує `FUN_004138b0` (читає BMP-палітру через `FUN_0040f340` у `+0x104`; помилка → `"Palette %s not found"`; **міняє місцями R і B** у кожному записі — конвертація BGR→RGB для DirectDraw).
- **Кеш/дерево імен**: `FUN_00413d60(name)` — «LoadPalette»: хеш-пошук (`FUN_004148b0`); якщо немає — створює CPalette і вставляє в відсортоване дерево (`FUN_004147f0`, корінь `DAT_0088ebbc`, лічильник `DAT_0088ebc2`); викликається **82+ разів** у грі (всі графічні об'єкти).
- **Глобальна палітра**: `FUN_00584170("palette.act")` → `DAT_00bd1528` (палітра з файлу `palette.act` — формат Adobe Color Table); її отримує кожен CImageBase у конструкторі (`+0x242`).
- **Територіальні**: `FUN_00417740` — для типів місцевості (Plains/trees/Mountain/Desert/Marsh/hills/djungle): `"gfx\map\landscape\<Тип>_d.bmp"` + **`"<тип>_palette.bmp"`** (`landscape_palette.bmp` (Plains), `trees_palette.bmp`, `mountain_palette.bmp`, `desert_palette.bmp`, `marsh_palette.bmp`, `hills_palette.bmp`, `djungle_palette.bmp`) → `FUN_00413d60` + `FUN_00415f20` (призначення палітри поточному зображенню).
- **Спрайти/іконки** (`FUN_004e2ff0`): `"gfx\map\*.bmp"` з парними `*_palette.bmp` (`beach`, `buildings`, `map_circle`, `production`, `weather_terrain` та ін.); прапори `"gfx\map\flags\flag_xxx_s.bmp"` + `flag_palette.bmp` (`FUN_0044b6f0`), щити `shield_palette.bmp` (`FUN_0043e780`), `flak_palette.bmp` (`FUN_0051b240`), а також `"gfx\palette\%s"` у `FUN_0044b330`.
- **Стрілки карти** (`FUN_0040ce30`): `"gfx\map\T_MAP_ARROWS.bmp"` + палітра `"arrow.bmp"` + пари `"<X>_dark.bmp"`/`"<X>_light.bmp"` → будує **дві LUT по 256 short-ів** (`DAT_0088db00`, `DAT_0088e300`) — попередньо обчислені затемнені/освітлені варіанти кольорів (глобальне освітлення стрілок).
- **Призначення палітри зображенню**: `FUN_00415f20(pal)` (малий стаб; викликається після `FUN_00413d60` у всіх завантажувачах), `FUN_00415f50` — створює CPalette для поточного стану й кладе в `image+0x242`. Прямих викликів `CreatePalette`/`SetPalette` з ddraw в декомпіляції не знайдено — ймовірно, вони всередині стабів 00415f20/00415d30 **[не підтверджено]**.
- `palette.act` перезавантажується в `FUN_0042ecd0`/`FUN_0042efb0`/`FUN_004d7400`/`FUN_004d78d0`/`FUN_00583750`.

---

## 4. Обробка помилок DirectDraw (FUN_00408140 / FUN_0057f100)

Дві **ідентичні** копії (487 рядків кожна; 00408140 і 0057f100) — універсальний перекладач HRESULT у текст. Сигнатура: `(файл, рядок, hresult)`:
1. Спершу `FUN_00405ad0("Error Reported in %s : %d", файл, рядок)` — друкує джерело помилки (шлях до вихідника на машині збірки: `"C:\Dev\HoI2\Projects\Darkest_Hou..."` `s_C__Dev_HoI2_Projects_Darkest_Hou_00856f60`). `FUN_00405ad0` — це тамп (1 байт) до логера, що пише у **`savedebug.txt`** (`FUN_00429a00`: fopen/vfprintf/fclose).
2. Потім за значенням HRESULT друкує англійський текст через той самий `FUN_00405ad0`; невідомий код → `"DirectX: Unknown Error (%d)"`.

**Повний список із 127 кодів** (адреса тексту-символу; де впевнено — офіційна назва):

### DirectDraw / Surface (0x8876xxxx)
| Код | Текст (з коду) | Офіційно |
|---|---|---|
| 0x88760005 | This object is already initialized | DDERR_ALREADYINITIALIZED |
| 0x8876000A | This surface can not be attached to the requested surface | DDERR_CANNOTATTACHSURFACE |
| 0x88760014 | This surface can not be detached | DDERR_CANNOTDETACHSURFACE |
| 0x88760028 | Support is currently not available | DDERR_UNSUPPORTED |
| 0x88760037 | An exception was encountered while performing the requested operation | DDERR_EXCEPTION |
| 0x8876005A | Height of rectangle provided is not a multiple of the surface pitch | (rect/висота) |
| 0x8876005F | Unable to match primary surface creation request with existing... | DDERR_UNSUPPORTEDMODE |
| 0x88760064 | One or more of the caps bits passed to the callback are incorrect | DDERR_INVALIDCAPS |
| 0x8876006E | DirectDraw does not support provided FOURCC format | DDERR_UNSUPPORTEDFOURCC |
| 0x88760078 | DirectDraw does not support the requested pixel format | DDERR_UNSUPPORTEDFORMAT |
| 0x88760082 | DirectDraw received a pointer that was invalid | DDERR_INVALIDOBJECT |
| 0x88760091 | pixel format was invalid as specified | DDERR_INVALIDPIXELFORMAT |
| 0x88760096 | Rectangle provided was invalid | DDERR_INVALIDRECT |
| 0x887600AA | There is no 3D present | DDERR_NO3D |
| 0x887600CD | no clip list available | DDERR_NOCLIPLIST |
| 0x887600D7 | Surface doesn't currently have a clipper object attached | DDERR_NOCLIPPERATTACHED |
| 0x887600DE | No DirectDraw support possible with current display driver | DDERR_NODIRECTDRAWSUPPORT |
| 0x887600E6 | Flipping visible surfaces is not supported | DDERR_NOFLIPHW |
| 0x887600F0 | There is no GDI present | DDERR_NOGDI |
| 0x887600FF | Requested item was not found | DDERR_NOTFOUND |
| 0x8876013C/13D | DirectDrawSurface is not in 4 bit pixel format (×2) | DDERR_NOT4BITCOLOR |
| 0x88760140 | DirectDraw Surface is not in 8 bit pixel format | DDERR_NOT8BITCOLOR |
| 0x8876017C | DirectDraw does not have enough memory | DDERR_OUTOFMEMORY |
| 0x88760180 | Can only have one color key active at a time | DDERR_COLORKEYACTIVE |
| 0x88760183 | Access to this palette is being refused (already used/locked) | DDERR_PALETTEBUSY |
| 0x88760190 | No source color key specified for this operation | DDERR_NOCOLORKEY |
| 0x8876019A | This surface is already attached | DDERR_SURFACEALREADYATTACHED |
| 0x887601A4 | This surface is already a dependency of another surface | DDERR_SURFACEALREADYDEPENDENT |
| 0x887601AE/B3 | Access to this surface is being refused (locked / busy, ×2) | DDERR_SURFACEBUSY-подібні |
| 0x887601B8 | Access to Surface refused because surface memory is gone | DDERR_SURFACELOST |
| 0x887601C2 | Access to this surface is being refused because the surface is already locked | **DDERR_SURFACEBUSY** (використовується як «ще зайнята» в циклах Lock) |
| 0x887601CC | The requested surface is not attached | DDERR_SURFACENOTATTACHED |
| 0x887601D6 | Height requested by DirectDraw is too large | DDERR_HEIGHTTOOLARGE |
| 0x887601E0 | Size requested by DirectDraw is too large | DDERR_SIZETOOLARGE |
| 0x887601EA | Width requested by DirectDraw is too large | DDERR_WIDTHTOOLARGE |
| 0x887601FE | FOURCC format requested is unsupported | DDERR_UNSUPPORTEDFOURCC-вар. |
| 0x88760208 | Bitmask in the pixel format requested is unsupported | DDERR_UNSUPPORTEDMASK |
| 0x88760219 | vertical blank is in progress | DDERR_VERTICALBLANKINPROGRESS |
| 0x8876021C | Informs DirectDraw that the previous blit... (was still drawing) | DDERR_WASSTILLDRAWING |
| 0x88760230 | Rectangle provided was not horizontally aligned | DDERR_NOTPAGELOCKED-вар. (вирівнювання) |
| 0x88760231 | The GUID passed to DirectDrawCreate was NULL | DDERR_INVALIDDIRECTDRAWGUID |
| 0x88760232 | A DirectDraw object representing this driver already exists | DDERR_DIRECTDRAWALREADYCREATED |
| 0x88760233 | A hardware only DirectDraw object creation was attempted | DDERR_NODIRECTDRAWHW |
| 0x88760234 | this process already has created a DirectDraw object | (повторне створення) |
| 0x88760235 | software emulation not available | DDERR_NOEMULATION |
| 0x88760236-3A | помилки Clipper (GetClipList, SetClipList, no clipper attached, HWND...) | DDERR_*CLIPPER* |
| 0x8876023C | No palette object attached to this surface | DDERR_NOPALETTEATTACHED |
| 0x8876023D | No hardware support for 16 or 256 color modes | DDERR_NOPALETTEHW |
| 0x8876023E | If a clipper object is attached... (NotClipped→HWND) | DDERR_NOTCLIPPED |
| 0x8876023F | No blter hardware | DDERR_NOBLTHW |
| 0x88760240 | No DirectDraw ROP hardware | DDERR_NORASTEROPHW |
| 0x88760241-44 | повідомлення Overlay (GetOverlayPosition, позиція оверлея...) | DDERR_*OVERLAY* |
| 0x88760245 | An attempt was made to set the color key on an overlay | (overlay) |
| 0x88760246 | An attempt has been made to flip a surface that is... (flipping invisible) | DDERR_INVALIDCAPS-вар. |
| 0x88760247 | Can't duplicate primary/3D surface | DDERR_CANNOTDUPLICATE |
| 0x88760248 | Surface was not locked. An attempt to unlock failed | DDERR_NOTLOCKED |
| 0x88760249 | Windows can not create any more DCs | DDERR_DCALREADYCREATED-вар./NODC? |
| 0x8876024A | No DC was ever created for this surface | DDERR_DCNOTCOMPATIBLE-вар. |
| 0x8876024B/4C | This surface can not be restored (does not own memory / lost) | DDERR_DDGNOREERROR-вар. / SURFACENOTOWNED |
| 0x8876024D | The surface being used is not a primary surface | DDERR_NOTONTHISDEVICE-вар. |
| 0x8876024E | The display is currently in an unsupported mode | (unsupported mode) |
| 0x88760250 | The requested action could not be performed (mode change) | (режим) |
| 0x88760258 | Device does not support optimized... | DDERR_OPTIMIZED-вар. |
| 0x88760259 | Surface is an optimized surface... | (optimized surface) |
| 0x8876026C | A DC has already been returned for this surface | DDERR_DCALREADYCREATED |
| 0x88760276 | An attempt was made to allocate more memory... (page lock) | DDERR_PAGELOCKED? |
| 0x88760280 | The attempt to page lock a surface failed | (page lock failed) |
| 0x887602A8 | An attempt was made to page unlock... | (page unlock) |
| 0x887602B2 | There is more data available than... | (more data) |
| 0x887602B7 | The video port is not active | DDERR_VIDEONOTACTIVE |
| 0x887602BB | Surfaces created by one direct draw device can not be used by another | DDERR_SURFACENOTOWNED |

(Частину назв DDERR для рідкісних кодів позначено «-вар.», бо точна відповідність не перевірена — тексти з коду наведено дослівно.)

### COM/HRESULT та інші (0x8007 / 0x8004)
0x80004001 «Action not supported» (E_NOTIMPL), 0x80004002 «The specified interface is not supported» (E_NOINTERFACE), 0x80004005 «Generic failure» (E_FAIL), 0x80040110 «This object does not support aggregation» (CLASS_E_NOAGGREGATION), 0x80040154 «The device or device instance...» (REGDB_E_CLASSNOTREG), 0x80070002 «The requested object does not exist» (ERROR_FILE_NOT_FOUND), 0x80070005 «Access to the device has been lost» / «Another app has a higher priority» (E_ACCESSDENIED-вар.), 0x8007000C / 0x80070057 (E_INVALIDARG) / 0x80070077 / 0x800700AA / 0x8007047E «The application requires a newer version of DirectX» (ERROR_PROC_NOT_FOUND-вар.) / 0x80070481 / 0x800704DF, 0x8007000E (E_OUTOFMEMORY, йде в той самий кейс, що 0x8876017C), 0x8000000A «Data is not yet available» (E_PENDING).

### DirectInput-коди (у тій самій функції!)
0x80040201 «The device is full» (DIERR_DEVICEFULL), 0x80040202-08 (DIERR_*: not all information, effect not downloaded, cannot reinitialize, cannot perform op, download failed, buffered device read, modify parameters...), 0x800401F0 (DIERR_INVALIDPARAM-вар.), 0x80040200 (IDirectInputJoyConfig...), а також позитивні значення: 1 «The device exists but is not currently attached», 2 «The device is a polled device», 3/4/8 «The parameters of the effect were...» (DIERR_*), 0xC «Equal to DI_EFFECTRESTARTED / DI_...». Тобто перекладач спільний для DirectDraw **і** DirectInput.

---

## 5. Як малюється карта

Кадровий цикл (присутність кадру): `FUN_00583f10` / `FUN_00584050`:
1. Обчислення прямокутника екрана (віконний режим: `GetWindowRect` + системні метрики; повноекранний: 0,0,w,h у `DAT_00bd1bac+4/+8`);
2. `FUN_00584750` — копія прямокутника відсікання у глобальний стан (`DAT_00bd1530..3c`);
3. `FUN_00406300(весь екран)` — бліт екрана (через диспетчер CImageBase);
4. курсор (якщо `0 < DAT_00bd1bc0 < DAT_00bd1bbc`) — `FUN_0057a250`;
5. **`FUN_0057ab40` — Flip**: у повноекранному режимі `primary->Flip(0, 1)` (vtable +0x2C; 1 = DDFLIP_WAIT), скидає `obj+0x532`; у віконному — без фліпа (малювання йде прямо в primary через BltFast).

Таргет усього малювання — екранний образ **`DAT_00bd1bac`** (CImageBase, створюється під час ініціалізації; у 00583f10 з нього беруться w/h). Рендер «по примітивах»: `FUN_00415ed0` задає вікно перегляду (x,y,w,h — поточний стан у `DAT_00a98430`), `FUN_00415d30(image)` перемикає поточний таргет, `FUN_00415430(x,y,8)` / `FUN_00416f20(x,y)` — лінії/точки на карті, `FUN_00415f30` — поточна палітра.

- **Тайли місцевості**: `FUN_00417690` — обчислює позицію тайла через `FUN_004d8c50` (координати карти → екран), виставляє режим зсуву (`DAT_00a98464`, масштаб, clamped до 4) у `+0x23e` картяного образу, палітру тайла в `+0x24e`, і **викликає `FUN_00406300`** — бліт тайла в екранний образ. Територіальні тайли: `"gfx\map\landscape\<Type>_d.bmp"` (Plains/trees/Mountain/Desert/Marsh/hills/djungle) з палітрами `<Type>_palette.bmp` (`FUN_00417740`).
- **Провінції/полігони**: `FUN_0040be00` — малювання заповненого полігона: обчислення вершин з sin/cos, кліп-прямокутники, перед малюванням застосовує картяну палітру (`FUN_00415f20(DAT_0088eb18)`), контур через `FUN_00415430`/`FUN_00416f20`, **заливка трикутників `FUN_00402160`**.
- **Іконки на карті**: масовий завантажувач `FUN_004e2ff0` (`"gfx\map\*.bmp"`: beach, buildings, map_circle, production, weather_terrain, airfield, harbour, fortification, nuke, radar, rocket, rain, snow, storm, blizzard, antiair, coastal_fortification...) з `*_palette.bmp`; юніти — `"gfx\map\units\%s.bmp"` (спрайт-дефініції з `FUN_00416a40`, поля типу 3/4/5 — режими анімації), стрілки — `T_MAP_ARROWS.bmp` з LUT освітлення.
- **Підкладки даних** (не графіка, але поруч): `"map/id.tbl"`, `"build_files/bordermap.bmp"`, `"lightmap_d.tbl"` (`FUN_004d93b0`, `FUN_004d8f50`), `"gfx\interface\minimap.bmp"` (`FUN_004e1fd0`).

### Резюме пайплайну
1. CImageBase вантажить BMP (8 чи 16 біт) у поверхню (vidmem із відкатом на sysmem) або створює «порожню» поверхню;
2. кожен кадр геймплей-код малює в екранний образ `DAT_00bd1bac` (BltFast або програмні копії з прозорістю);
3. `FUN_00583f10` виводить екран і робить `Flip` у повноекранному режимі (у віконному BltFast у primary);
4. усі помилки HRESULT логуються в `savedebug.txt` через «Error Reported in файл : рядок» + переклад коду.

---

## Не підтверджено кодом (чесно)
- Точна розкладка vtable DirectDraw-об'єкта (зміщення +0x20/+0x50/+0x54 нестандартні; семантика — за текстовими повідомленнями).
- Що роблять стаби `FUN_00415f20`/`FUN_00415d30`/`FUN_00415a20`/`FUN_00415f30` (замалі для декомпіляції; поведінка відновлена за контекстом викликів); там же, ймовірно, реальні `CreatePalette`/`SetPalette` ddraw.
- Вміст `DAT_0082c3f4` (запасне ім'я зображення) і точне значення `obj+0x502` (прапорець піксель-формату).
- Функція `FUN_0040f5a0` (DLL-завантажувач) стосується **не** DirectDraw: вантажить `libbz2.dll` (BZ2_bzlibVersion/bzopen/bzdopen/bzread/bzwrite/bzflush/bzclose/bzerror) — архіватор для файлів гри.