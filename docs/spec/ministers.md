# Специфікація: міністри → модифікатори країни (DH 1.05.1)

Позначки: ✅ простежено в коді; 🔎 частково/непрямо; ❓ відкрите.

**Статус перевірки.** Усі твердження §1–§7 незалежно перевірено вдруге за дизасемблером (§9): жодне не спростовано;
стартові модифікатори Німеччини 1936 відтворено незалежним парсером біт-у-біт. Реалізація — `dh-data::ministers`
(дані) і `dh-sim::ministers` (`MinisterModifiers`, `World::load_ministers`).

## 1. Парсер `minister_personalities.txt`

### 1.1 Блок `minister = { ... }` — 0x766600 (об'єкт риси = ebp) ✅
Поля об'єкта риси:
| офсет | ключ | розбір |
|---|---|---|
| +4 | `position` | токен 0x3E8..0x3F1 → 0..9 (HeadOfState 0, HeadOfGovernment 1, ForeignMinister 2, ArmamentMinister 3, MinisterOfSecurity 4, MinisterOfIntelligence 5, ChiefOfStaff 6, ChiefOfArmy 7, ChiefOfNavy 8, ChiefOfAir 9); рядок `all` → 0xA; `generic` → 0xA **і** глобал `0xD59098 := ця риса` (лог «The generic minister personality is loaded and set.», 0x76696C); інше → помилка. Повтор `position` перезаписує (одна посада на рису). |
| +8 | `id` | atoi (0x7A783C); дубль id → помилка «Duplicated minister personality ID.» (0x766B6F) |
| +0xC | `trait` | strdup; дубль (stricmp 0x7A8430 по списку 0xD7D8BC) → «Duplicated minister personality name.» |
| +0x10 | `name` | локалізація (якщо ключ є в таблиці рядків — локалізований текст, інакше сирий) |
| +0x14 | `desc` | так само |
| +0x20/+0x24/+0x28 | список команд (голова/хвіст/кількість) | `command = {...}` |
| +0x2E | `value` | atoi |
Список усіх рис — глобальний зв'язний список `0xD7D8BC` (вузол: [0]=риса, [8]=next).

### 1.2 `command = { ... }` — об'єкт команди (vtable 0x7FA57C, 0x14 байт) ✅
Створення 0x766A0E: `+4 type = 0x14 (не задано)`, `+8 which = 0x161 (не задано)`, `+0xC when = 0x12 (не задано)`,
`+0x10 value = 0.0f`. Далі `vt+4` = парсер 0x765F30, потім нормалізація 0x765DD0, потім валідатор 0x7653A0
(false → «Error in command for minister personality.»).

Парсер 0x765F30: ключі `type` (0x141), `which` (0x3E4), `when` (0x345), `value` (0x14E, лише числовий токен
0x524 → atof → f32 у +0x10). **value зберігається сирим** (без ·0.01).

`type` → внутрішній номер (0x76607B):
| type | № | | type | № |
|---|---|---|---|---|
| research | 0 | | intelligence_cost | 9 |
| resource | 1 | | intelligence_report | 10 |
| production | 2 | | intelligence_network | 11 |
| province | 3 | | leader_skill | 12 |
| unit | 4 | | dissent | 13 |
| extra | 5 | | tc_mod | 14 |
| diplomacy_chances | 6 | | detection | 15 |
| diplomacy_cost | 7 | | belligerence | 16 |
| intelligence_chances | 8 | | populationgrowth | 17 |
| | | | supply_consumption | 18 |
| | | | stockpile | 19 |

`when` → № (0x76625E): weak_target 0, same_alignment 1, opposite_alignment 2, democracies 3, dictatorships 4,
close_government_type 5, non_national 6, national 7, all 8, time 9, cost 10, organisation 11, morale 12,
attack 13 (токен 0x35), defence 14, speed 15, war 16, peace 17; не задано = 0x12.

`which` → № (0x763DA0; повна мапа — у самій таблиці): all 0, land 1, navy 2, air 3, convoy 4, research 5, peace 6,
war 7, naval 8, aircraft 9, industry 0xA, land_doctrines 0xB, secret_weapons 0xC, naval_doctrines 0xD,
air_doctrines 0xE, oil 0xF, energy 0x10, metal 0x11, rare_materials 0x12, money 0x13, consumer 0x14,
production 0x15, supplies 0x16, reinforcement 0x17, upgrading 0x18, ic 0x19, coastalfort 0x1A, landfort 0x1B,
flak 0x1C, infra 0x1D, air_base 0x1E, naval_base 0x1F, radar_station 0x20, nuclear_reactor 0x21, rocket_test 0x22,
**типи дивізій 0x23 + індекс типу** (infantry 0x23 … rocket_interceptor 0x43, d_rsv_33.. 0x44.., d_99 0xAE),
**типи бригад 0xAE + індекс бригади** (artillery 0xAF → 1, sp_artillery 2, rocket_artillery 3, sp_rct_artillery 4,
anti_tank 5, tank_destroyer 6, light_armor_brigade 7, heavy_armor 8, super_heavy_armor 9, armored_car 10,
anti_air 11, police 12, engineer 13, cag 14, escort 15, naval_asw 16 … b_99 0x139), дипломатичні місії
0x13A..0x154 (alliance 0x13A, declare_war 0x13B, …), шпигунські 0x155..0x15E, decrease_intelligence_founding 0x15F,
daily_maintenance 0x160; невідомо = 0x161 → «Unknown minister command (which).»

### 1.3 Нормалізація типових значень 0x765DD0 ✅
| type | якщо which не задано | якщо when не задано |
|---|---|---|
| 0 research | which = all | when = time (9) |
| 1 resource, 10 intel_report | which = all | — |
| 2 production | which = production (0x15) | лише якщо which==production: when = national (7) |
| 3 province, 5 extra, 19 stockpile | which = all | when = all (8) |
| 4 unit | якщо when ≠ speed: which = all; при speed which лишається 0x161 | when = all |
| 6 diplomacy_chances | — | when = all |
| 7 diplomacy_cost | which = all | when = all |
| 8/9 intel chances/cost | which = all | when = non_national (6) |
| 11 intel_network | лише якщо when не задано: which = all | — |
| 17 populationgrowth | — | when = national (7) |
| 12,13,14,15,16,18 | — | — |

## 2. Міністр, рис, слоти кабінету

### 2.1 Запис міністра (CSV, рядковий парсер у 0x76D2xx..0x76DE88) ✅
* ID (стовпчик 0, atoi; ≤ 0 → рядок пропускається, 0x76D305) → ключ об'єкта **{type = 9, id = ID}**
  (0x76D329: `word 9`, `dword id`); пошук існуючого 0x428EE0 → якщо вже є — той самий об'єкт перезаписується
  («Already loaded minister ID%d!», «ID conflict…» лише лог), інакше `new` (0xC0 байт, ctor 0x761960).
* ctor 0x761960: `+0xBA` (вказівник риси) := глобальна generic-риса `[0xD59098]`; +0x1E/+0x22 := 3000.
  Generic: вбудований порожній запис (0x761910: position 0xA, без команд), або — після завантаження файлу рис —
  блок з `position = generic` (ваніль: `trait = "Generic"`, без `command`) → **нуль ефектів**.
* Посада (стовпчик 1, `_stricmp`): Head of State 0, Head of Government 1, Foreign Minister 2, Minister of Armament 3,
  Minister of Security 4, Head of Military Intelligence 5, Chief of Staff 6, Chief of Army 7, Chief of Navy 8,
  Chief of Air Force / Chief of Air 9 → `+0x80`; інше → 0xA + помилка.
* Рік старту `+0x1A` (<100 → +1900), кінець `+0x1E`, відставка `+0x22`; ідеологія `+0x26` (0x7636B0; невідома → ML);
  лояльність (0x7635D0, ✅ рядки: Very Low 0, Low 1, Medium 2, High 3, Very High 4, Undying 5, NA/невідома 0).
* Риса (стовпчик Personality): 0x767350 → 0x766CD0: `_stricmp` (0x7A8430, **регістронезалежно**, повний рядок)
  по списку 0xD7D8BC; не знайдено → таблиця одруківок (теж `_stricmp`, ~50 варіантів, напр. «silent work horse» →
  «silent workhorse», «school of maneuver» → «school of manoeuvre», «crooked plutocrat» → «crooked kleptocrat»,
  «undistinguished suite» → «undistinguished suit», «air-to-ground proponent» → «air to ground proponent», …;
  лог «'%s' personality has been substituted…»), повторний пошук; інакше NULL → **+0xBA лишається generic**
  (лог «…This minister will use generic personality.»).
* Невідповідність посади риси й міністра (`риса+4 ≠ 0xA` і `≠ міністр+0x80`) — **лише лог** (0x76DB82..0x76DC43),
  риса все одно призначається і діє.

### 2.2 Слоти кабінету країни ✅
`C+0x24E + 6·i`, i = 0..9, кожен — 6-байтовий ключ {u16 type; u32 id}. Порядок = номер посади:
0 headofstate, 1 headofgovernment, 2 foreignminister, 3 armamentminister, 4 ministerofsecurity,
5 ministerofintelligence, 6 chiefofstaff, 7 chiefofarmy, 8 chiefofnavy, 9 chiefofair.
* Ключі сценарію — ті самі токени 0x3E8..0x3F1 (лексер регістронезалежний: `HeadOfState` = `headofstate`);
  країновий завантажувач 0x549520 → гілка 0x54BF58: `pos = 0x763960(token)` → `0x427ED0` читає `{ type id }`
  у слот `C+0x24E+6·pos` (у завантажувачі `ebp = C+0xE`, `0x240+0xE = 0x24E`).
* Перевірки при завантаженні (лише при прапорці 0xDC4B1E, **лише лог**, слот не змінюється):
  0x44C600(pos) == NULL → «Invalid minister ID (%s) used for %s»; рік поза [+0x1A, +0x1E/+0x22) → «Not valid
  for this scenario minister…».
* Резолв: `0x44C600(pos)` = `0x428EE0(slot)` (реєстр об'єктів 0x88F290, ключ (type,id)) − 8 → міністр або NULL.
  Отже `{ type = 9 id = N }` = міністр з CSV ID N; невідомий id / інший type → NULL → слот **порожній, ефектів
  немає** (0x45151E). 🔎 type ≠ 9 не перевіряв окремо (реєстр шукає за парою).
* Посада міністра в CSV, ідеологія, лояльність, роки — **не впливають** на перерахунок 0x451390 (він бере лише
  слот → +0xBA → +0x20). Риси двох слотів з однаковою рисою додаються двічі.

## 3. Перерахунок 0x451390 (this = країна C) ✅

```
скинути (0x451390..0x451504; ті самі значення ставить ctor країни 0x4463FD..0x446536):
  research   C+0x119CC  9×[time,cost]          = 1.0
  resource   C+0x11A14  6 f32                   = 1.0   (oil,energy,metal,rare,money,(невикористаний))
  province   C+0x11A2C  11×[time,cost]          = 1.0   (0 = «all»-слот, 1 ic,2 coastalfort,3 landfort,4 flak,
                                                         5 infra,6 air_base,7 naval_base,8 radar,9 nuclear,10 rocket)
  production C+0x11A84 consumer, +0x11A88 production(national), +0x11A8C supplies,
             +0x11A90 reinforcement, +0x11A94 upgrading = 1.0
  дивізії    C+0x11A98 + 24·t + 4·k, t < N_div [0x87765C], k: 0 time=1, 1 cost=1, 2 org=0, 3 morale=0, 4 attack=0, 5 defence=0
  бригади    C+0x127B8 + 24·b + 4·k, b < N_brig [0x877670], те саме
  diplomacy  C+0x134D8  28 місій × 15 колонок    = 0
  intel      C+0x13B68  12 рядків × 4            = 0
  C+0x13C28 leader_skill=1, +0x13C2C speed=1, +0x13C30 non-national production=0, +0x13C34 dissent=1,
  +0x13C38 tc=1, +0x13C3C supply_consumption=1, +0x13C40/44 intel network nat/foreign=0,
  +0x13C48/4C belligerence peace/war=−0.25, +0x13C50 belligerence declare_war=1, +0x13C54 popgrowth nat=1,
  +0x13C58 popgrowth non-nat=0, +0x13C5C detection land=0, +0x13C60 detection navy=1, +0x13C64 detection convoy=0,
  +0x13C68/6C/70 intel report land/navy/production=0, +0x13C74..+0x13C80 stockpile=1
для i in 0..9: m = 0x428EE0(C+0x24E+6i); якщо m && m−8 && (p = (m−8)+0xBA) && p+0x20:
  для кожної команди cmd у p+0x20 (вузол [0]=cmd, [8]=next): v = cmd+0x10 (f32, СИРЕ значення);
     switch cmd+4 (таблиця 0x4540F4) — див. §4; майже всюди `поле = f32(поле + v)`
обмеження (0x453A6B..0x4540F3), «<lo → lo, інакше >hi → hi» (NaN → lo):
  [0.01,10]: research 18, resource 6, province 22, production 0x11A84..0x11A94 (5), дивізії k=0,1, бригади k=0,1,
             +0x13C28, +0x13C2C, +0x13C34, +0x13C38, +0x13C3C, +0x13C50, +0x13C54, +0x13C60, +0x13C74..+0x13C80
  [0,5]:     +0x13C40, +0x13C44     [0,10]: +0x13C58
  [−100,100]: intel 0x13B68 (48), +0x13C48, +0x13C4C, +0x13C5C, +0x13C64, +0x13C68/6C/70
  БЕЗ обмеження: +0x13C30, дивізії/бригади k=2..5 (org, morale, attack, defence), diplomacy 0x134D8
```

## 4. Таблиця відповідності команд → поля (обробники 0x451390, таблиця 0x4540F4) ✅

Позначення: `+=v` — f32(поле + v), v сире (без ·0.01); «мн.» — поле-множник (старт 1.0, споживач множить);
«дод.» — адитивна добавка (старт 0).

| type (№) | which | when | поле / дія | вид |
|---|---|---|---|---|
| research (0), 0x45158F | all / infantry 0 / armor 1 / naval 2 / aircraft 3 / industry 4 / land_doctrines 5 / secret_weapons 6 / naval_doctrines 7 / air_doctrines 8 (`which` 0x23,0x28,8..0xE) | time (дефолт) → `C+0x119CC+8i`; **будь-що інше** (cost) → `C+0x119D0+8i`; all → усі 9 | мн. (час/вартість досліджень категорії i = tech+0x7E) |
| resource (1), 0x451657 | all → 5 полів (oil..money, без 6-го); oil 0x11A14, energy 0x11A18, metal 0x11A1C, rare_materials 0x11A20, money 0x11A24 | — | мн. виробітку ресурсу провінції (0x4EC350…) / грошей (0x49DA32, 0x49DBE5) |
| production (2), 0x4516FA | consumer → 0x11A84; production: when==national(7) → **0x11A88**, інакше (non_national, all, …) → **0x13C30**; supplies → 0x11A8C; reinforcement → 0x11A90; upgrading → 0x11A94 | лише для production | 0x13C30 — дод., решта мн. |
| province (3), 0x451791 | all → 11 рядків; ic 1, coastalfort 2, landfort 3, flak 4, infra 5, air_base 6, naval_base 7, radar_station 8, nuclear_reactor 9, rocket_test 10 | all → time і cost; time → `0x11A2C+8r`; cost → `0x11A30+8r`; інші when — нічого | мн. (час/вартість будівель, 0x467070/0x4672C0) |
| unit (4), 0x4518BB | all → усі N_div; land → реальний тип 0xDBD162[t] < 12; navy → > 20 і ≠ 0x8C; air → 12..20 або == 0x8C; тип дивізії t = which − 0x23 | all → k0+k1; time k0; cost k1; organisation k2; morale k3; attack k4; defence k5; **speed → C+0x13C2C** (which ігнорується); інші when — нічого | k0,k1 мн.; k2..k5 дод. |
| extra (5), 0x452600 | all → бригади 1..N_brig−1 (0 = none пропускається); land/navy/air → гілка 0xDBF95A[b]+0x18 = 0/2/1; бригада b = which − 0xAE | all/time/cost/organisation/morale/attack/defence як у unit (без speed) | як unit. **Баг:** `which=air` + конкретний when пише в фіксоване `C+0x12920+4k` (бригада 15 = escort) один раз на кожну авіабригаду (0x452D73) |
| diplomacy_chances (6), 0x4532FD | місія (0x13A alliance, 0x141 influence_nation, …) → рядок r | all 8, weak 9, same 10, opposite 11, close 12, dictatorships 13, democracies 14 | `C+0x134D8 + 4·(15r + col)`, дод. |
| diplomacy_cost (7), 0x4533B4 | all → 28 рядків; місія → рядок | all 0, weak 1, same 2, opposite 3, close 4, dictatorships 5, democracies 6, national 7 | те саме, дод. |
| intelligence_chances (8) / _cost (9) | all → 9 рядків; steal_blueprint 0, minister_assassination 1, smear 2, coup 3, sabotage_industry 4, nuclear_sabotage..disrupt_techteam 5..8 | chances: non_national col2 / national col3; cost: col0 / col1 | `C+0x13B68 + 16·row + 4·col`, дод., [−100,100] |
| intelligence_report (10) | all → 0x13C68,6C,70; land → 0x13C68; navy → 0x13C6C; production → 0x13C70 | — | дод. |
| intelligence_network (11) | (лише якщо when не задано) all → 0x13BF8,0x13C08,0x13C18; send_spy(0x15E) 0x13BF8; decrease_… 0x13C08; daily_maintenance 0x13C18 | (якщо which не задано) non_national → 0x13C44; national → 0x13C40; all → обидва | дод.; 0x13C40/44 у [0,5] |
| leader_skill (12) | — | — | `C+0x13C28 += v`, мн. |
| dissent (13) | — | — | `C+0x13C34 += v`, мн. |
| tc_mod (14) | — | — | `C+0x13C38 += v`, мн. |
| detection (15) | land 0x13C5C; navy 0x13C60 (мн., старт 1); convoy 0x13C64 | — | дод. (land/convoy) |
| belligerence (16) | peace → 0x13C48; war → 0x13C4C (старт −0.25); declare_war → 0x13C50 (старт 1) | — | |
| populationgrowth (17) | — | national: `0x13C54 = f32((v+1)·0x13C54)` (**множення**); інакше → `0x13C58 += v` | |
| supply_consumption (18) | — | — | `C+0x13C3C += v`, мн. |
| stockpile (19) | all/industry(0xA)/supplies(0x16) | war 16 / peace 17 / all | 0x13C74..0x13C80 (не у ванілі) |

Підсумок: **усі** значення додаються сирими (`value` з файлу, f32), жодного `·0.01`. «Множник» означає лише, що
стартове значення 1.0 і споживач множить на поле; `1 + Σv` виходить автоматично. Порядок застосування = слот
0..9, усередині — порядок команд у файлі (впливає лише на f32-округлення).

## 5. Споживачі полів

Пошук усіх звертань до офсетів поза 0x451390..0x4540F4: єдині записи — ctor країни 0x4463FD..0x446536 (ті самі
стартові значення) і перерахунок. Технології/події ці поля **не змінюють** ✅ (TC-технології пишуть окреме
`C+0xE848`, див. logistics.md §C.2).

| поле | споживач (VA) | формула / роль | статус |
|---|---|---|---|
| 0x11A88 production | IC 0x49A740 (0x49A912) | `S += B·0x11A88 − B` | ✅ (logistics.md, частина B) |
| 0x13C30 non-national prod. | IC 0x49A740 (0x49A839) | для ненаціональної провінції `m = (власник==C ? e10 : e11) + 0x13C30`, `IC_пров·m` | ✅ (logistics.md, частина B) |
| 0x11A84 consumer | 0x4A3300 (0x4A334D) | частка CG-потреби = `base(0.1 війна?/0.2)·(1−складн.7)·policy+0x46 / econ ·0x11A84`, ≤ 0.9 → **+v = більша потреба (штраф)** | ✅ код, 🔎 base-умова |
| 0x11A8C supplies | 0x49B0C0 (0x49B0F3), 0x49C480 (0x49C58B), 0x49DC20 (0x49DCCE, 0x49DD59), 0x676D10, 0x7261E0 | виробництво припасів `IC_supplies·C+0x37EE·0x11A8C·[0xD7CA24]·…` | ✅ (0x49B0C0), 🔎 решта |
| 0x11A90 reinforcement | 0x4A5990, 0x4A59A0 → 0x44FD50 | costF = e36·0x11A90, timeF = (1/E85C)·e37·0x11A90 | ✅ (logistics.md, частина B) |
| 0x11A94 upgrading | 0x44FD50 (0x450663, 0x4506A8, 0x450D25, 0x450D58), UI 0x5D04AF | множить і вартість, і час апгрейду (дивізії та бригади) | ✅ |
| unit k0 time | 0x466B00 (0x466B3D) будівництво; 0x44FD50 (0x4501D3, 0x45069A) підкріплення/апгрейд; UI 0x5D0582 | `час = float(bt_моделі + bt_tech)·unit[t].time` (бригада: `·brig[b].time`, береться max) | ✅ |
| unit k1 cost | 0x466C20 (0x466C51), 0x467200, 0x4672E0; 0x44FD50 (0x4501B7, 0x450643) | `IC = (cost_моделі + cost_tech)·unit[t].cost·policy+0x76`, ≥0 (бригада `·brig[b].cost`) | ✅ |
| unit/brig k2 organisation | MaxORG (inline 0x4FBEB4, 0x4FBEF3, 0x4FF6C2, 0x503672, 0x5037D1, 0x503984, 0x503EE3) через 0x44C7F0(·,·,2) | MaxORG ·= max(0.01, 1 + v) | ✅ (organisation.md) |
| unit/brig k3 morale | регенерація ORG 0x503AD1 / 0x5041C8 через 0x44C7F0(·,·,3) | x ·= max(0.01, 1 + v) | ✅ (organisation.md) |
| 0x44C7F0 combat[164]=1 | v = C.unit[type][k]; якщо v == 0: v = **max** серед ненульових бригадних (лише додатні беруть гору, бо старт 0) | return max(0.01, 1+v) | ✅ (режим 2 при 0/0 → NaN → 0.01!) |
| unit/brig k4 attack, k5 defence | сухопутний бій 0x4C29E0 (0x4C3C37..0x4C3E5D), повітряний 0x4AF9B0 (0x4AFCE1..0x4AFF16), морський 0x4C6070 (0x4C6597..) | k = атакуючий (`бік+0x4E`) ? 4 : 5; країна = K = 0x5224F0(стек); combat[164]=1: якщо v == 0 → v = **сума** бригадних [k] (усіх приєднаних); якщо v ≠ 0: `A ·= 1 + v`, код модифікатора 0x25 | ✅ (рядок 17 land-combat.md; **інше поєднання, ніж у 0x44C7F0**) |
| 0x13C2C speed | 0x507FF0 (0x50835D) сухопутна швидкість стека | `best ·= K.+0x13C2C` | ✅ (закриває land-movement ❓5) |
| 0x13C28 leader_skill | 0x509D60 (0x509DBB) | ефективна навичка = (skill + дробовий прогрес досвіду)·leader.country(+0x62).+0x13C28; викликається з усіх боїв (0x4AFC3B повітряний бій, 0x4C3A9F, 0x4C5848, 0x4C6527…), 0x500170, 0x51C140, 0x51D510 та UI | ✅ |
| 0x13C38 tc | TC 0x49AD70 (0x49AD81); UI 0x49E559 | TC = (float(+0x3970) + max(IC·e1, 10))·0x13C38·0xE848 | ✅ (logistics.md, частина B) |
| 0x13C3C supply_consumption | 0x4FD570 (0x4FD591) потреба в припасах дивізії | `s = f32(country.+0x13C3C · s)`; **паливо не зачіпає** (інших читань немає) | ✅ |
| 0x13C34 dissent | 0x49DC20 (0x49DDBF, 0x49DDE1) щоденна зміна dissent від CG | дефіцит x<0: Δ = −(p4A·0x13C34·x) (росте ∝ поле); профіцит: Δ = −x/(p4A·0x13C34·econ) → **+v = штраф** | ✅ |
| 0x13C54 / 0x13C58 popgrowth | 0x49B110 (0x49B2D1 / 0x49B120) щоденний приріст MP | сума по провінціях ·0x13C54; 0x13C58>0 додає ненаціональним провінціям внесок `·0x13C58` | ✅ / 🔎 |
| research 0x119CC / 0x119D0 | 0x75A5F0 (0x75A7E9) час, 0x75AFD0 (0x75B003) вартість | ·поле[cat], cat = tech+0x7E | ✅ |
| resource 0x11A14..0x11A20 | 0x4EC350.. (0x4EC37D, 0x4EC49D, 0x4EC5BD, 0x4EC6DD, …) | виробіток ресурсу провінції ·поле | ✅ |
| province 0x11A2C / 0x11A30 | 0x467070 (0x46709D), 0x4672C0 (0x4672CB) | час/вартість будівель | 🔎 |
| diplomacy / intel / belligerence / detection / stockpile | дипломатія, шпигунство, ворожість, розвідка | не досліджено (поза сухопутною військовою/економічною частиною) | — |

## 6. Коли виконується перерахунок

Виклики 0x451390: лише 0x45826D (у 0x458250 «поставити міністра в слот») і 0x782603 (GAME_STARTED). **Не щодня.** ✅
1. **GAME_STARTED** (подія 0x4D): глобальний обробник 0x781D90 (гілка 0x7822D8 → цикл 0x78259D..0x78261F по всіх
   країнах 0x89CA98..0x89CFF4: стосунки, потім `0x451390`, `0x46F4C0`). Обидві підгілки (0x7822ED) сходяться
   в 0x782536 → цикл виконується завжди ✅. 0x781D90 викликається з маршрутизатора широкомовних подій 0x565A40
   (0x565BFE), коли ігровий об'єкт [0x893710] позначив +0x111 = 1 на 0x4D (0x42FDCE).
2. **Сетап країни** vt+0x130 = 0x482CE0 (теж на GAME_STARTED через диспетчер країни 0x4A8B40 → 0x4A930B):
   після розсилки ADD_MINISTER (0x129, лише пул C+0x2A0) викликає `0x44D880(C, 4.0)` (0x482E48) — перевірку
   кабінету: для кожного слота, якщо міністр NULL / ще не почав (`+0x1A > рік`) / мертвий (`+0xBE`) — він
   вважається відсутнім (бал 1000), інакше, якщо не пройшов 0x4A46C0, бал = |ідеологія − ідеологія уряду|
   (0x760460: таблиця 0xD56F04[democratic·10 + political_left]; NS0 FA1 PA2 SC3 ML4 SL5 SD6 LWR7 LE8 ST9);
   кандидати з пулу C+0x2A0 з посадою = слот або рисою `all`, що вже почали, живі, не в іншому слоті; бал
   кандидата = max(|Δідеології|, 4.0) (+ поправка на `value` риси для порожнього слота) — береться найменший,
   якщо менший за бал поточного → `0x458250` → **перерахунок** і dissent ·0.95 (0x44DBC8). 🔎 (деталі балу/0x4A46C0,
   який дивиться пул країни гравця [0xD0CA50]). Наслідок: дійсний сценарний міністр з |Δідеології| ≤ 4 не
   замінюється; порожній/невідомий id/ще не активний — замінюється найкращим з пулу (якщо такий є).
3. **CHANGE_MINISTER** (0x127 → vt+0x140 = 0x473A00): старий іде в пул, новий у слот, перерахунок.
4. **INIT_MINISTER** (0x128 → vt+0x13C = 0x473BD0): лише якщо слот порожній, міністр живий і вже почав.
5. **Щорічно** (0x4860D0 = vt+0x22C, TIMER_YEAR, при прапорці 0xDC191C): 0x462E00 знімає з посад міністрів
   з роком відставки `+0x22 ≤ рік` (0x458250 з порожнім ключем 0x88F24C → перерахунок) і видаляє їх.
* ❓ Порядок «сетап країни (IC/TC знімок 0x482EAE)» vs «0x781D90» не доведено: 0x781D90 викликається прямо з
  маршрутизатора; хто доставляє 0x4D у vt+0xC країн — не знайдено. Вплив — лише на знімок до першого TIMER_DAY.

## 7. Німеччина 1936 (scenarios/1936/germany.inc, ministers_ger.csv) — перевірено двома незалежними моделями

| слот | id | міністр | риса | ефект |
|---|---|---|---|---|
| 0 HoS | 1 | Adolf Hitler | Powerhungry Demagogue | belligerence peace −0.5 (→ −0.75), war +0.2 (→ −0.05); diplomacy_chances alliance/dictatorships +25 |
| 1 HoG | 2 | Rudolf Hess | Silent Workhorse | **0x11A88 = 1.05f** (0x3F866666); diplomacy_cost all +0.2 |
| 2 FM | 3 | C. von Neurath | Great Compromiser | diplomacy_cost (bring/join/offer alliance, guarantee −0.5; leave/ban −0.4) |
| 3 Arm | 4 | W. von Blomberg | Infantry Proponent | research infantry time 0x119CC[0] = 0.9 |
| 4 Sec | 5 | Wilhelm Frick | Prince of Terror | **0x13C30 = 0.15**; **0x11A84 = 1.10** (CG-потреба +10%) |
| 5 Int | 6 | W. Canaris | Dismal Enigma | intel network nat/foreign 5/5; intel report production 1 |
| 6 CoS | 7 | Ludwig Beck | School of Manoeuvre | **0x13C2C = 1.1f** (0x3F8CCCCD) |
| 7 CoA | 8 | W. von Fritsch | Armoured Spearhead Doctrine | armor(5)/mechanized(3): time=cost=0.95f (0x3F733333), attack +0.05; бригади sp_artillery(2), sp_rct_artillery(4), tank_destroyer(6): time=cost=0.95, attack +0.05 |
| 8 CoN | 9 | Erich Raeder | Decisive Naval Battle Doctrine | attack +0.05: battleship 21, light_cruiser 22, heavy_cruiser 23, battlecruiser 24; carrier 26 attack −0.1 |
| 9 CoA(air) | 10 | Hermann Göring | Army Aviation Doctrine | tactical_bomber 15, cas 17: time=cost=0.95, attack +0.05, defence +0.05; strategic_bomber 14: time=cost=1.1 |
Решта: leader_skill 1, dissent 1, tc 1, supply 1, popgrowth 1/0, supplies/reinforcement/upgrading 1.
Усі 10 рис знайдено в minister_personalities.txt (регістр CSV інший — `_stricmp`).
Наслідки: IC 135 (logistics.md, частина B), швидкість стеків ×1.1, танки/мехи: будівництво й підкріплення ×0.95,
атака в бою ×1.05 (на дивізію; без бригадного fallback, бо v ≠ 0).

### 1.4 Валідатор 0x7653A0 (доповнення) ✅
* `value == 0` → недійсна команда (0x7653A3..0x7653AE → 0x7657B2 `al=0`) → «Error in command for minister
  personality.», блок рис повертає −2.
* `unit` + `when = speed` дійсне **лише без which** (0x765784: `which == 0x161`).
* Решта таблиць комбінацій (0x7657B8 …) не розписана; ванільний файл, очевидно, проходить (🔎).

## 8. Відкриті питання
1. ❓ Порядок сетапу країни (vt+0x130, IC/TC знімок) і 0x781D90 у межах GAME_STARTED (див. §6).
2. 🔎 Точна семантика 0x4A46C0 (перевіряє пул країни гравця [0xD0CA50]) і балів 0x44D880 для порожнього слота
   (`value` риси, [0xD7CBC8]); для ванільної Німеччини 1936 заміни немає (усі |Δідеології| ≤ 2 < 4).
3. 🔎 Ролі 0x49C480 / 0x676D10 / 0x7261E0 щодо 0x11A8C; 0x455C90 (читає unit k2 + режим combat[164], ймовірно
   AI-оцінка); база 0.1/0.2 у 0x4A3300 (0x44BE70 = «у війні»?).
4. 🔎 Таблиця рядків дипломатичних місій 28×15 (0x454F04/0x454F28 для chances) — не розписана.

## 9. Незалежна перевірка: доповнення ✅

1. **Повторний ID** у CSV: ім'я, ідеологія, риса, лояльність і портрет **не** перепризначаються — діє перший запис
   (`0x76D721`, `0x76DB0F`, `0x76DC79`, `0x76DC9E`). У ванілі повторів немає; усі 13 917 рядків ванільних CSV
   збігаються з рисою точно, тож таблиця одруківок не спрацьовує.
2. Реєстр об'єктів спільний для всіх видів, а перерахунок вид не перевіряє: слот із ключем не типу 9 читався б хибно.
3. **Виняток із правила додавання:** `populationgrowth` з `when = national` **множить**: `0x13C54 = f32((v+1)·0x13C54)`
   (`0x45391D`). Обмеження: менше 0.01f → 0.01, інакше більше 10 → 10, NaN → 0.01. Масиви одиниць і бригад мають
   по 140 записів, але скидаються й обмежуються лише існуючі типи.
4. **Валідатор команд** (`0x7653A0`): `which = production` дозволяє лише `when` = national/non_national; consumer,
   supplies, reinforcement, upgrading — без `when`; `unit when = speed` — без `which`; leader_skill, dissent, tc_mod,
   supply_consumption — без `which` і `when`; `value = 0` — недійсне. Усі 250 ванільних команд проходять. **Недійсна
   команда все одно діє** (уже додана до списку риси, риса вже зареєстрована), але решта блоку риси втрачається.
5. **Чия країна для кожного споживача:** IC і TC — власна країна; потреба припасів — країна дивізії (`div+0x5C`, якщо
   є); поповнення — країна, що поповнює (стеки, де `0x5224F0(стек) == C`), вартість `unit[t].k1·e36·0x11A90`, час
   `unit[t].k0·(1/E85C)·e37·0x11A90`; **MaxORG (k = 2)** — країна дивізії; **мораль у відновленні ORG (k = 3)** —
   країна командування стека (`0x5224F0`), у старій логіці лише при додатному відновленні; бойовий рядок 17 — країна
   командування стека, множник `1+v` без нижньої межі 0.01; швидкість суходолу — країна командування (або власник),
   діє й під час відступу, до нижньої межі 1.0; навичка генерала — країна самого генерала (`leader+0x62`).
6. Фолбек `0x44C7F0` за бригадами — поточний максимум, що починається з 0, серед **ненульових** значень бригад,
   тож від'ємні значення бригад не виграють.
7. Формула TC у §5: `max(IC·economy[1], 10)` (не `min`).
8. **Інші тригери перерахунку:** перевірка кабінету `0x44D880(C, поріг)` має 9 викликів — GAME_STARTED (поріг 4.0),
   зміна політики (лише повзунки democratic / political_left, 2.0), дипломатична подія (2.0 / 0), створення країни,
   зміна тегу, падіння режиму, подія 0x1CD (усі 0) і щорічна відставка (4.0). Будь-яка заміна міністра запускає
   `0x458250` → перерахунок і `dissent ·= 0.95`. На старті 1936 Німеччина нікого не міняє: усі |Δідеології| ≤ 2 < 4.
