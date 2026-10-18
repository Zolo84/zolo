# Специфікація: сценарії (`scenarios/*.eug`, `*.inc`) і збереження гри

Область: стартовий стан гри Darkest Hour (Europa Engine, лінія HoI2) — заголовок сценарію, глобальні дані
(союзи, війни, договори, прапорці, погода), налаштування провінцій, повний опис країн (території,
дипломатія, політика, технології, кабінет, армії/флоти/авіація, виробничі черги), а також ключові слова, що
з'являються лише у файлах збереження.

Джерело фактів — "Alternative HoI2 Editor" (C#, `/home/user/pylypenko99/hoi2editor/HoI2Editor`). Код
**не** копіюється; нижче — опис формату власними словами. Посилання `Файл.cs:рядок` дані відносно
`HoI2Editor/`. Усе, що виведено логічно, а не прочитано прямо в коді, позначено **(припущення)**.
Псевдоструктури в цьому документі — власні.

Прочитані повністю: `Parsers/ScenarioParser.cs`, `Models/Scenario.cs`, `Models/Scenarios.cs`,
`Models/GameDate.cs`, `Writers/ScenarioWriter.cs`, `Models/Countries.cs`, `Parsers/TextLexer.cs`,
`Parsers/Token.cs`. Вибірково: `Models/Game.cs`, `Models/Units.cs`, `Models/Unit.cs`, `Models/Config.cs`,
`Utilities/DoubleHelper.cs`, `Utilities/ObjectHelper.cs`, `Utilities/BoolHelper.cs`,
`Forms/ScenarioEditorForm.cs`, `Forms/MainForm.cs`, `Controllers/ScenarioEditorController.cs`.

Важливо: редактор — це **не** гра. Він розбирає підмножину ключових слів, яку бачив у файлах HoI2/AoD/DH, і
пише власну «канонічну» форму. Там, де поведінка редактора явно відрізняється від здорового глузду (баги
запису), це винесено в §9 — такі місця **не можна** відтворювати як «формат гри».

---

## 1. Огляд

* Сценарій — це текстовий файл `*.eug` у теці `scenarios` (`Models/Game.cs:308`,
  `Forms/ScenarioEditorForm.cs:679`). Він містить заголовок (`header`), глобальні дані (`globaldata`) і
  список `include = "..."` на допоміжні файли `*.inc`, де лежать провінції й країни.
* Синтаксис — звичайний Paradox-скрипт: `ключ = значення`, `ключ = { ... }`, голі списки чисел/тегів у
  `{ }`, рядки в `"..."`, коментар `#` до кінця рядка (`Parsers/TextLexer.cs:213-329`).
* Ключові слова **нечутливі до регістру** (кожне ключове слово переводиться в нижній регістр перед
  порівнянням, напр. `Parsers/ScenarioParser.cs:76`, `:448`, `:832`); теги країн нормалізуються у **верхній**
  регістр (`Parsers/ScenarioParser.cs:601`, `:9367`, `:9999`).
* `include` обробляється рекурсивно в той самий об'єкт сценарію — фактично текстова підстановка на рівні
  верхнього блоку (`Parsers/ScenarioParser.cs:220-252`).
* Блоки `country` з однаковим `tag` зливаються в один об'єкт; блоки `province` з однаковим `id` зливаються
  поле-за-полем (§5.3).
* Дати — блоки `{ year = … month = … day = … hour = … }`; **день нумерується з 0**, місяць — назвою
  (`january`…`december`) або числом **з 0**; календар 360-денний (12×30) (§5.1).
* Ідентифікатори об'єктів (союзи, війни, договори, юніти, дивізії, міністри, черги виробництва, погодні
  фронти) — пари `{ type = N id = M }` (§5.2).
* Файл збереження використовує той самий парсер; додаткові ключі (`history`, `sleepevent`, `save_date`,
  `queued_events`, `flags`, поля руху/бою юнітів, виробничі черги) описано там, де вони трапляються (§5.6).
* DH-специфічні ключі: `name`/`flag_ext` у блоках країни та головних країн, `ai_settings`,
  `claimedprovinces`, `name` у провінції та союзі, `tz`/`ac`/`org` у місіях (§7).

---

## 2. Файли та розташування

### 2.1 Корені пошуку (ваніль / мод / «експорт»)

Будь-який шлях усередині скрипта (`include`, `panel`, `ai`, `picture`) — **відносний до кореня гри**, а
не до поточного файлу. Розв'язання шляху на читання (`Models/Game.cs:585-606`):

1. якщо активна «тека експорту» і файл/тека там існує → `<export>\<шлях>`;
2. інакше, якщо активний мод і файл/тека існує → `<mod>\<шлях>`;
3. інакше → `<game>\<шлях>` (`Models/Game.cs:519-522`).

Розташування мод-теки:

| Гра | Мод-тека | Тека експорту | Джерело |
|---|---|---|---|
| **DH** | `<game>\Mods\<ModName>` | `<game>\Mods\<ExportName>` | `Models/Game.cs:303`, `:842-844`, `:872-874` |
| HoI2 / AoD | `<game>\<ModName>` | `<game>\<ExportName>` | `Models/Game.cs:846-848`, `:876-878` |

Запис іде в найвищий активний корінь: експорт → мод → ваніль (`Models/Game.cs:623-635`). Перед записом
редактор створює теку `scenarios` та теку include, якщо їх нема (`Models/Scenarios.cs:466-471`, `:497-502`).

Тип гри визначається за наявністю виконуваного файлу: `Darkest Hour.exe` → DH, `Hoi2.exe` або
`DoomsdayJP.exe` → HoI2, `AODGame.exe` → AoD (`Models/Game.cs:907-940`). Версія DH читається з рядка
`Darkest Hour v X.XX` у самому `.exe` і кодується як ціле `X*100 + XX` (напр. 1.04 → `104`); якщо рядка
нема — `102` (`Models/Game.cs:1035-1051`). Версія потрібна для гілок «DH ≥ 1.03» і «DH ≥ 1.04» (§7).

«DH Full» — це DH, у якого `Misc.MapNumber > 0` (перше поле секції `map` у `db\misc.txt`)
(`Models/Game.cs:889-892`, `Models/Misc.cs:328`). Деякі правила запису `bases.inc` відрізняються для DH
Full (§4.14, §7).

### 2.2 Перелік файлів сценарію

| Файл | Де | Що містить | Джерело |
|---|---|---|---|
| `scenarios\<ім'я>.eug` | тека `scenarios` | верхній файл: `name`, `panel`, `header`, `globaldata`, `history`, `sleepevent`, `save_date`, `map`, `event`, `include` | `Writers/ScenarioWriter.cs:22-37` |
| `scenarios\<тека>\<tag>.inc` | тека include | один блок `country` (+ опційно блоки `province` для провінцій, контрольованих цією країною) | `Writers/ScenarioWriter.cs:1606-1648` |
| `scenarios\<тека>\bases.inc` | тека include | провінції: військово-морські й авіабази (HoI2/AoD/DH без Full) або повні описи провінцій (DH Full) | `Models/Game.cs:478`, `Writers/ScenarioWriter.cs:667-862` |
| `scenarios\<тека>\bases_DOD.inc` | тека include | провінції: лише `ic` та `infra` (у коментарі редактора — «DH Full, сценарій 1933 р.») | `Models/Game.cs:481-483`, `Writers/ScenarioWriter.cs:869-890` |
| `scenarios\<тека>\depots.inc` | тека include | провінції: запаси ресурсів (`*pool`) | `Models/Game.cs:488`, `Writers/ScenarioWriter.cs:897-929` |
| `scenarios\<тека>\vp.inc` | тека include | провінції: переможні очки (`points`) | `Models/Game.cs:493`, `Writers/ScenarioWriter.cs:936-958` |
| `scenarios\data\...` | — | зображення панелей сценаріїв (`panel`), стартова тека для вибору include-теки | `Models/Game.cs:313`, `Forms/ScenarioEditorForm.cs:831`, `:850` |
| `ai\*.ai` | тека `ai` | AI-файли країн (ключ `ai`) | `Models/Game.cs:218`, `Forms/ScenarioEditorForm.cs:6757` |
| `scenario_text.csv` | тека `config` (припущення щодо теки) | рядки локалізації, що їх редактор додає для назв сценарію/союзів/провінцій | `Models/Game.cs:418`, `Controllers/ScenarioEditorController.cs:3133` |

Порівняння імен спеціальних include-файлів — **нечутливе до регістру** (`bases_DOD.inc` == `bases_dod.inc`)
(`Parsers/ScenarioParser.cs:10157-10181`), але при записі редактор використовує саме написання
`bases_DOD.inc` (`Models/Game.cs:483`).

### 2.3 Тека include і імена країнних файлів

* Тека include визначається з **першого рівня** `include`: для кожного `include` у верхньому `.eug` береться
  назва останньої теки шляху (`scenarios\1936\ger.inc` → `1936`); остання така команда перемагає
  (`Parsers/ScenarioParser.cs:230-237`).
* Ім'я країнного файлу запам'ятовується як ім'я того файлу, де вперше зустрівся блок `country` для цього
  тегу (`Parsers/ScenarioParser.cs:304-311`). Для нової країни редактор утворює ім'я
  `<tag у нижньому регістрі>.inc`, **крім** тегу `CON`, для якого використовується `congo.inc`
  (`Models/Scenarios.cs:786-790`) — бо `CON` є зарезервованим іменем пристрою у Windows (припущення щодо
  причини). Новий include дописується у вигляді `scenarios\<тека>\<файл>` (`Models/Scenarios.cs:799`).
* Якщо ім'я файлу невідоме при збереженні — `<tag>.inc` (`Models/Scenarios.cs:624-626`).

### 2.4 «Верхній» файл vs. включений

Файл вважається **верхнім**, якщо ім'я його батьківської теки дорівнює рівно `scenarios` (порівняння
**чутливе** до регістру; .NET `string.Equals`) (`Parsers/ScenarioParser.cs:10138-10150`). Від цього залежить:

* `event = "..."` і `include = "..."` **запам'ятовуються** лише з верхнього файлу
  (`Parsers/ScenarioParser.cs:212-215`, `:230-237`). Вкладений `include` у `.inc` все одно **виконується**
  (рекурсія), але не потрапляє до списку include сценарію (`Parsers/ScenarioParser.cs:239-250`).
* Блоки `province` класифікуються за файлом, у якому зустрілися (§4.7).

Збереження гри, що лежать не безпосередньо в `scenarios` (напр. у підтеці), будуть класифіковані як «не
верхні» — події й include з них редактор не запам'ятає (припущення щодо розташування сейвів; див. §10).

### 2.5 Кодування і кінці рядків

* Читання й запис — у кодовій сторінці `Game.CodePage` (`Parsers/TextLexer.cs:112`,
  `Writers/ScenarioWriter.cs:24`). Вона вибирається за мовою інтерфейсу гри (`Forms/MainForm.cs:729-760`):

  | Режим мови | CodePage |
  |---|---|
  | англійська (DH, усі мови крім російської) | **1252** |
  | англійська, вибрано російську | 1251 |
  | японська | 932 (Shift-JIS) |
  | японська з патчем: японська / інші | 932 / 1252 |
  | корейська з патчем | 949 |
  | традиційна китайська | 950 |
  | спрощена китайська | 936 |

  Для DH реалізація має за замовчуванням читати **CP1252**.
* Конструктор `StreamReader(path, encoding)` у .NET додатково розпізнає BOM (UTF-8/UTF-16), тож файл з BOM
  буде прочитано за BOM (поведінка .NET, не код редактора; припущення щодо практичної значущості).
* Лексер приймає `\r\n`, `\r` і `\n` як кінець рядка (`Parsers/TextLexer.cs:237-255`). Редактор пише через
  `StreamWriter.WriteLine` під Windows → **CRLF**, без BOM (припущення щодо платформи виконання).

---

## 3. Лексика і примітиви значень

### 3.1 Токени (`Parsers/TextLexer.cs`, `Parsers/Token.cs:26-37`)

| Токен | Правило | Джерело |
|---|---|---|
| пробіли/керуючі | будь-який `char.IsWhiteSpace` або `char.IsControl`; пропускаються | `Parsers/TextLexer.cs:235-256` |
| коментар | `#` поза рядком — до кінця рядка | `Parsers/TextLexer.cs:259-265` |
| число | починається з цифри, `-` або `.`; далі цифри й одна `.`; парсинг `double` з `InvariantCulture` (крапка як роздільник, допускається експонента `NumberStyles.Float`) | `Parsers/TextLexer.cs:273-276`, `:335-404`, `Utilities/DoubleHelper.cs:349-352` |
| число→ідентифікатор | якщо після цифр (без `-` і без `.`) йде літера або `_`, токен стає **ідентифікатором** (напр. `1abc`) | `Parsers/TextLexer.cs:377-394` |
| ідентифікатор | починається з літери або `_`; далі літери, цифри, `_`. «Літера» — у сенсі Unicode, тобто символи CP1252 типу `é` теж допустимі | `Parsers/TextLexer.cs:279-282`, `:410-437` |
| рядок | `"` … `"`; **без екранування**; незакритий рядок обривається на кінці рядка | `Parsers/TextLexer.cs:285-289`, `:443-476` |
| `=`, `{`, `}` | окремі токени | `Parsers/TextLexer.cs:292-310` |
| інше | «невалідний» токен до наступного розділювача | `Parsers/TextLexer.cs:564-597` |

Наслідок: значення з `.`, `\`, `-` усередині (імена файлів) мусять бути в лапках.

### 3.2 Примітиви значень

Усі примітиви мають форму `ключ = значення`; за відсутності `=` рядок пропускається.

| Примітив | Приймає | Джерело |
|---|---|---|
| int | числовий токен, **усічений** до цілого (`(int)double`) | `Parsers/ScenarioParser.cs:9780-9800` |
| double | числовий токен | `Parsers/ScenarioParser.cs:9807-9827` |
| string | лише токен-рядок у лапках | `Parsers/ScenarioParser.cs:9834-9854` |
| identifier | лише голий ідентифікатор | `Parsers/ScenarioParser.cs:9861-9881` |
| string-or-identifier | рядок або ідентифікатор | `Parsers/ScenarioParser.cs:9888-9908` |
| bool | `yes`/`no` (без регістру) **або** числа `1`/`0` | `Parsers/ScenarioParser.cs:9915-9968` |
| tag | рядок **або** ідентифікатор; переводиться у верхній регістр; має бути у списку тегів поточної гри (§8) | `Parsers/ScenarioParser.cs:9975-10015` |
| tag-list | `{ TAG TAG … }` — **тільки голі** ідентифікатори (рядки в лапках відкидаються); невідомі теги пропускаються | `Parsers/ScenarioParser.cs:9320-9387` |
| id-list | `{ N N … }` — цілі | `Parsers/ScenarioParser.cs:9255-9313` |
| date | блок `{ year month day hour }` (§5.1) | `Parsers/ScenarioParser.cs:9394-9571` |
| type-id | блок `{ type = int id = int }` | `Parsers/ScenarioParser.cs:9578-9664` |
| flags | блок пар `ключ = значення`, ключ — ідентифікатор **або число**, значення — `0`/`1` або `yes`/`no`; зберігається текст значення як є | `Parsers/ScenarioParser.cs:9671-9769` |
| building-size | або голе число (`ic = 2`), або блок `{ size = double current_size = double }` (обидва ≥ 0; від'ємні відкидаються) | `Parsers/ScenarioParser.cs:2563-2667` |
| division-type | ідентифікатор з таблиці типів дивізій поточної гри | `Parsers/ScenarioParser.cs:10022-10064` |
| brigade-type | ідентифікатор з таблиці типів бригад поточної гри | `Parsers/ScenarioParser.cs:10071-10113` |

Форматування чисел при записі: `InvariantCulture`, без експоненти для типових значень
(`Utilities/DoubleHelper.cs:163-166`, `Utilities/ObjectHelper.cs:16-34`); деякі поля пишуться з
фіксованою мінімальною кількістю знаків після коми (`ToString1` — ≥1, `ToString3` — ≥3, `ToString4` — ≥4,
максимум 6) (`Utilities/DoubleHelper.cs:214-325`). Булеві пишуться як `yes`/`no`
(`Utilities/BoolHelper.cs:13-16`).

### 3.3 Відновлення після помилок (поведінка, важлива для сумісності з реальними файлами)

* Невідоме ключове слово в будь-якому блоці → пропуск до кінця рядка (`lexer.SkipLine`, напр.
  `Parsers/ScenarioParser.cs:315-317`).
* **Евристика пропущеної `}`**: у блоках юніта, дивізії, виробничої черги дивізії, `spyinfo` і в id-списках
  редактор запам'ятовує номер рядка останнього успішно розібраного ключа. Якщо незнайомий токен стоїть на
  **іншому** рядку, вважається, що автор забув `}`: токен повертається в потік і блок закривається
  (`Parsers/ScenarioParser.cs:6430-6438`, `:7707-7715`, `:8353-8361`, `:5479-5487`, `:9291-9303`).
* У `diplomacy` будь-який невідомий ключ одразу закриває блок (токен повертається)
  (`Parsers/ScenarioParser.cs:3641-3644`).
* На рівні юніта ключі `strength` і `locked` (насправді дивізійні) читаються й **відкидаються**
  (`Parsers/ScenarioParser.cs:6404-6428`) — у реальних файлах вони трапляються не на своєму місці
  (припущення щодо причини).

Ці евристики свідчать, що в оригінальних файлах трапляються незбалансовані дужки; рушій гри, ймовірно,
також толерантний (припущення).

---

## 4. Детальний формат

Позначення типів у таблицях: `int`, `double`, `bool`, `string` (у лапках), `ident` (голий), `str|ident`,
`tag`, `tags{}`, `ids{}`, `date`, `typeid`, `flags{}`, `bsize` (building-size), `block`.
«Повтор» — ключ може зустрічатися багато разів; «останній» — повторне входження перезаписує.

### 4.1 Верхній рівень (`.eug` і будь-який `.inc`)

Парсер верхнього рівня однаковий для `.eug` і `.inc` (`Parsers/ScenarioParser.cs:48-322`).

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `name` | string | назва сценарію: ключ локалізації або буквальний текст (§5.4) | `Parsers/ScenarioParser.cs:79-91` |
| `panel` | string | шлях до зображення панелі (BMP) відносно кореня гри, зазвичай у `scenarios\data\` | `Parsers/ScenarioParser.cs:94-106`, `Forms/ScenarioEditorForm.cs:827-842` |
| `header` | block | заголовок (§4.2) | `Parsers/ScenarioParser.cs:109-121` |
| `globaldata` | block | глобальні дані (§4.4) | `Parsers/ScenarioParser.cs:124-136` |
| `history` | ids{} | ID подій, що **вже відбулися** (повтор — додається) | `Parsers/ScenarioParser.cs:139-151`, `Models/Scenario.cs:44-46` |
| `sleepevent` | ids{} | ID «приспаних» (вимкнених) подій (повтор — додається) | `Parsers/ScenarioParser.cs:154-166`, `Models/Scenario.cs:49-51` |
| `save_date` | block | `{ <eventId> = <днів> … }` — дати спрацювання подій (§5.6) | `Parsers/ScenarioParser.cs:169-184`, `:330-388` |
| `map` | block | видимі/активні провінції та рамка карти (§4.6) | `Parsers/ScenarioParser.cs:187-199` |
| `event` | string | шлях до файлу подій (відносно кореня гри); запам'ятовується лише у верхньому файлі | `Parsers/ScenarioParser.cs:202-217` |
| `include` | string | шлях до файлу (відносно кореня гри, з урахуванням мод-теки); файл розбирається рекурсивно; відсутній файл — попередження і пропуск | `Parsers/ScenarioParser.cs:220-252` |
| `province` | block | налаштування провінції (§4.7) | `Parsers/ScenarioParser.cs:255-292` |
| `country` | block | налаштування країни (§4.8) | `Parsers/ScenarioParser.cs:295-313` |

Порядок, у якому редактор пише `.eug` (`Writers/ScenarioWriter.cs:22-37`): `name`, `panel`, `header`,
`globaldata`, `history`, `sleepevent`, `save_date`, `map`, рядок-коментар `# ###################` і всі
`event`, потім усі `include`. Блоки `province`/`country` у `.eug` редактор **не пише** (вони живуть у
`.inc`).

Псевдоприклад (власний):

```
name  = "SCENARIO_1936_NAME"
panel = "scenarios\data\panel_1936.bmp"
header = { … }
globaldata = { … }
event = "db\events\germany.txt"
include = "scenarios\1936\ger.inc"
```

### 4.2 `header` (`Parsers/ScenarioParser.cs:399-632`)

| Ключ | Тип | Значення / дефолт | Джерело |
|---|---|---|---|
| `name` | string | назва заголовка | `:451-463` |
| `startdate` | date | дата старту; редактор пише лише `{ year = N }` | `:466-478`, `Writers/ScenarioWriter.cs:185-188` |
| `startyear` | int | рік старту (старіша форма; пишеться, лише якщо нема `startdate`) | `:481-493`, `Writers/ScenarioWriter.cs:191-194` |
| `endyear` | int | рік завершення (так само) | `:496-508`, `Writers/ScenarioWriter.cs:195-198` |
| `free` | bool | вільний вибір країни; дефолт `yes` (пишеться лише `free = no`) | `:511-523`, `Models/Scenario.cs:365`, `Writers/ScenarioWriter.cs:200-203` |
| `combat` | bool | «короткий»/бойовий сценарій; дефолт `no` | `:526-538`, `Models/Scenario.cs:370`, `Writers/ScenarioWriter.cs:204-207` |
| `selectable` | tags{} | країни, доступні для вибору (повтор — додається) | `:541-553` |
| `set_ai_aggresive` | int | агресивність AI, 5 рівнів, дефолт `2`; **саме таке написання** (одна `s`) | `:556-568`, `Models/Scenario.cs:385`, `:404`, `:419` |
| `set_difficulty` | int | складність, 5 рівнів, дефолт `2` | `:571-583`, `Models/Scenario.cs:390`, `:409`, `:424` |
| `set_gamespeed` | int | швидкість гри, 8 рівнів, дефолт `3` | `:586-598`, `Models/Scenario.cs:395`, `:414`, `:429` |
| `<TAG>` | block | налаштування «головної» країни для екрана вибору (§4.3); тег має бути валідним; повтор того самого тегу **замінює** попередній | `:600-624` |

Діапазони рівнів відповідають рядкам локалізації `FEOPT_AI_LEVEL1..5`, `FE_DIFFI1..5`,
`FEOPT_GAMESPEED0..7` (`Models/Config.cs:223-240`); значення в файлі — 0-базований індекс у цих списках
(редактор використовує значення як індекс комбобокса: `Controllers/ScenarioEditorController.cs:1929-1936`,
`Forms/ScenarioEditorForm.cs:918-940`) (припущення щодо відповідності `FEOPT_AI_LEVEL1` ↔ `0`).

Зауваження: редактор **не пише** `set_ai_aggresive`, `set_difficulty`, `set_gamespeed` назад
(`Writers/ScenarioWriter.cs:178-211`) — при збереженні вони губляться.

### 4.3 Блок головної країни в `header` (`<TAG> = { … }`) (`Parsers/ScenarioParser.cs:639-803`)

| Ключ | Тип | Значення | Гра | Джерело |
|---|---|---|---|---|
| `desc` | str\|ident | ключ локалізації опису країни | усі | `:690-702` |
| `countrytactics` | str\|ident | ключ «національної стратегії» | усі | `:705-717` |
| `picture` | string | шлях до пропагандистського зображення | усі | `:720-732` |
| `songs` | string | музичний файл | усі | `:735-747` |
| `bottom` | bool | розміщувати внизу/праворуч у списку | усі | `:750-762` |
| `name` | str\|ident | ключ локалізації назви країни | **DH ≥ 1.04** | `:764-779` |
| `flag_ext` | str\|ident | суфікс прапора | **DH ≥ 1.04** | `:782-794` |

Якщо `desc` порожній, редактор показує текст за ключем `<TAG>_<yy>_DESC` (yy = дві останні цифри року
старту з `globaldata.startdate`, інакше `header.startdate`, інакше `header.startyear`), а якщо такого нема —
`<TAG>_DESC` (`Controllers/ScenarioEditorController.cs:1964-1983`) (припущення, що гра робить так само).

Порядок запису в один рядок: `desc`, `countrytactics`, `bottom`, `picture`, `flag_ext`, `name`, `songs`
(`Writers/ScenarioWriter.cs:247-279`); `flag_ext` і `name` пишуться **без** лапок.

### 4.4 `globaldata` (`Parsers/ScenarioParser.cs:814-1176`)

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `rules` | block | `{ diplomacy = bool production = bool technology = bool }`; усі дефолт `yes`; пишеться лише якщо щось `no` | `:866-878`, `:1369-1470`, `Models/Scenario.cs:721-726`, `Writers/ScenarioWriter.cs:343-365` |
| `startdate` | date | **справжня** дата старту (з точністю до дня/години) | `:881-893` |
| `enddate` | date | дата завершення | `:896-908` |
| `axis` | block (alliance) | союз «Вісь» | `:911-923` |
| `allies` | block (alliance) | союз «Союзники» | `:926-938` |
| `comintern` | block (alliance) | союз «Комінтерн» | `:941-953` |
| `alliance` | block (alliance) | додатковий союз; повтор | `:956-968` |
| `war` | block | війна; повтор (§4.4.2) | `:971-983` |
| `treaty` | block | договір; повтор (§4.4.3) | `:986-1011` |
| `flags` | flags{} | глобальні прапорці подій; **останній** блок замінює | `:1014-1026` |
| `queued_events` | block | `{ event = { tag = TAG id = int hour = int } … }` — події в черзі (збереження) | `:1029-1041`, `:1183-1362` |
| `dormant_leaders` | `yes`/`no` **або** ids{} | `yes` — усі генерали «сплячі»; список — конкретні ID | `:1044-1123` |
| `dormant_ministers` | ids{} | «сплячі» міністри | `:1126-1138` |
| `dormant_teams` | ids{} | «сплячі» дослідницькі команди | `:1141-1153` |
| `weather` | block | погода (§4.4.4) | `:1156-1168` |

Порядок запису: `rules`, `startdate`, `axis`, `allies`, `comintern`, `alliance`…, `war`…, `treaty`
(спочатку всі non_aggression, потім peace, потім trade), `dormant_leaders`, `dormant_ministers`,
`dormant_teams`, `enddate`, `flags` (`Writers/ScenarioWriter.cs:290-304`, `:433-452`). `queued_events` і
`weather` редактор **не пише**.

#### 4.4.1 Союз (`axis`/`allies`/`comintern`/`alliance`, а також `attackers`/`defenders` війни) (`Parsers/ScenarioParser.cs:3020-3139`)

| Ключ | Тип | Значення | Гра | Джерело |
|---|---|---|---|---|
| `id` | typeid | ідентифікатор союзу (дефолтний type для нових — `15000`) | усі | `:3071-3083`, `Models/Scenarios.cs:108` |
| `participant` | tags{} | члени; повтор — додається | усі | `:3086-3098` |
| `defensive` | bool | оборонний союз | усі | `:3101-3113` |
| `name` | string | суфікс ключа локалізації: текст береться з `ALLIANCE_<name>` | **DH** | `:3115-3131`, `Controllers/ScenarioEditorController.cs:2003-2006` |

Без `name` три стандартні союзи мають назви `EYR_AXIS`, `EYR_ALLIES`, `EYR_COM`
(`Models/Config.cs:200-202`, `Controllers/ScenarioEditorController.cs:2007-2019`). Редактор пише стандартний
союз лише якщо в нього є `id` (`Writers/ScenarioWriter.cs:393-404`).

#### 4.4.2 `war` (`Parsers/ScenarioParser.cs:3146-3277`)

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `id` | typeid | ID війни (дефолтний type `9430`) | `:3197-3209`, `Models/Scenarios.cs:113` |
| `date` | date | початок | `:3212-3224` |
| `enddate` | date | кінець | `:3227-3239` |
| `attackers` | block (alliance) | нападники: `id`, `participant` | `:3242-3254` |
| `defenders` | block (alliance) | оборонці: `id`, `participant` | `:3257-3269` |

#### 4.4.3 `treaty` (`Parsers/ScenarioParser.cs:3284-3567`)

| Ключ | Тип | Значення | Гра | Джерело |
|---|---|---|---|---|
| `id` | typeid | ID договору (дефолтний type `16384`) | усі | `:3335-3347`, `Models/Scenarios.cs:118` |
| `type` | ident | `non_aggression` \| `peace` \| `trade` | усі | `:3350-3384`, `Models/Scenarios.cs:157-162` |
| `country` | tag | **двічі**: перше входження — сторона 1, друге — сторона 2, далі ігнорується | усі | `:3387-3406` |
| `startdate` | date | початок | усі | `:3409-3421` |
| `expirydate` | date | закінчення | усі | `:3424-3436` |
| `money` | double | обсяг торгівлі: гроші (знак = напрям, припущення) | усі | `:3439-3451` |
| `supplies` | double | постачання | усі | `:3454-3466` |
| `energy` | double | енергія | усі | `:3469-3481` |
| `metal` | double | метал | усі | `:3484-3496` |
| `rare_materials` | double | рідкісні матеріали | усі | `:3499-3511` |
| `oil` | double | нафта | усі | `:3514-3526` |
| `cancel` | bool | чи можна скасувати; дефолт `yes` | усі | `:3529-3541`, `Models/Scenario.cs:1638` |
| `isoversea` | bool | заморська торгівля | **лише AoD** | `:3543-3559` |

Тип договору визначає, у який список він потрапляє (`Parsers/ScenarioParser.cs:996-1009`). Без `type`
договір вважається `non_aggression` (перше значення enum, `Models/Scenario.cs:1875-1880`) (припущення:
так виходить із дефолту enum). Редактор пише `country` як рядок у лапках: `country = "GER"`
(`Writers/ScenarioWriter.cs:553-554`). Договори не є симетричними об'єктами в файлі, але редактор будує
симетричну таблицю «країна1↔країна2» для пошуку (`Models/Scenarios.cs:699-736`).

#### 4.4.4 `weather` (`Parsers/ScenarioParser.cs:1481-1705`)

```
weather = {
  static  = bool               # фіксована погода
  pattern = {                  # повтор
    id        = { type id }
    provinces = { N N … }      # провінції фронту
    centre    = int            # центральна провінція
    speed     = int            # швидкість руху
    heading   = "string"       # напрям (текст)
  }
}
```

Джерела: `static` `:1532-1544`, `pattern` `:1547-1559`, поля фронту `:1625-1697`. Одиниці `speed` і набір
значень `heading` редактор не тлумачить (див. §10).

### 4.5 `history`, `sleepevent`, `save_date`

Див. §4.1 і §5.6.

### 4.6 `map` (`Parsers/ScenarioParser.cs:1716-1887`)

| Ключ | Форма | Значення | Джерело |
|---|---|---|---|
| `yes` | `yes = all` або `yes = <provId>` | `all` → усі провінції активні; число → додати провінцію до списку «увімкнених»; повтор | `:1768-1807` |
| `no` | `no = all` або `no = <provId>` | `all` → усі вимкнені; число → додати до «вимкнених»; повтор | `:1810-1849` |
| `top` | `{ x = int y = int }` | верхній лівий кут видимої області карти | `:1852-1864`, `:1894-1980` |
| `bottom` | `{ x = int y = int }` | нижній правий кут | `:1867-1879` |

Дефолт «усі активні» = `yes` (`Models/Scenario.cs:819`). Тут `yes`/`no` — **ключі**, а не значення.
Канонічний запис: `yes = all` (або `no = all`), порожній рядок, перелік `yes = N`/`no = N`, далі
`top`/`bottom` (`Writers/ScenarioWriter.cs:100-131`). Система координат `x`/`y` (пікселі карти якого
рівня?) — див. §10.

### 4.7 `province` (`Parsers/ScenarioParser.cs:1991-2552`)

| Ключ | Тип | Значення | Гра | Джерело |
|---|---|---|---|---|
| `id` | int | ID провінції (з `db\province.csv`) | усі | `:2043-2055` |
| `ic` | bsize | фабрики (IC) | усі | `:2058-2070` |
| `infra` | bsize | інфраструктура | усі | `:2073-2085` |
| `landfort` | bsize | сухопутний форт | усі | `:2088-2100` |
| `coastalfort` | bsize | береговий форт | усі | `:2103-2115` |
| `anti_air` | bsize | ППО | усі | `:2118-2130` |
| `air_base` | bsize | авіабаза | усі | `:2133-2145` |
| `naval_base` | bsize | військово-морська база | усі | `:2148-2160` |
| `radar_station` | bsize | радар | усі | `:2163-2175` |
| `nuclear_reactor` | bsize | ядерний реактор | усі | `:2178-2190` |
| `rocket_test` | bsize | ракетний полігон | усі | `:2193-2205` |
| `synthetic_oil` | bsize | завод синтетичної нафти | AoD (пишеться лише для AoD) | `:2208-2220`, `Writers/ScenarioWriter.cs:1066-1083` |
| `synthetic_rares` | bsize | завод синтетичних рідкісних матеріалів | AoD (так само) | `:2223-2235` |
| `nuclear_power` | bsize | АЕС | AoD (так само) | `:2238-2250` |
| `supplypool` | double | запас постачання в провінції | усі | `:2253-2265` |
| `oilpool` | double | запас нафти | усі | `:2268-2280` |
| `energypool` | double | запас енергії | усі | `:2283-2295` |
| `metalpool` | double | запас металу | усі | `:2298-2310` |
| `rarematerialspool` | double | запас рідкісних матеріалів | усі | `:2313-2325` |
| `energy` | double | поточний видобуток енергії | усі | `:2328-2340` |
| `max_energy` | double | макс. видобуток енергії | усі | `:2343-2355` |
| `metal` | double | поточний видобуток металу | усі | `:2358-2370` |
| `max_metal` | double | макс. металу | усі | `:2373-2385` |
| `rare_materials` | double | поточні рідкісні матеріали | усі | `:2388-2400` |
| `max_rare_materials` | double | макс. рідкісних | усі | `:2403-2415` |
| `oil` | double | поточна нафта | усі | `:2418-2430` |
| `max_oil` | double | макс. нафти | усі | `:2433-2445` |
| `manpower` | double | людські ресурси | усі | `:2448-2460` |
| `max_manpower` | double | макс. людських ресурсів | усі | `:2463-2475` |
| `points` | int | переможні очки (VP) | усі | `:2478-2490` |
| `province_revoltrisk` | double | ризик повстання | усі | `:2493-2505` |
| `weather` | ident | поточна погода: `clear`, `frozen`, `raining`, `snowing`, `storm`, `blizzard`, `muddy` | усі | `:2508-2526`, `Models/Scenarios.cs:167-177` |
| `name` | str\|ident | ключ локалізації назви провінції (перевизначення) | **DH** | `:2528-2544` |

**building-size** (`bsize`): голе число → «відносний розмір» (`Size`); блок `{ size current_size }` →
`MaxSize`/`CurrentSize` (`Parsers/ScenarioParser.cs:2573-2578`, `:2620-2658`,
`Models/Scenario.cs:1186-1206`). Редактор пише голе число, якщо `Size ≠ 0`, інакше блок
(`Writers/ScenarioWriter.cs:4050-4061`). Чи «відносний» означає «додається до бази провінції», а `size` —
абсолютний максимум, редактор не пояснює (припущення; див. §10).

Класифікація за файлом (`Parsers/ScenarioParser.cs:265-290`): провінція з `bases.inc` ставить прапор
«провінції в bases.inc», з `bases_DOD.inc` — «в bases_DOD.inc», з `depots.inc` — «в depots.inc», з `vp.inc`
— «в vp.inc», з верхнього `.eug` — нічого, з будь-якого іншого `.inc` — «в країнних inc». Ці прапори
керують тим, куди редактор розкладе поля при записі (§4.14).

### 4.8 `country` (`Parsers/ScenarioParser.cs:3783-5094`)

Ключ `tag` має йти **першим**: при зустрічі `tag`, для якого вже є країна, парсер підміняє поточний об'єкт
існуючим (злиття), і все, що було розібрано **до** `tag` у цьому блоці, губиться
(`Parsers/ScenarioParser.cs:3835-3853`).

#### 4.8.1 Ідентичність і статус

| Ключ | Тип | Значення | Гра | Джерело |
|---|---|---|---|---|
| `tag` | tag | тег країни | усі | `:3835-3853` |
| `regular_id` | tag | «справжній» тег (для країн-двійників/дублікатів) | усі | `:3856-3868` |
| `intrinsic_gov_type` | ident | базовий тип уряду, з яким країна може стати незалежною (§4.8.8) | усі | `:3871-3889` |
| `puppet` | tag | сюзерен (країна — маріонетка `puppet`) | усі | `:3892-3904` |
| `control` | tag | країна, що має військове командування | усі | `:3907-3919` |
| `belligerence` | int | войовничість | усі | `:3922-3934` |
| `capital` | int | ID провінції-столиці | усі | `:3967-3979` |
| `dissent` | double | невдоволення | усі | `:3952-3964` |
| `extra_tc` | double | додаткова транспортна місткість | усі | `:3937-3949` |
| `ai` | string | шлях до AI-файлу, напр. `ai\xxx.ai` (відносно кореня гри) | усі | `:4162-4174`, `Forms/ScenarioEditorForm.cs:6755-6789`, `Properties/Resources.resx:669-671` |
| `name` | str\|ident | ключ локалізації або буквальна назва країни | **DH** | `:5028-5040` |
| `flag_ext` | str\|ident | суфікс файлу прапора | **DH** | `:5043-5055` |
| `ai_settings` | block | `{ flags = flags{} }` — локальні AI-прапорці | **DH** | `:5058-5070`, `:5101-5172` |

#### 4.8.2 Модифікатори

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `tc_mod` | double | модифікатор транспортної місткості | `:3982-3994` |
| `tc_occupied_mod` | double | модифікатор TC для окупованих територій | `:3997-4009` |
| `attrition_mod` | double | модифікатор виснаження | `:4012-4024` |
| `trickleback_mod` | double | модифікатор повернення людських ресурсів (trickleback) | `:4027-4039` |
| `max_amphib_mod` | **int** | модифікатор максимального морського десанту | `:4042-4054` |
| `supply_dist_mod` | double | модифікатор дальності постачання | `:4057-4069` |
| `repair_mod` | double | модифікатор ремонту | `:4072-4084` |
| `research_mod` | double | модифікатор досліджень | `:4087-4099` |
| `peacetime_ic_mod` | double | модифікатор IC у мирний час | `:4102-4114` |
| `wartime_ic_mod` | double | модифікатор IC у воєнний час | `:4117-4129` |
| `industrial_modifier` | double | загальний промисловий модифікатор | `:4132-4144` |
| `ground_def_eff` | double | ефективність наземної оборони | `:4147-4159` |
| `relative_manpower` | double | відносний модифікатор людських ресурсів | `:4192-4204` |

#### 4.8.3 Ресурси й слайдери виробництва

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `manpower` | double | людські ресурси (пул) | `:4177-4189` |
| `energy` | double | запас енергії | `:4207-4219` |
| `metal` | double | запас металу | `:4222-4234` |
| `rare_materials` | double | запас рідкісних | `:4237-4249` |
| `oil` | double | запас нафти | `:4252-4264` |
| `supplies` | double | запас постачання | `:4267-4279` |
| `money` | double | гроші | `:4282-4294` |
| `transports` | int | конвойні транспорти | `:4297-4309` |
| `escorts` | int | ескорти | `:4312-4324` |
| `nuke` | int | кількість ядерних бомб | `:4327-4339` |
| `nukedate` | date | дата готовності ядерної зброї | `:4567-4579` |
| `free` | block | «позакартові» (offmap) ресурси, §4.8.5 | `:4342-4354` |
| `consumer` | double | частка IC на споживчі товари | `:4357-4369` |
| `supply` | double | частка IC на постачання | `:4372-4384` |
| `production` | double | частка IC на виробництво | `:4387-4399` |
| `reinforcement` | double | частка IC на поповнення | `:4402-4414` |

Модель має окремі поля для чотирьох слайдерів (`Models/Scenario.cs` у `CountrySettings`: `ConsumerSlider`,
`SupplySlider`, `ProductionSlider`, `ReinforcementSlider`), але парсер редактора кладе **усі чотири** в
`ConsumerSlider` (баг, `Parsers/ScenarioParser.cs:4382`, `:4397`, `:4412`). Одиниці (частка 0..1 чи
відсоток) редактор не визначає (див. §10).

#### 4.8.4 Території, технології

| Ключ | Тип | Значення | Гра | Джерело |
|---|---|---|---|---|
| `nationalprovinces` | ids{} | «національні» (core) провінції | усі | `:4447-4459` |
| `ownedprovinces` | ids{} | провінції у власності | усі | `:4462-4474` |
| `controlledprovinces` | ids{} | контрольовані (окуповані/утримувані) провінції | усі | `:4477-4489` |
| `claimedprovinces` | ids{} | провінції, на які є претензії | **DH** | `:5073-5085` |
| `techapps` | ids{} | дослідженні технології (ID з дерева технологій) | усі | `:4492-4504` |
| `blueprints` | ids{} | креслення (blueprints) | усі | `:4507-4519` |
| `inventions` | ids{} | ID подій-винаходів, що вже відбулися | усі | `:4522-4534` |
| `deactivate` | ids{} | деактивовані технології | усі | `:4537-4549` |

Усі списки накопичуються при повторі. Редактор попереджає, якщо одна провінція у власності або під
контролем двох країн (`Models/Scenarios.cs:1063-1091`) — у коректному сценарії кожна провінція має рівно
одного власника й одного контролера (припущення щодо гри).

#### 4.8.5 `free` (offmap) (`Parsers/ScenarioParser.cs:5179-5385`)

Ключі: `ic`, `manpower`, `energy`, `metal`, `rare_materials`, `oil`, `supplies`, `money` (усі double) і
**`transport`**, **`escort`** (int, однина!). Увага: редактор при записі пише `transports`/`escorts`
(множина) (`Writers/ScenarioWriter.cs:1827-1834`), які його ж парсер у цьому блоці **не приймає** —
правильне написання для гри невідоме (див. §10).

#### 4.8.6 Дипломатія і розвідка

```
diplomacy = {
  relation = { tag = TAG value = double access = bool guaranteed = date }   # повтор
}
SpyInfo = { country = "TAG" NumberOfSpies = int }                           # повтор
```

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `diplomacy` | block | контейнер `relation`; повтор — додається | `Parsers/ScenarioParser.cs:4417-4429`, `:3574-3648` |
| `relation.tag` | tag | інша країна | `:3706-3718` |
| `relation.value` | double | дипломатичні відносини | `:3721-3733` |
| `relation.access` | bool | військовий прохід | `:3736-3748` |
| `relation.guaranteed` | date | гарантія незалежності діє до дати | `:3751-3763` |
| `spyinfo` | block | шпигуни в іншій країні; повтор | `:4432-4444`, `:5392-5491` |
| `spyinfo.country` | tag | цільова країна | `:5444-5459` |
| `spyinfo.numberofspies` | int | кількість шпигунів | `:5462-5477` |

Редактор пише ключ з великими літерами `SpyInfo`/`NumberOfSpies` (`Writers/ScenarioWriter.cs:1900-1901`) —
регістр значення не має. `relation` без `guaranteed` пишеться в один рядок
(`Writers/ScenarioWriter.cs:1863-1889`).

#### 4.8.7 `policy` (слайдери внутрішньої політики) (`Parsers/ScenarioParser.cs:5498-5716`)

| Ключ | Тип | Діапазон | Дефолт | Ліво (1) ↔ право (10) за моделлю |
|---|---|---|---|---|
| `date` | date | — | — | дата, після якої можна рухати слайдер |
| `democratic` | int | 1..10 | 5 | демократичний ↔ авторитарний |
| `political_left` | int | 1..10 | 5 | політично лівий ↔ правий |
| `freedom` | int | 1..10 | 5 | відкрите ↔ закрите суспільство |
| `free_market` | int | 1..10 | 5 | вільний ринок ↔ планова економіка |
| `professional_army` | int | 1..10 | 5 | професійна армія ↔ призовна (**у DH Full — мобілізація ↔ демобілізація**) |
| `defense_lobby` | int | 1..10 | 5 | «яструби» ↔ «голуби» |
| `interventionism` | int | 1..10 | 5 | інтервенціонізм ↔ ізоляціонізм |

Значення поза 1..10 відкидаються з помилкою (`Parsers/ScenarioParser.cs:5573-5577` і аналогічні).
Дефолти й семантика полюсів: `Models/Scenario.cs:2860-2903`. Якому кінцю відповідає `1`, а якому `10`,
у моделі не сказано явно; порядок «ліво — право» взято з порядку в назві поля (припущення).

#### 4.8.8 Кабінет (`Parsers/ScenarioParser.cs:4582-4729`)

Кожна посада — `typeid`; `id` — ID міністра з `db\ministers\*.csv`, `type` — довільний простір імен
(дефолт для нових — `9`, `Models/Scenarios.cs:128`). Редактор шукає міністра лише за `id`, ігноруючи `type`
(`Writers/ScenarioWriter.cs:2142-2154`).

| Ключ | Посада |
|---|---|
| `headofstate` | глава держави |
| `headofgovernment` | глава уряду |
| `foreignminister` | міністр закордонних справ |
| `armamentminister` | міністр озброєнь |
| `ministerofsecurity` | міністр внутрішніх справ/безпеки |
| `ministerofintelligence` | міністр розвідки |
| `chiefofstaff` | начальник штабу |
| `chiefofarmy` | командувач армії |
| `chiefofnavy` | командувач флоту |
| `chiefofair` | командувач авіації |

`intrinsic_gov_type` / типи уряду (ідентифікатори в нижньому регістрі; індекс у дужках — порядок у
редакторі, `Models/Scenarios.cs:182-195`, `Models/Scenario.cs:2910-2923`): `nazi`(1), `fascist`(2),
`paternal_autocrat`(3), `social_conservative`(4), `market_liberal`(5), `social_liberal`(6),
`social_democrat`(7), `left_wing_radical`(8), `leninist`(9), `stalinist`(10). Ключі локалізації назв:
`CATEGORY_NATIONAL_SOCIALIST`…`CATEGORY_STALINIST` (`Models/Config.cs:203-212`).

AoD-only ідеї (парсяться завжди, пишуться лише для AoD, `Writers/ScenarioWriter.cs:2161-2181`):
`nationalidentity`, `socialpolicy`, `nationalculture` — string (`Parsers/ScenarioParser.cs:4732-4774`).

#### 4.8.9 «Сплячі» об'єкти, генерали

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `dormant_leaders` | ids{} | ID генералів країни, неактивних на старті | `:4777-4789` |
| `dormant_ministers` | ids{} | ID міністрів | `:4792-4804` |
| `dormant_teams` | ids{} | ID дослідницьких команд | `:4807-4819` |
| `steal_leader` | int | ID генерала, якого країна «забирає» (повтор — кожен рядок один ID) | `:4822-4834` |

#### 4.8.10 Дозволені типи

```
allowed_divisions = { <division-type> = bool … }
allowed_brigades  = { <brigade-type>  = bool … }
```

Ключ — ідентифікатор типу юніта (§4.9.3); тип, що не належить до відповідної категорії поточної гри,
відкидається (`Parsers/ScenarioParser.cs:5723-5888`). (Баг: результат `allowed_brigades` записується в
словник дивізій, `Parsers/ScenarioParser.cs:4864-4868`.)

#### 4.8.11 Збройні сили й черги (посилання)

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `landunit` | block | сухопутний корпус/армія (§4.9) | `:4888-4900` |
| `navalunit` | block | флот (§4.9) | `:4903-4915` |
| `airunit` | block | авіагрупа (§4.9) | `:4918-4930` |
| `landdivision` | block (division) | **окрема** сухопутна дивізія поза юнітом — «спляча»/резерв (§4.10) | `:4978-4991` |
| `navaldivision` | block (division) | окрема морська дивізія | `:4994-5007` |
| `airdivision` | block (division) | окрема авіадивізія | `:5010-5023` |
| `convoy` | block | конвой (§4.12) | `:4873-4885` |
| `division_development` | block | дивізія у виробничій черзі (§4.13) | `:4933-4945` |
| `convoy_development` | block | конвой у черзі (§4.13) | `:4948-4960` |
| `province_development` | block | будівля в черзі (§4.13) | `:4963-4975` |

#### 4.8.12 Канонічний порядок запису країни (`Writers/ScenarioWriter.cs:1606-1648`)

1. Коментар-шапка `# Country definition for <TAG> #` в рамці з `#`.
2. Блоки `province` для провінцій, **контрольованих** цією країною (якщо провінції ведуться в країнних inc).
3. Для DH Full або якщо були провінції — коментар `# Country main data #`.
4. `country = {` → `tag`, `regular_id`, `puppet`, `control`, `name` (без лапок, якщо є такий ключ
   локалізації; інакше в лапках), `flag_ext`, `ai`, `ai_settings`, `intrinsic_gov_type`, `belligerence`,
   `capital` (з коментарем-назвою), `dissent`, `extra_tc`, `manpower`, `relative_manpower`, `ground_def_eff`
   (`:1679-1741`); модифікатори (`:2030-2076`); ресурси `energy … money`, `transports`, `escorts`
   (`:1763-1780`); `free`; `diplomacy`; `SpyInfo`…; `nationalprovinces`, `ownedprovinces`,
   `controlledprovinces`, `claimedprovinces`; `techapps`, `blueprints`, `inventions`, `deactivate`;
   `policy`; кабінет; AoD-ідеї; `dormant_*`; `steal_leader`; `allowed_divisions`, `allowed_brigades`;
   `landunit`…, `navalunit`…, `airunit`…; `division_development`…, `province_development`…,
   `convoy_development`…; `landdivision`…, `navaldivision`…, `airdivision`…; `}`.

Не пишуться: `nuke`, `nukedate`, чотири слайдери, `convoy` (готові конвої), `nationalidentity` тощо поза
AoD.

### 4.9 Юніти: `landunit`, `navalunit`, `airunit` (`Parsers/ScenarioParser.cs:5900-6442`)

#### 4.9.1 Поля юніта

| Ключ | Тип | Значення | Гілки | Джерело |
|---|---|---|---|---|
| `id` | typeid | ID юніта | усі | `:5952-5967` |
| `name` | string | назва | усі | `:5970-5985` |
| `control` | tag | країна, що керує юнітом (експедиційні сили) | усі | `:5988-6003` |
| `leader` | int | ID генерала (`db\leaders\*.csv`) | усі | `:6006-6021` |
| `location` | int | поточна провінція | усі | `:6024-6039` |
| `prevprov` | int | попередня провінція | усі | `:6042-6057` |
| `home` | int | «домашня» провінція | усі | `:6060-6075` |
| `base` | int | база (порт/аеродром) | флот, авіація (пише редактор) | `:6078-6093`, `Writers/ScenarioWriter.cs:2451-2454` |
| `dig_in` | double | рівень окопування | суходіл (пише) | `:6096-6111` |
| `morale` | double | мораль | усі | `:6114-6129` |
| `mission` | block | поточна місія (§4.11) | усі | `:6132-6147` |
| `date` | date | дата, пов'язана з поточним наказом (припущення) | усі | `:6150-6165` |
| `development` | bool | невідомо; дефолт `yes`; пишеться лише в AoD як `development = no` | усі | `:6168-6183`, `Models/Scenario.cs:3004` |
| `movetime` | date | час завершення переміщення | усі | `:6186-6201` |
| `movement` | ids{} | маршрут (ID провінцій) | усі | `:6204-6219` |
| `attack` | date | час початку атаки | усі | `:6222-6237` |
| `invasion` | bool | у процесі висадки | суходіл (пише) | `:6240-6255` |
| `target` | int | провінція-ціль висадки | суходіл (пише) | `:6258-6273` |
| `stand_ground` | bool | наказ «стояти на смерть» | суходіл, флот | `:6276-6291` |
| `scorch_ground` | bool | тактика випаленої землі | суходіл | `:6294-6309` |
| `prioritized` | bool | пріоритет постачання/поповнення | усі | `:6312-6327` |
| `can_upgrade` | bool | дозвіл на модернізацію | усі | `:6330-6345` |
| `can_reinforce` | bool | дозвіл на поповнення | усі | `:6348-6363` |
| `division` | block | дивізія у складі (§4.10); повтор | усі | `:6366-6384` |
| `landunit` | block | перевезений сухопутний юніт (десант на кораблях / у транспортній авіації); повтор | **лише** в `navalunit`/`airunit` | `:6387-6402` |

У `landunit` вкладений `landunit` не приймається (`Parsers/ScenarioParser.cs:6387`). Дефолтний `type` для
юнітів, дивізій і генералів у редакторі — `6` (`Models/Scenarios.cs:123`), але це лише вибір редактора для
нових об'єктів.

#### 4.9.2 Порядок запису (`Writers/ScenarioWriter.cs:2313-2625`)

* суходіл: `id`, `name`, `location`, `prevprov`, `home`, `mission`, `date`, (AoD `development`),
  `stand_ground`, `scorch_ground`, `prioritized`, `can_upgrade`, `can_reinforce`, `control`, `morale`,
  `leader`, `movetime`, `movement`, `division`…, `dig_in` (≥3 знаки після коми), `attack`, `invasion`,
  `target`;
* флот: `id`, `name`, `location`, `prevprov`, `home`, `base`, `mission`, `date`, (AoD `development`),
  `stand_ground`, `prioritized`, `can_upgrade`, `can_reinforce`, `control`, `morale`, `leader`, `movetime`,
  `movement`, `division`…, вкладені `landunit`…, `attack`;
* авіація: як флот, але без `stand_ground`.

#### 4.9.3 Типи юнітів (для `division.type`, `extra*`, `allowed_*`)

Таблиця типів залежить від гри: AoD — свої списки; **DH ≥ 1.03** — списки DH; інакше (HoI2 і DH < 1.03) —
списки HoI2 (`Models/Units.cs:2058-2073`). Для DH ≥ 1.03 також читаються файли визначення класів дивізій/
бригад (`Models/Units.cs:2229-2237`; деталі — у специфікації юнітів).

DH ≥ 1.03, типи дивізій (`Models/Units.cs:1310-1452`, рядки — `Models/Units.cs:108-415`):
`infantry`, `cavalry`, `motorized`, `mechanized`, `light_armor`, `armor`, `paratrooper`, `marine`,
`bergsjaeger`, `garrison`, `hq`, `militia`, `multi_role`, `interceptor`, `strategic_bomber`,
`tactical_bomber`, `naval_bomber`, `cas`, `transport_plane`, `flying_bomb`, `flying_rocket`, `battleship`,
`light_cruiser`, `heavy_cruiser`, `battlecruiser`, `destroyer`, `carrier`, `escort_carrier`, `submarine`,
`nuclear_submarine`, `transport`, `light_carrier`, `rocket_interceptor`, `d_rsv_33`…`d_rsv_40`,
`d_01`…`d_99`.

DH ≥ 1.03, типи бригад (`Models/Units.cs:1549-1691`): `none`, `artillery`, `sp_artillery`,
`rocket_artillery`, `sp_rct_artillery`, `anti_tank`, `tank_destroyer`, `light_armor_brigade`,
`heavy_armor`, `super_heavy_armor`, `armored_car`, `anti_air`, `police`, `engineer`, `cag`, `escort`,
`naval_asw`, `naval_anti_air_s`, `naval_radar_s`, `naval_fire_controll_s`, `naval_improved_hull_s`,
`naval_torpedoes_s`, `naval_anti_air_l`, `naval_radar_l`, `naval_fire_controll_l`,
`naval_improved_hull_l`, `naval_torpedoes_l`, `cavalry_brigade`, `sp_anti_air`, `medium_armor`,
`floatplane`, `light_cag`, `amph_armor`, `glider_armor`, `glider_artillery`, `super_heavy_artillery`,
`b_rsv_36`…`b_rsv_40`, `b_01`…`b_99`.

### 4.10 Дивізія: `division`, `landdivision`, `navaldivision`, `airdivision` (`Parsers/ScenarioParser.cs:6453-7719`)

Один і той самий парсер для всіх чотирьох; рід військ (`Branch`) визначається контекстом (батьківський
юніт або ключ `land/naval/airdivision`) (`Parsers/ScenarioParser.cs:6375-6376`, `:4988`, `:5004`, `:5020`).

| Ключ | Тип | Значення | Джерело (рядок) |
|---|---|---|---|
| `id` | typeid | ID дивізії | 6505 |
| `name` | string | назва | 6523 |
| `type` | division-type | тип дивізії (§4.9.3) | 6541 |
| `model` | int | номер моделі (індекс у `units\<type>.txt`); `-1` = не задано | 6559, `Models/Scenario.cs:3331`, `:3659` |
| `nuke` | bool | несе ядерну зброю | 6577 |
| `extra` | brigade-type | бригада №1 (форма для **однієї** бригади) | 6595 |
| `extra1`…`extra5` | brigade-type | бригади №1…№5 | 6613–6685 |
| `brigade_model` | int | модель бригади №1 (форма для однієї бригади) | 6703 |
| `brigade_model1`…`brigade_model5` | int | моделі бригад №1…№5; `-1` = не задано | 6721–6793 |
| `max_strength` | double | максимальна сила | 6811 |
| `strength` | double | поточна сила | 6829 |
| `defaultorganisation` | double | максимальна організація | 6847 |
| `organisation` | double | поточна організація | 6865 |
| `morale` | double | мораль | 6883 |
| `experience` | double | досвід | 6901 |
| `div_upgr_progress` | double | прогрес модернізації | 6919 |
| `redep_target` | int | провінція перекидання | 6937 |
| `redep_unit_name` | string | назва юніта призначення при перекиданні | 6955 |
| `redep_unit_id` | typeid | ID юніта призначення | 6973 |
| `offensive` | date | дата початку наступу (offensive supplies) | 6991 |
| `supplies` | double | запас постачання | 7009 |
| `oil` | double | запас пального | 7027 |
| `max_supply_stock` | double | макс. постачання | 7045 |
| `max_oil_stock` | double | макс. пального | 7063 |
| `supplyconsumption` | double | споживання постачання | 7081 |
| `fuelconsumption` | double | споживання пального | 7099 |
| `maxspeed` | double | максимальна швидкість | 7117 |
| `speed_cap_art` | double | обмеження швидкості з артилерією | 7135 |
| `speed_cap_eng` | double | … з інженерами | 7153 |
| `speed_cap_aa` | double | … з ППО | 7171 |
| `speed_cap_at` | double | … з ПТО | 7189 |
| `transportweight` | double | вага при перевезенні | 7207 |
| `transportcapability` | double | транспортна місткість | 7222 |
| `defensiveness` | double | оборона | 7240 |
| `toughness` | double | стійкість | 7258 |
| `softness` | double | «м'якість» (частка небронованих) | 7276 |
| `suppression` | double | придушення (партизанів) | 7294 |
| `seadefence` | double | оборона від кораблів/підводних човнів | 7312 |
| `surfacedefence` | double | оборона від наземних цілей | 7330 |
| `airdefence` | double | ППО-оборона | 7348 |
| `softattack` | double | атака по м'яких цілях | 7366 |
| `hardattack` | double | атака по броньованих | 7384 |
| `seaattack` | double | атака по кораблях (флот) | 7402 |
| `subattack` | double | протичовнова атака | 7420 |
| `convoyattack` | double | атака по конвоях | 7438 |
| `shorebombardment` | double | обстріл берега | 7456 |
| `airattack` | double | атака по повітряних цілях | 7474 |
| `strategicattack` | double | стратегічне бомбардування | 7492 |
| `navalattack` | double | атака по кораблях (авіація) | 7510 |
| `artillery_bombardment` | double | артобстріл | 7528 |
| `surfacedetectioncapability` | double | виявлення надводних | 7546 |
| `airdetectioncapability` | double | виявлення повітряних | 7564 |
| `subdetectioncapability` | double | виявлення підводних | 7582 |
| `visibility` | double | помітність | 7600 |
| `range` | double | дальність дії | 7618 |
| `distance` | double | дальність стрільби/відстань | 7636 |
| `travelled` | double | пройдена відстань | 7654 |
| `locked` | bool | заблокована (не можна рухати) | 7672 |
| `dormant` | bool | «спляча» | 7690 |

(Усі «Джерело» — рядки `Parsers/ScenarioParser.cs`.) Модель поля: `Models/Scenario.cs:3304-3660`.

**Правило `extra` vs `extra1`** у канонічному записі редактора:
* сухопутна і авіадивізія (і «сплячі» сухопутні/авіа): якщо бригада одна — `extra = X` /
  `brigade_model = N`, якщо дві і більше — `extra1 … extra5` / `brigade_model1 …`
  (`Writers/ScenarioWriter.cs:2652-2693`, `:3052-3056`, `:3452`, `:3628`);
* морська дивізія: **завжди** `extra1…`/`brigade_model1…` (`Writers/ScenarioWriter.cs:2864-2867`);
* `division_development`: те саме, що й у суходолу/авіації, але для морських типів — завжди `extra1`
  (`Writers/ScenarioWriter.cs:3299-3330`).

Парсер приймає обидві форми як синоніми слоту 1 (`Parsers/ScenarioParser.cs:6595`, `:6703`).
`brigade_modelN` пишеться лише якщо слот `extraN` заповнений і модель ≥ 0.

Канонічні набори полів, що пише редактор, залежать від роду військ (`Writers/ScenarioWriter.cs:2637-3205`):
суходіл — `id name type model extra* brigade_model* strength max_strength organisation morale experience
defaultorganisation div_upgr_progress redep_target redep_unit_name redep_unit_id offensive supplies oil
max_supply_stock max_oil_stock maxspeed supplyconsumption fuelconsumption defensiveness toughness softness
suppression airdefence softattack hardattack transportweight airattack speed_cap_art speed_cap_eng
speed_cap_aa speed_cap_at artillery_bombardment dormant locked`; флот — `… nuke extra1.. … surfacedetectioncapability
airdetectioncapability subdetectioncapability visibility seadefence airdefence seaattack subattack
convoyattack shorebombardment airattack transportcapability range distance travelled dormant`; авіація —
`… nuke extra.. … surfacedetectioncapability airdetectioncapability surfacedefence airdefence airattack
strategicattack softattack hardattack transportcapability navalattack range dormant`.

«Сплячі» дивізії на рівні країни (`landdivision` тощо) редактор пише в один рядок зі скороченим набором:
`dormant id name type model [nuke] strength max_strength organisation morale experience extra*
brigade_model* [locked|defaultorganisation]` (`Writers/ScenarioWriter.cs:3409-3700`).

### 4.11 `mission` (`Parsers/ScenarioParser.cs:8376-8650`)

| Ключ | Тип | Значення | Гра (при записі) | Джерело |
|---|---|---|---|---|
| `type` | ident | тип місії (таблиця нижче) | усі | `:8427-8463` |
| `target` | int | цільова провінція | усі | `:8466` |
| `missionscope` | int | масштаб/радіус місії | **AoD** | `:8481`, `Writers/ScenarioWriter.cs:3814-3817` |
| `percentage` | double | поріг сили/організації для виходу з місії | усі (пишеться завжди) | `:8496`, `Writers/ScenarioWriter.cs:3766` |
| `night` | bool | виконувати вночі | усі | `:8511` |
| `day` | bool | виконувати вдень | усі | `:8526` |
| `tz` | int | цільова зона | **DH** (флот, авіація) | `:8541`, `Writers/ScenarioWriter.cs:3827-3832`, `:3886-3891` |
| `ac` | bool | атакувати конвої | **DH** (лише флот) | `:8556`, `Writers/ScenarioWriter.cs:3833-3836` |
| `org` | double | поріг організації; пишеться, лише якщо ≠ `percentage` | **DH** (флот, авіація) | `:8571`, `Writers/ScenarioWriter.cs:3837-3840` |
| `startdate` | date | початок місії | усі | `:8586` |
| `enddate` | date | кінець місії | усі | `:8601` |
| `task` | int | невідомо (номер завдання) | усі | `:8616` |
| `location` | int | провінція виконання | усі | `:8631` |

Типи місій (`Models/Scenarios.cs:221-259`; індекс — порядок у редакторі, `Models/Scenario.cs:4397-4434`):
`attack`(1), `rebase`(2), `strat_redeploy`(3), `support_attack`(4), `support_defense`(5), `reserves`(6),
`anti_partisan_duty`(7), `artillery_bombardment`(8), `planned_defense`(9), `air_superiority`(10),
`ground_attack`(11), `runway_cratering`(12), `installation_strike`(13), `interdiction`(14),
`naval_strike`(15), `port_strike`(16), `logistical_strike`(17), `strategic_bombardment`(18),
`air_supply`(19), `airborne_assault`(20), `air_scramble`(21), `convoy_raiding`(22), `asw`(23),
`naval_interdiction`(24), `shore_bombardment`(25), `amphibious_assault`(26), `sea_transport`(27),
`naval_combat_patrol`(28), `sneak_move`(29), `naval_scramble`(30), `convoy_air_raiding`(31),
`naval_port_strike`(32), `naval_airbase_strike`(33), `nuke`(34), `retreat`(35).

### 4.12 `convoy` (`Parsers/ScenarioParser.cs:8662-8882`)

| Ключ | Тип | Значення | Джерело |
|---|---|---|---|
| `id` | typeid | ID конвою | `:8713` |
| `trade_id` | typeid | ID торговельного договору, який обслуговує конвой | `:8728` |
| `istradeconvoy` | bool | конвой для торгівлі | `:8743` |
| `transports` | int | кількість транспортів | `:8757` |
| `escorts` | int | кількість ескортів | `:8772` |
| `energy`, `metal`, `rare_materials`, `oil`, `supplies` | **bool** | які ресурси везе | `:8787-8859` |
| `path` | ids{} | маршрут (морські провінції) | `:8862-8874` |

Редактор не пише `convoy` назад (див. §4.8.12).

### 4.13 Виробничі черги

Спільні поля `division_development` (`Parsers/ScenarioParser.cs:7726-8365`), `convoy_development`
(`:8889-9244`), `province_development` (`:2674-3009`):

| Ключ | Тип | Значення | Де |
|---|---|---|---|
| `id` | typeid | ID елемента черги | усі три |
| `name` | string | назва | усі три |
| `cost` | double | вартість IC | усі три |
| `manpower` | double | людські ресурси | усі три |
| `date` | date | очікувана дата завершення | усі три |
| `progress` | double | приріст прогресу | усі три |
| `total_progress` | double | загальний прогрес | усі три |
| `gearing_bonus` | double | бонус серійного виробництва | усі три |
| `size` | int | кількість у серії | усі три |
| `done` | int | уже завершено | усі три |
| `days` | int | днів до завершення | усі три |
| `days_for_first` | int | днів до першої одиниці | усі три |
| `halted` | bool | призупинено | усі три (пише лише AoD) |
| `close_when_finished` | bool | прибрати з черги після завершення | усі три (пише лише AoD) |
| `waitingforclosure` | bool | невідомо | усі три (пише лише AoD) |
| `retooling_time` | double | час переналаштування лінії | division, convoy (пише лише AoD) |
| `location` | int | провінція | convoy, province |
| `type` | — | див. нижче | усі три |

Специфічні:
* `division_development`: `type` = division-type; `model`; `extra`/`extra1..5`; `brigade_model`/
  `brigade_model1..5`; `unitcost` (bool, дефолт `yes`); `new_model` (bool, дефолт `yes`)
  (`Parsers/ScenarioParser.cs:7850-7880`, `:8102-8350`, `Models/Scenario.cs:3936-3941`).
* `convoy_development`: `type` = `transports` \| `escorts` (`Parsers/ScenarioParser.cs:8970-9011`,
  `Models/Scenarios.cs:264-269`).
* `province_development`: `type` = тип будівлі: `ic`, `infrastructure`, `coastal_fort`, `land_fort`,
  `anti_air`, `air_base`, `naval_base`, `radar_station`, `nuclear_reactor`, `rocket_test`,
  `synthetic_oil`, `synthetic_rares`, `nuclear_power` (`Parsers/ScenarioParser.cs:2755-2791`,
  `Models/Scenarios.cs:200-216`). Зверніть увагу: тут `infrastructure`/`coastal_fort`/`land_fort`, тоді як
  у блоці `province` — `infra`/`coastalfort`/`landfort`.

### 4.14 Спеціальні include-файли провінцій (як пише редактор)

| Файл | Що потрапляє | Формат | Джерело |
|---|---|---|---|
| `bases.inc` (HoI2/AoD/DH не-Full) | провінції з `naval_base`, потім з `air_base` | один рядок на провінцію з коментарем-назвою | `Writers/ScenarioWriter.cs:689-707` |
| `bases.inc` (DH Full) | **усі** провінційні поля, крім `ic`/`infra` (якщо використовується `bases_DOD.inc`) і `*pool` (якщо використовується `depots.inc`); VP не пишеться | багаторядковий блок | `Writers/ScenarioWriter.cs:714-862`, `:1327-1390` |
| `bases_DOD.inc` | `ic`, `infra` | один рядок | `Writers/ScenarioWriter.cs:869-890` |
| `depots.inc` | `supplypool`, `oilpool`, `energypool`, `metalpool`, `rarematerialspool` (> 0) | багаторядковий | `Writers/ScenarioWriter.cs:897-929` |
| `vp.inc` | `points` ≠ 0 | шапка-коментар `# Victory points distribution #`, далі по рядку | `Writers/ScenarioWriter.cs:936-958` |
| `<tag>.inc` | провінції, що **контролює** ця країна, і що мають дані, які не пішли в спеціальні файли; для DH Full з `bases.inc` — жодних | однорядковий, якщо лише прості будівлі/`supplypool`/`oilpool`, інакше багаторядковий | `Writers/ScenarioWriter.cs:967-1319`, `:1427-1495` |

Провінції сортуються за `id` перед записом (`Models/Scenarios.cs:396`, `:1262-1265`).

---

## 5. Семантика

### 5.1 Дати й календар

* Поля блоку (`Parsers/ScenarioParser.cs:9394-9571`):
  * `year` — int;
  * `month` — **або** назва (`january` … `december`, без регістру), **або** число **0..11**; внутрішньо
    зберігається як 1..12 (`:9460-9518`, `Models/Scenarios.cs:138-152`); число поза 0..11 — лише
    попередження, значення все одно приймається;
  * `day` — int **0..29**, внутрішньо +1 → 1..30 (`:9521-9543`). Значення `30` трапляється в реальних
    файлах настільки часто, що редактор логує його лише як «info»; воно стає внутрішнім днем 31 (поза
    нормальним діапазоном);
  * `hour` — int 0..23 (`:9546-9563`).
* Відсутні поля мають дефолт **1936 / january / day 0 / hour 0** (новий `GameDate` = 1936-01-01,
  `Models/GameDate.cs:97-102`).
* Канонічний запис: `{ year = Y month = <назва> day = D }`, а `hour = H` додається лише якщо `H ≠ 0`
  (`Writers/ScenarioWriter.cs:4068-4080`). Місяць завжди назвою.
* Календар: рік = 360 днів, місяць = 30 днів. Перетворення в лінійний номер дня:
  `рік*360 + (місяць-1)*30 + (день-1)` (внутрішні 1-базові місяць/день) (`Models/GameDate.cs:125-162`).
  Межі редактора: рік 0..9999, місяць 1..12, день 1..30 (`Models/GameDate.cs:39-64`). Години в
  арифметиці дат не враховуються.
* Чи справді гра має 360-денний календар, чи це спрощення редактора, — §10.

### 5.2 Пари `type`/`id`

* Формат: `{ type = int id = int }` (`Parsers/ScenarioParser.cs:9578-9664`,
  `Writers/ScenarioWriter.cs:4087-4090`).
* Пара має бути унікальною в межах сценарію; `type` діє як простір імен, `id` — номер у ньому.
  Редактор збирає всі використані пари (союзи, війни, учасники воєн, договори, погодні фронти, 10 посад
  кабінету, юніти й дивізії, вкладені юніти, черги дивізій/будівель/конвоїв, конвої та їх `trade_id`) і
  при створенні нового об'єкта шукає вільний `id` (`Models/Scenarios.cs:1410-1708`).
* Дефолтні `type` редактора для нових об'єктів (`Models/Scenarios.cs:105-133`):

  | Об'єкт | type |
  |---|---|
  | союз | 15000 |
  | війна | 9430 |
  | договір | 16384 |
  | генерал / юніт (редактор використовує `DefaultLeaderType`) | 6 |
  | міністр | 9 |
  | дослідницька команда | 10 |

  Це вибір редактора; чи має гра фіксовані простори імен для `type` — §10.
* Посилання між об'єктами: `convoy.trade_id` → `treaty.id`; `division.redep_unit_id` → `id` юніта.

### 5.3 Злиття

* **Країна**: ключ — тег. Повторний `country` з тим самим `tag` доповнює існуючий об'єкт: скаляри
  перезаписуються, списки (`*provinces`, `techapps`, юніти тощо) **додаються**
  (`Parsers/ScenarioParser.cs:3844-3851`, `:304-311`). Поля до `tag` губляться (§4.8).
* **Провінція**: ключ — `id`. Новий блок зливається з наявним: перезаписуються лише ті поля, що в новому
  блоці задані (будівлі — якщо присутні; числа — якщо ≠ 0; `name` — якщо непорожнє; `points` — якщо ≠ 0)
  (`Models/Scenarios.cs:1112-1257`). Поле `weather` при злитті **не** переноситься (баг). Отже, сценарій
  може розносити дані однієї провінції по `bases.inc`, `depots.inc`, `vp.inc` і країнних inc.
* **Головна країна в header**: повтор тегу замінює запис цілком (`Parsers/ScenarioParser.cs:616-621`).

### 5.4 Локалізація

* `name` сценарію: якщо значення — існуючий ключ локалізації, показується переклад; інакше — буквальний
  текст (`Controllers/ScenarioEditorController.cs:3129-3137`). Нові тексти редактор пише у
  `scenario_text.csv` (`Models/Game.cs:418`).
* Назва країни: `header.<TAG>.name` (ключ) → інакше `country.name` (ключ або буквальний текст) → інакше
  стандартний ключ, рівний тегу (`Models/Scenarios.cs:978-996`, `Models/Countries.cs:1063-1071`).
* Назва провінції: `province.name` — ключ локалізації (якщо ключа немає, редактор показує порожній рядок)
  → інакше стандартна назва провінції (`Models/Scenarios.cs:1007-1031`).
* Назва союзу: `ALLIANCE_<name>` або `EYR_AXIS`/`EYR_ALLIES`/`EYR_COM` (§4.4.1).
* Опис головної країни: `desc` або `<TAG>_<yy>_DESC` / `<TAG>_DESC` (§4.3).

### 5.5 Зв'язки з іншими файлами гри

| Поле | Посилається на |
|---|---|
| `province.id`, `capital`, `*provinces`, `location`, `home`, `base`, `target`, `movement`, `path`, `centre`, `redep_target` | ID провінцій (`db\province.csv`) |
| `techapps`, `blueprints`, `deactivate` | ID технологій (`db\tech\*.txt`) (припущення щодо шляху) |
| `inventions`, `history`, `sleepevent`, `save_date`, `queued_events.event.id` | ID подій (`event = "…"`) |
| `leader`, `dormant_leaders`, `steal_leader` | ID генералів (`db\leaders\*.csv`) |
| кабінет `id`, `dormant_ministers` | ID міністрів (`db\ministers\*.csv`) |
| `dormant_teams` | ID дослідницьких команд (`db\tech\teams\*.csv`) (припущення щодо шляху) |
| `division.type`, `model`, `extra*`, `brigade_model*` | класи й моделі юнітів (`units\*.txt`, DH ≥ 1.03 — також файли класів) |
| `ai` | `ai\*.ai` |
| `panel`, `picture` | зображення (BMP) |

### 5.6 Збереження гри

У редакторі немає окремого шляху для сейвів: поле `Scenario.IsSaveGame` оголошене, але ніде не
встановлюється (`Models/Scenario.cs:21`). Збереження розбирається тим самим парсером. Ключі, що мають
сенс переважно в сейвах (припущення щодо розподілу):

* `history` — події, що вже спрацювали; `sleepevent` — вимкнені події;
* `save_date = { <eventId> = <N> … }` — для кожної події `N` = **кількість днів до** стартової дати
  (`globaldata.startdate`, або 1936-01-01, якщо її ще не прочитано); дата спрацювання = старт − N днів у
  360-денному календарі (`Parsers/ScenarioParser.cs:169-184`, `:330-388`). Отже `save_date` має йти **після**
  `globaldata`. Запис — зворотне перетворення (`Writers/ScenarioWriter.cs:76-93`). Знак `N` у реальних
  сейвах (події в минулому дають від'ємне?) — §10;
* `globaldata.queued_events`, `globaldata.flags`, `country.ai_settings.flags`;
* у юнітах/дивізіях — `movetime`, `movement`, `attack`, `invasion`, `redep_*`, `offensive`, `travelled`
  тощо; виробничі черги `*_development`.

---

## 6. Канонічні дрібниці запису (для сумісного «round-trip»)

* Відступи — 2 пробіли на рівень; вирівнювання `=` пробілами (косметика) (напр.
  `Writers/ScenarioWriter.cs:26-27`, `:1681-1740`).
* Списки пишуться як `ключ = { a b c }` в один рядок (`Writers/ScenarioWriter.cs:4024-4043`).
* Після `capital`, кабінету, провінцій редактор додає коментар `# <назва>` (`Writers/ScenarioWriter.cs:1722`,
  `:2148`, `:1092`).
* Рядкові значення пишуться в лапках; теги, ідентифікатори і ключі локалізації `name`/`flag_ext` — без лапок.

---

## 7. Відмінності DH від AoD / HoI2 (усі розгалуження за типом гри)

| Місце | DH | AoD | HoI2 | Джерело |
|---|---|---|---|---|
| `header.<TAG>.name`, `flag_ext` | приймається, лише **версія ≥ 1.04** | ні | ні | `Parsers/ScenarioParser.cs:764` |
| `province.name` | так | ні | ні | `Parsers/ScenarioParser.cs:2528` |
| `alliance.name` (+ локалізація `ALLIANCE_*`) | так | ні | ні | `Parsers/ScenarioParser.cs:3115` |
| `country.name`, `flag_ext`, `ai_settings`, `claimedprovinces` | так | ні | ні | `Parsers/ScenarioParser.cs:5025-5086` |
| `treaty.isoversea` | ні | так | ні | `Parsers/ScenarioParser.cs:3543`, `Writers/ScenarioWriter.cs:548` |
| `mission.tz`, `org` (флот, авіа), `ac` (флот) — запис | так | ні | ні | `Writers/ScenarioWriter.cs:3827-3841`, `:3886-3896` |
| `mission.missionscope` — запис | ні | так | ні | `Writers/ScenarioWriter.cs:3814-3817`, `:3873-3876` |
| `halted`/`close_when_finished`/`waitingforclosure`/`retooling_time` у чергах — запис | ні | так | ні | `Writers/ScenarioWriter.cs:1559-1567`, `:3262-3274`, `:3974-3986` |
| `development = no` у юнітах — запис | ні | так | ні | `Writers/ScenarioWriter.cs:2348`, `:2465`, `:2570` |
| `synthetic_oil`/`synthetic_rares`/`nuclear_power` у провінціях країнних inc — запис | ні | так | ні | `Writers/ScenarioWriter.cs:1066`, `:1170` |
| `nationalidentity`/`socialpolicy`/`nationalculture` — запис | ні | так | ні | `Writers/ScenarioWriter.cs:2164` |
| Набір тегів | 282 (як HoI2) | 342 (+`UA0`…`UF9`) | 282 | `Models/Countries.cs:1039-1051` |
| Типи дивізій/бригад | DH ≥ 1.03 — свої (§4.9.3); DH < 1.03 — як HoI2 | свої | HoI2 | `Models/Units.cs:2058-2073` |
| Мод-тека | `Mods\<name>` | `<name>` | `<name>` | `Models/Game.cs:840-849` |
| `bases.inc` | DH Full: повні описи провінцій; інакше — лише бази | лише бази | лише бази | `Writers/ScenarioWriter.cs:671-680` |
| країнні inc | DH Full: завжди шапка «Country main data»; провінції не пишуться, якщо є `bases.inc` | — | — | `Writers/ScenarioWriter.cs:1611`, `:1429` |
| `policy.professional_army` | у DH Full означає мобілізацію ↔ демобілізацію | професійна ↔ призовна | так само | `Models/Scenario.cs:2890` |
| `bases_DOD.inc` | використовується в DH Full (сценарій 1933 р. за коментарем) | — | — | `Models/Game.cs:481-483` |

Парсер **приймає** AoD-ключі (`missionscope`, `halted`, `retooling_time`, `synthetic_*`, ідеї) у будь-якій
грі — розгалуження лише при записі; DH-ключі з таблиці вище парсер у не-DH грі відкидає як невідомі.

---

## 8. Теги країн (`Models/Countries.cs`)

Список для HoI2 і **DH** (`Models/Countries.cs:385-669`), 282 теги. Число в дужках — порядковий номер у
переліку редактора (`Models/Countries.cs:31-376`, `:1128-1478`); він алфавітний з `U00…U99` наприкінці. Чи
збігається він із внутрішнім індексом країни в рушії гри — невідомо (§10).

```
AFG(1)  ALB(2)  ALG(3)  ALI(4)  ALS(5)  ANG(6)  ARA(7)  ARG(8)  ARM(9)  AST(10) AUS(11) AXI(12)
AZB(13) BEL(14) BEN(15) BHU(16) BLR(17) BOL(18) BOS(19) BRA(20) BRU(21) BUL(22) BUR(23) CAL(24)
CAM(25) CAN(26) CGX(27) CHC(28) CHI(29) CHL(30) CMB(31) COL(32) CON(33) COS(34) CRO(35) CSA(36)
CSX(37) CUB(38) CXB(39) CYN(40) CYP(41) CZE(42) DDR(43) DEN(44) DFR(45) DOM(46) EAF(47) ECU(48)
EGY(49) ENG(50) EQA(51) EST(52) ETH(53) EUS(54) FIN(55) FLA(56) FRA(57) GAB(58) GEO(59) GER(60)
GLD(61) GRE(62) GUA(63) GUI(64) GUY(65) HAI(66) HOL(67) HON(68) HUN(69) ICL(70) IDC(71) IND(72)
INO(73) IRE(74) IRQ(75) ISR(76) ITA(77) JAP(78) JOR(79) KAZ(80) KOR(81) KUR(82) KYG(83) LAO(84)
LAT(85) LBY(86) LEB(87) LIB(88) LIT(89) LUX(90) MAD(91) MAL(92) MAN(93) MEN(94) MEX(95) MLY(96)
MON(97) MOR(98) MOZ(99) MTN(100) NAM(101) NEP(102) NIC(103) NIG(104) NOR(105) NZL(106) OMN(107)
OTT(108) PAK(109) PAL(110) PAN(111) PAR(112) PER(113) PHI(114) POL(115) POR(116) PRI(117) PRK(118)
PRU(119) QUE(120) REB(121) RHO(122) ROM(123) RSI(124) RUS(125) SAF(126) SAL(127) SAR(128) SAU(129)
SCA(130) SCH(131) SCO(132) SER(133) SIA(134) SIB(135) SIE(136) SIK(137) SLO(138) SLV(139) SOM(140)
SOV(141) SPA(142) SPR(143) SUD(144) SWE(145) SYR(146) TAJ(147) TAN(148) TEX(149) TIB(150) TRA(151)
TRK(152) TUN(153) TUR(154) UAP(155) UAU(156) UBO(157) UCH(158) UCS(159) UER(160) UES(161) UGS(162)
UIC(163) UIR(164) UKR(165) UPE(166) UPR(167) UPS(168) URO(169) URU(170) USA(171) USN(172) UTC(173)
UTL(174) UTO(175) UZB(176) VEN(177) VIC(178) VIE(179) WLL(180) YEM(181) YUG(182)
U00(183) … U99(282)          # 100 тегів U00, U01, …, U99 підряд
```

Лише AoD додатково: `UA0…UA9`, `UB0…UB9`, `UC0…UC9`, `UD0…UD9`, `UE0…UE9`, `UF0…UF9` (283…342)
(`Models/Countries.cs:674-1018`). У DH такі теги парсер відкидає як невідомі.

Особливості:
* Порівняння тегів — у верхньому регістрі; запис — у верхньому (`Models/Countries.cs:1027-1034`).
* `REB` — повстанці (припущення за назвою); `U00…U99` — резервні теги для країн, визначених модом/подіями
  (припущення).
* Для тегу `CON` файл країни — `congo.inc` (§2.3).

---

## 9. Баги та особливості редактора (НЕ відтворювати як формат гри)

| Проблема | Джерело |
|---|---|
| `supply`, `production`, `reinforcement` при читанні записуються у слайдер `consumer` | `Parsers/ScenarioParser.cs:4382`, `:4397`, `:4412` |
| `allowed_brigades` зберігається в словник дозволених **дивізій** | `Parsers/ScenarioParser.cs:4867` |
| Перевірка помилки `ai_settings` дивиться не на ту змінну | `Parsers/ScenarioParser.cs:5060-5065` |
| Поля `country` до `tag` губляться при злитті | `Parsers/ScenarioParser.cs:3844-3848` |
| Злиття провінцій не переносить `weather` | `Models/Scenarios.cs:1131-1257` |
| `industrial_modifier` пишеться зі значенням `wartime_ic_mod` | `Writers/ScenarioWriter.cs:2072-2075` |
| `can_upgrade`/`can_reinforce` пишуться як `no`, коли прапор у моделі `true` (інверсія) | `Writers/ScenarioWriter.cs:2364-2371`, `:2477-2484`, `:2578-2585` |
| `div_upgr_progress` пишеться зі значенням `experience` | `Writers/ScenarioWriter.cs:2719-2722` |
| `redep_unit_id` пишеться з `id` самої дивізії; `redep_unit_name` — без лапок | `Writers/ScenarioWriter.cs:2727-2736` |
| `defaultorganisation` пишеться лише якщо `organisation > 0` | `Writers/ScenarioWriter.cs:2714-2718` |
| `total_progress` пишеться зі значенням `progress` | `Writers/ScenarioWriter.cs:1568-1571`, `:3275-3278`, `:3987-3990` |
| У `bases.inc` (не DH Full) рядок авіабази отримує зайву `}` | `Writers/ScenarioWriter.cs:702-705` |
| `free.transports/escorts` пишуться у множині, а парсер читає `transport/escort` | `Writers/ScenarioWriter.cs:1827-1834`, `Parsers/ScenarioParser.cs:5350-5377` |
| Не пишуться: `set_ai_aggresive`/`set_difficulty`/`set_gamespeed`, `queued_events`, `weather`, `nuke`, `nukedate`, слайдери, `convoy`; `province` з верхнього `.eug` | `Writers/ScenarioWriter.cs:22-37`, `:178-211`, `:290-304`, `:1606-1648` |
| VP пишеться лише у `vp.inc`; якщо сценарій не мав `vp.inc`, VP при збереженні губиться | `Writers/ScenarioWriter.cs:936-942`, `:1101-1264` |
| `header.startdate` пишеться лише з роком | `Writers/ScenarioWriter.cs:187` |
| `day = 30` у файлі дає внутрішній день 31 | `Parsers/ScenarioParser.cs:9530-9541` |

---

## 10. Відкриті питання

1. Чи справді гра використовує 360-денний календар (12×30), чи це спрощення редактора? Як гра трактує
   `day = 30` (часто в оригінальних файлах)? Перевірити на сейві після переходу через 31-ше число.
2. Знак і точний зміст числа в `save_date` (дні **до** старту чи **після**; від якої дати рахує гра, якщо
   сейв зроблено через роки після старту).
3. Чи мають значення `type` у парах `{type id}` фіксовані простори імен у рушії (6, 9, 10, 9430, 15000,
   16384 — це вибір редактора чи вимога гри)?
4. Семантика `bsize`: голе число (`ic = 2`) — абсолютний розмір, приріст до бази чи «поточний = максимальний»?
   Як співвідносяться `size` і `current_size`?
5. Одиниці слайдерів `consumer`/`supply`/`production`/`reinforcement` (частка 0..1 чи відсотки) і чи мають
   вони в сумі давати 1.
6. Правильне написання ключів у `free = { … }` для конвоїв: `transport`/`escort` (як читає парсер) чи
   `transports`/`escorts` (як пише редактор).
7. Система координат `map.top`/`map.bottom` (`x`, `y`): пікселі якого рівня карти?
8. Значення `weather.pattern.speed` і допустимі значення `heading`.
9. Невідомі поля: `development` (юніт), `waitingforclosure`, `mission.task`, `unitcost`, `new_model`.
10. Відповідність індексів `set_ai_aggresive`/`set_difficulty`/`set_gamespeed` рядкам `FEOPT_*`/`FE_DIFFI*`
    (0-базовий індекс?) і чи читає їх DH взагалі.
11. Розташування і розширення файлів збереження DH (`scenarios\save games\*.eug`?) та чи є в сейвах ключі,
    яких редактор не знає (він їх мовчки пропускає по рядку).
12. Чи збігається порядковий номер тегу (§8) з внутрішнім індексом країни в рушії; чи дозволяє DH теги
    поза цим списком (напр. через `config`/моди).
13. Чи справді рушій толерує пропущені `}` так, як це моделює евристика редактора (§3.3), і чи
    `include` у грі також резолвиться через мод-теку з фолбеком на ваніль.
14. Чи використовує DH ключі `startyear`/`endyear` у `header`, чи лише `startdate`.
15. Розташування `scenario_text.csv` (тека `config`?) і чи гра читає його автоматично.
