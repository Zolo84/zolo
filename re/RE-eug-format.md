# RE-аналіз: формат файлів .eug (сценарії та сейви) Darkest Hour

> Джерела: реальні файли сценаріїв `Mods/Darkest Hour Full/scenarios/*.eug` (+ підпапки), декомпіляції Ghidra у `/tmp/dh-decomp/` (адреси — VA, база 0x400000), реєстр токенів з `RE-scripts.md` (1669 ключових слів, id → слово), `RE-savegames.md` (bz2/шляхи). Усе нижче — з кодів/файлів; гіпотези позначено **[нп]** (непідтверджено).
> Важливо: каталог `scenarios/save games/` на цій машині **порожній** — жодного реального сейву немає. Точну послідовність секцій сейву відновлено з серіалізатора `FUN_005362c0` (порядок викликів токенів) і вона позначена як реконструкція з коду.

## 1. Сценарії: порівняння

Усі 12 файлів: 1914.eug, 1933.eug, 1936.eug, 1939.09.eug, 1940.eug, 1941.06.eug, 1942.11.eug, 1943.07.eug, 1944.06.eug, 1944.12.eug, BS_1904.02.eug, BS_1939.09.eug. Кодування/рядки: CRLF, коментарі `#`, регістронезалежні ключові слова.

| Файл | Розмір | name = | panel (scenario_*.bmp) | startdate | enddate | selectable | wars | alliance= | treaty= | history/sleepevent/save_date | flags= | event= | include= |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 1914 | 12 558 | 1914_SCENARIO | scenario_1914 | 1914-06-26 | 1921-01-00 | 78 тегів | 1 | 3 | 2 | — | — | 0 (include db\1914_events.txt) | 83 |
| 1933 | 28 080 | 1933_SCENARIO | scenario_1933 | 1933-03-03 | (немає глобального; у war-датах 1933) | ~81 | 2 | 3 | 55 | — | — | 70 | 91 |
| 1936 | 32 503 | 1936_SCENARIO | scenario_1936 | 1936-01-00 | (немає) | 84 | 1 (ITA-ETH) | 3 | 76 | — | — | 70 | 89 |
| 1939.09 | 36 011 | 1939_SCENARIO | scenario_1939 | 1939-09-00 | 1940?-… | ~75 | 3 | 3 | 78 | + | anti_comintern_pact | 60 | 83 |
| 1940 | 35 427 | 1940_SCENARIO | scenario_1940 | 1940-05-09 | … | ~76 | 2 | 3 | 76 | + | anti_comintern_pact | 60 | 82 |
| 1941.06 | 32 506 | 1941_SCENARIO | scenario_1941 | 1941-06-21 | … | ~68 | 3 | 2 | 60 | + | anti_comintern_pact | 60 | 73 |
| 1942.11 | 31 160 | 1942_11_SCENARIO | scenario_1942 | 1942-11-21 | … | ~66 | 4 | 2 | 53 | + | anti_comintern_pact | 61 | 70 |
| 1943.07 | 31 179 | 1943_07_SCENARIO | scenario_1943 | 1943-07-25 | … | ~68 | 4 | 2 | 53 | + | anti_comintern_pact | 61 | 72 |
| 1944.06 | 29 154 | 1944_06_SCENARIO | scenario_1945 | 1944-06-19 | … | ~66 | 4 | 2 | 46 | + | anti_comintern_pact | 61 | 73 |
| 1944.12 | 29 446 | 1944_12_SCENARIO | scenario_1945 | 1944-12-15 | 1964-01-00 | 67 | 5 | 2 | 45 | + | anti_comintern_pact | 61 | 72 |
| BS_1904.02 | 3 380 | 1904_SCENARIO | scenario_1904 | 1904-02-06 | 1905-12-29 | — (battle) | 1 | 0 (allies/axis) | 0 | — | — | 0 | 4 (jap/kor/rus + vp) |
| BS_1939.09 | 3 048 | fallweiss_name | scenario_fallweiss | 1939-09-00 | 1939-10-29 | — (battle) | 1 | 0 (allies/axis) | 0 | — | — | 1 (fall_weiss_events.txt) | 6 |

Спільне у ВСІХ: `name`, `panel`, `header {...}`, `globaldata {...}`, `include = "<inc>"` для кожної країни + `vp.inc`; BS ще мають `map = {...}` і `rules` у globaldata. Великі кампанії 1939+ мають top-level `history`, `sleepevent`, `save_date` та `flags` усередині globaldata; 1914/1933/1936 — не мають (події «ще не відбулись»). 1933/1936 мають `queued_events = { event = { tag = ... id = ... hour = ... } }` у globaldata (черга подій на старт); 1914 — жодного `event =` рядка (події підключаються `include = "db\1914_events.txt"`), решта — `event = "<файл>"` (по 60-70, в т.ч. AI_*.txt).

### Еволюція globaldata за роками (склади блоків)

- **1914**: `axis{id 15000/2, participant={U08}, name="central"}`, `allies{id 15000/1, {FRA}, name="entente"}`, `comintern{id 15000/3, {}, name="com1914"}` + додаткові `alliance` (SER MTN; U09 ITA), війна Мексики (U57 U58 U59 vs MEX, id 9430) + закоментована Італо-Лівійська. Тобто у WW1-сценарії «великі трійки» перевикористано під центральну/Антанту (id БЛОКІВ стабільні: 1=allies, 2=axis, 3=comintern — однакові в усіх сценаріях).
- **1933**: axis{GER}, allies{ENG FRA BEL AST NZL CAN SAF NEP EGY U60}, comintern{SOV MON TAN}; alliance 10{CHI CXB}, 11{EST LAT}, 12{JAP MAN}; 2 війни (SIK vs UPE; CHI CXB vs UPE); queued_events.
- **1936**: те саме, allies без U60; 1 війна ITA vs ETH (1935-10-03); queued_events.
- **1939.09**: axis{GER SLO}, allies{ENG FRA AST NZL CAN SAF IRQ NEP BHU EGY U02 OMN U04}, comintern{SOV TAN MON}; alliance 10{CHI CHC}, 11{EST LAT}, 12{JAP MAN MEN}; 3 війни (Німеччина-Захід, Китай-Японія 1937, + Німеччина-Польща окремо).
- **1940**: axis{GER SLO}, allies додають NOR BEL HOL LUX U05; 2 війни.
- **1941.06**: axis{GER SLO ITA HUN ROM BUL FIN CRO SER MTN}; allies{ENG U01 ...} — FRA зникає (U01 = вільна Франція), додається; comintern{SOV MON TAN}; alliance 11 (EST LAT) зникає; 3 війни (+ Східний фронт 1941-06-21).
- **1942.11**: axis без FIN (після 1941 позиції змінюються): {GER SLO ITA HUN ROM BUL CRO SER FIN MTN}?? — фактично: GER SLO ITA HUN ROM BUL CRO SER FIN MTN; allies +USA PAN COS DOM SAL HAI HON NIC GUA CUB ETH MEX BRA (США у війні); 4 війни.
- **1943.07**: allies +IRQ PER BOL COL; axis {GER SLO ITA HUN ROM BUL CRO FIN SER MTN}; 4 війни.
- **1944.06**: allies +LIB (без IRQ? — у списку є; LIB додано); axis {GER SLO RSI HUN ROM BUL FIN SER CRO} (RSI = Італійська соц. республіка; ITA зникає); 4 війни.
- **1944.12**: axis{GER RSI HUN CRO}, allies{ENG USA U01 AST NZL CAN SAF NEP BHU EGY U02 OMN BEL HOL U05 PAN COS DOM SAL HAI HON NIC GUA CUB ETH MEX BRA IRQ PER BOL COL LIB}, comintern{SOV MON ROM U29 U27 U28} (TAN випав, додано Румунію/радянські сателіти); alliance 10{CHI CHC}, 12{JAP MAN MEN U03 SIA}; **5 воєн** (Захід 1939, Китай 1937, Схід 1941, Тихоокеанська 1941, Фінляндія-Німеччина 1944). `enddate = 1964-01-00` [нп: ймовірно «безкінечний» сценарій].

Тренд: кількість воєн/договорів зростає до піку 1939-44, потім файл «худне» (аншлюси: менше країн, лише 67 selectable у 1944.12). id-простір воєн 9430/, блоків 15000/, договорів 16384/ (15001/ у 1914).

## 2. Повне дерево структури сценарію (.eug)

```
name = "1914_SCENARIO"                    # рядок; у сейві тут — версія гри
panel = "scenarios\data\scenario_1914.bmp"  # картинка меню (токен 0x259)
header = {
  # Варіант GC (1914..1944.12):
  name = "Grand Campaign"                 # [1914 лише]
  startdate = { year = 1914 }             # рік старту (для меню)
  selectable = { AFG ALB ... }            # ігрові країни
  ENG = { }                               # порядок/картинка вибору: picture = "...propaganda_XX.bmp", flag_ext = _14
  FRA = { picture = "..." }               # країни можуть бути без блоку
  # Варіант BattleScenario (BS_*):
  startyear = 1939 / endyear = 1939       # обмеження років
  free = no / combat = yes                # «це битва-сценарій»
  GER = { desc = FW_GER picture = "...poland.bmp" }  POL = { desc = FW_POL bottom = yes ... }
  # Варіант Tutorial (Chapter1.eug):
  tutorial = yes / tutorialfile = "Tutorial/Chapter1.csv" / selectable = { GER }
}
globaldata = {
  rules = { diplomacy = no production = no technology = no }   # лише BS
  startdate = { year = .. month = .. day = .. }
  enddate   = { year = .. month = .. day = .. }
  flags = { anti_comintern_pact = 1 }      # 1939.09+; токен 499
  axis = { id = { type = 15000 id = 2 } participant = { GER ... } name = "..." }
  allies = { id = { type = 15000 id = 1 } participant = { ... } }
  comintern = { id = { type = 15000 id = 3 } participant = { ... } }
  alliance = { id = { type = 15000 id = 10 } participant = { CHI CHC } }   # довільні блоки
  war = { id = { type = 9430 id = 1 } date = { y m d [hour] } enddate = {...}
          attackers = { id = { type = 9430 id = 2 } participant = { ... } }
          defenders = { id = { type = 9430 id = 3 } participant = { ... } } }
  treaty = { id = { type = 16384 id = 130 } type = non_aggression|trade
             country = "ENG" country = "POR" startdate = {...} expirydate = {...}
             money = 0.5 metal = -10 oil = -12 ... cancel = no }
  dormant_leaders = { 1065007 ... }        # списки id (токени 0x3e1/0x3e2/0x3e3)
  dormant_ministers = { ... }
  dormant_teams = { ... }
  queued_events = { event = { tag = CHI id = 1330110051 hour = 24 } }   # 1933/1936
  # (у сейвах сюди ж пишуться: sunk = {...}, weather = {...}, nuked = {...} — див. §6)
}
# Top-level (тільки великі кампанії 1939+):
history = { 2400014 2400022 ... }         # id подій-історії (токен 0xe8)
sleepevent = { 2003044 ... }               # «сплячі» події (0x1f8)
save_date = { 2003025 = 1913 }             # подія = рік «примусової дати» (0x574)
map = { no = all yes = 226 ... top = {x y} bottom = {x y} }   # лише BS (0x249)
event = "db\events\AI\AI_GER.txt"          # підключення event-файлів (0x1f7) — по 60-70 рядків
include = "scenarios\1914\afg_14.inc"      # інлайн-вставка (0x294) — рекурсивний парсинг
```

### Country-блок (з .inc; те, що інлайниться include-ом)

```
country = {
  tag = AFG                       # ОБОВ'ЯЗКОВО першим полем (інакше "tag HAS to be first in country")
  capital = 2171
  flag_ext = _14                  # варіант прапора
  manpower = 20
  ai = "AFG_1914.ai"              # файл ШІ (Mods/.../ai/); у сейві — блок ai = { ... }
  ai_settings = { flags = { MOB1 = yes ... } }
  energy = 360 metal = 180 rare_materials = 90 oil = 500 supplies = 500 money = 10 transports = 100
  policy = { date = { year = 0 month = january day = 0 }
             democratic = 3 political_left = 4 free_market = 4 freedom = 2
             professional_army = 5 defense_lobby = 5 interventionism = 2 }
  headofstate = { type = 9 id = 1 }        # посилання на db/ministers (type 9 = міністри)
  headofgovernment = { type = 9 id = 2 } foreignminister = {...} armamentminister = {...}
  ministerofintelligence = {...} ministerofsecurity = {...} chiefofstaff = {...}
  chiefofarmy = {...} chiefofnavy = {...} chiefofair = {...}
  nationalprovinces = { 2168 ... } ownedprovinces = {...} controlledprovinces = {...} claimedprovinces = {...} [деякі]
  techapps = { 13060 1010 ... }            # стартові технології (0x114)
  diplomacy = { relation = { tag = ENG value = 20 } ... relation = { tag = AUS value = 100 guaranteed = { day = 29 month = december year = 1932 } } }
  SpyInfo = { country = "AFG" NumberOfSpies = 5 }
  landunit = {                              # 0xee; navalunit = 0xef; airunit = 0xf0
    id = { type = 10400 id = 1 }            # id-простори: 10400 наземні, 12000 морські, 13000 авіа
    location = 2171
    name = "Kabul Corps"
    division = { id = { type = 10400 id = 2 } name = "..." type = infantry model = 1
                 strength = 100 experience = 0 extra = cavalry_brigade brigade_model = 1 }
  }
}
```
Ключі, що реально зустрічаються у 85 inc 1936: name/type/model/id/strength/location/division/landunit/navalunit/airunit/relation/date/cost/experience/extra/brigade_model/anti_air/air_base/naval_base/supplypool/oilpool/transports/escorts/... (повний набір див. `grep -ohE '^[[:space:]]*[a-z_0-9]+[[:space:]]*=' scenarios/1936/*.inc | sort | uniq -c` — 180+ ключів у тому числі unit-поля: org, max_strength, build_time, k_division...).

### Province-блок (спільні include: vp.inc, bases.inc, depots.inc)

```
province = { id = 825  anti_air = 1  air_base = { size = 2 current_size = 2 } }   # bases.inc
province = { id = 1809 points = 3 }        # vp.inc (victory points)
province = { id = 850  supplypool = 10  oilpool = 10 }                            # depots.inc
```
`id` — ОБОВ'ЯЗКОВО першим ("id HAS to be first in province", токен 0x523), далі будь-які поля провінції (0x1f1-об'єкт).

## 3. Папки сценаріїв (1914/, 1933/, ...)

- **`<tag>-назва.inc`** — по одному country-блоку на країну сценарію (1914: 83 inc — afg_14.inc, Austria-Hungary.inc, GER - Germany.inc...; 1936: 89 — germany.inc, china nationalist.inc...). Підключаються include-рядками з .eug. BS_1939.09: лише 6 (danzig/germany/poland/slovakia/soviet + vp).
- **`vp.inc`** — розподіл victory points; **`bases.inc`** — укріплення/авіабази/порти по провінціях (54-96 КБ, росте з роками); **`depots.inc`** — стартові склади (1914, 1933, 1936, 1939.09, 1940); **`bases_DOD.inc`** (1933). Для 1914 ще `rebels.inc`, `bases.inc`, `depots.inc`.
- **BS-папки**: *.inc + `fall_weiss_events.txt` / `rjw_events.txt` (списки подій — підключаються `event = ...`).
- **`data/`** — bmp: `scenario_*.bmp` (меню), `propaganda_<TAG>[_WW1|_1940|...].bmp` (картинки країн), `poland.bmp`.
- Файли ШІ: `Mods/Darkest Hour Full/ai/<tag>.ai` (звідки `ai = "AFG_1914.ai"`).
- Зв'язок: .eug = «скелет» (зміст + посилання), .inc = дані країн; парсер рекурсивно інлайнить include під час читання (диспетчер 0x294 → відкриття файлу + рекурсивний цикл `FUN_00534a40`).

## 4. Розміри й складність: 1914 → 1944.12

- 1914.eug 12.5 КБ (365 рядків) — найпростіший: лише name/panel/header/globaldata + 83 include, без history/sleepevent/save_date/event-рядків; договорів 2. Але папка 1914/ — найбільша за кількістю inc (83; сумарно ~1 МБ, bases.inc 54.8 КБ).
- 1944.12.eug 29.4 КБ (768 рядків) — «середній»: 5 воєн, 45 договорів (США-Латинська Америка серіями), 61 event-файл, history ~300 id, sleepevent, save_date. Пік складності .eug — 1939.09 (36.0 КБ, 78 договорів, 3 війни).
- Зростання у inc: germany.inc 67.4 КБ (1914) → 142.2 КБ (1944.12); japan.inc 108.7 КБ; bases.inc 54.8→96.5 КБ. Кількість юнітів/дивизій у пізніх сценаріях — більша (війська вже розгорнуті).
- Загальна тенденція: складність «хвилеподібна» — 1936/1939 = найбільше договорів і країн; 1941+ = менше країн (анексії), але більші армії; 1944 = найменше selectable (67), найбільше воєн (5).

## 5. Декомпіляція: що пишеться в сейв і що читається

### Серіалізатор сейву — FUN_005362c0 @ 0x5362c0 (викликається з SaveGame 0x42ec20 та restart-гілки 0x430110)

Створює стейтменти через токен-реєстр `FUN_0053e740(id)` (id → слово з таблиці 1669 токенів) і виводить їх у файл. Порядок викликів (реконструкція з коду; [нп] — точний текст значення):

| # | Токен (id/слово) | Значення | Примітка |
|---|---|---|---|
| 1 | 0xe9 `name` | рядок з буфера версії `DAT_00d6139e` — "Darkest Hour v 1.05.2 (STANDARDGAME)" (або SCENARIOMISS_INFO) | рядок-«штамп»; при завантаженні порівнюється з версією гри |
| 2 | 599 `saved` | id-об'єкт {type=3, id=`*(world+6)`}; у MP (FUN_0042e910) id=0 | при читанні: `DAT_00d6159e = FUN_004af6b0(текст)` — пошук у глобальній текстовій БД [нп: ймовірно тег/індекс гравця] |
| 3 | 0x19c `header` | значення = vtable[0] світу (DAT_00d685a6) | [нп: назва/стан] |
| 4 | 0xf7 `globaldata` | значення = FUN_007883d0() | поточний стан світу (альянси/війни/дати/прапори) |
| 5 | 0x1f1 `province` ×N | для кожної провінції масиву `DAT_00ab27b4` (крок 0x4b2, лічильник `DAT_00877690`), **якщо** `FUN_00561b00()` — провінція має хоч щось (юніти/будівлі/власник≠контролер тощо) | «порожні» провінції в сейв НЕ пишуться |
| 6 | 0xec `country` ×M | для кожного запису таблиці країн `DAT_0089cad8[0..6488)` (tag-id → об'єкт; пропуск NULL); значення = vtable[0] об'єкта (тег) | усі існуючі країни |
| 7 | 0x236 `eyr` | контейнер статистики (сторінки 0x144/0x145/0x146 = air/land/naval + history) | «eyr» = група на сторінці статистики армії/флоту/авіації (див. division_types.txt) |
| 8 | 0x249 `map` | FUN_004e1ad0() | [нп: стан мапи/temp-дані] |
| 9 | 0xe8 `history` | список id спрацьованих подій (список `DAT_00d615b2+0x1d4f6`) | синтаксис гурту `history = { id id ... }` |
| 10 | 0x1f8 `sleepevent` | список id «сплячих» подій (`+0x1d4e8`) | |
| 11 | 0x574 `save_date` | список пар {id події, рік} (`+0x1d508/0x1d50c`) — wsprintfA("%d") | `save_date = { 2003025 = 1913 }` |
| 12 | 0x1f7 `event` ×K | рядкові імена завантажених event-файлів (список `+0x1d4d6`; strcpy імен через FUN_00429d20) | сейв «пам'ятає», які event-файли були підключені |
| 13 | 0x246 `interface` | FUN_00537bc0() — **тільки якщо НЕ MP** (`FUN_0042e910()==0`) | у MP-сейвах секція відсутня |
| 14 | 0x24e `combat` × | по країнах (FUN_004e9370(i)): поточні бої (FUN_004ba8e0 = об'єкт бою) | [нп: точний текст] |
| 15 | 0x4eb `battlehistory` | FUN_004b34a0() | [нп: точний текст] |

Завантажувач при читанні `battlehistory` (FUN_004b3230) створює battle-об'єкти (0xa8 байт) на записи з токеном 0x4ee.

### Завантаження — диспетчер стейтментів FUN_00534a40 @ 0x534a40 (цикл FUN_00535c60 @ 0x535c60, «до EOF»; помилка → "got a parsing error at line %d")

Топ-рівневі об'єкти, ЩО ПРИЙМАЮТЬСЯ (сценарій і сейв — один і той самий парсер!): `country` 0xec, `province` 0x1f1, `globaldata` 0xf7, `eyr` 0x236, `name` 0xe9, `panel` 0x259, 599 `saved`, `map` 0x249, `interface` 0x246, `header` 0x19c, 0x24e (`combat`), `battlehistory` 0x4eb, `include` 0x294 (відкриває файл + рекурсивний цикл), `event` 0x1f7 (завантажує event-файл через FUN_006ffd60), `history` 0xe8 (FUN_005359b0 — список id у `+0x1d4f6`), `sleepevent` 0x1f8 (`+0x1d4e4`), `save_date` 0x574 (пари id=рік у список). Все інше → `"Illegal top level object"` + помилка парсингу. `header` 0x19c створює світ (0x2d0e байт) і парсить блок.

**Обов'язкові поля:**
- `country = { tag = XXX ... }` — tag ПЕРШИМ полем; невідомий тег → "unknown tag" (пошук у текстовій БД → таблиця країн `DAT_0089cad8[id]`).
- `province = { id = N ... }` — id ПЕРШИМ (0x523, значення — число, 0x524); поза діапазоном [0, DAT_00877690) → "illegal province id".
- `globaldata = { ... }`: приймає startdate/enddate (0x156/0x157), rules (0x133), axis/allies/comintern (0x22f/0x22e/0x230), alliance (0x13c), war (0x137, об'єкт 0x3a7b4 байт), treaty (0x13d), leader (0x12d), minister (0x29e), sunk (0x32), weather (0x18a), desc (0x198), nuked (0x572), queued_events (0x581, вкладені event-записи), dormant_leaders/ministers/teams (0x3e1/0x3e2/0x3e3 — список id), flags (499) + fallback-обробник FUN_00789770; невідомі → "Globals: Unexpected field".

### FUN_00535cf0 @ 0x535cf0 — «демп-писач» MP (викликається з 0x430110 у MP-гілці, temp.eug)

За логами-форматами (`"globaldata "`, `"country "`, `"tag = %s"` (тег у `DAT_00d0ca90+0x1b`), `"ai "`) обробляє секції: `globaldata` → стейтмент 499 `flags`; `country` → `tag = GER`; `ai`; далі по списку `DAT_00d0ca90+0x4508` — стейтменти юнітів 0xee `landunit` / 0xef `navalunit` / 0xf0 `airunit` (значення = список юнітів об'єкта). Це парсер-видавець «гравця, що вилетів» (playerdrop): зберігає прапорці + країну + ai + юніти провінцій. Точний порядок виводу — [нп].

## 6. Сейв гравця vs сценарій

**Файл**: `scenarios/save games/autosave.eug`, `oldautosave.eug`, `AutoSave_%s_%d_%s_%d.eug` (місяць_день_рік, FUN_0064c3b0), `playerdrop%d.eug` (MP), `%s.eug` (ручний save), `temp.eug` (службовий). Збереження — у **bz2-потік** (libbz2.dll; 0x40f5a0/0x40f6f0/0x40f920; "BZIP COMPRESSING FILE WAIT"/"BZIP COMPRESSION FAILED"): на диску .eug = стиснений; при завантаженні розпаковується (temp), парсер читає текст; при збереженні — текст → bz2. Реєстрація в меню: розмір + контрольна сума байтів (0x57d7c0/0x6f1320; неспівпадіння → «пошкоджений сейв»). Статуси HUD: NORMALSAVE/QUICKSAVE/QUICKLOAD/AUTOSAVE.

**Вміст** (текстовий, той самий синтаксис, той самий парсер — 42e9b0 → 00535c60 → 00534a40):
```
name = "Darkest Hour v 1.05.2 (STANDARDGAME)"   # ← версія! порівнюється з грою
saved = ...                                       # маркер/стан (id-об'єкт)
header = ...
globaldata = { ... }                              # актуальні альянси/війни/договори/дати/прапори
province = { id = N ... } ×N                      # ТІЛЬКИ провінції з даними (юніти/будівлі/окупація)
country = { tag = GER ... ai = { ... } } ×M       # повні стани країн (ресурси, IC, тех, дипломатія, юніти)
eyr = { ... } history = { ... } sleepevent = { ... } save_date = { ... }
event = "db\events\..." ×K                         # сейв зберігає список підключених event-файлів
interface = ... (лише SP) combat = ... battlehistory = { ... }
```
**Відмінності від сценарію:**
1. Динамічні дані: після старту сейв містить фактичний стан (завойовані провінції, втрати, технології, поточні війни/договори) — сценарій задає початковий стан.
2. `name`-рядок = версія гри (для сумісності: неспівпадіння → відмова), а не назва сценарію.
3. Немає `selectable`/пропаганди/`panel`-картинок вибору (panel — окремий statement, але в сейві [нп]); немає `include`/`map`-блоку BS; натомість є `saved`, `eyr`, `battlehistory`, `combat`.
4. Провінції з «дефолтним» станом пропускаються (фільтр FUN_00561b00) — розмір менший.
5. Бінарна різниця: сейв = bz2, сценарій = чистий текст. Сценарії читаються прямо з text-файлу; сейви — через розпаковку в temp.
6. Секції у сейві «живі»: ai = { ... }-блоки з актуальними налаштуваннями ШІ, queued_events — черга подій що залишилась, sunk/weather/nuked — накопичена історія.

## 7. Позначення непідтвердженого

- Точний текст значень `header`/`map`/`interface`/`saved`/`combat`/`battlehistory` у сейві — за кодами не відновлюється повністю (значення — vtable-гети, формат — у віртуальних «емітерах», які не розбиралися).
- Семантика `saved` (id = `world+6`, обнуляється в MP) — встановлено механіку, призначення [нп].
- Порядок стейтментів у сейві №2, 7-8, 13-15 — за порядком викликів у FUN_005362c0; остаточний порядок рядків може відрізнятися (форматуючі віртуальні методи не розібрані).
- Жодного реального сейву на машині не було — формат сейву = реконструкція з декомпіляції, не з файлу.
- 0x236 `eyr` у сейвах: призначення підтверджено (групи сторінки статистики: air/land/naval + history), точний синтаксис — [нп].

## 8. Карта функцій формату

| Адреса | Роль |
|---|---|
| 0x534a40 | диспетчер топ-рівневих стейтментів (сценарії І сейви) |
| 0x535c60 | цикл парсингу до EOF, "parsing error at line %d" |
| 0x5362c0 | серіалізатор сейву (15 типів стейтментів) |
| 0x535cf0 | «демп» MP (globaldata/flags, country/tag/ai, юніти) → temp.eug |
| 0x533e40/0x534930/0x5349a0 | відкриття файлу (мод-префікс), обгортка, закриття |
| 0x42ec20 / 0x430110 / 0x42e9b0 / 0x42efb0 | SaveGame / load-екран (+temp.eug, скид світу 0x42fa90) / завантаження сценарію / StartNewGame |
| 0x537860 / 0x537a20 | парсери country/province (tag/id першими) |
| 0x780ef0 | парсер globaldata (23+ поля, "Globals: Unexpected field") |
| 0x4bb6b0 / 0x6ffd60 / 0x4b3230 | event-об'єкти / event-файли / battlehistory |
| 0x5359b0 | читач списків id (history/sleepevent/dormant_*; дублікат → "found %d times") |
| 0x7a6628/0x537750 | fprintf-емітер токенів / «читач-писач» токена за типом (2/0x526-0x52b — рядки) |
| 0x427f80/0x429010/0x53e5e0/0x54f010 | фабрики id-об'єктів {type, id} (vtable 0x7e3ba4) |
| 0x42e910 | «це MP?» (DAT_00bd14fc, гравці<2) — впливає на saved/interface |
| 0x4af6b0 | пошук слова в текстовій БД (tag, saved) |
| 0x561b00 | фільтр «провінція з даними» |