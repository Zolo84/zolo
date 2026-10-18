# Специфікація: командувачі, міністри, `db/misc.txt`

Область: командувачі (`db\leaders\*.csv`, DH-список `db\leaders.txt`, `db\randomleaders.csv`),
міністри (`db\ministers\*.csv`, DH-список `db\ministers.txt`), визначення рис (personality) міністрів
(`db\ministers\minister_personalities.txt` у DH, `db\ministers\minister_modifiers.txt` в AoD, вбудована
таблиця в HoI2/DDA) і позиційний файл ігрових констант `db\misc.txt`.

Джерело фактів — "Alternative HoI2 Editor" (C#, `/home/user/pylypenko99/hoi2editor/HoI2Editor`). Код
**не** копіюється; нижче — опис формату власними словами. Посилання `Файл.cs:рядок` дані відносно
`HoI2Editor/`. Усе, що виведено логічно, а не прочитано прямо в коді, позначено **(припущення)**.
Приклади файлів — власні ілюстрації з вигаданими значеннями, а не фрагменти гри.

Прочитані повністю: `Models/Leader.cs`, `Models/Leaders.cs`, `Models/RandomLeaders.cs`, `Models/Minister.cs`,
`Models/Ministers.cs`, `Parsers/MinisterModifierParser.cs`, `Parsers/MinisterPersonalityParser.cs`,
`Models/Misc.cs`, `Parsers/MiscParser.cs`, `Writers/MiscWriter.cs`, `Parsers/CsvLexer.cs`,
`Parsers/TextLexer.cs`, `Parsers/Token.cs`, `Models/Branches.cs`, `Utilities/DoubleHelper.cs`,
`Utilities/IntHelper.cs`. Вибірково: `Models/Game.cs`, `Models/Config.cs`, `Models/Countries.cs`,
`Models/Research.cs`, `Models/Unit.cs`, `Forms/MainForm.cs`, `Forms/LeaderEditorForm.cs`,
`Forms/MinisterEditorForm.cs`, `Forms/MiscEditorForm.cs`, `Properties/Resources*.resx`.

Скорочення: **H2/H3/H4** — DH 1.02 / 1.03 / 1.04 (див. §5.4); **DDA** — HoI2 Doomsday Armageddon;
**ORG** — організованість; **STR** — сила (strength); **IC** — промисловий потенціал; **TC** — транспортна
ємність; **HoS/HoG** — глава держави / глава уряду.

---

## 1. Огляд

* **Командувачі.** Кожен командувач — один рядок CSV (роздільник `;`) у файлі на країну в `db\leaders\`.
  Перший рядок файлу завжди вважається заголовком і пропускається. 18 колонок (17 полів + маркер `x`), або 19,
  якщо в `misc.txt` увімкнено `EnableRetirementYearLeaders` (DH ≥ 1.03) (`Models/Leaders.cs:589-812`).
  Риси (traits) — десяткове число-бітова маска з 31 біта (`Models/Leader.cs:224-409`).
* **Міністри.** Один CSV на країну в `db\ministers\`. Тег країни береться з **першої клітинки першого
  рядка** (заголовка), а не з рядків даних. Три варіанти розкладки колонок (9, 10 або 11 токенів),
  перемикаються двома прапорцями секції `mod` у `misc.txt` (`Models/Ministers.cs:1366-1532`).
  Посада, ідеологія, риса й лояльність записані **текстом** (порівняння без урахування регістру).
* **Риси міністрів** у DH беруться з `db\ministers\minister_personalities.txt` (скриптовий синтаксис,
  блоки `minister = { ... }`), в AoD — з `db\ministers\minister_modifiers.txt`, у HoI2 — з вбудованої
  таблиці на 80 записів (`Models/Ministers.cs:787-924`).
* **DH-списки файлів.** У DH, якщо існує `db\leaders.txt` / `db\ministers.txt`, завантажуються **лише**
  перелічені там CSV; інакше — скан теки, як у HoI2/AoD (`Models/Leaders.cs:452-497`,
  `Models/Ministers.cs:1224-1269`).
* **`db\misc.txt`** — **позиційний** файл: є лише імена секцій (`economy = { ... }` тощо), а всередині —
  послідовність чисел без ключів. Значення числа визначається його порядковим номером у секції, а набір і
  кількість значень залежать від гри та версії (DH 1.02 / 1.03 / 1.04: 481 / 567 / 639 чисел)
  (`Parsers/MiscParser.cs:187-316`, `Models/Misc.cs:391-2174`).
* Бінарних форматів у цій області немає.

---

## 2. Файли та розташування

### 2.1 Перелік

| Шлях (відносно кореня гри/мода) | Константа | Формат | Гра | Читання / запис |
|---|---|---|---|---|
| `db\leaders\*.csv` | `Game.LeaderPathName = "db\\leaders"` (`Models/Game.cs:238`) | CSV, §3 | усі | `Models/Leaders.cs:535-812` / `Models/Leaders.cs:920-1012` |
| `db\leaders.txt` | `Game.DhLeaderListPathName` (`Models/Game.cs:333`) | список імен файлів, §3.1 | лише DH | `Models/Leaders.cs:502-529` / `Models/Leaders.cs:891-914` |
| `db\randomleaders.csv` | `Game.RandomLeadersPathName` (`Models/Game.cs:473`) | CSV `TAG;Ім'я`, §3.9 | усі | `Models/RandomLeaders.cs:72-176` / `Models/RandomLeaders.cs:186-239` |
| `db\ministers\*.csv` | `Game.MinisterPathName = "db\\ministers"` (`Models/Game.cs:243`) | CSV, §4 | усі | `Models/Ministers.cs:1307-1532` / `Models/Ministers.cs:1638-1749` |
| `db\ministers.txt` | `Game.DhMinisterListPathName` (`Models/Game.cs:338`) | список імен файлів | лише DH | `Models/Ministers.cs:1274-1301` / `Models/Ministers.cs:1609-1632` |
| `db\ministers\minister_personalities.txt` | `Game.MinisterPersonalityPathNameDh` (`Models/Game.cs:328`) | скрипт, §4.7 | лише DH | `Parsers/MinisterPersonalityParser.cs:51-278` / не пишеться |
| `db\ministers\minister_modifiers.txt` | `Game.MinisterPersonalityPathNameAoD` (`Models/Game.cs:323`) | скрипт, §4.8 | лише AoD | `Parsers/MinisterModifierParser.cs:51-594` / не пишеться |
| `db\misc.txt` | `Game.MiscPathName` (`Models/Game.cs:318`) | позиційний скрипт, §5 | усі | `Parsers/MiscParser.cs:28-316` / `Writers/MiscWriter.cs:18-60` |
| `gfx\interface\pics\<Picture>.bmp` | `Game.PersonPicturePathName` (`Models/Game.cs:278`) | BMP-портрети (лише читання) | усі | `Forms/LeaderEditorForm.cs:2299-2312`, `Forms/MinisterEditorForm.cs:1813-1826` |

Колонка `Picture` у CSV командувачів і міністрів містить ім'я **без розширення**; редактор додає `.bmp`
(`Path.ChangeExtension(..., ".bmp")`) і шукає у `gfx\interface\pics` з урахуванням мода
(`Forms/LeaderEditorForm.cs:2305-2306`, `Forms/MinisterEditorForm.cs:1819-1820`).

### 2.2 Пошук файлів: тека експорту / мод / ваніль

* Шляхи у Windows-стилі з `\` (`Models/Game.cs:233-473`). Імена — у нижньому регістрі, крім
  теки `Mods` і згенерованих імен CSV командувачів (`leadersGER.csv`, §3.7). Редактор покладається на
  нечутливість ФС Windows до регістру; для Rust на Linux потрібен пошук без урахування регістру
  **(припущення)**.
* Тека мода в DH — `<гра>\Mods\<ModName>` (`ModPathNameDh = "Mods"`, `Models/Game.cs:303`,
  `Models/Game.cs:842-844`); у HoI2/AoD — `<гра>\<ModName>` (`Models/Game.cs:846-848`). Тека експорту
  (куди редактор зберігає) — аналогічно `<гра>\Mods\<ExportName>` для DH (`Models/Game.cs:872-874`).
* `GetReadFileName` для одиночного файлу перевіряє: тека експорту → тека мода → ваніль; бере перший шлях,
  де існує файл **або тека** (`Models/Game.cs:585-604`). `GetWriteFileName` пише в теку експорту, якщо
  вона задана, інакше в теку мода, інакше у ваніль (`Models/Game.cs:623-634`).
* Так розв'язуються `db\misc.txt` (`Models/Misc.cs:4404`), `db\randomleaders.csv`
  (`Models/RandomLeaders.cs:87`), файли рис міністрів (`Models/Ministers.cs:867`, `Models/Ministers.cs:903`),
  DH-списки (`Models/Leaders.cs:455`, `Models/Ministers.cs:1227`) і кожен файл зі списку
  (`Models/Leaders.cs:476`, `Models/Ministers.cs:1248`).
* Для тек `db\leaders` і `db\ministers` без DH-списку діє об'єднання тек (§3.1).

### 2.3 Кодування та закінчення рядків

* Усі CSV і скриптові файли цієї області читаються й пишуться в кодовій сторінці `Game.CodePage`
  (`Parsers/CsvLexer.cs:112`, `Parsers/TextLexer.cs:112`, `Models/Leaders.cs:933`, `Models/Ministers.cs:1651`,
  `Models/RandomLeaders.cs:229`, `Writers/MiscWriter.cs:24`). Значення залежить від мови, обраної в
  редакторі: англійська → **1252** (для російської, індекс 7 у списку, — 1251); японська → 932;
  патчі: корейська 949, традиційна китайська 950, спрощена 936 (`Forms/MainForm.cs:724-761`).
  Для DH (англійська версія) типово **Windows-1252** **(припущення: гра сама не декларує кодування)**.
* Конструктор `StreamReader(path, Encoding)` у .NET за замовчуванням розпізнає BOM, тож файл з UTF-8/UTF-16
  BOM буде прочитано відповідно BOM (поведінка .NET, не коду редактора) **(припущення)**.
* **Квірк:** DH-списки `db\leaders.txt` і `db\ministers.txt` читаються `StreamReader` **без явного
  кодування** (тобто UTF-8 у .NET) (`Models/Leaders.cs:507`, `Models/Ministers.cs:1279`), а пишуться в
  `Game.CodePage` (`Models/Leaders.cs:904`, `Models/Ministers.cs:1622`). Для ASCII-імен різниці немає.
* Запис — через `StreamWriter.WriteLine`, тобто CRLF на Windows; BOM для 1252/932 не пишеться
  **(припущення: стандартна поведінка .NET)**. Читання `ReadLine` приймає CRLF, LF і CR.

### 2.4 CSV-лексер (спільний для командувачів, міністрів, `randomleaders.csv`)

`Parsers/CsvLexer.cs:135-174`:

1. Читає один фізичний рядок.
2. Порожній рядок → «немає токенів» (рядок пропускається).
3. Рядок, **перший символ** якого `#`, — коментар (пропускається). `#` не на початку рядка коментарем
   не є.
4. Інакше рядок розбивається по `;` **без** лапок, екранування і обрізання пробілів; порожні поля
   зберігаються (`Parsers/CsvLexer.cs:51`, `Parsers/CsvLexer.cs:158`).
5. `SkipLine` просто пропускає наступний фізичний рядок (використовується для заголовка командувачів).

Наслідок: `;` не може входити в ім'я. Пробіли навколо значень зберігаються в рядкових полях (ім'я,
портрет, рядки посади/риси). Числові поля розбираються `int.TryParse`/`uint.TryParse` без явного стилю,
тобто `NumberStyles.Integer`, який допускає провідні/кінцеві пробіли та знак **(припущення: стандартна
поведінка .NET)**.

---

## 3. Командувачі (`db\leaders\*.csv`)

### 3.1 Які файли завантажуються

Вибір гілки — за `Game.Type` (`Models/Leaders.cs:308-324`):

* **HoI2 / AoD**, а також **DH без `db\leaders.txt`** — скан тек (`Models/Leaders.cs:337-446`):
  1. якщо задана тека експорту — усі `*.csv` з `<експорт>\db\leaders` (ім'я файлу, у нижньому регістрі,
     заноситься до списку «вже завантажених»);
  2. якщо задано мод — усі `*.csv` з `<мод>\db\leaders` (так само);
  3. усі `*.csv` з `<гра>\db\leaders`, **окрім** тих, чиє ім'я (без урахування регістру) вже є у списку
     (`Models/Leaders.cs:419-424`).
  Отже, мод перекриває ванільний файл з тим самим ім'ям і може додавати нові файли. Порядок файлів
  усередині теки — як повертає ФС (не визначено) **(припущення)**.
* **DH з `db\leaders.txt`** (шлях розв'язується через експорт → мод → ваніль) (`Models/Leaders.cs:452-497`):
  * формат списку: по одному імені файлу на рядок, **відносно `db\leaders`**; порожні рядки й рядки, що
    починаються з `#` (саме в першій позиції), ігноруються; рядки не обрізаються
    (`Models/Leaders.cs:502-529`);
  * кожне ім'я розв'язується окремо (експорт → мод → ваніль) (`Models/Leaders.cs:476`);
  * файли, яких немає у списку, **не читаються**, навіть якщо лежать у теці.
  * Коментар у коді називає цю гілку «DH з модом», але фактична умова — лише наявність файлу-списку
    (`Models/Leaders.cs:454-459`).

### 3.2 Структура файлу

* Рядок 1 — заголовок; **пропускається без аналізу** (`Models/Leaders.cs:547-548`). Порожній файл або
  файл лише з заголовком — без командувачів.
* Далі — один командувач на рядок. Країна визначається **колонкою `Country` кожного рядка**; файл може
  (технічно) містити кількох країн.
* Перший прочитаний командувач із валідною країною прив'язує файл до цієї країни у мапі
  `FileNameMap` (зберігається лише ім'я файлу без теки) (`Models/Leaders.cs:570-577`).

Заголовок, який пише редактор (`Models/Leaders.cs:938-941`):

```
Name;ID;Country;Rank 3 Year;Rank 2 Year;Rank 1 Year;Rank 0 Year;Ideal Rank;Max Skill;Traits;Skill;Experience;Loyalty;Type;Picture;Start Year;End Year;x
```

з `EnableRetirementYearLeaders = 1` — перед `x` додається `Retirement Year`:

```
Name;ID;Country;Rank 3 Year;Rank 2 Year;Rank 1 Year;Rank 0 Year;Ideal Rank;Max Skill;Traits;Skill;Experience;Loyalty;Type;Picture;Start Year;End Year;Retirement Year;x
```

Ілюстративний рядок (вигадані значення): `Ivan Petrenko;99001;UKR;1936;1938;1941;1990;1;5;130;3;0;0;0;ukr_99001;1936;1950;x`

### 3.3 Колонки

Розбір — `Models/Leaders.cs:589-812`; запис — `Models/Leaders.cs:958-1001`.

| # | Заголовок | Поле | Тип / значення | Якщо не розібралось | Джерело |
|---|---|---|---|---|---|
| 0 | `Name` | ім'я | довільний рядок без `;`; **порожнє → рядок пропускається** | рядок пропущено | `Models/Leaders.cs:610-621` |
| 1 | `ID` | ідентифікатор | `int`; унікальний **глобально** (усі країни) | рядок пропущено | `Models/Leaders.cs:623-632`, `Models/Leader.cs:20-29` |
| 2 | `Country` | тег країни | 3-літерний тег, регістр не важливий (`ToUpper`); пишеться у верхньому регістрі | рядок пропущено, якщо тег порожній або невідомий редактору | `Models/Leaders.cs:634-642` |
| 3 | `Rank 3 Year` | рік присвоєння рангу 3 (генерал-майор) | `int` (рік) | 1990 | `Models/Leaders.cs:644-659` |
| 4 | `Rank 2 Year` | рік рангу 2 (генерал-лейтенант) | `int` | 1990 | те саме |
| 5 | `Rank 1 Year` | рік рангу 1 (генерал) | `int` | 1990 | те саме |
| 6 | `Rank 0 Year` | рік рангу 0 (маршал) | `int` | 1990 | те саме |
| 7 | `Ideal Rank` | «ідеальний» ранг | `0..3` (0 = маршал … 3 = генерал-майор) | `None`; пишеться порожнім рядком | `Models/Leaders.cs:661-673`, `Models/Leaders.cs:969` |
| 8 | `Max Skill` | максимальна навичка | `int` | 0 | `Models/Leaders.cs:675-687` |
| 9 | `Traits` | риси | `uint` десятковий, бітова маска §3.5 | 0 | `Models/Leaders.cs:689-701` |
| 10 | `Skill` | поточна (початкова) навичка | `int` | 0 | `Models/Leaders.cs:703-715` |
| 11 | `Experience` | досвід | `int` | 0 | `Models/Leaders.cs:717-729` |
| 12 | `Loyalty` | лояльність | `int` | 0 | `Models/Leaders.cs:731-743` |
| 13 | `Type` | рід військ | `0` = армія, `1` = флот, `2` = авіація | `None`; пишеться порожнім | `Models/Leaders.cs:745-757`, `Models/Leaders.cs:975`, `Models/Branches.cs:52-58` |
| 14 | `Picture` | портрет | ім'я файлу без розширення (§2.1) | — (береться як є) | `Models/Leaders.cs:759-761` |
| 15 | `Start Year` | рік появи | `int` | 1930 | `Models/Leaders.cs:763-775` |
| 16 | `End Year` | рік зникнення | `int` | 1970 | `Models/Leaders.cs:777-789` |
| 17 | `Retirement Year` | рік відставки — **лише якщо** `EnableRetirementYearLeaders` | `int` | 1999; без прапорця завжди 1999 і не пишеться | `Models/Leaders.cs:791-809` |
| 17/18 | `x` | маркер кінця запису | не перевіряється при читанні; пишеться малою `x` | — | `Models/Leaders.cs:961`, `Models/Leaders.cs:984` |

Перевірка кількості токенів (`Models/Leaders.cs:599-608`): очікується 18 (без Retirement Year) або 19 (з ним).
Якщо токенів інакше — попередження в журнал; рядок **відкидається лише коли токенів менше 17 / 18**
(тобто дозволено відсутній кінцевий `x` або зайві колонки, які ігноруються).

Внутрішні представлення в редакторі (корисно для Rust-моделі):

* `RankYear[0..3]` = колонки 3..6 у порядку файлу: `[0]` — генерал-майор (ранг 3), `[3]` — маршал (ранг 0)
  (`Models/Leader.cs:54`, `Models/Leader.cs:478-481`, `Models/Leaders.cs:1258-1300`).
* `IdealRank` зберігається як `LeaderRank = 4 − значення_у_файлі` (`Models/Leaders.cs:665`,
  `Models/Leaders.cs:969`).
* `Branch` зберігається як `значення_у_файлі + 1` (`Models/Leaders.cs:749`, `Models/Leaders.cs:975`).

### 3.4 Ранги

Перелік `LeaderRank` (`Models/Leader.cs:452-459`) і відповідність числу у файлі:

| Число у файлі (`Ideal Rank`, `Rank N Year`, `misc …Rank N`) | `LeaderRank` (внутр.) | Звання (`Resources.RankN`) |
|---|---|---|
| — (невалідне) | `None` = 0 | — |
| 3 | `MajorGeneral` = 1 | Major General / генерал-майор |
| 2 | `LieutenantGeneral` = 2 | Lieutenant General / генерал-лейтенант |
| 1 | `General` = 3 | General / генерал |
| 0 | `Marshal` = 4 | Marshal / маршал |

Назви рангів беруться з ресурсів редактора `Rank0..Rank3` (`Models/Leaders.cs:169`,
`Properties/Resources.resx:216-227`), а не з файлів гри. Для флоту й авіації ті самі числа означають
відповідні звання родів військ **(припущення)**. Ліміти командування кожного рангу задаються в
`misc.txt` (`LandLeaderCommandLimitRank0..3` тощо, §5.8.4).

### 3.5 Риси (Traits) — бітова маска

Колонка `Traits` — беззнакове 32-бітне ціле в десятковому записі; використовуються біти 0..30
(`Models/Leader.cs:231-386`). Ключі локалізації — `Leaders.TraitsNames` (`Models/Leaders.cs:115-148`),
текст береться з рядкових таблиць гри через `Config.GetText` (`Forms/LeaderEditorForm.cs:1377-1380`).
Колонки «А/Ф/П» — маски `ArmyTraits` / `NavyTraits` / `AirforceTraits` (`Models/Leader.cs:391-406`).

| Біт | Значення | Hex | `LeaderTraitsId` | Ключ локалізації | А | Ф | П | Зміст |
|---|---|---|---|---|---|---|---|---|
| 0 | 1 | 0x00000001 | `LogisticsWizard` | `TRAIT_LOGWIZ` | ✓ | | | майстер логістики |
| 1 | 2 | 0x00000002 | `DefensiveDoctrine` | `TRAIT_DEFDOC` | ✓ | | | оборонна доктрина |
| 2 | 4 | 0x00000004 | `OffensiveDoctrine` | `TRAIT_OFFDOC` | ✓ | | | наступальна доктрина |
| 3 | 8 | 0x00000008 | `WinterSpecialist` | `TRAIT_WINSPE` | ✓ | | | спеціаліст зимової війни |
| 4 | 16 | 0x00000010 | `Trickster` | `TRAIT_TRICKS` | ✓ | | | хитрун (засідки) |
| 5 | 32 | 0x00000020 | `Engineer` | `TRAIT_ENGINE` | ✓ | | | інженер |
| 6 | 64 | 0x00000040 | `FortressBuster` | `TRAIT_FORBUS` | ✓ | | | руйнівник фортець |
| 7 | 128 | 0x00000080 | `PanzerLeader` | `TRAIT_PNZLED` | ✓ | | | танковий командир |
| 8 | 256 | 0x00000100 | `Commando` | `TRAIT_COMMAN` | ✓ | | | спецоперації |
| 9 | 512 | 0x00000200 | `OldGuard` | `TRAIT_OLDGRD` | ✓ | ✓ | ✓ | стара гвардія |
| 10 | 1024 | 0x00000400 | `SeaWolf` | `TRAIT_SEAWOL` | | ✓ | | морський вовк |
| 11 | 2048 | 0x00000800 | `BlockadeRunner` | `TRAIT_BLKRUN` | | ✓ | | прорив блокади |
| 12 | 4096 | 0x00001000 | `SuperiorTactician` | `TRAIT_SUPTAC` | | ✓ | ✓ | видатний тактик |
| 13 | 8192 | 0x00002000 | `Spotter` | `TRAIT_SPOTTE` | | ✓ | ✓ | розвідник (виявлення) |
| 14 | 16384 | 0x00004000 | `TankBuster` | `TRAIT_TNKBUS` | | | ✓ | винищувач танків |
| 15 | 32768 | 0x00008000 | `CarpetBomber` | `TRAIT_CRPBOM` | | | ✓ | килимові бомбардування |
| 16 | 65536 | 0x00010000 | `NightFlyer` | `TRAIT_NGHTFL` | | ✓ | ✓ | нічні операції |
| 17 | 131072 | 0x00020000 | `FleetDestroyer` | `TRAIT_FLTDES` | | | ✓ | удари по кораблях |
| 18 | 262144 | 0x00040000 | `DesertFox` | `TRAIT_DSRFOX` | ✓ | | | пустельний лис |
| 19 | 524288 | 0x00080000 | `JungleRat` | `TRAIT_JUNGLE` | ✓ | | | джунглі |
| 20 | 1048576 | 0x00100000 | `UrbanWarfareSpecialist` | `TRAIT_URBAN` | ✓ | | | міські бої |
| 21 | 2097152 | 0x00200000 | `Ranger` | `TRAIT_FOREST` | ✓ | | | ліс (рейнджер) |
| 22 | 4194304 | 0x00400000 | `Mountaineer` | `TRAIT_MOUNTAIN` | ✓ | | | гори |
| 23 | 8388608 | 0x00800000 | `HillsFighter` | `TRAIT_HILLS` | ✓ | | | пагорби |
| 24 | 16777216 | 0x01000000 | `CounterAttacker` | `TRAIT_COUNTER` | ✓ | | | контратака |
| 25 | 33554432 | 0x02000000 | `Assaulter` | `TRAIT_ASSAULT` | ✓ | | | штурм |
| 26 | 67108864 | 0x04000000 | `Encircler` | `TRAIT_ENCIRCL` | ✓ | | | оточення |
| 27 | 134217728 | 0x08000000 | `Ambusher` | `TRAIT_AMBUSH` | ✓ | | | засідка |
| 28 | 268435456 | 0x10000000 | `Disciplined` | `TRAIT_DELAY` | ✓ | | | дисципліна (подія «затримка») |
| 29 | 536870912 | 0x20000000 | `ElasticDefenceSpecialist` | `TRAIT_TATICAL` | ✓ | | | гнучка оборона (подія «тактичний відхід») |
| 30 | 1073741824 | 0x40000000 | `Blitzer` | `TRAIT_BREAK` | ✓ | | | бліцкриг (подія «прорив») |

* Маски: `ArmyTraits` = 2147222527 (0x7FFC03FF), `NavyTraits` = 81408 (0x00013E00),
  `AirforceTraits` = 258560 (0x0003F200). У коді редактора маски оголошені, але **ніде не
  використовуються** (пошук по `HoI2Editor/`); редактор не забороняє «чужі» риси.
* Ключі `TRAIT_TATICAL`, `TRAIT_FOREST`, `TRAIT_DELAY`, `TRAIT_BREAK` — ідентифікатори гри; їхня «невідповідність»
  англійським назвам `LeaderTraitsId` (`Ranger`, `Disciplined`, …) — історична, відтворювати як є.
* Біти 18..23 — риси місцевості, 24..30 — риси бойових подій DH; це узгоджується з параметрами
  `ChanceGetTerrainTrait` / `ChanceGetEventTrait` і бойовими подіями `CounterAttack…Breakthrough` у
  `misc.txt` **(припущення)**.
* Біт 31 не визначено; значення ≥ 2³¹ розбирається як `uint` без помилки і зберігається як є.

### 3.6 Перевірки при збереженні

`Models/Leaders.cs:944-1008`: для кожного командувача країни пишеться рядок; якщо `Branch` або `IdealRank`
невалідні — лише попередження, а в колонку пишеться порожній рядок. Числа пишуться стандартним
`ToString` .NET (десяткові без розділювачів).

### 3.7 Імена файлів і збереження

* Файл, у який пишуться командувачі країни, — ім'я з `FileNameMap` (те, з якого їх прочитано); якщо його
  немає — `leaders` + **тег у верхньому регістрі** + `.csv`, напр. `leadersGER.csv`
  (`Models/Game.cs:718-723`).
* Пишеться лише файл країни, позначеної як змінена; у файл потрапляють **усі** командувачі цієї країни
  в порядку внутрішнього списку (`Models/Leaders.cs:854-874`, `Models/Leaders.cs:944`).
* Наслідок **(припущення з коду)**: якщо вихідний CSV містив кількох країн, після збереження «чужі»
  командувачі опиняться у файлах своїх країн (а не у вихідному).
* DH: якщо до `FileNameMap` додано нову країну (копіювання/переміщення командувачів), переписується
  `db\leaders.txt` — по одному значенню з `FileNameMap` на рядок (`Models/Leaders.cs:837-851`,
  `Models/Leaders.cs:891-914`, `Models/Leaders.cs:1130-1135`). **Квірк:** це відбувається й тоді, коли
  списку раніше не існувало (тоді DH-гра перейде у «режим списку» з неповним переліком: файли без
  жодного валідного командувача у `FileNameMap` не потрапляють). Шлях у списку — лише ім'я файлу
  (без підтек).
* Редактор приймає лише теги з власного фіксованого списку (`Models/Countries.cs:1039-1050`, для DH —
  список HoI2); рядки з іншими тегами відкидаються. Для власної реалізації варто приймати довільні
  3-символьні теги **(припущення)**.

### 3.8 Ідентифікатори

* Множина зайнятих ID — одна на всі країни (`Leaders.IdSet`, `Models/Leaders.cs:34`, `Models/Leader.cs:20-29`).
* Новий ID: `max(ID командувачів цієї країни) + 1` (або 1, якщо їх немає), далі +1, поки ID зайнятий
  глобально (`Models/Leaders.cs:1445-1484`).
* Дублікати ID у файлах не відкидаються (лише множина `IdSet` їх не розрізнить) **(припущення з коду)**.

### 3.9 `db\randomleaders.csv`

`Models/RandomLeaders.cs`:

* Без заголовка; кожен рядок — `TAG;Ім'я` (`Models/RandomLeaders.cs:136-176`). Порожні рядки і рядки з `#`
  на початку пропускаються (CSV-лексер).
* Менше 2 токенів — рядок пропущено; більше 2 — попередження, решта ігнорується
  (`Models/RandomLeaders.cs:147-156`).
* Тег регістронезалежний; невідомий тег — рядок пропущено; порожнє ім'я — пропущено
  (`Models/RandomLeaders.cs:158-172`).
* Імена накопичуються списком на країну в порядку файлу. Запис: для кожної країни (порядок —
  внутрішній список тегів) рядки `TAG;Ім'я` (`Models/RandomLeaders.cs:229-238`).
* **Баг редактора:** `Load` викликає читання файлу двічі (поза `try` і в `try`), тож кожне ім'я
  дублюється в пам'яті, а при збереженні — у файлі (`Models/RandomLeaders.cs:94-97`).
* Призначення в грі — пул імен для випадково згенерованих командувачів **(припущення)**.

---

## 4. Міністри (`db\ministers\*.csv`)

### 4.1 Які файли завантажуються

Ідентично командувачам (§3.1), але з `db\ministers` і `db\ministers.txt`
(`Models/Ministers.cs:1074-1301`). Без списку — скан `*.csv` з об'єднанням тек експорт → мод → ваніль;
з DH-списком — лише перелічені файли.

Перед читанням CSV має бути ініціалізовано список рис (`Ministers.InitPersonality`, §4.6), бо риса в CSV
зіставляється з ним (`Forms/MinisterEditorForm.cs:166-181`). Також має бути прочитаний `misc.txt`, бо від
нього залежить розкладка колонок (`Forms/MinisterEditorForm.cs:169`).

### 4.2 Структура файлу

`Models/Ministers.cs:1307-1358`:

1. **Рядок 1** розбивається лексером; **перша клітинка — тег країни** (регістронезалежно). Якщо рядок 1
   порожній, коментар або тег невідомий — **весь файл ігнорується**.
2. Усі наступні рядки — записи міністрів цієї країни. Рядок з порожньою першою клітинкою (зокрема
   стандартний другий рядок `;Replacements;...`) пропускається (`Models/Ministers.cs:1370-1374`).
3. Файл прив'язується до країни в `FileNameMap` (лише ім'я файлу) (`Models/Ministers.cs:1353-1356`).

Заголовки, які пише редактор (`Models/Ministers.cs:1656-1675`), де `TAG` — тег країни:

| Режим | Рядок 1 | Рядок 2 |
|---|---|---|
| старий (HoI2/AoD; DH з `UseNewMinisterFilesFormat = 0`) | `TAG;Ruling Cabinet - Start;Name;Pool;Ideology;Personality;Loyalty;Picturename;x` | `;Replacements;;;;;;;x` |
| новий (`UseNewMinisterFilesFormat = 1`) | `TAG;Ruling Cabinet - Start;Name;Start Year;End Year;Ideology;Personality;Loyalty;Picturename;X` | `;Replacements;;;;;;;;X` |
| з роком відставки (`EnableRetirementYearMinisters = 1`) | `TAG;Ruling Cabinet - Start;Name;Start Year;End Year;Retirement Year;Ideology;Personality;Loyalty;Picturename;X` | `;Replacements;;;;;;;;;X` |

Зверніть увагу: маркер кінця — мала `x` у старому форматі і велика `X` у нових (`Models/Ministers.cs:1659-1672`,
`Models/Ministers.cs:1701-1730`). При читанні маркер не перевіряється.

### 4.3 Колонки запису

Розбір — `Models/Ministers.cs:1366-1532`; запис — `Models/Ministers.cs:1698-1739`.

| Поле | Старий (9 токенів) | Новий (10) | Retirement (11) | Тип / значення | Якщо не розібралось |
|---|---|---|---|---|---|
| `ID` | 0 | 0 | 0 | `int`, унікальний глобально; порожній → рядок пропущено | нечисло → рядок пропущено (`Models/Ministers.cs:1391-1399`) |
| посада | 1 | 1 | 1 | рядок з §4.4, регістронезалежно | `None` + попередження; пишеться порожнім (`Models/Ministers.cs:1401-1413`) |
| `Name` | 2 | 2 | 2 | ім'я | — (`Models/Ministers.cs:1416`) |
| `Pool` / `Start Year` | 3 | 3 | 3 | старий формат: **рік − 1900** (напр. `36` = 1936); нові: повний рік | 1936 (`Models/Ministers.cs:1419-1431`) |
| `End Year` | — | 4 | 4 | повний рік | 1970; у старому форматі завжди 1970 і не пишеться (`Models/Ministers.cs:1434-1452`) |
| `Retirement Year` | — | — | 5 | повний рік | 1999; без прапорця завжди 1999 (`Models/Ministers.cs:1455-1473`) |
| `Ideology` | 4 | 5 | 6 | код з §4.5, регістронезалежно | `None`; пишеться порожнім (`Models/Ministers.cs:1475-1487`) |
| `Personality` | 5 | 6 | 7 | рядок риси з §4.6, регістронезалежно | див. §4.6 (`Models/Ministers.cs:1489-1512`) |
| `Loyalty` | 6 | 7 | 8 | рядок з §4.5, регістронезалежно | `None`; пишеться порожнім (`Models/Ministers.cs:1514-1526`) |
| `Picturename` | 7 | 8 | 9 | ім'я портрета без розширення (§2.1) | — (`Models/Ministers.cs:1529`) |
| `x`/`X` | 8 | 9 | 10 | маркер | не перевіряється |

Перевірка кількості токенів (`Models/Ministers.cs:1377-1386`): очікується 11 (`EnableRetirementYearMinisters`),
інакше 10 (`UseNewMinisterFilesFormat`), інакше 9; рядок відкидається, лише якщо токенів менше 10 / 9 / 8.

**Квірк поєднання прапорців:** розбір рахує `Start Year` як «рік − 1900» і читає `End Year` лише за
`UseNewMinisterFilesFormat`, а `Retirement Year` — за `EnableRetirementYearMinisters`, незалежно один від
одного; запис же у режимі Retirement завжди пише повні роки й `End Year`. Тобто комбінація
`EnableRetirementYearMinisters = 1` + `UseNewMinisterFilesFormat = 0` читається й пишеться
неузгоджено. Редактор неявно припускає, що Retirement вмикається лише разом із новим форматом
(`Forms/MinisterEditorForm.cs:272-282` вмикає прапорці автоматично при пакетному редагуванні).

### 4.4 Посади

`Models/Minister.cs:188-201`, рядки CSV — `Models/Ministers.cs:151-164`, ключі в
`minister_personalities.txt`/`minister_modifiers.txt` — `Parsers/MinisterPersonalityParser.cs:17-31`,
ключі локалізації — `Models/Config.cs:213-222`.

| `MinisterPosition` | Рядок у CSV | Ключ у файлі рис | Ключ локалізації |
|---|---|---|---|
| 1 `HeadOfState` | `Head of State` | `headofstate` | `HOIG_HEAD_OF_STATE` |
| 2 `HeadOfGovernment` | `Head of Government` | `headofgovernment` | `HOIG_HEAD_OF_GOVERNMENT` |
| 3 `ForeignMinister` | `Foreign Minister` | `foreignminister` | `HOIG_FOREIGN_MINISTER` |
| 4 `MinisterOfArmament` | `Minister of Armament` | `armamentminister` | `HOIG_ARMAMENT_MINISTER` |
| 5 `MinisterOfSecurity` | `Minister of Security` | `ministerofsecurity` | `HOIG_MINISTER_OF_SECURITY` |
| 6 `HeadOfMilitaryIntelligence` | `Head of Military Intelligence` | `ministerofintelligence` | `HOIG_MINISTER_OF_INTELLIGENCE` |
| 7 `ChiefOfStaff` | `Chief of Staff` | `chiefofstaff` | `HOIG_CHIEF_OF_STAFF` |
| 8 `ChiefOfArmy` | `Chief of Army` | `chiefofarmy` | `HOIG_CHIEF_OF_ARMY` |
| 9 `ChiefOfNavy` | `Chief of Navy` | `chiefofnavy` | `HOIG_CHIEF_OF_NAVY` |
| 10 `ChiefOfAirForce` | `Chief of Air Force` | `chiefofair` | `HOIG_CHIEF_OF_AIR` |

Значення 0 = `None` (невалідна посада; у CSV — порожній рядок). У файлах рис також допустимі `all`
(усі посади) і, лише в DH, `generic` (§4.7).

### 4.5 Ідеології та лояльність

Ідеології (`Models/Minister.cs:221-234`, коди — `Models/Ministers.cs:520-533`, ключі локалізації —
`Models/Config.cs:203-212`):

| `MinisterIdeology` | Код у CSV | Ключ локалізації | Зміст |
|---|---|---|---|
| 1 `NationalSocialist` | `NS` | `CATEGORY_NATIONAL_SOCIALIST` | націонал-соціаліст |
| 2 `Fascist` | `FA` | `CATEGORY_FASCIST` | фашист |
| 3 `PaternalAutocrat` | `PA` | `CATEGORY_PATERNAL_AUTOCRAT` | патерналістський автократ |
| 4 `SocialConservative` | `SC` | `CATEGORY_SOCIAL_CONSERVATIVE` | соціал-консерватор |
| 5 `MarketLiberal` | `ML` | `CATEGORY_MARKET_LIBERAL` | ринковий ліберал |
| 6 `SocialLiberal` | `SL` | `CATEGORY_SOCIAL_LIBERAL` | соціал-ліберал |
| 7 `SocialDemocrat` | `SD` | `CATEGORY_SOCIAL_DEMOCRAT` | соціал-демократ |
| 8 `LeftWingRadical` | `LWR` | `CATEGORY_LEFT_WING_RADICAL` | лівий радикал |
| 9 `Leninist` | `LE` | `CATEGORY_LENINIST` | ленініст |
| 10 `Stalinist` | `ST` | `CATEGORY_STALINIST` | сталініст |

Лояльність — рядки CSV (`Models/Ministers.cs:538-548`) і внутрішній перелік (`Models/Minister.cs:206-216`):

| Індекс | Рядок у CSV | Ім'я в переліку `MinisterLoyalty` |
|---|---|---|
| 0 | (порожньо) | `None` |
| 1 | `Very High` | `VeryLow` (!) |
| 2 | `High` | `Low` (!) |
| 3 | `Medium` | `Medium` |
| 4 | `Low` | `High` (!) |
| 5 | `Very Low` | `VeryHigh` (!) |
| 6 | `Undying` | `Undying` |
| 7 | `NA` | `Na` |

**Квірк:** імена членів переліку в редакторі інвертовані відносно рядків (індекс 1 — `"Very High"`, але
`MinisterLoyalty.VeryLow`). Зіставлення йде за індексом, тому рядки читаються й пишуться коректно;
у власній моделі слід орієнтуватися на **рядки**. Порівняння — регістронезалежне (`Models/Ministers.cs:768-771`,
`Models/Ministers.cs:1515`).

### 4.6 Риси (personality) міністра в CSV

* Список рис — масив `Personalities` (індекс = позиція у файлі рис); кожна має `String` (рядок для CSV),
  `Name` (ключ локалізації, напр. `NPERSONALITY_…`) і множину допустимих посад
  (`Models/Ministers.cs:2205-2230`).
* Джерело списку за грою (`Models/Ministers.cs:787-813`): HoI2 — вбудована таблиця (додаток А);
  AoD — `minister_modifiers.txt` (§4.8); DH — `minister_personalities.txt` (§4.7).
* Зіставлення колонки `Personality` (`Models/Ministers.cs:1489-1512`):
  1. рядок у нижньому регістрі шукається серед `String.ToLower()` усіх рис; при дублікатах перемагає
     **остання** риса з таким рядком (з попередженням) (`Models/Ministers.cs:907-914`);
  2. якщо не знайдено — пробується таблиця відомих одруківок (нижче);
  3. інакше — риса з **індексом 0** (у HoI2 це `Undistinguished Suit`) + попередження. Втрата даних!
* Запис: `Personalities[i].String`, приведений до «Title Case» (кожне слово з великої, решта малими,
  інваріантна культура), окрім винятків (`Models/Ministers.cs:915`, `Models/Ministers.cs:931-942`).
  Отже, регістр рядка риси при збереженні нормалізується.

Таблиця одруківок (читання; ключ і значення в нижньому регістрі; `Models/Ministers.cs:601-619`):

| У файлі | Тлумачиться як |
|---|---|
| `barking buffon` | `barking buffoon` |
| `iron-fisted brute` | `iron fisted brute` |
| `the cloak-n-dagger schemer`, `cloak-n-dagger schemer`, `cloak n dagger schemer` | `the cloak n dagger schemer` |
| `laissez-faires capitalist`, `laissez faires capitalist`, `laissez faire capitalist` | `laissez-faire capitalist` |
| `military entrepeneur` | `military entrepreneur` |
| `crooked plutocrat` | `crooked kleptocrat` |
| `school of defense` | `school of defence` |
| `school of maneouvre` | `school of manoeuvre` |
| `elastic defense doctrine` | `elastic defence doctrine` |
| `static defense doctrine` | `static defence doctrine` |
| `vertical envelopement doctrine` | `vertical envelopment doctrine` |

Винятки «Title Case» при записі (`Models/Ministers.cs:553-596`) — рядок у нижньому регістрі → як писати:
`Die-hard Reformer`, `Pig-headed Isolationist`, `Air to Ground Proponent`, `Air to Sea Proponent`,
`Man of the People`, `Prince of Terror`, `School of Defence`, `School of Fire Support`,
`School of Mass Combat`, `School of Manoeuvre`, `School of Psychology`, `Guns and Butter Doctrine`,
`Health and Safety`, `Doctrine of Autonomy`, `ger_mil_m1` … `ger_mil_m11` (лишаються малими),
`brit_nav_mis` (малими), `SS Reichsfuhrer`, `Salesman of Deception`, `Master of Propaganda`,
`Undersecretary of War`, `Persuader of Democracies`, `Father of United Nations`, `Director of FBI`,
`Secretary of War`, `Ambassador to UN`, `Secretary of the Interior`, `Supporter of Devaluation`,
`Opposer of the Far Right`, `Supporter of Friendly Relations`, `Opposer to Military Spending`.
Більшість цих рядків (крім перших дванадцяти) — DH-специфічні риси з `minister_personalities.txt`
**(припущення: їх немає у вбудованій таблиці HoI2)**.

Для Rust: читати рису регістронезалежно, зберігати **вихідний** рядок для точного запису; таблицю
одруківок застосовувати лише для зіставлення.

### 4.7 DH: `db\ministers\minister_personalities.txt`

Скриптовий синтаксис, лексер §5.2 з пропуском пробілів і коментарів `#`
(`Parsers/MinisterPersonalityParser.cs:55`). Граматика, як її розбирає редактор
(`Parsers/MinisterPersonalityParser.cs:51-278`):

```
файл     := { "minister" "=" "{" поле* "}" }*
поле     := "trait"    "=" РЯДОК_У_ЛАПКАХ        -> рядок риси для CSV (String)
          | "name"     "=" (ІДЕНТИФІКАТОР | РЯДОК) -> ключ локалізації (Name)
          | "position" "=" ІДЕНТИФІКАТОР        -> посада; може повторюватися
          | "id"       ...решта рядка пропускається
          | "desc"     ...решта рядка пропускається
          | "value"    ...решта рядка пропускається
          | "command"  ...решта рядка пропускається
```

* Ключові слова порівнюються **з урахуванням регістру** (`Equals("minister")`, `Equals("trait")` тощо).
* `position`: значення приводиться до нижнього регістру; ключі — з §4.4; `all` = усі посади (включно з
  індексом 0); `generic` — **приймається без помилки, але не встановлює жодної посади**
  (`Parsers/MinisterPersonalityParser.cs:237-257`). Що `generic` означає у грі — відкрите питання (§8).
* Кожен блок `minister` дає одну рису; порядок блоків = індекс риси. Значення `id` редактор **не
  використовує** (рядок пропускається) — зіставлення з CSV іде лише за рядком `trait`.
* `id`, `desc`, `value`, `command` пропускаються «до кінця фізичного рядка» — отже, багаторядкові
  значення (напр. `command = { ... }` на кількох рядках) зламають розбір **(припущення з коду)**.
* Будь-яке інше ключове слово всередині блоку: сам ідентифікатор пропускається, а наступний токен `=` уже
  не є ідентифікатором → блок вважається невалідним і розбір блоку припиняється
  (`Parsers/MinisterPersonalityParser.cs:128-133`). **Баг:** невалідний блок (`null`) усе одно
  додається до списку (`Parsers/MinisterPersonalityParser.cs:75-82`), що далі призводить до винятку.
* Файл тільки читається; редактор його не пише.

Ілюстрація (вигадані значення):

```
minister = {
	trait = "Example Trait"
	id = 999
	name = NPERSONALITY_EXAMPLE_TRAIT
	desc = "..."
	position = headofstate
	position = headofgovernment
	command = { type = example value = 1 }
}
```

### 4.8 AoD: `db\ministers\minister_modifiers.txt` (для порівняння)

`Parsers/MinisterModifierParser.cs:51-594`. Використовується **лише для AoD** (`Models/Ministers.cs:867`).

```
файл := "minister_modifiers" "=" "{" (ІДЕНТИФІКАТОР ...решта рядка)* "}"
      | "minister_personalities" "=" "{" ("personality" "=" "{" поле* "}")* "}"
поле := "personality_string" "=" РЯДОК        -> рядок риси для CSV
      | "name" "=" (ІДЕНТИФІКАТОР | РЯДОК)     -> ключ локалізації
      | "desc" ...решта рядка
      | "minister_position" "=" ІДЕНТИФІКАТОР  -> посада (ключі §4.4, `all`)
      | "modifier" "=" "{" ("type" "=" ІДЕНТ | "value" "=" (ІДЕНТ|ЧИСЛО) | "option1" "=" ЧИСЛО
                          | "option2" "=" ЧИСЛО | "modifier_effect" "=" ЧИСЛО
                          | "division" "=" ІДЕНТ | "extra" "=" ІДЕНТ)* "}"
```

* Вміст `minister_modifiers` і `modifier` синтаксично перевіряється, але не зберігається.
* `generic` у `minister_position` дозволено лише для DH (`Parsers/MinisterModifierParser.cs:364`) —
  мертвий код, бо цей парсер для DH не викликається.

### 4.9 ID, імена файлів, збереження

* `ID` — глобально унікальний серед усіх міністрів (`Models/Minister.cs:20-29`); генерація нового —
  як у командувачів (`Models/Ministers.cs:2090-2130`).
* Ім'я файлу за замовчуванням: `ministers_` + **тег у нижньому регістрі** + `.csv`, напр.
  `ministers_ger.csv` (`Models/Game.cs:730-735`).
* DH-список `db\ministers.txt` переписується так само, як `db\leaders.txt` (§3.7)
  (`Models/Ministers.cs:1556-1571`, `Models/Ministers.cs:1609-1632`).
* Перед записом рядка — попередження, якщо посада/ідеологія/лояльність невалідні
  (`Models/Ministers.cs:1680-1695`).

---

## 5. `db\misc.txt` — ігрові константи

### 5.1 Принцип: позиційний файл

* Файл складається з блоків `<секція> = { ... }`. Імена секцій (`Models/Misc.cs:373-386`):
  `economy`, `intelligence`, `diplomacy`, `combat`, `mission`, `country`, `research`, `trade`, `ai`,
  `mod`, `map`.
* Усередині блоку — **лише числа**, розділені пробілами/рядками/коментарями. Ключів немає: значення
  числа визначається його **порядковим номером** серед чисел секції для конкретної гри/версії
  (`Parsers/MiscParser.cs:225-293`). Редактор при записі ставить на початок файлу коментар про те, що
  порядок змінювати не можна (`Writers/MiscWriter.cs:26`).
* Набір «слотів» визначається трьома таблицями, індексованими однаково (порядок переліку `MiscItemId`,
  `Models/Misc.cs:4902-5786`):
  * `SectionItems` — які ідентифікатори і в якому порядку належать секції (`Models/Misc.cs:409-1306`);
    порядок секцій і всередині секцій збігається з порядком переліку (перевірено скриптом);
  * `ItemTable[id, гра]` — чи існує слот у даній грі/версії (`Models/Misc.cs:1311-2174`), 8 колонок у
    порядку `MiscGameType` (§5.4);
  * `ItemTypes[id]` — тип значення і формат запису (`Models/Misc.cs:2179-3042`), див. §5.6.
* Секції, що існують лише в DH (`SectionTable`, `Models/Misc.cs:391-404`): `intelligence`, `diplomacy`,
  `mission`, `country`, `trade`, `ai`, `mod`, `map`. У HoI2/AoD є тільки `economy`, `combat`, `research`.
* Порядок **секцій** у файлі для парсера не важливий (кожна розпізнається за іменем), але редактор
  записує їх у фіксованому порядку вище (`Writers/MiscWriter.cs:28-33`).

### 5.2 Лексер скриптових файлів (`Parsers/TextLexer.cs`)

Той самий лексер використовується для `misc.txt` (у режимі **зі збереженням** пробілів і коментарів,
`Parsers/MiscParser.cs:33`) і для файлів рис міністрів (у режимі з їх пропуском).

| Токен | Правило | Джерело |
|---|---|---|
| `Number` | починається з цифри, `-` або `.`; далі необов'язковий `-` на початку, цифри, не більше однієї `.`; розбирається як `double` в інваріантній культурі. Якщо до появи `-`/`.` трапляється літера або `_`, токен стає `Identifier` (напр. `3rd`). Нерозбірний рядок (напр. `-` чи `.`) → `Invalid`. Експонента (`1e5`) **не** підтримується: `1e5` стає ідентифікатором | `Parsers/TextLexer.cs:273-276`, `Parsers/TextLexer.cs:335-404` |
| `Identifier` | починається з літери (Unicode `IsLetter`) або `_`; далі літери, цифри, `_` | `Parsers/TextLexer.cs:279-282`, `Parsers/TextLexer.cs:410-437` |
| `String` | `"`…`"`, без екранування; незакритий рядок обривається на кінці рядка | `Parsers/TextLexer.cs:285-289`, `Parsers/TextLexer.cs:443-476` |
| `Equal` / `OpenBrace` / `CloseBrace` | `=`, `{`, `}` | `Parsers/TextLexer.cs:292-310` |
| `WhiteSpace` | послідовність пробільних і керівних символів (зберігається дослівно, з `\r\n`) | `Parsers/TextLexer.cs:315-318`, `Parsers/TextLexer.cs:482-527` |
| `Comment` | від `#` до кінця рядка (без символу нового рядка) | `Parsers/TextLexer.cs:321-324`, `Parsers/TextLexer.cs:533-558` |
| `Invalid` | будь-що інше, до першого символу, що може почати інший токен | `Parsers/TextLexer.cs:328`, `Parsers/TextLexer.cs:564-597` |

У режимі пропуску (`skipWhiteSpace = true`) пробіли/керівні символи та коментарі `#…` до кінця рядка
мовчки пропускаються (`Parsers/TextLexer.cs:224-270`). `SkipLine` відкидає решту поточного фізичного
рядка (`Parsers/TextLexer.cs:602-606`).

### 5.3 Алгоритм розбору `misc.txt`

`Parsers/MiscParser.cs:28-316`:

1. Визначити варіант гри `MiscGameType` (§5.4).
2. Верхній рівень: пропускати пробіли й коментарі; не-ідентифікатор → попередження і далі; ідентифікатор,
   що **точно** (з урахуванням регістру) збігається з іменем секції → розбір секції; інший ідентифікатор →
   попередження і далі (`Parsers/MiscParser.cs:35-176`).
3. Секція: (пробіли/коментарі) `=` (пробіли/коментарі) `{`. Далі для **кожного слота** секції, що існує
   в поточному варіанті гри, у порядку `SectionItems`:
   * усі токени-пробіли/коментарі до числа зберегти як «префікс» цього слота (`Misc.SetComment`)
     (`Parsers/MiscParser.cs:228-239`);
   * наступний токен **мусить** бути `Number`, інакше секція невалідна (`Parsers/MiscParser.cs:242-246`);
   * перетворення за типом (`Parsers/MiscParser.cs:247-292`): `Bool` → `(int)значення != 0`;
     цілі типи й `Enum` → `(int)значення` (дробова частина відкидається); дійсні → `double`.
4. Після останнього слота — пробіли/коментарі зберегти як «суфікс» секції; далі **мусить** бути `}`
   (`Parsers/MiscParser.cs:295-313`).
5. Якщо секція невалідна (менше чи більше чисел, ніж слотів, або не-число), розбір секції припиняється з
   попередженням; уже прочитані значення лишаються; решта токенів секції обробляється на верхньому рівні
   як «невалідні» (`Parsers/MiscParser.cs:67-71` і далі). Зайве число в кінці секції спричинить саме таку
   помилку, бо після останнього слота очікується `}`.
6. Неочікуваний кінець файлу всередині секції → виняток → повідомлення про помилку читання, файл
   вважається не завантаженим (`Models/Misc.cs:4406-4416`).
7. Повторна секція перезаписує значення **(припущення з коду)**; відсутня секція лишає значення
   невизначеними (`null`).

Діапазони під час розбору **не перевіряються**. Проте при отриманні/записі цілих значень (крім `Enum`)
вони обрізаються до `IntMinValues`/`IntMaxValues`, якщо ті задані (`Models/Misc.cs:4515-4543`) — тобто
редактор мовчки змінить, напр., `MaxRevoltRisk = 150` на `100`. Дійсні межі (`DblMinValues`/`DblMaxValues`)
і знакові обмеження типів перевіряються лише при ручному введенні в UI (`Forms/MiscEditorForm.cs:815-945`).

**Порада для Rust (припущення):** версію DH можна визначати не лише з exe (§5.4), а й за кількістю чисел
у секціях: напр. `combat` має 130 / 199 / 262 числа в DH 1.02 / 1.03 / 1.04 (§5.7).

### 5.4 Варіанти гри (`MiscGameType`)

`Models/Misc.cs:4876-4894`, `Models/Misc.cs:5809-5819`. Колонки `ItemTable` і символи «маски» в
таблицях нижче йдуть у цьому порядку:

| Індекс | `MiscGameType` | Умова | Позначка в масці |
|---|---|---|---|
| 0 | `Dda12` | HoI2, версія < 1.30 | 1-й символ |
| 1 | `Dda13` | HoI2, версія ≥ 1.30 | 2-й |
| 2 | `Aod104` | AoD, версія ≤ 1.04 | 3-й |
| 3 | `Aod107` | AoD, 1.05..1.07 | 4-й |
| 4 | `Aod108` | AoD, ≥ 1.08 | 5-й |
| 5 | `Dh102` | DH, версія < 1.03 | 6-й (**H2**) |
| 6 | `Dh103` | DH, версія = 1.03 | 7-й (**H3**) |
| 7 | `Dh104` | DH, версія ≥ 1.04 (зокрема 1.05) | 8-й (**H4**) |

Визначення гри та версії (`Models/Game.cs:898-940`, `Models/Game.cs:1035-1051`): DH — якщо в теці гри є
`Darkest Hour.exe`; версія — пошук у байтах exe ASCII-рядка `Darkest Hour v ` і розбір наступних символів
`X.YZ` як `X*100 + Y*10 + Z` (напр. `1.04` → 104); якщо рядок не знайдено — 102.

### 5.5 Формат запису

`Writers/MiscWriter.cs:18-60`:

1. Рядок `# NOTE: Obviously, the order of these variables cannot be changed.`
2. Для кожної секції, що існує в цьому варіанті гри (порядок §5.1): порожній рядок, потім `<секція> = {`
   **без** переводу рядка.
3. Для кожного слота: збережений «префікс» (пробіли, переводи рядків, коментарі — дослівно, як у
   вихідному файлі), потім число у форматі типу (§5.6).
4. Збережений «суфікс» секції, потім `}` і перевід рядка.

Отже, коментарі всередині секцій зберігаються дослівно; втрачається все до першої секції і між секціями,
а також форматування між іменем секції та `{`. **Квірк:** для значень, що не були прочитані (секція
відсутня), префікс порожній і число друкується як `0`/`0.0` впритул до попереднього — файл зіпсується;
власна реалізація має підставляти роздільник.

### 5.6 Типи значень і формат чисел

`Models/Misc.cs:5824-5862` (перелік), `Models/Misc.cs:4712-4866` (запис), `Utilities/DoubleHelper.cs`,
`Utilities/IntHelper.cs`.

Функції форматування дійсних (інваріантна культура, крапка як роздільник):

* **`ToStringN`** (N = 1, 2, 3, 4, 5): для k = 6, 5, …, N+1 по черзі перевіряє, чи відрізняється значення
  від округленого до k−1 знаків більш ніж на 0.5·10⁻ᵏ; перше спрацювання дає формат `Fk` (k знаків після
  коми); якщо жодне не спрацювало — `FN` (гарантовано N знаків). Тобто друкується мінімум N і максимум 6
  знаків (`Utilities/DoubleHelper.cs`, методи `ToString1`…`ToString5`).
* **`ToString0`**: те саме для k = 6…1, а якщо жодна перевірка не спрацювала — стандартне `ToString`
  інваріантної культури без гарантованих знаків (ціле друкується як `5`).
* Цілі — `IntHelper.ToString0` (формат `D`), `NonNegInt1` — формат `F1` (`5.0`).

| Тип | Читається як | Обмеження (лише UI) | Запис |
|---|---|---|---|
| `Bool` | bool (`≠0`) | 0/1 | `1` / `0` |
| `Enum` | int | значення з переліку (min..max) | ціле; **не** обрізається |
| `Int` | int | — | ціле (обрізання за min/max, якщо задано) |
| `PosInt` | int | > 0 | ціле |
| `NonNegInt` | int | ≥ 0 | ціле |
| `NonPosInt` | int | ≤ 0 | ціле |
| `NonNegIntMinusOne` | int | ≥ 0 або −1 | ціле |
| `NonNegInt1` | int | ≥ 0 | ціле з `.0` (`F1`) |
| `RangedInt` | int | min..max | ціле, обрізане до min..max |
| `RangedPosInt` | int | ≥ min | ціле |
| `RangedIntMinusOne` | int | min..max або −1 | ціле (обрізане до min..max — тобто −1 при записі стане min!) |
| `RangedIntMinusThree` | int | min..max або −1/−2/−3 | ціле (те саме обрізання) |
| `Dbl` | double | — | `ToString1` |
| `PosDbl` | double | > 0 | `ToString1` |
| `NonNegDbl` | double | ≥ 0 | `ToString1` |
| `NonPosDbl` | double | ≤ 0 | `ToString1` |
| `NonNegDbl0` / `NonPosDbl0` / `RangedDbl0` | double | ≥0 / ≤0 / min..max | `ToString0` |
| `NonNegDbl2` / `NonPosDbl2` | double | ≥0 / ≤0 | `ToString2` |
| `NonNegDbl5` | double | ≥ 0 | `ToString5` |
| `NonNegDblMinusOne` | double | ≥ 0 або −1 | рівно `-1` для −1, інакше `ToString1` |
| `NonNegDblMinusOne1` | double | ≥ 0 або −1 | `ToString1` (−1 → `-1.0`) |
| `RangedDbl` | double | min..max | `ToString1` |
| `RangedDblMinusOne` | double | min..max або −1 | `-1` або `ToString1` |
| `RangedDblMinusOne1` | double | min..max або −1 | `ToString1` |
| `NonNegDbl2AoD` | double | ≥ 0 | AoD: `ToString2`; інакше (і в DH) `ToString1` |
| `NonNegDbl4Dda13` | double | ≥ 0 | DDA ≥ 1.30 або **DH**: `ToString4`; інакше `ToString1` |
| `NonNegDbl2Dh103Full` | double | ≥ 0 | `ToString2`, якщо 0 < v < 0.1000005, інакше `ToString1` |
| `NonNegDbl2Dh103Full1` | double | ≥ 0 | `ToString2`, якщо 0 < v < 0.2000005, інакше `ToString1` (коментар у переліку описує навпаки, але код — так) |
| `NonNegDbl2Dh103Full2` | double | ≥ 0 | `ToString2`, якщо 0 < v < 1, інакше `ToString1` |
| `NonPosDbl5AoD` | double | ≤ 0 | AoD: `ToString5`; інакше `ToString1` |
| `NonPosDbl2Dh103Full` | double | ≤ 0 | `ToString2`, якщо −0.1000005 < v < 0, інакше `ToString1` |
| `NonNegIntNegDbl` | double | ціле ≥ 0 або від'ємне дійсне | v < 0 → `ToString1`, інакше ціле (відкидання дробу) |

Обрізання цілих — `Models/Misc.cs:4529-4540`. **Квірк:** для типів «або −1/−2/−3» обрізання за
`IntMinValues` перетворить −1 на мінімум при записі (напр. `RelationshipHitCancelPermanentTrade`,
`ManualTradeDeals`, `AiEventsActionSelectionRules`) — власна реалізація має зберігати сентинели.

Формат запису важливий лише для точного відтворення файлу; гра читає числа **(припущення)**.

### 5.7 Кількість чисел у секціях

Пораховано з `ItemTable` (`Models/Misc.cs:1311-2174`) за `SectionItems`:

| Секція | DDA1.2 | DDA1.3 | AoD1.04 | AoD1.07 | AoD1.08+ | DH1.02 | DH1.03 | DH1.04 |
|---|---|---|---|---|---|---|---|---|
| `economy` | 32 | 44 | 96 | 114 | 114 | 82 | 85 | 85 |
| `intelligence` | — | — | — | — | — | 16 | 16 | 16 |
| `diplomacy` | — | — | — | — | — | 15 | 15 | 16 |
| `combat` | 63 | 66 | 135 | 135 | 164 | 130 | 199 | 262 |
| `mission` | — | — | — | — | — | 90 | 91 | 90 |
| `country` | — | — | — | — | — | 38 | 38 | 38 |
| `research` | 4 | 4 | 8 | 10 | 11 | 9 | 15 | 15 |
| `trade` | — | — | — | — | — | 25 | 25 | 25 |
| `ai` | — | — | — | — | — | 31 | 31 | 36 |
| `mod` | — | — | — | — | — | 40 | 47 | 51 |
| `map` | — | — | — | — | — | 5 | 5 | 5 |
| **разом** | **99** | **114** | **239** | **259** | **289** | **481** | **567** | **639** |

У DH немає `TpMaxAttach…CvMaxAttach` та інших слотів AoD; усі вони перелічені в §5.9.

### 5.8 Повний порядок значень DH

Для кожної секції — **усі слоти, що існують хоча б в одній версії DH**, у порядку файлу. Колонки:

* **H4 / H3 / H2** — порядковий номер числа в секції (з 1) у DH 1.04 / 1.03 / 1.02; `—` — слота в цій
  версії немає (і число в файлі **не пишеться**).
* **Маска** — наявність слота в 8 варіантах гри (§5.4): `DDA1.2 DDA1.3 AoD1.04 AoD1.07 AoD1.08 DH1.02 DH1.03 DH1.04`,
  `1` — є, `.` — немає (рядок `ItemTable`).
* **Тип** — §5.6; **Діапазон** — `IntMinValues`/`IntMaxValues`/`DblMinValues`/`DblMaxValues`
  (`Models/Misc.cs:3047-3459`).
* **Зміст** — власний переказ (за назвою ідентифікатора, японським коментарем у переліку і підписом UI).
  Одиниці виміру (дні/години/частки) редактор не задає — див. §8.
* **Misc.cs SI·IT·TY** — рядки `Models/Misc.cs`: елемент `SectionItems` · рядок `ItemTable` · елемент
  `ItemTypes` (рядок переліку `MiscItemId` з японським коментарем — `Models/Misc.cs:4905-5785`, той самий
  порядок).

#### 5.8.1 `economy = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **82 / 85 / 85**. Порядок — `Misc.SectionItems[0]` (`Models/Misc.cs:413-594`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `IcToTcRatio` | `11111111` | NonNegDbl2AoD |  | коефіцієнт перетворення IC у транспортну ємність (TC) | 413·1313·2181 |
| 2 | 2 | 2 | `IcToSuppliesRatio` | `11111111` | NonNegDbl |  | коефіцієнт перетворення IC у припаси | 414·1314·2182 |
| 3 | 3 | 3 | `IcToConsumerGoodsRatio` | `11111111` | NonNegDbl |  | коефіцієнт перетворення IC у споживчі товари | 415·1315·2183 |
| 4 | 4 | 4 | `IcToMoneyRatio` | `11111111` | NonNegDbl |  | коефіцієнт перетворення IC у гроші | 416·1316·2184 |
| 5 | 5 | 5 | `MinAvailableIc` | `.....111` | NonNegDbl |  | мінімальна частка доступного (ефективного) IC | 418·1318·2186 |
| 6 | 6 | 6 | `MinFinalIc` | `.....111` | NonNegInt |  | мінімальний підсумковий доступний IC (абсолютне значення) | 419·1319·2187 |
| 7 | 7 | 7 | `DissentReduction` | `.....111` | NonNegDbl |  | модифікатор зниження невдоволення | 420·1320·2188 |
| 8 | 8 | 8 | `MaxGearingBonus` | `11111111` | NonNegDbl2 |  | максимальний бонус серійного виробництва (gearing) | 421·1321·2189 |
| 9 | 9 | 9 | `GearingBonusIncrement` | `11111111` | NonNegDbl2 |  | приріст gearing-бонусу за цикл | 422·1322·2190 |
| 10 | 10 | 10 | `IcMultiplierNonNational` | `11111111` | NonNegDbl |  | множник IC для не-core (ненаціональних) провінцій | 425·1325·2193 |
| 11 | 11 | 11 | `IcMultiplierNonOwned` | `11111111` | NonNegDbl |  | множник IC для окупованих (не власних) провінцій | 426·1326·2194 |
| 12 | 12 | 12 | `IcMultiplierPuppet` | `.....111` | NonNegDbl |  | множник IC для маріонеток | 427·1327·2195 |
| 13 | 13 | 13 | `ResourceMultiplierNonNational` | `.....111` | NonNegDbl |  | множник ресурсів не-core провінцій | 428·1328·2196 |
| 14 | 14 | 14 | `ResourceMultiplierNonOwned` | `.....111` | NonNegDbl |  | множник ресурсів окупованих провінцій | 429·1329·2197 |
| 15 | 15 | 15 | `ResourceMultiplierNonNationalAi` | `.....111` | NonNegDblMinusOne |  | множник ресурсів не-core провінцій для AI (допускає -1) | 430·1330·2198 |
| 16 | 16 | 16 | `ResourceMultiplierPuppet` | `.....111` | NonNegDbl |  | множник ресурсів для маріонеток | 431·1331·2199 |
| 17 | 17 | 17 | `TcLoadUndeployedDivision` | `11111111` | NonNegDbl |  | навантаження на TC від нерозгорнутої дивізії | 432·1332·2200 |
| 18 | 18 | 18 | `TcLoadOccupied` | `11111111` | NonNegDbl |  | навантаження на TC від окупованої провінції | 433·1333·2201 |
| 19 | 19 | 19 | `TcLoadMultiplierLand` | `11111111` | NonNegDbl |  | множник навантаження на TC від сухопутних дивізій | 434·1334·2202 |
| 20 | 20 | 20 | `TcLoadMultiplierAir` | `11111111` | NonNegDbl |  | множник навантаження на TC від авіаційних дивізій | 435·1335·2203 |
| 21 | 21 | 21 | `TcLoadMultiplierNaval` | `11111111` | NonNegDbl |  | множник навантаження на TC від морських дивізій | 436·1336·2204 |
| 22 | 22 | 22 | `TcLoadPartisan` | `11111111` | NonNegDbl |  | навантаження на TC від партизанів | 437·1337·2205 |
| 23 | 23 | 23 | `TcLoadFactorOffensive` | `11111111` | NonNegDbl |  | коефіцієнт навантаження на TC під час наступу | 438·1338·2206 |
| 24 | 24 | 24 | `TcLoadProvinceDevelopment` | `11111111` | NonNegDbl |  | навантаження на TC від розбудови провінцій | 439·1339·2207 |
| 25 | 25 | 25 | `TcLoadBase` | `11111111` | NonNegDbl |  | навантаження на TC від баз у черзі (ще не розгорнутих) | 440·1340·2208 |
| 26 | 26 | 26 | `ManpowerMultiplierNational` | `11111111` | NonNegDbl |  | множник людських ресурсів core-провінцій | 441·1341·2209 |
| 27 | 27 | 27 | `ManpowerMultiplierNonNational` | `11111111` | NonNegDbl |  | множник людських ресурсів не-core провінцій | 442·1342·2210 |
| 28 | 28 | 28 | `ManpowerMultiplierColony` | `11111111` | NonNegDbl |  | множник людських ресурсів колоніальних (заморських) провінцій | 443·1343·2211 |
| 29 | 29 | 29 | `ManpowerMultiplierPuppet` | `.....111` | NonNegDbl |  | множник людських ресурсів маріонеток | 444·1344·2212 |
| 30 | 30 | 30 | `ManpowerMultiplierWartimeOversea` | `.....111` | NonNegDbl2Dh103Full2 |  | воєнний множник людських ресурсів заморських провінцій | 445·1345·2213 |
| 31 | 31 | 31 | `ManpowerMultiplierPeacetime` | `.....111` | NonNegDbl2Dh103Full2 |  | множник людських ресурсів у мирний час | 446·1346·2214 |
| 32 | 32 | 32 | `ManpowerMultiplierWartime` | `.....111` | NonNegDbl2Dh103Full2 |  | множник людських ресурсів у воєнний час | 447·1347·2215 |
| 33 | 33 | 33 | `DailyRetiredManpower` | `.....111` | NonNegDbl |  | щоденна частка людських ресурсів, що вибуває («старіння») | 448·1348·2216 |
| 34 | 34 | 34 | `TrickleBackFactorManpower` | `11111111` | NonNegDbl |  | частка бойових втрат, що повертається в людські ресурси | 450·1350·2218 |
| 35 | 35 | 35 | `ReinforceManpower` | `11111111` | NonNegDbl |  | множник людських ресурсів для поповнення | 451·1351·2219 |
| 36 | 36 | 36 | `ReinforceCost` | `11111111` | NonNegDbl0 |  | множник вартості (IC) поповнення | 452·1352·2220 |
| 37 | 37 | 37 | `ReinforceTime` | `11111111` | NonNegDbl0 |  | множник часу поповнення | 453·1353·2221 |
| 38 | 38 | 38 | `UpgradeCost` | `11111111` | NonNegDbl0 |  | множник вартості (IC) модернізації | 454·1354·2222 |
| 39 | 39 | 39 | `UpgradeTime` | `11111111` | NonNegDbl0 |  | множник часу модернізації | 455·1355·2223 |
| 40 | 40 | 40 | `ReinforceToUpdateModifier` | `.....111` | NonNegDbl |  | коефіцієнт поповнення під час модернізації | 456·1356·2224 |
| 41 | 41 | 41 | `NationalismStartingValue` | `11111111` | NonNegDbl0 |  | початкове значення націоналізму | 457·1357·2225 |
| 42 | 42 | 42 | `NationalismPerManpowerDh` | `.....111` | NonNegDbl |  | зміна націоналізму на одиницю людських ресурсів (варіант DH) | 459·1359·2227 |
| 43 | 43 | 43 | `MaxNationalism` | `.....111` | NonNegInt |  | максимальний немодифікований націоналізм | 460·1360·2228 |
| 44 | 44 | 44 | `MaxRevoltRisk` | `.....111` | RangedInt | 0..100 | максимальний базовий ризик повстання в провінції, % | 461·1361·2229 |
| 45 | 45 | 45 | `MonthlyNationalismReduction` | `11111111` | NonNegDbl4Dda13 |  | щомісячне зниження націоналізму | 462·1362·2230 |
| 46 | 46 | 46 | `SendDivisionDays` | `11111111` | NonNegInt |  | днів, доки дивізія, передана союзнику, стане доступною | 463·1363·2231 |
| 47 | 47 | 47 | `TcLoadUndeployedBrigade` | `11111111` | NonNegDbl |  | навантаження на TC від нерозгорнутої бригади | 464·1364·2232 |
| 48 | 48 | 48 | `CanUnitSendNonAlliedDh` | `.....111` | Enum | 0..2 | продаж дивізій несоюзникам: 0 = заборонено, 1 = лише продаж, 2 = дозволено | 557·1457·2325 |
| 49 | 49 | 49 | `BluePrintsCanSoldNonAllied` | `.....111` | Enum | 0..2 | продаж креслень несоюзникам: 0 = заборонено, 1 = лише продаж, 2 = дозволено | 558·1458·2326 |
| 50 | 50 | 50 | `ProvinceCanSoldNonAllied` | `.....111` | Enum | 0..2 | продаж провінцій несоюзникам: 0 = заборонено, 1 = лише продаж, 2 = купівля і продаж | 559·1459·2327 |
| 51 | 51 | 51 | `TransferAlliedCoreProvinces` | `.....111` | Bool | 0..1 | повертати союзнику окуповані його core-провінції (0/1) | 560·1460·2328 |
| 52 | 52 | 52 | `ProvinceBuildingsRepairModifier` | `.....111` | NonNegDbl |  | модифікатор швидкості ремонту будівель провінції | 561·1461·2329 |
| 53 | 53 | 53 | `ProvinceResourceRepairModifier` | `.....111` | NonNegDbl |  | модифікатор швидкості відновлення ресурсів провінції | 562·1462·2330 |
| 54 | 54 | 54 | `StockpileLimitMultiplierResource` | `.....111` | NonNegDblMinusOne |  | множник ліміту запасів ресурсів (допускає -1) | 563·1463·2331 |
| 55 | 55 | 55 | `StockpileLimitMultiplierSuppliesOil` | `.....111` | NonNegDblMinusOne |  | множник ліміту запасів припасів і нафти (допускає -1) | 564·1464·2332 |
| 56 | 56 | 56 | `OverStockpileLimitDailyLoss` | `.....111` | RangedDbl | 0..1 | щоденна частка втрат запасу понад ліміт | 565·1465·2333 |
| 57 | 57 | 57 | `MaxResourceDepotSize` | `.....111` | NonNegInt |  | максимальний розмір провінційного складу ресурсів | 566·1466·2334 |
| 58 | 58 | 58 | `MaxSuppliesOilDepotSize` | `.....111` | NonNegInt |  | максимальний розмір провінційного складу нафти/припасів | 567·1467·2335 |
| 59 | 59 | 59 | `DesiredStockPilesSuppliesOil` | `.....111` | NonNegInt |  | бажаний провінційний запас нафти і припасів | 568·1468·2336 |
| 60 | 60 | 60 | `MaxManpower` | `.....111` | NonNegInt |  | максимум людських ресурсів | 569·1469·2337 |
| 61 | 61 | 61 | `ConvoyTransportsCapacity` | `.....111` | NonNegDbl |  | модифікатор місткості транспортних конвоїв | 570·1470·2338 |
| 62 | 62 | 62 | `SuppyLandStaticDh` | `.....111` | NonNegDbl |  | модифікатор споживання припасів сухопутними військами без руху (у назві ідентифікатора друкарська помилка «Suppy») | 571·1471·2339 |
| 63 | 63 | 63 | `SupplyLandBattleDh` | `.....111` | NonNegDbl |  | модифікатор споживання припасів сухопутними військами в бою | 572·1472·2340 |
| 64 | 64 | 64 | `FuelLandStatic` | `.....111` | NonNegDbl |  | модифікатор споживання пального сухопутними військами без руху | 573·1473·2341 |
| 65 | 65 | 65 | `FuelLandBattle` | `.....111` | NonNegDbl |  | модифікатор споживання пального сухопутними військами в бою | 574·1474·2342 |
| 66 | 66 | 66 | `SupplyAirStaticDh` | `.....111` | NonNegDbl |  | модифікатор споживання припасів авіацією на базі | 575·1475·2343 |
| 67 | 67 | 67 | `SupplyAirBattleDh` | `.....111` | NonNegDbl |  | модифікатор споживання припасів авіацією в бою | 576·1476·2344 |
| 68 | 68 | 68 | `FuelAirNavalStatic` | `.....111` | NonNegDbl |  | модифікатор споживання пального авіацією/флотом на базі | 577·1477·2345 |
| 69 | 69 | 69 | `FuelAirBattle` | `.....111` | NonNegDbl |  | модифікатор споживання пального авіацією в бою | 578·1478·2346 |
| 70 | 70 | 70 | `SupplyNavalStaticDh` | `.....111` | NonNegDbl |  | модифікатор споживання припасів флотом у порту | 579·1479·2347 |
| 71 | 71 | 71 | `SupplyNavalBattleDh` | `.....111` | NonNegDbl |  | модифікатор споживання припасів флотом у бою | 580·1480·2348 |
| 72 | 72 | 72 | `FuelNavalNotMoving` | `.....111` | NonNegDbl |  | модифікатор споживання пального флотом без руху | 581·1481·2349 |
| 73 | 73 | 73 | `FuelNavalBattle` | `.....111` | NonNegDbl |  | модифікатор споживання пального флотом у бою | 582·1482·2350 |
| 74 | 74 | 74 | `TpTransportsConversionRatio` | `.....111` | NonNegInt |  | коефіцієнт перетворення транспортів (TP) у транспортні конвої | 583·1483·2351 |
| 75 | 75 | 75 | `DdEscortsConversionRatio` | `.....111` | NonNegInt |  | коефіцієнт перетворення есмінців (DD) в ескорти конвоїв | 584·1484·2352 |
| 76 | 76 | 76 | `ClEscortsConversionRatio` | `.....111` | NonNegInt |  | коефіцієнт перетворення легких крейсерів (CL) в ескорти конвоїв | 585·1485·2353 |
| 77 | 77 | 77 | `CvlEscortsConversionRatio` | `.....111` | NonNegInt |  | коефіцієнт перетворення легких авіаносців (CVL) в ескорти конвоїв | 586·1486·2354 |
| 78 | 78 | 78 | `ProductionLineEdit` | `.....111` | Bool | 0..1 | дозволити редагування виробничої лінії (0/1) | 587·1487·2355 |
| 79 | 79 | 79 | `GearingBonusLossUpgradeUnit` | `.....111` | RangedDbl | 0..1 | частка втрати gearing-бонусу за модернізацію одиниці | 588·1488·2356 |
| 80 | 80 | 80 | `GearingBonusLossUpgradeBrigade` | `.....111` | RangedDbl | 0..1 | частка втрати gearing-бонусу за модернізацію бригади | 589·1489·2357 |
| 81 | 81 | 81 | `DissentNukes` | `.....111` | NonNegDbl |  | множник невдоволення від ядерного удару по власній core-провінції | 590·1490·2358 |
| 82 | 82 | 82 | `MaxDailyDissent` | `.....111` | RangedDbl | 0..1 | максимальний щоденний приріст невдоволення при нестачі припасів/споживчих товарів | 591·1491·2359 |
| 83 | 83 | — | `NukesProductionModifier` | `......11` | NonNegDbl |  | модифікатор швидкості виробництва ядерної зброї | 592·1492·2360 |
| 84 | 84 | — | `ConvoySystemOptionsAllied` | `......11` | Enum | 0..2 | система конвоїв щодо союзників: 0, 1, 2 (типи; редактор їх не розшифровує) | 593·1493·2361 |
| 85 | 85 | — | `ResourceConvoysBackUnneeded` | `......11` | NonNegDblMinusOne1 |  | частка непотрібних ресурсів/пального, яку конвої везуть назад (допускає -1.0) | 594·1494·2362 |

#### 5.8.2 `intelligence = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **16 / 16 / 16**. Порядок — `Misc.SectionItems[1]` (`Models/Misc.cs:598-613`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `SpyMissionDaysDh` | `.....111` | NonNegInt |  | днів між шпигунськими місіями в одній країні | 598·1495·2363 |
| 2 | 2 | 2 | `IncreateIntelligenceLevelDaysDh` | `.....111` | NonNegInt |  | днів між підвищеннями рівня розвідки | 599·1496·2364 |
| 3 | 3 | 3 | `ChanceDetectSpyMissionDh` | `.....111` | RangedInt | 0..100 | шанс виявити ініціатора шпигунської місії, % | 600·1497·2365 |
| 4 | 4 | 4 | `RelationshipsHitDetectedMissionsDh` | `.....111` | RangedInt | 0..400 | падіння відносин за виявлену місію | 601·1498·2366 |
| 5 | 5 | 5 | `DistanceModifier` | `.....111` | Int |  | модифікатор відстані для шпигунських місій (ціле, може бути від'ємним) | 602·1499·2367 |
| 6 | 6 | 6 | `DistanceModifierNeighboursDh` | `.....111` | RangedDbl | 0..1 | модифікатор відстані для сусідніх країн | 603·1500·2368 |
| 7 | 7 | 7 | `SpyLevelBonusDistanceModifier` | `.....111` | NonNegInt |  | бонус рівня розвідки до модифікатора відстані | 604·1501·2369 |
| 8 | 8 | 8 | `SpyLevelBonusDistanceModifierAboveTen` | `.....111` | NonNegInt |  | бонус рівня розвідки до модифікатора відстані понад рівень 10 | 605·1502·2370 |
| 9 | 9 | 9 | `SpyInformationAccuracyModifierDh` | `.....111` | RangedInt | -10..10 | модифікатор точності розвідданих | 606·1503·2371 |
| 10 | 10 | 10 | `IcModifierCost` | `.....111` | NonNegInt |  | IC-модифікатор вартості шпигунства | 607·1504·2372 |
| 11 | 11 | 11 | `MinIcCostModifier` | `.....111` | NonNegInt |  | мінімальний IC у модифікаторі вартості | 608·1505·2373 |
| 12 | 12 | 12 | `MaxIcCostModifierDh` | `.....111` | NonNegInt |  | максимальний IC у модифікаторі вартості | 609·1506·2374 |
| 13 | 13 | 13 | `ExtraMaintenanceCostAboveTen` | `.....111` | NonNegDbl |  | додаткове утримання за рівень розвідки понад 10 | 610·1507·2375 |
| 14 | 14 | 14 | `ExtraCostIncreasingAboveTen` | `.....111` | NonNegInt |  | додаткова вартість підвищення рівня розвідки понад 10 | 611·1508·2376 |
| 15 | 15 | 15 | `ShowThirdCountrySpyReportsDh` | `.....111` | Enum | 0..3 | звіти про шпигунство третіх країн: 0 = ні, 1 = лише виявлені, 2 = виявлені й успішні, 3 = усі | 612·1509·2377 |
| 16 | 16 | 16 | `SpiesMoneyModifier` | `.....111` | NonNegDbl |  | частка (модифікатор) переведення витрат на шпигунів у гроші | 613·1510·2378 |

#### 5.8.3 `diplomacy = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **15 / 15 / 16**. Порядок — `Misc.SectionItems[2]` (`Models/Misc.cs:617-632`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `DaysBetweenDiplomaticMissions` | `.....111` | NonNegInt |  | днів між дипломатичними місіями | 617·1511·2379 |
| 2 | 2 | 2 | `TimeBetweenSliderChangesDh` | `.....111` | NonNegInt |  | інтервал між змінами внутрішньополітичних повзунків | 618·1512·2380 |
| 3 | 3 | 3 | `RequirementAffectSliderDh` | `.....111` | NonNegDbl |  | частка IC, потрібна, щоб впливати на внутрішньополітичні повзунки | 619·1513·2381 |
| 4 | 4 | 4 | `UseMinisterPersonalityReplacing` | `.....111` | Bool | 0..1 | застосовувати риси (personality) міністра під час заміни: 0 = ні, 1 = так | 620·1514·2382 |
| 5 | 5 | 5 | `RelationshipHitCancelTrade` | `.....111` | RangedInt | 0..400 | падіння відносин за скасування торгової угоди | 621·1515·2383 |
| 6 | 6 | 6 | `RelationshipHitCancelPermanentTrade` | `.....111` | RangedIntMinusOne | 0..100 | падіння відносин за скасування постійної торгової угоди (допускає -1) | 622·1516·2384 |
| 7 | 7 | 7 | `PuppetsJoinMastersAlliance` | `.....111` | Bool | 0..1 | маріонетки примусово вступають до альянсу сюзерена: 0 = ні, 1 = так | 623·1517·2385 |
| 8 | 8 | 8 | `MastersBecomePuppetsPuppets` | `.....111` | Bool | 0..1 | чи можна мати маріонеток маріонеток: 0 = ні, 1 = так | 624·1518·2386 |
| 9 | 9 | 9 | `AllowManualClaimsChange` | `.....111` | Bool | 0..1 | дозволити вручну змінювати територіальні претензії (0/1) | 625·1519·2387 |
| 10 | 10 | 10 | `BelligerenceClaimedProvince` | `.....111` | NonNegDbl |  | приріст войовничості за претензію на провінцію | 626·1520·2388 |
| 11 | 11 | 11 | `BelligerenceClaimsRemoval` | `.....111` | NonPosDbl |  | зміна (зниження) войовничості при відкликанні претензії | 627·1521·2389 |
| 12 | 12 | 12 | `JoinAutomaticallyAllesAxis` | `.....111` | Bool | 0..1 | після оголошення війни автоматично вступати до протилежного блоку: 0 = ні, 1 = так | 628·1522·2390 |
| 13 | 13 | 13 | `AllowChangeHosHog` | `.....111` | Enum | 0..3 | заміна глави держави / глави уряду: 0 = заборонено, 1 = лише HoG, 2 = лише HoS, 3 = обидва | 629·1523·2391 |
| 14 | 14 | 14 | `ChangeTagCoup` | `.....111` | Bool | 0..1 | при перевороті змінювати тег на «братню» країну: 0 = оригінальна поведінка, 1 = поведінка DH | 630·1524·2392 |
| 15 | 15 | 15 | `FilterReleaseCountries` | `.....111` | Enum | 0..3 | фільтр країн, які можна звільнити: 0..3 (типи; редактор не розшифровує) | 631·1525·2393 |
| 16 | — | — | `ReturnOccupiedProvinces` | `.......1` | NonNegInt |  | днів до повернення окупованих провінцій | 632·1526·2394 |

#### 5.8.4 `combat = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **130 / 199 / 262**. Порядок — `Misc.SectionItems[3]` (`Models/Misc.cs:636-1012`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `LandXpGainFactor` | `11111111` | NonNegDbl |  | множник набуття досвіду — сухопутні війська | 636·1527·2395 |
| 2 | 2 | 2 | `NavalXpGainFactor` | `11111111` | NonNegDbl |  | множник набуття досвіду — флот | 637·1528·2396 |
| 3 | 3 | 3 | `AirXpGainFactor` | `11111111` | NonNegDbl |  | множник набуття досвіду — авіація | 638·1529·2397 |
| 4 | 4 | 4 | `AirDogfightXpGainFactor` | `.....111` | NonNegDbl |  | множник набуття досвіду авіацією в повітряних боях | 639·1530·2398 |
| 5 | 5 | 5 | `DivisionXpGainFactor` | `11111111` | NonNegDbl |  | множник набуття досвіду дивізіями | 640·1531·2399 |
| 6 | 6 | 6 | `LeaderXpGainFactor` | `11111111` | NonNegDbl |  | множник набуття досвіду командувачами | 641·1532·2400 |
| 7 | 7 | 7 | `AttritionSeverityModifier` | `11111111` | NonNegDbl |  | модифікатор тяжкості виснаження (attrition) | 642·1533·2401 |
| 8 | — | — | `OutOfSupplyAttritionLand` | `.......1` | NonNegDbl |  | втрата сили сухопутних військ без постачання | 645·1536·2404 |
| 9 | — | — | `OutOfSupplyAttritionNaval` | `.......1` | NonNegDbl |  | втрата сили флоту без постачання | 646·1537·2405 |
| 10 | — | — | `OutOfSupplyAttritionAir` | `.......1` | NonNegDbl |  | втрата сили авіації без постачання | 647·1538·2406 |
| 11 | — | — | `LowestStrAttritionLosses` | `.......1` | NonNegDbl |  | нижня межа сили, до якої може довести виснаження | 648·1539·2407 |
| 12 | 8 | 8 | `BaseProximity` | `11111111` | NonNegDbl |  | бойовий модифікатор близькості бази | 649·1540·2408 |
| 13 | 9 | 9 | `InvasionModifier` | `11111111` | NonPosDbl |  | штраф морського десанту | 652·1543·2411 |
| 14 | 10 | 10 | `MultipleCombatModifier` | `11111111` | NonPosDbl |  | штраф за участь у кількох боях (фланговий) | 653·1544·2412 |
| 15 | 11 | 11 | `OffensiveCombinedArmsBonus` | `11111111` | NonNegDbl2AoD |  | бонус взаємодії родів військ для атакуючого | 654·1545·2413 |
| 16 | 12 | 12 | `DefensiveCombinedArmsBonus` | `11111111` | NonNegDbl2AoD |  | бонус взаємодії родів військ для оборонця | 655·1546·2414 |
| 17 | 13 | 13 | `SurpriseModifier` | `11111111` | NonPosDbl |  | штраф раптового нападу | 656·1547·2415 |
| 18 | 14 | 14 | `LandCommandLimitModifier` | `11111111` | NonPosDbl |  | штраф перевищення ліміту командування — суходіл | 657·1548·2416 |
| 19 | 15 | 15 | `AirCommandLimitModifier` | `11111111` | NonPosDbl |  | штраф перевищення ліміту командування — авіація | 658·1549·2417 |
| 20 | 16 | 16 | `NavalCommandLimitModifier` | `11111111` | NonPosDbl |  | штраф перевищення ліміту командування — флот | 659·1550·2418 |
| 21 | 17 | 17 | `EnvelopmentModifier` | `11111111` | NonPosDbl |  | модифікатор атаки з кількох напрямків | 660·1551·2419 |
| 22 | 18 | 18 | `EncircledModifier` | `11111111` | NonPosDbl |  | штраф оточеним | 661·1552·2420 |
| 23 | 19 | 19 | `LandFortMultiplier` | `11111111` | NonPosDbl |  | штраф атаки фортеці | 662·1553·2421 |
| 24 | 20 | 20 | `CoastalFortMultiplier` | `11111111` | NonPosDbl |  | штраф атаки берегової фортеці | 663·1554·2422 |
| 25 | 21 | 21 | `HardUnitsAttackingUrbanPenalty` | `.....111` | NonPosDbl2Dh103Full |  | штраф броньованих (hard) одиниць при атаці міста | 664·1555·2423 |
| 26 | 22 | 22 | `DissentMultiplier` | `11111111` | NonPosDbl |  | бойовий штраф від невдоволення | 665·1556·2424 |
| 27 | 23 | 23 | `SupplyProblemsModifierLand` | `.....111` | NonPosDbl |  | штраф нестачі припасів — суходіл | 667·1558·2426 |
| 28 | 24 | 24 | `SupplyProblemsModifierAir` | `.....111` | NonPosDbl |  | штраф нестачі припасів — авіація | 668·1559·2427 |
| 29 | 25 | 25 | `SupplyProblemsModifierNaval` | `.....111` | NonPosDbl |  | штраф нестачі припасів — флот | 669·1560·2428 |
| 30 | 26 | 26 | `FuelProblemsModifierLand` | `.....111` | NonPosDbl |  | штраф нестачі пального — суходіл | 670·1561·2429 |
| 31 | 27 | 27 | `FuelProblemsModifierAir` | `.....111` | NonPosDbl |  | штраф нестачі пального — авіація | 671·1562·2430 |
| 32 | 28 | 28 | `FuelProblemsModifierNaval` | `.....111` | NonPosDbl |  | штраф нестачі пального — флот | 672·1563·2431 |
| 33 | 29 | 29 | `RaderStationMultiplier` | `11111111` | Dbl |  | модифікатор радарної станції (у назві ідентифікатора «Rader» замість «Radar») | 673·1564·2432 |
| 34 | 30 | 30 | `InterceptorBomberModifier` | `11111111` | NonNegDbl2 |  | бонус перехоплювачів проти бомбардувальників | 675·1566·2434 |
| 35 | 31 | 31 | `AirOverstackingModifier` | `11...111` | NonPosDbl |  | штраф перевантаження стеку — авіація | 676·1567·2435 |
| 36 | 32 | 32 | `NavalOverstackingModifier` | `11111111` | NonPosDbl |  | штраф перевантаження стеку — флот | 678·1569·2437 |
| 37 | 33 | 33 | `LandLeaderCommandLimitRank0` | `11111111` | PosInt |  | ліміт командування сухопутного командувача рангу 0 (маршал) | 679·1570·2438 |
| 38 | 34 | 34 | `LandLeaderCommandLimitRank1` | `11111111` | PosInt |  | ліміт командування сухопутного командувача рангу 1 (генерал) | 680·1571·2439 |
| 39 | 35 | 35 | `LandLeaderCommandLimitRank2` | `11111111` | PosInt |  | ліміт командування сухопутного командувача рангу 2 (генерал-лейтенант) | 681·1572·2440 |
| 40 | 36 | 36 | `LandLeaderCommandLimitRank3` | `11111111` | PosInt |  | ліміт командування сухопутного командувача рангу 3 (генерал-майор) | 682·1573·2441 |
| 41 | 37 | 37 | `AirLeaderCommandLimitRank0` | `11111111` | PosInt |  | ліміт командування авіаційного командувача рангу 0 | 683·1574·2442 |
| 42 | 38 | 38 | `AirLeaderCommandLimitRank1` | `11111111` | PosInt |  | ліміт командування авіаційного командувача рангу 1 | 684·1575·2443 |
| 43 | 39 | 39 | `AirLeaderCommandLimitRank2` | `11111111` | PosInt |  | ліміт командування авіаційного командувача рангу 2 | 685·1576·2444 |
| 44 | 40 | 40 | `AirLeaderCommandLimitRank3` | `11111111` | PosInt |  | ліміт командування авіаційного командувача рангу 3 | 686·1577·2445 |
| 45 | 41 | 41 | `NavalLeaderCommandLimitRank0` | `11111111` | PosInt |  | ліміт командування морського командувача рангу 0 | 687·1578·2446 |
| 46 | 42 | 42 | `NavalLeaderCommandLimitRank1` | `11111111` | PosInt |  | ліміт командування морського командувача рангу 1 | 688·1579·2447 |
| 47 | 43 | 43 | `NavalLeaderCommandLimitRank2` | `11111111` | PosInt |  | ліміт командування морського командувача рангу 2 | 689·1580·2448 |
| 48 | 44 | 44 | `NavalLeaderCommandLimitRank3` | `11111111` | PosInt |  | ліміт командування морського командувача рангу 3 | 690·1581·2449 |
| 49 | 45 | 45 | `HqCommandLimitFactor` | `11111111` | PosInt |  | множник ліміту командування для штабу (HQ) | 691·1582·2450 |
| 50 | 46 | 46 | `ConvoyProtectionFactor` | `11111111` | NonNegDbl |  | коефіцієнт захисту конвоїв | 692·1583·2451 |
| 51 | 47 | 47 | `ConvoyEscortsModel` | `.....111` | NonPosInt |  | модель кораблів ескорту конвою (ціле ≤ 0) | 693·1584·2452 |
| 52 | — | — | `ConvoyTransportsModel` | `.......1` | NonPosInt |  | модель транспортних кораблів конвою (ціле ≤ 0) | 694·1585·2453 |
| 53 | — | — | `ChanceEscortCarrier` | `.......1` | RangedDbl0 | 0..100 | частка (шанс) ескортного авіаносця в конвої, 0..100 | 695·1586·2454 |
| 54 | — | — | `ConvoyEscortCarrierModel` | `.......1` | NonPosInt |  | модель ескортного авіаносця конвою (ціле ≤ 0) | 696·1587·2455 |
| 55 | 48 | 48 | `DelayAfterCombatEnds` | `11111111` | NonNegInt |  | затримка наказів після завершення бою | 697·1588·2456 |
| 56 | 49 | 49 | `MaximumSizesAirStacks` | `11111111` | PosInt |  | максимальний розмір авіаційного стеку | 701·1592·2460 |
| 57 | 50 | 50 | `DurationAirToAirBattles` | `.....111` | NonNegInt |  | мінімальна тривалість повітряного бою | 702·1593·2461 |
| 58 | 51 | 51 | `DurationNavalPortBombing` | `.....111` | NonNegInt |  | мінімальна тривалість бомбардування флоту/порту | 703·1594·2462 |
| 59 | 52 | 52 | `DurationStrategicBombing` | `.....111` | NonNegInt |  | мінімальна тривалість стратегічного бомбардування | 704·1595·2463 |
| 60 | 53 | 53 | `DurationGroundAttackBombing` | `.....111` | NonNegInt |  | мінімальна тривалість штурмових ударів по наземних цілях | 705·1596·2464 |
| 61 | 54 | 54 | `EffectExperienceCombat` | `11111111` | NonNegDbl |  | вплив досвіду на бій | 706·1597·2465 |
| 62 | 55 | 55 | `DamageNavalBasesBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди морським базам від стратегічних бомбардувань | 707·1598·2466 |
| 63 | 56 | 56 | `DamageAirBaseBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди авіабазам від стратегічних бомбардувань | 708·1599·2467 |
| 64 | 57 | 57 | `DamageAaBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди ППО від стратегічних бомбардувань | 709·1600·2468 |
| 65 | 58 | 58 | `DamageRocketBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди ракетним полігонам від стратегічних бомбардувань | 710·1601·2469 |
| 66 | 59 | 59 | `DamageNukeBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди ядерним реакторам від стратегічних бомбардувань | 711·1602·2470 |
| 67 | 60 | 60 | `DamageRadarBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди радарам від стратегічних бомбардувань | 712·1603·2471 |
| 68 | 61 | 61 | `DamageInfraBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди інфраструктурі від стратегічних бомбардувань | 713·1604·2472 |
| 69 | 62 | 62 | `DamageIcBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди IC від стратегічних бомбардувань | 714·1605·2473 |
| 70 | 63 | 63 | `DamageResourcesBombing` | `11111111` | NonNegDbl |  | коефіцієнт шкоди ресурсам від стратегічних бомбардувань | 715·1606·2474 |
| — | — | 64 | `HowEffectiveGroundDef` | `111111..` | NonNegDbl |  | ефективність наземного захисту (ground defence) | 717·1608·2476 |
| — | — | 65 | `ChanceAvoidDefencesLeft` | `111111..` | Dbl |  | базовий шанс ухилитися, якщо ще лишились «захисти» (defences) | 718·1609·2477 |
| — | — | 66 | `ChanceAvoidNoDefences` | `111111..` | Dbl |  | базовий шанс ухилитися, якщо «захистів» не лишилось | 719·1610·2478 |
| 71 | 64 | — | `LandChanceAvoidDefencesLeft` | `......11` | Dbl |  | базовий шанс ухилення (є захисти) — суходіл | 720·1611·2479 |
| 72 | 65 | — | `AirChanceAvoidDefencesLeft` | `......11` | Dbl |  | базовий шанс ухилення (є захисти) — авіація | 721·1612·2480 |
| 73 | 66 | — | `NavalChanceAvoidDefencesLeft` | `......11` | Dbl |  | базовий шанс ухилення (є захисти) — флот | 722·1613·2481 |
| 74 | — | — | `ChanceAvoidAaDefencesLeft` | `.......1` | Dbl |  | базовий шанс ухилення (є захисти) — ППО | 723·1614·2482 |
| 75 | 67 | — | `LandChanceAvoidNoDefences` | `......11` | Dbl |  | базовий шанс ухилення (немає захистів) — суходіл | 724·1615·2483 |
| 76 | 68 | — | `AirChanceAvoidNoDefences` | `......11` | Dbl |  | базовий шанс ухилення (немає захистів) — авіація | 725·1616·2484 |
| 77 | 69 | — | `NavalChanceAvoidNoDefences` | `......11` | Dbl |  | базовий шанс ухилення (немає захистів) — флот | 726·1617·2485 |
| 78 | — | — | `ChanceAvoidAaNoDefences` | `.......1` | Dbl |  | базовий шанс ухилення (немає захистів) — ППО | 727·1618·2486 |
| 79 | 70 | 67 | `ChanceGetTerrainTrait` | `11111111` | NonNegInt |  | шанс командувачу отримати трейт місцевості | 728·1619·2487 |
| 80 | 71 | 68 | `ChanceGetEventTrait` | `11111111` | NonNegInt |  | шанс командувачу отримати бойовий (event) трейт | 729·1620·2488 |
| 81 | 72 | 69 | `BonusTerrainTrait` | `11111111` | NonNegDbl |  | бонус трейту місцевості | 730·1621·2489 |
| 82 | 73 | 70 | `BonusSimilarTerrainTrait` | `.....111` | NonNegDbl |  | бонус трейту для схожої місцевості | 731·1622·2490 |
| 83 | 74 | 71 | `BonusEventTrait` | `11111111` | NonNegDbl |  | бонус бойового трейту | 732·1623·2491 |
| 84 | 75 | — | `BonusLeaderSkillPointLand` | `......11` | NonNegDbl |  | бонус за кожне очко навички командувача — суходіл | 733·1624·2492 |
| 85 | 76 | — | `BonusLeaderSkillPointAir` | `......11` | NonNegDbl |  | бонус за кожне очко навички командувача — авіація | 734·1625·2493 |
| 86 | 77 | — | `BonusLeaderSkillPointNaval` | `......11` | NonNegDbl |  | бонус за кожне очко навички командувача — флот | 735·1626·2494 |
| 87 | 78 | 72 | `ChanceLeaderDying` | `11111111` | NonNegDbl |  | шанс загибелі командувача | 736·1627·2495 |
| 88 | 79 | — | `LandMinOrgDamage` | `......11` | NonNegDbl |  | мінімальна шкода ORG — суходіл | 740·1631·2499 |
| 89 | 80 | — | `LandOrgDamageHardSoftEach` | `......11` | NonNegInt |  | шкода ORG суходолу: hard проти hard / soft проти soft | 741·1632·2500 |
| 90 | 81 | — | `LandOrgDamageHardVsSoft` | `......11` | NonNegInt |  | шкода ORG суходолу: hard проти soft | 742·1633·2501 |
| 91 | 82 | — | `LandMinStrDamage` | `......11` | NonNegDbl |  | мінімальна шкода STR — суходіл | 743·1634·2502 |
| 92 | 83 | — | `LandStrDamageHardSoftEach` | `......11` | NonNegInt |  | шкода STR суходолу: hard проти hard / soft проти soft | 744·1635·2503 |
| 93 | 84 | — | `LandStrDamageHardVsSoft` | `......11` | NonNegInt |  | шкода STR суходолу: hard проти soft | 745·1636·2504 |
| 94 | 85 | — | `AirMinOrgDamage` | `......11` | NonNegDbl |  | мінімальна шкода ORG — авіація | 746·1637·2505 |
| 95 | 86 | — | `AirAdditionalOrgDamage` | `......11` | NonNegInt |  | додаткова шкода ORG — авіація | 747·1638·2506 |
| 96 | 87 | — | `AirMinStrDamage` | `......11` | NonNegDbl |  | мінімальна шкода STR — авіація | 748·1639·2507 |
| 97 | 88 | — | `AirAdditionalStrDamage` | `......11` | NonNegInt |  | додаткова шкода STR — авіація | 749·1640·2508 |
| 98 | 89 | — | `AirStrDamageEntrenced` | `......11` | NonNegDbl |  | шкода STR від авіації по окопаних військах | 750·1641·2509 |
| 99 | 90 | — | `NavalMinOrgDamage` | `......11` | NonNegDbl |  | мінімальна шкода ORG — флот | 751·1642·2510 |
| 100 | 91 | — | `NavalAdditionalOrgDamage` | `......11` | NonNegInt |  | додаткова шкода ORG — флот | 752·1643·2511 |
| 101 | 92 | — | `NavalMinStrDamage` | `......11` | NonNegDbl |  | мінімальна шкода STR — флот | 753·1644·2512 |
| 102 | 93 | — | `NavalAdditionalStrDamage` | `......11` | NonNegInt |  | додаткова шкода STR — флот | 754·1645·2513 |
| 103 | — | — | `AirOrgDamageLimitLand` | `.......1` | NonNegDbl |  | нижня межа шкоди ORG авіації від суходолу | 755·1646·2514 |
| 104 | — | — | `LandOrgDamageLimitAir` | `.......1` | NonNegDbl |  | нижня межа шкоди ORG суходолу від авіації | 756·1647·2515 |
| 105 | — | — | `AirOrgDamageLimitNavy` | `.......1` | NonNegDbl |  | нижня межа шкоди ORG авіації від флоту | 757·1648·2516 |
| 106 | — | — | `NavalOrgDamageLimitAir` | `.......1` | NonNegDbl |  | нижня межа шкоди ORG флоту від авіації | 758·1649·2517 |
| 107 | — | — | `AirOrgDamageLimitAa` | `.......1` | NonNegDbl |  | нижня межа шкоди ORG авіації від ППО | 759·1650·2518 |
| 108 | — | — | `BasesOrgDamageHourCarriers` | `.......1` | NonNegDbl |  | шкода ORG базі за годину атаки з авіаносців | 760·1651·2519 |
| 109 | — | — | `BasesOrgDamageLimitCarriers` | `.......1` | NonNegDbl |  | нижня межа шкоди ORG базі від авіаносців | 761·1652·2520 |
| 110 | — | — | `BasesOrgDamageAfterCarriers` | `.......1` | NonNegDbl |  | шкода ORG базі після атаки з авіаносців | 762·1653·2521 |
| 111 | — | — | `BasesStrDamageCarriers` | `.......1` | NonNegDbl |  | модифікатор шкоди STR базі від авіаносців | 763·1654·2522 |
| 112 | — | — | `AirCriticalHitChanceNavy` | `.......1` | RangedDbl0 | 0..100 | шанс критичного влучання авіації по флоту, 0..100 | 764·1655·2523 |
| 113 | — | — | `AirCriticalHitModifierNavy` | `.......1` | NonNegDbl |  | модифікатор критичного влучання авіації по флоту | 765·1656·2524 |
| 114 | — | — | `NavalCriticalHitChanceNavy` | `.......1` | RangedDbl0 | 0..100 | шанс критичного влучання флоту по флоту, 0..100 | 766·1657·2525 |
| 115 | — | — | `NavalCriticalHitModifierNavy` | `.......1` | NonNegDbl |  | модифікатор критичного влучання флоту по флоту | 767·1658·2526 |
| — | 94 | 73 | `AirStrDamageLandOrg` | `.....11.` | NonNegDbl |  | шкода STR авіації від суходолу (залежно від ORG) | 768·1659·2527 |
| 116 | — | — | `AirStrDamageLandOrgDh104` | `.......1` | NonNegDblMinusOne1 |  | шкода STR авіації від суходолу (залежно від ORG), варіант DH 1.04 (допускає -1.0) | 769·1660·2528 |
| 117 | 95 | 74 | `AirOrgDamageLandDh` | `.....111` | NonNegDbl |  | шкода ORG авіації від суходолу | 770·1661·2529 |
| 118 | 96 | 75 | `AirStrDamageLandDh` | `.....111` | NonNegDbl2Dh103Full |  | шкода STR авіації від суходолу | 771·1662·2530 |
| 119 | 97 | 76 | `LandOrgDamageLandOrg` | `.....111` | NonNegDbl |  | шкода ORG суходолу від суходолу (залежно від ORG) | 772·1663·2531 |
| 120 | 98 | — | `LandOrgDamageLandUrban` | `......11` | RangedDbl | 0..1 | шкода ORG суходолу від суходолу в місті | 773·1664·2532 |
| 121 | 99 | — | `LandOrgDamageLandFort` | `......11` | RangedDbl | 0..1 | шкода ORG суходолу від суходолу у фортеці | 774·1665·2533 |
| 122 | 100 | — | `RequiredLandFortSize` | `......11` | NonNegDbl |  | потрібний рівень фортеці (для попереднього модифікатора) | 775·1666·2534 |
| 123 | 101 | 77 | `LandStrDamageLandDh` | `.....111` | NonNegDbl |  | шкода STR суходолу від суходолу | 776·1667·2535 |
| 124 | — | — | `LandStrDamageLimitLand` | `.......1` | NonNegDbl |  | нижня межа шкоди STR суходолу від суходолу | 777·1668·2536 |
| 125 | 102 | 78 | `AirOrgDamageAirDh` | `.....111` | NonNegDbl |  | шкода ORG авіації від авіації | 778·1669·2537 |
| 126 | 103 | 79 | `AirStrDamageAirDh` | `.....111` | NonNegDbl |  | шкода STR авіації від авіації | 779·1670·2538 |
| 127 | 104 | 80 | `LandOrgDamageAirDh` | `.....111` | NonNegDbl2 |  | шкода ORG суходолу від авіації | 780·1671·2539 |
| 128 | 105 | 81 | `LandStrDamageAirDh` | `.....111` | NonNegDbl |  | шкода STR суходолу від авіації | 781·1672·2540 |
| 129 | 106 | 82 | `NavalOrgDamageAirDh` | `.....111` | NonNegDbl |  | шкода ORG флоту від авіації | 782·1673·2541 |
| 130 | 107 | 83 | `NavalStrDamageAirDh` | `.....111` | NonNegDbl |  | шкода STR флоту від авіації | 783·1674·2542 |
| 131 | 108 | 84 | `SubsOrgDamageAir` | `.....111` | NonNegDbl |  | шкода ORG підводних човнів від авіації | 784·1675·2543 |
| 132 | 109 | 85 | `SubsStrDamageAir` | `.....111` | NonNegDbl |  | шкода STR підводних човнів від авіації | 785·1676·2544 |
| 133 | 110 | 86 | `AirOrgDamageNavyDh` | `.....111` | NonNegDbl |  | шкода ORG авіації від флоту | 786·1677·2545 |
| 134 | 111 | 87 | `AirStrDamageNavyDh` | `.....111` | NonNegDbl |  | шкода STR авіації від флоту | 787·1678·2546 |
| 135 | 112 | 88 | `NavalOrgDamageNavyDh` | `.....111` | NonNegDbl |  | шкода ORG флоту від флоту | 788·1679·2547 |
| 136 | 113 | 89 | `NavalStrDamageNavyDh` | `.....111` | NonNegDbl |  | шкода STR флоту від флоту | 789·1680·2548 |
| 137 | 114 | 90 | `SubsOrgDamageNavy` | `.....111` | NonNegDbl |  | шкода ORG підводних човнів від флоту | 790·1681·2549 |
| 138 | 115 | 91 | `SubsStrDamageNavy` | `.....111` | NonNegDbl |  | шкода STR підводних човнів від флоту | 791·1682·2550 |
| 139 | 116 | 92 | `SubStacksDetectionModifier` | `.1...111` | RangedDbl | 0..1 | модифікатор виявлення стеків підводних човнів | 794·1685·2553 |
| 140 | — | — | `AaMinOrgDamage` | `.......1` | NonNegDbl |  | мінімальна шкода ORG від ППО | 890·1781·2649 |
| 141 | — | — | `AaAdditionalOrgDamage` | `.......1` | NonNegInt |  | додаткова шкода ORG від ППО | 891·1782·2650 |
| 142 | — | — | `AaMinStrDamage` | `.......1` | NonNegDbl |  | мінімальна шкода STR від ППО | 892·1783·2651 |
| 143 | — | — | `AaAdditionalStrDamage` | `.......1` | NonNegInt |  | додаткова шкода STR від ППО | 893·1784·2652 |
| 144 | 117 | 93 | `NavalOrgDamageAa` | `.....111` | NonNegDbl |  | шкода ORG флоту від ППО | 894·1785·2653 |
| 145 | 118 | 94 | `AirOrgDamageAa` | `.....111` | NonNegDbl |  | шкода ORG авіації від ППО | 895·1786·2654 |
| 146 | 119 | 95 | `AirStrDamageAa` | `.....111` | NonNegDbl |  | шкода STR авіації від ППО | 896·1787·2655 |
| 147 | 120 | 96 | `AaAirFiringRules` | `.....111` | Enum | 0..1 | правило вогню ППО по авіації: 0 = `Bombing`, 1 = `Passing` (тлумачення: 0 — лише по літаках, що бомбардують провінцію; 1 — також по тих, що пролітають) **(припущення)** | 897·1788·2656 |
| 148 | 121 | 97 | `AaAirNightModifier` | `.....111` | RangedDbl0 | 0..1 | модифікатор вогню ППО вночі | 898·1789·2657 |
| 149 | 122 | 98 | `AaAirBonusRadars` | `.....111` | NonNegDbl0 |  | бонус вогню ППО від радарів | 899·1790·2658 |
| 150 | — | — | `NukesStrDamage` | `.......1` | NonNegDbl |  | коефіцієнт шкоди STR від ядерного удару | 900·1791·2659 |
| 151 | — | — | `NukesMaxStrDamageFriendly` | `.......1` | RangedDbl | 0..1 | максимальна шкода STR власним/дружнім військам від ядерного удару | 901·1792·2660 |
| 152 | — | — | `NukesOrgDamage` | `.......1` | RangedDbl | 0..1 | коефіцієнт шкоди ORG від ядерного удару | 902·1793·2661 |
| 153 | — | — | `NukesOrgDamageNonFriendly` | `.......1` | RangedDbl | 0..1 | коефіцієнт шкоди ORG ворожим військам від ядерного удару | 903·1794·2662 |
| 154 | — | — | `NavalBombardmentChanceDamaged` | `.......1` | RangedInt | 0..100 | шанс, що удар по флоту влучить у найбільш пошкоджений корабель, % | 904·1795·2663 |
| 155 | — | — | `NavalBombardmentChanceBest` | `.......1` | RangedInt | 0..100 | шанс, що удар по флоту влучить у найменш пошкоджений корабель, % | 905·1796·2664 |
| 156 | — | — | `TacticalBombardmentChanceDamaged` | `.......1` | RangedInt | 0..100 | шанс, що тактичний удар влучить у найбільш пошкоджену одиницю, % | 906·1797·2665 |
| 157 | 123 | 99 | `MovementBonusTerrainTrait` | `.....111` | NonNegDbl |  | бонус швидкості руху від трейту місцевості | 907·1798·2666 |
| 158 | 124 | 100 | `MovementBonusSimilarTerrainTrait` | `.....111` | NonNegDbl |  | бонус швидкості руху від трейту схожої місцевості | 908·1799·2667 |
| 159 | 125 | 101 | `LogisticsWizardEseBonus` | `.....111` | NonNegDbl |  | бонус ефективності постачання (ESE) від трейту LogisticsWizard | 909·1800·2668 |
| 160 | 126 | 102 | `DaysOffensiveSupply` | `.....111` | NonNegInt |  | днів наступального постачання | 910·1801·2669 |
| 161 | 127 | 103 | `MinisterBonuses` | `.....111` | Enum | 1..5 | спосіб поєднання бонусів міністрів: 1 = пріоритет дивізії, 2 = середнє, 3 = сума, 4 = мінімум, 5 = максимум | 911·1802·2670 |
| 162 | 128 | 104 | `OrgRegainBonusFriendly` | `.....111` | NonNegDbl |  | бонус відновлення ORG на дружній території | 912·1803·2671 |
| 163 | 129 | 105 | `OrgRegainBonusFriendlyCap` | `.....111` | NonNegDbl |  | верхня межа бонусу відновлення ORG на дружній території | 913·1804·2672 |
| 164 | — | — | `NewOrgRegainLogic` | `.......1` | Enum | 0..1 | логіка відновлення ORG: 0 = стара, 1 = нова (наступні OrgRegain* стосуються нової) | 914·1805·2673 |
| 165 | — | — | `OrgRegainMorale` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG від морального духу (усі роди) | 915·1806·2674 |
| 166 | — | — | `OrgRegainClear` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG у ясну погоду | 916·1807·2675 |
| 167 | — | — | `OrgRegainFrozen` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG у мороз | 917·1808·2676 |
| 168 | — | — | `OrgRegainRaining` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG у дощ | 918·1809·2677 |
| 169 | — | — | `OrgRegainSnowing` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG у снігопад | 919·1810·2678 |
| 170 | — | — | `OrgRegainStorm` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG у шторм | 920·1811·2679 |
| 171 | — | — | `OrgRegainBlizzard` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG у хуртовину | 921·1812·2680 |
| 172 | — | — | `OrgRegainMuddy` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG у бездоріжжя (грязь) | 922·1813·2681 |
| 173 | — | — | `OrgRegainNaval` | `.......1` | NonNegDbl |  | базовий коефіцієнт відновлення ORG — флот | 923·1814·2682 |
| 174 | — | — | `OrgRegainNavalOutOfFuel` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG флоту без пального | 924·1815·2683 |
| 175 | — | — | `OrgRegainNavalOutOfSupplies` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG флоту без припасів | 925·1816·2684 |
| 176 | — | — | `OrgRegainNavalCurrent` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG флоту залежно від поточного/макс. ORG | 926·1817·2685 |
| 177 | — | — | `OrgRegainNavalBase` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG флоту на базі | 927·1818·2686 |
| 178 | — | — | `OrgRegainNavalSea` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG флоту в морі | 928·1819·2687 |
| 179 | — | — | `OrgRegainAir` | `.......1` | NonNegDbl |  | базовий коефіцієнт відновлення ORG — авіація | 929·1820·2688 |
| 180 | — | — | `OrgRegainAirOutOfFuel` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG авіації без пального | 930·1821·2689 |
| 181 | — | — | `OrgRegainAirOutOfSupplies` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG авіації без припасів | 931·1822·2690 |
| 182 | — | — | `OrgRegainAirCurrent` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG авіації залежно від поточного/макс. ORG | 932·1823·2691 |
| 183 | — | — | `OrgRegainAirBaseSize` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG авіації залежно від розміру бази / кількості одиниць | 933·1824·2692 |
| 184 | — | — | `OrgRegainAirOutOfBase` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG авіації при нестачі місця на базі | 934·1825·2693 |
| 185 | — | — | `OrgRegainArmy` | `.......1` | NonNegDbl |  | множник відновлення ORG — армія | 935·1826·2694 |
| 186 | — | — | `OrgRegainArmyOutOfFuel` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG армії без пального | 936·1827·2695 |
| 187 | — | — | `OrgRegainArmyOutOfSupplies` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG армії без припасів | 937·1828·2696 |
| 188 | — | — | `OrgRegainArmyCurrent` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG армії залежно від поточного/макс. ORG | 938·1829·2697 |
| 189 | — | — | `OrgRegainArmyFriendly` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG армії на дружній території | 939·1830·2698 |
| 190 | — | — | `OrgRegainArmyTransportation` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG армії під час перевезення | 940·1831·2699 |
| 191 | — | — | `OrgRegainArmyMoving` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG армії в русі | 941·1832·2700 |
| 192 | — | — | `OrgRegainArmyRetreating` | `.......1` | NonNegDbl |  | модифікатор відновлення ORG армії під час відступу | 942·1833·2701 |
| 193 | 130 | 106 | `ConvoyInterceptionMissions` | `.....111` | Enum | 0..2 | перехоплення конвоїв під час морських місій: 0 = вимкнено, 1 = опційно, 2 = увімкнено | 943·1834·2702 |
| 194 | 131 | 107 | `AutoReturnTransportFleets` | `.....111` | Enum | 0..2 | автоповернення транспортних флотів: 0 = вимкнено, 1 = опційно, 2 = увімкнено | 944·1835·2703 |
| 195 | 132 | 108 | `AllowProvinceRegionTargeting` | `.....111` | Bool | 0..1 | місії з ціллю «одна провінція / регіон» (0/1) | 945·1836·2704 |
| 196 | 133 | 109 | `NightHoursWinter` | `.....111` | RangedDbl | 0..24 | нічних годин узимку (0..24) | 946·1837·2705 |
| 197 | 134 | 110 | `NightHoursSpringFall` | `.....111` | RangedDbl | 0..24 | нічних годин навесні/восени (0..24) | 947·1838·2706 |
| 198 | 135 | 111 | `NightHoursSummer` | `.....111` | RangedDbl | 0..24 | нічних годин улітку (0..24) | 948·1839·2707 |
| 199 | 136 | 112 | `RecalculateLandArrivalTimes` | `.....111` | NonNegInt |  | інтервал перерахунку часу прибуття сухопутних військ | 949·1840·2708 |
| 200 | 137 | 113 | `SynchronizeArrivalTimePlayer` | `.....111` | NonNegDbl |  | синхронізація одночасного прибуття (гравець) | 950·1841·2709 |
| 201 | 138 | 114 | `SynchronizeArrivalTimeAi` | `.....111` | NonNegDbl |  | синхронізація одночасного прибуття (AI) | 951·1842·2710 |
| 202 | 139 | 115 | `RecalculateArrivalTimesCombat` | `.....111` | Enum | 0..2 | перерахунок часу прибуття після бою: 0 = вимкнено, 1 = лише гравець, 2 = увімкнено | 952·1843·2711 |
| 203 | 140 | 116 | `LandSpeedModifierCombat` | `.....111` | NonNegDbl |  | модифікатор швидкості суходолу в бою | 953·1844·2712 |
| 204 | 141 | 117 | `LandSpeedModifierBombardment` | `.....111` | NonNegDbl |  | модифікатор швидкості суходолу під береговим обстрілом | 954·1845·2713 |
| 205 | 142 | 118 | `LandSpeedModifierSupply` | `.....111` | NonNegDbl |  | модифікатор швидкості суходолу без припасів | 955·1846·2714 |
| 206 | 143 | 119 | `LandSpeedModifierOrg` | `.....111` | NonNegDbl |  | модифікатор швидкості суходолу при низькій ORG | 956·1847·2715 |
| 207 | 144 | 120 | `LandAirSpeedModifierFuel` | `.....111` | NonNegDbl |  | модифікатор швидкості суходолу/авіації без пального | 957·1848·2716 |
| 208 | 145 | 121 | `DefaultSpeedFuel` | `.....111` | NonNegIntMinusOne |  | стандартна швидкість без пального (допускає -1) | 958·1849·2717 |
| 209 | 146 | 122 | `FleetSizeRangePenaltyRatio` | `.....111` | RangedDbl | 0..1 | частка штрафу дальності за розмір флоту (0..1) | 959·1850·2718 |
| 210 | 147 | 123 | `FleetSizeRangePenaltyThrethold` | `.....111` | NonNegIntMinusOne |  | поріг штрафу дальності за розмір флоту (допускає -1) | 960·1851·2719 |
| 211 | 148 | 124 | `FleetSizeRangePenaltyMax` | `.....111` | RangedDbl | 0..1 | максимальний штраф дальності за розмір флоту (0..1) | 961·1852·2720 |
| 212 | 149 | 125 | `ApplyRangeLimitsAreasRegions` | `.....111` | Enum | 0..2 | обмеження дальності в межах area/region: 0 = вимкнено, 1 = лише гравець, 2 = увімкнено | 962·1853·2721 |
| 213 | 150 | 126 | `RadarBonusDetection` | `.....111` | NonNegDbl |  | бонус радара до виявлення літаків | 963·1854·2722 |
| 214 | 151 | 127 | `BonusDetectionFriendly` | `.....111` | NonNegInt |  | бонус виявлення літаків на дружній території | 964·1855·2723 |
| 215 | 152 | 128 | `ScreensCapitalRatioModifier` | `.....111` | NonNegDbl |  | модифікатор співвідношення кораблів охорони (screens) і капітальних | 965·1856·2724 |
| 216 | 153 | 129 | `ChanceTargetNoOrgLand` | `.....111` | RangedInt | 0..100 | шанс обрати ціллю сухопутну одиницю без ORG, % | 966·1857·2725 |
| 217 | 154 | 130 | `ScreenCapitalShipsTargeting` | `.....111` | NonNegIntMinusOne |  | значення позиції для вибору цілі серед screen/капітальних кораблів (допускає -1) | 967·1858·2726 |
| 218 | 155 | — | `FleetPositioningDaytime` | `......11` | NonNegDbl |  | бонус позиціонування флоту вдень | 968·1859·2727 |
| 219 | 156 | — | `FleetPositioningLeaderSkill` | `......11` | NonNegDbl |  | модифікатор позиціонування флоту від навички командувача | 969·1860·2728 |
| 220 | 157 | — | `FleetPositioningFleetSize` | `......11` | NonPosDbl |  | модифікатор позиціонування флоту від розміру флоту | 970·1861·2729 |
| 221 | 158 | — | `FleetPositioningFleetComposition` | `......11` | RangedDbl | -1..1 | модифікатор позиціонування флоту від складу флоту (-1..1) | 971·1862·2730 |
| 222 | 159 | — | `LandCoastalFortsDamage` | `......11` | NonNegDbl |  | модифікатор шкоди сухопутним і береговим фортецям | 972·1863·2731 |
| 223 | 160 | — | `LandCoastalFortsMaxDamage` | `......11` | NonNegDbl |  | максимальна шкода сухопутним і береговим фортецям | 973·1864·2732 |
| 224 | 161 | — | `MinSoftnessBrigades` | `......11` | NonNegDbl |  | мінімальна «м'якість» (softness) від приєднаних бригад | 974·1865·2733 |
| 225 | 162 | — | `AutoRetreatOrg` | `......11` | NonNegDbl |  | ORG, за якої відбувається автоматичний відступ | 975·1866·2734 |
| 226 | 163 | — | `LandOrgNavalTransportation` | `......11` | NonNegDbl |  | модифікатор ORG суходолу після морського перевезення | 976·1867·2735 |
| 227 | 164 | — | `MaxLandDig` | `......11` | NonNegInt1 |  | максимальний рівень окопування (dig-in) | 977·1868·2736 |
| 228 | 165 | — | `DigIncreaseDay` | `......11` | NonNegDbl |  | приріст окопування за день | 978·1869·2737 |
| 229 | 166 | — | `BreakthroughEncirclementMinSpeed` | `......11` | NonNegDbl |  | мінімальна швидкість для прориву/оточення | 979·1870·2738 |
| 230 | 167 | — | `BreakthroughEncirclementMaxChance` | `......11` | NonNegDbl |  | максимальний шанс прориву/оточення | 980·1871·2739 |
| 231 | 168 | — | `BreakthroughEncirclementChanceModifier` | `......11` | NonNegDbl |  | модифікатор шансу прориву/оточення | 981·1872·2740 |
| 232 | 169 | — | `CombatEventDuration` | `......11` | NonNegInt |  | тривалість бойової події (combat event) | 982·1873·2741 |
| 233 | 170 | — | `CounterAttackOrgAttackerDh` | `......11` | NonNegDbl |  | бойова подія «контратака»: модифікатор ORG атакуючого | 983·1874·2742 |
| 234 | 171 | — | `CounterAttackStrAttackerDh` | `......11` | NonNegDbl |  | бойова подія «контратака»: модифікатор STR атакуючого | 984·1875·2743 |
| 235 | 172 | — | `CounterAttackOrgDefenderDh` | `......11` | NonNegDbl |  | бойова подія «контратака»: модифікатор ORG оборонця | 985·1876·2744 |
| 236 | 173 | — | `CounterAttackStrDefenderDh` | `......11` | NonNegDbl |  | бойова подія «контратака»: модифікатор STR оборонця | 986·1877·2745 |
| 237 | 174 | — | `AssaultOrgAttackerDh` | `......11` | NonNegDbl |  | бойова подія «штурм»: модифікатор ORG атакуючого | 987·1878·2746 |
| 238 | 175 | — | `AssaultStrAttackerDh` | `......11` | NonNegDbl |  | бойова подія «штурм»: модифікатор STR атакуючого | 988·1879·2747 |
| 239 | 176 | — | `AssaultOrgDefenderDh` | `......11` | NonNegDbl |  | бойова подія «штурм»: модифікатор ORG оборонця | 989·1880·2748 |
| 240 | 177 | — | `AssaultStrDefenderDh` | `......11` | NonNegDbl |  | бойова подія «штурм»: модифікатор STR оборонця | 990·1881·2749 |
| 241 | 178 | — | `EncirclementOrgAttackerDh` | `......11` | NonNegDbl |  | бойова подія «оточення»: модифікатор ORG атакуючого | 991·1882·2750 |
| 242 | 179 | — | `EncirclementStrAttackerDh` | `......11` | NonNegDbl |  | бойова подія «оточення»: модифікатор STR атакуючого | 992·1883·2751 |
| 243 | 180 | — | `EncirclementOrgDefenderDh` | `......11` | NonNegDbl |  | бойова подія «оточення»: модифікатор ORG оборонця | 993·1884·2752 |
| 244 | 181 | — | `EncirclementStrDefenderDh` | `......11` | NonNegDbl |  | бойова подія «оточення»: модифікатор STR оборонця | 994·1885·2753 |
| 245 | 182 | — | `AmbushOrgAttackerDh` | `......11` | NonNegDbl |  | бойова подія «засідка»: модифікатор ORG атакуючого | 995·1886·2754 |
| 246 | 183 | — | `AmbushStrAttackerDh` | `......11` | NonNegDbl |  | бойова подія «засідка»: модифікатор STR атакуючого | 996·1887·2755 |
| 247 | 184 | — | `AmbushOrgDefenderDh` | `......11` | NonNegDbl |  | бойова подія «засідка»: модифікатор ORG оборонця | 997·1888·2756 |
| 248 | 185 | — | `AmbushStrDefenderDh` | `......11` | NonNegDbl |  | бойова подія «засідка»: модифікатор STR оборонця | 998·1889·2757 |
| 249 | 186 | — | `DelayOrgAttackerDh` | `......11` | NonNegDbl |  | бойова подія «затримка»: модифікатор ORG атакуючого | 999·1890·2758 |
| 250 | 187 | — | `DelayStrAttackerDh` | `......11` | NonNegDbl |  | бойова подія «затримка»: модифікатор STR атакуючого | 1000·1891·2759 |
| 251 | 188 | — | `DelayOrgDefenderDh` | `......11` | NonNegDbl |  | бойова подія «затримка»: модифікатор ORG оборонця | 1001·1892·2760 |
| 252 | 189 | — | `DelayStrDefenderDh` | `......11` | NonNegDbl |  | бойова подія «затримка»: модифікатор STR оборонця | 1002·1893·2761 |
| 253 | 190 | — | `TacticalWithdrawOrgAttackerDh` | `......11` | NonNegDbl |  | бойова подія «тактичний відхід»: модифікатор ORG атакуючого | 1003·1894·2762 |
| 254 | 191 | — | `TacticalWithdrawStrAttackerDh` | `......11` | NonNegDbl |  | бойова подія «тактичний відхід»: модифікатор STR атакуючого | 1004·1895·2763 |
| 255 | 192 | — | `TacticalWithdrawOrgDefenderDh` | `......11` | NonNegDbl |  | бойова подія «тактичний відхід»: модифікатор ORG оборонця | 1005·1896·2764 |
| 256 | 193 | — | `TacticalWithdrawStrDefenderDh` | `......11` | NonNegDbl |  | бойова подія «тактичний відхід»: модифікатор STR оборонця | 1006·1897·2765 |
| 257 | 194 | — | `BreakthroughOrgAttackerDh` | `......11` | NonNegDbl |  | бойова подія «прорив»: модифікатор ORG атакуючого | 1007·1898·2766 |
| 258 | 195 | — | `BreakthroughStrAttackerDh` | `......11` | NonNegDbl |  | бойова подія «прорив»: модифікатор STR атакуючого | 1008·1899·2767 |
| 259 | 196 | — | `BreakthroughOrgDefenderDh` | `......11` | NonNegDbl |  | бойова подія «прорив»: модифікатор ORG оборонця | 1009·1900·2768 |
| 260 | 197 | — | `BreakthroughStrDefenderDh` | `......11` | NonNegDbl |  | бойова подія «прорив»: модифікатор STR оборонця | 1010·1901·2769 |
| 261 | 198 | — | `HqStrDamageBreakthrough` | `......11` | Bool | 0..1 | штаб отримує шкоду STR лише під час події «прорив»: 0 = ні, 1 = так | 1011·1902·2770 |
| 262 | 199 | — | `CombatMode` | `......11` | Enum | 0..1 | режим бою: 0 = старий, 1 = новий (DH 1.03+; змінює зміст захисних характеристик моделей — див. §6) | 1012·1903·2771 |

#### 5.8.5 `mission = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **90 / 91 / 90**. Порядок — `Misc.SectionItems[4]` (`Models/Misc.cs:1017-1107`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `AttackMission` | `.....111` | Bool | 0..1 | місія «атака»: 0 = вимкнена, 1 = увімкнена | 1017·1904·2772 |
| 2 | 2 | 2 | `AttackStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «атака»: початкова ефективність | 1018·1905·2773 |
| 3 | 3 | 3 | `AttackSpeedBonus` | `.....111` | NonNegDbl |  | місія «атака»: бонус швидкості | 1019·1906·2774 |
| 4 | 4 | 4 | `RebaseMission` | `.....111` | Bool | 0..1 | місія «зміна бази»: 0 = вимкнена, 1 = увімкнена | 1020·1907·2775 |
| 5 | 5 | 5 | `RebaseStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «зміна бази»: початкова ефективність | 1021·1908·2776 |
| 6 | 6 | 6 | `RebaseChanceDetected` | `.....111` | NonNegDbl |  | місія «зміна бази»: шанс бути виявленим | 1022·1909·2777 |
| 7 | 7 | 7 | `StratRedeployMission` | `.....111` | Bool | 0..1 | місія «стратегічне передислокування»: 0 = вимкнена, 1 = увімкнена | 1023·1910·2778 |
| 8 | 8 | 8 | `StratRedeployStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «стратегічне передислокування»: початкова ефективність | 1024·1911·2779 |
| 9 | 9 | 9 | `StratRedeployAddedValue` | `.....111` | NonNegDbl |  | місія «стратегічне передислокування»: додане значення | 1025·1912·2780 |
| 10 | 10 | 10 | `StratRedeployDistanceMultiplier` | `.....111` | NonNegDbl |  | місія «стратегічне передислокування»: множник відстані | 1026·1913·2781 |
| 11 | 11 | 11 | `SupportAttackMission` | `.....111` | Bool | 0..1 | місія «підтримка атаки»: 0 = вимкнена, 1 = увімкнена | 1027·1914·2782 |
| 12 | 12 | 12 | `SupportAttackStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «підтримка атаки»: початкова ефективність | 1028·1915·2783 |
| 13 | 13 | 13 | `SupportAttackSpeedBonus` | `.....111` | NonNegDbl |  | місія «підтримка атаки»: бонус швидкості | 1029·1916·2784 |
| 14 | 14 | 14 | `SupportDefenseMission` | `.....111` | Bool | 0..1 | місія «підтримка оборони»: 0 = вимкнена, 1 = увімкнена | 1030·1917·2785 |
| 15 | 15 | 15 | `SupportDefenseStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «підтримка оборони»: початкова ефективність | 1031·1918·2786 |
| 16 | 16 | 16 | `SupportDefenseSpeedBonus` | `.....111` | NonNegDbl |  | місія «підтримка оборони»: бонус швидкості | 1032·1919·2787 |
| 17 | 17 | 17 | `ReservesMission` | `.....111` | Bool | 0..1 | місія «резерв»: 0 = вимкнена, 1 = увімкнена | 1033·1920·2788 |
| 18 | 18 | 18 | `ReservesStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «резерв»: початкова ефективність | 1034·1921·2789 |
| 19 | 19 | 19 | `ReservesSpeedBonus` | `.....111` | NonNegDbl |  | місія «резерв»: бонус швидкості | 1035·1922·2790 |
| 20 | 20 | 20 | `AntiPartisanDutyMission` | `.....111` | Bool | 0..1 | місія «боротьба з партизанами»: 0 = вимкнена, 1 = увімкнена | 1036·1923·2791 |
| 21 | 21 | 21 | `AntiPartisanDutyStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «боротьба з партизанами»: початкова ефективність | 1037·1924·2792 |
| 22 | 22 | 22 | `AntiPartisanDutySuppression` | `.....111` | NonNegDbl |  | місія «боротьба з партизанами»: модифікатор придушення | 1038·1925·2793 |
| 23 | 23 | 23 | `PlannedDefenseMission` | `.....111` | Bool | 0..1 | місія «планова оборона»: 0 = вимкнена, 1 = увімкнена | 1039·1926·2794 |
| 24 | 24 | 24 | `PlannedDefenseStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «планова оборона»: початкова ефективність | 1040·1927·2795 |
| 25 | 25 | 25 | `AirSuperiorityMission` | `.....111` | Bool | 0..1 | місія «завоювання переваги в повітрі»: 0 = вимкнена, 1 = увімкнена | 1041·1928·2796 |
| 26 | 26 | 26 | `AirSuperiorityStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «завоювання переваги в повітрі»: початкова ефективність | 1042·1929·2797 |
| 27 | 27 | 27 | `AirSuperiorityDetection` | `.....111` | NonNegDbl |  | місія «завоювання переваги в повітрі»: модифікатор виявлення ворожих літаків | 1043·1930·2798 |
| 28 | 28 | 28 | `AirSuperiorityMinRequired` | `.....111` | NonNegDbl |  | місія «завоювання переваги в повітрі»: мінімальна кількість одиниць | 1044·1931·2799 |
| 29 | 29 | 29 | `GroundAttackMission` | `.....111` | Bool | 0..1 | місія «штурмовий удар»: 0 = вимкнена, 1 = увімкнена | 1045·1932·2800 |
| 30 | 30 | 30 | `GroundAttackStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «штурмовий удар»: початкова ефективність | 1046·1933·2801 |
| 31 | 31 | 31 | `GroundAttackOrgDamage` | `.....111` | NonNegDbl |  | місія «штурмовий удар»: модифікатор шкоди ORG | 1047·1934·2802 |
| 32 | 32 | 32 | `GroundAttackStrDamage` | `.....111` | NonNegDbl |  | місія «штурмовий удар»: модифікатор шкоди STR | 1048·1935·2803 |
| 33 | 33 | 33 | `InterdictionMission` | `.....111` | Bool | 0..1 | місія «перешкоджання (interdiction)»: 0 = вимкнена, 1 = увімкнена | 1049·1936·2804 |
| 34 | 34 | 34 | `InterdictionStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «перешкоджання (interdiction)»: початкова ефективність | 1050·1937·2805 |
| 35 | 35 | 35 | `InterdictionOrgDamage` | `.....111` | NonNegDbl |  | місія «перешкоджання (interdiction)»: модифікатор шкоди ORG | 1051·1938·2806 |
| 36 | 36 | 36 | `InterdictionStrDamage` | `.....111` | NonNegDbl |  | місія «перешкоджання (interdiction)»: модифікатор шкоди STR | 1052·1939·2807 |
| 37 | 37 | 37 | `StrategicBombardmentMission` | `.....111` | Bool | 0..1 | місія «стратегічне бомбардування»: 0 = вимкнена, 1 = увімкнена | 1053·1940·2808 |
| 38 | 38 | 38 | `StrategicBombardmentStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «стратегічне бомбардування»: початкова ефективність | 1054·1941·2809 |
| 39 | 39 | 39 | `LogisticalStrikeMission` | `.....111` | Bool | 0..1 | місія «удар по логістиці»: 0 = вимкнена, 1 = увімкнена | 1055·1942·2810 |
| 40 | 40 | 40 | `LogisticalStrikeStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «удар по логістиці»: початкова ефективність | 1056·1943·2811 |
| 41 | 41 | 41 | `RunwayCrateringMission` | `.....111` | Bool | 0..1 | місія «удар по злітних смугах»: 0 = вимкнена, 1 = увімкнена | 1057·1944·2812 |
| 42 | 42 | 42 | `RunwayCrateringStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «удар по злітних смугах»: початкова ефективність | 1058·1945·2813 |
| 43 | 43 | 43 | `InstallationStrikeMission` | `.....111` | Bool | 0..1 | місія «удар по військових об'єктах»: 0 = вимкнена, 1 = увімкнена | 1059·1946·2814 |
| 44 | 44 | 44 | `InstallationStrikeStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «удар по військових об'єктах»: початкова ефективність | 1060·1947·2815 |
| 45 | 45 | 45 | `NavalStrikeMission` | `.....111` | Bool | 0..1 | місія «удар по кораблях»: 0 = вимкнена, 1 = увімкнена | 1061·1948·2816 |
| 46 | 46 | 46 | `NavalStrikeStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «удар по кораблях»: початкова ефективність | 1062·1949·2817 |
| 47 | 47 | 47 | `PortStrikeMission` | `.....111` | Bool | 0..1 | місія «удар по порту»: 0 = вимкнена, 1 = увімкнена | 1063·1950·2818 |
| 48 | 48 | 48 | `PortStrikeStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «удар по порту»: початкова ефективність | 1064·1951·2819 |
| 49 | 49 | 49 | `ConvoyAirRaidingMission` | `.....111` | Bool | 0..1 | місія «повітряні атаки на конвої»: 0 = вимкнена, 1 = увімкнена | 1065·1952·2820 |
| 50 | 50 | 50 | `ConvoyAirRaidingStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «повітряні атаки на конвої»: початкова ефективність | 1066·1953·2821 |
| 51 | 51 | 51 | `AirSupplyMission` | `.....111` | Bool | 0..1 | місія «повітряне постачання»: 0 = вимкнена, 1 = увімкнена | 1067·1954·2822 |
| 52 | 52 | 52 | `AirSupplyStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «повітряне постачання»: початкова ефективність | 1068·1955·2823 |
| 53 | 53 | 53 | `AirborneAssaultMission` | `.....111` | Bool | 0..1 | місія «повітряний десант»: 0 = вимкнена, 1 = увімкнена | 1069·1956·2824 |
| 54 | 54 | 54 | `AirborneAssaultStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «повітряний десант»: початкова ефективність | 1070·1957·2825 |
| 55 | 55 | 55 | `NukeMission` | `.....111` | Bool | 0..1 | місія «ядерний удар»: 0 = вимкнена, 1 = увімкнена | 1071·1958·2826 |
| 56 | 56 | 56 | `NukeStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «ядерний удар»: початкова ефективність | 1072·1959·2827 |
| 57 | 57 | 57 | `AirScrambleMission` | `.....111` | Bool | 0..1 | місія «екстрений виліт авіації»: 0 = вимкнена, 1 = увімкнена | 1073·1960·2828 |
| 58 | 58 | 58 | `AirScrambleStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «екстрений виліт авіації»: початкова ефективність | 1074·1961·2829 |
| 59 | 59 | 59 | `AirScrambleDetection` | `.....111` | NonNegDbl |  | місія «екстрений виліт авіації»: модифікатор виявлення ворожих літаків | 1075·1962·2830 |
| 60 | 60 | 60 | `AirScrambleMinRequired` | `.....111` | NonNegDbl |  | місія «екстрений виліт авіації»: мінімальна кількість одиниць | 1076·1963·2831 |
| 61 | 61 | 61 | `ConvoyRadingMission` | `.....111` | Bool | 0..1 | місія «рейдерство проти конвоїв»: 0 = вимкнена, 1 = увімкнена | 1077·1964·2832 |
| 62 | 62 | 62 | `ConvoyRadingStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «рейдерство проти конвоїв»: початкова ефективність | 1078·1965·2833 |
| 63 | 63 | 63 | `ConvoyRadingRangeModifier` | `.....111` | NonNegDbl |  | місія «рейдерство проти конвоїв»: модифікатор дальності | 1079·1966·2834 |
| 64 | 64 | 64 | `ConvoyRadingChanceDetected` | `.....111` | NonNegDbl |  | місія «рейдерство проти конвоїв»: шанс бути виявленим | 1080·1967·2835 |
| 65 | 65 | 65 | `AswMission` | `.....111` | Bool | 0..1 | місія «протичовнова оборона (ASW)»: 0 = вимкнена, 1 = увімкнена | 1081·1968·2836 |
| 66 | 66 | 66 | `AswStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «протичовнова оборона (ASW)»: початкова ефективність | 1082·1969·2837 |
| 67 | 67 | 67 | `NavalInterdictionMission` | `.....111` | Bool | 0..1 | місія «морське перешкоджання»: 0 = вимкнена, 1 = увімкнена | 1083·1970·2838 |
| 68 | 68 | 68 | `NavalInterdictionStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «морське перешкоджання»: початкова ефективність | 1084·1971·2839 |
| 69 | 69 | 69 | `ShoreBombardmentMission` | `.....111` | Bool | 0..1 | місія «береговий обстріл»: 0 = вимкнена, 1 = увімкнена | 1085·1972·2840 |
| 70 | 70 | 70 | `ShoreBombardmentStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «береговий обстріл»: початкова ефективність | 1086·1973·2841 |
| 71 | 71 | 71 | `ShoreBombardmentModifierDh` | `.....111` | NonNegDbl |  | місія «береговий обстріл»: бойовий модифікатор | 1087·1974·2842 |
| 72 | 72 | 72 | `AmphibousAssaultMission` | `.....111` | Bool | 0..1 | місія «морський десант»: 0 = вимкнена, 1 = увімкнена | 1088·1975·2843 |
| 73 | 73 | 73 | `AmphibousAssaultStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «морський десант»: початкова ефективність | 1089·1976·2844 |
| 74 | 74 | 74 | `SeaTransportMission` | `.....111` | Bool | 0..1 | місія «морське перевезення»: 0 = вимкнена, 1 = увімкнена | 1090·1977·2845 |
| 75 | 75 | 75 | `SeaTransportStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «морське перевезення»: початкова ефективність | 1091·1978·2846 |
| 76 | 76 | 76 | `SeaTransportRangeModifier` | `.....111` | NonNegDbl |  | місія «морське перевезення»: модифікатор дальності | 1092·1979·2847 |
| 77 | 77 | 77 | `SeaTransportChanceDetected` | `.....111` | NonNegDbl |  | місія «морське перевезення»: шанс бути виявленим | 1093·1980·2848 |
| 78 | 78 | 78 | `NavalCombatPatrolMission` | `.....111` | Bool | 0..1 | місія «бойове патрулювання»: 0 = вимкнена, 1 = увімкнена | 1094·1981·2849 |
| 79 | 79 | 79 | `NavalCombatPatrolStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «бойове патрулювання»: початкова ефективність | 1095·1982·2850 |
| 80 | 80 | 80 | `NavalPortStrikeMission` | `.....111` | Bool | 0..1 | місія «удар по порту з авіаносців»: 0 = вимкнена, 1 = увімкнена | 1096·1983·2851 |
| 81 | 81 | 81 | `NavalPortStrikeStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «удар по порту з авіаносців»: початкова ефективність | 1097·1984·2852 |
| 82 | 82 | 82 | `NavalAirbaseStrikeMission` | `.....111` | Bool | 0..1 | місія «удар по авіабазі з авіаносців»: 0 = вимкнена, 1 = увімкнена | 1098·1985·2853 |
| 83 | 83 | 83 | `NavalAirbaseStrikeStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «удар по авіабазі з авіаносців»: початкова ефективність | 1099·1986·2854 |
| 84 | 84 | 84 | `SneakMoveMission` | `.....111` | Bool | 0..1 | місія «приховане переміщення»: 0 = вимкнена, 1 = увімкнена | 1100·1987·2855 |
| 85 | 85 | 85 | `SneakMoveStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «приховане переміщення»: початкова ефективність | 1101·1988·2856 |
| 86 | 86 | 86 | `SneakMoveRangeModifier` | `.....111` | NonNegDbl |  | місія «приховане переміщення»: модифікатор дальності | 1102·1989·2857 |
| 87 | 87 | 87 | `SneakMoveChanceDetected` | `.....111` | NonNegDbl |  | місія «приховане переміщення»: шанс бути виявленим | 1103·1990·2858 |
| 88 | 88 | 88 | `NavalScrambleMission` | `.....111` | Bool | 0..1 | місія «екстрений вихід флоту»: 0 = вимкнена, 1 = увімкнена | 1104·1991·2859 |
| 89 | 89 | 89 | `NavalScrambleStartingEfficiency` | `.....111` | RangedDbl | 0.05..10 | місія «екстрений вихід флоту»: початкова ефективність | 1105·1992·2860 |
| 90 | 90 | 90 | `NavalScrambleSpeedBonus` | `.....111` | NonNegDbl |  | місія «екстрений вихід флоту»: бонус швидкості | 1106·1993·2861 |
| — | 91 | — | `UseAttackEfficiencyCombatModifier` | `......1.` | Bool | 0..1 | використовувати ефективність місій «атака»/«підтримка атаки» як бойовий модифікатор: 0 = ні, 1 = так | 1107·1994·2862 |

#### 5.8.6 `country = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **38 / 38 / 38**. Порядок — `Misc.SectionItems[5]` (`Models/Misc.cs:1111-1148`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `LandFortEfficiency` | `.....111` | NonNegDbl |  | базова ефективність сухопутних фортець | 1111·1995·2863 |
| 2 | 2 | 2 | `CoastalFortEfficiency` | `.....111` | NonNegDbl |  | базова ефективність берегових фортець | 1112·1996·2864 |
| 3 | 3 | 3 | `GroundDefenseEfficiency` | `.....111` | NonNegDbl |  | базова ефективність наземного захисту | 1113·1997·2865 |
| 4 | 4 | 4 | `ConvoyDefenseEfficiency` | `.....111` | NonNegDbl |  | базова ефективність захисту конвоїв | 1114·1998·2866 |
| 5 | 5 | 5 | `ManpowerBoost` | `.....111` | NonNegDbl |  | базовий приріст людських ресурсів | 1115·1999·2867 |
| 6 | 6 | 6 | `TransportCapacityModifier` | `.....111` | NonNegDbl |  | базовий модифікатор TC | 1116·2000·2868 |
| 7 | 7 | 7 | `OccupiedTransportCapacityModifier` | `.....111` | NonNegDbl |  | базовий модифікатор TC на окупованих територіях | 1117·2001·2869 |
| 8 | 8 | 8 | `AttritionModifier` | `.....111` | NonNegDbl |  | базовий модифікатор виснаження | 1118·2002·2870 |
| 9 | 9 | 9 | `ManpowerTrickleBackModifier` | `.....111` | NonNegDbl |  | базовий модифікатор повернення людських ресурсів | 1119·2003·2871 |
| 10 | 10 | 10 | `SupplyDistanceModifier` | `.....111` | NonNegDbl |  | базовий модифікатор постачання на віддаль | 1120·2004·2872 |
| 11 | 11 | 11 | `RepairModifier` | `.....111` | NonNegDbl |  | базовий модифікатор ремонту | 1121·2005·2873 |
| 12 | 12 | 12 | `ResearchModifier` | `.....111` | NonNegDbl |  | базовий модифікатор досліджень | 1122·2006·2874 |
| 13 | 13 | 13 | `RadarEfficiency` | `.....111` | NonNegDbl |  | базова ефективність радарів | 1123·2007·2875 |
| 14 | 14 | 14 | `HqSupplyEfficiencyBonus` | `.....111` | NonNegDbl |  | бонус ефективності постачання від штабу | 1124·2008·2876 |
| 15 | 15 | 15 | `HqCombatEventsBonus` | `.....111` | NonNegDbl |  | бонус штабу до бойових подій | 1125·2009·2877 |
| 16 | 16 | 16 | `CombatEventChances` | `.....111` | RangedDbl | 0..1 | шанс бойових подій (0..1) | 1126·2010·2878 |
| 17 | 17 | 17 | `FriendlyArmyDetectionChance` | `.....111` | NonNegInt |  | шанс виявлення дружніх армій | 1127·2011·2879 |
| 18 | 18 | 18 | `EnemyArmyDetectionChance` | `.....111` | NonNegInt |  | шанс виявлення ворожих армій | 1128·2012·2880 |
| 19 | 19 | 19 | `FriendlyIntelligenceChance` | `.....111` | NonNegInt |  | шанс розвідданих про дружні країни | 1129·2013·2881 |
| 20 | 20 | 20 | `EnemyIntelligenceChance` | `.....111` | NonNegInt |  | шанс розвідданих про ворожі країни | 1130·2014·2882 |
| 21 | 21 | 21 | `MaxAmphibiousArmySize` | `.....111` | NonNegInt |  | максимальний розмір морського десанту | 1131·2015·2883 |
| 22 | 22 | 22 | `EnergyToOil` | `.....111` | NonNegDbl |  | коефіцієнт перетворення енергії в нафту | 1132·2016·2884 |
| 23 | 23 | 23 | `TotalProductionEfficiency` | `.....111` | NonNegDbl |  | загальна ефективність виробництва | 1133·2017·2885 |
| 24 | 24 | 24 | `SupplyProductionEfficiency` | `.....111` | NonNegDbl |  | ефективність виробництва припасів | 1134·2018·2886 |
| 25 | 25 | 25 | `AaPower` | `.....111` | NonNegDbl |  | сила вогню ППО | 1135·2019·2887 |
| 26 | 26 | 26 | `AirSurpriseChance` | `.....111` | NonNegDbl |  | шанс раптовості — авіація | 1136·2020·2888 |
| 27 | 27 | 27 | `LandSurpriseChance` | `.....111` | NonNegDbl |  | шанс раптовості — суходіл | 1137·2021·2889 |
| 28 | 28 | 28 | `NavalSurpriseChance` | `.....111` | NonNegDbl |  | шанс раптовості — флот | 1138·2022·2890 |
| 29 | 29 | 29 | `PeacetimeIcModifier` | `.....111` | NonNegDbl |  | модифікатор IC у мирний час | 1139·2023·2891 |
| 30 | 30 | 30 | `WartimeIcModifier` | `.....111` | NonNegDbl |  | модифікатор IC у воєнний час | 1140·2024·2892 |
| 31 | 31 | 31 | `BuildingsProductionModifier` | `.....111` | NonNegDbl |  | модифікатор виробництва будівель | 1141·2025·2893 |
| 32 | 32 | 32 | `ConvoysProductionModifier` | `.....111` | NonNegDbl |  | модифікатор виробництва конвоїв | 1142·2026·2894 |
| 33 | 33 | 33 | `MinShipsPositioningBattle` | `.....111` | NonNegDbl |  | мінімальне значення позиціонування кораблів у бою | 1143·2027·2895 |
| 34 | 34 | 34 | `MaxShipsPositioningBattle` | `.....111` | NonNegDbl |  | максимальне значення позиціонування кораблів у бою | 1144·2028·2896 |
| 35 | 35 | 35 | `PeacetimeStockpilesResources` | `.....111` | NonNegDbl |  | модифікатор запасів ресурсів у мирний час | 1145·2029·2897 |
| 36 | 36 | 36 | `WartimeStockpilesResources` | `.....111` | NonNegDbl |  | модифікатор запасів ресурсів у воєнний час | 1146·2030·2898 |
| 37 | 37 | 37 | `PeacetimeStockpilesOilSupplies` | `.....111` | NonNegDbl |  | модифікатор запасів нафти/припасів у мирний час | 1147·2031·2899 |
| 38 | 38 | 38 | `WartimeStockpilesOilSupplies` | `.....111` | NonNegDbl |  | модифікатор запасів нафти/припасів у воєнний час | 1148·2032·2900 |

#### 5.8.7 `research = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **9 / 15 / 15**. Порядок — `Misc.SectionItems[6]` (`Models/Misc.cs:1152-1173`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `BlueprintBonus` | `11111111` | NonNegDbl |  | бонус креслень (blueprint) до швидкості дослідження; у DH також стеля бонусу після історичної дати (§6) | 1152·2033·2901 |
| 2 | 2 | 2 | `PreHistoricalDateModifier` | `11111111` | NonPosDbl5AoD |  | штраф дослідження до історичної дати (за день, ≤ 0) | 1153·2034·2902 |
| 3 | 3 | 3 | `PostHistoricalDateModifierDh` | `.....111` | NonNegDbl |  | бонус дослідження після історичної дати (за день, ≥ 0), варіант DH | 1154·2035·2903 |
| 4 | 4 | 4 | `CostSkillLevel` | `11111111` | NonNegDbl |  | вартість за рівень навички дослідницької команди | 1155·2036·2904 |
| 5 | 5 | 5 | `MeanNumberInventionEventsYear` | `11111111` | NonNegInt |  | середня кількість подій-винаходів на рік | 1156·2037·2905 |
| 6 | 6 | 6 | `UseNewTechnologyPageLayout` | `.....111` | Enum | 0..1 | макет сторінки технологій: 0 = ванільний, 1 = новий | 1164·2045·2913 |
| 7 | 7 | — | `TechOverviewPanelStyle` | `......11` | Enum | 0..1 | стиль панелі огляду технологій: 0 = старий, 1 = новий | 1165·2046·2914 |
| 8 | 8 | 7 | `MaxActiveTechTeamsDh` | `.....111` | PosInt |  | максимум активних дослідницьких слотів | 1166·2047·2915 |
| 9 | 9 | 8 | `MinActiveTechTeams` | `.....111` | PosInt |  | мінімум активних дослідницьких слотів | 1167·2048·2916 |
| 10 | 10 | 9 | `RequiredIcEachTechTeamDh` | `.....111` | PosInt |  | IC, потрібний на кожен дослідницький слот | 1168·2049·2917 |
| 11 | 11 | — | `NewCountryRocketryComponent` | `......11` | Bool | 0..1 | нова (звільнена) країна успадковує ракетні технології: 0 = ні, 1 = так | 1169·2050·2918 |
| 12 | 12 | — | `NewCountryNuclearPhysicsComponent` | `......11` | Bool | 0..1 | нова країна успадковує ядерну фізику: 0 = ні, 1 = так | 1170·2051·2919 |
| 13 | 13 | — | `NewCountryNuclearEngineeringComponent` | `......11` | Bool | 0..1 | нова країна успадковує ядерну інженерію: 0 = ні, 1 = так | 1171·2052·2920 |
| 14 | 14 | — | `NewCountrySecretTechs` | `......11` | Bool | 0..1 | нова країна успадковує секретні технології: 0 = ні, 1 = так | 1172·2053·2921 |
| 15 | 15 | — | `MaxTechTeamSkill` | `......11` | PosInt |  | максимальна навичка дослідницької команди | 1173·2054·2922 |

#### 5.8.8 `trade = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **25 / 25 / 25**. Порядок — `Misc.SectionItems[7]` (`Models/Misc.cs:1177-1201`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `DaysTradeOffers` | `.....111` | PosInt |  | днів між торговими пропозиціями | 1177·2055·2923 |
| 2 | 2 | 2 | `DelayGameStartNewTrades` | `.....111` | RangedPosInt | ≥2 | затримка нових торгових угод від початку гри (днів, ≥ 2) | 1178·2056·2924 |
| 3 | 3 | 3 | `LimitAiNewTradesGameStart` | `.....111` | NonNegInt |  | на початку гри AI торгує лише з бажаними партнерами (днів) | 1179·2057·2925 |
| 4 | 4 | 4 | `DesiredOilStockpile` | `.....111` | NonNegInt |  | бажаний запас нафти | 1180·2058·2926 |
| 5 | 5 | 5 | `CriticalOilStockpile` | `.....111` | NonNegInt |  | критичний запас нафти | 1181·2059·2927 |
| 6 | 6 | 6 | `DesiredSuppliesStockpile` | `.....111` | NonNegInt |  | бажаний запас припасів | 1182·2060·2928 |
| 7 | 7 | 7 | `CriticalSuppliesStockpile` | `.....111` | NonNegInt |  | критичний запас припасів | 1183·2061·2929 |
| 8 | 8 | 8 | `DesiredResourcesStockpile` | `.....111` | NonNegInt |  | бажаний запас ресурсів | 1184·2062·2930 |
| 9 | 9 | 9 | `CriticalResourceStockpile` | `.....111` | NonNegInt |  | критичний запас ресурсів | 1185·2063·2931 |
| 10 | 10 | 10 | `WartimeDesiredStockpileMultiplier` | `.....111` | NonNegDbl |  | воєнний множник бажаного запасу | 1186·2064·2932 |
| 11 | 11 | 11 | `PeacetimeExtraOilImport` | `.....111` | NonNegDbl |  | додатковий імпорт нафти в мирний час (частка) | 1187·2065·2933 |
| 12 | 12 | 12 | `WartimeExtraOilImport` | `.....111` | NonNegDbl |  | додатковий імпорт нафти у воєнний час (частка) | 1188·2066·2934 |
| 13 | 13 | 13 | `ExtraImportBelowDesired` | `.....111` | NonNegDbl2 |  | додатковий імпорт, коли запас нижчий за бажаний | 1189·2067·2935 |
| 14 | 14 | 14 | `PercentageProducedSupplies` | `.....111` | NonNegDbl2Dh103Full1 |  | частка вироблених припасів | 1190·2068·2936 |
| 15 | 15 | 15 | `PercentageProducedMoney` | `.....111` | NonNegDbl2Dh103Full1 |  | частка вироблених грошей | 1191·2069·2937 |
| 16 | 16 | 16 | `ExtraImportStockpileSelected` | `.....111` | NonNegDbl2 |  | додатковий імпорт, коли обрано накопичення запасу | 1192·2070·2938 |
| 17 | 17 | 17 | `DaysDeliverResourcesTrades` | `.....111` | PosInt |  | днів доставки ресурсів за торговою угодою | 1193·2071·2939 |
| 18 | 18 | 18 | `MergeTradeDeals` | `.....111` | Bool | 0..1 | об'єднувати торгові угоди (0/1) | 1194·2072·2940 |
| 19 | 19 | 19 | `ManualTradeDeals` | `.....111` | RangedIntMinusOne | 0..100 | ручні торгові угоди (0..100 або -1) | 1195·2073·2941 |
| 20 | 20 | 20 | `PuppetsSendSuppliesMoney` | `.....111` | NonNegInt |  | маріонетки віддають сюзерену припаси/гроші | 1196·2074·2942 |
| 21 | 21 | 21 | `PuppetsCriticalSupplyStockpile` | `.....111` | PosDbl |  | критичний запас припасів маріонетки | 1197·2075·2943 |
| 22 | 22 | 22 | `PuppetsMaxPoolResources` | `.....111` | NonNegIntNegDbl |  | максимальний запас ресурсів маріонетки (ціле ≥ 0 або від'ємне дійсне) | 1198·2076·2944 |
| 23 | 23 | 23 | `NewTradeDealsMinEffectiveness` | `.....111` | RangedInt | 0..100 | мінімальна ефективність нової торгової угоди, % | 1199·2077·2945 |
| 24 | 24 | 24 | `CancelTradeDealsEffectiveness` | `.....111` | RangedInt | 0..100 | ефективність, нижче якої угоду розривають, % | 1200·2078·2946 |
| 25 | 25 | 25 | `AutoTradeAiTradeDeals` | `.....111` | RangedInt | 0..100 | мінімальна ефективність угод автоторгівлі та AI, % | 1201·2079·2947 |

#### 5.8.9 `ai = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **31 / 31 / 36**. Порядок — `Misc.SectionItems[8]` (`Models/Misc.cs:1205-1241`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `OverproduceSuppliesBelowDesired` | `.....111` | NonNegDbl |  | надлишкове виробництво припасів, коли запас нижчий за бажаний | 1205·2080·2948 |
| 2 | 2 | 2 | `MultiplierOverproduceSuppliesWar` | `.....111` | NonNegDbl |  | воєнний множник надлишкового виробництва припасів | 1206·2081·2949 |
| 3 | 3 | 3 | `NotProduceSuppliesStockpileOver` | `.....111` | NonNegDbl |  | не виробляти припаси, коли запас перевищує (множник) | 1207·2082·2950 |
| 4 | 4 | 4 | `MaxSerialLineProductionGarrisonMilitia` | `.....111` | RangedInt | 1..99 | максимальна серія виробництва гарнізонів/ополчення (1..99) | 1208·2083·2951 |
| 5 | 5 | 5 | `MinIcSerialProductionNavalAir` | `.....111` | NonNegInt |  | мінімальний IC для серійного виробництва флоту/авіації | 1209·2084·2952 |
| 6 | 6 | 6 | `NotProduceNewUnitsManpowerRatio` | `.....111` | NonNegDbl |  | не виробляти нові одиниці нижче частки людських ресурсів | 1210·2085·2953 |
| 7 | 7 | 7 | `NotProduceNewUnitsManpowerValue` | `.....111` | NonNegDbl |  | не виробляти нові одиниці нижче абсолютного значення людських ресурсів | 1211·2086·2954 |
| 8 | 8 | 8 | `NotProduceNewUnitsSupply` | `.....111` | RangedDbl | 0..1 | не виробляти нові одиниці нижче частки припасів (0..1) | 1212·2087·2955 |
| 9 | 9 | 9 | `MilitaryStrengthTotalIcRatioPeacetime` | `.....111` | RangedDblMinusOne1 | 0..1 | цільове відношення військової сили до сумарного IC (мир; 0..1 або -1) | 1213·2088·2956 |
| 10 | 10 | 10 | `MilitaryStrengthTotalIcRatioWartime` | `.....111` | RangedDblMinusOne1 | 0..1 | цільове відношення військової сили до сумарного IC (війна; 0..1 або -1) | 1214·2089·2957 |
| 11 | 11 | 11 | `MilitaryStrengthTotalIcRatioMajor` | `.....111` | PosDbl |  | цільове відношення військової сили до сумарного IC (великі держави) | 1215·2090·2958 |
| 12 | 12 | 12 | `NotUseOffensiveSupplyStockpile` | `.....111` | NonNegDbl |  | не наступати, якщо запас припасів нижчий за | 1216·2091·2959 |
| 13 | 13 | 13 | `NotUseOffensiveOilStockpile` | `.....111` | NonNegDbl |  | не наступати, якщо запас пального нижчий за | 1217·2092·2960 |
| 14 | 14 | 14 | `NotUseOffensiveEse` | `.....111` | NonNegDbl |  | не наступати, якщо ефективність постачання (ESE) нижча за | 1218·2093·2961 |
| 15 | 15 | 15 | `NotUseOffensiveOrgStrDamage` | `.....111` | RangedDbl | 0..1 | не наступати при такій шкоді ORG/STR (0..1) | 1219·2094·2962 |
| 16 | 16 | 16 | `AiPeacetimeSpyMissionsDh` | `.....111` | Enum | 0..2 | наступальні шпигунські місії AI в мирний час: 0 = усі, 1 = рівень 1, 2 = рівень 2 | 1220·2095·2963 |
| 17 | 17 | 17 | `AiSpyMissionsCostModifierDh` | `.....111` | NonNegDbl |  | модифікатор вартості шпигунських місій для AI | 1221·2096·2964 |
| 18 | 18 | 18 | `AiDiplomacyCostModifierDh` | `.....111` | NonNegDbl |  | модифікатор вартості дипломатичних місій для AI | 1222·2097·2965 |
| 19 | 19 | 19 | `AiInfluenceModifierDh` | `.....111` | NonNegDbl |  | модифікатор частоти дипломатичного впливу AI | 1223·2098·2966 |
| — | — | 20 | `NewDowRules` | `.....1..` | Enum | 0..1 | нові правила оголошення війни для AI: 0 = вимкнено, 1 = увімкнено | 1224·2099·2967 |
| 20 | 20 | — | `NewDowRules2` | `......11` | Enum | 0..2 | нові правила оголошення війни: 0 = вимкнено, 1 = лише AI, 2 = увімкнено | 1225·2100·2968 |
| 21 | 21 | 21 | `ForcePuppetsJoinMastersAllianceNeutrality` | `.....111` | NonNegInt |  | нейтральність, за якої маріонетка примусово вступає до альянсу сюзерена | 1226·2101·2969 |
| 22 | 22 | 22 | `NewAiReleaseRules` | `.....111` | Bool | 0..1 | нові правила звільнення окупованих територій AI (0/1) | 1227·2102·2970 |
| 23 | 23 | 23 | `AiEventsActionSelectionRules` | `.....111` | RangedIntMinusThree | 0..100 | правила вибору варіанта події AI: 0..100 або -1/-2/-3 | 1228·2103·2971 |
| 24 | 24 | 24 | `ForceStrategicRedeploymentHour` | `.....111` | NonNegIntMinusOne |  | година примусового стратегічного передислокування (допускає -1) | 1229·2104·2972 |
| 25 | 25 | 25 | `MaxRedeploymentDaysAi` | `.....111` | NonNegInt |  | максимум днів передислокування для AI | 1230·2105·2973 |
| 26 | 26 | 26 | `UseQuickAreaCheckGarrisonAi` | `.....111` | Bool | 0..1 | спрощена перевірка area для гарнізонного AI (0/1) | 1231·2106·2974 |
| 27 | 27 | 27 | `AiMastersGetProvincesConquredPuppets` | `.....111` | Bool | 0..1 | AI-сюзерен забирає провінції, захоплені маріонетками (0/1) | 1232·2107·2975 |
| 28 | — | — | `ReleaseCountryWarZone` | `.......1` | Bool | 0..1 | дозволити звільнення країн у зоні бойових дій (поруч із ворогом) (0/1) | 1233·2108·2976 |
| 29 | 28 | 28 | `MinDaysRequiredAiReleaseCountry` | `.....111` | NonNegInt |  | мінімум днів до звільнення країни AI | 1234·2109·2977 |
| 30 | 29 | 29 | `MinDaysRequiredAiAllied` | `.....111` | NonNegInt |  | мінімум днів до передачі окупованого союзнику AI | 1235·2110·2978 |
| 31 | 30 | 30 | `MinDaysRequiredAiAlliedSupplyBase` | `.....111` | NonNegInt |  | те саме для провінцій із базою постачання | 1236·2111·2979 |
| 32 | 31 | 31 | `MinRequiredRelationsAlliedClaimed` | `.....111` | RangedDbl | -200..200 | мінімальні відносини для вступу до альянсу, коли на провінції є претензія (-200..200) | 1237·2112·2980 |
| 33 | — | — | `AiUnitPowerCalculationStrOrg` | `.......1` | Enum | 0..1 | розрахунок сили одиниць AI (STR/ORG): 0 = старий, 1 = новий | 1238·2113·2981 |
| 34 | — | — | `AiUnitPowerCalculationGde` | `.......1` | Enum | 0..1 | розрахунок сили одиниць AI (наземний захист): 0 = старий, 1 = новий | 1239·2114·2982 |
| 35 | — | — | `AiUnitPowerCalculationMinOrg` | `.......1` | NonNegDbl | ≤1 | мінімальна ORG у розрахунку сили AI | 1240·2115·2983 |
| 36 | — | — | `AiUnitPowerCalculationMinStr` | `.......1` | NonNegDbl | ≤1 | мінімальна STR у розрахунку сили AI | 1241·2116·2984 |

#### 5.8.10 `mod = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **40 / 47 / 51**. Порядок — `Misc.SectionItems[9]` (`Models/Misc.cs:1245-1296`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `AiSpyDiplomaticMissionLogger` | `.....111` | Bool | 0..1 | журналювати шпигунські/дипломатичні місії AI (0/1) | 1245·2117·2985 |
| 2 | 2 | 2 | `CountryLogger` | `.....111` | NonNegIntMinusOne |  | журнал стану країни (допускає -1) | 1246·2118·2986 |
| 3 | 3 | 3 | `SwitchedAiFilesLogger` | `.....111` | Bool | 0..1 | журналювати перемикання AI-файлів (0/1) | 1247·2119·2987 |
| 4 | 4 | 4 | `UseNewAutoSaveFileFormat` | `.....111` | Bool | 0..1 | новий формат імен файлів автозбереження (0/1) | 1248·2120·2988 |
| 5 | 5 | 5 | `LoadNewAiSwitchingAllClients` | `.....111` | Bool | 0..1 | у мультиплеєрі при перемиканні AI завантажувати нові налаштування на всіх клієнтах (0/1) | 1249·2121·2989 |
| 6 | 6 | 6 | `TradeEfficiencyCalculationSystem` | `.....111` | Int |  | інтервал (система) розрахунку ефективності торгівлі | 1250·2122·2990 |
| 7 | 7 | 7 | `MergeRelocateProvincialDepots` | `.....111` | NonNegInt |  | інтервал перерахунку/об'єднання провінційних складів | 1251·2123·2991 |
| — | — | 8 | `InGameLossesLogging` | `.....1..` | Bool | 0..1 | журналювати втрати (0/1) | 1252·2124·2992 |
| 8 | 8 | — | `InGameLossLogging2` | `......11` | Enum | 0..4 | журналювати втрати: 0 = вимкнено, 1..4 = типи (редактор не розшифровує) | 1253·2125·2993 |
| 9 | 9 | 9 | `AllowBrigadeAttachingInSupply` | `.....111` | Bool | 0..1 | дозволити приєднання бригад там, де є постачання (на окупованій території) (0/1) | 1254·2126·2994 |
| 10 | 10 | 10 | `MultipleDeploymentSizeArmies` | `.....111` | PosInt |  | розмір групового розгортання — армії | 1255·2127·2995 |
| 11 | 11 | 11 | `MultipleDeploymentSizeFleets` | `.....111` | PosInt |  | розмір групового розгортання — флоти | 1256·2128·2996 |
| 12 | 12 | 12 | `MultipleDeploymentSizeAir` | `.....111` | PosInt |  | розмір групового розгортання — авіація | 1257·2129·2997 |
| 13 | 13 | 13 | `AllowUniquePicturesAllLandProvinces` | `.....111` | Bool | 0..1 | дозволити унікальні зображення для всіх сухопутних провінцій (0/1) | 1258·2130·2998 |
| 14 | 14 | 14 | `AutoReplyEvents` | `.....111` | Bool | 0..1 | автоматично відповідати на події (0/1) | 1259·2131·2999 |
| 15 | 15 | 15 | `ForceActionsShow` | `.....111` | Enum | 0..2 | примусово показувати варіанти подій: 0 = вимкнено, 1 = лише чинні, 2 = увімкнено | 1260·2132·3000 |
| 16 | 16 | 16 | `EnableDicisionsPlayers` | `.....111` | Bool | 0..1 | увімкнути рішення (decisions) для гравців (0/1) | 1261·2133·3001 |
| 17 | 17 | 17 | `RebelsArmyComposition` | `.....111` | RangedInt | 0..100 | частка піхоти у складі повстанців, % | 1262·2134·3002 |
| 18 | 18 | 18 | `RebelsArmyTechLevel` | `.....111` | NonNegIntMinusOne |  | технологічний рівень повстанців (допускає -1) | 1263·2135·3003 |
| 19 | 19 | 19 | `RebelsArmyMinStr` | `.....111` | RangedInt | 1..100 | мінімальна STR повстанців (1..100) | 1264·2136·3004 |
| 20 | 20 | 20 | `RebelsArmyMaxStr` | `.....111` | RangedInt | 1..100 | максимальна STR повстанців (1..100) | 1265·2137·3005 |
| 21 | 21 | 21 | `RebelsOrgRegain` | `.....111` | NonNegDbl |  | швидкість відновлення ORG повстанців | 1266·2138·3006 |
| 22 | 22 | 22 | `ExtraRebelBonusNeighboringProvince` | `.....111` | NonNegInt |  | бонус повстанців: сусідня провінція окупована | 1267·2139·3007 |
| 23 | 23 | 23 | `ExtraRebelBonusOccupied` | `.....111` | NonNegInt |  | бонус повстанців: окупована провінція | 1268·2140·3008 |
| 24 | 24 | 24 | `ExtraRebelBonusMountain` | `.....111` | NonNegInt |  | бонус повстанців: гори | 1269·2141·3009 |
| 25 | 25 | 25 | `ExtraRebelBonusHill` | `.....111` | NonNegInt |  | бонус повстанців: пагорби | 1270·2142·3010 |
| 26 | 26 | 26 | `ExtraRebelBonusForest` | `.....111` | NonNegInt |  | бонус повстанців: ліс | 1271·2143·3011 |
| 27 | 27 | 27 | `ExtraRebelBonusJungle` | `.....111` | NonNegInt |  | бонус повстанців: джунглі | 1272·2144·3012 |
| 28 | 28 | 28 | `ExtraRebelBonusSwamp` | `.....111` | NonNegInt |  | бонус повстанців: болото | 1273·2145·3013 |
| 29 | 29 | 29 | `ExtraRebelBonusDesert` | `.....111` | NonNegInt |  | бонус повстанців: пустеля | 1274·2146·3014 |
| 30 | 30 | 30 | `ExtraRebelBonusPlain` | `.....111` | NonNegInt |  | бонус повстанців: рівнина | 1275·2147·3015 |
| 31 | 31 | 31 | `ExtraRebelBonusUrban` | `.....111` | NonNegInt |  | бонус повстанців: місто | 1276·2148·3016 |
| 32 | 32 | 32 | `ExtraRebelBonusAirNavalBases` | `.....111` | NonNegInt |  | бонус повстанців: авіа-/морська база | 1277·2149·3017 |
| 33 | 33 | 33 | `ReturnRebelliousProvince` | `.....111` | PosInt |  | час повернення провінції, захопленої повстанцями | 1278·2150·3018 |
| 34 | 34 | 34 | `UseNewMinisterFilesFormat` | `.....111` | Bool | 0..1 | новий формат CSV міністрів (повні роки + End Year) — див. §4.3 (0/1) | 1279·2151·3019 |
| 35 | 35 | — | `EnableRetirementYearMinisters` | `......11` | Bool | 0..1 | колонка Retirement Year у CSV міністрів — див. §4.3 (0/1) | 1280·2152·3020 |
| 36 | 36 | — | `EnableRetirementYearLeaders` | `......11` | Bool | 0..1 | колонка Retirement Year у CSV командувачів — див. §3.3 (0/1) | 1281·2153·3021 |
| 37 | 37 | 35 | `LoadSpritesModdirOnly` | `.....111` | Bool | 0..1 | завантажувати спрайти лише з теки мода (0/1) | 1282·2154·3022 |
| 38 | 38 | 36 | `LoadUnitIconsModdirOnly` | `.....111` | Bool | 0..1 | завантажувати іконки одиниць лише з теки мода (0/1) | 1283·2155·3023 |
| 39 | 39 | 37 | `LoadUnitPicturesModdirOnly` | `.....111` | Bool | 0..1 | завантажувати зображення одиниць лише з теки мода (0/1) | 1284·2156·3024 |
| 40 | 40 | 38 | `LoadAiFilesModdirOnly` | `.....111` | Bool | 0..1 | завантажувати AI-файли лише з теки мода (0/1) | 1285·2157·3025 |
| 41 | 41 | 39 | `UseSpeedSetGarrisonStatus` | `.....111` | Enum | 0..1 | визначення статусу гарнізону за швидкістю: 0 = старе, 1 = нове | 1286·2158·3026 |
| 42 | 42 | 40 | `UseOldSaveGameFormat` | `.....111` | Bool | 0..1 | використовувати старий формат збережень (0/1) | 1287·2159·3027 |
| 43 | 43 | — | `ProductionPanelUiStyle` | `......11` | Enum | 0..1 | стиль UI панелі виробництва: 0 = старий, 1 = новий | 1288·2160·3028 |
| 44 | 44 | — | `UnitPicturesSize` | `......11` | Enum | 0..1 | розмір зображень одиниць: 0 = старий, 1 = новий | 1289·2161·3029 |
| 45 | 45 | — | `EnablePicturesNavalBrigades` | `......11` | Bool | 0..1 | зображення для морських «бригад» (обладнання кораблів) (0/1) | 1290·2162·3030 |
| 46 | 46 | — | `BuildingsBuildableOnlyProvinces` | `......11` | Enum | 0..2 | будівлі лише в провінціях: 0 = вимкнено, 1/2 = типи (редактор не розшифровує) | 1291·2163·3031 |
| 47 | 47 | — | `UnitModifiersStatisticsPages` | `......11` | PosInt |  | поріг переходу сторінки модифікаторів одиниць на новий стиль | 1292·2164·3032 |
| 48 | — | — | `CheatMultiPlayer` | `.......1` | Bool | 0..1 | дозволити чит-коди в мультиплеєрі (0/1) | 1293·2165·3033 |
| 49 | — | — | `ManualChangeConvoy` | `.......1` | Enum | 0..1 | ручна зміна конвоїв: 0 = дозволено, 1 = заборонено (інвертовано!) | 1294·2166·3034 |
| 50 | — | — | `BrigadesRepairManpowerCost` | `.......1` | Bool | 0..1 | враховувати приєднані бригади у вартості поповнення людськими ресурсами: 0 = так, 1 = ні (інвертовано!) | 1295·2167·3035 |
| 51 | — | — | `StrPercentageBrigadesAttachment` | `.......1` | RangedDbl | 0..100 | мінімальна STR (%) для приєднання/від'єднання бригад (0..100) | 1296·2168·3036 |

#### 5.8.11 `map = { ... }`

Значень у DH1.02 / 1.03 / 1.04: **5 / 5 / 5**. Порядок — `Misc.SectionItems[10]` (`Models/Misc.cs:1300-1304`).

| H4 | H3 | H2 | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|---|---|
| 1 | 1 | 1 | `MapNumber` | `.....111` | NonNegInt |  | номер карти: 0 = стандартна, N > 0 = `map\Map_N` (див. §6.2) | 1300·2169·3037 |
| 2 | 2 | 2 | `TotalProvinces` | `.....111` | RangedInt | 1..10000 | загальна кількість провінцій (1..10000) | 1301·2170·3038 |
| 3 | 3 | 3 | `DistanceCalculationModel` | `.....111` | Enum | 0..1 | модель розрахунку відстаней: 0 = стара, 1 = нова | 1302·2171·3039 |
| 4 | 4 | 4 | `MapWidth` | `.....111` | PosInt |  | ширина карти | 1303·2172·3040 |
| 5 | 5 | 5 | `MapHeight` | `.....111` | PosInt |  | висота карти | 1304·2173·3041 |


### 5.9 Слоти, відсутні в DH (для довідки)

215 слотів, що існують лише в HoI2/DDA та/або AoD. У DH-файлі їх немає; наведено для повноти й
для розуміння глобального порядку (`MiscItemId` іде впереміш).

| Секція | Ключ (`MiscItemId`) | Маска | Тип | Діапазон | Зміст | Misc.cs SI·IT·TY |
|---|---|---|---|---|---|---|
| `economy` | `DissentChangeSpeed` | `..111...` | NonNegDbl |  | швидкість зменшення невдоволення | 417·1317·2185 |
| `economy` | `GearingResourceIncrement` | `..111...` | NonNegDbl |  | приріст споживання ресурсів при серійному виробництві | 423·1323·2191 |
| `economy` | `GearingLossNoIc` | `..111...` | NonNegDbl |  | втрата gearing-бонусу, якщо лінії не виділено IC | 424·1324·2192 |
| `economy` | `RequirementAffectSlider` | `11111...` | NonNegDbl |  | частка IC, потрібна, щоб впливати на внутрішньополітичні повзунки | 449·1349·2217 |
| `economy` | `NationalismPerManpowerAoD` | `...11...` | NonNegDbl |  | зміна націоналізму на одиницю людських ресурсів (варіант AoD) | 458·1358·2226 |
| `economy` | `CanUnitSendNonAllied` | `11111...` | Bool | 0..1 | чи можна продавати/передавати дивізії несоюзним країнам (0 = ні, 1 = так) | 465·1365·2233 |
| `economy` | `SpyMissionDays` | `.1......` | NonNegInt |  | днів між шпигунськими місіями в одній країні | 466·1366·2234 |
| `economy` | `IncreateIntelligenceLevelDays` | `.1......` | NonNegInt |  | днів між підвищеннями рівня розвідки | 467·1367·2235 |
| `economy` | `ChanceDetectSpyMission` | `.1......` | RangedInt | 0..100 | шанс виявити ініціатора шпигунської місії, % | 468·1368·2236 |
| `economy` | `RelationshipsHitDetectedMissions` | `.1......` | RangedInt | 0..400 | падіння відносин за виявлену місію | 469·1369·2237 |
| `economy` | `ShowThirdCountrySpyReports` | `.1......` | Enum | 0..3 | звіти про шпигунство третіх країн: 0 = ні, 1 = лише виявлені, 2 = виявлені й успішні, 3 = усі | 470·1370·2238 |
| `economy` | `DistanceModifierNeighbours` | `.1......` | RangedDbl | 0..1 | модифікатор відстані для сусідніх країн | 471·1371·2239 |
| `economy` | `SpyInformationAccuracyModifier` | `.1......` | RangedInt | -10..10 | модифікатор точності розвідданих | 472·1372·2240 |
| `economy` | `AiPeacetimeSpyMissions` | `.1......` | Enum | 0..2 | наступальні шпигунські місії AI в мирний час: 0 = усі, 1 = рівень 1, 2 = рівень 2 | 473·1373·2241 |
| `economy` | `MaxIcCostModifier` | `.1......` | NonNegInt |  | максимальний IC, що враховується в модифікаторі вартості шпигунства | 474·1374·2242 |
| `economy` | `AiSpyMissionsCostModifier` | `.1......` | NonNegDbl |  | модифікатор вартості шпигунських місій для AI | 475·1375·2243 |
| `economy` | `AiDiplomacyCostModifier` | `.1......` | NonNegDbl |  | модифікатор вартості дипломатичних місій для AI | 476·1376·2244 |
| `economy` | `AiInfluenceModifier` | `.1......` | NonNegDbl |  | модифікатор частоти дипломатичного впливу AI | 477·1377·2245 |
| `economy` | `CostRepairBuildings` | `..111...` | NonNegDbl2 |  | вартість ремонту будівель провінції | 478·1378·2246 |
| `economy` | `TimeRepairBuilding` | `..111...` | NonNegDbl |  | час ремонту будівель провінції | 479·1379·2247 |
| `economy` | `ProvinceEfficiencyRiseTime` | `..111...` | NonNegInt |  | час зростання ефективності провінції | 480·1380·2248 |
| `economy` | `CoreProvinceEfficiencyRiseTime` | `...11...` | NonNegInt |  | час зростання ефективності core-провінції | 481·1381·2249 |
| `economy` | `LineUpkeep` | `..111...` | NonNegDbl |  | вартість утримання виробничої лінії | 482·1382·2250 |
| `economy` | `LineStartupTime` | `..111...` | NonNegInt |  | час запуску (переобладнання) нової лінії | 483·1383·2251 |
| `economy` | `LineUpgradeTime` | `..111...` | NonNegInt |  | час переобладнання лінії при модернізації | 484·1384·2252 |
| `economy` | `RetoolingCost` | `..111...` | NonNegDbl |  | вартість переобладнання | 485·1385·2253 |
| `economy` | `RetoolingResource` | `..111...` | NonNegDbl |  | ресурсна вартість переобладнання | 486·1386·2254 |
| `economy` | `DailyAgingManpower` | `..111...` | NonNegDbl |  | щоденне старіння людських ресурсів | 487·1387·2255 |
| `economy` | `SupplyConvoyHunt` | `..111...` | NonNegDbl |  | споживання припасів під час полювання на конвої | 488·1388·2256 |
| `economy` | `SupplyNavalStaticAoD` | `..111...` | NonNegDbl |  | споживання припасів флотом, що стоїть | 489·1389·2257 |
| `economy` | `SupplyNavalMoving` | `..111...` | NonNegDbl |  | споживання припасів флотом у русі | 490·1390·2258 |
| `economy` | `SupplyNavalBattleAoD` | `..111...` | NonNegDbl |  | споживання припасів флотом у бою | 491·1391·2259 |
| `economy` | `SupplyAirStaticAoD` | `..111...` | NonNegDbl |  | споживання припасів авіацією, що стоїть | 492·1392·2260 |
| `economy` | `SupplyAirMoving` | `..111...` | NonNegDbl |  | споживання припасів авіацією в русі | 493·1393·2261 |
| `economy` | `SupplyAirBattleAoD` | `..111...` | NonNegDbl |  | споживання припасів авіацією в бою | 494·1394·2262 |
| `economy` | `SupplyAirBombing` | `..111...` | NonNegDbl |  | споживання припасів авіацією під час бомбардування | 495·1395·2263 |
| `economy` | `SupplyLandStaticAoD` | `..111...` | NonNegDbl |  | споживання припасів сухопутними військами, що стоять | 496·1396·2264 |
| `economy` | `SupplyLandMoving` | `..111...` | NonNegDbl |  | споживання припасів сухопутними військами в русі | 497·1397·2265 |
| `economy` | `SupplyLandBattleAoD` | `..111...` | NonNegDbl |  | споживання припасів сухопутними військами в бою | 498·1398·2266 |
| `economy` | `SupplyLandBombing` | `..111...` | NonNegDbl |  | споживання припасів сухопутними військами під час артобстрілу | 499·1399·2267 |
| `economy` | `SupplyStockLand` | `..111...` | NonNegDbl |  | запас припасів у сухопутній дивізії | 500·1400·2268 |
| `economy` | `SupplyStockAir` | `..111...` | NonNegDbl |  | запас припасів в авіаційній дивізії | 501·1401·2269 |
| `economy` | `SupplyStockNaval` | `..111...` | NonNegDbl |  | запас припасів у морській дивізії | 502·1402·2270 |
| `economy` | `RestockSpeedLand` | `...11...` | NonNegDbl |  | швидкість поповнення запасу — суходіл | 503·1403·2271 |
| `economy` | `RestockSpeedAir` | `...11...` | NonNegDbl |  | швидкість поповнення запасу — авіація | 504·1404·2272 |
| `economy` | `RestockSpeedNaval` | `...11...` | NonNegDbl |  | швидкість поповнення запасу — флот | 505·1405·2273 |
| `economy` | `SyntheticOilConversionMultiplier` | `..111...` | NonNegDbl |  | множник перетворення для синтетичної нафти | 506·1406·2274 |
| `economy` | `SyntheticRaresConversionMultiplier` | `..111...` | NonNegDbl |  | множник перетворення для синтетичних рідкісних матеріалів | 507·1407·2275 |
| `economy` | `MilitarySalary` | `..111...` | NonNegDbl |  | вартість платні армії | 508·1408·2276 |
| `economy` | `MaxIntelligenceExpenditure` | `..111...` | NonNegDbl2 |  | максимальна частка витрат на розвідку | 509·1409·2277 |
| `economy` | `MaxResearchExpenditure` | `..111...` | NonNegDbl |  | максимальна частка витрат на дослідження | 510·1410·2278 |
| `economy` | `MilitarySalaryAttrictionModifier` | `..111...` | NonNegDbl |  | модифікатор виснаження при нестачі платні | 511·1411·2279 |
| `economy` | `MilitarySalaryDissentModifier` | `..111...` | NonNegDbl |  | модифікатор невдоволення при нестачі платні | 512·1412·2280 |
| `economy` | `NuclearSiteUpkeepCost` | `..111...` | NonNegDbl |  | утримання ядерного реактора | 513·1413·2281 |
| `economy` | `NuclearPowerUpkeepCost` | `..111...` | NonNegDbl |  | утримання атомної електростанції | 514·1414·2282 |
| `economy` | `SyntheticOilSiteUpkeepCost` | `..111...` | NonNegDbl |  | утримання заводу синтетичної нафти | 515·1415·2283 |
| `economy` | `SyntheticRaresSiteUpkeepCost` | `..111...` | NonNegDbl |  | утримання заводу синтетичних рідкісних матеріалів | 516·1416·2284 |
| `economy` | `DurationDetection` | `..111...` | NonNegDbl2 |  | тривалість актуальності морських розвідданих | 517·1417·2285 |
| `economy` | `ConvoyProvinceHostileTime` | `..111...` | NonNegDbl2 |  | час, протягом якого провінція вважається ворожою для конвоїв (обхід) | 518·1418·2286 |
| `economy` | `ConvoyProvinceBlockedTime` | `..111...` | NonNegDbl2 |  | час, протягом якого провінція заблокована для конвоїв | 519·1419·2287 |
| `economy` | `AutoTradeConvoy` | `..111...` | NonNegInt |  | частка конвоїв, потрібна для автоторгівлі | 520·1420·2288 |
| `economy` | `SpyUpkeepCost` | `..111...` | NonNegDbl |  | утримання шпигунів | 521·1421·2289 |
| `economy` | `SpyDetectionChance` | `..111...` | NonNegDbl |  | шанс виявлення шпигуна | 522·1422·2290 |
| `economy` | `SpyCoupDissentModifier` | `...11...` | NonNegDbl |  | вплив невдоволення на успіх перевороту | 523·1423·2291 |
| `economy` | `InfraEfficiencyModifier` | `..111...` | NonNegDbl |  | вплив інфраструктури на ефективність провінції | 524·1424·2292 |
| `economy` | `ManpowerToConsumerGoods` | `..111...` | NonNegDbl |  | вплив людських ресурсів на виробництво споживчих товарів | 525·1425·2293 |
| `economy` | `TimeBetweenSliderChangesAoD` | `..111...` | NonNegInt |  | інтервал між змінами повзунків (варіант AoD) | 526·1426·2294 |
| `economy` | `MinimalPlacementIc` | `..111...` | NonNegInt |  | мінімальний IC для розміщення в заморській провінції | 527·1427·2295 |
| `economy` | `NuclearPower` | `..111...` | NonNegDbl |  | вироблення енергії атомною електростанцією | 528·1428·2296 |
| `economy` | `FreeInfraRepair` | `..111...` | NonNegDbl |  | природне відновлення інфраструктури | 529·1429·2297 |
| `economy` | `MaxSliderDissent` | `..111...` | NonNegInt |  | максимальне невдоволення від зсуву повзунка | 530·1430·2298 |
| `economy` | `MinSliderDissent` | `..111...` | NonNegInt |  | мінімальне невдоволення від зсуву повзунка | 531·1431·2299 |
| `economy` | `MaxDissentSliderMove` | `..111...` | NonNegInt |  | максимальне невдоволення, за якого ще можна рухати повзунок | 532·1432·2300 |
| `economy` | `IcConcentrationBonus` | `..111...` | NonNegDbl |  | бонус концентрації заводів | 533·1433·2301 |
| `economy` | `TransportConversion` | `..1.....` | NonNegInt |  | коефіцієнт перетворення транспортів | 534·1434·2302 |
| `economy` | `ConvoyDutyConversion` | `...11...` | NonNegInt |  | коефіцієнт перетворення в транспортні конвої | 535·1435·2303 |
| `economy` | `EscortDutyConversion` | `...11...` | NonNegInt |  | коефіцієнт перетворення в ескорти конвоїв | 536·1436·2304 |
| `economy` | `MinisterChangeDelay` | `..111...` | NonNegInt |  | затримка (днів) між змінами міністрів | 537·1437·2305 |
| `economy` | `MinisterChangeEventDelay` | `..111...` | NonNegInt |  | затримка (днів) зміни міністра після події | 538·1438·2306 |
| `economy` | `IdeaChangeDelay` | `..111...` | NonNegInt |  | затримка (днів) між змінами національних ідей | 539·1439·2307 |
| `economy` | `IdeaChangeEventDelay` | `..111...` | NonNegInt |  | затримка (днів) зміни ідеї після події | 540·1440·2308 |
| `economy` | `LeaderChangeDelay` | `..111...` | NonNegInt |  | затримка (днів) заміни командувача | 541·1441·2309 |
| `economy` | `ChangeIdeaDissent` | `..111...` | NonNegInt |  | приріст невдоволення при зміні ідеї | 542·1442·2310 |
| `economy` | `ChangeMinisterDissent` | `..111...` | NonNegInt |  | приріст невдоволення при зміні міністра | 543·1443·2311 |
| `economy` | `MinDissentRevolt` | `..111...` | NonNegInt |  | мінімальне невдоволення, за якого можливі повстання | 544·1444·2312 |
| `economy` | `DissentRevoltMultiplier` | `..111...` | NonNegDbl |  | множник появи повстанців від невдоволення | 545·1445·2313 |
| `economy` | `TpMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад (обладнання) до транспорту | 546·1446·2314 |
| `economy` | `SsMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до підводного човна | 547·1447·2315 |
| `economy` | `SsnMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до атомного підводного човна | 548·1448·2316 |
| `economy` | `DdMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до есмінця | 549·1449·2317 |
| `economy` | `ClMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до легкого крейсера | 550·1450·2318 |
| `economy` | `CaMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до важкого крейсера | 551·1451·2319 |
| `economy` | `BcMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до лінійного крейсера | 552·1452·2320 |
| `economy` | `BbMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до лінкора | 553·1453·2321 |
| `economy` | `CvlMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до ескортного (легкого) авіаносця | 554·1454·2322 |
| `economy` | `CvMaxAttach` | `...11...` | NonNegInt |  | максимум приєднаних бригад до ударного авіаносця | 555·1455·2323 |
| `economy` | `CanChangeIdeas` | `...11...` | Bool | 0..1 | гравець може вільно змінювати ідеї (0/1) | 556·1456·2324 |
| `combat` | `NoSupplyAttritionSeverity` | `..111...` | NonNegInt |  | виснаження від природних умов без постачання | 643·1534·2402 |
| `combat` | `NoSupplyMinimunAttrition` | `..111...` | NonNegInt |  | мінімальне виснаження без постачання | 644·1535·2403 |
| `combat` | `ShoreBombardmentModifier` | `11111...` | NonNegDbl |  | бойовий модифікатор берегового обстрілу | 650·1541·2409 |
| `combat` | `ShoreBombardmentCap` | `....1...` | NonNegDbl |  | верхня межа ефективності берегового обстрілу | 651·1542·2410 |
| `combat` | `SupplyProblemsModifier` | `11111...` | NonPosDbl |  | бойовий штраф від проблем із постачанням | 666·1557·2425 |
| `combat` | `RaderStationAaMultiplier` | `..111...` | NonNegDbl |  | комбінований модифікатор радара й ППО | 674·1565·2433 |
| `combat` | `AirOverstackingModifierAoD` | `..111...` | NonPosDbl2 |  | штраф перевантаження стеку — авіація (варіант AoD) | 677·1568·2436 |
| `combat` | `LandDelayBeforeOrders` | `..111...` | NonNegInt |  | затримка перед виконанням наказів — суходіл | 698·1589·2457 |
| `combat` | `NavalDelayBeforeOrders` | `..111...` | NonNegInt |  | затримка перед виконанням наказів — флот | 699·1590·2458 |
| `combat` | `AirDelayBeforeOrders` | `..111...` | NonNegInt |  | затримка перед виконанням наказів — авіація | 700·1591·2459 |
| `combat` | `DamageSyntheticOilBombing` | `..111...` | NonNegDbl |  | коефіцієнт шкоди заводам синтетичної нафти від стратегічних бомбардувань | 716·1607·2475 |
| `combat` | `AirOrgDamage` | `11111...` | NonNegDbl |  | шкода організованості (ORG) авіації | 737·1628·2496 |
| `combat` | `AirStrDamageOrg` | `11......` | NonNegDbl |  | шкода силі (STR) авіації залежно від ORG | 738·1629·2497 |
| `combat` | `AirStrDamage` | `11......` | NonNegDbl |  | шкода силі (STR) авіації | 739·1630·2498 |
| `combat` | `SubsOrgDamage` | `.1......` | NonNegInt |  | шкода ORG підводних човнів | 792·1683·2551 |
| `combat` | `SubsStrDamage` | `.1......` | NonNegInt |  | шкода STR підводних човнів | 793·1684·2552 |
| `combat` | `AirOrgDamageLandAoD` | `..111...` | NonNegDbl2 |  | шкода ORG авіації від суходолу | 795·1686·2554 |
| `combat` | `AirStrDamageLandAoD` | `..111...` | NonNegDbl2 |  | шкода STR авіації від суходолу | 796·1687·2555 |
| `combat` | `LandDamageArtilleryBombardment` | `..111...` | NonNegDbl |  | шкода сухопутним військам від артобстрілу | 797·1688·2556 |
| `combat` | `InfraDamageArtilleryBombardment` | `..111...` | NonNegDbl |  | шкода інфраструктурі від артобстрілу | 798·1689·2557 |
| `combat` | `IcDamageArtilleryBombardment` | `..111...` | NonNegDbl |  | шкода IC від артобстрілу | 799·1690·2558 |
| `combat` | `ResourcesDamageArtilleryBombardment` | `..111...` | NonNegDbl |  | шкода ресурсам від артобстрілу | 800·1691·2559 |
| `combat` | `PenaltyArtilleryBombardment` | `..111...` | NonPosDbl |  | штраф для військ, що ведуть артобстріл, коли їх атакують | 801·1692·2560 |
| `combat` | `ArtilleryStrDamage` | `..111...` | NonNegDbl2 |  | шкода STR від артобстрілу | 802·1693·2561 |
| `combat` | `ArtilleryOrgDamage` | `..111...` | NonNegDbl2 |  | шкода ORG від артобстрілу | 803·1694·2562 |
| `combat` | `LandStrDamageLandAoD` | `..111...` | NonNegDbl2 |  | шкода STR суходолу від суходолу | 804·1695·2563 |
| `combat` | `LandOrgDamageLand` | `..111...` | NonNegDbl2 |  | шкода ORG суходолу від суходолу | 805·1696·2564 |
| `combat` | `LandStrDamageAirAoD` | `..111...` | NonNegDbl2 |  | шкода STR суходолу від авіації | 806·1697·2565 |
| `combat` | `LandOrgDamageAirAoD` | `..111...` | NonNegDbl2 |  | шкода ORG суходолу від авіації | 807·1698·2566 |
| `combat` | `NavalStrDamageAirAoD` | `..111...` | NonNegDbl |  | шкода STR флоту від авіації | 808·1699·2567 |
| `combat` | `NavalOrgDamageAirAoD` | `..111...` | NonNegDbl |  | шкода ORG флоту від авіації | 809·1700·2568 |
| `combat` | `AirStrDamageAirAoD` | `..111...` | NonNegDbl |  | шкода STR авіації від авіації | 810·1701·2569 |
| `combat` | `AirOrgDamageAirAoD` | `..111...` | NonNegDbl |  | шкода ORG авіації від авіації | 811·1702·2570 |
| `combat` | `NavalStrDamageNavyAoD` | `..111...` | NonNegDbl |  | шкода STR флоту від флоту | 812·1703·2571 |
| `combat` | `NavalOrgDamageNavyAoD` | `..111...` | NonNegDbl |  | шкода ORG флоту від флоту | 813·1704·2572 |
| `combat` | `AirStrDamageNavyAoD` | `..111...` | NonNegDbl |  | шкода STR авіації від флоту | 814·1705·2573 |
| `combat` | `AirOrgDamageNavyAoD` | `..111...` | NonNegDbl |  | шкода ORG авіації від флоту | 815·1706·2574 |
| `combat` | `MilitaryExpenseAttritionModifier` | `..111...` | NonNegDbl |  | бойовий модифікатор при нестачі платні | 816·1707·2575 |
| `combat` | `NavalMinCombatTime` | `..111...` | NonNegDbl |  | мінімальна тривалість морського бою | 817·1708·2576 |
| `combat` | `LandMinCombatTime` | `..111...` | NonNegDbl |  | мінімальна тривалість сухопутного бою | 818·1709·2577 |
| `combat` | `AirMinCombatTime` | `..111...` | NonNegDbl |  | мінімальна тривалість повітряного бою | 819·1710·2578 |
| `combat` | `LandOverstackingModifier` | `..111...` | NonNegDblMinusOne |  | штраф перевантаження стеку — суходіл (допускає -1) | 820·1711·2579 |
| `combat` | `LandOrgLossMoving` | `..111...` | NonNegDbl |  | коефіцієнт втрати ORG під час руху — суходіл | 821·1712·2580 |
| `combat` | `AirOrgLossMoving` | `..111...` | NonNegDbl |  | коефіцієнт втрати ORG під час руху — авіація | 822·1713·2581 |
| `combat` | `NavalOrgLossMoving` | `..111...` | NonNegDbl |  | коефіцієнт втрати ORG під час руху — флот | 823·1714·2582 |
| `combat` | `SupplyDistanceSeverity` | `..111...` | NonNegDbl |  | коефіцієнт постачання на віддаль | 824·1715·2583 |
| `combat` | `SupplyBase` | `..111...` | NonNegDbl |  | базова ефективність постачання | 825·1716·2584 |
| `combat` | `LandOrgGain` | `..111...` | NonNegDbl |  | модифікатор відновлення ORG — суходіл | 826·1717·2585 |
| `combat` | `AirOrgGain` | `..111...` | NonNegDbl |  | модифікатор відновлення ORG — авіація | 827·1718·2586 |
| `combat` | `NavalOrgGain` | `..111...` | NonNegDbl |  | модифікатор відновлення ORG — флот | 828·1719·2587 |
| `combat` | `NukeManpowerDissent` | `..111...` | NonNegDbl |  | невдоволення від ядерного удару (людські ресурси) | 829·1720·2588 |
| `combat` | `NukeIcDissent` | `..111...` | NonNegDbl |  | невдоволення від ядерного удару (IC) | 830·1721·2589 |
| `combat` | `NukeTotalDissent` | `..111...` | NonNegDbl |  | невдоволення від ядерного удару (сумарне) | 831·1722·2590 |
| `combat` | `LandFriendlyOrgGain` | `..111...` | NonNegDbl |  | модифікатор відновлення ORG на дружній території — суходіл | 832·1723·2591 |
| `combat` | `AirLandStockModifier` | `..111...` | NonNegDbl |  | модифікатор запасів при ударах на перешкоджання (interdiction) | 833·1724·2592 |
| `combat` | `ScorchDamage` | `..111...` | NonNegDbl |  | шкода від наказу «випалена земля» | 834·1725·2593 |
| `combat` | `StandGroundDissent` | `..111...` | NonNegDbl |  | приріст невдоволення від наказу «стояти на смерть» | 835·1726·2594 |
| `combat` | `ScorchGroundBelligerence` | `..111...` | NonNegDbl |  | приріст войовничості від наказу «випалена земля» | 836·1727·2595 |
| `combat` | `DefaultLandStack` | `..111...` | PosInt |  | стандартний розмір стеку — суходіл | 837·1728·2596 |
| `combat` | `DefaultNavalStack` | `..111...` | PosInt |  | стандартний розмір стеку — флот | 838·1729·2597 |
| `combat` | `DefaultAirStack` | `..111...` | PosInt |  | стандартний розмір стеку — авіація | 839·1730·2598 |
| `combat` | `DefaultRocketStack` | `..111...` | PosInt |  | стандартний розмір стеку — ракети | 840·1731·2599 |
| `combat` | `FortDamageArtilleryBombardment` | `..111...` | NonNegDbl |  | шкода фортецям від артобстрілу | 841·1732·2600 |
| `combat` | `ArtilleryBombardmentOrgCost` | `..111...` | NonNegDbl |  | втрата ORG військами, що ведуть артобстріл | 842·1733·2601 |
| `combat` | `LandDamageFort` | `..111...` | NonNegDbl |  | коефіцієнт шкоди суходолу від фортеці | 843·1734·2602 |
| `combat` | `AirRebaseFactor` | `..111...` | NonNegDbl |  | коефіцієнт втрати ORG при зміні авіабази | 844·1735·2603 |
| `combat` | `AirMaxDisorganized` | `..111...` | NonPosInt |  | штраф при захопленні аеродрому (ціле ≤ 0) | 845·1736·2604 |
| `combat` | `AaInflictedStrDamage` | `..111...` | NonNegDbl0 |  | модифікатор шкоди STR від ППО | 846·1737·2605 |
| `combat` | `AaInflictedOrgDamage` | `..111...` | NonNegDbl0 |  | модифікатор шкоди ORG від ППО | 847·1738·2606 |
| `combat` | `AaInflictedFlyingDamage` | `..111...` | NonNegDbl0 |  | модифікатор шкоди від ППО по літаках, що пролітають | 848·1739·2607 |
| `combat` | `AaInflictedBombingDamage` | `..111...` | NonNegDbl0 |  | модифікатор шкоди від ППО по літаках, що бомбардують | 849·1740·2608 |
| `combat` | `HardAttackStrDamage` | `..111...` | NonNegDbl0 |  | модифікатор шкоди STR від hard-атаки | 850·1741·2609 |
| `combat` | `HardAttackOrgDamage` | `..111...` | NonNegDbl0 |  | модифікатор шкоди ORG від hard-атаки | 851·1742·2610 |
| `combat` | `ArmorSoftBreakthroughMin` | `..111...` | NonNegDbl |  | мінімальний коефіцієнт прориву танків проти soft-цілей | 852·1743·2611 |
| `combat` | `ArmorSoftBreakthroughMax` | `..111...` | NonNegDbl |  | максимальний коефіцієнт прориву танків проти soft-цілей | 853·1744·2612 |
| `combat` | `NavalCriticalHitChance` | `..111...` | NonNegInt |  | шанс критичного влучання флоту | 854·1745·2613 |
| `combat` | `NavalCriticalHitEffect` | `..111...` | NonNegInt |  | ефект критичного влучання флоту | 855·1746·2614 |
| `combat` | `LandFortDamage` | `..111...` | NonNegDbl |  | модифікатор шкоди фортецям | 856·1747·2615 |
| `combat` | `PortAttackSurpriseChanceDay` | `..111...` | NonNegInt |  | шанс раптовості атаки на порт удень | 857·1748·2616 |
| `combat` | `PortAttackSurpriseChanceNight` | `..111...` | NonNegInt |  | шанс раптовості атаки на порт уночі | 858·1749·2617 |
| `combat` | `PortAttackSurpriseModifier` | `..111...` | NonNegDbl |  | модифікатор раптовості атаки на порт | 859·1750·2618 |
| `combat` | `RadarAntiSurpriseChance` | `..111...` | NonNegDbl |  | зниження шансу раптовості завдяки радару | 860·1751·2619 |
| `combat` | `RadarAntiSurpriseModifier` | `..111...` | NonNegDbl |  | зниження ефекту раптовості завдяки радару | 861·1752·2620 |
| `combat` | `CounterAttackStrDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «контратака»: модифікатор STR оборонця | 862·1753·2621 |
| `combat` | `CounterAttackOrgDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «контратака»: модифікатор ORG оборонця | 863·1754·2622 |
| `combat` | `CounterAttackStrAttackerAoD` | `....1...` | NonNegDbl2 |  | бойова подія «контратака»: модифікатор STR атакуючого | 864·1755·2623 |
| `combat` | `CounterAttackOrgAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «контратака»: модифікатор ORG атакуючого | 865·1756·2624 |
| `combat` | `AssaultStrDefenderAoD` | `....1...` | NonNegDbl2 |  | бойова подія «штурм»: модифікатор STR оборонця | 866·1757·2625 |
| `combat` | `AssaultOrgDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «штурм»: модифікатор ORG оборонця | 867·1758·2626 |
| `combat` | `AssaultStrAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «штурм»: модифікатор STR атакуючого | 868·1759·2627 |
| `combat` | `AssaultOrgAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «штурм»: модифікатор ORG атакуючого | 869·1760·2628 |
| `combat` | `EncirclementStrDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «оточення»: модифікатор STR оборонця | 870·1761·2629 |
| `combat` | `EncirclementOrgDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «оточення»: модифікатор ORG оборонця | 871·1762·2630 |
| `combat` | `EncirclementStrAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «оточення»: модифікатор STR атакуючого | 872·1763·2631 |
| `combat` | `EncirclementOrgAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «оточення»: модифікатор ORG атакуючого | 873·1764·2632 |
| `combat` | `AmbushStrDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «засідка»: модифікатор STR оборонця | 874·1765·2633 |
| `combat` | `AmbushOrgDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «засідка»: модифікатор ORG оборонця | 875·1766·2634 |
| `combat` | `AmbushStrAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «засідка»: модифікатор STR атакуючого | 876·1767·2635 |
| `combat` | `AmbushOrgAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «засідка»: модифікатор ORG атакуючого | 877·1768·2636 |
| `combat` | `DelayStrDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «затримка»: модифікатор STR оборонця | 878·1769·2637 |
| `combat` | `DelayOrgDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «затримка»: модифікатор ORG оборонця | 879·1770·2638 |
| `combat` | `DelayStrAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «затримка»: модифікатор STR атакуючого | 880·1771·2639 |
| `combat` | `DelayOrgAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «затримка»: модифікатор ORG атакуючого | 881·1772·2640 |
| `combat` | `TacticalWithdrawStrDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «тактичний відхід»: модифікатор STR оборонця | 882·1773·2641 |
| `combat` | `TacticalWithdrawOrgDefenderAoD` | `....1...` | NonNegDbl2 |  | бойова подія «тактичний відхід»: модифікатор ORG оборонця | 883·1774·2642 |
| `combat` | `TacticalWithdrawStrAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «тактичний відхід»: модифікатор STR атакуючого | 884·1775·2643 |
| `combat` | `TacticalWithdrawOrgAttackerAoD` | `....1...` | NonNegDbl2 |  | бойова подія «тактичний відхід»: модифікатор ORG атакуючого | 885·1776·2644 |
| `combat` | `BreakthroughStrDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «прорив»: модифікатор STR оборонця | 886·1777·2645 |
| `combat` | `BreakthroughOrgDefenderAoD` | `....1...` | NonNegDbl |  | бойова подія «прорив»: модифікатор ORG оборонця | 887·1778·2646 |
| `combat` | `BreakthroughStrAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «прорив»: модифікатор STR атакуючого | 888·1779·2647 |
| `combat` | `BreakthroughOrgAttackerAoD` | `....1...` | NonNegDbl |  | бойова подія «прорив»: модифікатор ORG атакуючого | 889·1780·2648 |
| `research` | `PostHistoricalDateModifierAoD` | `..111...` | NonNegDbl5 |  | бонус дослідження після історичної дати, варіант AoD | 1157·2038·2906 |
| `research` | `TechSpeedModifier` | `..111...` | NonNegDbl |  | загальний модифікатор швидкості досліджень | 1158·2039·2907 |
| `research` | `PreHistoricalPenaltyLimit` | `..111...` | NonNegDbl |  | нижня межа штрафу до історичної дати | 1159·2040·2908 |
| `research` | `PostHistoricalBonusLimit` | `..111...` | NonNegDbl |  | верхня межа бонусу після історичної дати | 1160·2041·2909 |
| `research` | `MaxActiveTechTeamsAoD` | `...11...` | RangedInt | 1..20 | максимум активних дослідницьких слотів (1..20) | 1161·2042·2910 |
| `research` | `RequiredIcEachTechTeamAoD` | `...11...` | PosInt |  | IC, потрібний на кожен дослідницький слот | 1162·2043·2911 |
| `research` | `MaximumRandomModifier` | `....1...` | NonNegDbl0 |  | максимальний випадковий модифікатор | 1163·2044·2912 |

---

## 6. Семантика: як редактор використовує ці дані

### 6.1 Зв'язок `misc.txt` ↔ інші файли

| Слот `misc.txt` | Вплив | Джерело |
|---|---|---|
| `mod`: `UseNewMinisterFilesFormat` | розкладка CSV міністрів (повні роки + `End Year`) | `Models/Ministers.cs:1377-1452`, `Models/Ministers.cs:1663-1726` |
| `mod`: `EnableRetirementYearMinisters` (H3, H4) | колонка `Retirement Year` у CSV міністрів | `Models/Ministers.cs:1455-1473`, `Models/Ministers.cs:1656-1712` |
| `mod`: `EnableRetirementYearLeaders` (H3, H4) | колонка `Retirement Year` у CSV командувачів | `Models/Leaders.cs:600-604`, `Models/Leaders.cs:792-809`, `Models/Leaders.cs:939-958` |
| `map`: `MapNumber` | 0 — стандартна карта; N > 0 — дані провінцій, назви провінцій і їх зображення беруться з `map\Map_N` (`map\Map_N\gfx\ill_prov_<id>.bmp`); «DH Full» = DH і `MapNumber > 0` | `Models/Game.cs:750-821`, `Models/Game.cs:890-893` |
| `combat`: `CombatMode` (H3, H4) | 1 = новий режим бою DH 1.03: захисні характеристики моделей юнітів трактуються як «вразливості» (vulnerability) | `Forms/UnitEditorForm.cs:4053-4060`, `Models/Misc.cs:162-173` |
| `research`: `BlueprintBonus`, `PreHistoricalDateModifier`, `PostHistoricalDateModifierDh` | розрахунок тривалості дослідження (див. 6.2) | `Models/Research.cs:141`, `Models/Research.cs:166-241`, `Models/Research.cs:284-289` |
| `economy`: `TpMaxAttach…CvMaxAttach` (лише AoD 1.07+) | ліміт приєднаних «бригад» до кораблів | `Models/Unit.cs:1578-1607` |

Якщо `misc.txt` не прочитано, властивості редактора повертають запасні значення (не ігрові дефолти!):
прапорці — `false`, `MapNumber` — 0, `BlueprintBonus` та модифікатори досліджень — 1, `DdMaxAttach` 1,
`ClMaxAttach` 2, `CaMaxAttach` 3, `BcMaxAttach` 4, `BbMaxAttach` 5, `CvlMaxAttach`/`CvMaxAttach` 1, решта
`…MaxAttach` 0 (`Models/Misc.cs:24-328`). Тому редактор завжди читає `misc.txt` **перед** CSV командувачів
і міністрів (`Forms/LeaderEditorForm.cs:168-183`, `Forms/MinisterEditorForm.cs:166-181`). Власна реалізація
має дотримуватися того самого порядку завантаження.

### 6.2 Дослідження (DH-гілка, коротко)

З `Models/Research.cs` (поза основною областю, для контексту):

* базовий денний прогрес у DH: `(9.0 + 1.5·(s + 5.62·t)) / d`, де `s` — навичка команди з бонусом
  спеціалізації, `t` — розмір ракетного полігона / ядерного реактора для відповідних спеціальностей,
  `d` — складність (`Models/Research.cs:96-123`);
* за наявності креслення множиться на `BlueprintBonus` (`Models/Research.cs:139-142`);
* до історичної дати — штраф `PreHistoricalDateModifier` за день (≤ 0), з нижньою межею множника 0.1 у
  DH (в AoD — `PreHistoricalPenaltyLimit`) (`Models/Research.cs:166-180`);
* після історичної дати в DH бонус `PostHistoricalDateModifierDh` за день починає діяти лише через 360
  днів, не застосовується до ракетних і ядерних спеціальностей, і обмежений зверху значенням
  `BlueprintBonus` (`Models/Research.cs:236-289`).

### 6.3 Командувачі й міністри в `misc.txt`

Слоти, що стосуються цієї області (DH):

* командувачі: `LeaderXpGainFactor`, `ChanceGetTerrainTrait`, `ChanceGetEventTrait`, `BonusTerrainTrait`,
  `BonusSimilarTerrainTrait`, `BonusEventTrait`, `BonusLeaderSkillPointLand/Air/Naval` (H3+),
  `ChanceLeaderDying`, `Land/Air/NavalLeaderCommandLimitRank0..3`, `HqCommandLimitFactor`,
  `LogisticsWizardEseBonus`, `MovementBonus(Similar)TerrainTrait`, `FleetPositioningLeaderSkill` (H3+),
  `EnableRetirementYearLeaders` (H3+);
* міністри: `UseMinisterPersonalityReplacing`, `MinisterBonuses`, `AllowChangeHosHog`,
  `UseNewMinisterFilesFormat`, `EnableRetirementYearMinisters` (H3+).
  (`MinisterChangeDelay`, `LeaderChangeDelay` тощо — лише AoD.)

---

## 7. Відмінності DH від HoI2/AoD (зведення)

1. **Списки файлів** `db\leaders.txt` / `db\ministers.txt` (лише DH): якщо є — читаються тільки
   перелічені CSV; якщо немає — скан тек як у HoI2/AoD (`Models/Leaders.cs:452-459`,
   `Models/Ministers.cs:1224-1231`). Редактор може створити такий список при збереженні (§3.7).
2. **Тека модів** — `<гра>\Mods\<ім'я>` (у HoI2/AoD — `<гра>\<ім'я>`) (`Models/Game.cs:842-848`).
3. **CSV командувачів**: необов'язкова колонка `Retirement Year` (за `EnableRetirementYearLeaders`, є лише
   в `misc.txt` DH 1.03+). Сам формат інших колонок однаковий для всіх ігор.
4. **CSV міністрів**: новий формат із повними роками та `End Year` (`UseNewMinisterFilesFormat`, слот є в
   усіх версіях DH) і `Retirement Year` (`EnableRetirementYearMinisters`, DH 1.03+). У HoI2/AoD — лише
   старий формат (`Pool` = рік − 1900), бо цих слотів у їхньому `misc.txt` немає.
5. **Риси міністрів**: DH — `db\ministers\minister_personalities.txt` (`minister = { trait … position … }`),
   допускає `position = generic`; AoD — `minister_modifiers.txt`; HoI2 — вбудована таблиця з 80 рис
   (`Models/Ministers.cs:787-813`). Таблиця одруківок і винятки регістру містять DH-специфічні рядки
   (§4.6).
6. **`misc.txt`**: DH має 8 додаткових секцій (`intelligence`, `diplomacy`, `mission`, `country`, `trade`,
   `ai`, `mod`, `map`) і власні варіанти багатьох слотів (`…Dh`); кількість чисел залежить від версії DH
   (481 / 567 / 639). Слоти DH 1.03 і 1.04 відрізняються ще й вилученням (напр. `UseAttackEfficiencyCombatModifier`
   — лише 1.03; `AirStrDamageLandOrg` замінено на `AirStrDamageLandOrgDh104` у 1.04; `NewDowRules` (1.02) →
   `NewDowRules2` (1.03+); `InGameLossesLogging` (1.02) → `InGameLossLogging2` (1.03+); `HowEffectiveGroundDef`,
   `ChanceAvoidDefencesLeft`, `ChanceAvoidNoDefences` є в 1.02, але не в 1.03+, де їх замінюють
   `Land/Air/Naval…` варіанти).
7. **Формат чисел** при записі: `MonthlyNationalismReduction` у DH — 4 знаки після коми; типи
   `…Dh103Full…` — 2 знаки в певних інтервалах (§5.6).
8. **Набір тегів** у редакторі для DH такий самий, як для HoI2 (`Models/Countries.cs:1039-1050`).

---

## 8. Відкриті питання

1. Чи вимагає сам рушій DH точної кількості чисел у секціях `misc.txt`, чи терпить зайві/відсутні (і що
   тоді підставляє)? Редактор вимагає точної кількості.
2. Чи має DH 1.05 (і пізніші бети) додаткові слоти в `misc.txt`? Редактор зводить усі версії ≥ 1.04 до
   `Dh104` (`Models/Misc.cs:4888-4891`).
3. Одиниці виміру більшості слотів `misc.txt` (дні чи години: `DelayAfterCombatEnds`,
   `Duration…`, `CombatEventDuration`, `ReturnRebelliousProvince` тощо; частки чи відсотки) — редактор їх
   не визначає.
4. Значення «типових» варіантів у переліках, які редактор позначає лише як `Type0..TypeN`:
   `ConvoySystemOptionsAllied`, `FilterReleaseCountries`, `InGameLossLogging2`, `BuildingsBuildableOnlyProvinces`.
5. Що означають від'ємні/нульові значення `ConvoyEscortsModel`, `ConvoyTransportsModel`,
   `ConvoyEscortCarrierModel` (тип `NonPosInt`), і сентинели −1/−2/−3 (`AiEventsActionSelectionRules`,
   `…MinusOne`).
6. Семантика `position = generic` у `minister_personalities.txt` і роль поля `id` (чи посилаються на нього
   CSV/події/сценарії). Редактор ігнорує обидва.
7. Чи обов'язковий у грі рядок заголовка CSV командувачів (редактор завжди пропускає рядок 1) і рядок
   `;Replacements` у CSV міністрів; чи читає гра маркер `x` як обов'язковий.
8. Діапазони `Skill`, `MaxSkill`, `Experience`, `Loyalty` командувачів у грі (UI редактора явних меж не
   задає; ймовірно стандартні 0..100 елемента WinForms **(припущення)**).
9. Значення року `1990` (запасне для `Rank N Year`) — чи це «ніколи» в логіці гри; поведінка
   `Retirement Year`.
10. Чи підтримує гра кілька країн в одному CSV командувачів і підтеки у `db\leaders.txt`.
11. Чи глобальна унікальність ID командувачів/міністрів вимагається грою, чи лише в межах країни.
12. Як гра поводиться з `EnableRetirementYearMinisters = 1` при `UseNewMinisterFilesFormat = 0`.
13. Призначення `db\randomleaders.csv` у DH і чи має він заголовок (редактор заголовка не очікує).
14. Кодування: чи приймає DH UTF-8 з BOM для цих файлів (редактор — так, через .NET), чи лише 1252.

---

## Додаток А. Вбудовані риси міністрів HoI2/DDA

Використовуються лише для `GameType.HeartsOfIron2` (`Models/Ministers.cs:818-852`); для DH дані йдуть з
`minister_personalities.txt`, але рядки ванільних рис DH, імовірно, збігаються з цими
**(припущення)**. Індекс = позиція в масиві; «Посади» — у яких таблицях посад риса присутня
(`Models/Ministers.cs:343-515`): HoS — глава держави, HoG — глава уряду, FM — закордонні справи,
MoA — озброєння, MoS — безпека, HMI — військова розвідка, CoS — начальник штабу, CoA/CoN/CoAF —
головнокомандувачі армії/флоту/авіації. Колонка «Ministers.cs» — рядок у `PersonalityStringsHoI2` /
`PersonalityNamesHoI2`.

| # | Рядок у CSV (`personality string`) | Ключ локалізації | Посади | Ministers.cs |
|---|---|---|---|---|
| 0 | `Undistinguished Suit` | `NPERSONALITY_UNDISTINGUISHED_SUIT` | HoS, HoG, FM, MoA, MoS, HMI, CoS, CoA, CoN, CoAF | 171/258 |
| 1 | `Autocratic Charmer` | `NPERSONALITY_AUTOCRATIC_CHARMER` | HoS | 172/259 |
| 2 | `Barking Buffoon` | `NPERSONALITY_BARKING_BUFFOON` | HoS | 173/260 |
| 3 | `Benevolent Gentleman` | `NPERSONALITY_BENEVOLENT_GENTLEMAN` | HoS | 174/261 |
| 4 | `Die-hard Reformer` | `NPERSONALITY_DIE_HARD_REFORMER` | HoS | 175/262 |
| 5 | `Insignificant Layman` | `NPERSONALITY_INSIGNIFICANT_LAYMAN` | HoS | 176/263 |
| 6 | `Pig-headed Isolationist` | `NPERSONALITY_PIG_HEADED_ISOLATIONIST` | HoS | 177/264 |
| 7 | `Popular Figurehead` | `NPERSONALITY_POPULAR_FIGUREHEAD` | HoS | 178/265 |
| 8 | `Powerhungry Demagogue` | `NPERSONALITY_POWER_HUNGRY_DEMAGOGUE` | HoS | 179/266 |
| 9 | `Resigned Generalissimo` | `NPERSONALITY_RESIGNED_GENERALISSIMO` | HoS | 180/267 |
| 10 | `Ruthless Powermonger` | `NPERSONALITY_RUTHLESS_POWERMONGER` | HoS | 181/268 |
| 11 | `Stern Imperialist` | `NPERSONALITY_STERN_IMPERIALIST` | HoS | 182/269 |
| 12 | `Weary Stiffneck` | `NPERSONALITY_WEARY_STIFF_NECK` | HoS | 183/270 |
| 13 | `Ambitious Union Boss` | `NPERSONALITY_AMBITIOUS_UNION_BOSS` | HoG | 184/271 |
| 14 | `Backroom Backstabber` | `NPERSONALITY_BACKROOM_BACKSTABBER` | HoG | 185/272 |
| 15 | `Corporate Suit` | `NPERSONALITY_CORPORATE_SUIT` | HoG | 186/273 |
| 16 | `Flamboyant Tough Guy` | `NPERSONALITY_FLAMBOYANT_TOUGH_GUY` | HoG | 187/274 |
| 17 | `Happy Amateur` | `NPERSONALITY_HAPPY_AMATEUR` | HoG | 188/275 |
| 18 | `Naive Optimist` | `NPERSONALITY_NAIVE_OPTIMIST` | HoG | 189/276 |
| 19 | `Old Admiral` | `NPERSONALITY_OLD_ADMIRAL` | HoG | 190/277 |
| 20 | `Old Air Marshal` | `NPERSONALITY_OLD_AIR_MARSHAL` | HoG | 191/278 |
| 21 | `Old General` | `NPERSONALITY_OLD_GENERAL` | HoG | 192/279 |
| 22 | `Political Protege` | `NPERSONALITY_POLITICAL_PROTEGE` | HoG | 193/280 |
| 23 | `Silent Workhorse` | `NPERSONALITY_SILENT_WORKHORSE` | HoG | 194/281 |
| 24 | `Smiling Oilman` | `NPERSONALITY_SMILING_OILMAN` | HoG | 195/282 |
| 25 | `Apologetic Clerk` | `NPERSONALITY_APOLOGETIC_CLERK` | FM | 196/283 |
| 26 | `Biased Intellectual` | `NPERSONALITY_BIASED_INTELLECTUAL` | FM | 197/284 |
| 27 | `Ideological Crusader` | `NPERSONALITY_IDEOLOGICAL_CRUSADER` | FM | 198/285 |
| 28 | `Iron Fisted Brute` | `NPERSONALITY_IRON_FISTED_BRUTE` | FM | 199/286 |
| 29 | `General Staffer` | `NPERSONALITY_GENERAL_STAFFER` | FM | 200/287 |
| 30 | `Great Compromiser` | `NPERSONALITY_GREAT_COMPROMISER` | FM | 201/288 |
| 31 | `The Cloak N Dagger Schemer` | `NPERSONALITY_THE_CLOAK_N_DAGGER_SCHEMER` | FM | 202/289 |
| 32 | `Administrative Genius` | `NPERSONALITY_ADMINISTRATIVE_GENIUS` | MoA | 203/290 |
| 33 | `Air Superiority Proponent` | `NPERSONALITY_AIR_SUPERIORITY_PROPONENT` | MoA | 204/291 |
| 34 | `Battle Fleet Proponent` | `NPERSONALITY_BATTLE_FLEET_PROPONENT` | MoA | 205/292 |
| 35 | `Resource Industrialist` | `NPERSONALITY_RESOURCE_INDUSTRIALIST` | MoA | 206/293 |
| 36 | `Laissez-Faire Capitalist` | `NPERSONALITY_LAISSEZ_FAIRES_CAPITALIST` | MoA | 207/294 |
| 37 | `Theoretical Scientist` | `NPERSONALITY_THEORETICAL_SCIENTIST` | MoA | 208/295 |
| 38 | `Military Entrepreneur` | `NPERSONALITY_MILITARY_ENTREPRENEUR` | MoA | 209/296 |
| 39 | `Submarine Proponent` | `NPERSONALITY_SUBMARINE_PROPONENT` | MoA | 210/297 |
| 40 | `Tank Proponent` | `NPERSONALITY_TANK_PROPONENT` | MoA | 211/298 |
| 41 | `Infantry Proponent` | `NPERSONALITY_INFANTRY_PROPONENT` | MoA | 212/299 |
| 42 | `Corrupt Kleptocrat` | `NPERSONALITY_CORRUPT_KLEPTOCRAT` | MoA | 213/300 |
| 43 | `Air to Ground Proponent` | `NPERSONALITY_AIR_TO_GROUND_PROPONENT` | MoA | 214/301 |
| 44 | `Air to Sea Proponent` | `NPERSONALITY_AIR_TO_SEA_PROPONENT` | MoA | 215/302 |
| 45 | `Strategic Air Proponent` | `NPERSONALITY_STRATEGIC_AIR_PROPONENT` | MoA | 216/303 |
| 46 | `Back Stabber` | `NPERSONALITY_BACK_STABBER` | MoS | 217/304 |
| 47 | `Compassionate Gentleman` | `NPERSONALITY_COMPASSIONATE_GENTLEMAN` | MoS | 218/305 |
| 48 | `Crime Fighter` | `NPERSONALITY_CRIME_FIGHTER` | MoS | 219/306 |
| 49 | `Crooked Kleptocrat` | `NPERSONALITY_CROOKED_KLEPTOCRAT` | MoS | 220/307 |
| 50 | `Efficient Sociopath` | `NPERSONALITY_EFFICIENT_SOCIOPATH` | MoS | 221/308 |
| 51 | `Man of the People` | `NPERSONALITY_MAN_OF_THE_PEOPLE` | MoS | 222/309 |
| 52 | `Prince of Terror` | `NPERSONALITY_PRINCE_OF_TERROR` | MoS | 223/310 |
| 53 | `Silent Lawyer` | `NPERSONALITY_SILENT_LAWYER` | MoS | 224/311 |
| 54 | `Dismal Enigma` | `NPERSONALITY_DISMAL_ENIGMA` | HMI | 225/312 |
| 55 | `Industrial Specialist` | `NPERSONALITY_INDUSTRIAL_SPECIALIST` | HMI | 226/313 |
| 56 | `Logistics Specialist` | `NPERSONALITY_LOGISTICS_SPECIALIST` | HMI | 227/314 |
| 57 | `Naval Intelligence Specialist` | `NPERSONALITY_NAVAL_INTELLIGENCE_SPECIALIST` | HMI | 228/315 |
| 58 | `Political Specialist` | `NPERSONALITY_POLITICAL_SPECIALIST` | HMI | 229/316 |
| 59 | `Technical Specialist` | `NPERSONALITY_TECHNICAL_SPECIALIST` | HMI | 230/317 |
| 60 | `School of Defence` | `NPERSONALITY_SCHOOL_OF_DEFENCE` | CoS | 231/318 |
| 61 | `School of Fire Support` | `NPERSONALITY_SCHOOL_OF_FIRE_SUPPORT` | CoS | 232/319 |
| 62 | `School of Mass Combat` | `NPERSONALITY_SCHOOL_OF_MASS_COMBAT` | CoS | 233/320 |
| 63 | `School of Manoeuvre` | `NPERSONALITY_SCHOOL_OF_MANOEUVRE` | CoS | 234/321 |
| 64 | `School of Psychology` | `NPERSONALITY_SCHOOL_OF_PSYCHOLOGY` | CoS | 235/322 |
| 65 | `Armoured Spearhead Doctrine` | `NPERSONALITY_ARMOURED_SPEARHEAD_DOCTRINE` | CoA | 236/323 |
| 66 | `Decisive Battle Doctrine` | `NPERSONALITY_DECISIVE_BATTLE_DOCTRINE` | CoA | 237/324 |
| 67 | `Elastic Defence Doctrine` | `NPERSONALITY_ELASTIC_DEFENCE_DOCTRINE` | CoA | 238/325 |
| 68 | `Guns and Butter Doctrine` | `NPERSONALITY_GUNS_AND_BUTTER_DOCTRINE` | CoA | 239/326 |
| 69 | `Static Defence Doctrine` | `NPERSONALITY_STATIC_DEFENCE_DOCTRINE` | CoA | 240/327 |
| 70 | `Base Control Doctrine` | `NPERSONALITY_BASE_CONTROL_DOCTRINE` | CoN | 241/328 |
| 71 | `Decisive Naval Battle Doctrine` | `NPERSONALITY_DECISIVE_BATTLE_DOCTRINE2` | CoN | 242/329 |
| 72 | `Indirect Approach Doctrine` | `NPERSONALITY_INDIRECT_APPROACH_DOCTRINE` | CoN | 243/330 |
| 73 | `Open Seas Doctrine` | `NPERSONALITY_OPEN_SEAS_DOCTRINE` | CoN | 244/331 |
| 74 | `Power Projection Doctrine` | `NPERSONALITY_POWER_PROJECTION_DOCTRINE` | CoN | 245/332 |
| 75 | `Air Superiority Doctrine` | `NPERSONALITY_AIR_SUPERIORITY_DOCTRINE` | CoAF | 246/333 |
| 76 | `Army Aviation Doctrine` | `NPERSONALITY_ARMY_AVIATION_DOCTRINE` | CoAF | 247/334 |
| 77 | `Carpet Bombing Doctrine` | `NPERSONALITY_CARPET_BOMBING_DOCTRINE` | CoAF | 248/335 |
| 78 | `Naval Aviation Doctrine` | `NPERSONALITY_NAVAL_AVIATION_DOCTRINE` | CoAF | 249/336 |
| 79 | `Vertical Envelopment Doctrine` | `NPERSONALITY_VERTICAL_ENVELOPMENT_DOCTRINE` | CoAF | 250/337 |
