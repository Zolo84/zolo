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

---

## 1. Огляд

* Кожен **клас юніта** (`UnitClass`) — це або **дивізія** (division), або **бригада** (brigade)
  (`Models/Unit.cs:3017-3021`). Клас має набір атрибутів класу та впорядкований список **моделей**
  (`model`), які є «поколіннями» техніки цього класу (`Models/Unit.cs:11-143`).
* Внутрішній каталог редактора містить **305** значень `UnitType`: `Undefined` (0), 140 дивізійних
  типів (1–140) і 164 бригадних типи (141–304) (`Models/Unit.cs:3026-3340`). Які саме з них доступні,
  залежить від гри та версії (§3.2). У DH ≥ 1.03 доступно 140 дивізійних + 140 бригадних типів.
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
| 28 | `EscortCarrier` | `escort_carrier` | 27 | Navy | = | 0 | усі |
| 29 | `Submarine` | `submarine` | 28 | Navy | = | 0 | усі |
| 30 | `NuclearSubmarine` | `nuclear_submarine` | 29 | Navy | = | 0 | усі |
| 31 | `Transport` | `transport` | 30 | Navy | = | 0 | усі |
| 32 | `LightCarrier` | `light_carrier` | 31 | Navy | = | 0 | DH3 |
| 33 | `RocketInterceptor` | `rocket_interceptor` | 32 | Airforce | = | 0 | DH3 |
| 34–41 | `ReserveDivision33`…`ReserveDivision40` | `d_rsv_33`…`d_rsv_40` | 33…40 | Army | = (`D_RSV_33`…) | 0 | DH3 |
| 42–140 | `Division01`…`Division99` | `d_01`…`d_99` (дві цифри) | 41…139 | Army | = (`D_01`…) | 0 | DH3 |

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
AoD і DH нумерують свої додаткові бригади незалежно) — тобто ID є позицією в «рядку» типів рушія
**(припущення)**.

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
`interceptor`) **(припущення щодо того, що саме ставить гра)**.

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
| `detachable` | `yes` / `no` | ні | **лише DH** (`Parsers/UnitParser.cs:312-361`) | лише DH і лише `yes` (+ порожній рядок) (`Writers/UnitWriter.cs:53-57`) | бригаду можна від'єднувати від дивізії; за замовчуванням у DH — `no` |
| `land_unit_type` / `naval_unit_type` / `air_unit_type` | рівно `1` | ні | **лише AoD** (`Parsers/UnitParser.cs:172-250`) | лише AoD (`Writers/UnitWriter.cs:26-42`) | гілка класу в AoD |
| `max_speed_step` | 0, 1 або 2 | ні | **лише AoD** (`Parsers/UnitParser.cs:253-283`) | лише AoD, лише для дивізій, лише якщо < 2 (`Writers/UnitWriter.cs:45-50`) | максимальна швидкість виробництва (0 = звичайна ×1, 1 = прискорена ×1.25, 2 = надзвичайна ×1.5 — підписи з `Forms/UnitEditorForm.resx:363-371`); за замовчуванням 2 (`Models/Unit.cs:1450-1454`) |
| `locked` | будь-яке число | ні | **лише AoD** (`Parsers/UnitParser.cs:286-309`) | лише AoD, бригада, не від'єднувана: `locked = 1` (`Writers/UnitWriter.cs:60-65`) | інверсія `detachable` в AoD; у AoD бригади за замовчуванням від'єднувані (`Models/Unit.cs:1456-1460`) |

Будь-який інший ключ верхнього рівня — недійсний (`Parsers/UnitParser.cs:363-365`). Зокрема, у DH
ключі AoD (`land_unit_type`, `locked`, …) недійсні, а в AoD/HoI2 недійсний `detachable`.

Порядок, у якому редактор пише секції: (AoD-гілка) → (AoD `max_speed_step`) → `detachable` → (AoD `locked`)
→ `allowed_brigades`… + `max_allowed_brigades` + порожній рядок → `upgrade`… + порожній рядок → для кожної
моделі рядок-коментар `# <індекс> - <назва моделі>` і блок `model = { … }` (`Writers/UnitWriter.cs:115-116`).
Чи важливий порядок для гри — невідомо; найімовірніше, ні **(припущення)**.

### 5.2 Ключі блоку `model`

Розбір — `Parsers/UnitParser.cs:377-1715`. Усі значення — числа (`double`), окрім позначених. Відсутній
ключ = 0 (поля моделі ініціалізуються нулем, `Models/Unit.cs:2600-2602`), окрім `upgrade_time_boost`
(за замовчуванням `yes`, `Models/Unit.cs:2547`).

Колонка «Гілки» показує, для яких класів редактор вважає поле осмисленим (UI вмикає поле:
`Forms/UnitEditorForm.cs:3436-3939`); колонка «Одиниці» — **(припущення)** з загальних знань про лінію
HoI2, у коді одиниць немає.

| Ключ | Поле | Рядок розбору | Гілки | Зміст | Одиниці (припущення) |
|---|---|---|---|---|---|
| `cost` | `Cost` | `Parsers/UnitParser.cs:428` | усі | вартість виробництва в IC; `0` = модель «не визначена» (§12.5) | IC на день виробництва |
| `buildtime` | `BuildTime` | `:454` | усі | час виробництва | дні |
| `manpower` | `ManPower` | `:480` | усі | людські ресурси | тисячі осіб |
| `maxspeed` | `MaxSpeed` | `:506` | усі | швидкість пересування | км/год |
| `speed_cap_art` | `SpeedCapArt` | `:532` | сухопутні дивізії | обмеження швидкості при приєднаній артилерійській бригаді | км/год |
| `speed_cap_eng` | `SpeedCapEng` | `:558` | сухопутні дивізії | те саме для інженерної бригади | км/год |
| `speed_cap_at` | `SpeedCapAt` | `:584` | сухопутні дивізії | те саме для протитанкової бригади | км/год |
| `speed_cap_aa` | `SpeedCapAa` | `:610` | сухопутні дивізії | те саме для зенітної бригади | км/год |
| `range` | `Range` | `:636` | флот, авіація | дальність дії | км |
| `defaultorganisation` | `DefaultOrganization` | `:662` | усі | організованість (британське написання `organisation`!) | бали |
| `morale` | `Morale` | `:688` | усі | мораль | бали |
| `defensiveness` | `Defensiveness` | `:714` | сухопутні | оборона | бали |
| `seadefence` | `SeaDefense` | `:740` | флот | оборона від надводних/підводних атак (`defence`, не `defense`) | бали |
| `airdefence` | `AirDefence` | `:766` | усі | оборона від повітряних атак | бали |
| `surfacedefence` | `SurfaceDefence` | `:792` | авіація | оборона від наземних/корабельних атак | бали |
| `toughness` | `Toughness` | `:818` | сухопутні | живучість | бали |
| `softness` | `Softness` | `:844` | сухопутні | «м'якість» — частка небронованих цілей | % (0–100) |
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
| `no_fuel_combat_mod` | `NoFuelCombatMod` | `:1501` | **лише DH**, сухопутні дивізії | бойовий модифікатор без пального | множник/частка |
| `reinforce_time` | `ReinforceTimeFactor` | `:1527` | **лише DH**, дивізії | множник часу поповнення | множник |
| `reinforce_cost` | `ReinforceCostFactor` | `:1553` | **лише DH**, дивізії | множник вартості поповнення | множник |
| `upgrade_time_boost` | `UpgradeTimeBoost` (`yes`/`no`) | `:1579` | **лише DH** | чи застосовувати пришвидшення/поправку часу модернізації; за замовчуванням `yes` | — |
| `<рядок_типу> = <n>` | `AutoUpgrade`, `UpgradeClass`, `UpgradeModel` | `:1627-1661` | **лише DH** | автоматична модернізація в модель `<n>` класу `<рядок_типу>` (§5.6) | індекс моделі (з 0) |
| `speed_cap` | `SpeedCap` | `:1667` | **лише DH ≥ 1.03**, сухопутні бригади | загальне обмеження швидкості, яке накладає бригада | км/год |
| `equipment` | список `UnitEquipment` | `:1693` | **лише DH ≥ 1.03** | склад обладнання моделі (§5.5) | — |

Ключі розбираються незалежно від гілки класу: наприклад, `seaattack` у сухопутній дивізії буде прочитано
й збережено в пам'яті, але редактор його не запише (§5.3). Неочікуваний ключ → недійсний токен
(`Parsers/UnitParser.cs:1709-1711`).

У DH розбір автомодернізації стоїть **після** усіх загальних ключів і DH-ключів `no_fuel_combat_mod`…
`upgrade_time_boost` (`Parsers/UnitParser.cs:1626-1661`), тому будь-який ключ, що збігається з рядком
типу (наприклад, `infantry`, `escort`, `transport`, `armor`), трактується як автомодернізація.

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
  вартості **(припущення щодо ігрової механіки; ключі — факт)**.
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
* Зміст: скільки якого обладнання/людей потрібно моделі (DH 1.03+ механіка обладнання) **(припущення)**.

### 5.6 Автоматична модернізація (DH)

* Ключ — рядок будь-якого типу з `UnitTypes` поточної гри, значення — номер моделі (ціле, з 0)
  (`Parsers/UnitParser.cs:1627-1661`). Приклад: `armor = 2` у моделі класу `light_armor` → модель автоматично
  модернізується в модель 2 класу `armor` **(припущення щодо механіки)**.
* Якщо ключа немає, редактор у пам'яті вважає ціллю **наступну модель того ж класу**
  (`UpgradeClass = власний тип`, `UpgradeModel = індекс + 1`) і **не** пише її (`Parsers/UnitParser.cs:160-165`,
  `Writers/UnitWriter.cs:158-161`). Отже, поведінка за замовчуванням у грі — модернізація в наступну модель
  того ж класу **(припущення)**.
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
  номер стовпчика 1, 2, …; `eyr = <n>` у класі дивізії вказує стовпчик своєї гілки **(припущення: нумерація з 1,
  судячи з коментарів `#1`…`#12`)**.
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

### 12.2 Приєднувані бригади

* Список `allowed_brigades` класу (впорядкований, без перевірки на дублікати, `Parsers/UnitParser.cs:105`).
* UI показує як кандидатів лише бригади **тієї ж гілки**, що й дивізія, і лише ті, що мають хоча б одну
  модель (`Forms/UnitEditorForm.cs:1363-1365`). Звідси: `cag`/`light_cag`/`floatplane`/морські бригади → для
  кораблів; `escort` (гілка Airforce) → для авіації **(припущення: таке ж обмеження в грі)**.

### 12.3 Максимальна кількість бригад

`UnitClass.GetMaxAllowedBrigades` (`Models/Unit.cs:1558-1614`):
* **DH**: якщо у файлі є `max_allowed_brigades` (≥ 0) — це значення; інакше — табличне значення за
  замовчуванням (§3.1, колонка «макс. бригад»). Редагувати можна для всіх дивізій (`Models/Unit.cs:1526-1530`).
* **AoD**: `escort_carrier` і `cas` — завжди 1; з AoD 1.07 кораблі беруть ліміт з `misc.txt`
  (`Misc.TpMaxAttach` … `Misc.CvMaxAttach`, за замовчуванням 0/0/0/1/2/3/4/5/1/1, `Models/Misc.cs:24-150`);
  інакше — таблиця.
* **HoI2**: лише таблиця; змінювати не можна (`Models/Unit.cs:1629-1633`).
* Для бригад не застосовується.

### 12.4 Модернізації

* Між моделями одного класу: множники `upgrade_time_factor`/`upgrade_cost_factor` **цільової** моделі
  **(припущення)**; у DH — плюс `upgrade_time_boost` і явна ціль автомодернізації (§5.6).
* Між класами: блоки `upgrade` (§5.4).

### 12.5 «Невизначена» модель (`cost = 0`)

Редактор вважає модель з нульовою вартістю невизначеною (заглушкою) і пише для неї лише `cost = 0`
(+ DH-хвіст: автомодернізація, `upgrade_time_boost`, `equipment`) (`Writers/UnitWriter.cs:191-195` та аналоги).
Такі заглушки, ймовірно, тримають місце індексу моделі, щоб наступні моделі мали правильний індекс
**(припущення)**.

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
  модель адресується індексом з 0 у списку моделей класу **(припущення)**.

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
   перевизначається в `brigade_types.txt` **(припущення)**.
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
