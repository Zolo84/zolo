# Специфікація: юніти (`db/units/**`, типи класів, моделі, назви)

Область: класи юнітів (дивізії та бригади) Darkest Hour (Europa Engine, лінія HoI2) — каталог типів,
файли класів із блоками `model`, модернізації (`upgrade`), приєднувані бригади, DH-специфічні файли
`division_types.txt` / `brigade_types.txt`, рядкові ресурси назв класів і моделей, а також списки імен
нових дивізій (`db/unitnames.csv`) та корпусів (`db/armynames.csv`, `db/navynames.csv`, `db/airnames.csv`).

Джерело фактів — "Alternative HoI2 Editor" (C#, `/home/user/pylypenko99/hoi2editor/HoI2Editor`). Код
**не** копіюється; нижче — опис формату власними словами. Посилання `Файл.cs:рядок` дані відносно
`HoI2Editor/`. Усе, що виведено логічно, а не прочитано прямо в коді, позначено **(припущення)**.
Приклади файлів у цьому документі — власні ілюстрації з вигаданими числами, а не фрагменти гри.

Прочитані файли: `Models/Unit.cs`, `Models/Units.cs`, `Parsers/UnitParser.cs`, `Writers/UnitWriter.cs`,
`Models/UnitNames.cs`, `Models/CorpsNames.cs`, `Models/Branches.cs` (усі повністю); пов'язані місця в
`Models/Game.cs`, `Models/Config.cs`, `Models/Misc.cs`, `Models/Countries.cs`, `Models/Commands.cs`,
`Parsers/TextLexer.cs`, `Parsers/CsvLexer.cs`, `Parsers/Token.cs`, `Utilities/DoubleHelper.cs`,
`Forms/UnitEditorForm.cs` (+ `.Designer.cs`, `.resx`), `Forms/MainForm.cs`.

**Звірка з грою.** Документ перевірено на реальних файлах DH 1.05.1 (GOG): `db/units/**` ванілі, мод
`Mods/Darkest Hour Full/db/units/**`, сценарії `scenarios/**`, `db/misc.txt`, офіційний "Guide to Darkest
Hour.pdf" — і на парсері/логіці `Darkest Hour.exe` (32-біт, база образу `0x400000`; адреси — VA). Результати
зведено в **§17 «Звірка з даними гри та exe»**; там, де опис за редактором суперечив грі, текст §1–§16
виправлено з посиланням на §17. Позначки в оновлених місцях: **✅** — підтверджено на даних гри, **🔎** —
прочитано з exe (VA вказано), **❓** — гіпотеза. Позначка **(припущення)** у старому тексті означає те саме, що ❓.

---

## 1. Огляд

* Кожен **клас юніта** (`UnitClass`) — це або **дивізія** (division), або **бригада** (brigade)
  (`Models/Unit.cs:3017-3021`). Клас має набір атрибутів класу та впорядкований список **моделей**
  (`model`), які є «поколіннями» техніки цього класу (`Models/Unit.cs:11-143`).
* Внутрішній каталог редактора містить **305** значень `UnitType`: `Undefined` (0), 140 дивізійних
  типів (1–140) і 164 бригадних типи (141–304) (`Models/Unit.cs:3026-3340`). Які саме з них доступні,
  залежить від гри та версії (§3.2). У DH ≥ 1.03 доступно 140 дивізійних + 140 бригадних типів.
  🔎 Рушій DH 1.05.1 теж має рівно 140 (`0x8c`) слотів на дивізії й на бригади; реально **визначені** типи —
  це неперервний префікс слотів, описаних у `division_types.txt`/`brigade_types.txt` (ваніль: 31 і 27; DH Full:
  41 і 41, ✅) — §17.2.
* На кожен тип — **окремий текстовий файл** `<рядок_типу>.txt` у `db\units\divisions\` або
  `db\units\brigades\` (`Models/Game.cs:263-268`, `Models/Units.cs:1696-2003`, `Models/Units.cs:2303-2319`).
  Файл містить ключі рівня класу (дозволені бригади, модернізації, ...) і послідовність блоків `model = { ... }`.
  Індекс моделі = її порядковий номер у файлі, починаючи з 0 (`Writers/UnitWriter.cs:97-102`).
* **DH ≥ 1.03** додає два файли метаданих класів: `db\units\division_types.txt` і
  `db\units\brigade_types.txt` (`Models/Game.cs:353-358`, `Models/Units.cs:2229-2248`) — там задаються
  «реальний тип» (поведінка рушія), гілка, рядкові ключі назв/описів, спрайт, пріоритети, військова
  цінність тощо.
* Назви класів і моделей не зберігаються у файлах юнітів: це **ключі рядкових таблиць**
  (`config\unit_names.csv`, `config\models.csv`). Ключ моделі будується з числового **ID класу** (`#ID`,
  §3.3) та індексу моделі: `MODEL_<id>_<idx>`, `BRIG_MODEL_<id>_<idx>`, плюс національні варіанти
  `MODEL_<TAG>_<id>_<idx>` (`Models/Unit.cs:2078-2098`).
* Окремо існують CSV-списки імен для **нових дивізій** (`db\unitnames.csv`, `TAG;ТИП;Ім'я`) і **корпусів**
  (`db\armynames.csv` / `navynames.csv` / `airnames.csv`, `TAG;Ім'я`) (`Models/Game.cs:453-468`).
* Бінарних форматів у цій області **немає**: усе — текст (скриптовий синтаксис `ключ = значення` або CSV
  з роздільником `;`).

---

## 2. Файли та їх розташування

### 2.1 Перелік файлів

| Шлях (відносно кореня гри/мода) | Константа | Формат | Гра | Читання / запис |
|---|---|---|---|---|
| `db\units\divisions\<тип>.txt` | `Game.DivisionPathName` (`Models/Game.cs:263`) | скрипт (§5) | усі | `Models/Units.cs:2303-2319` / `Writers/UnitWriter.cs:21-104` |
| `db\units\brigades\<тип>.txt` | `Game.BrigadePathName` (`Models/Game.cs:268`) | скрипт (§5) | усі | те саме |
| `db\units\division_types.txt` | `Game.DhDivisionTypePathName` (`Models/Game.cs:353`) | скрипт (§6) | DH ≥ 1.03 | `Parsers/UnitParser.cs:1971-2040` / `Writers/UnitWriter.cs:536-787` |
| `db\units\brigade_types.txt` | `Game.DhBrigadeTypePathName` (`Models/Game.cs:358`) | скрипт (§7) | DH ≥ 1.03 | `Parsers/UnitParser.cs:2048-2103` / `Writers/UnitWriter.cs:794-948` |
| `config\unit_names.csv` | `Game.UnitTextFileName` (`Models/Game.cs:398`) | рядкова таблиця (§8) | усі | `Models/Config.cs:560-670` / `Models/Config.cs:725-823` |
| `config\models.csv` | `Game.ModelTextFileName` (`Models/Game.cs:403`) | рядкова таблиця (§8) | усі | те саме |
| `db\unitnames.csv` | `Game.UnitNamesPathName` (`Models/Game.cs:453`) | CSV 3 колонки (§10) | усі | `Models/UnitNames.cs:295-407` / `Models/UnitNames.cs:417-477` |
| `db\armynames.csv` | `Game.ArmyNamesPathName` (`Models/Game.cs:458`) | CSV 2 колонки (§11) | усі | `Models/CorpsNames.cs:79-250` / `Models/CorpsNames.cs:260-366` |
| `db\navynames.csv` | `Game.NavyNamesPathName` (`Models/Game.cs:463`) | те саме | усі | те саме |
| `db\airnames.csv` | `Game.AirNamesPathName` (`Models/Game.cs:468`) | те саме | усі | те саме |
| `gfx\interface\models\*.bmp` | `Game.ModelPicturePathName` (`Models/Game.cs:288`) | BMP (лише читання) | усі | `Forms/UnitEditorForm.cs:4184-4258` |

Повний перелік імен файлів класів — у §3.1 (колонка «рядок типу» + `.txt`). Правило без винятків:
ім'я файлу = рядок типу з `Units.Strings` + `.txt` (`Models/Units.cs:108-415` vs `Models/Units.cs:1696-2003`;
перевірено поелементно для всіх 304 типів; для `Undefined` ім'я порожнє).

### 2.2 Пошук файлу: ваніль / мод / тека експорту

* Шляхи в редакторі — Windows-стилю з `\` (`Models/Game.cs:218-493`). Імена файлів і тек — **у нижньому
  регістрі**. Редактор покладається на нечутливу до регістру ФС Windows; для Rust на Linux потрібен
  пошук без урахування регістру **(припущення)**.
* Читання (`Game.GetReadFileName`, `Models/Game.cs:585-604`) перевіряє **кожен файл окремо** у такому порядку:
  1. тека експорту (якщо задана) — для DH це `<гра>\Mods\<ExportName>` (`Models/Game.cs:870-874`);
  2. тека мода (якщо задана) — для DH це `<гра>\Mods\<ModName>` (`Models/Game.cs:839-844`, константа
     `ModPathNameDh = "Mods"`, `Models/Game.cs:303`); для HoI2/AoD — `<гра>\<ModName>` (`Models/Game.cs:846-848`);
  3. ванільна тека гри.
  Береться перший шлях, де файл (або тека) існує. Отже мод може перекрити лише частину файлів класів
  (наприклад, тільки `infantry.txt`), решта береться з ванілі.
* Запис (`Game.GetWriteFileName`, `Models/Game.cs:623-634`): у теку експорту, інакше в теку мода, інакше у
  ваніль. Відсутні теки `divisions\`/`brigades\`/`db\` створюються (`Models/Units.cs:2426-2430`,
  `Models/Units.cs:2486-2491`, `Models/UnitNames.cs:428-433`, `Models/CorpsNames.cs:347-352`).
* Рядкові таблиці `config\*.csv` шукаються інакше: зчитуються **всі** `*.csv` з `config\` експорту, мода і
  ванілі; файл з тим самим ім'ям (без урахування регістру) з вищої за пріоритетом теки затіняє нижчий
  (`Models/Config.cs:352-442`). `editor.csv` і `launcher.csv` ігноруються (`Models/Config.cs:574-577`).
  Підтека `config\Additional` читається **лише для AoD** (`Models/Config.cs:444-538`) — у DH її немає.
* Відсутній файл класу юніта — не помилка: клас просто лишається без моделей (`Models/Units.cs:2311-2314`).
  Відсутній `division_types.txt`/`brigade_types.txt` — теж не помилка (`Models/Units.cs:2327-2331`,
  `Models/Units.cs:2348-2352`). Відсутній будь-який із трьох файлів корпусів позначає завантаження як
  невдале (`Models/CorpsNames.cs:119-122`, `144-147`, `169-172`).

### 2.3 Кодування, кінці рядків, числа

* Кодування всіх файлів цієї області — **кодова сторінка гри** `Game.CodePage`, однакова для читання й
  запису (`Parsers/TextLexer.cs:112`, `Parsers/CsvLexer.cs:112`, `Writers/UnitWriter.cs:23`,
  `Models/UnitNames.cs:460`, `Models/CorpsNames.cs:356`, `Models/Config.cs:758`). Вибір сторінки
  (`Forms/MainForm.cs:730-761`): англомовна гра (DH) — **CP1252**, але **CP1251**, якщо вибрано російську
  мову (індекс мови 7); японська — 932; корейська — 949; традиційна китайська — 950; спрощена — 936.
  Для DH практично: CP1252 (або CP1251 для російської локалізації).
* Читання — через `StreamReader` .NET з явною кодовою сторінкою; .NET за замовчуванням ще й розпізнає BOM
  (тобто файл з UTF-8 BOM буде прочитано як UTF-8) **(припущення про поведінку .NET 3.5,
  `HoI2Editor.csproj:12`)**. Запис — без BOM.
* Кінці рядків при записі — `WriteLine` .NET на Windows, тобто **CRLF** **(припущення)**. Читання приймає
  CR, LF і CRLF (`Parsers/TextLexer.cs:237-255`).
* Числа пишуться через `double.ToString(InvariantCulture)` (`Utilities/DoubleHelper.cs:163-166`): крапка як
  десятковий роздільник, без зайвих нулів (`1`, `0.5`, `12.75`). Читання — `double.TryParse` з
  `NumberStyles.Float` та InvariantCulture (`Utilities/DoubleHelper.cs:349-352`).
* Цілі поля (`max_allowed_brigades`, `eyr`, `gfx_prio`, `list_prio`, `ui_prio`, номер моделі автомодернізації,
  `max_speed_step`) читаються як `double` і **усікаються** до `int` (`Parsers/UnitParser.cs:131`, `272`, `1659`,
  `2457`, `2580`, `2636`, `2667`).

### 2.4 Визначення гри та версії

* DH розпізнається за наявністю `Darkest Hour.exe` у теці гри (`Models/Game.cs:906-913`).
* Версія DH читається з exe пошуком ASCII-рядка `Darkest Hour v ` і трьох цифр після нього: `X.YZ` →
  `X*100 + Y*10 + Z` (наприклад, 1.03 → `103`); якщо рядок не знайдено — вважається `102`
  (`Models/Game.cs:1035-1051`).
* Межа **DH 1.03** (`Game.Version >= 103`) вмикає: розширені списки типів (§3.2), файли
  `division_types.txt`/`brigade_types.txt`, ключі моделі `speed_cap` і `equipment`, «прапорець сутності»
  (§12.6), розширений набір типів у `unitnames.csv` (`Models/Units.cs:2064-2068`, `Models/Units.cs:2230`,
  `Parsers/UnitParser.cs:1664`, `Models/Unit.cs:2299-2303`, `Models/UnitNames.cs:254-261`).
  DH 1.02 (і нижче) для юнітів поводиться як HoI2 + DH-ключі файлів класів (§13).

---

## 3. Каталог типів

### 3.1 Таблиця типів юнітів

Джерела колонок: індекс і ім'я переліку — `Models/Unit.cs:3026-3340`; рядок типу —
`Models/Units.cs:108-415`; `#ID` — `Units.UnitNumbers`, `Models/Units.cs:880-1187`; гілка за
замовчуванням — `Models/Unit.cs:185-492`; організація — `Models/Unit.cs:497-804`; основа ключів назви —
`Models/Unit.cs:809-1116`; макс. бригад за замовчуванням — `Models/Unit.cs:1121-1428`.
Колонка «Гра»: **усі** = HoI2, AoD, DH; **AoD** = лише AoD; **DH3** = лише DH ≥ 1.03 (§3.2).

Основа ключів назви `S` дає 4 ключі за замовчуванням: `NAME_S`, `SNAME_S`, `LDESC_S`, `SDESC_S`
(`Models/Unit.cs:1463-1467`). У DH ≥ 1.03 їх можна перевизначити в `division_types.txt`/`brigade_types.txt`.
Якщо основа = рядок типу у верхньому регістрі, у колонці стоїть «=»; інакше вказано явно.

**Дивізії** (організація `Division`):

| # | `UnitType` | рядок типу (= ім'я файлу без `.txt`) | `#ID` | гілка | основа назви | макс. бригад | гра |
|---|---|---|---|---|---|---|---|
| 0 | `Undefined` | `""` | 0 | None | `""` | 0 | (службовий) |
| 1 | `Infantry` | `infantry` | 0 | Army | = | 1 | усі |
| 2 | `Cavalry` | `cavalry` | 1 | Army | = | 1 | усі |
| 3 | `Motorized` | `motorized` | 2 | Army | = | 1 | усі |
| 4 | `Mechanized` | `mechanized` | 3 | Army | = | 1 | усі |
| 5 | `LightArmor` | `light_armor` | 4 | Army | = | 1 | усі |
| 6 | `Armor` | `armor` | 5 | Army | = | 1 | усі |
| 7 | `Paratrooper` | `paratrooper` | 6 | Army | = | 1 | усі |
| 8 | `Marine` | `marine` | 7 | Army | = | 1 | усі |
| 9 | `Bergsjaeger` | `bergsjaeger` | 8 | Army | = | 1 | усі |
| 10 | `Garrison` | `garrison` | 9 | Army | = | 1 | усі |
| 11 | `Hq` | `hq` | 10 | Army | = | 1 | усі |
| 12 | `Militia` | `militia` | 11 | Army | = | 1 | усі |
| 13 | `MultiRole` | `multi_role` | 12 | Airforce | = | 0 | усі |
| 14 | `Interceptor` | `interceptor` | 13 | Airforce | = | 0 | усі |
| 15 | `StrategicBomber` | `strategic_bomber` | 14 | Airforce | = | 1 | усі |
| 16 | `TacticalBomber` | `tactical_bomber` | 15 | Airforce | = | 1 | усі |
| 17 | `NavalBomber` | `naval_bomber` | 16 | Airforce | = | 1 | усі |
| 18 | `Cas` | `cas` | 17 | Airforce | = | 0 | усі |
| 19 | `TransportPlane` | `transport_plane` | 18 | Airforce | = | 0 | усі |
| 20 | `FlyingBomb` | `flying_bomb` | 19 | Airforce | = | 0 | усі |
| 21 | `FlyingRocket` | `flying_rocket` | 20 | Airforce | = | 0 | усі |
| 22 | `BattleShip` | `battleship` | 21 | Navy | = | 5 | усі |
| 23 | `LightCruiser` | `light_cruiser` | 22 | Navy | = | 2 | усі |
| 24 | `HeavyCruiser` | `heavy_cruiser` | 23 | Navy | = | 3 | усі |
| 25 | `BattleCruiser` | `battlecruiser` | 24 | Navy | = | 4 | усі |
| 26 | `Destroyer` | `destroyer` | 25 | Navy | = | 1 | усі |
| 27 | `Carrier` | `carrier` | 26 | Navy | = | 1 | усі |
| 28 | `EscortCarrier` | `escort_carrier` | 27 | Navy | = | 0 (🔎 у грі **1**, §17.4) | усі |
| 29 | `Submarine` | `submarine` | 28 | Navy | = | 0 | усі |
| 30 | `NuclearSubmarine` | `nuclear_submarine` | 29 | Navy | = | 0 | усі |
| 31 | `Transport` | `transport` | 30 | Navy | = | 0 | усі |
| 32 | `LightCarrier` | `light_carrier` | 31 | Navy | = | 0 (🔎 у грі 1) | DH3 |
| 33 | `RocketInterceptor` | `rocket_interceptor` | 32 | Airforce | = | 0 (🔎 у грі 1) | DH3 |
| 34–41 | `ReserveDivision33`…`ReserveDivision40` | `d_rsv_33`…`d_rsv_40` | 33…40 | Army | = (`D_RSV_33`…) | 0 (🔎 у грі 1) | DH3 |
| 42–140 | `Division01`…`Division99` | `d_01`…`d_99` (дві цифри) | 41…139 | Army | = (`D_01`…) | 0 (🔎 у грі 1) | DH3 |

🔎 Колонка «макс. бригад» — значення редактора. Рушій заповнює типові ліміти **за індексом типу дивізії**
(`#ID`) інакше: усі 140 слотів = 1, крім `multi_role`, `interceptor`, `cas`, `transport_plane`, `flying_bomb`,
`flying_rocket`, `submarine`, `nuclear_submarine`, `transport` (= 0) та `light_cruiser` 2, `heavy_cruiser` 3,
`battlecruiser` 4, `battleship` 5 (VA `0x770cb9`…`0x770d42`). Розбіжності з редактором: `escort_carrier`,
`light_carrier`, `rocket_interceptor`, `d_rsv_*`, `d_*` мають у грі 1, а не 0. Деталі — §17.4.

**Бригади** (організація `Brigade`; «макс. бригад» для всіх = 0 і не застосовується):

| # | `UnitType` | рядок типу | `#ID` | гілка | основа назви | гра |
|---|---|---|---|---|---|---|
| 141 | `None` | `none` | 0 | Army | = | усі |
| 142 | `Artillery` | `artillery` | 1 | Army | = | усі |
| 143 | `SpArtillery` | `sp_artillery` | 2 | Army | = | усі |
| 144 | `RocketArtillery` | `rocket_artillery` | 3 | Army | = | усі |
| 145 | `SpRctArtillery` | `sp_rct_artillery` | 4 | Army | `SP_ROCKET_ARTILLERY` | усі |
| 146 | `AntiTank` | `anti_tank` | 5 | Army | `ANTITANK` | усі |
| 147 | `TankDestroyer` | `tank_destroyer` | 6 | Army | = | усі |
| 148 | `LightArmorBrigade` | `light_armor_brigade` | 7 | Army | `LIGHT_ARMOR` (збігається з дивізією!) | усі |
| 149 | `HeavyArmor` | `heavy_armor` | 8 | Army | = | усі |
| 150 | `SuperHeavyArmor` | `super_heavy_armor` | 9 | Army | = | усі |
| 151 | `ArmoredCar` | `armored_car` | 10 | Army | = | усі |
| 152 | `AntiAir` | `anti_air` | 11 | Army | `ANTIAIR` | усі |
| 153 | `Police` | `police` | 12 | Army | = | усі |
| 154 | `Engineer` | `engineer` | 13 | Army | = | усі |
| 155 | `Cag` | `cag` | 14 | **Navy** | = | усі |
| 156 | `Escort` | `escort` | 15 | **Airforce** | = | усі |
| 157 | `NavalAsw` | `naval_asw` | 16 | Navy | = | усі |
| 158 | `NavalAntiAirS` | `naval_anti_air_s` | 17 | Navy | = | усі |
| 159 | `NavalRadarS` | `naval_radar_s` | 18 | Navy | = | усі |
| 160 | `NavalFireControllS` | `naval_fire_controll_s` (sic, `ll`) | 19 | Navy | = | усі |
| 161 | `NavalImprovedHullS` | `naval_improved_hull_s` | 20 | Navy | = | усі |
| 162 | `NavalTorpedoesS` | `naval_torpedoes_s` | 21 | Navy | = | усі |
| 163 | `NavalAntiAirL` | `naval_anti_air_l` | 22 | Navy | = | усі |
| 164 | `NavalRadarL` | `naval_radar_l` | 23 | Navy | = | усі |
| 165 | `NavalFireControllL` | `naval_fire_controll_l` | 24 | Navy | = | усі |
| 166 | `NavalImprovedHullL` | `naval_improved_hull_l` | 25 | Navy | = | усі |
| 167 | `NavalTorpedoesL` | `naval_torpedoes_l` | 26 | Navy | = | усі |
| 168 | `NavalMines` | `naval_mines` | 27 | Navy | = | AoD |
| 169 | `NavalSaL` | `naval_sa_l` | 28 | Navy | = | AoD |
| 170 | `NavalSpotterL` | `naval_spotter_l` | 29 | Navy | = | AoD |
| 171 | `NavalSpotterS` | `naval_spotter_s` | 30 | Navy | = | AoD |
| 172–191 | `ExtraBrigade1`…`ExtraBrigade20` | `b_u1`…`b_u20` (без ведучого нуля) | 31…50 | Army | = (`B_U1`…) | AoD |
| 192 | `CavalryBrigade` | `cavalry_brigade` | **27** | Army | = | DH3 |
| 193 | `SpAntiAir` | `sp_anti_air` | 28 | Army | = | DH3 |
| 194 | `MediumArmor` | `medium_armor` | 29 | Army | = | DH3 |
| 195 | `FloatPlane` | `floatplane` | 30 | Navy | = | DH3 |
| 196 | `LightCag` | `light_cag` | 31 | Navy | `LCAG` | DH3 |
| 197 | `AmphArmor` | `amph_armor` | 32 | Army | `AMPH_LIGHT_ARMOR_BRIGADE` | DH3 |
| 198 | `GliderArmor` | `glider_armor` | 33 | Army | `GLI_LIGHT_ARMOR_BRIGADE` | DH3 |
| 199 | `GliderArtillery` | `glider_artillery` | 34 | Army | `GLI_LIGHT_ARTILLERY` | DH3 |
| 200 | `SuperHeavyArtillery` | `super_heavy_artillery` | 35 | Army | `SH_ARTILLERY` | DH3 |
| 201–205 | `ReserveBrigade36`…`ReserveBrigade40` | `b_rsv_36`…`b_rsv_40` | 36…40 | Army | = (`B_RSV_36`…) | DH3 |
| 206–304 | `Brigade01`…`Brigade99` | `b_01`…`b_99` | 41…139 | Army | = (`B_01`…) | DH3 |

Примітки:
* `#ID` бригад AoD (27–50) і DH (27–139) **перетинаються**: обидві гри нумерують свої додаткові бригади з 27.
  Rust-реалізації для DH досить DH-нумерації.
* Ім'я `NavalFireControll*` з подвоєним `ll` — ідентифікатор гри, відтворювати точно.
* Тип `d_rsv_33…40` / `b_rsv_36…40` зарезервовано під «Darkest Hour Full» (так їх позначає запис
  редактора, `Writers/UnitWriter.cs:568-575`, `Writers/UnitWriter.cs:830-833`).
* «Гілка» з таблиці — лише початкове значення; у DH ≥ 1.03 гілку дивізії визначає її реальний тип
  (§6.3), гілку бригади — `type = land/naval/air` (§7.2).

### 3.2 Доступні типи за грою

`Units.InitTypes` (`Models/Units.cs:2057-2078`) обирає два списки й об'єднує їх у `UnitTypes`:

| Гра | Дивізії | Бригади |
|---|---|---|
| HoI2 та **DH < 1.03** | 31 тип: #1–31 (`Models/Units.cs:1234-1267`) | 27 типів: #141–167 (`Models/Units.cs:1457-1486`) |
| AoD | ті самі 31 (`Models/Units.cs:1272-1305`) | 51 тип: #141–191 (`Models/Units.cs:1491-1544`) |
| **DH ≥ 1.03** | 140 типів: #1–140 (`Models/Units.cs:1310-1452`) | 140 типів: #141–167, #192–304 (`Models/Units.cs:1549-1691`) |

Порядок у списках (і, отже, порядок запису блоків у `division_types.txt`/`brigade_types.txt`) — порядок
переліку `UnitType`. Важливо: порядок дивізій такий: `infantry, cavalry, motorized, mechanized, light_armor,
armor, paratrooper, marine, bergsjaeger, garrison, hq, militia, multi_role, interceptor, strategic_bomber,
tactical_bomber, naval_bomber, cas, transport_plane, flying_bomb, flying_rocket, battleship, light_cruiser,
heavy_cruiser, battlecruiser, destroyer, carrier, escort_carrier, submarine, nuclear_submarine, transport,
light_carrier, rocket_interceptor, d_rsv_33…d_rsv_40, d_01…d_99`.

Тип, якого немає в поточному списку, відкидається всюди: файл класу не читається (`Models/Units.cs:2252-2275`),
посилання на нього в `allowed_brigades`, `upgrade`, `transmute`, блоках `*_types.txt` і автомодернізації
вважаються недійсними токенами (`Parsers/UnitParser.cs:95-102`, `1890-1897`, `2022-2029`, `2085-2092`,
`2542-2549`, `1629-1636`).

### 3.3 Числовий ID класу (`#ID`)

`Units.UnitNumbers` (`Models/Units.cs:880-1187`) — внутрішній номер класу всередині своєї організації:
дивізії 0…139, бригади 0…139 (див. §3.1). Він **не пишеться як ключ** у файлах класів — лише як коментар
`#ID <n>` у `division_types.txt`/`brigade_types.txt` (`Writers/UnitWriter.cs:576`, `Writers/UnitWriter.cs:838`).
Використання ID (усе — факти з коду):

* ключі рядків назв моделей: `MODEL_<id>_<idx>` (дивізії), `BRIG_MODEL_<id>_<idx>` (бригади),
  `MODEL_<TAG>_<id>_<idx>` / `BRIG_MODEL_<TAG>_<id>_<idx>` (національні) (`Models/Unit.cs:2078-2098`);
* імена картинок моделей `ill_div_<id>_<idx>.bmp`, `ill_bri_<id>_<idx>.bmp`, `model_<id>_<idx>.bmp` (§9);
* коди типів `27`, `31`, `32` у `db\unitnames.csv` (§10).

Число ID збігається з порядковим номером типу в списку дивізій/бригад даної гри (з урахуванням того, що
AoD і DH нумерують свої додаткові бригади незалежно) — тобто ID є позицією в «рядку» типів рушія.
🔎 Підтверджено для DH: ім'я типу перетворюється рушієм у фіксований індекс 0…139 через таблицю ключових слів
(дивізії — функція `0x4fd890`, бригади — `0x4fdf10`); цей індекс і є `#ID`. Коментар `#ID` у файлі рушій не
читає; порядок блоків у `*_types.txt` значення не має (§17.2). Індекс адресує всі масиви рушія (моделі,
ліміт бригад, матриці `allowed_brigades`/`upgrade`, колонки `modifiers.csv`).

### 3.4 Реальний тип дивізії (`RealUnitType`, DH ≥ 1.03)

Задається в `division_types.txt` ключем `type` і визначає поведінку рушія (якою «справжньою» дивізією є
клас). Рядки — `Models/Units.cs:420-453`; перелік — `Models/Unit.cs:3351-3384`; відповідний `UnitType` для
відображення — `Models/Units.cs:650-683`; гілка, яку отримує клас — `Models/Units.cs:1192-1225`.

| # | рядок | гілка | | # | рядок | гілка |
|---|---|---|---|---|---|---|
| 0 | `infantry` | Army | | 16 | `naval_bomber` | Airforce |
| 1 | `cavalry` | Army | | 17 | `transport_plane` | Airforce |
| 2 | `motorized` | Army | | 18 | `battleship` | Navy |
| 3 | `mechanized` | Army | | 19 | `light_cruiser` | Navy |
| 4 | `light_armor` | Army | | 20 | `heavy_cruiser` | Navy |
| 5 | `armor` | Army | | 21 | `battlecruiser` | Navy |
| 6 | `garrison` | Army | | 22 | `destroyer` | Navy |
| 7 | `hq` | Army | | 23 | `carrier` | Navy |
| 8 | `paratrooper` | Army | | 24 | `submarine` | Navy |
| 9 | `marine` | Army | | 25 | `transport` | Navy |
| 10 | `bergsjaeger` | Army | | 26 | `flying_bomb` | Airforce |
| 11 | `cas` | Airforce | | 27 | `flying_rocket` | Airforce |
| 12 | `multi_role` | Airforce | | 28 | `militia` | Army |
| 13 | `interceptor` | Airforce | | 29 | `escort_carrier` | Navy |
| 14 | `strategic_bomber` | Airforce | | 30 | `nuclear_submarine` | Navy |
| 15 | `tactical_bomber` | Airforce | | | | |

Зверніть увагу: порядок реальних типів відрізняється від порядку `UnitType` (`garrison`, `hq` стоять перед
`paratrooper`; `cas` — перед `multi_role`; `militia` — після ракет). Реальних типів `light_carrier` і
`rocket_interceptor` **немає**: ці класи мусять мати реальний тип з цього списку (наприклад, `carrier` /
`interceptor`). ✅ DH Full так і робить: `light_carrier` → `type = carrier`, `rocket_interceptor` →
`type = interceptor` (а також перевизначає `heavy_cruiser` → `type = light_cruiser`).

> **Виправлення (🔎, §17.6).** Нумерація 0–30 у таблиці вище — внутрішній перелік **редактора**, а не гри.
> Рушій трактує значення `type` як **ім'я типу дивізії** (та сама функція `0x4fd890`) і зберігає його індекс
> `#ID` (масив реальних типів за VA `0xdbd162`, 140 × int32). Клас рушія визначається діапазоном цього індексу:
> 0–11 (`infantry`…`militia`) — сухопутний, 12–20 (`multi_role`…`flying_rocket`) — авіація, > 20 (і ≠ `0x8c`) —
> флот (`0x458190`). Тобто справжній порядок — порядок `#ID` (§3.1), а не порядок з коментаря-заголовка файлу
> (`… armor, garrison, hq, paratrooper …`), який повторює редактор. Додаткові прапорці рушія теж прив'язані до
> індексів `#ID`: 19/20 — ракети, 26/27 — авіаносці, 28/29 — підводні човни (`0x4fd011`…`0x4fd051`).

За коментарем редактора, реальний тип використовують AI виробництва (militia, infantry), повстанці
(militia, infantry) і «прибульці» (infantry, armor, strategic_bomber, interceptor, destroyer, carrier)
(`Models/Unit.cs:3345-3349`, `Writers/UnitWriter.cs:672-677`).

### 3.5 Тип спрайта (`SpriteType`, DH ≥ 1.03)

Рядки — `Models/Units.cs:458-601`, перелік — `Models/Unit.cs:3389-3532`, відповідність класу (для
відображення) — `Models/Units.cs:688-831`. 141 значення:

| # | рядок | | # | рядок | | # | рядок |
|---|---|---|---|---|---|---|---|
| 0 | `infantry` | | 12 | `bomber` | | 24 | `transport` |
| 1 | `cavalry` | | 13 | `tactical` | | 25 | `militia` |
| 2 | `motorized` | | 14 | `cas` | | 26 | `garrison` |
| 3 | `mechanized` | | 15 | `naval` | | 27 | `hq` |
| 4 | `l_panzer` | | 16 | `transportplane` (без `_`) | | 28 | `flying_bomb` |
| 5 | `panzer` | | 17 | `battleship` | | 29 | `rocket` |
| 6 | `paratrooper` | | 18 | `battlecruiser` | | 30 | `nuclear_submarine` |
| 7 | `marine` | | 19 | `heavy_cruiser` | | 31 | `escort_carrier` |
| 8 | `bergsjaeger` | | 20 | `light_cruiser` | | 32 | `light_carrier` |
| 9 | `fighter` | | 21 | `destroyer` | | 33 | `rocket_interceptor` |
| 10 | `escort` | | 22 | `carrier` | | 34–41 | `d_rsv_33`…`d_rsv_40` |
| 11 | `interceptor` | | 23 | `submarine` | | 42–140 | `d_01`…`d_99` |

### 3.6 Ресурси обладнання (`EquipmentType`, DH ≥ 1.03)

Ключі всередині `equipment = { ... }` моделі (§5.5). Рядки — `Models/Units.cs:606-645`, перелік —
`Models/Unit.cs:3537-3576`, рядкові ключі назв — `Models/Units.cs:836-875`.

| # | ключ | рядок назви | | # | ключ | рядок назви |
|---|---|---|---|---|---|---|
| 0 | `manpower` | `EQ_MANPOWER` | | 19 | `heavy_bomber` | `EQ_HEAVY_BOMBERS` |
| 1 | `equipment` | `EQ_EQUIPMENT` | | 20 | `transport_plane` | `EQ_TRANSPORT_PLANES` |
| 2 | `artillery` | `EQ_ARTILLERY` | | 21 | `floatplane` | `EQ_FLOATPLANE` |
| 3 | `heavy_artillery` | `EQ_HEAVY_ARTILLERY` | | 22 | `helicopter` | `EQ_HELICOPTERS` |
| 4 | `anti_air` | `EQ_ANTI_AIR` | | 23 | `rocket` | `EQ_ROCKETS` |
| 5 | `anti_tank` | `EQ_ANTI_TANK` | | 24 | `balloon` | `EQ_BALLOONS` |
| 6 | `horses` | `EQ_HORSES` | | 25 | `transports` | `EQ_CONV_TRANS` |
| 7 | `trucks` | `EQ_TRUCKS` | | 26 | `escorts` | `EQ_CONV_ESC` |
| 8 | `halftracks` | `EQ_HALFTRACKS` | | 27 | `transport` | `EQ_TRANSPORT` |
| 9 | `armored_car` | `EQ_ARMORED_CARS` | | 28 | `battleship` | `EQ_BATTLESHIP` |
| 10 | `light_armor` | `EQ_LIGHT_ARMOR` | | 29 | `battlecruiser` | `EQ_BATTLECRUISER` |
| 11 | `medium_armor` | `EQ_MEDIUM_ARMOR` | | 30 | `heavy_cruiser` | `EQ_HEAVY_CRUISER` |
| 12 | `heavy_armor` | `EQ_HEAVY_ARMOR` | | 31 | `carrier` | `EQ_CARRIER` |
| 13 | `tank_destroyer` | `EQ_TANK_DESTROYER` | | 32 | `escort_carrier` | `EQ_ESCORT_CARRIER` |
| 14 | `sp_artillery` | `EQ_SP_ARTILLERY` | | 33 | `light_cruiser` | `EQ_LIGHT_CRUISER` |
| 15 | `fighter` | `EQ_FIGHTERS` | | 34 | `destroyer` | `EQ_DESTROYER` |
| 16 | `heavy_fighter` | `EQ_HEAVY_FIGHTERS` | | 35 | `submarine` | `EQ_SUBMARINE` |
| 17 | `rocket_interceptor` | `EQ_ROCKET_INTERCEPTORS` | | 36 | `nuclear_submarine` | `EQ_NUCLEAR_SUBMARINE` |
| 18 | `bomber` | `EQ_BOMBERS` | | | | |

`transports`/`escorts` — конвойні транспорти й ескорти (рядки `EQ_CONV_TRANS`/`EQ_CONV_ESC`), на відміну від
`transport` (транспортний корабель) **(припущення щодо змісту, ключі — факт)**.

### 3.7 Гілка (`Branch`)

`None = 0`, `Army = 1`, `Navy = 2`, `Airforce = 3` (`Models/Branches.cs:52-58`). Рядкові ключі назв гілок у
редакторі: `EYR_ARMY`, `EYR_NAVY`, `EYR_AIRFORCE` (`Models/Branches.cs:15-21`, `Models/Config.cs:197-199`).
Гілка визначає, які ключі моделі осмислені (§5.3) і які бригади можна приєднувати (§12.2).

---

## 4. Лексика скриптових файлів

Усі три скриптові формати (`<тип>.txt`, `division_types.txt`, `brigade_types.txt`) читаються одним лексером
`TextLexer` у режимі пропуску пробілів (`Parsers/TextLexer.cs:59-64`, виклики — `Parsers/UnitParser.cs:32`,
`1973`, `2050`):

* **Пробіли/керуючі символи** пропускаються (`Parsers/TextLexer.cs:235-256`).
* **Коментар**: `#` до кінця рядка, де завгодно (`Parsers/TextLexer.cs:259-265`).
* **Число**: починається з цифри, `-` або `.`; далі цифри й щонайбільше одна `.` (`Parsers/TextLexer.cs:273-276`,
  `335-404`). Експоненти (`1E-05`) **не підтримуються**: якщо після цифр іде літера, а мінуса/крапки ще не
  було, токен стає ідентифікатором (`Parsers/TextLexer.cs:377-384`) — так читаються ідентифікатори, що
  починаються з цифри.
* **Ідентифікатор**: літера або `_`, далі літери/цифри/`_` (`Parsers/TextLexer.cs:279-282`, `410-437`).
  Дефіс, крапка тощо до ідентифікатора не входять.
* **Рядок у лапках** `"..."`: без escape-послідовностей, обривається на кінці рядка (`Parsers/TextLexer.cs:443-476`).
  **Увага**: парсери юнітів очікують для значень `name`/`desc`/`allowed_brigades`/... саме *ідентифікатор*, тож
  значення в лапках буде відкинуто як недійсне (`Parsers/UnitParser.cs:73`, `2258`, `2337` тощо) — це
  обмеження редактора; чи приймає лапки гра — невідомо (§16).
* `=`, `{`, `}` — окремі токени (`Parsers/TextLexer.cs:292-310`).
* Ключові слова порівнюються **без урахування регістру** (переводяться в нижній регістр перед порівнянням:
  `Parsers/UnitParser.cs:57`, `425`, `1769`, `1852`, `1998`, `2075`, `2155`, `2242`); значення-ідентифікатори
  типів, `yes`/`no`, `land`/`naval`/`air` — теж (`Parsers/UnitParser.cs:85`, `340`, `1604`, `1880`, `2270`,
  `2489`, `2532`, `2699`). Рядкові ключі (`name = NAME_X`) зберігаються як є.
* Обробка помилок у редакторі: при невідомому ключі чи недійсному значенні редактор **пропускає залишок
  фізичного рядка** (`lexer.SkipLine()`, напр. `Parsers/UnitParser.cs:364-365`, `1709-1711`). Rust-парсер має
  бути токенним, а не рядковим (§14).
* 🔎 Рушій розрізняє **цілочисельний** і **дробовий** числовий токен (внутрішні коди типу токена `0x524` і
  `0x525`; ❓ що саме лексер відносить до кожного — виведено з того, які ключі якого коду вимагають). Ключі `eyr`, `gfx_prio`, `list_prio`, `ui_prio` у `*_types.txt` і кількості в `equipment` вимагають
  саме цілого токена (інакше помилка «Invalid … value»); `value` приймає обидва. `buildtime` і номер моделі
  автомодернізації читаються через `atoi` — дробова частина відкидається; решта чисел моделі — через `atof` у
  `float32` (§17.3). ✅ У даних ванілі й DH Full ці поля завжди цілі.
* ❓ Регістр: у сценаріях, які реально підключаються, трапляються `Militia`, `HQ`, `Carrier`, `heavy_Cruiser`,
  `SP_artillery`, `CAG` (✅) — отже, гра, найімовірніше, порівнює ключові слова без урахування регістру; в exe це
  не перевірено.

---

## 5. Файл класу юніта: `db\units\divisions\<тип>.txt`, `db\units\brigades\<тип>.txt`

### 5.1 Ключі верхнього рівня

Розбір — `Parsers/UnitParser.cs:30-370`; запис — `Writers/UnitWriter.cs:21-104`.

| Ключ | Значення | Повторюваний | Гра (читання) | Запис редактором | Зміст |
|---|---|---|---|---|---|
| `allowed_brigades` | ідентифікатор типу **бригади** з поточного списку (§3.2) | так, по одному на рядок | усі (`Parsers/UnitParser.cs:60-107`) | кожен елемент списку окремим рядком (`Writers/UnitWriter.cs:68-73`) | бригади, які дозволено приєднувати до цього класу |
| `max_allowed_brigades` | число (ціле) | ні | усі (`Parsers/UnitParser.cs:110-133`) | **лише DH**, лише якщо значення ≥ 0 **і** список `allowed_brigades` не порожній (`Writers/UnitWriter.cs:74-78`) | максимальна кількість приєднаних бригад; `-1` у пам'яті = «не задано» (`Models/Unit.cs:1443`) |
| `upgrade` | блок `{ type = <дивізія> upgrade_time_factor = <f> upgrade_cost_factor = <f> }` | так | усі (`Parsers/UnitParser.cs:136-148`) | **лише DH**, кожен блок одним рядком (`Writers/UnitWriter.cs:83-94`) | вартість/час переобладнання дивізії цього класу в інший клас (§5.4) |
| `model` | блок `{ ... }` | так; порядок = індекс моделі 0,1,2,… | усі (`Parsers/UnitParser.cs:151-170`) | `Writers/UnitWriter.cs:96-102` | одна модель (§5.2) |
| `detachable` | `yes` / `no` | ні | **лише DH** (`Parsers/UnitParser.cs:312-361`) | лише DH і лише `yes` (+ порожній рядок) (`Writers/UnitWriter.cs:53-57`) | бригаду можна від'єднувати від дивізії. 🔎 **Виправлення:** у грі ключ допустимий **лише у файлах бригад**; типове значення залежить від гілки бригади: сухопутні й повітряні — `yes`, морські — `no` (VA `0x7717e7`…`0x7717f7`, §17.6). ✅ DH Full ставить `detachable = yes` тільки морським `cag`, `floatplane`, `light_cag` |
| `land_unit_type` / `naval_unit_type` / `air_unit_type` | рівно `1` | ні | **лише AoD** (`Parsers/UnitParser.cs:172-250`) | лише AoD (`Writers/UnitWriter.cs:26-42`) | гілка класу в AoD |
| `max_speed_step` | 0, 1 або 2 | ні | **лише AoD** (`Parsers/UnitParser.cs:253-283`) | лише AoD, лише для дивізій, лише якщо < 2 (`Writers/UnitWriter.cs:45-50`) | максимальна швидкість виробництва (0 = звичайна ×1, 1 = прискорена ×1.25, 2 = надзвичайна ×1.5 — підписи з `Forms/UnitEditorForm.resx:363-371`); за замовчуванням 2 (`Models/Unit.cs:1450-1454`) |
| `locked` | будь-яке число | ні | **лише AoD** (`Parsers/UnitParser.cs:286-309`) | лише AoD, бригада, не від'єднувана: `locked = 1` (`Writers/UnitWriter.cs:60-65`) | інверсія `detachable` в AoD; у AoD бригади за замовчуванням від'єднувані (`Models/Unit.cs:1456-1460`) |

Будь-який інший ключ верхнього рівня — недійсний (`Parsers/UnitParser.cs:363-365`). Зокрема, у DH
ключі AoD (`land_unit_type`, `locked`, …) недійсні, а в AoD/HoI2 недійсний `detachable`.

🔎 **Що реально приймає DH 1.05.1** (помилка для решти — «unknown lhs in unit file», VA `0x77109f`/`0x771827`):

| Файл | Дозволені ключі верхнього рівня | VA |
|---|---|---|
| `divisions\<тип>.txt` | `allowed_brigades`, `max_allowed_brigades`, `upgrade`, `model` | `0x770e42`…`0x7710b0` |
| `brigades\<тип>.txt` | `model`, `detachable` | `0x771816`…`0x77184d` |

Тобто `detachable` у файлі дивізії та `allowed_brigades`/`upgrade`/`max_allowed_brigades` у файлі бригади —
помилки. `max_allowed_brigades` після завантаження обмежується діапазоном 0…5 (поза ним — помилка й
підстановка 0 або 5, VA `0x7716b9`…`0x771720`). ✅ Ванільні файли використовують лише `allowed_brigades` і
`model` (бригади — лише `model`); DH Full додатково — `upgrade` (53 блоки), `max_allowed_brigades` (9 файлів),
`detachable` (3 файли).

Порядок, у якому редактор пише секції: (AoD-гілка) → (AoD `max_speed_step`) → `detachable` → (AoD `locked`)
→ `allowed_brigades`… + `max_allowed_brigades` + порожній рядок → `upgrade`… + порожній рядок → для кожної
моделі рядок-коментар `# <індекс> - <назва моделі>` і блок `model = { … }` (`Writers/UnitWriter.cs:115-116`).
Чи важливий порядок для гри — невідомо; найімовірніше, ні **(припущення)**.

### 5.2 Ключі блоку `model`

Розбір — `Parsers/UnitParser.cs:377-1715`. Усі значення — числа (`double`), окрім позначених. Відсутній
ключ = 0 (поля моделі ініціалізуються нулем, `Models/Unit.cs:2600-2602`), окрім `upgrade_time_boost`
(за замовчуванням `yes`, `Models/Unit.cs:2547`).

> **Виправлення (🔎, §17.3).** У грі типові значення інші: `upgrade_time_factor` = `upgrade_cost_factor` =
> `reinforce_time` = `reinforce_cost` = **1.0** (конструктор моделі `0x4f61a0`; ✅ Guide: «Changed default values
> of upgrade_time_factor and upgrade_cost_factor from 0.0 to 1.0»), `no_fuel_combat_mod`,
> `no_supplies_combat_mod`, `out_of_fuel_speed` — з `misc.txt` (§17.9). Набір дозволених ключів у грі жорстко
> залежить від **класу моделі** (сухопутний / авіація / флот), а не від того, дивізія це чи бригада: ключ чужого
> класу дає помилку «Unknown Type in …Division». Колонка «Гілки» нижче — лише думка редактора; авторитетна
> таблиця — §17.3. Ще три ключі, яких редактор не знає: `on_upgrade`, `out_of_fuel_speed`,
> `no_supplies_combat_mod` (§17.3). Значення бригадних моделей — **приріст** до дивізії (від'ємні `maxspeed`,
> `softness` у даних — ✅), а не абсолютні характеристики (§17.7).

Колонка «Гілки» показує, для яких класів редактор вважає поле осмисленим (UI вмикає поле:
`Forms/UnitEditorForm.cs:3436-3939`); колонка «Одиниці» — **(припущення)** з загальних знань про лінію
HoI2, у коді одиниць немає.

| Ключ | Поле | Рядок розбору | Гілки | Зміст | Одиниці (припущення) |
|---|---|---|---|---|---|
| `cost` | `Cost` | `Parsers/UnitParser.cs:428` | усі | вартість виробництва в IC; `0` = модель «не визначена» (§12.5) | IC на день виробництва |
| `buildtime` | `BuildTime` | `:454` | усі | час виробництва; 🔎 **ціле** (`atoi`), дробова частина відкидається | дні |
| `manpower` | `ManPower` | `:480` | усі | людські ресурси | тисячі осіб |
| `maxspeed` | `MaxSpeed` | `:506` | усі | швидкість пересування; ✅🔎 у бригади — **приріст** до швидкості дивізії (ваніль: артилерія −1/−2, надважка броня −4, інженери +0,5) | км/год |
| `speed_cap_art` | `SpeedCapArt` | `:532` | сухопутні дивізії | 🔎 стеля швидкості, коли приєднано бригаду типу саме `artillery` (індекс 1) | км/год |
| `speed_cap_eng` | `SpeedCapEng` | `:558` | сухопутні дивізії | 🔎 те саме для `engineer` (індекс 13) | км/год |
| `speed_cap_at` | `SpeedCapAt` | `:584` | сухопутні дивізії | 🔎 те саме для `anti_tank` (індекс 5) | км/год |
| `speed_cap_aa` | `SpeedCapAa` | `:610` | сухопутні дивізії | 🔎 те саме для `anti_air` (індекс 11); на `rocket_artillery`, `sp_artillery`, `tank_destroyer` тощо стелі **не діють** (§17.7) | км/год |
| `range` | `Range` | `:636` | флот, авіація | дальність дії | км |
| `defaultorganisation` | `DefaultOrganization` | `:662` | усі | організованість (британське написання `organisation`!) | бали |
| `morale` | `Morale` | `:688` | усі | мораль | бали |
| `defensiveness` | `Defensiveness` | `:714` | сухопутні | оборона | бали |
| `seadefence` | `SeaDefense` | `:740` | флот | оборона від надводних/підводних атак (`defence`, не `defense`) | бали |
| `airdefence` | `AirDefence` | `:766` | усі | оборона від повітряних атак | бали |
| `surfacedefence` | `SurfaceDefence` | `:792` | авіація | оборона від наземних/корабельних атак | бали |
| `toughness` | `Toughness` | `:818` | сухопутні | живучість | бали |
| `softness` | `Softness` | `:844` | сухопутні | «м'якість» — частка небронованих цілей; 🔎 у бою атака по сухопутній цілі = (hardattack·(100 − softness) + softattack·softness)·0,01 (`0x4ff324`…`0x4ff344`) | % (0–100) |
| `suppression` | `Suppression` | `:870` | сухопутні | придушення (боротьба з партизанами) | бали |
| `softattack` | `SoftAttack` | `:896` | сухопутні, авіація | атака по небронованих | бали |
| `hardattack` | `HardAttack` | `:922` | сухопутні, авіація | атака по броньованих | бали |
| `seaattack` | `SeaAttack` | `:948` | флот | атака корабель-корабель | бали |
| `subattack` | `SubAttack` | `:974` | флот | протичовнова атака | бали |
| `convoyattack` | `ConvoyAttack` | `:1000` | флот | атака конвоїв | бали |
| `shorebombardment` | `ShoreBombardment` | `:1026` | флот | обстріл узбережжя | бали |
| `airattack` | `AirAttack` | `:1052` | усі | атака по повітряних цілях | бали |
| `navalattack` | `NavalAttack` | `:1078` | авіація | атака літаків по кораблях | бали |
| `strategicattack` | `StrategicAttack` | `:1104` | авіація | стратегічне бомбардування | бали |
| `distance` | `Distance` | `:1130` | флот | дистанція (дальність стрільби) | км |
| `surfacedetectioncapability` | `SurfaceDetectionCapability` | `:1156` | флот, авіація | виявлення надводних цілей | бали |
| `subdetectioncapability` | `SubDetectionCapability` | `:1182` | флот | виявлення підводних човнів | бали |
| `airdetectioncapability` | `AirDetectionCapability` | `:1208` | флот, авіація | виявлення повітряних цілей | бали |
| `visibility` | `Visibility` | `:1234` | флот | помітність | бали |
| `transportweight` | `TransportWeight` | `:1260` | сухопутні | потрібна транспортна місткість | одиниці TC |
| `transportcapability` | `TransportCapability` | `:1286` | флот, авіація | транспортна місткість (транспорти, транспортна авіація) | одиниці TC |
| `supplyconsumption` | `SupplyConsumption` | `:1312` | усі | споживання постачання | од./день |
| `fuelconsumption` | `FuelConsumption` | `:1338` | усі | споживання пального | од./день |
| `upgrade_time_factor` | `UpgradeTimeFactor` | `:1364` | усі (у HoI2/AoD не для дивізій флоту, `Forms/UnitEditorForm.cs:3854-3879`) | множник часу модернізації до цієї моделі | множник |
| `upgrade_cost_factor` | `UpgradeCostFactor` | `:1390` | те саме | множник вартості модернізації | множник |
| `artillery_bombardment` | `ArtilleryBombardment` | `:1419` | **лише AoD**, сухопутні бригади | артилерійський обстріл | бали |
| `max_supply_stock` | `MaxSupplyStock` | `:1445` | **лише AoD**, сухопутні | макс. запас постачання | од. |
| `max_oil_stock` | `MaxOilStock` | `:1471` | **лише AoD**, сухопутні | макс. запас пального | од. |
| `no_fuel_combat_mod` | `NoFuelCombatMod` | `:1501` | **лише DH**, сухопутні дивізії (🔎 гра приймає в усіх трьох класах) | бойовий модифікатор без пального; типове — з `misc.txt` (§17.9) | ❓ приріст до множника 1 |
| `reinforce_time` | `ReinforceTimeFactor` | `:1527` | **лише DH**, дивізії (🔎 гра приймає в усіх моделях) | множник часу поповнення; 🔎 типове 1,0 | множник |
| `reinforce_cost` | `ReinforceCostFactor` | `:1553` | **лише DH**, дивізії (🔎 так само) | множник вартості поповнення; 🔎 типове 1,0 | множник |
| `upgrade_time_boost` | `UpgradeTimeBoost` (`yes`/`no`) | `:1579` | **лише DH** | ✅ Guide: `yes` — час модернізації моделей, застарілих на 2+ рівні, зменшується; `no` — без такого зменшення; за замовчуванням `yes` | — |
| `<рядок_типу> = <n>` | `AutoUpgrade`, `UpgradeClass`, `UpgradeModel` | `:1627-1661` | **лише DH** | автоматична модернізація в модель `<n>` класу `<рядок_типу>` (§5.6); 🔎 `n = -2` — модель не модернізується | індекс моделі (з 0) |
| `speed_cap` | `SpeedCap` | `:1667` | **лише DH ≥ 1.03**, сухопутні бригади (🔎 гра приймає в будь-якій сухопутній моделі) | 🔎 стеля швидкості дивізії: діє найменше додатне `speed_cap` серед приєднаних бригад (§17.7) | км/год |
| `on_upgrade` | — (редактор не знає) | — | 🔎 усі класи | `yes`/`no`, типово `no`; ✅ Guide: `yes` — при модернізації до наступної моделі брати `upgrade_time_factor`/`upgrade_cost_factor` **поточної** моделі замість наступної | — |
| `out_of_fuel_speed` | — | — | 🔎 усі класи | швидкість паливної одиниці без пального; типове для сухопутних — з `misc.txt` (§17.9) | км/год |
| `no_supplies_combat_mod` | — | — | 🔎 усі класи | бойовий модифікатор без постачання; типове — з `misc.txt` (§17.9) | ❓ приріст до множника 1 |
| `equipment` | список `UnitEquipment` | `:1693` | **лише DH ≥ 1.03** | склад обладнання моделі (§5.5) | — |

Ключі розбираються незалежно від гілки класу: наприклад, `seaattack` у сухопутній дивізії буде прочитано
й збережено в пам'яті, але редактор його не запише (§5.3). Неочікуваний ключ → недійсний токен
(`Parsers/UnitParser.cs:1709-1711`). 🔎 **У грі інакше:** кожен клас моделі має власний парсер (сухопутний
`0x4f7830`, авіаційний `0x4f9210`, морський `0x4faea0`), і ключ чужого класу (`seaattack` у сухопутній моделі,
`transportweight` в авіаційній, `range` у сухопутній) — помилка «Unknown Type in LandDivision/AirDivision/
NavalDivision». ✅ Скрипт-звірка: усі ключі моделей ванілі та DH Full належать до набору свого класу (§17.3).

У DH розбір автомодернізації стоїть **після** усіх загальних ключів і DH-ключів `no_fuel_combat_mod`…
`upgrade_time_boost` (`Parsers/UnitParser.cs:1626-1661`), тому будь-який ключ, що збігається з рядком
типу (наприклад, `infantry`, `escort`, `transport`, `armor`), трактується як автомодернізація. 🔎 У грі так
само: невідомий ключ спершу шукається серед імен типів дивізій, потім — бригад; якщо знайдено, це
автомодернізація (VA `0x4f7cb7`…`0x4f7d12`).

### 5.3 Що і коли пише редактор (матриця за гілкою/організацією)

`Writers/UnitWriter.cs:188-249` (сухопутна дивізія), `257-303` (флот, дивізія), `310-350` (авіація, дивізія),
`357-430` (сухопутна бригада), `437-490` (флот, бригада), `497-529` (авіація, бригада).

Позначки: **A** — завжди; **≠0** — лише якщо не нуль; **DH≠0** — лише DH і не нуль; **DH3≠0** — лише DH ≥ 1.03 і
не нуль; **AoD≠0** — лише AoD і не нуль; **—** — ніколи. Якщо `cost` = 0, пишеться тільки `cost = 0`, решта ключів
блоку цієї гілки пропускається (§12.5).

| Ключ | Сух. див. | Флот див. | Авіа див. | Сух. бриг. | Флот бриг. | Авіа бриг. |
|---|---|---|---|---|---|---|
| `cost` | A | A | A | A | A | A |
| `buildtime` | A | A | A | A | A | A |
| `manpower` | A | A | A | A | A | A |
| `maxspeed` | A | A | A | ≠0 | ≠0 | A |
| `defaultorganisation` | A | A | A | ≠0 | ≠0 | A |
| `morale` | A | A | A | ≠0 | ≠0 | A |
| `defensiveness` | A | — | — | ≠0 | — | — |
| `toughness` | A | — | — | ≠0 | — | — |
| `softness` | A | — | — | ≠0 | — | — |
| `suppression` | A | — | — | ≠0 | — | — |
| `airdefence` | A | A | A | ≠0 | A | A |
| `seadefence` | — | A | — | — | ≠0 | — |
| `surfacedefence` | — | — | A | — | — | A |
| `softattack` | A | — | A | ≠0 | — | A |
| `hardattack` | A | — | A | ≠0 | — | A |
| `airattack` | A | A | A | ≠0 | A | A |
| `seaattack` | — | A | — | — | A | — |
| `subattack` | — | A | — | — | A | — |
| `convoyattack` | — | A | — | — | A | — |
| `shorebombardment` | — | A | — | — | A | — |
| `navalattack` | — | — | A | — | — | A |
| `strategicattack` | — | — | A | — | — | A |
| `surfacedetectioncapability` | — | A | A | — | A | A |
| `airdetectioncapability` | — | A | A | — | A | A |
| `subdetectioncapability` | — | A | — | — | A | — |
| `visibility` | — | A | — | — | ≠0 | — |
| `range` | — | A | A | — | ≠0 | A |
| `distance` | — | A | — | — | A | — |
| `transportweight` | A | — | — | ≠0 | — | — |
| `transportcapability` | — | A | ≠0 | — | ≠0 | ≠0 |
| `supplyconsumption` | A | A | A | A | A | A |
| `fuelconsumption` | A | A | A | ≠0 | A | A |
| `speed_cap_art/eng/at/aa` | ≠0 | — | — | — | — | — |
| `speed_cap` | — | — | — | DH3≠0 | — | — |
| `upgrade_time_factor` | A | **DH≠0** | A | A | A | A |
| `upgrade_cost_factor` | A | **DH≠0** | A | A | A | A |
| `no_fuel_combat_mod` | DH≠0 | — | — | — | — | — |
| `reinforce_time` | DH≠0 | DH≠0 | DH≠0 | — | — | — |
| `reinforce_cost` | DH≠0 | DH≠0 | DH≠0 | — | — | — |
| `artillery_bombardment` | — | — | — | AoD≠0 | — | — |
| `max_supply_stock`, `max_oil_stock` | AoD≠0 | — | — | — | — | — |

Після ключів гілки, для **всіх** гілок (`Writers/UnitWriter.cs:155-178`), і навіть якщо `cost` = 0:
* DH: рядок автомодернізації `<рядок_типу> = <n>`, якщо `AutoUpgrade` (`:158-161`);
* DH: `upgrade_time_boost = no`, якщо значення `no` (значення `yes` не пишеться) (`:163-166`);
* DH ≥ 1.03: `equipment = { k = v k = v … }` одним рядком, якщо список не порожній (`:170-178`).

Відступи — табуляції; між ключем і `=` редактор вирівнює табуляціями (`Writers/UnitWriter.cs:190-248`) — для
гри це лише пробільні символи **(припущення)**.

### 5.4 Блок `upgrade` (модернізація між класами)

* Синтаксис: `upgrade = { type = <тип_дивізії> upgrade_time_factor = <f> upgrade_cost_factor = <f> }`
  (`Writers/UnitWriter.cs:87-91`). Порядок ключів усередині довільний (`Parsers/UnitParser.cs:1825-1960`).
* `type` має бути **дивізійним** типом поточної гри (`Parsers/UnitParser.cs:1890-1897`); інші ключі блоку — лише
  два множники. Невідомий ключ → недійсний токен.
* Зміст: з дивізії поточного класу можна переобладнатися на клас `type` з указаними множниками часу і
  вартості. ✅ Guide: «Implemented upgrade to another unit type functionality … upgrade = { type = …
  upgrade_time_factor = x.xx upgrade_cost_factor = x.xx }», на вкладці дивізії — список можливих шляхів і
  «Do not upgrade»; при зміні шляху прогрес модернізації скидається в 0 %.
* 🔎 Гра (парсер `0x78d210`): невідомий ключ блоку — «Unknown Upgrade Modifier!»; **відсутній множник = 0,0**
  (не 1,0); ціль мусить бути тієї ж гілки (сухопутні / авіація / флот), інакше «Invalid custom upgrade path —
  change of unit class». Результат пишеться в матрицю 140 × 140 пар float32 (вартість, час) за VA `0xd96a26`,
  ініційовану −1,0 («шляху немає»); повторний блок з тією самою ціллю перезаписує попередній.
* Редактор пише блоки лише в DH, а UI дозволяє редагувати їх лише для дивізій у DH ≥ 1.03
  (`Forms/UnitEditorForm.cs:1570-1593`), пропонуючи як ціль лише дивізії тієї ж гілки, що мають моделі
  (`Forms/UnitEditorForm.cs:2820-2829`).

### 5.5 Блок `equipment` (DH ≥ 1.03)

* Синтаксис: `equipment = { <ресурс> = <кількість> <ресурс> = <кількість> … }` (`Parsers/UnitParser.cs:1722-1799`).
  Ключ ресурсу — з таблиці §3.6 (без урахування регістру), значення — число. Список **впорядкований**, ключі
  можуть повторюватися (розбір просто додає пари).
* Невідомий ресурс або нечислове значення — пара пропускається; відсутній `=` після ресурсу робить усю секцію
  недійсною (`Parsers/UnitParser.cs:1771-1792`).
* Кількість пишеться через форматування **поточної культури** ОС (`Writers/UnitWriter.cs:175`) — на системах з
  десятковою комою редактор запише `0,5`; Rust має писати з крапкою (§14).
* 🔎 Гра (парсер `0x505460`): кількість мусить бути **цілим** токеном («Invalid equipment value!» інакше),
  зберігається як int32 у 37 слотах моделі (зміщення `+0xd2`, індекс = номер ресурсу з §3.6; повтор ключа
  перезаписує); невідомий ресурс — «Unexpected field in equipment!». ✅ У DH Full усі кількості цілі
  (`equipment = { manpower = 13000 horses = 4000 artillery = 20 }`).
* Зміст: скільки якого обладнання/людей потрібно моделі (DH 1.03+ механіка обладнання) **(припущення)**.

### 5.6 Автоматична модернізація (DH)

* Ключ — рядок будь-якого типу з `UnitTypes` поточної гри, значення — номер моделі (ціле, з 0)
  (`Parsers/UnitParser.cs:1627-1661`). Приклад: `armor = 2` у моделі класу `light_armor` → модель автоматично
  модернізується в модель 2 класу `armor` **(припущення щодо механіки)**.
* Якщо ключа немає, редактор у пам'яті вважає ціллю **наступну модель того ж класу**
  (`UpgradeClass = власний тип`, `UpgradeModel = індекс + 1`) і **не** пише її (`Parsers/UnitParser.cs:160-165`,
  `Writers/UnitWriter.cs:158-161`). 🔎✅ У грі (VA `0x7712f7`…`0x771383`, бригади — `0x7719fb`…`0x771a38`;
  Guide підтверджує): без ключа (або з `n = -1`) — наступна модель того ж типу, остання модель не
  модернізується; **винятки**: `light_armor` модель 2 → `armor` модель 2 (зашито за індексами 4 → 5), а
  **кораблі за замовчуванням не модернізуються взагалі**; `n = -2` — модернізацію заборонено. Авіація й бригади
  йдуть за загальним правилом. Ціль перевіряється: модель мусить існувати, а для дивізій — бути тієї ж гілки
  (інакше «Invalid upgrade model …» / «Invalid upgrade path - change of unit class»).
* UI пропонує як ціль класи тієї ж гілки й організації, що мають моделі (`Forms/UnitEditorForm.cs:4816-4826`),
  а номер моделі — як індекс у списку моделей цільового класу (`Forms/UnitEditorForm.cs:4868-4885`).

### 5.7 Ілюстрація (власна, числа вигадані)

```
# db/units/divisions/motorized.txt (DH)
allowed_brigades = artillery
allowed_brigades = anti_tank
allowed_brigades = engineer
max_allowed_brigades = 2

upgrade = { type = mechanized upgrade_time_factor = 1.5 upgrade_cost_factor = 1.25 }

# 0 - Motorized Infantry (1936)
model = {
	cost = 6
	buildtime = 120
	manpower = 10
	maxspeed = 12
	defaultorganisation = 30
	morale = 50
	defensiveness = 7
	toughness = 5
	softness = 85
	suppression = 1
	airdefence = 3
	softattack = 5
	hardattack = 1
	airattack = 0
	transportweight = 12
	supplyconsumption = 1.2
	fuelconsumption = 1.5
	speed_cap_art = 10
	upgrade_time_factor = 1
	upgrade_cost_factor = 1
	reinforce_time = 0.9
	equipment = { manpower = 10000 trucks = 300 }
}
```

---

## 6. `db\units\division_types.txt` (DH ≥ 1.03)

### 6.1 Структура

* Верхній рівень: необов'язковий блок `eyr = { … }` (§6.4) і блоки `<рядок_дивізії> = { … }` для типів зі списку
  DH ≥ 1.03 (`Parsers/UnitParser.cs:1971-2040`). Інші ключі верхнього рівня — недійсні.
* Рядок `#ID <n>` усередині блоку — **коментар** (інформаційний), парсер його не бачить
  (`Writers/UnitWriter.cs:576`).
* За поясненнями, які редактор записує в заголовок файлу (`Writers/UnitWriter.cs:627-752`, перекази власними
  словами): кожне ім'я типу має бути визначене не більше одного разу; не можна залишати «дірок» серед
  користувацьких типів (наприклад, `d_02` без `d_01`); тип іменованої дивізії можна перевизначити (наприклад,
  кавалерію зробити реальним типом `infantry`); після додавання/вилучення типу треба оновити
  `gfx\map\hoi_counter_strip.bmp` відповідно до кількості визначених типів.

### 6.2 Ключі блоку класу дивізії

Розбір — `Parsers/UnitParser.cs:2197-2939`, запис — `Writers/UnitWriter.cs:565-621`. Ключі ті самі для
`brigade_types.txt`, але осмислені різні підмножини (§7).

| Ключ | Значення | За замовч. в пам'яті | Обов'язковий (за заголовком) | Запис | Зміст |
|---|---|---|---|---|---|
| `type` | реальний тип (§3.4) | `infantry` (перше значення переліку) | так | `Writers/UnitWriter.cs:579` | поведінка рушія; також **встановлює гілку** класу (`Parsers/UnitParser.cs:2272-2285`) |
| `name` | рядковий ключ | `NAME_<основа>` | так | `:580` | ключ повної назви класу |
| `short_name` | рядковий ключ | `SNAME_<основа>` | так | `:581` | ключ короткої назви |
| `desc` | рядковий ключ | `LDESC_<основа>` | так | `:582` | ключ довгого опису |
| `short_desc` | рядковий ключ | `SDESC_<основа>` | так | `:583` | ключ короткого опису |
| `eyr` | ціле | 0 | так | `:584` | група (стовпчик) на сторінці статистики армії/флоту/авіації (§6.4) |
| `sprite` | тип спрайта (§3.5) | `infantry` | так | `:585` | який спрайт використовувати на карті |
| `transmute` | рядок **дивізійного** типу | `Undefined` (порожньо) | так | `:586` | що будує AI виробництва, якщо цей тип зараз недоступний |
| `gfx_prio` | ціле | 0 | так | `:587` | пріоритет зображення на фішці/спрайті для змішаних з'єднань |
| `<реальний_тип> = yes/no` | `yes`/`no` | `no` | ні | `:588-608` (лише `yes`) | позначає цей клас як «типовий» представник реального типу (`DefaultType`); якщо не задано, типовим стає перший клас із таким `type` (за заголовком) |
| `value` | число | 0 | так | `:609` | військова цінність; використовується в розрахунку військової сили |
| `production` | `yes`/`no` | `no` | ні | `:610-613` (лише `yes`) | дозволено виробництво за замовчуванням; інакше тип має розблокувати технологія чи подія для кожної країни |
| `list_prio` | ціле | **-1** (`Models/Unit.cs:1442`) | так | `:615` (завжди) | пріоритет у списках (огляд технологій, виробництво), сортування в межах групи land/air/naval, менше — вище; `-1` — не показувати |
| `ui_prio` | ціле | 0 | ні | `:616-619` (лише ≠ 0) | пріоритет сортування дивізій в UI юнітів, більше — вище |
| `cag`, `escort`, `engineer` | `yes`/`no` | `no` | — | не пишуться для дивізій | див. §7; парсер приймає їх і в дивізіях |

Обмеження редактора на UI (не обов'язково гри): `gfx_prio` 0…200, `list_prio` -1…200, `ui_prio` 0…200
(`Forms/UnitEditorForm.Designer.cs:404-408`, `478-487`, `658-662`).

Ключ `<реальний_тип> = yes` розпізнається за тим, що ключ є рядком реального типу (`Parsers/UnitParser.cs:2882-2931`);
парсер **не перевіряє**, що він збігається з `type` блоку — редактор при записі бере рядок саме з `type`.
Довжина ключа впливає лише на вирівнювання табуляціями (`Writers/UnitWriter.cs:590-607`).

🔎 **Як це робить гра** (парсер блоку `0x5044c0`, обробка після файлу `0x76f76b`…`0x76f81f`):
* будь-який ключ, що є **іменем типу дивізії** (не лише одного з 31 реального), з **будь-яким** значенням
  (навіть `no`) робить поточний тип «типовим представником» названого типу (масив за VA `0xdbd5c2`); перше
  призначення виграє, наступні — «Redefinition of unit class type ignored»; якщо ніхто не призначений — береться
  перший тип із таким реальним типом. ✅ Ваніль: `infantry = yes`, `armor = yes`, `militia = yes`,
  `interceptor = yes`, `strategic_bomber = yes`, `destroyer = yes`, `carrier = yes`, `transport = yes`;
* `eyr`, `gfx_prio`, `list_prio`, `ui_prio` — тільки цілий токен; `eyr` зберігається як `значення − 1`, тобто
  нумерація стовпчиків **з 1**; `value` — цілий або дробовий; `production` — `yes`/`no`;
* типові значення об'єкта типу (конструктор `0x5043e0`): `type`, `transmute`, `sprite` = «не задано» (`0x8c`),
  `list_prio` = −1, `ui_prio` = «не задано» (тоді рушій підставляє значення з повідомленням «INFO: … ui_list
  priority is not defined», VA `0x76ff63`);
* невідомий ключ — «unknown string in unit type.».

### 6.3 Гілка та «сутність»

* У DH ≥ 1.03 гілка дивізії = гілка її реального типу з таблиці §3.4 (`Parsers/UnitParser.cs:2280`). Зміна гілки
  в UI скидає реальний тип на `infantry` / `destroyer` / `interceptor` для Army / Navy / Airforce
  (`Forms/UnitEditorForm.cs:2076-2100`).
* «Прапорець сутності» (`ExistsEntity`, §12.6) вмикається, щойно в блоці прочитано будь-який ключ, крім
  `list_prio = -1` (`Parsers/UnitParser.cs:2282`, `2347`, …, `2637-2641`).
* Запис блоку (`Writers/UnitWriter.cs:565-621`):
  1. порожній рядок; `<рядок_типу> = {` — для `d_rsv_33…40` з коментарем про резерв під DH Full;
  2. `#ID <n>`;
  3. якщо є сутність **або** моделі: `type`, `name`, `short_name`, `desc`, `short_desc`, `eyr`, `sprite`,
     `transmute`, `gfx_prio`, [`<реальний_тип> = yes`], `value`, [`production = yes`];
  4. завжди `list_prio`; `ui_prio`, якщо ≠ 0; `}`.
* Блоки `d_01…d_99` без сутності й без моделей **не пишуться взагалі** (`Writers/UnitWriter.cs:548-552`);
  `d_rsv_33…40` без сутності пишуться лише з `#ID` і `list_prio` (`Models/Unit.cs:172-176`).

### 6.4 Блок `eyr`

* Синтаксис: `eyr = { army = <КЛЮЧ> … navy = <КЛЮЧ> … air = <КЛЮЧ> … }` — послідовність пар, де ключ — одне з
  `army`/`navy`/`air`, значення — ідентифікатор рядкового ключа (`Parsers/UnitParser.cs:2110-2189`).
* Зміст: заголовки стовпчиків сторінок порівняльної статистики армії/флоту/авіації; порядок пар у межах гілки =
  номер стовпчика 1, 2, …; `eyr = <n>` у класі дивізії вказує стовпчик своєї гілки. 🔎 Нумерація з 1
  підтверджена (рушій зберігає `n − 1`, VA `0x5047b5`).
* 🔎 Ключі блоку — лише `army`, `navy`, `air` (парсер `0x78d3e0`); інше — «Unknown string in EYR definition!».
  ✅ Коментар-заголовок ванільного `division_types.txt` показує `land = …`, але сам блок ванілі використовує
  `army = …` — коментар застарів, `land` у грі недійсний.
* Редактор **не зберігає** вміст `eyr` (розбирає й відкидає, `Parsers/UnitParser.cs:2000-2012`) і при записі
  виводить фіксований блок (`Writers/UnitWriter.cs:754-786`):
  * `army`: `EYR_INF`, `EYR_CAV`, `EYR_MOT`, `EYR_MEC`, `EYR_LARM`, `EYR_ARM`, `EYR_PAR`, `EYR_MAR`, `EYR_BER`,
    `EYR_GAR`, `EYR_HQ`, `EYR_MIL` (1–12);
  * `navy`: `EYR_CAR`, `EYR_ECAR`, `EYR_BAT`, `EYR_BCRU`, `EYR_HCRU`, `EYR_LCRU`, `EYR_DES`, `EYR_SUB`, `EYR_NSUB`,
    `EYR_TRA` (1–10);
  * `air`: `EYR_MUL`, `EYR_INT`, `EYR_CAS`, `EYR_STR`, `EYR_TAC`, `EYR_NAV`, `EYR_TPL`, `EYR_FBO`, `EYR_ROC` (1–9).
  Rust-реалізація має читати й зберігати `eyr` як дані, а не хардкодити.

### 6.5 Ілюстрація (власна)

```
eyr = {
	army = EYR_INF
	army = EYR_CAV
	navy = EYR_CAR
	air  = EYR_MUL
}

light_carrier = {
	#ID			31
	type		= carrier
	name		= NAME_LIGHT_CARRIER
	short_name	= SNAME_LIGHT_CARRIER
	desc		= LDESC_LIGHT_CARRIER
	short_desc	= SDESC_LIGHT_CARRIER
	eyr			= 1
	sprite		= light_carrier
	transmute	= carrier
	gfx_prio	= 20
	value		= 2.5
	list_prio	= 7
}

d_01 = {
	#ID			41
	type		= infantry
	name		= NAME_D_01
	...
	list_prio	= -1
}
```

---

## 7. `db\units\brigade_types.txt` (DH ≥ 1.03)

### 7.1 Структура

* Верхній рівень: лише блоки `<рядок_бригади> = { … }` для бригадних типів DH ≥ 1.03 (`Parsers/UnitParser.cs:2048-2103`).
  Блоку `eyr` тут немає (у парсері бригад його не обробляють).
* Тип `none` — службова «відсутність бригади»; редактор позначає його коментарем «не змінювати»
  (`Writers/UnitWriter.cs:826-829`), а `b_rsv_36…40` — як резерв під DH Full (`:830-833`).
* За заголовком, який пише редактор (`Writers/UnitWriter.cs:884-948`, переказ): кожне ім'я — один раз; без дірок
  серед `b_XX`; після зміни кількості типів бригад треба оновити `gfx\interface\auxiliary.bmp` і
  `gfx\interface\auxiliarybig.bmp`.

### 7.2 Ключі блоку класу бригади

Розбір — той самий `ParseUnitClass`; запис — `Writers/UnitWriter.cs:823-878`.

| Ключ | Значення | Запис | Зміст |
|---|---|---|---|
| `type` | `land` / `naval` / `air` | `:841-854` | гілка бригади (Army / Navy / Airforce) (`Parsers/UnitParser.cs:2286-2315`); для бригад реальні типи (§3.4) недійсні |
| `name`, `short_name`, `desc`, `short_desc` | рядкові ключі | `:855-858` | як у дивізій |
| `value` | число | `:859` | військова цінність |
| `cag` | `yes`/`no` | `:860-863` (лише `yes`) | бригада є палубною авіагрупою; за заголовком — лише для морських бригад |
| `escort` | `yes`/`no` | `:864-867` (лише `yes`) | бригада є ескортними винищувачами; лише для повітряних бригад |
| `engineer` | `yes`/`no` | `:868-871` (лише `yes`) | бригада є інженерною; лише для сухопутних бригад |
| `list_prio` | ціле | `:873-876` | як у дивізій; для `none` пишеться лише якщо ≠ -1 |
| `eyr`, `sprite`, `transmute`, `gfx_prio`, `ui_prio`, `production`, `<реальний_тип> = yes` | — | **не пишуться** для бригад | парсер їх приймає (спільний код), але для бригад вони не мають сенсу **(припущення)** |

UI вмикає `cag`/`escort`/`engineer` лише для бригад відповідної гілки (`Forms/UnitEditorForm.cs:1466-1494`), а
`detachable` (у файлі класу, §5.1) — лише для **морських** бригад у DH ≥ 1.03 (`Forms/UnitEditorForm.cs:1553-1557`).

🔎 **Гра** (конструктор `0x504c40`, парсер `0x504d00`): `type` — `land` → 0, `air` → 1, `naval` → 2, без ключа
−1; `cag`, `escort`, `engineer` — це **одне поле «підтип»** (1 = CAG, 2 = ескорт, 3 = інженери; `no` → 0;
останній ключ виграє), гілку рушій не перевіряє; `value` — цілий або дробовий токен; `list_prio` — цілий,
типово −1; інший ключ — «unknown string in brigade type.». Підтип використовується так: інженер у сухопутній
дивізії, ескорт в авіаційній, CAG у морській виставляють прапорці дивізії (§17.7). Гілка бригади визначає
клас її моделей (сухопутний/авіація/флот) і типове `detachable` (§5.1). Блок `none = { }` без `type` дає
гілку −1, і моделі `none` розбираються морським парсером (VA `0x771885`) — це не має наслідків, бо там лише
`cost = 0`.

Порядок запису блоку: порожній рядок, заголовок, `#ID`, [якщо сутність або моделі: `type`, `name`, `short_name`,
`desc`, `short_desc`, `value`, `cag`, `escort`, `engineer`], `list_prio`, `}`. Блоки `b_01…b_99` без сутності та
моделей не пишуться (`Writers/UnitWriter.cs:806-810`).

---

## 8. Рядкові ресурси назв: `config\unit_names.csv`, `config\models.csv`

### 8.1 Формат таблиці рядків (коротко)

Загальний формат усіх `config\*.csv` (детальніше — у специфікації локалізації): роздільник `;`, рядок =
`КЛЮЧ;English;French;Italian;Spanish;German;Polish;Portuguese;Russian;Extra1;Extra2;X` — 12 полів, останнє —
буквальне `X` (`Models/Config.cs:780`, `Models/Config.cs:810-811`). Рядок з меншою ніж 11 кількістю полів
ігнорується (`Models/Config.cs:605-639`). Ключі порівнюються в **верхньому регістрі** (`Models/Config.cs:647`).
Рядок, що починається з `#`, — коментар; рядок `#EOF;…` — кінець даних; нові ключі редактор дописує перед
першим `#EOF` (`Models/Config.cs:774-791`). CSV без лапок і без екранування — `;` усередині тексту неможливий
(`Parsers/CsvLexer.cs:51`, `158`).

### 8.2 Які ключі до чого належать

| Ключ | Файл для нових ключів | Джерело |
|---|---|---|
| `NAME_*`, `SNAME_*`, `LDESC_*`, `SDESC_*` (або ключі з `division_types`/`brigade_types`) | `unit_names.csv` | `Forms/UnitEditorForm.cs:1897`, `1976`, `2008`, `2040` |
| `MODEL_<id>_<idx>` (загальна назва моделі дивізії) | `unit_names.csv` | `Models/Unit.cs:1842`, `2080-2081` |
| `BRIG_MODEL_<id>_<idx>` (загальна назва моделі бригади) | `unit_names.csv` | те саме |
| `MODEL_<TAG>_<id>_<idx>` (національна назва моделі дивізії) | `models.csv` | `Models/Unit.cs:1862`, `2096-2097` |
| `BRIG_MODEL_<TAG>_<id>_<idx>` (національна назва моделі бригади) | `models.csv` | те саме |
| `EQ_*` (назви ресурсів обладнання) | (лише читання) | `Models/Units.cs:836-875` |
| `EYR_*` (заголовки статистики) | (лише читання) | `Writers/UnitWriter.cs:754-786` |

* `<id>` — `#ID` класу (§3.3), десятковий без доповнення нулями; `<idx>` — індекс моделі з 0; `<TAG>` — тег
  країни з трьох великих літер (`Models/Countries.cs:31`). Приклади: `MODEL_0_3` (модель 3 піхоти),
  `BRIG_MODEL_1_0` (модель 0 артилерії), `MODEL_GER_5_2`.
* Існуючий ключ залишається у своєму файлі, навіть якщо редактор пропонує інший (`Models/Config.cs:951-955`).
* Відображувана назва моделі для країни: національний ключ, якщо він існує, інакше загальний **(припущення
  щодо логіки гри; редактор зберігає їх окремо, `Models/Unit.cs:1815-1831`)**.
* Відображувана назва класу: текст ключа `Name`, якщо існує, інакше рядок типу (`Models/Unit.cs:1478-1481`).
* Вставлення/видалення/переміщення моделі **зсуває** ключі назв (загальні й усіх країн), щоб назви залишалися
  прив'язаними до моделей (`Models/Unit.cs:1704-1804`, `1945-2044`) — бо індекс у ключі позиційний.
* У DH редактор доповнює відсутні в грі ключі власними текстами: назви DH-класів (`NAME_LIGHT_CARRIER`,
  `NAME_ROCKET_INTERCEPTOR`, `NAME_CAVALRY_BRIGADE`, `NAME_SP_ANTI_AIR`, `NAME_MEDIUM_ARMOR`, `NAME_FLOATPLANE`,
  `NAME_LCAG`, `NAME_AMPH_LIGHT_ARMOR_BRIGADE`, `NAME_GLI_LIGHT_ARMOR_BRIGADE`, `NAME_GLI_LIGHT_ARTILLERY`,
  `NAME_SH_ARTILLERY`), `NAME_D_RSV_33…40`, `NAME_B_RSV_36…40`, `NAME_D_01…99`, `NAME_B_01…99`, а також
  `NAME_ROCKET_ARTILLERY`, `NAME_SP_ROCKET_ARTILLERY`, `NAME_ANTITANK`, `NAME_NAVAL_TORPEDOES_L`, яких, за
  коментарем редактора, немає в DH Full; для всіх ігор — `NAME_NONE` (`Models/Config.cs:1290-1381`). Тобто у
  ванільних рядках DH ці ключі можуть бути відсутні — Rust має мати запасний текст (наприклад, рядок типу).

---

## 9. Картинки моделей (`gfx\interface\models\`)

Редактор лише читає (`Forms/UnitEditorForm.cs:4184-4258`, тека — `Models/Game.cs:288`), з урахуванням
мод/експорт (§2.2). Порядок пошуку ілюстрації моделі `idx` класу з ID `id` для країни `TAG`:

1. `ill_div_<TAG>_<id>_<idx>.bmp` (бригада: `ill_bri_…`);
2. `ill_div_<TAG>_<id>_0.bmp`;
3. `ill_div_<id>_<idx>.bmp`;
4. `ill_div_<id>_0.bmp`;
5. немає картинки.

Без країни — лише кроки 3–4. Іконка моделі (тільки для дивізій): `model_<id>_<idx>.bmp`; у бригад іконок немає
(`Forms/UnitEditorForm.cs:4247-4258`). Регістр тегу — як у `Countries.Strings` (верхній).

---

## 10. `db\unitnames.csv` — імена нових дивізій

* Формат: CSV, роздільник `;`, без лапок (`Parsers/CsvLexer.cs:51`, `135-159`). Порожні рядки та рядки, що
  **починаються** з `#`, пропускаються (`Parsers/CsvLexer.cs:146-156`).
* Рядок: `TAG;ТИП;Ім'я` — рівно 3 поля (`Models/UnitNames.cs:363-373`). Якщо полів менше — рядок пропускається;
  якщо більше — попередження, беруться перші три. Порожнє ім'я — пропуск (`:399-403`).
* `TAG` — тег країни, порівняння в верхньому регістрі; невідомий тег — пропуск (`Models/UnitNames.cs:376-382`).
* `ТИП` — код типу (порівняння без урахування регістру, `Models/UnitNames.cs:239-246`, `385-396`):

| `UnitNameType` | код у файлі | рядок назви типу | DH < 1.03 | DH ≥ 1.03 |
|---|---|---|---|---|
| `Hq` | `HQ` | `NAME_HQ` | так | так |
| `Infantry` | `Inf` | `NAME_INFANTRY` | так | так |
| `Garrison` | `Gar` | `NAME_GARRISON` | так | так |
| `Cavalry` | `Cav` | `NAME_CAVALRY` | так | так |
| `Motorized` | `Mot` | `NAME_MOTORIZED` | так | так |
| `Mechanized` | `Mec` | `NAME_MECHANIZED` | так | так |
| `LightArmor` | `L ARM` (з пробілом) | `NAME_LIGHT_ARMOR` | так | так |
| `Armor` | `Arm` | `NAME_ARMOR` | так | так |
| `Paratrooper` | `Par` | `NAME_PARATROOPER` | так | так |
| `Marine` | `Mar` | `NAME_MARINE` | так | так |
| `Bergsjaeger` | `Mtn` | `NAME_BERGSJAEGER` | так | так |
| `Militia` | `Mil` | `NAME_MILITIA` | так | так |
| `Fighter` | `Fig` | `NAME_MULTI_ROLE` | так | так |
| `Interceptor` | `Int F` (з пробілом) | `NAME_INTERCEPTOR` | так | так |
| `RocketInterceptor` | `32` | `NAME_ROCKET_INTERCEPTOR` | ні | так |
| `EscortFighter` | `Esc F` | `NAME_ESCORT` | так | так |
| `StrategicBomber` | `Str` | `NAME_STRATEGIC_BOMBER` | так | так |
| `TacticalBomber` | `Tac` | `NAME_TACTICAL_BOMBER` | так | так |
| `Cas` | `CAS` | `NAME_CAS` | так | так |
| `NavalBomber` | `Nav` | `NAME_NAVAL_BOMBER` | так | так |
| `TransportPlane` | `Trp` | `NAME_TRANSPORT_PLANE` | так | так |
| `FlyingBomb` | `V1` | `NAME_FLYING_BOMB` | так | так |
| `FlyingRocket` | `V2` | `NAME_FLYING_ROCKET` | так | так |
| `Battleship` | `BB` | `NAME_BATTLESHIP` | так | так |
| `BattleCruiser` | `BC` | `NAME_BATTLECRUISER` | так | так |
| `Carrier` | `CV` | `NAME_CARRIER` | так | так |
| `EscortCarrier` | `27` | `NAME_ESCORT_CARRIER` | так | так |
| `LightCarrier` | `31` | `NAME_LIGHT_CARRIER` | ні | так |
| `HeavyCruiser` | `CA` | `NAME_HEAVY_CRUISER` | так | так |
| `LightCruiser` | `CL` | `NAME_LIGHT_CRUISER` | так | так |
| `Destroyer` | `DD` | `NAME_DESTROYER` | так | так |
| `Submarine` | `SS` | `NAME_SUBMARINE` | так | так |
| `NuclearSubmarine` | `NS` | `NAME_NUCLEAR_SUBMARINE` | так | так |
| `Transport` | `TP` | `NAME_TRANSPORT` | так | так |

  Джерела: коди — `Models/UnitNames.cs:114-150`, рядки назв — `Models/UnitNames.cs:69-105`, перелік —
  `Models/UnitNames.cs:855-891`, доступність — `Models/UnitNames.cs:155-230`, `251-262`.
  Числові коди `27`/`31`/`32` збігаються з `#ID` дивізій `escort_carrier`/`light_carrier`/`rocket_interceptor`
  (§3.1). Кодів для `d_XX` / `d_rsv_XX` немає.
* `Ім'я` — довільний текст до кінця рядка (без `;`). Порядок імен у межах (країна, тип) зберігається
  (`Models/UnitNames.cs:506-520`) — найімовірніше, гра бере їх по черзі для нових дивізій **(припущення)**.
* Запис: для кожної країни (у порядку першої появи), для кожного типу (у порядку першої появи) — рядки
  `TAG;КОД;Ім'я`, код пишеться у вихідному регістрі таблиці (`Models/UnitNames.cs:456-477`). Порядок
  ітерації словника .NET — фактично порядок вставки **(припущення)**.

---

## 11. `db\armynames.csv`, `db\navynames.csv`, `db\airnames.csv` — імена корпусів

* Формат: CSV `;`, рядок `TAG;Ім'я` — рівно 2 поля; менше — пропуск, більше — попередження та перші два
  (`Models/CorpsNames.cs:210-250`). Коментарі `#` на початку рядка, порожні рядки — пропуск.
* Файл визначає гілку: `armynames` → Army, `navynames` → Navy, `airnames` → Airforce
  (`Models/CorpsNames.cs:99-172`). Сховище — список імен на пару (гілка, країна), порядок збережено
  (`Models/CorpsNames.cs:24-25`, `389-399`).
* Запис: країни в порядку `Countries.Tags`, для кожної — її імена, `TAG;Ім'я` (`Models/CorpsNames.cs:345-366`).
* Зміст: пул імен для нових корпусів/армій/флотів/повітряних з'єднань країни **(припущення щодо ігрового
  використання)**.

---

## 12. Семантика

### 12.1 Завантаження (порядок і значення за замовчуванням)

`Units.LoadFiles` (`Models/Units.cs:2219-2297`):
1. створюються всі 305 класів зі значеннями за замовчуванням (§3.1; `Models/Unit.cs:1437-1468`):
   `ListPrio = -1`, `MaxAllowedBrigades = -1`, порожні списки бригад/моделей/модернізацій; у DH
   `Detachable = false`, `Productable = false`, `Eyr = GfxPrio = UiPrio = 0`, `Value = 0`, `RealType = infantry`,
   `Sprite = infantry`, `Transmute = Undefined`;
2. DH ≥ 1.03: `division_types.txt`, потім `brigade_types.txt` (помилка читання будь-якого з них зупиняє все
   завантаження, `Models/Units.cs:2241-2247`);
3. файли класів — для кожного типу зі списку поточної гри (§3.2), з теки за організацією класу.

🔎 Порядок у грі (послідовний код завантаження, VA `0x76f570`…`0x771bff`): `division_types.txt` →
`brigade_types.txt` → `modifiers.csv` → `brigade_modifiers.csv` → (`db\revolt.txt`) → файли дивізій
`db\units\divisions\<ім'я>.txt` для індексів 0…N−1 → файли бригад → постобробка ланцюжків модернізації (§5.6)
→ перевірка лімітів бригад (§17.4). Імена файлів беруться з імен типів (рядок типу + `.txt`).

### 12.2 Приєднувані бригади

* Список `allowed_brigades` класу (впорядкований, без перевірки на дублікати, `Parsers/UnitParser.cs:105`).
* UI показує як кандидатів лише бригади **тієї ж гілки**, що й дивізія, і лише ті, що мають хоча б одну
  модель (`Forms/UnitEditorForm.cs:1363-1365`). Звідси: `cag`/`light_cag`/`floatplane`/морські бригади → для
  кораблів; `escort` (гілка Airforce) → для авіації **(припущення: таке ж обмеження в грі)**.
* 🔎 Гра зберігає дозволи як байтову матрицю 140 × 140 (VA `0xd77b60`, рядок = дивізія, стовпчик = бригада);
  `none` дозволено завжди (VA `0x770da8`). Перевірки «та сама гілка» при завантаженні немає. Функції
  приєднання бригади (§17.7) перевіряють лише ліміт кількості, а не матрицю, — тож сценарій може приєднати й
  недозволену бригаду (❓ чи перевіряє матрицю UI/виробництво — не досліджено). ✅ У всіх реально
  підключених сценаріях пари «дивізія + бригада» відповідають `allowed_brigades`.

### 12.3 Максимальна кількість бригад

`UnitClass.GetMaxAllowedBrigades` (`Models/Unit.cs:1558-1614`):
* **DH**: якщо у файлі є `max_allowed_brigades` (≥ 0) — це значення; інакше — табличне значення за
  замовчуванням (§3.1, колонка «макс. бригад»). Редагувати можна для всіх дивізій (`Models/Unit.cs:1526-1530`).
  🔎 Типові значення гри відрізняються від таблиці редактора (§3.1, §17.4), а підсумок обмежується 0…5.
* **AoD**: `escort_carrier` і `cas` — завжди 1; з AoD 1.07 кораблі беруть ліміт з `misc.txt`
  (`Misc.TpMaxAttach` … `Misc.CvMaxAttach`, за замовчуванням 0/0/0/1/2/3/4/5/1/1, `Models/Misc.cs:24-150`);
  інакше — таблиця.
* **HoI2**: лише таблиця; змінювати не можна (`Models/Unit.cs:1629-1633`).
* Для бригад не застосовується.

### 12.4 Модернізації

* Між моделями одного класу: множники `upgrade_time_factor`/`upgrade_cost_factor` **цільової** моделі;
  у DH — плюс `upgrade_time_boost` і явна ціль автомодернізації (§5.6). 🔎✅ Підтверджено: типово рушій бере
  множники цільової моделі, а з `on_upgrade = yes` у поточній моделі — множники поточної (VA `0x4fd0a2`…`0x4fd0c4`;
  Guide).
* Між класами: блоки `upgrade` (§5.4).

### 12.5 «Невизначена» модель (`cost = 0`)

Редактор вважає модель з нульовою вартістю невизначеною (заглушкою) і пише для неї лише `cost = 0`
(+ DH-хвіст: автомодернізація, `upgrade_time_boost`, `equipment`) (`Writers/UnitWriter.cs:191-195` та аналоги).
Такі заглушки, ймовірно, тримають місце індексу моделі, щоб наступні моделі мали правильний індекс
**(припущення)**. ✅ У даних `cost = 0` трапляється лише як **єдина** модель файлу невикористаного типу:
ванільний `none.txt`; у DH Full — `d_rsv_*`, `b_rsv_*` та `anti_tank`, `rocket_artillery`, `sp_rct_artillery`,
`naval_torpedoes_l`. 🔎 Рушій окремо `cost = 0` не обробляє при завантаженні; файл дивізії без жодної моделі
дає попередження «WARNING!!! No valid models found!!!» (VA `0x771137`; для бригад повідомлення немає), а пошук
моделі за індексом у порожньому списку не захищений (❓ ймовірний збій) — тому заглушка з однією моделлю
потрібна.

### 12.6 Прапорець сутності (DH ≥ 1.03)

`_entityFlag` (`Models/Unit.cs:169-176`, `2289-2312`) — чи має клас власне визначення в `*_types.txt`.
Встановлюється при читанні будь-якого ключа блоку (крім `list_prio = -1`) або при редагуванні. Впливає лише на
запис (§6.3, §7.2). У DH < 1.03 і в інших іграх завжди `false`.

### 12.7 Посилання на юніти з інших файлів (для зв'язку специфікацій)

* Команди подій/технологій, що працюють з типами й моделями: `build_division`, `activate_division`,
  `add_division`, `remove_division`, `damage_division`, `disorg_division`, `delete_unit`, `scrap_model`,
  `lock_division`, `unlock_division`, `new_model`, `activate_unit_type`, `deactivate_unit_type`
  (`Models/Commands.cs:115-129`) — значення типу в них використовують ті самі рядки типів §3.1
  **(припущення; див. специфікацію команд)**.
* Сценарії: блоки `division`, `model`, `new_model` (`Parsers/ScenarioParser.cs:6366`, `6559`, `7868`, `8120`) —
  модель адресується індексом з 0 у списку моделей класу. 🔎✅ Підтверджено, разом із типовими значеннями й
  поведінкою за неправильного індексу — §17.8.

---

## 13. Відмінності DH від AoD / HoI2

| Аспект | HoI2 (DDA) | AoD | DH < 1.03 | DH ≥ 1.03 |
|---|---|---|---|---|
| Списки типів | 31 див. + 27 бриг. | 31 + 51 (морські AoD-бригади, `b_u1…20`) | як HoI2 | 140 + 140 (§3.2) |
| Гілка класу | таблиця за замовч. | ключі `land/naval/air_unit_type = 1` у файлі класу | таблиця | `type` у `*_types.txt` |
| Від'єднуваність бригади | — | `locked = 1` (за замовч. від'єднувані) | `detachable = yes/no` (за замовч. ні) | те саме; UI лише для морських бригад |
| `max_speed_step` | — | так | — | — |
| `max_allowed_brigades` | — (таблиця) | — (таблиця; кораблі з 1.07 — `misc.txt`) | у файлі класу | у файлі класу |
| `upgrade = {…}` між класами | розбирається, не пишеться | розбирається, не пишеться | так | так |
| Ключі моделі AoD (`artillery_bombardment`, `max_supply_stock`, `max_oil_stock`) | — | так | — | — |
| Ключі моделі DH (`no_fuel_combat_mod`, `reinforce_time`, `reinforce_cost`, `upgrade_time_boost`, автомодернізація) | — | — | так | так |
| `speed_cap`, `equipment` | — | — | — | так |
| `upgrade_*_factor` для дивізій флоту | не пишуться, у UI вимкнені | те саме | пишуться, якщо ≠ 0 | те саме |
| `division_types.txt`, `brigade_types.txt` | — | — | — | так |
| Коди `32`/`31` у `unitnames.csv` | — | — | — | так |
| Тека мода | `<гра>\<мод>` | `<гра>\<мод>` | `<гра>\Mods\<мод>` | `<гра>\Mods\<мод>` |
| `config\Additional\*.csv` | — | так | — | — |

Джерела: `Models/Units.cs:2057-2078`, `Parsers/UnitParser.cs:172-361`, `1416-1707`, `Writers/UnitWriter.cs:26-94`,
`257-303`, `Models/Unit.cs:1518-1692`, `Models/UnitNames.cs:251-262`, `Models/Game.cs:825-880`,
`Models/Config.cs:444-538`, `Forms/UnitEditorForm.cs:163-338`.

---

## 14. Особливості редактора, які **не** слід переносити в Rust

1. Пропуск залишку фізичного рядка після помилки (§4) — у грі (і в нас) розбір має бути токенним.
2. Значення в лапках для `name`/`desc`/типів відкидаються редактором (§4). Rust-парсер має приймати і
   ідентифікатор, і рядок у лапках **(припущення щодо поведінки гри)**.
3. Блок `eyr` перезаписується фіксованим (§6.4) — зберігати як дані.
4. `transmute` за замовчуванням `Undefined` записується як порожнє значення `transmute = ` (`Writers/UnitWriter.cs:586`,
   `Models/Units.cs:110`) — некоректний вивід; у Rust — пропускати ключ або вимагати значення.
5. `max_allowed_brigades` губиться, якщо список `allowed_brigades` порожній (`Writers/UnitWriter.cs:68-80`).
6. Кількість у `equipment` пишеться з культурою ОС (§5.5); інші числа — `InvariantCulture`, але без захисту від
   експоненційного запису дуже малих значень (`double.ToString()` дає `1E-05`, що лексер не прочитає
   **(припущення щодо формату .NET)**).
7. Основа назви `light_armor_brigade` збігається з дивізійною (`NAME_LIGHT_ARMOR`) — у DH ≥ 1.03 це
   перевизначається в `brigade_types.txt`. ✅ Ваніль: `name = NAME_LIGHT_ARMOR_BRI`, `desc = LDESC_LIGHT_ARMOR_BRIG`
   (Guide: «Light Armor brigade set to use new short name string (NAME_LIGHT_ARMOR_BRI)»).
8. AoD: для `misc` ліміту легких авіаносців є невідповідність (`LightCarrier` у `GetMaxAllowedBrigades` проти
   `EscortCarrier` у `UpdateDirtyMaxAllowedBrigades`, `Models/Unit.cs:1603-1604`, `Models/Units.cs:2696-2699`) — до DH
   не стосується.

---

## 15. Мінімальна модель даних для Rust (рекомендація)

* `UnitTypeId` — рядок типу (ключ), плюс `org: Division|Brigade`, `id: u8` (`#ID`, 0…139).
* `UnitClass { allowed_brigades: Vec<UnitTypeId>, max_allowed_brigades: Option<u32>, upgrades: Vec<ClassUpgrade>,
  detachable: bool, models: Vec<Model>, meta: Option<ClassMeta> }`.
* `ClassMeta` (з `*_types.txt`): `real_type`, `branch`, 4 рядкові ключі, `eyr`, `sprite`, `transmute`, `gfx_prio`,
  `is_default_real_type`, `value`, `production`, `list_prio: i32` (-1 = приховано), `ui_prio`, `cag/escort/engineer`.
* `Model`: усі числові поля §5.2 як `f64` (відсутнє = 0), `upgrade_time_boost: bool = true`,
  `auto_upgrade: Option<(UnitTypeId, u32)>`, `speed_cap: f64`, `equipment: Vec<(EquipmentKind, f64)>`.
  Поправки за грою (§17.3): `upgrade_*_factor`/`reinforce_*` типово 1,0; `buildtime: i32`; `equipment` —
  37 цілих слотів; додати `on_upgrade: bool = false`, `out_of_fuel_speed`, `no_supplies_combat_mod`,
  `no_fuel_combat_mod` з типовими з `misc.txt`; `auto_upgrade` = `Default | None(-2) | To(type, idx)`; набір
  полів залежить від класу моделі (`Land | Air | Naval`).
* Обчислення підсумкових характеристик дивізії з бригадами — за §17.7 (сума + обмеження ≥ 0 + стелі швидкості).
* Назви — через таблицю рядків з ключами §8.2; запасний текст — рядок типу.

---

## 16. Відкриті питання

1. **Ліміт типів.** Коментар у заголовку `division_types.txt`/`brigade_types.txt`, який пише редактор, говорить про
   «130 типів», тоді як каталог редактора має 140 дивізійних і 140 бригадних типів (33 + 8 + 99; 36 + 5 + 99).
   Скільки типів реально підтримує DH 1.03/1.04/1.05?
2. **Порядок блоків.** Той самий коментар вимагає певного порядку імен типів і наводить порядок дивізій
   `… armor, garrison, hq, paratrooper, …` (як у реальних типах), а редактор пише блоки в порядку
   `… armor, paratrooper, marine, bergsjaeger, garrison, hq, …` і з `#ID` paratrooper = 6, garrison = 9.
   Чи важливий порядок блоків для гри і який він насправді? Чи визначає `#ID` позиція блоку у файлі?
3. Одиниці вимірювання всіх характеристик моделі (§5.2) у коді не задані — потрібна перевірка на ваніль-файлах DH
   та в документації/вікі гри.
4. Точний ігровий зміст `upgrade_time_boost`, `no_fuel_combat_mod` (множник чи частка), `reinforce_time`/
   `reinforce_cost`, `speed_cap` бригади та кількостей у `equipment`.
5. Чи приймає гра значення в лапках (`name = "NAME_X"`) у файлах юнітів?
6. Чи дозволені в грі ключі `allowed_brigades` / `upgrade` у **бригадних** файлах, і чи діє обмеження «та сама
   гілка» для приєднання бригад (редактор його лише відображає)?
7. Як гра використовує `eyr` класу: нумерація з 1 чи з 0; що буде при `eyr` більшому за кількість стовпчиків.
8. Реальний тип для `light_carrier` / `rocket_interceptor` у ванільному DH (у переліку реальних типів їх немає).
9. Чи є в DH ще ключі файлів класів/моделей, які редактор не знає (наприклад, нові в 1.04/1.05)? Редактор
   розглядає лише межу 1.03.
10. Семантика моделей з `cost = 0` у грі (заглушка індексу чи «недоступна модель»).
11. Як гра вибирає між загальною (`MODEL_<id>_<idx>`) та національною (`MODEL_<TAG>_<id>_<idx>`) назвою моделі та
    між картинками `ill_div_<TAG>_…` / `ill_div_…` (редактор реалізує лише пошук для показу).
12. Як гра споживає `db\unitnames.csv`: по черзі, випадково, з перевикористанням? Що при вичерпанні списку?
13. Кодування для інших локалізацій DH (польська, чеська — CP1250?) — редактор їх не розрізняє.

**Стан після звірки з грою (§17):** 1 — 🔎 закрито (140 слотів, «130» у коментарі застаріло; визначено 31/27 у
ванілі, 41/41 у DH Full); 2 — 🔎 закрито (порядок блоків не важливий, індекс = ключове слово імені, `#ID` —
коментар; «без дірок» перевіряється за індексом); 3 — частково (§17.10); 4 — частково (`upgrade_time_boost`,
`on_upgrade`, `speed_cap`, `out_of_fuel_speed` — §17.3/§17.5/§17.7, ✅ Guide; точний вплив `no_*_combat_mod`,
`reinforce_*` у бою/поповненні — ❓); 5 — ❓ (лапки не перевірялись); 6 — 🔎 закрито (`allowed_brigades`/`upgrade`
у файлах бригад — помилка; перевірки гілки при завантаженні немає); 7 — 🔎 закрито (нумерація з 1); 8 — ✅
закрито (DH Full: `carrier`/`interceptor`); 9 — 🔎 закрито (нові ключі `on_upgrade`, `out_of_fuel_speed`,
`no_supplies_combat_mod`); 10 — частково (§12.5); 11, 12, 13 — не досліджувались.

---

## 17. Звірка з даними гри та exe

Об'єкт перевірки — встановлена GOG-збірка DH 1.05.1: ванільні `db/units/**`, мод
`Mods/Darkest Hour Full/db/units/**` (далі «DH Full»), сценарії `scenarios/**`, `db/misc.txt`, документація з теки
`Modding documentation` (зокрема "Guide to Darkest Hour.pdf", розділ змін) і `Darkest Hour.exe`. Позначки:
**✅** — перевірено на файлах гри (скриптами, що лишились поза репозиторієм), **🔎** — прочитано з exe (VA),
**❓** — гіпотеза. Глобальний об'єкт бази юнітів у exe лежить за VA `0xd61340`; нижче адреси масивів дано вже
абсолютними.

### 17.1 Що реально є в `db/units`

✅ **Ваніль** (`db/units`):

| Файл / тека | Вміст |
|---|---|
| `division_types.txt` | блок `eyr` + 31 блок типів `infantry` … `transport` (`#ID` 0–30, порядок блоків = порядок `#ID`) |
| `brigade_types.txt` | 27 блоків `none` … `naval_torpedoes_l` (`#ID` 0–26) |
| `divisions/*.txt` | 31 файл, 179 моделей |
| `brigades/*.txt` | 27 файлів, 87 моделей |
| `modifiers.csv`, `brigade_modifiers.csv` | таблиці модифікаторів місцевості/погоди (§17.11) |

Типів `light_carrier`, `rocket_interceptor`, `d_rsv_*`, `d_*`, а також DH-бригад (`cavalry_brigade` … `b_*`) у
ванілі немає. **DH Full**: 41 тип дивізій (31 + `light_carrier`, `rocket_interceptor`, `d_rsv_33`…`d_rsv_40`),
41 тип бригад (27 + 9 DH-бригад + `b_rsv_36`…`b_rsv_40`); моделей 303 і 202.

✅ **Ключі, які реально трапляються у ванілі** (у дужках — кількість моделей із ключем):

* файли дивізій, верхній рівень: лише `allowed_brigades` і `model`;
* моделі дивізій: `cost`, `buildtime`, `manpower`, `maxspeed`, `defaultorganisation`, `morale`, `airdefence`,
  `supplyconsumption`, `fuelconsumption` (усі 179); `airattack` (175); `softattack`, `hardattack`, `range` (114);
  `upgrade_time_factor`, `upgrade_cost_factor` (113 — їх немає у всіх кораблів і в `flying_bomb`); `surfacedetectioncapability`,
  `airdetectioncapability` (104); `transportcapability` (70); сухопутні `defensiveness`, `toughness`, `softness`,
  `suppression`, `transportweight`, `speed_cap_art`, `speed_cap_at`, `speed_cap_aa` (65), `speed_cap_eng` (61 —
  немає в 4 моделях `hq`); морські `subdetectioncapability`, `visibility`, `seadefence`, `seaattack`, `subattack`,
  `convoyattack`, `shorebombardment`, `distance` (65); авіаційні `surfacedefence` (49), `navalattack` (45),
  `strategicattack` (43);
* файли бригад, верхній рівень: лише `model`;
* моделі бригад: `cost` (87); `buildtime`, `manpower`, `supplyconsumption`, `upgrade_time_factor`,
  `upgrade_cost_factor` (86); `fuelconsumption` (63); `hardattack` (52); `defensiveness` (49); `airdefence`,
  `airattack` (41); `softattack` (39); `surfacedetectioncapability`, `airdetectioncapability` (36);
  `subdetectioncapability`, `seaattack`, `convoyattack`, `subattack`, `shorebombardment`, `distance`, `maxspeed` (30);
  `toughness` (27); `softness` (25); `defaultorganisation` (11); `morale`, `surfacedefence`, `strategicattack`,
  `navalattack`, `range` (6); `suppression` (4); `seadefence` (2).

Жодного DH-специфічного ключа (`upgrade`, `max_allowed_brigades`, `detachable`, `reinforce_*`,
`no_fuel_combat_mod`, `upgrade_time_boost`, автомодернізація, `speed_cap`, `equipment`) у ванілі **немає**.

✅ **DH Full** додатково використовує: `upgrade` (53 блоки), `max_allowed_brigades` (9 файлів, значення 0–4),
`detachable = yes` (лише `cag`, `floatplane`, `light_cag`), у моделях — `equipment`, `reinforce_cost`,
`reinforce_time`, `no_fuel_combat_mod`, `upgrade_time_boost = no`, `speed_cap` (лише бригади; у моделях дивізій
DH Full **немає** `speed_cap_*`), автомодернізацію `armor = 0`, `interceptor = 12`, `interceptor = -2`,
`flying_rocket = -2`, `medium_armor = 0`. Ключі `on_upgrade`, `out_of_fuel_speed`, `no_supplies_combat_mod`
парсер приймає, але в даних їх немає ніде.

✅ Скрипт-звірка: **кожен** ключ моделей ванілі й DH Full належить до набору свого класу з §17.3, а кожен ключ
верхнього рівня — до дозволених для файлу дивізії/бригади (§5.1). Сторонніх ключів немає.

✅ Коментарі-заголовки моделей у файлах на індекс не впливають і нумерацію ведуть як заманеться: `infantry.txt`
підписує моделі «… - 1» … «… - 8», `artillery.txt` — «0 - …» … «7 - …»; індекс завжди — порядок блоку з 0.

### 17.2 Завантаження, кількість типів, індекси 🔎

* `division_types.txt` (VA `0x76f570`…): ключ верхнього рівня — ім'я типу дивізії (функція `0x4fd890`
  перетворює ключове слово на індекс 0…139, `0x8c` = «немає») або `eyr`; інше — «Invalid unit type», повтор —
  «Redefinition of unit type». Після файлу **кількість визначених типів** = довжина неперервного префікса
  визначених індексів від 0 (змінна `0x87765c`); визначений тип після «дірки» — «Gap found into unit types!».
  Тому порядок блоків у файлі неважливий, важливо лише, які імена визначено. Ваніль: 31.
* `brigade_types.txt` (VA `0x770106`…): те саме для бригад (`0x4fdf10`, кількість — `0x877670`, «Gap found into
  brigade types!»). Ваніль: 27. Блок `none` (індекс 0) мусить існувати, інакше префікс порожній.
* Обидва переліки мають по 140 слотів (`0x8c`) — коментар «130 types in total» у заголовках файлів застарів.
* Файли класів читаються для індексів 0…N−1 за іменем типу: `db\units\divisions\%s.txt` (VA `0x770dc1`) і
  `db\units\brigades\%s.txt` (`0x77177d`).
* Кількість моделей не обмежена: моделі складаються у зв'язний список, індекс моделі = порядковий номер блоку
  (записується в модель, VA `0x771008`); лог «%d model(s) loaded (0 to %d).». ✅ Guide: «Enabled unlimited unit
  models (was fixed to 10)»; у DH Full `infantry` має 18 моделей.
* Клас моделі (а з ним — набір ключів і розкладка полів):
  * дивізія — за реальним типом свого типу: індекс < 12 → сухопутний; 12…20 → авіація; > 20 → флот
    (VA `0x770ecf`…`0x771013`, `0x458190`);
  * бригада — за `type` у `brigade_types.txt`: `land` → сухопутний, `air` → авіація, інше (`naval` або не задано)
    → флот (VA `0x77185b`…`0x7718e1`).

### 17.3 Ключі блоку `model` за класами 🔎 (✅ на даних)

Розмір моделі — `0x166` байт. Числа читаються `atof` у `float32`, крім позначених «int» (`atoi`). `yes`/`no`:
істина лише для токена `yes`. Невідомий ключ спершу пробується як ім'я типу дивізії, потім бригади
(автомодернізація); інакше — «Unknown Type in LandDivision / AirDivision / NavalDivision» (VA `0x4f7d17`,
`0x4f96cc`, `0x4fb3ae`).

| Ключ | Зміщення | Тип | Типове | Сухоп. | Авіа | Флот |
|---|---|---|---|---|---|---|
| `cost` | `+0x0c` | f32 | 0 | ✓ | ✓ | ✓ |
| `buildtime` | `+0x10` | int | 0 | ✓ | ✓ | ✓ |
| `manpower` | `+0x14` | f32 | 0 | ✓ | ✓ | ✓ |
| `maxspeed` | `+0x18` | f32 | 0 | ✓ | ✓ | ✓ |
| `supplyconsumption` | `+0x1c` | f32 | 0 | ✓ | ✓ | ✓ |
| `fuelconsumption` | `+0x20` | f32 | 0 | ✓ | ✓ | ✓ |
| `defaultorganisation` | `+0x24` | f32 | 0 | ✓ | ✓ | ✓ |
| `morale` | `+0x28` | f32 | 0 | ✓ | ✓ | ✓ |
| `airattack` | `+0x2c` | f32 | 0 | ✓ | ✓ | ✓ |
| `airdefence` | `+0x30` | f32 | 0 | ✓ | ✓ | ✓ |
| `upgrade_time_factor` | `+0x34` | f32 | **1,0** | ✓ | ✓ | ✓ |
| `upgrade_cost_factor` | `+0x38` | f32 | **1,0** | ✓ | ✓ | ✓ |
| `defensiveness` | `+0x44` | f32 | 0 | ✓ | — | — |
| `toughness` | `+0x48` | f32 | 0 | ✓ | — | — |
| `softness` | `+0x4c` | f32 | 0 | ✓ | — | — |
| `suppression` | `+0x50` | f32 | 0 | ✓ | — | — |
| `softattack` | `+0x54` | f32 | 0 | ✓ | ✓ | — |
| `hardattack` | `+0x58` | f32 | 0 | ✓ | ✓ | — |
| `transportweight` | `+0x5c` | f32 | 0 | ✓ | — | — |
| `speed_cap_art` / `speed_cap_eng` / `speed_cap_aa` / `speed_cap_at` | `+0x60` / `+0x64` / `+0x68` / `+0x6c` | f32 | 0 | ✓ | — | — |
| `speed_cap` | `+0x70` | f32 | 0 | ✓ | — | — |
| `surfacedetectioncapability` | `+0x74` | f32 | 0 | — | ✓ | ✓ |
| `airdetectioncapability` | `+0x78` | f32 | 0 | — | ✓ | ✓ |
| `subdetectioncapability` | `+0x7c` | f32 | 0 | — | — | ✓ |
| `visibility` | `+0x80` | f32 | 0 | — | — | ✓ |
| `seadefence` | `+0x84` | f32 | 0 | — | — | ✓ |
| `seaattack` | `+0x88` | f32 | 0 | — | — | ✓ |
| `subattack` | `+0x8c` | f32 | 0 | — | — | ✓ |
| `convoyattack` | `+0x90` | f32 | 0 | — | — | ✓ |
| `shorebombardment` | `+0x94` | f32 | 0 | — | — | ✓ |
| `transportcapability` | `+0x98` | f32 | 0 | — | ✓ | ✓ |
| `range` | `+0x9c` | f32 | 0 | — | ✓ | ✓ |
| `distance` | `+0xa0` | f32 | 0 | — | — | ✓ |
| `surfacedefence` | `+0xa4` | f32 | 0 | — | ✓ | — |
| `strategicattack` | `+0xa8` | f32 | 0 | — | ✓ | — |
| `navalattack` | `+0xac` | f32 | 0 | — | ✓ | — |
| `<тип> = n` (автомодернізація) | `+0xb4` тип, `+0xb8` модель | int | «немає» / −1 | ✓ | ✓ | ✓ |
| `upgrade_time_boost` | `+0xbc` | bool | `yes` | ✓ | ✓ | ✓ |
| `on_upgrade` | `+0xbd` | bool | `no` | ✓ | ✓ | ✓ |
| `reinforce_cost` | `+0xbe` | f32 | **1,0** | ✓ | ✓ | ✓ |
| `reinforce_time` | `+0xc2` | f32 | **1,0** | ✓ | ✓ | ✓ |
| `out_of_fuel_speed` | `+0xc6` | f32 | сух.: `misc`; авіа/флот: 0 | ✓ | ✓ | ✓ |
| `no_fuel_combat_mod` | `+0xca` | f32 | з `misc` за класом | ✓ | ✓ | ✓ |
| `no_supplies_combat_mod` | `+0xce` | f32 | з `misc` за класом | ✓ | ✓ | ✓ |
| `equipment = { … }` | `+0xd2` | 37 × int | 0 | ✓ | ✓ | ✓ |

Парсери: сухопутний `0x4f7830`, авіаційний `0x4f9210`, морський `0x4faea0`; типові значення — конструктор
`0x4f61a0` і конструктори класів `0x4f62c0` / `0x4f7f30` / `0x4f98f0` (у полі `+0x40` конструктор ставить 1936 —
❓ рік моделі, ключем не задається). Наслідки для даних: `range` дозволено **лише** авіації й флоту,
`speed_cap*`/`transportweight`/`defensiveness`/`softness` — лише сухопутним моделям; `softattack`/`hardattack`
— сухопутним і авіації; ключі, які редактор вважав «лише для дивізій» (`no_fuel_combat_mod`, `reinforce_*`),
гра приймає й у бригад.

### 17.4 Файл дивізії: `allowed_brigades`, `max_allowed_brigades`, `upgrade` 🔎

* `allowed_brigades = <бригада>` — ставить байт у матриці 140 × 140 за VA `0xd77b60` (рядок — дивізія);
  невідоме ім'я — «Invalid brigade type [%s] in %s, line %d!». `none` дозволено завжди.
* `max_allowed_brigades = n` — `atoi`; типові значення за індексом типу (VA `0x770cb9`…`0x770d42`):

  | Значення | Типи (за `#ID`) |
  |---|---|
  | 0 | `multi_role`, `interceptor`, `cas`, `transport_plane`, `flying_bomb`, `flying_rocket`, `submarine`, `nuclear_submarine`, `transport` |
  | 2 / 3 / 4 / 5 | `light_cruiser` / `heavy_cruiser` / `battlecruiser` / `battleship` |
  | 1 | усі інші (уся піхота/техніка, `strategic_bomber`, `tactical_bomber`, `naval_bomber`, `destroyer`, `carrier`, `escort_carrier`, а також слоти 31–139: `light_carrier`, `rocket_interceptor`, `d_rsv_*`, `d_*`) |

  Після завантаження значення обмежується 0…5 з помилкою «Invalid max_allowed_brigades for %s (%d). Set to
  %d.» (VA `0x7716b9`…`0x771720`). Масив лімітів — VA `0xd7c7f0` (140 × int32). ✅ Guide: «max_allowed_brigades
  = X … overrides default hard-coded values», «Added support for up to 5 attachments for air and land units too».
* `upgrade = { … }` — §5.4 (матриця `0xd96a26`, відсутній множник = 0, лише та сама гілка).

### 17.5 Автомодернізація моделей 🔎 (✅ Guide і DH Full)

Постобробка після завантаження (дивізії `0x7711c2`…`0x771697`, бригади `0x771983`…):

| Що в моделі | Ціль |
|---|---|
| `<тип> = n`, `n ≥ 0` | модель `n` типу `<тип>` (ім'я дивізії або бригади) |
| `<тип> = -2` | не модернізується |
| ключа немає або `n = -1`, сухопутна дивізія | наступна модель того ж типу; остання — ні; **виняток**: `light_armor` модель 2 → `armor` модель 2 (індекси 4 → 5 зашиті, `0x771310`…`0x77132a`) |
| те саме, авіація | наступна модель того ж типу; остання — ні |
| те саме, флот | **не модернізується** |
| те саме, бригада | наступна модель того ж типу; остання — ні |

Ціль перевіряється: модель мусить існувати («Invalid upgrade model for %s-%d : %s-%d!»), для дивізій — бути тієї
ж гілки («Invalid upgrade path - change of unit class (land/air/naval)»). При ініціалізації дивізії з моделі
(`0x4fcd80`) рушій копіює ціль модернізації і `upgrade_time_boost` у дивізію; множники часу/вартості
модернізації беруться з цільової моделі, а при `on_upgrade = yes` — з поточної (`0x4fd0a2`).

### 17.6 `division_types.txt` / `brigade_types.txt` — підсумок 🔎

* Ключі блоку типу дивізії: `type` (ім'я типу дивізії → реальний тип = його індекс), `name`, `short_name`,
  `desc`, `short_desc` (рядкові ключі), `eyr` (ціле, з 1), `sprite` (ім'я спрайта, невідоме — помилка),
  `transmute` (ім'я типу дивізії), `gfx_prio`, `list_prio`, `ui_prio` (цілі), `value` (число), `production`
  (`yes`/`no`), `<ім'я типу дивізії> = …` (типовий представник, §6.2). Реальний тип → клас: індекс < 12 —
  сухопутний, 12…20 — авіація, > 20 — флот. ✅ DH Full: `heavy_cruiser → light_cruiser`,
  `light_carrier → carrier`, `rocket_interceptor → interceptor`; блоки `d_rsv_*` містять лише `list_prio = -1`.
* Після файлу рушій розкладає поля по масивах за індексом типу: реальний тип `0xdbd162`, `transmute` `0xdbd392`,
  типовий представник реального типу `0xdbd5c2`, прапорець `production` `0xdbebae`; будує відсортовані за
  `list_prio` списки сухопутних/авіа/морських типів (типи з `list_prio < 0` пропускаються).
* Блок `eyr`: ключі `army`, `navy`, `air` (§6.4).
* Ключі блоку типу бригади: `type` (`land`/`air`/`naval`), `name`, `short_name`, `desc`, `short_desc`, `value`,
  `cag`/`escort`/`engineer` (одне поле «підтип» 1/2/3), `list_prio`. Масиви: об'єкти типів `0xdbf95a`, гілка
  `0xdbfb8a`, підтип `0xdbffea`.
* `detachable` бригади (байтовий масив `0xdbcea6`): типово `yes` для сухопутних і повітряних, `no` для
  морських; ключ у файлі бригади перекриває (`0x771835`).

### 17.7 Як дивізія поєднується з бригадами 🔎 (головне)

**База.** Створена дивізія бере характеристики своєї моделі **плюс** технологічну дельту країни для свого типу
(об'єкт за `0x44c5e0`), кожне поле обмежується знизу нулем (`0x4fcd80`; класові поля — `0x500170` для суходолу
та аналоги для авіації/флоту). Дивізія має до **5** слотів бригад (масиви «тип» і «модель» по 5 елементів +
лічильник).

**Приєднання бригади** (сухопутна `0x4ff8c0`, авіаційна `0x5010c0`, морська `0x502220`):

1. якщо номер слота ≥ ліміту бригад типу дивізії (`0xd7c7f0`) — відмова;
2. якщо в слоті вже була бригада — її модель і технологічна дельта країни для її типу (`0x44c5f0`)
   **віднімаються**;
3. модель нової бригади й технологічна дельта для її типу **додаються** до полів дивізії;
4. перераховуються похідні поля (див. нижче), дивізія позначається «змінено».

Додавання — це **покомпонентна сума** з обмеженням результату знизу нулем; виняток: `softness` обмежується
знизу значенням `MinSoftnessBrigades` з `misc.txt` (ваніль 0,0; VA глобала `0xdc1704`), `morale` і `distance` не
обмежуються. Поля, що підсумовуються:

| Клас дивізії | Поля, до яких додається бригада | VA |
|---|---|---|
| сухопутна | `defaultorganisation` (і макс., і поточна організація), `morale`, `defensiveness`, `toughness`, `softness`, `suppression`, `airdefence`, `softattack`, `hardattack`, `transportweight`, `airattack`, `supplyconsumption`, `fuelconsumption`, `maxspeed`, `speed_cap_art`/`_at`/`_aa`/`_eng` | `0x4ffa60` (відняти — `0x4ffec0`) |
| авіація | `defaultorganisation`, `morale`, `supplyconsumption`, `fuelconsumption`, `maxspeed`, `surfacedefence`, `airdefence`, `airattack`, `strategicattack`, `softattack`, `hardattack`, `navalattack`, `transportcapability`, `surfacedetectioncapability`, `airdetectioncapability` (**не** `range`) | `0x501270` (відняти — `0x501680`) |
| флот | `defaultorganisation`, `morale`, `airdefence`, `airattack`, `supplyconsumption`, `fuelconsumption`, `maxspeed`, `surfacedetectioncapability`, `airdetectioncapability`, `subdetectioncapability`, `visibility`, `seadefence`, `seaattack`, `subattack`, `convoyattack`, `shorebombardment`, `transportcapability`, `range`, `distance` | `0x502390` (відняти — `0x5027c0`) |

`cost`, `buildtime`, `manpower`, множники модернізації/поповнення до бойових полів дивізії **не**
додаються — їх враховують окремі функції виробництва (`0x466b00` — час: якщо для країни ввімкнено прапорець
`0xdc0f94[країна]` (❓ зміст), для дивізії з бригадою береться **більший** із двох часів; `0x466c20` — вартість,
зважена за часом; ❓ деталі — у специфікації виробництва).

**Похідні поля** (перераховуються після кожної зміни бригад):

* сухопутна: «стеля від бригад» = найменше **додатне** `speed_cap` серед моделей приєднаних бригад (0 = немає;
  `0x4ff9cd`…`0x4ffa32`); прапорець «є інженери» = 1, якщо підтип якоїсь бригади — engineer;
* авіаційна: «дальність ескорту» = найменше з (`range` моделі бригади + технологічна дельта `range`) серед
  приєднаних бригад, без бригад — `FLT_MAX`, обмеження ≥ 0 (`0x5011b6`…`0x50124f`); прапорець «є ескорт» —
  підтип escort;
* морська: прапорець «є CAG» — підтип CAG (`0x502306`…`0x502343`).

**Максимальна швидкість сухопутної дивізії** (`0x500700`):

1. `v` = накопичене `maxspeed` (модель дивізії + Σ `maxspeed` бригад + технологічні дельти; ≥ 0);
2. для кожної приєднаної бригади за **фіксованим індексом типу** (таблиця байтів `0x5008e8`):
   `artillery` (1) → `speed_cap_art`, `anti_tank` (5) → `speed_cap_at`, `anti_air` (11) → `speed_cap_aa`,
   `engineer` (13) → `speed_cap_eng`; інші типи (зокрема `sp_artillery`, `rocket_artillery`, `sp_rct_artillery`,
   `tank_destroyer`, усі DH-бригади) стелі не мають. Якщо відповідна стеля дивізії > 0, `v = min(v, стеля)`.
   Значення стелі — це сума `speed_cap_*` моделі дивізії, бригад і технологій;
3. якщо «стеля від бригад» > 0: `v = min(v, стеля від бригад)`;
4. якщо `v < 1`: результат 1,0, коли накопичене `maxspeed` > 0, інакше 0 (окремий випадок для самостійної
   бригади-юніта — ❓).

Тобто швидкість = **мінімум** із (сума швидкостей, застосовні стелі), а атаки/оборона/м'якість —
**сума**. ✅ DH Full відмовився від `speed_cap_*` у дивізіях і задає `speed_cap` у бригадах — саме тому, що
стелі `speed_cap_*` прив'язані до чотирьох старих індексів бригад.

✅ Перевірка формули на ванільних даних (остання модель бригади): піхота мод. 1 (`maxspeed` 4) + артилерія
(`maxspeed` −1) = 3, стеля 6 не діє; моторизована мод. 1 (9) + артилерія = 8 (стеля 10); кавалерія (7) +
інженери (+0,5) = 7,5 → стеля `speed_cap_eng` 7 → **7**; гірські стрільці мод. 1–5 (5) + інженери = 5,5 → **5**;
гарнізон (1) + артилерія (−1) = 0 → **0** (без технологічних бонусів дивізія нерухома). У ванілі стелі реально
спрацьовують лише для інженерів у кавалерії та гірських стрільців.

🔎 Застосування `softness` у бою (`0x4ff2f0`): атака по сухопутній цілі = (hardattack атакуючого ×
(100 − softness цілі) + softattack × softness цілі) × 0,01; по повітряній — airattack. Отже `softness` — відсотки,
а від'ємна `softness` бригад броні (✅ −5…−20) зменшує частку «м'якої» цілі.

### 17.8 Дивізії в сценаріях: тип + модель 🔎 (✅ на сценаріях)

Парсер дивізії (сухопутний — `0x5529b0`…`0x553ce7`, слот розбору у віртуальній таблиці сухопутної дивізії;
для авіації/флоту ❓ аналогічні функції не розбирались):

* `type` — ім'я типу дивізії → індекс; у сухопутному юніті не-сухопутний тип — «Non-land division [%s] defined
  for land unit»; невідоме ім'я — «Invalid division type».
* `model` — `atoi` → індекс моделі (поле дивізії `+0x138`); **типово 0** (конструктор обнуляє поле).
* `extra` ≡ `extra1`, `extra2`…`extra5` — тип бригади слота 1…5 (обидва `extra` і `extra1` ведуть до одного
  обробника `0x55330d`); `brigade_model` ≡ `brigade_model1`, `brigade_model2`…`brigade_model5` — модель бригади
  слота, **типово 0**; `brig_upgr_progress1`…`4` — прогрес модернізації бригад.
* Пошук моделі за індексом (`0x789990` дивізії, `0x7899e0` бригади): індекс поза діапазоном або від'ємний →
  **модель 0** (перша в списку); у дивізію записується фактичний індекс знайденої моделі.
* Наприкінці блоку (не для збереження гри): дивізія ініціалізується з моделі (`0x553609`…`0x553620`), потім
  для кожного слота з валідним типом бригади викликається приєднання бригади з §17.7 (`0x55365e`); помилки —
  «Failed to add [%s] brigade to [%s] - too many brigades defined!» або «Failed to add …». Матриця
  `allowed_brigades` тут **не** перевіряється. Для збереженої гри слоти заповнюються напряму, а
  характеристики беруться із записаних значень (`0x55377a`…).
* Явні ключі характеристик у блоці дивізії (`maxspeed`, `seaattack` тощо, див. scenario.md §4.10) ✅ у сценаріях
  трапляються: `maxspeed` (49 дивізій), `seaattack` (23), `seadefence` (6), `airattack` (4), `shorebombardment`,
  `airdefence` (по 2). ❓ Чи перекривають вони значення, обчислені з моделі й бригад наприкінці блоку, — не
  перевірено (частина таких ключів пишеться в тимчасові змінні парсера).

✅ Статистика по 525 файлах, реально підключених із `scenarios/*.eug` (16 505 дивізій): усі `model` у межах
кількості моделей типу; 3 258 дивізій без `model` (→ модель 0); 2 514 з `extra` (з них 1 146 без
`brigade_model` → модель 0); `extra1`…`extra5` не використовуються; усі пари «дивізія + бригада» дозволені
`allowed_brigades` (без урахування регістру). Непідключені залишкові файли (наприклад, `scenarios/1941/ita.inc`;
1941 підключає `ita_41.inc`) містять недійсні типи `panzer`, `fighter`, `cruiser` — це не дані гри.

### 17.9 Типові значення з `misc.txt` ✅🔎

| Поле моделі | Сухопутні | Авіація | Флот |
|---|---|---|---|
| `out_of_fuel_speed` | `DefaultSpeedFuel` (секція `combat`, позиція 211 у файлі DH 1.05.1; ваніль −1 = вимкнено; VA `0x8772f4`) | 0 | 0 |
| `no_fuel_combat_mod` | `FuelProblemsModifierLand` (0,0; `0xdc1570`) | `FuelProblemsModifierAir` (0,0; `0xdc1574`) | `FuelProblemsModifierNaval` (0,0; `0xdc1578`) |
| `no_supplies_combat_mod` | `SupplyProblemsModifierLand` (−0,2; `0xdc1568`) | `SupplyProblemsModifierAir` (−0,2; `0x8771ec`) | `SupplyProblemsModifierNaval` (0,0; `0xdc156c`) |
| мінімум `softness` дивізії з бригадами | `MinSoftnessBrigades` (позиція 227; 0,0; `0xdc1704`) | — | — |

Імена ключів — як у leaders-ministers-misc.md (там нумерація DH 1.04; у файлі 1.05.1 ці два пізні пункти
зсунуті на +3). Коментар у `misc.txt`: «Default speed for fuel consuming land units when out of fuel. This value
can be overridden for each unit type and model by setting out_of_fuel_speed modifier in unit files. -1 - Disable
this functionality». ❓ Панель інформації показує `1 + no_fuel_combat_mod` і `1 + no_supplies_combat_mod`
(`0x455fd1`…`0x455fed`), тож це, ймовірно, приріст до множника (−0,2 → ×0,8).

### 17.10 Одиниці та зміст (уточнення)

* ✅🔎 Числа бригадних моделей — **прирости** до дивізії: `maxspeed` −1/−2/−4/+0,5, `softness` −5…−20 тощо.
* 🔎 `buildtime` — ціле (❓ дні); `cost`, `manpower`, `supplyconsumption` можуть бути дробовими (✅ `cost = 6.5`,
  `manpower = 0.2`/`2.5`).
* 🔎 `softness` — відсотки 0–100 (§17.7); `speed_cap*` — у тих самих одиницях, що `maxspeed`.
* 🔎 `range` бригади авіації — дальність ескорту (мінімум), а не приріст дальності дивізії; `range` і
  `distance` морських бригад — прирости.
* 🔎 `equipment` — цілі кількості.

### 17.11 `modifiers.csv` і `brigade_modifiers.csv` 🔎 (✅ на даних)

* Читаються після `*_types.txt` (VA `0x770878`…`0x770aab`). Перший рядок — заголовок, пропускається. Кожен
  наступний рядок — один **позиційний** рядок таблиці: перше поле (мітка `ATT_CLEAR` тощо) рушієм не
  розбирається, крім двох випадків — рядок з першим полем `#` або `EOF` пропускається (але його номер усе одно
  займає позицію). Далі читається рівно N полів (N = кількість визначених типів дивізій / бригад), кожне —
  `atoi` у int16; решта полів рядка (`X`, у DH Full ще `Used By`) ігнорується.
* Колонки — за індексом типу (`#ID`), **не** за підписами заголовка: ✅ у ванільному заголовку колонка 27
  підписана `CVL`, хоча це `escort_carrier` (DH Full підписує `CVE`). Підписи — лише довідка.
* Рядки — за позицією (до 51): ✅ ваніль і DH Full мають 19 рядків `ATT_` (CLEAR, BLIZZARD, SNOW, FROZEN, RAIN,
  STORM, MUDDY, NIGHT, PLAIN, DESERT, MOUNTAIN, HILL, FOREST, JUNGLE, SWAMP, URBAN, RIVER, SHORE, FORT),
  16 рядків `DEF_` і 16 `MOV_` (без RIVER/SHORE/FORT), потім `EOF`. Сховище: 140 стовпчиків × 51 int16 (крок
  стовпчика 102 байти), дивізії — VA `0xd615d6`, бригади — `0xd64d9e`.
* ✅ Ваніль: 31 колонка у `modifiers.csv`, 27 у `brigade_modifiers.csv` (значення бригад усі 0, крім
  `engineer` `ATT_RIVER` = 20); DH Full: 41 і 41. Значення — ❓ відсоткові модифікатори атаки/оборони/руху
  (−150…+63); як саме вони комбінуються в бою — поза цією специфікацією.

### 17.12 Що виправлено в описі за редактором (зведення)

| Твердження редактора | Як у грі |
|---|---|
| `detachable` типово `no`; ключ файлу класу | лише у файлі бригади; типово `yes` для сухопутних/повітряних, `no` для морських (§5.1) |
| `allowed_brigades`/`upgrade`/`max_allowed_brigades` можливі у будь-якому файлі | лише у файлах дивізій (§5.1) |
| відсутній ключ моделі = 0 | `upgrade_*_factor`, `reinforce_*` = 1,0; `no_*_combat_mod`, `out_of_fuel_speed` — з `misc.txt` (§17.3, §17.9) |
| ключі моделі розбираються незалежно від гілки | окремий набір ключів на клас; чужий ключ — помилка (§17.3) |
| реальні типи пронумеровано 0–30 у порядку редактора | `type` — ім'я типу дивізії, працює його `#ID`; класи 0–11 / 12–20 / 21+ (§3.4) |
| `eyr`: ключі `army`/`navy`/`air` (коментар файлу: `land`) | лише `army`/`navy`/`air`, нумерація з 1 (§6.4) |
| типовий ліміт бригад `escort_carrier`, `d_*` тощо = 0 | 1; підсумок обмежено 0…5 (§3.1, §17.4) |
| відсутній множник у `upgrade = { }` | 0,0, а не 1,0; ціль — лише тієї ж гілки (§5.4) |
| автомодернізація за замовчуванням — наступна модель (припущення) | так, але кораблі — ні, `light_armor`-2 → `armor`-2, `-2` = заборона (§5.6) |
| `equipment` — дробові кількості | лише цілі (§5.5) |
| невідомі ключі `on_upgrade`, `out_of_fuel_speed`, `no_supplies_combat_mod` | існують (§17.3) |
| `#ID` — позиція типу (припущення) | так; порядок блоків у файлі неважливий (§3.3, §17.2) |
