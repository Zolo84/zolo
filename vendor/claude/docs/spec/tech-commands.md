# Специфікація: технології, ефекти (команди), тригери, наукові команди, швидкість дослідження (`tech-commands`)

> **Джерело.** Аналіз коду «Alternative HoI2 Editor» (C#), каталог
> `/home/user/pylypenko99/hoi2editor/HoI2Editor` (ревізія `7a0175a`). Посилання виду `Файл.cs:рядок`
> дано відносно цього каталогу. Код і коментарі редактора **не копіювалися**: формати описано власними
> словами, псевдокод — власний (Rust-подібний). Дослівно наведено лише ідентифікатори гри: шляхи, імена
> файлів, ключові слова скриптів, порядок CSV-колонок, ключі локалізації.
>
> **Позначки.** «(припущення)» — висновок, а не факт, прямо прочитаний у коді. «Редактор» — Alternative
> HoI2 Editor. «Гра»/«рушій» — оригінальний `Darkest Hour.exe`. Усе нижче описує, як файли читає й пише
> *редактор*; чи так само їх обробляє рушій DH — треба звіряти на справжніх файлах (див. §7).
>
> **Прочитані файли повністю:** `Models/Tech.cs`, `Models/Techs.cs`, `Parsers/TechParser.cs`,
> `Writers/TechWriter.cs`, `Models/Team.cs`, `Models/Teams.cs`, `Models/Research.cs`,
> `Models/Researches.cs`, `Models/Command.cs`, `Models/Commands.cs`, `Parsers/CommandParser.cs`,
> `Models/Trigger.cs`, `Parsers/TriggerParser.cs`, `Parsers/TextLexer.cs`, `Parsers/CsvLexer.cs`,
> `Parsers/Token.cs`, `Utilities/ObjectHelper.cs`.
> **Частково (за викликами):** `Models/Game.cs`, `Models/GameDate.cs`, `Models/Misc.cs`, `Models/Config.cs`,
> `Utilities/DoubleHelper.cs`, `HoI2EditorController.cs`, `Forms/TechEditorForm.cs`,
> `Forms/TeamEditorForm.cs`, `Forms/ResearchViewerForm.cs`, `Forms/MainForm.cs`,
> `Controllers/TechTreePanelController.cs`.
>
> Суміжні специфікації: лексери, кодові сторінки, моди й локалізація детально — у
> [provinces-config.md](provinces-config.md) (§2.3–2.5, §3.1, §3.3); тут повторено лише те, що потрібно
> для цієї області.

---

## 1. Огляд

Область охоплює п'ять пов'язаних підсистем:

1. **Дерева технологій** — 9 файлів `db\tech\<категорія>_tech.txt`, по одному на категорію
   (`Models/Techs.cs:253-264`). Кожен файл містить один блок `technology = { … }` — «групу», у якій
   упорядкований список елементів трьох видів:
   * `application` — сама технологія (ID, ключі назви/опису, історичний рік, позиції на дереві,
     5 (зазвичай) «компонентів» — етапів дослідження, вимоги AND/OR, ефекти);
   * `label` — текстова мітка-заголовок на дереві (ключ локалізації + позиції);
   * `event` — «блок події-винаходу» на дереві (ID, позиції, пов'язана технологія).
   Модель: `TechGroup` (`Models/Tech.cs:12-222`) зі списком `ITechItem` (`Models/Tech.cs:227-285`), реалізації
   `TechItem` (`Models/Tech.cs:290-1010`), `TechLabel` (`Models/Tech.cs:1015-1316`), `TechEvent`
   (`Models/Tech.cs:1321-1479`). Порядок елементів у файлі зберігається (`Models/Tech.cs:39`, `Parsers/TechParser.cs:247`, `:262`, `:277`).
2. **Команди (ефекти)** — `command = { type = … which = … value = … when = … where = … [trigger = {…}] }`
   усередині `effects` технології. Та сама модель команд використовується для подій (сценарії/події — поза цією
   областю). Набір дозволених `type` залежить від гри та її версії (`Models/Commands.cs:351-648`, `:700-718`).
3. **Тригери** — умови `trigger = { … }`; у технологіях з'являються лише всередині `command` (DH). Редактор
   їх лише розбирає й зберігає, у UI не редагує (у `Forms/` немає звернень до `Triggers`).
4. **Наукові команди (tech teams)** — CSV `db\tech\teams\teams_<tag>.csv` (39 колонок) і, у DH,
   список файлів `db\teams.txt` (`Models/Teams.cs:214-498`).
5. **Швидкість дослідження** — формула, якою редактор («Research Viewer») оцінює кількість днів на
   дослідження технології певною командою (`Models/Research.cs:64-396`). Це *модель редактора*, не код гри.

Ключові для DH розгалуження за типом гри в цій області (усі знайдені):
`Models/Techs.cs:653-654` (набір спеціальностей за версією), `Writers/TechWriter.cs:117` (`picture` лише DH),
`Models/Command.cs:101` (запис тригерів команд лише DH), `Models/Commands.cs:712-715` (набір команд за версією
DH 1.02/1.03/1.04), `Models/Research.cs:122-124`, `:251-282` (формула), `Models/Teams.cs:230-235`, `:649`
(`db\teams.txt`), `Forms/TechEditorForm.cs:1391-1394`, `:2044` (поле картинки лише DH).

---

## 2. Файли та розташування

### 2.1. Перелік файлів

| Шлях (відносно кореня гри/мода) | Що | Читання | Запис | Джерело |
|---|---|---|---|---|
| `db\tech\infantry_tech.txt` | група `infantry` | так | так | `Models/Techs.cs:255`, `Models/Game.cs:253` |
| `db\tech\armor_tech.txt` | група `armor` | так | так | `Models/Techs.cs:256` |
| `db\tech\naval_tech.txt` | група `naval` | так | так | `Models/Techs.cs:257` |
| `db\tech\aircraft_tech.txt` | група `aircraft` | так | так | `Models/Techs.cs:258` |
| `db\tech\industry_tech.txt` | група `industry` | так | так | `Models/Techs.cs:259` |
| `db\tech\land_doctrines_tech.txt` | група `land_doctrines` | так | так | `Models/Techs.cs:260` |
| `db\tech\secret_weapons_tech.txt` | група `secret_weapons` | так | так | `Models/Techs.cs:261` |
| `db\tech\naval_doctrines_tech.txt` | група `naval_doctrines` | так | так | `Models/Techs.cs:262` |
| `db\tech\air_doctrines_tech.txt` | група `air_doctrines` | так | так | `Models/Techs.cs:263` |
| `db\tech\teams\*.csv` | наукові команди, файл на країну | так | так | `Models/Game.cs:248`, `Models/Teams.cs:249-358` |
| `db\teams.txt` | **лише DH**: список CSV-файлів команд | так | так (лише DH) | `Models/Game.cs:343`, `Models/Teams.cs:364-441`, `:649-724` |
| `config\tech_names.csv` | локалізація назв технологій, компонентів, міток | так | так | `Models/Game.cs:393` (формат — див. provinces-config.md §3.3) |
| `gfx\interface\tc_icons.bmp` | смуга іконок спеціальностей 24×24 | так | ні | `Models/Game.cs:363`, `Models/Techs.cs:659-665` |
| `gfx\interface\tc_icon_overlay.bmp` | накладка на іконку (у переглядачі досліджень) | так | ні | `Models/Game.cs:368`, `Forms/ResearchViewerForm.cs:241` |
| `gfx\interface\techtree_<…>.bmp` | фон дерева категорії (9 файлів, див. §4.5) | так | ні | `Controllers/TechTreePanelController.cs:173-184`, `:284` |
| `gfx\interface\button_tech_normal.bmp` | кнопка технології (112×16) | так | ні | `Models/Game.cs:373`, `Controllers/TechTreePanelController.cs:133-138`, `:968-975` |
| `gfx\interface\button_tech_done.bmp` | кнопка дослідженої технології | так | ні | `Models/Game.cs:378` |
| `gfx\interface\button_tech_secret.bmp` | блок `event` (2 кадри по 112×24) | так | ні | `Models/Game.cs:383`, `Controllers/TechTreePanelController.cs:143-148`, `:1044-1061` |
| `gfx\interface\icon_blueprints.bmp` | іконка «креслення» 16×16, малюється в (88,0) кнопки | так | ні | `Models/Game.cs:388`, `Controllers/TechTreePanelController.cs:153-168`, `:980-985` |
| `gfx\interface\tech\<picture або id>.bmp` | картинка технології | так | ні | `Models/Game.cs:283`, `Forms/TechEditorForm.cs:2054-2059` |
| `gfx\interface\pics\<pic>.bmp` | портрет наукової команди | так | ні | `Models/Game.cs:278`, `Forms/TeamEditorForm.cs:1772-1778` |
| `db\misc.txt` | константи дослідження (див. §4.8) | так | — | `Models/Misc.cs:177-262` |

Порядок завантаження файлів технологій фіксований — за порядком переліку `TechCategory`
(`Models/Techs.cs:806-809`, `Models/Tech.cs:1826-1837`); відсутній файл дає виняток → повідомлення про
помилку й можливість скасувати решту (`Models/Techs.cs:815-825`).

### 2.2. Пошук файлів: ванільна гра, мод, «каталог експорту»

* Каталог мода в DH: `<гра>\Mods\<мод>`; в HoI2/AoD — `<гра>\<мод>` (`Models/Game.cs:303`, `:825-850`).
  «Каталог експорту» (окремий мод для запису) будується так само (`Models/Game.cs:855-880`).
* **Читання окремого файлу** (`Game.GetReadFileName`, `Models/Game.cs:585-603`): спершу каталог експорту
  (якщо активний і файл/каталог існує), потім мод, інакше ванільний шлях. Так резолвиться **кожен** з 9
  tech-файлів окремо (`Models/Techs.cs:809`), тобто мод може перекрити лише частину категорій.
* **Запис** (`Game.GetWriteFileName`, `Models/Game.cs:623-635`): у каталог експорту, якщо він заданий,
  інакше в мод, інакше у ванільну теку. Пишуться лише змінені групи (`Models/Techs.cs:903`); ім'я файлу
  береться з **категорії групи**, а не з імені, з якого її прочитано (`Models/Techs.cs:905`). Каталог
  `db\tech` створюється за потреби (`Models/Techs.cs:885-893`).
* **Наукові команди** — інша логіка, див. §3.6.
* Роздільник шляхів у коді — `\` (Windows). Файлова система Windows нечутлива до регістру; редактор
  регістр імен файлів не нормалізує, крім порівняння імен CSV команд (`ToLower`, `Models/Teams.cs:272`,
  `:307`, `:333`). Для Rust-реалізації на Linux потрібен регістронезалежний пошук **(припущення)**.

### 2.3. Кодування та кінці рядків

* Усі файли цієї області (txt і csv) читаються й пишуться в **кодовій сторінці, обраній за мовою**
  (`Game.CodePage`): англійська — **CP1252**, російська — CP1251, японська — CP932 (Shift-JIS),
  корейська — CP949, традиційна китайська — CP950, спрощена — CP936 (`Forms/MainForm.cs:729-761`).
  Читання: `Parsers/TextLexer.cs:112`, `Parsers/CsvLexer.cs:112`; запис: `Writers/TechWriter.cs:22`,
  `Models/Teams.cs:714`, `:743`.
* **Виняток:** `db\teams.txt` читається з кодуванням .NET за замовчуванням (UTF-8), а пишеться в
  `Game.CodePage` (`Models/Teams.cs:419` проти `:714`). Для ASCII-імен різниці немає.
* Запис іде через `WriteLine` → кінці рядків CRLF (Windows) **(припущення: редактор працює під Windows)**.
  Читання приймає CR, LF і CRLF (`Parsers/TextLexer.cs:237-255`; CSV — `ReadLine`, `Parsers/CsvLexer.cs:144`).
* BOM не пишеться (кодові сторінки без преамбули) **(припущення щодо поведінки .NET)**.

### 2.4. Визначення гри та версії (що впливає на цю область)

* DH розпізнається за наявністю `Darkest Hour.exe` у теці гри (`Models/Game.cs:907`).
* Версія DH: у бінарнику шукається ASCII-рядок `Darkest Hour v ` і з наступних символів `X.YZ`
  збирається число `X*100 + Y*10 + Z` (напр. `1.04` → 104); не знайдено → 102 (`Models/Game.cs:1035-1049`).
* Версія впливає на: набір спеціальностей (≥103 → «DH1.03», інакше «DH1.02»; `Models/Techs.cs:654`) і
  набір команд (≥104 → `Dh104`, ≥103 → `Dh103`, інакше `Dh102`; `Models/Commands.cs:712-715`). Версії
  вище 1.04 трактуються як 1.04.

---

## 3. Детальний формат

### 3.1. Лексика скриптових файлів (спільна для tech/command/trigger)

Повний опис — provinces-config.md §3.1.3. Коротко, як це використовує `TechParser`
(лексер створюється з пропуском пробілів, `Parsers/TechParser.cs:30`):

* Пробіли й керівні символи пропускаються; `#` — коментар до кінця рядка (`Parsers/TextLexer.cs:224-270`).
* **Число**: починається з цифри, `-` або `.`; далі цифри й одна десяткова крапка; розбирається як
  `f64` (InvariantCulture) (`Parsers/TextLexer.cs:273-276`, `:335-404`, `Utilities/DoubleHelper.cs:349-352`).
  Якщо після цифр (без `-` і без `.`) іде буква/`_`, токен стає **ідентифікатором** (напр. `1st`)
  (`Parsers/TextLexer.cs:377-394`). `+5` не розпізнається (невалідний токен). Експоненти (`1E-05`) не
  підтримуються.
* **Ідентифікатор**: починається з літери (Unicode `IsLetter` після декодування кодовою сторінкою) або `_`,
  далі літери/цифри/`_` (`Parsers/TextLexer.cs:279-282`, `:410-437`). Крапка, дефіс не входять.
* **Рядок**: у подвійних лапках, без екранування; незакрита лапка закривається кінцем рядка
  (`Parsers/TextLexer.cs:285-289`, `:443-476`).
* Символи `=`, `{`, `}` — окремі токени (`Parsers/TextLexer.cs:292-310`).
* Числові поля, що є цілими в моделі, перетворюються з `f64` відкиданням дробової частини (`(int)(double)`),
  напр. `Parsers/TechParser.cs:141`, `:366`, `:488`.
* **Ключові слова** (`technology`, `id`, `application`, `component`, `type`, `command`, імена тригерів тощо)
  порівнюються **без урахування регістру** (`ToLower`, напр. `Parsers/TechParser.cs:45`, `:117`, `:342`,
  `Parsers/CommandParser.cs:82`, `Parsers/TriggerParser.cs:116`). Значення — див. окремі поля.
* Невідомий ключ у блоці: запис у лог і **пропуск решти поточного рядка** (`lexer.SkipLine()`), напр.
  `Parsers/TechParser.cs:282-283`, `:561-562`. Якщо невідомий ключ відкриває багаторядковий блок, решта
  блоку розбиратиметься як вміст батьківського блоку (особливість редактора).
* Кінець файлу всередині блоку закриває блок мовчки (напр. `Parsers/TechParser.cs:93-96`).

### 3.2. `db\tech\*_tech.txt` — граматика

Псевдограматика (власна нотація; `*` — 0+ разів, `?` — необов'язково; порядок ключів усередині блоків
довільний, якщо не сказано інше):

```
file        := "technology" "=" "{" group_item* "}"
group_item  := "id" "=" NUMBER
             | "category" "=" IDENT          ; регістрочутливо, див. §3.2.1
             | "name" "=" (IDENT | STRING)
             | "desc" "=" (IDENT | STRING)
             | "label" "=" "{" label_item* "}"
             | "event" "=" "{" event_item* "}"
             | "application" "=" "{" app_item* "}"
label_item  := "tag" "=" (IDENT | STRING) | "position" "=" pos
event_item  := "id" "=" NUMBER | "position" "=" pos | "technology" "=" NUMBER
app_item    := "id" "=" NUMBER
             | "name" "=" (IDENT | STRING)
             | "desc" "=" (IDENT | STRING)
             | "position" "=" pos                ; 0..N разів
             | "picture" "=" STRING              ; лише рядок у лапках
             | "year" "=" NUMBER
             | "component" "=" "{" comp_item* "}" ; 0..N разів
             | "required" "=" "{" NUMBER* "}"     ; 0..N разів, зливаються
             | "or_required" "=" "{" NUMBER* "}"  ; 0..N разів, зливаються
             | "effects" "=" "{" ("command" "=" command)* "}" ; 0..N разів, зливаються
pos         := "{" ("x" "=" NUMBER | "y" "=" NUMBER)* "}"
comp_item   := "id" "=" NUMBER
             | "name" "=" (IDENT | STRING)
             | "type" "=" IDENT                  ; спеціальність, без урахування регістру
             | "difficulty" "=" NUMBER
             | "double_time" "=" ("yes" | "no")  ; без урахування регістру
```

Файл має починатися з ідентифікатора `technology`, інакше він не розбирається (`Parsers/TechParser.cs:32-60`).
Усе після закривної `}` групи ігнорується (парсер повертає одразу, `Parsers/TechParser.cs:48-56`).

#### 3.2.1. Група `technology` (`Parsers/TechParser.cs:69-287`, модель `Models/Tech.cs:12-222`)

| Ключ | Тип | Значення / семантика | За замовчуванням | Джерело |
|---|---|---|---|---|
| `id` | число → `i32` | ID групи (сенс для гри невідомий, див. §7) | 0 | `Parsers/TechParser.cs:120-143` |
| `category` | ідентифікатор | одне з `infantry`, `armor`, `naval`, `aircraft`, `industry`, `land_doctrines`, `secret_weapons`, `naval_doctrines`, `air_doctrines`. **Порівнюється з урахуванням регістру** (значення не приводиться до нижнього регістру). Невідоме значення — лог, рядок пропускається | `infantry` (перший член переліку) | `Parsers/TechParser.cs:146-182`, `Models/Techs.cs:232-244` |
| `name` | ідентифікатор або рядок | ключ локалізації назви категорії | `null` | `Parsers/TechParser.cs:185-208` |
| `desc` | ідентифікатор або рядок | ключ локалізації опису категорії | `null` | `Parsers/TechParser.cs:211-234` |
| `label` | блок | мітка дерева, §3.2.2 | — | `Parsers/TechParser.cs:237-249` |
| `event` | блок | блок події-винаходу, §3.2.3 | — | `Parsers/TechParser.cs:252-264` |
| `application` | блок | технологія, §3.2.4 | — | `Parsers/TechParser.cs:267-279` |

`category` у файлі визначає, у **який файл** редактор збереже групу (`Models/Techs.cs:905`). Ім'я файлу,
з якого група прочитана, не запам'ятовується.

#### 3.2.2. `label` (`Parsers/TechParser.cs:573-670`, модель `Models/Tech.cs:1015-1316`)

| Ключ | Тип | Семантика | Джерело |
|---|---|---|---|
| `tag` | ідентифікатор або рядок | ключ локалізації тексту мітки (у `tech_names.csv`) | `Parsers/TechParser.cs:624-647` |
| `position` | блок `{ x y }`, 0..N | кожна позиція — окремий екземпляр мітки на дереві | `Parsers/TechParser.cs:650-662` |

Текст мітки може починатися з **кольорового префікса**: перший символ `%` або `§` (байт 0xA7 у CP1252; у
CP932 той самий байт декодується як `ｧ`, тому редактор перевіряє і його), далі рівно 3 цифри, далі хоча б
один символ тексту (`Models/Tech.cs:1228-1237`, `Controllers/TechTreePanelController.cs:669-676`). Редактор
трактує цифри як `d1 d2 d3` → колір RGB = (`d3·32`, `d2·32`, `d1·32`), тобто **перша цифра — синій, третя —
червоний** (`Controllers/TechTreePanelController.cs:675`); без префікса — білий (`:680`). (Через порядок
викликів редактор насправді завжди малює білим — див. §6.) Відповідність цього кодування рушію DH —
**(припущення)**.

#### 3.2.3. `event` (`Parsers/TechParser.cs:677-800`, модель `Models/Tech.cs:1321-1479`)

| Ключ | Тип | Семантика | Джерело |
|---|---|---|---|
| `id` | число → `i32` | ID «події-винаходу» (у коді — «ID технологічної події»; вважаємо, що це ID події з `db\events` **(припущення)**) | `Parsers/TechParser.cs:728-751` |
| `position` | блок, 0..N | розташування блоку на дереві | `Parsers/TechParser.cs:754-766` |
| `technology` | число → `i32` | ID пов'язаної технології (`application.id`) | `Parsers/TechParser.cs:769-792` |

Малюється картинкою `button_tech_secret.bmp`: кадр x∈[112,224) — «ще не сталася», кадр x∈[0,112) —
«сталася» (`Controllers/TechTreePanelController.cs:1044-1061`, `:457-467`).

#### 3.2.4. `application` — технологія (`Parsers/TechParser.cs:294-566`, модель `Models/Tech.cs:290-1010`)

| Ключ | Тип | Семантика | За замовчуванням | Джерело |
|---|---|---|---|---|
| `id` | число → `i32` | **ID технології**, глобально унікальний між усіма 9 файлами (на дублікати редактор не лається: у мапі ID→tech лишається **перший** за порядком завантаження) | 0 | `Parsers/TechParser.cs:345-368`, `Models/Techs.cs:1018-1030` |
| `name` | ідентифікатор/рядок | ключ локалізації назви. **Ключ короткої назви не зберігається у файлі** — він завжди виводиться як `"SHORT_" + name` | `null` | `Parsers/TechParser.cs:371-397` (`:395`) |
| `desc` | ідентифікатор/рядок | ключ локалізації опису | `null` | `Parsers/TechParser.cs:400-423` |
| `position` | блок, 0..N | кожна — окремий екземпляр кнопки технології на дереві | порожньо | `Parsers/TechParser.cs:426-438` |
| `picture` | **рядок у лапках** (ідентифікатор → помилка) | базове ім'я BMP у `gfx\interface\tech\` без розширення; DH-ключ (див. §5). Якщо порожній/невалідний як шлях — картинка шукається як `<id>.bmp` | `null` | `Parsers/TechParser.cs:441-464`, `Forms/TechEditorForm.cs:2054-2059` |
| `year` | число → `i32` | **історичний рік** (історична дата = 1 січня цього року, §4.8) | 0 | `Parsers/TechParser.cs:467-490`, `Models/GameDate.cs:87-92` |
| `component` | блок, 0..N | етап дослідження, §3.2.6; порядок значущий (досліджуються послідовно, §4.8) | порожньо | `Parsers/TechParser.cs:493-505` |
| `required` | блок чисел, 0..N | ID технологій, **усі** з яких потрібні (AND). Кілька блоків зливаються | порожньо | `Parsers/TechParser.cs:508-524` |
| `or_required` | блок чисел, 0..N | ID технологій, **хоча б одна** з яких потрібна (OR). Кілька блоків зливаються | порожньо | `Parsers/TechParser.cs:527-543` |
| `effects` | блок команд, 0..N | ефекти після завершення дослідження, §3.3. Кілька блоків зливаються | порожньо | `Parsers/TechParser.cs:546-558` |

#### 3.2.5. `position` (`Parsers/TechParser.cs:807-915`, модель `Models/Tech.cs:1484-1585`)

`{ x = N y = N }`; обидва ключі необов'язкові (за замовчуванням 0), цілі. Одиниці — пікселі фонового
зображення дерева відповідної категорії при 96 DPI; точка — **лівий верхній кут** кнопки/мітки
(`Controllers/TechTreePanelController.cs:383`, `:424`, `:450`, `:946-947`). UI редактора обмежує 0..9999
(`Forms/TechEditorForm.Designer.cs:353`, `:364`).

#### 3.2.6. `component` — етап дослідження (`Parsers/TechParser.cs:922-1144`, модель `Models/Tech.cs:1658-1821`)

| Ключ | Тип | Семантика | За замовчуванням (при розборі) | Джерело |
|---|---|---|---|---|
| `id` | число → `i32` | ID компонента. Конвенція редактора: `id технології + 1, +2, …` (див. §4.4) | 0 | `Parsers/TechParser.cs:973-996` |
| `name` | ідентифікатор/рядок | ключ локалізації назви етапу | `null` | `Parsers/TechParser.cs:999-1022` |
| `type` | ідентифікатор, без урахування регістру | **спеціальність** (research type), одне з ключових слів §4.2. Невідоме значення — лог, рядок пропускається. Версійна фільтрація тут **не** виконується (приймається навіть `rt_user_60` у DH 1.02 чи HoI2) | `None` (порожньо) | `Parsers/TechParser.cs:1025-1062`, `Models/Techs.cs:634-637` |
| `difficulty` | число → `i32` | складність (входить у формулу як `difficulty + 2`, §4.8). UI: 0..100 (стандартні межі NumericUpDown, явних не задано) **(припущення щодо меж)** | 0 | `Parsers/TechParser.cs:1065-1088` |
| `double_time` | `yes`/`no` | етап триває вдвічі довше (швидкість ÷2, §4.8) | `no` | `Parsers/TechParser.cs:1091-1136` |

Новий компонент у редакторі: `type = artillery`, `difficulty = 1` (`Models/Tech.cs:1709-1716`).

#### 3.2.7. `required` / `or_required` (`Parsers/TechParser.cs:1151-1197`)

Блок — плаский список чисел (ID технологій). Нечислові токени логуються й **ігноруються** (без пропуску
рядка) (`Parsers/TechParser.cs:1186-1191`). Порядок зберігається.

#### 3.2.8. `effects` (`Parsers/TechParser.cs:1204-1279`)

Усередині дозволений лише ключ `command` (без урахування регістру); кожен розбирається `CommandParser`
(§3.3). Команди з невизначеним `type` (відсутнім, невідомим або недоступним у поточній версії гри)
**відкидаються** (`Parsers/TechParser.cs:1263-1266`) — і, відповідно, зникнуть при збереженні.

#### 3.2.9. Канонічний вивід редактора (`Writers/TechWriter.cs:20-216`)

Редактор переписує файл повністю, у фіксованому порядку ключів, з відступами пробілами. Шаблон (кутові
дужки — підстановки, `[…]` — умовні частини; коментарі `#` пише сам редактор):

```
technology =
{ id          = <group.id>
  category    = <category keyword>
  name        = <group.name> # Localized name
  desc        = <group.desc> # Localized description
  label =
  { tag      = <key>
    position = { x = <x> y = <y> }          ; на кожну позицію
  }
  event =
  { id         = <id>
    position   = { x = <x> y = <y> }        ; на кожну позицію
    technology = <tech id>
  }
  # <локалізована назва технології або порожньо>
  application =
  { id        = <id>
    name      = <name key>
    [desc      = <desc key>]                ; лише якщо desc непорожній
    position  = { x = <x> y = <y> }         ; на кожну позицію
    [picture   = "<picture>"]               ; лише DH і лише якщо непорожній
    year      = <year>
    # <локалізована назва компонента>
    component = { id = <id> name = <key> type = <speciality> difficulty = <n>[ double_time = yes] }
    required  = { <id> <id> … }             ; ЗАВЖДИ, навіть порожній: "required  = { }"
    [or_required = { <id> … }]              ; лише якщо непорожній
    effects =
    { command = { <command> }               ; перша команда на рядку з "{"
      command = { <command> }               ; наступні
    }
  }
}
```

Деталі: `Writers/TechWriter.cs:24-28` (заголовок групи), `:72-78` (`label`), `:88-95` (`event`; зверніть
увагу — `technology` пишеться **після** позицій), `:105-132` (`application`), `:140-154` (`component`;
`double_time` пишеться лише коли `yes`), `:161-184` (`required`/`or_required`), `:191-216` (`effects`).
Порожній список ефектів пишеться як
```
    effects =
    { command = { }
    }
```
(`Writers/TechWriter.cs:193-199`) — при повторному читанні така команда без `type` відкидається
(`Parsers/TechParser.cs:1263`), тож це стабільний round-trip. Елементи групи пишуться в порядку списку
(мітки, події й технології можуть чергуватися). Рядок команди — §3.3.3.

### 3.3. Команда `command = { … }` (`Parsers/CommandParser.cs:28-264`, модель `Models/Command.cs`)

#### 3.3.1. Модель

Команда — це **тип** плюс **чотири необов'язкові нетипізовані скалярні параметри** і список тригерів
(`Models/Command.cs:18-43`):

| Поле | Ключ у файлі | Тип значення в моделі |
|---|---|---|
| `Type` | `type` | елемент переліку `CommandType` (§4.6) |
| `Which` | `which` | `f64` (якщо токен — число) **або** рядок (ідентифікатор чи рядок у лапках) |
| `Value` | `value` | те саме |
| `When` | `when` | те саме |
| `Where` | `where` | те саме |
| `Triggers` | `trigger` | список тригерів (§3.4); кілька блоків `trigger` зливаються (`Parsers/CommandParser.cs:246`) |

Редактор **не має** схеми параметрів для окремих типів: будь-яку команду можна записати з будь-якою
комбінацією `which/value/when/where`; у UI текст поля, що розбирається як число, зберігається як `f64`,
інакше — як рядок (`Forms/TechEditorForm.cs:4914-4941`, `:4988-5015`, `:5062-5089`, `:5136-5163`). Що кожен
параметр означає для конкретного `type` — див. §4.6.3 (лише припущення).

#### 3.3.2. Розбір

* Після `command` мають іти `=` і `{`, інакше команда відкидається (`Parsers/CommandParser.cs:30-44`).
* `type = <IDENT>` — значення приводиться до нижнього регістру й шукається в таблиці команд **поточної
  гри/версії** (`Models/Commands.cs:679-690`); невідоме/недоступне → лог, `type` лишається `None`
  (`Parsers/CommandParser.cs:85-122`). Число чи рядок у лапках як `type` не приймаються (`:97`).
* `which|value|when|where = <NUMBER|IDENT|STRING>` — значення зберігається як є (регістр не змінюється;
  для рядка в лапках лапки знімаються) (`Parsers/CommandParser.cs:125-234`).
* `trigger = { … }` — §3.4 (`Parsers/CommandParser.cs:237-251`).
* **Евристика пропущеної `}`**: якщо трапився неочікуваний токен (не ідентифікатор або невідомий ключ) і він
  стоїть на іншому рядку, ніж останній успішно розібраний параметр, редактор вважає, що в команді забули
  закривну дужку: повертає токен у лексер і завершує команду (`Parsers/CommandParser.cs:64-75`, `:253-260`).
  На тому самому рядку такий токен просто пропускається.
* Помилки в `=`/значенні параметра — лог і продовження без пропуску рядка (`Parsers/CommandParser.cs:89-101` тощо).

#### 3.3.3. Запис (`Models/Command.cs:98-128`)

Команда пишеться в **один рядок** у такому порядку:

```
[trigger = { <T1> <T2> … } ]type = <keyword>[ which = <W>][ when = <X>][ where = <Y>][ value = <V>]
```

* Блок `trigger` пишеться **лише для DH** і лише якщо список непорожній (`Models/Command.cs:101-109`). Для
  HoI2/AoD тригери мовчки втрачаються при збереженні.
* Порядок параметрів фіксований: `which`, `when`, `where`, `value` (`value` — останнім) (`Models/Command.cs:111-126`).
* Значення форматуються `ObjectHelper.ToString` (`Utilities/ObjectHelper.cs:16-39`): `f64` — InvariantCulture
  (`.` як десятковий роздільник, без зайвих нулів; дуже малі/великі числа .NET пише з експонентою,
  напр. `1E-05`, яку власний лексер редактора не прочитає — **(припущення про формат .NET "G")**); рядок —
  **без лапок** (рядок із пробілами після round-trip зламає файл).

### 3.4. Тригер `trigger = { … }` (`Parsers/TriggerParser.cs:53-180`, модель `Models/Trigger.cs`)

#### 3.4.1. Модель

Тригер — це **тип** (`TriggerType`, §4.7) і **значення** (`Models/Trigger.cs:17-22`):
* скаляр (`f64` або рядок), або
* вкладений список тригерів (якщо після `=` іде `{`).

Кожен тип має в таблиці «тип параметра» (`TriggerParamType`, `Models/Trigger.cs:171-306`, `:519-565`), але
**парсер цю таблицю не використовує**: будь-яке ключове слово тригера приймає або скаляр, або `{…}`.
Таблиця потрібна лише при записі (розрізнити контейнер і скаляр) і копіюванні (`Models/Trigger.cs:323-338`, `:348-369`).

#### 3.4.2. Розбір (`Parsers/TriggerParser.cs:79-180`)

```
trigger_block := "{" trig* "}"
trig          := KEYWORD "=" ( "{" trig* "}" | NUMBER | IDENT | STRING )
```

* `KEYWORD` — без урахування регістру, з таблиці §4.7 (`Parsers/TriggerParser.cs:36-42`, `:116-129`). Набір
  ключових слів **не фільтрується за грою/версією**.
* Невідоме ключове слово/невалідний токен → лог; евристика пропущеної `}` така сама, як у команди
  (`Parsers/TriggerParser.cs:99-129`, `:157-169`).
* Порожній блок `{ }` дає «немає списку»: на верхньому рівні команда лишається без тригерів, на вкладеному
  рівні тригер-контейнер **відкидається** (`Parsers/TriggerParser.cs:142-148`, `:179`).

#### 3.4.3. Запис (`Models/Trigger.cs:348-369`)

* Тип із параметром `Container` (`and`, `or`, `not`): `<kw> = { <T1> <T2> … }` (через пробіл, в один рядок).
* Будь-який інший тип: `<kw> = <скаляр>` (рядок без лапок, число InvariantCulture).
* Якщо не-контейнерний тип (напр. `alliance`, `CountryPair`) був записаний у файлі з блоком `{…}`, редактор
  його прочитає як список, але **запише некоректно** (ім'я .NET-типу списку замість вмісту) — баг, §6.

### 3.5. CSV наукових команд `db\tech\teams\*.csv` (`Models/Teams.cs:447-624`, запис `:730-776`)

#### 3.5.1. Лексика CSV (`Parsers/CsvLexer.cs:135-159`)

* Роздільник `;`; **лапки не підтримуються** (рядок просто ділиться за `;`).
* Порожній рядок і рядок, що починається з `#`, — пропускаються (повертається «немає токенів»).
* Пробіли навколо полів не обрізаються (для текстових полів і спеціальностей це значуще; цілі числа
  розбираються `int.TryParse`, який пробіли по краях допускає **(припущення щодо .NET)**).

#### 3.5.2. Структура файлу

1. **Перший рядок — заголовок.** Значення має лише поле 0: **тег країни** (без урахування регістру; має
   бути відомим тегом). Решта заголовка ігнорується. Якщо перший рядок порожній/коментар, або тег
   невідомий — **увесь файл пропускається** (`Models/Teams.cs:459-470`). Файл лише із заголовком —
   пропускається (`:472-476`).
2. **Кожен наступний рядок — одна команда**, 39 полів:

| # | Поле (ім'я з заголовка, що пише редактор) | Тип | Семантика | Якщо не розібралося | Джерело |
|---|---|---|---|---|---|
| 0 | `<TAG>` (у рядках даних — ID) | `i32` | **ID команди**; порожнє поле → рядок пропускається; не-ціле → рядок пропускається | рядок відкидається | `Models/Teams.cs:511-514`, `:531-538` |
| 1 | `Name` | текст | **буквальна назва** (не ключ локалізації) | — | `Models/Teams.cs:541`, `Forms/TeamEditorForm.cs:1576` |
| 2 | `Pic Name` | текст | ім'я картинки в `gfx\interface\pics\`; розширення замінюється на `.bmp` | — | `Models/Teams.cs:545`, `Forms/TeamEditorForm.cs:1772-1778` |
| 3 | `Skill` | `i32` | навичка (у формулі — `s`, §4.8) | 1 (+попередження) | `Models/Teams.cs:549-560` |
| 4 | `Start Year` | `i32` | рік появи команди | 1930 | `Models/Teams.cs:563-574` |
| 5 | `End Year` | `i32` | рік зникнення команди | 1970 | `Models/Teams.cs:577-588` |
| 6..37 | `Speciality1` … `Speciality32` | ключове слово §4.2 або порожньо | до 32 спеціальностей; без урахування регістру | порожньо / невідоме / недоступне в поточній версії → «немає» (+попередження для двох останніх) | `Models/Teams.cs:591-621`, `Models/Team.cs:87` |
| 38 | `x` | літерал `x` | маркер кінця рядка (значення не перевіряється) | — | `Models/Teams.cs:517-525`, `:768` |

* Кількість полів: рівно 39 — норма; 38 (без завершального `x`) — приймається з попередженням; >39 —
  приймається з попередженням (зайві ігноруються); <38 — рядок відкидається (`Models/Teams.cs:517-525`).
* Спеціальності, відомі редактору, але **відсутні в наборі поточної версії гри** (напр. `cavalry_tactics`
  у DH 1.02), стають «немає» (`Models/Teams.cs:612-618`) — і зникнуть при збереженні.

#### 3.5.3. Запис (`Models/Teams.cs:730-776`)

* Ім'я файлу: те, з якого країну було прочитано (перший файл для цього тегу), інакше
  `teams_<тег у нижньому регістрі>.csv` (`Models/Game.cs:742-747`, `Models/Teams.cs:493-496`).
  Каталог — `db\tech\teams` у каталозі запису (§2.2), створюється за потреби.
* Заголовок (дослівно, `<TAG>` — тег країни, як у таблиці тегів, верхній регістр):
  `<TAG>;Name;Pic Name;Skill;Start Year;End Year;Speciality1;Speciality2;…;Speciality32;x`
  (`Models/Teams.cs:746-748`).
* Рядок: `id;name;pic;skill;start;end;s1;…;s32;x`; порожні слоти — порожні поля (`Models/Teams.cs:753-768`).
* Записуються всі команди цієї країни в порядку списку редактора; пишуться лише змінені країни (`:666-684`).

### 3.6. Пошук файлів команд і `db\teams.txt` (DH) (`Models/Teams.cs:214-441`)

**HoI2 / AoD, а також DH без `db\teams.txt`** (`LoadHoI2`, `Models/Teams.cs:249-358`):
1. усі `*.csv` з `db\tech\teams` каталогу експорту (якщо активний);
2. усі `*.csv` з `db\tech\teams` мода (якщо активний);
3. усі `*.csv` ванільної теки, **крім** тих, чиє ім'я (без урахування регістру) вже завантажено на кроках 1–2.

(Файл з тим самим ім'ям в експорті *і* в моді буде завантажено двічі — особливість, §6.)

**DH з `db\teams.txt`** (`LoadDh`, `Models/Teams.cs:364-409`): `db\teams.txt` резолвиться як звичайний файл
(експорт → мод → ваніль). Якщо знайдено — завантажуються **лише** перелічені в ньому файли, кожен
резолвиться окремо як `db\tech\teams\<ім'я>` (експорт → мод → ваніль). Інакше — алгоритм вище.

Формат `db\teams.txt` (`Models/Teams.cs:414-441`): текстовий файл, одне ім'я CSV-файлу на рядок; порожні рядки
й рядки, що починаються з `#`, ігноруються; пробіли не обрізаються. Запис (`:701-724`) — лише для DH і лише
коли список змінено (напр. пакетне копіювання/переміщення команд до країни, якої ще не було, `:893-898`,
`:916-921`): по одному імені на рядок, без коментарів, у порядку мапи «країна → файл».

Кілька файлів з однаковим тегом: усі команди завантажуються, але при збереженні всі команди країни підуть
в один (перший) файл (`Models/Teams.cs:493-496`, `:751`).

---

## 4. Семантика

### 4.1. Категорії технологій

| # | Ключове слово (`category`) | Ім'я файлу | Інфікс ключів локалізації | Фон дерева (`gfx\interface\`) |
|---|---|---|---|---|
| 0 | `infantry` | `infantry_tech.txt` | `INFANTRY` | `techtree_infantry.bmp` |
| 1 | `armor` | `armor_tech.txt` | `ARMOR` | `techtree_armor.bmp` |
| 2 | `naval` | `naval_tech.txt` | `NAVAL` | `techtree_naval.bmp` |
| 3 | `aircraft` | `aircraft_tech.txt` | `AIRCRAFT` | `techtree_aircraft.bmp` |
| 4 | `industry` | `industry_tech.txt` | `INDUSTRY` | `techtree_industry.bmp` |
| 5 | `land_doctrines` | `land_doctrines_tech.txt` | `LD` | `techtree_land_doctrine.bmp` (**однина**) |
| 6 | `secret_weapons` | `secret_weapons_tech.txt` | `SW` | `techtree_secret_weapons.bmp` |
| 7 | `naval_doctrines` | `naval_doctrines_tech.txt` | `ND` | `techtree_naval_doctrines.bmp` |
| 8 | `air_doctrines` | `air_doctrines_tech.txt` | `AD` | `techtree_air_doctrines.bmp` |

Джерела: `Models/Tech.cs:1826-1837`, `Models/Techs.cs:83-110`, `:232-264`,
`Controllers/TechTreePanelController.cs:173-184`. Номер `#` — внутрішній порядок редактора (порядок
завантаження), у файлах не записується.

### 4.2. Спеціальності (research types)

Ключове слово пишеться в `component.type` і в колонках `Speciality1..32` CSV команд; ключ локалізації
`RT_*` — назва для UI (`Models/Techs.cs:1212-1216`). `#` — внутрішнє значення переліку редактора
(`Models/Tech.cs:1842-1958`), **не** ігрове число. «Іконка» — індекс 24×24-кадру в `tc_icons.bmp` для
HoI2·AoD / DH 1.02 / DH 1.03+: редактор бере позицію спеціальності в наборі поточної версії мінус 1
(`Forms/TeamEditorForm.cs:680-683`, `Forms/ResearchViewerForm.cs:455-458`), прозорий колір — піксель (0,0)
(`Models/Techs.cs:659-665`). Що рушій нумерує іконки так само — **(припущення)**.

Набори за версією: HoI2/AoD — `Models/Techs.cs:269-306`; DH 1.02 — `:311-378`; DH 1.03+ — `:383-495`;
вибір — `:646-656`.

| # | Ключове слово | Ключ назви | HoI2/AoD | DH 1.02 | DH 1.03+ | Іконка (HoI2·AoD / 1.02 / 1.03) | Джерело (рядок ключа, рядок RT_) |
|---|---|---|---|---|---|---|---|
| 0 | *(порожньо)* | — | «немає» | «немає» | «немає» | — | Models/Techs.cs:117, :502 |
| 1 | `artillery` | `RT_ARTILLERY` | + | + | + | 0 / 0 / 0 | Models/Techs.cs:118, :503 |
| 2 | `mechanics` | `RT_MECHANICS` | + | + | + | 1 / 1 / 1 | Models/Techs.cs:119, :504 |
| 3 | `electronics` | `RT_ELECTRONICS` | + | + | + | 2 / 2 / 2 | Models/Techs.cs:120, :505 |
| 4 | `chemistry` | `RT_CHEMISTRY` | + | + | + | 3 / 3 / 3 | Models/Techs.cs:121, :506 |
| 5 | `training` | `RT_TRAINING` | + | + | + | 4 / 4 / 4 | Models/Techs.cs:122, :507 |
| 6 | `general_equipment` | `RT_GENERAL_EQUIPMENT` | + | + | + | 5 / 5 / 5 | Models/Techs.cs:123, :508 |
| 7 | `rocketry` | `RT_ROCKETRY` | + | + | + | 6 / 6 / 6 | Models/Techs.cs:124, :509 |
| 8 | `naval_engineering` | `RT_NAVAL_ENGINEERING` | + | + | + | 7 / 7 / 7 | Models/Techs.cs:125, :510 |
| 9 | `aeronautics` | `RT_AERONAUTICS` | + | + | + | 8 / 8 / 8 | Models/Techs.cs:126, :511 |
| 10 | `nuclear_physics` | `RT_NUCLEAR_PHYSICS` | + | + | + | 9 / 9 / 9 | Models/Techs.cs:127, :512 |
| 11 | `nuclear_engineering` | `RT_NUCLEAR_ENGINEERING` | + | + | + | 10 / 10 / 10 | Models/Techs.cs:128, :513 |
| 12 | `management` | `RT_MANAGEMENT` | + | + | + | 11 / 11 / 11 | Models/Techs.cs:129, :514 |
| 13 | `industrial_engineering` | `RT_INDUSTRIAL_ENGINEERING` | + | + | + | 12 / 12 / 12 | Models/Techs.cs:130, :515 |
| 14 | `mathematics` | `RT_MATHEMATICS` | + | + | + | 13 / 13 / 13 | Models/Techs.cs:131, :516 |
| 15 | `small_unit_tactics` | `RT_SMALL_UNIT_TACTICS` | + | + | + | 14 / 14 / 14 | Models/Techs.cs:132, :517 |
| 16 | `large_unit_tactics` | `RT_LARGE_UNIT_TACTICS` | + | + | + | 15 / 15 / 15 | Models/Techs.cs:133, :518 |
| 17 | `centralized_execution` | `RT_CENTRALIZED_EXECUTION` | + | + | + | 16 / 16 / 16 | Models/Techs.cs:134, :519 |
| 18 | `decentralized_execution` | `RT_DECENTRALIZED_EXECUTION` | + | + | + | 17 / 17 / 17 | Models/Techs.cs:135, :520 |
| 19 | `technical_efficiency` | `RT_TECHNICAL_EFFICIENCY` | + | + | + | 18 / 18 / 18 | Models/Techs.cs:136, :521 |
| 20 | `individual_courage` | `RT_INDIVIDUAL_COURAGE` | + | + | + | 19 / 19 / 19 | Models/Techs.cs:137, :522 |
| 21 | `infantry_focus` | `RT_INFANTRY_FOCUS` | + | + | + | 20 / 20 / 20 | Models/Techs.cs:138, :523 |
| 22 | `combined_arms_focus` | `RT_COMBINED_ARMS_FOCUS` | + | + | + | 21 / 21 / 21 | Models/Techs.cs:139, :524 |
| 23 | `large_unit_focus` | `RT_LARGE_UNIT_FOCUS` | + | + | + | 22 / 22 / 22 | Models/Techs.cs:140, :525 |
| 24 | `naval_artillery` | `RT_NAVAL_ARTILLERY` | + | + | + | 23 / 23 / 23 | Models/Techs.cs:141, :526 |
| 25 | `naval_training` | `RT_NAVAL_TRAINING` | + | + | + | 24 / 24 / 24 | Models/Techs.cs:142, :527 |
| 26 | `aircraft_testing` | `RT_AIRCRAFT_TESTING` | + | + | + | 25 / 25 / 25 | Models/Techs.cs:143, :528 |
| 27 | `fighter_tactics` | `RT_FIGHTER_TACTICS` | + | + | + | 26 / 26 / 26 | Models/Techs.cs:144, :529 |
| 28 | `bomber_tactics` | `RT_BOMBER_TACTICS` | + | + | + | 27 / 27 / 27 | Models/Techs.cs:145, :530 |
| 29 | `carrier_tactics` | `RT_CARRIER_TACTICS` | + | + | + | 28 / 28 / 28 | Models/Techs.cs:146, :531 |
| 30 | `submarine_tactics` | `RT_SUBMARINE_TACTICS` | + | + | + | 29 / 29 / 29 | Models/Techs.cs:147, :532 |
| 31 | `large_taskforce_tactics` | `RT_LARGE_TASKFORCE_TACTICS` | + | + | + | 30 / 30 / 30 | Models/Techs.cs:148, :533 |
| 32 | `small_taskforce_tactics` | `RT_SMALL_TASKFORCE_TACTICS` | + | + | + | 31 / 31 / 31 | Models/Techs.cs:149, :534 |
| 33 | `seamanship` | `RT_SEAMANSHIP` | + | + | + | 32 / 32 / 32 | Models/Techs.cs:150, :535 |
| 34 | `piloting` | `RT_PILOTING` | + | + | + | 33 / 33 / 33 | Models/Techs.cs:151, :536 |
| 35 | `avionics` | `RT_AVIONICS` | — | + | + | — / 34 / 34 | Models/Techs.cs:152, :537 |
| 36 | `munitions` | `RT_MUNITIONS` | — | + | + | — / 35 / 35 | Models/Techs.cs:153, :538 |
| 37 | `vehicle_engineering` | `RT_VEHICLE_ENGINEERING` | — | + | + | — / 36 / 36 | Models/Techs.cs:154, :539 |
| 38 | `carrier_design` | `RT_CARRIER_DESIGN` | — | + | + | — / 37 / 37 | Models/Techs.cs:155, :540 |
| 39 | `submarine_design` | `RT_SUBMARINE_DESIGN` | — | + | + | — / 38 / 38 | Models/Techs.cs:156, :541 |
| 40 | `fighter_design` | `RT_FIGHTER_DESIGN` | — | + | + | — / 39 / 39 | Models/Techs.cs:157, :542 |
| 41 | `bomber_design` | `RT_BOMBER_DESIGN` | — | + | + | — / 40 / 40 | Models/Techs.cs:158, :543 |
| 42 | `mountain_training` | `RT_MOUNTAIN_TRAINING` | — | + | + | — / 41 / 41 | Models/Techs.cs:159, :544 |
| 43 | `airborne_training` | `RT_AIRBORNE_TRAINING` | — | + | + | — / 42 / 42 | Models/Techs.cs:160, :545 |
| 44 | `marine_training` | `RT_MARINE_TRAINING` | — | + | + | — / 43 / 43 | Models/Techs.cs:161, :546 |
| 45 | `maneuver_tactics` | `RT_MANEUVER_TACTICS` | — | + | + | — / 44 / 44 | Models/Techs.cs:162, :547 |
| 46 | `blitzkrieg_tactics` | `RT_BLITZKRIEG_TACTICS` | — | + | + | — / 45 / 45 | Models/Techs.cs:163, :548 |
| 47 | `static_defense_tactics` | `RT_STATIC_DEFENSE_TACTICS` | — | + | + | — / 46 / 46 | Models/Techs.cs:164, :549 |
| 48 | `medicine` | `RT_MEDICINE` | — | + | + | — / 47 / 47 | Models/Techs.cs:165, :550 |
| 49 | `cavalry_tactics` | `RT_CAVALRY_TACTICS` | — | — | + | — / — / 48 | Models/Techs.cs:166, :551 |
| 50–65 | `rt_user_1` … `rt_user_16` | `RT_USER_1` … `RT_USER_16` | — | + | + | — / 48–63 / 49–64 | Models/Techs.cs:167-182, :552-567 |
| 66–109 | `rt_user_17` … `rt_user_60` | `RT_USER_17` … `RT_USER_60` | — | — | + | — / — / 65–108 | Models/Techs.cs:183-226, :568-611 |

Нюанси:
* Порожній рядок також є ключем у мапі «рядок → спеціальність» і означає «немає» (`Models/Techs.cs:117`,
  `:634-637`); у CSV порожнє поле обробляється окремо (`Models/Teams.cs:596-600`).
* `rt_user_N` — користувацькі спеціальності DH для модів (у DH 1.02 — 16, з DH 1.03 — 60;
  `Models/Tech.cs:1898-1957`, коментар на `:1914`). Назви — ключі `RT_USER_N` у локалізації.

### 4.3. Ключі локалізації технологій (`config\tech_names.csv`)

Файл перекладу всіх ключів цієї області — `tech_names.csv` (`Models/Game.cs:393`; формат рядка — див.
provinces-config.md §3.3). Ключі не чутливі до регістру (редактор приводить до верхнього, `Models/Config.cs:1116-1125`,
`:871-877`). Ігрові файли посилаються на ключі довільних імен; редактор при збереженні перейменовує **лише
нові (тимчасові)** ключі за схемою (`Models/Tech.cs:639-758`, `:1129-1158`, `Models/Techs.cs:950-991`):

| Що | Шаблон ключа | Джерело |
|---|---|---|
| Назва технології | `TECH_APP_<CAT>_<n>_NAME` | `Models/Tech.cs:648` |
| Коротка назва (на кнопці дерева) | `SHORT_TECH_APP_<CAT>_<n>_NAME` (= `"SHORT_" + name`) | `Models/Tech.cs:674`, `Parsers/TechParser.cs:395` |
| Опис технології | `TECH_APP_<CAT>_<n>_DESC` | `Models/Tech.cs:700` |
| Назва компонента | `TECH_CMP_<CAT>_<n>_<i>_NAME` (`i` — 1-based порядковий номер, з пропуском зайнятих) | `Models/Tech.cs:729-734` |
| Мітка дерева | `TECH_CAT_<CAT>_<n>`; старий формат `TECH_CAT_<n>` теж мігрується | `Models/Tech.cs:1036-1041`, `:1134-1137` |

`<CAT>` — інфікс із §4.1; `<n>` — номер, спільний для назви/опису/компонентів однієї технології, шукається
як перший вільний (`Models/Tech.cs:766-806`). Тимчасові ключі редактора мають вигляд `_EDITOR_TEMP_<число>`
(`Models/Config.cs:144`) і у файли гри потрапляти не повинні.

### 4.4. Ідентифікатори

* **ID технології** — глобальний, між усіма категоріями (`Models/Techs.cs:1018-1030`). Конвенція редактора
  для нових: крок 10 (новий = ID вибраної + 10, інакше пошук з 1010; зайнятий → +10)
  (`Forms/TechEditorForm.cs:685-694`, `:712`, `Models/Techs.cs:1037-1045`). Чи вимагає гра кратності 10 — §7.
* **ID компонентів** — нові отримують `id технології + 1, +2, …` (перший вільний у межах технології)
  (`Models/Tech.cs:428`, `:458`, `:526-535`). Нова технологія створюється з **5** компонентами
  (`Models/Tech.cs:453-461`), роком 1936 (`Forms/TechEditorForm.cs:666`).
* `required`/`or_required`/`event.technology` посилаються на ID технологій.
* **ID наукової команди** — множина використаних ID глобальна (не по країні) (`Models/Team.cs:20-29`,
  `Models/Teams.cs:34`); новий = max(ID країни)+1, далі +1 до вільного (`Models/Teams.cs:1061-1100`).

### 4.5. Дерево технологій (координати й відображення)

* Кожен елемент може мати кілька `position` — малюється у кожній (`Controllers/TechTreePanelController.cs:338-344`).
* Кнопка технології: 112×16 px з `button_tech_normal.bmp` (або `_done`), прозорий колір — піксель (0,0);
  поверх — **коротка назва** (`SHORT_…`) у точці (6,2) кнопки (`Controllers/TechTreePanelController.cs:133-138`,
  `:634-647`, `:959-1037`).
* Мітка: текст у білому кольорі (або кольорі префікса), розмір за текстом (`Controllers/TechTreePanelController.cs:420-428`, `:655-684`).
* Блок `event`: 112×24 (`Controllers/TechTreePanelController.cs:143-148`).
* Картинка технології (лише вікно редактора, не дерево): `gfx\interface\tech\<picture>.bmp`, або
  `<id>.bmp`, якщо `picture` порожній (`Forms/TechEditorForm.cs:2054-2059`). Для HoI2/AoD — завжди `<id>.bmp`
  **(припущення: поле `picture` там не використовується грою)**.

### 4.6. Команди (ефекти)

#### 4.6.1. Набори за грою/версією

Редактор має одну таблицю з 295 типів (`None` + 294) і матрицю доступності 295×8 (`Models/Commands.cs:351-648`),
стовпці: `Dda12`, `Dda13`, `Aod104`, `Aod107`, `Aod108`, `Dh102`, `Dh103`, `Dh104` (`Models/Commands.cs:726-736`).
Вибір стовпця (`Models/Commands.cs:700-718`): HoI2 ≥1.30 → `Dda13`, інакше `Dda12`; AoD ≥1.08 → `Aod108`,
≤1.04 → `Aod104`, інакше `Aod107`; DH ≥1.04 → `Dh104`, ≥1.03 → `Dh103`, інакше `Dh102`. Таблиця
перевіряється перед кожним завантаженням технологій і перебудовується, якщо змінився стовпець гри/версії
(`Models/Techs.cs:801`, `Models/Commands.cs:657-674`).

Кількість доступних типів: DDA1.2/1.3 — 237; AoD 1.04 — 248, 1.07 — 260, 1.08 — 261; **DH 1.02 — 264,
DH 1.03 — 270, DH 1.04 — 271** (підраховано з `Models/Commands.cs:351-648`).

**Лише в DH** (немає в жодній HoI2/AoD): `carrier_level`, `out_of_fuel_speed`, `no_fuel_combat_mod`,
`no_supplies_combat_mod`, `suppression`, `softness`, `toughness`, `alliance_leader`, `alliance_name`,
`stockpile`, `auto_trade`, `auto_trade_reset`, `military_control`, `flag_ext`, `embargo`, `name`, `secedearea`,
`secederegion`, `trade`, `wartime_ic_mod`, `addclaim`, `removeclaim`, `strength`, `event`, `wakeminister`,
`demobilize` (з DH 1.02); `plain_attack`, `plain_defense`, `plain_move`, `clear_attack`, `clear_defense`,
`strength_cap` (з DH 1.03); `remove_units` (з DH 1.04).

**Немає в DH** (є лише в AoD, частина й у DDA): `change_idea`, `change_partisan_activity`,
`set_partisan_activity`, `change_unit_xp`, `set_unit_xp`, `change_leader_xp`, `set_leader_xp`,
`change_retool_time`, `set_retool_time`, `peace_with_all`, `access_to_alliance`, `grant_military_control`,
`end_military_control`, `add_team_skill`, `set_team_skill`, `add_team_research_type`,
`remove_team_research_type`, `giveteam`, `giveleader`, `add_leader_trait`, `remove_leader_trait`,
`artillery_bombardment`, `building_eff_mod`. (`add_leader_skill` є в AoD і в усіх DH, але не в DDA.)

#### 4.6.2. Повний перелік

`#` — значення переліку `CommandType` редактора (не ігрове число). Колонки доступності: `+` є, `—` немає;
«DDA» — 1.2 і 1.3; «AoD» — 1.04, 1.07, 1.08. Джерела: рядок члена переліку (`Command.cs`), рядок
ключового слова (`Commands.cs`), рядок матриці доступності (`Commands.cs`).

| # | `type` | Перелік | DH 1.02 | DH 1.03 | DH 1.04 | DDA | AoD | Джерело |
|---|---|---|---|---|---|---|---|---|
| 0 | *(порожньо)* | None | — | — | — | — | — | Models/Command.cs:203, Models/Commands.cs:47, :353 |
| 1 | `endgame` | Endgame | + | + | + | ++ | +++ | Models/Command.cs:204, Models/Commands.cs:48, :354 |
| 2 | `setflag` | SetFlag | + | + | + | ++ | +++ | Models/Command.cs:205, Models/Commands.cs:49, :355 |
| 3 | `clrflag` | ClrFlag | + | + | + | ++ | +++ | Models/Command.cs:206, Models/Commands.cs:50, :356 |
| 4 | `local_setflag` | LocalSetFlag | + | + | + | ++ | +++ | Models/Command.cs:207, Models/Commands.cs:51, :357 |
| 5 | `local_clrflag` | LocalClrFlag | + | + | + | ++ | +++ | Models/Command.cs:208, Models/Commands.cs:52, :358 |
| 6 | `regime_falls` | RegimeFalls | + | + | + | ++ | +++ | Models/Command.cs:209, Models/Commands.cs:53, :359 |
| 7 | `inherit` | Inherit | + | + | + | ++ | +++ | Models/Command.cs:210, Models/Commands.cs:54, :360 |
| 8 | `country` | Country | + | + | + | ++ | +++ | Models/Command.cs:211, Models/Commands.cs:55, :361 |
| 9 | `addcore` | AddCore | + | + | + | ++ | +++ | Models/Command.cs:212, Models/Commands.cs:56, :362 |
| 10 | `removecore` | RemoveCore | + | + | + | ++ | +++ | Models/Command.cs:213, Models/Commands.cs:57, :363 |
| 11 | `secedeprovince` | SecedeProvince | + | + | + | ++ | +++ | Models/Command.cs:214, Models/Commands.cs:58, :364 |
| 12 | `control` | Control | + | + | + | ++ | +++ | Models/Command.cs:215, Models/Commands.cs:59, :365 |
| 13 | `capital` | Capital | + | + | + | ++ | +++ | Models/Command.cs:216, Models/Commands.cs:60, :366 |
| 14 | `civil_war` | CivilWar | + | + | + | ++ | +++ | Models/Command.cs:217, Models/Commands.cs:61, :367 |
| 15 | `change_idea` | ChangeIdea | — | — | — | —— | —++ | Models/Command.cs:218, Models/Commands.cs:62, :368 |
| 16 | `belligerence` | Belligerence | + | + | + | ++ | +++ | Models/Command.cs:219, Models/Commands.cs:63, :369 |
| 17 | `dissent` | Dissent | + | + | + | ++ | +++ | Models/Command.cs:220, Models/Commands.cs:64, :370 |
| 18 | `province_revoltrisk` | ProvinceRevoltRisk | + | + | + | ++ | +++ | Models/Command.cs:221, Models/Commands.cs:65, :371 |
| 19 | `domestic` | Domestic | + | + | + | ++ | +++ | Models/Command.cs:222, Models/Commands.cs:66, :372 |
| 20 | `set_domestic` | SetDomestic | + | + | + | ++ | +++ | Models/Command.cs:223, Models/Commands.cs:67, :373 |
| 21 | `change_policy` | ChangePolicy | + | + | + | ++ | +++ | Models/Command.cs:224, Models/Commands.cs:68, :374 |
| 22 | `change_partisan_activity` | ChangePartisanActivity | — | — | — | —— | —++ | Models/Command.cs:225, Models/Commands.cs:69, :375 |
| 23 | `set_partisan_activity` | SetPartisanActivity | — | — | — | —— | —++ | Models/Command.cs:226, Models/Commands.cs:70, :376 |
| 24 | `change_unit_xp` | ChangeUnitXp | — | — | — | —— | —++ | Models/Command.cs:227, Models/Commands.cs:71, :377 |
| 25 | `set_unit_xp` | SetUnitXp | — | — | — | —— | —++ | Models/Command.cs:228, Models/Commands.cs:72, :378 |
| 26 | `change_leader_xp` | ChangeLeaderXp | — | — | — | —— | —++ | Models/Command.cs:229, Models/Commands.cs:73, :379 |
| 27 | `set_leader_xp` | SetLeaderXp | — | — | — | —— | —++ | Models/Command.cs:230, Models/Commands.cs:74, :380 |
| 28 | `change_retool_time` | ChangeRetoolTime | — | — | — | —— | —++ | Models/Command.cs:231, Models/Commands.cs:75, :381 |
| 29 | `set_retool_time` | SetRetoolTime | — | — | — | —— | —++ | Models/Command.cs:232, Models/Commands.cs:76, :382 |
| 30 | `independence` | Independence | + | + | + | ++ | +++ | Models/Command.cs:233, Models/Commands.cs:77, :383 |
| 31 | `alliance` | Alliance | + | + | + | ++ | +++ | Models/Command.cs:234, Models/Commands.cs:78, :384 |
| 32 | `leave_alliance` | LeaveAlliance | + | + | + | ++ | +++ | Models/Command.cs:235, Models/Commands.cs:79, :385 |
| 33 | `relation` | Relation | + | + | + | ++ | +++ | Models/Command.cs:236, Models/Commands.cs:80, :386 |
| 34 | `set_relation` | SetRelation | + | + | + | ++ | +++ | Models/Command.cs:237, Models/Commands.cs:81, :387 |
| 35 | `peace` | Peace | + | + | + | ++ | +++ | Models/Command.cs:238, Models/Commands.cs:82, :388 |
| 36 | `peace_with_all` | PeaceWithAll | — | — | — | —— | —++ | Models/Command.cs:239, Models/Commands.cs:83, :389 |
| 37 | `war` | War | + | + | + | ++ | +++ | Models/Command.cs:240, Models/Commands.cs:84, :390 |
| 38 | `end_puppet` | EndPuppet | + | + | + | ++ | +++ | Models/Command.cs:241, Models/Commands.cs:85, :391 |
| 39 | `end_mastery` | EndMastery | + | + | + | ++ | +++ | Models/Command.cs:242, Models/Commands.cs:86, :392 |
| 40 | `make_puppet` | MakePuppet | + | + | + | ++ | +++ | Models/Command.cs:243, Models/Commands.cs:87, :393 |
| 41 | `coup_nation` | CoupNation | + | + | + | ++ | +++ | Models/Command.cs:244, Models/Commands.cs:88, :394 |
| 42 | `access` | Access | + | + | + | ++ | +++ | Models/Command.cs:245, Models/Commands.cs:89, :395 |
| 43 | `end_access` | EndAccess | + | + | + | ++ | +++ | Models/Command.cs:246, Models/Commands.cs:90, :396 |
| 44 | `access_to_alliance` | AccessToAlliance | — | — | — | —— | ——+ | Models/Command.cs:247, Models/Commands.cs:91, :397 |
| 45 | `end_non_aggression` | EndNonAggression | + | + | + | ++ | +++ | Models/Command.cs:248, Models/Commands.cs:92, :398 |
| 46 | `non_aggression` | NonAggression | + | + | + | ++ | +++ | Models/Command.cs:249, Models/Commands.cs:93, :399 |
| 47 | `end_trades` | EndTrades | + | + | + | ++ | +++ | Models/Command.cs:250, Models/Commands.cs:94, :400 |
| 48 | `end_guarantee` | EndGuarantee | + | + | + | ++ | +++ | Models/Command.cs:251, Models/Commands.cs:95, :401 |
| 49 | `guarantee` | Guarantee | + | + | + | ++ | +++ | Models/Command.cs:252, Models/Commands.cs:96, :402 |
| 50 | `grant_military_control` | GrantMilitaryControl | — | — | — | —— | —++ | Models/Command.cs:253, Models/Commands.cs:97, :403 |
| 51 | `end_military_control` | EndMilitaryControl | — | — | — | —— | —++ | Models/Command.cs:254, Models/Commands.cs:98, :404 |
| 52 | `add_team_skill` | AddTeamSkill | — | — | — | —— | +++ | Models/Command.cs:255, Models/Commands.cs:99, :405 |
| 53 | `set_team_skill` | SetTeamSkill | — | — | — | —— | +++ | Models/Command.cs:256, Models/Commands.cs:100, :406 |
| 54 | `add_team_research_type` | AddTeamResearchType | — | — | — | —— | +++ | Models/Command.cs:257, Models/Commands.cs:101, :407 |
| 55 | `remove_team_research_type` | RemoveTeamResearchType | — | — | — | —— | +++ | Models/Command.cs:258, Models/Commands.cs:102, :408 |
| 56 | `sleepteam` | SleepTeam | + | + | + | ++ | +++ | Models/Command.cs:259, Models/Commands.cs:103, :409 |
| 57 | `waketeam` | WakeTeam | + | + | + | ++ | +++ | Models/Command.cs:260, Models/Commands.cs:104, :410 |
| 58 | `giveteam` | GiveTeam | — | — | — | —— | +++ | Models/Command.cs:261, Models/Commands.cs:105, :411 |
| 59 | `sleepminister` | SleepMinister | + | + | + | ++ | +++ | Models/Command.cs:262, Models/Commands.cs:106, :412 |
| 60 | `sleepleader` | SleepLeader | + | + | + | ++ | +++ | Models/Command.cs:263, Models/Commands.cs:107, :413 |
| 61 | `wakeleader` | WakeLeader | + | + | + | ++ | +++ | Models/Command.cs:264, Models/Commands.cs:108, :414 |
| 62 | `giveleader` | GiveLeader | — | — | — | —— | +++ | Models/Command.cs:265, Models/Commands.cs:109, :415 |
| 63 | `set_leader_skill` | SetLeaderSkill | + | + | + | ++ | +++ | Models/Command.cs:266, Models/Commands.cs:110, :416 |
| 64 | `add_leader_skill` | AddLeaderSkill | + | + | + | —— | +++ | Models/Command.cs:267, Models/Commands.cs:111, :417 |
| 65 | `add_leader_trait` | AddLeaderTrait | — | — | — | —— | +++ | Models/Command.cs:268, Models/Commands.cs:112, :418 |
| 66 | `remove_leader_trait` | RemoveLeaderTrait | — | — | — | —— | +++ | Models/Command.cs:269, Models/Commands.cs:113, :419 |
| 67 | `allow_dig_in` | AllowDigIn | + | + | + | ++ | +++ | Models/Command.cs:270, Models/Commands.cs:114, :420 |
| 68 | `build_division` | BuildDivision | + | + | + | ++ | +++ | Models/Command.cs:271, Models/Commands.cs:115, :421 |
| 69 | `add_corps` | AddCorps | + | + | + | ++ | +++ | Models/Command.cs:272, Models/Commands.cs:116, :422 |
| 70 | `activate_division` | ActivateDivision | + | + | + | ++ | +++ | Models/Command.cs:273, Models/Commands.cs:117, :423 |
| 71 | `add_division` | AddDivision | + | + | + | ++ | +++ | Models/Command.cs:274, Models/Commands.cs:118, :424 |
| 72 | `remove_division` | RemoveDivision | + | + | + | ++ | +++ | Models/Command.cs:275, Models/Commands.cs:119, :425 |
| 73 | `damage_division` | DamageDivision | + | + | + | ++ | +++ | Models/Command.cs:276, Models/Commands.cs:120, :426 |
| 74 | `disorg_division` | DisorgDivision | + | + | + | ++ | +++ | Models/Command.cs:277, Models/Commands.cs:121, :427 |
| 75 | `delete_unit` | DeleteUnit | + | + | + | ++ | +++ | Models/Command.cs:278, Models/Commands.cs:122, :428 |
| 76 | `switch_allegiance` | SwitchAllegiance | + | + | + | ++ | +++ | Models/Command.cs:279, Models/Commands.cs:123, :429 |
| 77 | `scrap_model` | ScrapModel | + | + | + | ++ | +++ | Models/Command.cs:280, Models/Commands.cs:124, :430 |
| 78 | `lock_division` | LockDivision | + | + | + | ++ | +++ | Models/Command.cs:281, Models/Commands.cs:125, :431 |
| 79 | `unlock_division` | UnlockDivision | + | + | + | ++ | +++ | Models/Command.cs:282, Models/Commands.cs:126, :432 |
| 80 | `new_model` | NewModel | + | + | + | ++ | +++ | Models/Command.cs:283, Models/Commands.cs:127, :433 |
| 81 | `activate_unit_type` | ActivateUnitType | + | + | + | ++ | +++ | Models/Command.cs:284, Models/Commands.cs:128, :434 |
| 82 | `deactivate_unit_type` | DeactivateUnitType | + | + | + | ++ | +++ | Models/Command.cs:285, Models/Commands.cs:129, :435 |
| 83 | `carrier_level` | CarrierLevel | + | + | + | —— | ——— | Models/Command.cs:286, Models/Commands.cs:130, :436 |
| 84 | `research_sabotaged` | ResearchSabotaged | + | + | + | ++ | +++ | Models/Command.cs:287, Models/Commands.cs:131, :437 |
| 85 | `deactivate` | Deactivate | + | + | + | ++ | +++ | Models/Command.cs:288, Models/Commands.cs:132, :438 |
| 86 | `activate` | Activate | + | + | + | ++ | +++ | Models/Command.cs:289, Models/Commands.cs:133, :439 |
| 87 | `info_may_cause` | InfoMayCause | + | + | + | ++ | +++ | Models/Command.cs:290, Models/Commands.cs:134, :440 |
| 88 | `steal_tech` | StealTech | + | + | + | ++ | +++ | Models/Command.cs:291, Models/Commands.cs:135, :441 |
| 89 | `gain_tech` | GainTech | + | + | + | ++ | +++ | Models/Command.cs:292, Models/Commands.cs:136, :442 |
| 90 | `resource` | Resource | + | + | + | ++ | +++ | Models/Command.cs:293, Models/Commands.cs:137, :443 |
| 91 | `supplies` | Supplies | + | + | + | ++ | +++ | Models/Command.cs:294, Models/Commands.cs:138, :444 |
| 92 | `oilpool` | OilPool | + | + | + | ++ | +++ | Models/Command.cs:295, Models/Commands.cs:139, :445 |
| 93 | `metalpool` | MetalPool | + | + | + | ++ | +++ | Models/Command.cs:296, Models/Commands.cs:140, :446 |
| 94 | `energypool` | EnergyPool | + | + | + | ++ | +++ | Models/Command.cs:297, Models/Commands.cs:141, :447 |
| 95 | `rarematerialspool` | RareMaterialsPool | + | + | + | ++ | +++ | Models/Command.cs:298, Models/Commands.cs:142, :448 |
| 96 | `money` | Money | + | + | + | ++ | +++ | Models/Command.cs:299, Models/Commands.cs:143, :449 |
| 97 | `manpowerpool` | ManPowerPool | + | + | + | ++ | +++ | Models/Command.cs:300, Models/Commands.cs:144, :450 |
| 98 | `relative_manpower` | RelativeManPower | + | + | + | ++ | +++ | Models/Command.cs:301, Models/Commands.cs:145, :451 |
| 99 | `province_manpower` | ProvinceManPower | + | + | + | ++ | +++ | Models/Command.cs:302, Models/Commands.cs:146, :452 |
| 100 | `free_ic` | FreeIc | + | + | + | ++ | +++ | Models/Command.cs:303, Models/Commands.cs:147, :453 |
| 101 | `free_oil` | FreeOil | + | + | + | ++ | +++ | Models/Command.cs:304, Models/Commands.cs:148, :454 |
| 102 | `free_supplies` | FreeSupplies | + | + | + | ++ | +++ | Models/Command.cs:305, Models/Commands.cs:149, :455 |
| 103 | `free_money` | FreeMoney | + | + | + | ++ | +++ | Models/Command.cs:306, Models/Commands.cs:150, :456 |
| 104 | `free_metal` | FreeMetal | + | + | + | ++ | +++ | Models/Command.cs:307, Models/Commands.cs:151, :457 |
| 105 | `free_energy` | FreeEnergy | + | + | + | ++ | +++ | Models/Command.cs:308, Models/Commands.cs:152, :458 |
| 106 | `free_rare_materials` | FreeRareMaterials | + | + | + | ++ | +++ | Models/Command.cs:309, Models/Commands.cs:153, :459 |
| 107 | `free_transport` | FreeTransport | + | + | + | ++ | +++ | Models/Command.cs:310, Models/Commands.cs:154, :460 |
| 108 | `free_escort` | FreeEscort | + | + | + | ++ | +++ | Models/Command.cs:311, Models/Commands.cs:155, :461 |
| 109 | `free_manpower` | FreeManPower | + | + | + | ++ | +++ | Models/Command.cs:312, Models/Commands.cs:156, :462 |
| 110 | `add_prov_resource` | AddProvResource | + | + | + | ++ | +++ | Models/Command.cs:313, Models/Commands.cs:157, :463 |
| 111 | `allow_building` | AllowBuilding | + | + | + | ++ | +++ | Models/Command.cs:314, Models/Commands.cs:158, :464 |
| 112 | `construct` | Construct | + | + | + | ++ | +++ | Models/Command.cs:315, Models/Commands.cs:159, :465 |
| 113 | `allow_convoy_escorts` | AllowConvoyEscorts | + | + | + | ++ | +++ | Models/Command.cs:316, Models/Commands.cs:160, :466 |
| 114 | `transport_pool` | TransportPool | + | + | + | ++ | +++ | Models/Command.cs:317, Models/Commands.cs:161, :467 |
| 115 | `escort_pool` | EscortPool | + | + | + | ++ | +++ | Models/Command.cs:318, Models/Commands.cs:162, :468 |
| 116 | `convoy` | Convoy | + | + | + | ++ | +++ | Models/Command.cs:319, Models/Commands.cs:163, :469 |
| 117 | `peacetime_ic_mod` | PeaceTimeIcMod | + | + | + | ++ | +++ | Models/Command.cs:320, Models/Commands.cs:164, :470 |
| 118 | `tc_mod` | TcMod | + | + | + | ++ | +++ | Models/Command.cs:321, Models/Commands.cs:165, :471 |
| 119 | `tc_occupied_mod` | TcOccupiedMod | + | + | + | ++ | +++ | Models/Command.cs:322, Models/Commands.cs:166, :472 |
| 120 | `attrition_mod` | AttritionMod | + | + | + | ++ | +++ | Models/Command.cs:323, Models/Commands.cs:167, :473 |
| 121 | `supply_dist_mod` | SupplyDistMod | + | + | + | ++ | +++ | Models/Command.cs:324, Models/Commands.cs:168, :474 |
| 122 | `repair_mod` | RepairMod | + | + | + | ++ | +++ | Models/Command.cs:325, Models/Commands.cs:169, :475 |
| 123 | `research_mod` | ResearchMod | + | + | + | ++ | +++ | Models/Command.cs:326, Models/Commands.cs:170, :476 |
| 124 | `building_prod_mod` | BuildingProdMod | + | + | + | ++ | +++ | Models/Command.cs:327, Models/Commands.cs:171, :477 |
| 125 | `convoy_prod_mod` | ConvoyProdMod | + | + | + | ++ | +++ | Models/Command.cs:328, Models/Commands.cs:172, :478 |
| 126 | `radar_eff` | RadarEff | + | + | + | ++ | +++ | Models/Command.cs:329, Models/Commands.cs:173, :479 |
| 127 | `enable_task` | EnableTask | + | + | + | ++ | +++ | Models/Command.cs:330, Models/Commands.cs:174, :480 |
| 128 | `task_efficiency` | TaskEfficiency | + | + | + | ++ | +++ | Models/Command.cs:331, Models/Commands.cs:175, :481 |
| 129 | `max_positioning` | MaxPositioning | + | + | + | ++ | +++ | Models/Command.cs:332, Models/Commands.cs:176, :482 |
| 130 | `min_positioning` | MinPositioning | + | + | + | ++ | +++ | Models/Command.cs:333, Models/Commands.cs:177, :483 |
| 131 | `province_keypoints` | ProvinceKeyPoints | + | + | + | ++ | +++ | Models/Command.cs:334, Models/Commands.cs:178, :484 |
| 132 | `ai` | Ai | + | + | + | ++ | +++ | Models/Command.cs:335, Models/Commands.cs:179, :485 |
| 133 | `extra_tc` | ExtraTc | + | + | + | ++ | +++ | Models/Command.cs:336, Models/Commands.cs:180, :486 |
| 134 | `vp` | Vp | + | + | + | ++ | +++ | Models/Command.cs:337, Models/Commands.cs:181, :487 |
| 135 | `songs` | Songs | + | + | + | ++ | +++ | Models/Command.cs:338, Models/Commands.cs:182, :488 |
| 136 | `trigger` | Trigger | + | + | + | ++ | +++ | Models/Command.cs:339, Models/Commands.cs:183, :489 |
| 137 | `sleepevent` | SleepEvent | + | + | + | ++ | +++ | Models/Command.cs:340, Models/Commands.cs:184, :490 |
| 138 | `max_reactor_size` | MaxReactorSize | + | + | + | ++ | +++ | Models/Command.cs:341, Models/Commands.cs:185, :491 |
| 139 | `abomb_production` | AbombProduction | + | + | + | ++ | +++ | Models/Command.cs:342, Models/Commands.cs:186, :492 |
| 140 | `double_nuke_prod` | DoubleNukeProd | + | + | + | ++ | +++ | Models/Command.cs:343, Models/Commands.cs:187, :493 |
| 141 | `nuke_damage` | NukeDamage | + | + | + | ++ | +++ | Models/Command.cs:344, Models/Commands.cs:188, :494 |
| 142 | `gas_attack` | GasAttack | + | + | + | ++ | +++ | Models/Command.cs:345, Models/Commands.cs:189, :495 |
| 143 | `gas_protection` | GasProtection | + | + | + | ++ | +++ | Models/Command.cs:346, Models/Commands.cs:190, :496 |
| 144 | `revolt` | Revolt | + | + | + | ++ | +++ | Models/Command.cs:347, Models/Commands.cs:191, :497 |
| 145 | `ai_prepare_war` | AiPrepareWar | + | + | + | ++ | +++ | Models/Command.cs:348, Models/Commands.cs:192, :498 |
| 146 | `start_pattern` | StartPattern | + | + | + | ++ | +++ | Models/Command.cs:349, Models/Commands.cs:193, :499 |
| 147 | `add_to_pattern` | AddToPattern | + | + | + | ++ | +++ | Models/Command.cs:350, Models/Commands.cs:194, :500 |
| 148 | `end_pattern` | EndPattern | + | + | + | ++ | +++ | Models/Command.cs:351, Models/Commands.cs:195, :501 |
| 149 | `set_ground` | SetGround | + | + | + | ++ | +++ | Models/Command.cs:352, Models/Commands.cs:196, :502 |
| 150 | `counterattack` | CounterAttack | + | + | + | ++ | +++ | Models/Command.cs:353, Models/Commands.cs:197, :503 |
| 151 | `assault` | Assault | + | + | + | ++ | +++ | Models/Command.cs:354, Models/Commands.cs:198, :504 |
| 152 | `encirclement` | Encirclement | + | + | + | ++ | +++ | Models/Command.cs:355, Models/Commands.cs:199, :505 |
| 153 | `ambush` | Ambush | + | + | + | ++ | +++ | Models/Command.cs:356, Models/Commands.cs:200, :506 |
| 154 | `delay` | Delay | + | + | + | ++ | +++ | Models/Command.cs:357, Models/Commands.cs:201, :507 |
| 155 | `tactical_withdrawal` | TacticalWithdrawal | + | + | + | ++ | +++ | Models/Command.cs:358, Models/Commands.cs:202, :508 |
| 156 | `breakthrough` | Breakthrough | + | + | + | ++ | +++ | Models/Command.cs:359, Models/Commands.cs:203, :509 |
| 157 | `hq_supply_eff` | HqSupplyEff | + | + | + | ++ | +++ | Models/Command.cs:360, Models/Commands.cs:204, :510 |
| 158 | `sce_frequency` | SceFrequency | + | + | + | ++ | +++ | Models/Command.cs:361, Models/Commands.cs:205, :511 |
| 159 | `nuclear_carrier` | NuclearCarrier | + | + | + | ++ | +++ | Models/Command.cs:362, Models/Commands.cs:206, :512 |
| 160 | `missile_carrier` | MissileCarrier | + | + | + | ++ | +++ | Models/Command.cs:363, Models/Commands.cs:207, :513 |
| 161 | `out_of_fuel_speed` | OutOfFuelSpeed | + | + | + | —— | ——— | Models/Command.cs:364, Models/Commands.cs:208, :514 |
| 162 | `no_fuel_combat_mod` | NoFuelCombatMod | + | + | + | —— | ——— | Models/Command.cs:365, Models/Commands.cs:209, :515 |
| 163 | `no_supplies_combat_mod` | NoSuppliesCombatMod | + | + | + | —— | ——— | Models/Command.cs:366, Models/Commands.cs:210, :516 |
| 164 | `soft_attack` | SoftAttack | + | + | + | ++ | +++ | Models/Command.cs:367, Models/Commands.cs:211, :517 |
| 165 | `hard_attack` | HardAttack | + | + | + | ++ | +++ | Models/Command.cs:368, Models/Commands.cs:212, :518 |
| 166 | `defensiveness` | Defensiveness | + | + | + | ++ | +++ | Models/Command.cs:369, Models/Commands.cs:213, :519 |
| 167 | `air_attack` | AirAttack | + | + | + | ++ | +++ | Models/Command.cs:370, Models/Commands.cs:214, :520 |
| 168 | `air_defense` | AirDefense | + | + | + | ++ | +++ | Models/Command.cs:371, Models/Commands.cs:215, :521 |
| 169 | `build_cost` | BuildCost | + | + | + | ++ | +++ | Models/Command.cs:372, Models/Commands.cs:216, :522 |
| 170 | `build_time` | BuildTime | + | + | + | ++ | +++ | Models/Command.cs:373, Models/Commands.cs:217, :523 |
| 171 | `manpower` | ManPower | + | + | + | ++ | +++ | Models/Command.cs:374, Models/Commands.cs:218, :524 |
| 172 | `speed` | Speed | + | + | + | ++ | +++ | Models/Command.cs:375, Models/Commands.cs:219, :525 |
| 173 | `max_organization` | MaxOrganization | + | + | + | ++ | +++ | Models/Command.cs:376, Models/Commands.cs:220, :526 |
| 174 | `morale` | Morale | + | + | + | ++ | +++ | Models/Command.cs:377, Models/Commands.cs:221, :527 |
| 175 | `transport_weight` | TransportWeight | + | + | + | ++ | +++ | Models/Command.cs:378, Models/Commands.cs:222, :528 |
| 176 | `supply_consumption` | SupplyConsumption | + | + | + | ++ | +++ | Models/Command.cs:379, Models/Commands.cs:223, :529 |
| 177 | `fuel_consumption` | FuelConsumption | + | + | + | ++ | +++ | Models/Command.cs:380, Models/Commands.cs:224, :530 |
| 178 | `speed_cap_art` | SpeedCapArt | + | + | + | ++ | +++ | Models/Command.cs:381, Models/Commands.cs:225, :531 |
| 179 | `speed_cap_eng` | SpeedCapEng | + | + | + | ++ | +++ | Models/Command.cs:382, Models/Commands.cs:226, :532 |
| 180 | `speed_cap_at` | SpeedCapAt | + | + | + | ++ | +++ | Models/Command.cs:383, Models/Commands.cs:227, :533 |
| 181 | `speed_cap_aa` | SpeedCapAa | + | + | + | ++ | +++ | Models/Command.cs:384, Models/Commands.cs:228, :534 |
| 182 | `artillery_bombardment` | ArtilleryBombardment | — | — | — | —— | +++ | Models/Command.cs:385, Models/Commands.cs:229, :535 |
| 183 | `suppression` | Suppression | + | + | + | —— | ——— | Models/Command.cs:386, Models/Commands.cs:230, :536 |
| 184 | `softness` | Softness | + | + | + | —— | ——— | Models/Command.cs:387, Models/Commands.cs:231, :537 |
| 185 | `toughness` | Toughness | + | + | + | —— | ——— | Models/Command.cs:388, Models/Commands.cs:232, :538 |
| 186 | `strategic_attack` | StrategicAttack | + | + | + | ++ | +++ | Models/Command.cs:389, Models/Commands.cs:233, :539 |
| 187 | `tactical_attack` | TacticalAttack | + | + | + | ++ | +++ | Models/Command.cs:390, Models/Commands.cs:234, :540 |
| 188 | `naval_attack` | NavalAttack | + | + | + | ++ | +++ | Models/Command.cs:391, Models/Commands.cs:235, :541 |
| 189 | `surface_detection` | SurfaceDetection | + | + | + | ++ | +++ | Models/Command.cs:392, Models/Commands.cs:236, :542 |
| 190 | `air_detection` | AirDetection | + | + | + | ++ | +++ | Models/Command.cs:393, Models/Commands.cs:237, :543 |
| 191 | `sub_detection` | SubDetection | + | + | + | ++ | +++ | Models/Command.cs:394, Models/Commands.cs:238, :544 |
| 192 | `transport_capacity` | TransportCapacity | + | + | + | ++ | +++ | Models/Command.cs:395, Models/Commands.cs:239, :545 |
| 193 | `range` | Range | + | + | + | ++ | +++ | Models/Command.cs:396, Models/Commands.cs:240, :546 |
| 194 | `shore_attack` | ShoreAttack | + | + | + | ++ | +++ | Models/Command.cs:397, Models/Commands.cs:241, :547 |
| 195 | `naval_defense` | NavalDefense | + | + | + | ++ | +++ | Models/Command.cs:398, Models/Commands.cs:242, :548 |
| 196 | `visibility` | Visibility | + | + | + | ++ | +++ | Models/Command.cs:399, Models/Commands.cs:243, :549 |
| 197 | `sub_attack` | SubAttack | + | + | + | ++ | +++ | Models/Command.cs:400, Models/Commands.cs:244, :550 |
| 198 | `convoy_attack` | ConvoyAttack | + | + | + | ++ | +++ | Models/Command.cs:401, Models/Commands.cs:245, :551 |
| 199 | `plain_attack` | PlainAttack | — | + | + | —— | ——— | Models/Command.cs:402, Models/Commands.cs:246, :552 |
| 200 | `plain_defense` | PlainDefense | — | + | + | —— | ——— | Models/Command.cs:403, Models/Commands.cs:247, :553 |
| 201 | `desert_attack` | DesertAttack | + | + | + | ++ | +++ | Models/Command.cs:404, Models/Commands.cs:248, :554 |
| 202 | `desert_defense` | DesertDefense | + | + | + | ++ | +++ | Models/Command.cs:405, Models/Commands.cs:249, :555 |
| 203 | `mountain_attack` | MountainAttack | + | + | + | ++ | +++ | Models/Command.cs:406, Models/Commands.cs:250, :556 |
| 204 | `mountain_defense` | MountainDefense | + | + | + | ++ | +++ | Models/Command.cs:407, Models/Commands.cs:251, :557 |
| 205 | `hill_attack` | HillAttack | + | + | + | ++ | +++ | Models/Command.cs:408, Models/Commands.cs:252, :558 |
| 206 | `hill_defense` | HillDefense | + | + | + | ++ | +++ | Models/Command.cs:409, Models/Commands.cs:253, :559 |
| 207 | `forest_attack` | ForestAttack | + | + | + | ++ | +++ | Models/Command.cs:410, Models/Commands.cs:254, :560 |
| 208 | `forest_defense` | ForestDefense | + | + | + | ++ | +++ | Models/Command.cs:411, Models/Commands.cs:255, :561 |
| 209 | `swamp_attack` | SwampAttack | + | + | + | ++ | +++ | Models/Command.cs:412, Models/Commands.cs:256, :562 |
| 210 | `swamp_defense` | SwampDefense | + | + | + | ++ | +++ | Models/Command.cs:413, Models/Commands.cs:257, :563 |
| 211 | `jungle_attack` | JungleAttack | + | + | + | ++ | +++ | Models/Command.cs:414, Models/Commands.cs:258, :564 |
| 212 | `jungle_defense` | JungleDefense | + | + | + | ++ | +++ | Models/Command.cs:415, Models/Commands.cs:259, :565 |
| 213 | `urban_attack` | UrbanAttack | + | + | + | ++ | +++ | Models/Command.cs:416, Models/Commands.cs:260, :566 |
| 214 | `urban_defense` | UrbanDefense | + | + | + | ++ | +++ | Models/Command.cs:417, Models/Commands.cs:261, :567 |
| 215 | `river_attack` | RiverAttack | + | + | + | ++ | +++ | Models/Command.cs:418, Models/Commands.cs:262, :568 |
| 216 | `paradrop_attack` | ParaDropAttack | + | + | + | ++ | +++ | Models/Command.cs:419, Models/Commands.cs:263, :569 |
| 217 | `fort_attack` | FortAttack | + | + | + | ++ | +++ | Models/Command.cs:420, Models/Commands.cs:264, :570 |
| 218 | `plain_move` | PlainMove | — | + | + | —— | ——— | Models/Command.cs:421, Models/Commands.cs:265, :571 |
| 219 | `desert_move` | DesertMove | + | + | + | ++ | +++ | Models/Command.cs:422, Models/Commands.cs:266, :572 |
| 220 | `mountain_move` | MountainMove | + | + | + | ++ | +++ | Models/Command.cs:423, Models/Commands.cs:267, :573 |
| 221 | `hill_move` | HillMove | + | + | + | ++ | +++ | Models/Command.cs:424, Models/Commands.cs:268, :574 |
| 222 | `forest_move` | ForestMove | + | + | + | ++ | +++ | Models/Command.cs:425, Models/Commands.cs:269, :575 |
| 223 | `swamp_move` | SwampMove | + | + | + | ++ | +++ | Models/Command.cs:426, Models/Commands.cs:270, :576 |
| 224 | `jungle_move` | JungleMove | + | + | + | ++ | +++ | Models/Command.cs:427, Models/Commands.cs:271, :577 |
| 225 | `urban_move` | UrbanMove | + | + | + | ++ | +++ | Models/Command.cs:428, Models/Commands.cs:272, :578 |
| 226 | `river_crossing` | RiverCrossing | + | + | + | ++ | +++ | Models/Command.cs:429, Models/Commands.cs:273, :579 |
| 227 | `clear_attack` | ClearAttack | — | + | + | —— | ——— | Models/Command.cs:430, Models/Commands.cs:274, :580 |
| 228 | `clear_defense` | ClearDefense | — | + | + | —— | ——— | Models/Command.cs:431, Models/Commands.cs:275, :581 |
| 229 | `frozen_attack` | FrozenAttack | + | + | + | ++ | +++ | Models/Command.cs:432, Models/Commands.cs:276, :582 |
| 230 | `frozen_defense` | FrozenDefense | + | + | + | ++ | +++ | Models/Command.cs:433, Models/Commands.cs:277, :583 |
| 231 | `snow_attack` | SnowAttack | + | + | + | ++ | +++ | Models/Command.cs:434, Models/Commands.cs:278, :584 |
| 232 | `snow_defense` | SnowDefense | + | + | + | ++ | +++ | Models/Command.cs:435, Models/Commands.cs:279, :585 |
| 233 | `blizzard_attack` | BlizzardAttack | + | + | + | ++ | +++ | Models/Command.cs:436, Models/Commands.cs:280, :586 |
| 234 | `blizzard_defense` | BlizzardDefense | + | + | + | ++ | +++ | Models/Command.cs:437, Models/Commands.cs:281, :587 |
| 235 | `rain_attack` | RainAttack | + | + | + | ++ | +++ | Models/Command.cs:438, Models/Commands.cs:282, :588 |
| 236 | `rain_defense` | RainDefense | + | + | + | ++ | +++ | Models/Command.cs:439, Models/Commands.cs:283, :589 |
| 237 | `storm_attack` | StormAttack | + | + | + | ++ | +++ | Models/Command.cs:440, Models/Commands.cs:284, :590 |
| 238 | `storm_defense` | StormDefense | + | + | + | ++ | +++ | Models/Command.cs:441, Models/Commands.cs:285, :591 |
| 239 | `muddy_attack` | MuddyAttack | + | + | + | ++ | +++ | Models/Command.cs:442, Models/Commands.cs:286, :592 |
| 240 | `muddy_defense` | MuddyDefense | + | + | + | ++ | +++ | Models/Command.cs:443, Models/Commands.cs:287, :593 |
| 241 | `frozen_move` | FrozenMove | + | + | + | ++ | +++ | Models/Command.cs:444, Models/Commands.cs:288, :594 |
| 242 | `snow_move` | SnowMove | + | + | + | ++ | +++ | Models/Command.cs:445, Models/Commands.cs:289, :595 |
| 243 | `blizzard_move` | BlizzardMove | + | + | + | ++ | +++ | Models/Command.cs:446, Models/Commands.cs:290, :596 |
| 244 | `rain_move` | RainMove | + | + | + | ++ | +++ | Models/Command.cs:447, Models/Commands.cs:291, :597 |
| 245 | `storm_move` | StormMove | + | + | + | ++ | +++ | Models/Command.cs:448, Models/Commands.cs:292, :598 |
| 246 | `muddy_move` | MuddyMove | + | + | + | ++ | +++ | Models/Command.cs:449, Models/Commands.cs:293, :599 |
| 247 | `night_move` | NightMove | + | + | + | ++ | +++ | Models/Command.cs:450, Models/Commands.cs:294, :600 |
| 248 | `night_attack` | NightAttack | + | + | + | ++ | +++ | Models/Command.cs:451, Models/Commands.cs:295, :601 |
| 249 | `night_defense` | NightDefense | + | + | + | ++ | +++ | Models/Command.cs:452, Models/Commands.cs:296, :602 |
| 250 | `minisub_bonus` | MinisubBonus | + | + | + | ++ | +++ | Models/Command.cs:453, Models/Commands.cs:297, :603 |
| 251 | `surprise` | Surprise | + | + | + | ++ | +++ | Models/Command.cs:454, Models/Commands.cs:298, :604 |
| 252 | `intelligence` | Intelligence | + | + | + | ++ | +++ | Models/Command.cs:455, Models/Commands.cs:299, :605 |
| 253 | `army_detection` | ArmyDetection | + | + | + | ++ | +++ | Models/Command.cs:456, Models/Commands.cs:300, :606 |
| 254 | `aa_batteries` | AaBatteries | + | + | + | ++ | +++ | Models/Command.cs:457, Models/Commands.cs:301, :607 |
| 255 | `industrial_multiplier` | IndustrialMultiplier | + | + | + | ++ | +++ | Models/Command.cs:458, Models/Commands.cs:302, :608 |
| 256 | `industrial_modifier` | IndustrialModifier | + | + | + | ++ | +++ | Models/Command.cs:459, Models/Commands.cs:303, :609 |
| 257 | `trickleback_mod` | TrickleBackMod | + | + | + | ++ | +++ | Models/Command.cs:460, Models/Commands.cs:304, :610 |
| 258 | `max_amphib_mod` | MaxAmphibMod | + | + | + | ++ | +++ | Models/Command.cs:461, Models/Commands.cs:305, :611 |
| 259 | `building_eff_mod` | BuildingEffMod | — | — | — | —— | +++ | Models/Command.cs:462, Models/Commands.cs:306, :612 |
| 260 | `headofstate` | HeadOfState | + | + | + | ++ | +++ | Models/Command.cs:463, Models/Commands.cs:307, :613 |
| 261 | `headofgovernment` | HeadOfGovernment | + | + | + | ++ | +++ | Models/Command.cs:464, Models/Commands.cs:308, :614 |
| 262 | `foreignminister` | ForeignMinister | + | + | + | ++ | +++ | Models/Command.cs:465, Models/Commands.cs:309, :615 |
| 263 | `armamentminister` | ArmamentMinister | + | + | + | ++ | +++ | Models/Command.cs:466, Models/Commands.cs:310, :616 |
| 264 | `ministerofsecurity` | MinisterOfSecurity | + | + | + | ++ | +++ | Models/Command.cs:467, Models/Commands.cs:311, :617 |
| 265 | `ministerofintelligence` | MinisterOfIntelligence | + | + | + | ++ | +++ | Models/Command.cs:468, Models/Commands.cs:312, :618 |
| 266 | `chiefofstaff` | ChiefOfStaff | + | + | + | ++ | +++ | Models/Command.cs:469, Models/Commands.cs:313, :619 |
| 267 | `chiefofarmy` | ChiefOfArmy | + | + | + | ++ | +++ | Models/Command.cs:470, Models/Commands.cs:314, :620 |
| 268 | `chiefofnavy` | ChiefOfNavy | + | + | + | ++ | +++ | Models/Command.cs:471, Models/Commands.cs:315, :621 |
| 269 | `chiefofair` | ChiefOfAir | + | + | + | ++ | +++ | Models/Command.cs:472, Models/Commands.cs:316, :622 |
| 270 | `alliance_leader` | AllianceLeader | + | + | + | —— | ——— | Models/Command.cs:473, Models/Commands.cs:317, :623 |
| 271 | `alliance_name` | AllianceName | + | + | + | —— | ——— | Models/Command.cs:474, Models/Commands.cs:318, :624 |
| 272 | `stockpile` | Stockpile | + | + | + | —— | ——— | Models/Command.cs:475, Models/Commands.cs:319, :625 |
| 273 | `auto_trade` | AutoTrade | + | + | + | —— | ——— | Models/Command.cs:476, Models/Commands.cs:320, :626 |
| 274 | `auto_trade_reset` | AutoTradeReset | + | + | + | —— | ——— | Models/Command.cs:477, Models/Commands.cs:321, :627 |
| 275 | `military_control` | MilitaryControl | + | + | + | —— | ——— | Models/Command.cs:478, Models/Commands.cs:322, :628 |
| 276 | `flag_ext` | FlagExt | + | + | + | —— | ——— | Models/Command.cs:479, Models/Commands.cs:323, :629 |
| 277 | `embargo` | Embargo | + | + | + | —— | ——— | Models/Command.cs:480, Models/Commands.cs:324, :630 |
| 278 | `name` | Name | + | + | + | —— | ——— | Models/Command.cs:481, Models/Commands.cs:325, :631 |
| 279 | `secedearea` | SecedeArea | + | + | + | —— | ——— | Models/Command.cs:482, Models/Commands.cs:326, :632 |
| 280 | `secederegion` | SecedeRegion | + | + | + | —— | ——— | Models/Command.cs:483, Models/Commands.cs:327, :633 |
| 281 | `trade` | Trade | + | + | + | —— | ——— | Models/Command.cs:484, Models/Commands.cs:328, :634 |
| 282 | `wartime_ic_mod` | WarTimeIcMod | + | + | + | —— | ——— | Models/Command.cs:485, Models/Commands.cs:329, :635 |
| 283 | `addclaim` | AddClaim | + | + | + | —— | ——— | Models/Command.cs:486, Models/Commands.cs:330, :636 |
| 284 | `removeclaim` | RemoveClaim | + | + | + | —— | ——— | Models/Command.cs:487, Models/Commands.cs:331, :637 |
| 285 | `land_fort_eff` | LandFortEff | + | + | + | ++ | +++ | Models/Command.cs:488, Models/Commands.cs:332, :638 |
| 286 | `coast_fort_eff` | CoastFortEff | + | + | + | ++ | +++ | Models/Command.cs:489, Models/Commands.cs:333, :639 |
| 287 | `convoy_def_eff` | ConvoyDefEff | + | + | + | ++ | +++ | Models/Command.cs:490, Models/Commands.cs:334, :640 |
| 288 | `ground_def_eff` | GroundDefEff | + | + | + | ++ | +++ | Models/Command.cs:491, Models/Commands.cs:335, :641 |
| 289 | `strength` | Strength | + | + | + | —— | ——— | Models/Command.cs:492, Models/Commands.cs:336, :642 |
| 290 | `event` | Event | + | + | + | —— | ——— | Models/Command.cs:493, Models/Commands.cs:337, :643 |
| 291 | `wakeminister` | WakeMinister | + | + | + | —— | ——— | Models/Command.cs:494, Models/Commands.cs:338, :644 |
| 292 | `demobilize` | Demobilize | + | + | + | —— | ——— | Models/Command.cs:495, Models/Commands.cs:339, :645 |
| 293 | `strength_cap` | StrengthCap | — | + | + | —— | ——— | Models/Command.cs:496, Models/Commands.cs:340, :646 |
| 294 | `remove_units` | RemoveUnits | — | — | + | —— | ——— | Models/Command.cs:497, Models/Commands.cs:341, :647 |

#### 4.6.3. Значення параметрів (лише припущення)

Редактор не містить жодної схеми параметрів — усе нижче **(припущення)** на основі загальних знань про
модинг HoI2/DH; обов'язково звірити з документацією DH (див. §7):

| Група команд | `which` | `value` | `when` / `where` |
|---|---|---|---|
| Характеристики юнітів (`soft_attack`, `hard_attack`, `defensiveness`, `air_attack`, `air_defense`, `build_cost`, `build_time`, `manpower`, `speed`, `max_organization`, `morale`, `transport_weight`, `supply_consumption`, `fuel_consumption`, `speed_cap_*`, `suppression`, `softness`, `toughness`, `strategic_attack`, `tactical_attack`, `naval_attack`, `*_detection`, `transport_capacity`, `range`, `shore_attack`, `naval_defense`, `visibility`, `sub_attack`, `convoy_attack`, терен/погода/ніч `*_attack`/`*_defense`/`*_move`, `river_crossing`, `paradrop_attack`, `fort_attack`, `strength_cap` …) | ключове слово типу дивізії/бригади | приріст (додається) | не використовуються |
| `new_model` | тип юніта | номер моделі | — |
| `activate_unit_type` / `deactivate_unit_type` | тип юніта | — | — |
| `activate` / `deactivate` | ID технології | — | — |
| `gain_tech` / `steal_tech` / `research_sabotaged` | ID технології / тег країни | — | — |
| Національні модифікатори (`research_mod`, `peacetime_ic_mod`, `wartime_ic_mod`, `tc_mod`, `tc_occupied_mod`, `attrition_mod`, `supply_dist_mod`, `repair_mod`, `building_prod_mod`, `convoy_prod_mod`, `radar_eff`, `hq_supply_eff`, `trickleback_mod`, `max_amphib_mod`, `industrial_modifier`, `industrial_multiplier`, `land_fort_eff`, `coast_fort_eff`, `ground_def_eff`, `convoy_def_eff`, `max_positioning`, `min_positioning`, `sce_frequency`, `aa_batteries`, `intelligence`, `army_detection`, `surprise`, `minisub_bonus`, `out_of_fuel_speed`, `no_fuel_combat_mod`, `no_supplies_combat_mod`) | — | величина модифікатора | — |
| `allow_building` | тип будівлі | — | — |
| `enable_task` / `task_efficiency` | тип місії | приріст ефективності | — |
| Доктринні бойові події (`counterattack`, `assault`, `encirclement`, `ambush`, `delay`, `tactical_withdrawal`, `breakthrough`) | тип юніта **або** не використовується | приріст шансу | — |
| Ядерні/ракетні (`max_reactor_size`, `abomb_production`, `double_nuke_prod`, `nuke_damage`, `nuclear_carrier`, `missile_carrier`, `carrier_level`, `gas_attack`, `gas_protection`) | інколи тип юніта | величина/прапорець | — |

Призначення `when` і `where` у технологіях невідоме; редактор їх лише зберігає (§7).

### 4.7. Тригери — повний перелік

`#` — значення `TriggerType` (не ігрове число); «Параметр» — назва `TriggerParamType` з таблиці редактора
(використовується лише для запису, §3.4.1). «Група» — за коментарями переліку: базові HoI2, «додано в AoD»
(`Models/Trigger.cs:477`), «додано в DH» (`Models/Trigger.cs:491`). Парсер приймає всі ключові слова в
будь-якій грі. Джерела: рядок ключового слова, рядок типу параметра, рядок члена переліку (усе в `Trigger.cs`).

| # | Ключове слово | Перелік | Параметр | Група | Джерело |
|---|---|---|---|---|---|
| 0 | *(порожньо)* | None | None | — | Models/Trigger.cs:33, :173, :379 |
| 1 | `and` | And | Container | HoI2 | Models/Trigger.cs:34, :174, :380 |
| 2 | `or` | Or | Container | HoI2 | Models/Trigger.cs:35, :175, :381 |
| 3 | `not` | Not | Container | HoI2 | Models/Trigger.cs:36, :176, :382 |
| 4 | `year` | Year | Int | HoI2 | Models/Trigger.cs:37, :177, :383 |
| 5 | `month` | Month | Int | HoI2 | Models/Trigger.cs:38, :178, :384 |
| 6 | `day` | Day | Int | HoI2 | Models/Trigger.cs:39, :179, :385 |
| 7 | `event` | Event | Int | HoI2 | Models/Trigger.cs:40, :180, :386 |
| 8 | `random` | Random | Random | HoI2 | Models/Trigger.cs:41, :181, :387 |
| 9 | `ai` | Ai | CountryYesNo | HoI2 | Models/Trigger.cs:42, :182, :388 |
| 10 | `flag` | Flag | String | HoI2 | Models/Trigger.cs:43, :183, :389 |
| 11 | `local_flag` | LocalFlag | String | HoI2 | Models/Trigger.cs:44, :184, :390 |
| 12 | `intel_diff` | IntelDiff | IntelDiff | HoI2 | Models/Trigger.cs:45, :185, :391 |
| 13 | `dissent` | Dissent | Int | HoI2 | Models/Trigger.cs:46, :186, :392 |
| 14 | `leader` | Leader | Int | HoI2 | Models/Trigger.cs:47, :187, :393 |
| 15 | `incabinet` | InCabinet | Int | HoI2 | Models/Trigger.cs:48, :188, :394 |
| 16 | `domestic` | Domestic | DomesticInt | HoI2 | Models/Trigger.cs:49, :189, :395 |
| 17 | `government` | Government | Government | HoI2 | Models/Trigger.cs:50, :190, :396 |
| 18 | `ideology` | Ideology | Ideology | HoI2 | Models/Trigger.cs:51, :191, :397 |
| 19 | `atwar` | AtWar | CountryYesNo | HoI2 | Models/Trigger.cs:52, :192, :398 |
| 20 | `minister` | Minister | Int | HoI2 | Models/Trigger.cs:53, :193, :399 |
| 21 | `major` | Major | YesNo | HoI2 | Models/Trigger.cs:54, :194, :400 |
| 22 | `ispuppet` | IsPuppet | IsPuppet | HoI2 | Models/Trigger.cs:55, :195, :401 |
| 23 | `puppet` | Puppet | CountryPair | HoI2 | Models/Trigger.cs:56, :196, :402 |
| 24 | `headofgovernment` | HeadOfGovernment | Int | HoI2 | Models/Trigger.cs:57, :197, :403 |
| 25 | `headofstate` | HeadOfState | Int | HoI2 | Models/Trigger.cs:58, :198, :404 |
| 26 | `technology` | Technology | Technology | HoI2 | Models/Trigger.cs:59, :199, :405 |
| 27 | `is_tech_active` | IsTechActive | Int | HoI2 | Models/Trigger.cs:60, :200, :406 |
| 28 | `can_change_policy` | CanChangePolicy | DomesticInt | HoI2 | Models/Trigger.cs:61, :201, :407 |
| 29 | `province_revoltrisk` | ProvinceRevoltRisk | ProvinceInt | HoI2 | Models/Trigger.cs:62, :202, :408 |
| 30 | `nuke` | Nuke | Int | HoI2 | Models/Trigger.cs:63, :203, :409 |
| 31 | `energy` | Energy | Int | HoI2 | Models/Trigger.cs:64, :204, :410 |
| 32 | `oil` | Oil | Int | HoI2 | Models/Trigger.cs:65, :205, :411 |
| 33 | `rare_materials` | RareMaterials | Int | HoI2 | Models/Trigger.cs:66, :206, :412 |
| 34 | `metal` | Metal | Int | HoI2 | Models/Trigger.cs:67, :207, :413 |
| 35 | `supplies` | Supplies | Int | HoI2 | Models/Trigger.cs:68, :208, :414 |
| 36 | `manpower` | ManPower | Int | HoI2 | Models/Trigger.cs:69, :209, :415 |
| 37 | `owned` | Owned | ProvinceCountry2 | HoI2 | Models/Trigger.cs:70, :210, :416 |
| 38 | `control` | Control | ProvinceCountry2 | HoI2 | Models/Trigger.cs:71, :211, :417 |
| 39 | `division_exists` | DivisionExists | DivisionExists | HoI2 | Models/Trigger.cs:72, :212, :418 |
| 40 | `division_in_province` | DivisionInProvince | DivisionInProvince | HoI2 | Models/Trigger.cs:73, :213, :419 |
| 41 | `armor` | Armor | Size | HoI2 | Models/Trigger.cs:74, :214, :420 |
| 42 | `light_armor` | LightArmor | Size | HoI2 | Models/Trigger.cs:75, :215, :421 |
| 43 | `bergsjaeger` | Bergsjaeger | Size | HoI2 | Models/Trigger.cs:76, :216, :422 |
| 44 | `cavalry` | Cavalry | Size | HoI2 | Models/Trigger.cs:77, :217, :423 |
| 45 | `garrison` | Garrison | Garrison | HoI2 | Models/Trigger.cs:78, :218, :424 |
| 46 | `hq` | Hq | Size | HoI2 | Models/Trigger.cs:79, :219, :425 |
| 47 | `infantry` | Infantry | Size | HoI2 | Models/Trigger.cs:80, :220, :426 |
| 48 | `marine` | Marine | Size | HoI2 | Models/Trigger.cs:81, :221, :427 |
| 49 | `mechanized` | Mechanized | Size | HoI2 | Models/Trigger.cs:82, :222, :428 |
| 50 | `militia` | Militia | Size | HoI2 | Models/Trigger.cs:83, :223, :429 |
| 51 | `motorized` | Motorized | Size | HoI2 | Models/Trigger.cs:84, :224, :430 |
| 52 | `paratrooper` | Paratrooper | Size | HoI2 | Models/Trigger.cs:85, :225, :431 |
| 53 | `cas` | Cas | Size | HoI2 | Models/Trigger.cs:86, :226, :432 |
| 54 | `escort` | Escort | Size | HoI2 | Models/Trigger.cs:87, :227, :433 |
| 55 | `flying_bomb` | FlyingBomb | Size | HoI2 | Models/Trigger.cs:88, :228, :434 |
| 56 | `flying_rocket` | FlyingRocket | Size | HoI2 | Models/Trigger.cs:89, :229, :435 |
| 57 | `interceptor` | Interceptor | Size | HoI2 | Models/Trigger.cs:90, :230, :436 |
| 58 | `multi_role` | MultiRole | Size | HoI2 | Models/Trigger.cs:91, :231, :437 |
| 59 | `naval_bomber` | NavalBomber | Size | HoI2 | Models/Trigger.cs:92, :232, :438 |
| 60 | `strategic_bomber` | StrategicBomber | Size | HoI2 | Models/Trigger.cs:93, :233, :439 |
| 61 | `tactical_bomber` | TacticalBomber | Size | HoI2 | Models/Trigger.cs:94, :234, :440 |
| 62 | `transport_plane` | TransportPlane | Size | HoI2 | Models/Trigger.cs:95, :235, :441 |
| 63 | `battle_cruiser` | BattleCruiser | Size | HoI2 | Models/Trigger.cs:96, :236, :442 |
| 64 | `battleship` | BattleShip | Size | HoI2 | Models/Trigger.cs:97, :237, :443 |
| 65 | `carrier` | Carrier | Size | HoI2 | Models/Trigger.cs:98, :238, :444 |
| 66 | `escort_carrier` | EscortCarrier | Size | HoI2 | Models/Trigger.cs:99, :239, :445 |
| 67 | `destroyer` | Destroyer | Size | HoI2 | Models/Trigger.cs:100, :240, :446 |
| 68 | `heavy_cruiser` | HeavyCruiser | Size | HoI2 | Models/Trigger.cs:101, :241, :447 |
| 69 | `light_cruiser` | LightCruiser | Size | HoI2 | Models/Trigger.cs:102, :242, :448 |
| 70 | `submarine` | Submarine | Size | HoI2 | Models/Trigger.cs:103, :243, :449 |
| 71 | `nuclear_submarine` | NuclearSubmarine | Size | HoI2 | Models/Trigger.cs:104, :244, :450 |
| 72 | `transport` | Transport | Size | HoI2 | Models/Trigger.cs:105, :245, :451 |
| 73 | `army` | Army | Int | HoI2 | Models/Trigger.cs:106, :246, :452 |
| 74 | `exists` | Exists | Country | HoI2 | Models/Trigger.cs:107, :247, :453 |
| 75 | `alliance` | Alliance | CountryPair | HoI2 | Models/Trigger.cs:108, :248, :454 |
| 76 | `access` | Access | CountryPair | HoI2 | Models/Trigger.cs:109, :249, :455 |
| 77 | `non_aggression` | NonAggression | CountryPair | HoI2 | Models/Trigger.cs:110, :250, :456 |
| 78 | `trade` | Trade | CountryPair | HoI2 | Models/Trigger.cs:111, :251, :457 |
| 79 | `guarantee` | Guarantee | CountryPair | HoI2 | Models/Trigger.cs:112, :252, :458 |
| 80 | `war` | War | CountryPair | HoI2 | Models/Trigger.cs:113, :253, :459 |
| 81 | `lost_vp` | LostVp | CountryInt | HoI2 | Models/Trigger.cs:114, :254, :460 |
| 82 | `lost_national` | LostNational | CountryInt | HoI2 | Models/Trigger.cs:115, :255, :461 |
| 83 | `lost_ic` | LostIc | CountryInt | HoI2 | Models/Trigger.cs:116, :256, :462 |
| 84 | `axis` | Axis | Int | HoI2 | Models/Trigger.cs:117, :257, :463 |
| 85 | `allies` | Allies | Int | HoI2 | Models/Trigger.cs:118, :258, :464 |
| 86 | `comintern` | Comintern | Int | HoI2 | Models/Trigger.cs:119, :259, :465 |
| 87 | `vp` | Vp | Int | HoI2 | Models/Trigger.cs:120, :260, :466 |
| 88 | `range` | Range | Range | HoI2 | Models/Trigger.cs:121, :261, :467 |
| 89 | `belligerence` | Belligerence | Belligerence | HoI2 | Models/Trigger.cs:122, :262, :468 |
| 90 | `under_attack` | UnderAttack | UnderAttack | HoI2 | Models/Trigger.cs:123, :263, :469 |
| 91 | `attack` | Attack | Country | HoI2 | Models/Trigger.cs:124, :264, :470 |
| 92 | `difficulty` | Difficulty | Int | HoI2 | Models/Trigger.cs:125, :265, :471 |
| 93 | `land_percentage` | LandPercentage | CountryDouble | HoI2 | Models/Trigger.cs:126, :266, :472 |
| 94 | `naval_percentage` | NavalPercentage | CountryDouble | HoI2 | Models/Trigger.cs:127, :267, :473 |
| 95 | `air_percentage` | AirPercentage | CountryDouble | HoI2 | Models/Trigger.cs:128, :268, :474 |
| 96 | `country` | Country | Country | HoI2 | Models/Trigger.cs:129, :269, :475 |
| 97 | `relation` | Relation | Relation | HoI2 | Models/Trigger.cs:130, :270, :476 |
| 98 | `team` | Team | Int | AoD+ | Models/Trigger.cs:131, :271, :478 |
| 99 | `areaowned` | AreaOwned | ProvinceCountry2 | AoD+ | Models/Trigger.cs:132, :272, :479 |
| 100 | `areacontrol` | AreaControl | ProvinceCountry2 | AoD+ | Models/Trigger.cs:133, :273, :480 |
| 101 | `ic` | Ic | Size | AoD+ | Models/Trigger.cs:134, :274, :481 |
| 102 | `capital_province` | CapitalProvince | CapitalProvince | AoD+ | Models/Trigger.cs:135, :275, :482 |
| 103 | `big_alliance` | BigAlliance | CountryAlliance | AoD+ | Models/Trigger.cs:136, :276, :483 |
| 104 | `national_idea` | NationalIdea | CountryIdea | AoD+ | Models/Trigger.cs:137, :277, :484 |
| 105 | `land_combat` | LandCombat | Int | AoD+ | Models/Trigger.cs:138, :278, :485 |
| 106 | `tech_ream` | TechTeam | TechTeam | AoD+ | Models/Trigger.cs:139, :279, :486 |
| 107 | `money` | Money | Int | AoD+ | Models/Trigger.cs:140, :280, :487 |
| 108 | `military_control` | MilitaryControl | CountryPair | AoD+ | Models/Trigger.cs:141, :281, :488 |
| 109 | `losses` | Losses | Losses | AoD+ | Models/Trigger.cs:142, :282, :489 |
| 110 | `province_building` | ProvinceBuilding | ProvinceBuilding | AoD+ | Models/Trigger.cs:143, :283, :490 |
| 111 | `participant` | Participant | CountryInt | DH | Models/Trigger.cs:144, :284, :492 |
| 112 | `embargo` | Embargo | Embargo | DH | Models/Trigger.cs:145, :285, :493 |
| 113 | `claims` | Claims | ProvinceCountry | DH | Models/Trigger.cs:146, :286, :494 |
| 114 | `escortpool` | EscortPool | Int | DH | Models/Trigger.cs:147, :287, :495 |
| 115 | `convoypool` | ConvoyPool | Int | DH | Models/Trigger.cs:148, :288, :496 |
| 116 | `stockpile` | Stockpile | Resource | DH | Models/Trigger.cs:149, :289, :497 |
| 117 | `import` | Import | Resource | DH | Models/Trigger.cs:150, :290, :498 |
| 118 | `export` | Export | Resource | DH | Models/Trigger.cs:151, :291, :499 |
| 119 | `resource_shortage` | ResourceShortage | ResourceAll | DH | Models/Trigger.cs:152, :292, :500 |
| 120 | `capital` | Capital | ProvinceCountry | DH | Models/Trigger.cs:153, :293, :501 |
| 121 | `continent` | Continent | String | DH | Models/Trigger.cs:154, :294, :502 |
| 122 | `core` | Core | ProvinceCountry | DH | Models/Trigger.cs:155, :295, :503 |
| 123 | `policy` | Policy | Policy | DH | Models/Trigger.cs:156, :296, :504 |
| 124 | `building` | Building | Building | DH | Models/Trigger.cs:157, :297, :505 |
| 125 | `nuclear_reactor` | NuclearReactor | Size | DH | Models/Trigger.cs:158, :298, :506 |
| 126 | `rocket_test` | RocketTest | Size | DH | Models/Trigger.cs:159, :299, :507 |
| 127 | `nuked` | Nuked | Nuked | DH | Models/Trigger.cs:160, :300, :508 |
| 128 | `intelligence` | Intelligence | Intelligence | DH | Models/Trigger.cs:161, :301, :509 |
| 129 | `area` | Area | Area | DH | Models/Trigger.cs:162, :302, :510 |
| 130 | `region` | Region | Region | DH | Models/Trigger.cs:163, :303, :511 |
| 131 | `research_mod` | ResearchMod | ResearchMod | DH | Models/Trigger.cs:164, :304, :512 |
| 132 | `alliance_leader` | AllianceLeader | Int | DH | Models/Trigger.cs:165, :305, :513 |

Увага: ключове слово №106 у таблиці редактора — `tech_ream` (`Models/Trigger.cs:139`), найімовірніше
опечатка від `tech_team` **(припущення)**; з таким написанням тригер `tech_team = …` у файлі буде
відкинуто як невідомий.

Очікувана форма значення за назвою типу параметра — **(припущення)**, редактор цього не перевіряє:
`Container` — `{ тригери }`; `Int` — ціле; `String` — ідентифікатор/рядок; `YesNo` — `yes`/`no`; `Country` — тег;
`CountryPair`, `CountryInt`, `CountryDouble`, `CountryYesNo`, `CountryAlliance`, `CountryIdea`, `ProvinceInt`,
`ProvinceCountry`, `ProvinceCountry2`, `Size`, `DomesticInt`, `Resource`, `Losses`, `Relation`, `Range`,
`Belligerence`, `UnderAttack`, `IntelDiff`, `Random`, `DivisionExists`, `DivisionInProvince`, `Garrison`,
`CapitalProvince`, `TechTeam`, `ProvinceBuilding`, `Embargo`, `ResourceAll`, `Policy`, `Building`, `Nuked`,
`Intelligence`, `Area`, `Region`, `ResearchMod`, `Government`, `Ideology`, `IsPuppet`, `Technology` —
складені форми, імовірно блоки `{ ключ = значення … }`; редактор при записі обробить їх як скаляр (§3.4.3).

### 4.8. Формула швидкості дослідження (як реалізовано в редакторі)

Це модель «Research Viewer» (`Models/Research.cs`), а **не** витяг із коду гри; константи для DH варто
звірити з рушієм (§7). Календар — 360 днів/рік, 30 днів/місяць (`Models/GameDate.cs:125-135`, `:159-162`).

**Вхідні дані:** технологія (рік, список компонентів), команда (навичка, 32 спеціальності), налаштування
переглядача (`Models/Researches.cs:20-45`): дата старту (історична = 1 січня `year` або задана користувачем),
розмір ракетного полігона й ядерного реактора (UI 0..10, `Forms/ResearchViewerForm.Designer.cs:228`, `:244`),
наявність креслень (blueprint), загальний множник `modifier` (>0.00005, за замовчуванням 1;
`Forms/ResearchViewerForm.cs:876-903`, `Models/Researches.cs:54-58`), що, за коментарем, агрегує решту
впливів (комп'ютерні технології, міністри, складність, налаштування сценарію) (`Models/Research.cs:150`).
Константи з `db\misc.txt` (`Models/Misc.cs:177-262`; за відсутності — 1):
`BlueprintBonus`, `PreHistoricalDateModifier`, `PostHistoricalDateModifierDh` (для DH),
`PostHistoricalDateModifierAoD`, `TechSpeedModifier`, `PreHistoricalPenaltyLimit`, `PostHistoricalBonusLimit`
(три останні — лише AoD, для інших ігор повертають 1).

**Крок 0. Базова денна швидкість `p`** (відсотків компонента за день; компонент готовий на 100)
(`Models/Research.cs:85-154`):

```
d = difficulty + 2
s = skill
if team.specialities містить component.type { s = 2*skill + 6 }
t = rocket_site_size,   якщо type == rocketry
    reactor_size,       якщо type ∈ {nuclear_physics, nuclear_engineering}
    0                   інакше
p = DH:   (9.0 + 1.5 * (s + 5.62 * t)) / d
    HoI2: (9.3 + 1.5 * s + 10 * t) / d          (також для невідомої гри)
    AoD:  (3.0 + 0.5 * (s + 10 * sqrt(t))) / d
if double_time   { p /= 2 }
if blueprint     { p *= BlueprintBonus }
if AoD           { p *= TechSpeedModifier }
p *= modifier
```

**Компоненти досліджуються послідовно**: `offset` — різниця в днях між датою старту і історичною датою
(від'ємна = раніше історичного року); для кожного наступного компонента `offset` збільшується на дні
попереднього; дні технології = сума днів компонентів; дата завершення = старт + сума (`Models/Research.cs:42-77`).
Список команд сортується за зростанням днів (`Models/Researches.cs:69-82`). Роки команди (Start/End Year)
у розрахунку не використовуються; фільтр — лише за країною (`Forms/ResearchViewerForm.cs:607-616`).

**Дні одного компонента** (`Models/Research.cs:163-318`), власний псевдокод; `rem = 100 - done`;
`root(a,b,c)` — додатний корінь `a·n² + b·n + c = 0`, обчислений як `-b/(2a) + sqrt((b/(2a))² - c/a)`
(`Models/Research.cs:391-396`):

```
total = 0; done = 0.0; o = offset
mpre = PreHistoricalDateModifier            // за день, очікується від'ємний

// 1) «Підлога» штрафу за ранній старт
if o < 0 && mpre < 0 {
    floor = (AoD ? PreHistoricalPenaltyLimit : 0.1)
    o_floor = floor_to_int((1 - floor) / mpre)          // від'ємний день, коли штраф сягає підлоги
    if o <= o_floor {
        n = ceil(100 / (p * floor))
        if o + n <= o_floor { return n }
        n = o_floor - o; total = n; done = p*floor*n; o += n
    }
}
// 2) Лінійний штраф до історичної дати: швидкість у k-й день = p * (1 - (o + k) * mpre)
if o < 0 {
    n = ceil(root(-p*mpre/2, p/2 * (2 - (2*o + 1)*mpre), -rem))
    if o + n <= 0 { return total + n }
    n = -o; total += n; done += p*n*(2 - (2*o + n + 1)*mpre)/2; o = 0
}
// 3) Без бонусу
if HoI2 { return total + ceil(rem / p) }
mpost = (DH ? PostHistoricalDateModifierDh : PostHistoricalDateModifierAoD)
if mpost <= 0 { return total + ceil(rem / p) }
if DH {
    if type ∈ {rocketry, nuclear_physics, nuclear_engineering} { return total + ceil(rem / p) }
    o -= 360                                   // перший рік після історичної дати — без бонусу
    if o < 0 {
        n = ceil(rem / p)
        if o + n < 0 { return total + n }
        n = -o; total += n; done += p*n; o = 0
    }
}
// 4) Лінійний бонус після історичної дати: швидкість у k-й день = p * (1 + (o + k) * mpost)
cap = (AoD ? PostHistoricalBonusLimit : BlueprintBonus)      // у DH стеля = бонус креслень
o_cap = ceil(|(cap - 1) / mpost|)
if o < o_cap {
    n = ceil(root(p*mpost/2, p/2 * (2 + (2*o + 1)*mpost), -rem))
    if o + n < o_cap { return total + n }
    n = o_cap - o - 1; total += n; done += p*n*(2 + (2*o + n + 1)*mpost)/2
}
// 5) На стелі бонусу
return total + ceil(rem / (p * cap))
```

Джерела кроків: 1 — `Models/Research.cs:171-203`; 2 — `:205-227`, `:328-347`; 3 — `:229-282`;
4 — `:284-313`, `:357-376`; 5 — `:315-317`. Особливості формули — §6.

---

## 5. Відмінності DH від HoI2/AoD (зведення)

| Аспект | DH | HoI2 / AoD | Джерело |
|---|---|---|---|
| Ключ `picture` в `application` | пишеться (якщо непорожній); картинка `gfx\interface\tech\<picture>.bmp` | парситься, але **не пишеться**; картинка `<id>.bmp` | `Writers/TechWriter.cs:117-120`, `Parsers/TechParser.cs:441-464`, `Forms/TechEditorForm.cs:1391-1394`, `:2044-2059` |
| Спеціальності | 1.02: 48 іменованих + `rt_user_1..16`; 1.03+: 49 (+`cavalry_tactics`) + `rt_user_1..60` | 34 | `Models/Techs.cs:269-495`, `:646-656` |
| Набір команд | 264 / 270 / 271 для 1.02 / 1.03 / 1.04 (§4.6.1) | 237 (DDA), 248–261 (AoD) | `Models/Commands.cs:351-648`, `:700-718` |
| Тригери в `command` | розбираються **і пишуться** (`trigger = {…}` перед `type`) | розбираються, але **губляться** при записі | `Models/Command.cs:101-109` |
| Ключові слова тригерів | додано 22 (`participant` … `alliance_leader`) | HoI2: 97 базових; AoD: +13 (`team` … `province_building`) | `Models/Trigger.cs:477`, `:491` |
| Каталог мода | `<гра>\Mods\<мод>` | `<гра>\<мод>` | `Models/Game.cs:842-848` |
| Список файлів команд | `db\teams.txt` (якщо є) | сканування `db\tech\teams\*.csv` | `Models/Teams.cs:220-236`, `:364-409`, `:649` |
| Формула: базова швидкість | `(9.0 + 1.5(s + 5.62t))/d` | HoI2 `(9.3 + 1.5s + 10t)/d`; AoD `(3 + 0.5(s + 10√t))/d` | `Models/Research.cs:112-130` |
| Формула: бонус після історичної дати | є; починається через 360 днів; не діє для rocketry/nuclear_*; стеля = `BlueprintBonus` | HoI2 — немає; AoD — одразу, стеля `PostHistoricalBonusLimit` | `Models/Research.cs:231-293` |
| Формула: підлога штрафу | 0.1 | HoI2 0.1; AoD — `PreHistoricalPenaltyLimit` | `Models/Research.cs:178-180` |
| Формула: `TechSpeedModifier` | не застосовується | лише AoD | `Models/Research.cs:144-148` |

---

## 6. Особливості й баги редактора (важливо для сумісного round-trip)

1. `category` порівнюється з урахуванням регістру, решта ключових слів — без (`Parsers/TechParser.cs:167-177`).
2. Ключ короткої назви не зберігається — завжди `"SHORT_" + name` (`Parsers/TechParser.cs:395`).
3. Невідомі ключі в технологіях губляться при збереженні; повторні `required`/`or_required`/`effects`
   зливаються в один блок; порядок ключів нормалізується (§3.2.9).
4. `required = { }` пишеться завжди; `or_required` — лише непорожній; `desc` технології — лише непорожній;
   `name`/`desc` групи пишуться завжди, навіть `null` (вийде `name        =  # Localized name`)
   (`Writers/TechWriter.cs:27-28`, `:109-112`, `:126-130`).
5. Компонент без `type` збережеться як `type = ` (порожнє значення) — невалідно (`Writers/TechWriter.cs:147`).
6. Команди з `type`, недоступним у поточній версії гри, **видаляються** при завантаженні (§3.2.8).
7. Рядкові параметри команд і тригерів пишуться **без лапок** (§3.3.3).
8. Не-контейнерний тригер із блоковим значенням записується як ім'я .NET-типу (`Models/Trigger.cs:351-354`).
9. `tech_ream` замість `tech_team` (`Models/Trigger.cs:139`).
10. Кольоровий префікс мітки зрізається в `ToString()` до того, як малювальник шукає його, тож мітки завжди
    білі (`Models/Tech.cs:1228-1237` проти `Controllers/TechTreePanelController.cs:661-676`).
11. Команди: перший рядок-коментар/порожній → файл ігнорується цілком; один файл в експорті й у моді
    завантажується двічі; кілька файлів на тег зливаються в перший при записі; повідомлення про помилку
    запису показує шлях з `db\ministers` (`Models/Teams.cs:459-464`, `:256-323`, `:493-496`, `:677`).
12. `db\teams.txt` читається як UTF-8, пишеться в кодовій сторінці гри (`Models/Teams.cs:419`, `:714`).
13. Формула: перевірка «команда має спеціальність компонента» робиться через `contains`, тому компонент без
    `type` («немає») отримує бонус спеціальності для будь-якої команди з хоча б одним порожнім слотом
    (`Models/Research.cs:91`). При `PreHistoricalDateModifier == 0` і `offset < 0` крок 2 ділить на нуль
    (`Models/Research.cs:330-333`, `:393-394`). У кроці 4 межа рахується з `-1` (`Models/Research.cs:309`),
    а в кроці 1 — без нього (`:198`) — асиметрія на один день.
14. `AddKeyNumbers` перевіряє шаблон опису на полі *назви* (`Models/Tech.cs:616`) — вплив лише на нумерацію
    нових ключів.

---

## 7. Відкриті питання

1. **Семантика `which/value/when/where` для кожного `type`** — у редакторі відсутня; потрібна документація
   DH (напр. список команд подій DH) або експерименти. Особливо `when`/`where` у технологіях.
2. Чи має рушій DH ключі в `*_tech.txt`, яких редактор не знає (DH 1.04/1.05)? Вони б мовчки губилися.
3. Чи вимагає гра кратності ID технологій 10 і `component.id = tech.id + k`, і чи мають ID компонентів бути
   глобально унікальними? (У редакторі — лише конвенція.)
4. Що означає `id` групи `technology` і чи використовує його гра?
5. Точна семантика блоку `event` (чи `id` — це ID події з `db\events`, що «винаходить» технологію).
6. Чи збігаються константи формули DH (`9.0`, `1.5`, `5.62`, 360-денна пауза, стеля = `BlueprintBonus`,
   підлога 0.1, виняток для rocketry/nuclear) з рушієм; які ще модифікатори (міністри, кількість команд,
   IC, складність, `MaximumRandomModifier` з misc) рушій застосовує.
7. Формат кольорового префікса міток (`§RGB`?) і порядок цифр — у рушії.
8. Чи існує `db\teams.txt` у ванільному DH (з якої версії) і чи допускає рушій у ньому коментарі/пробіли.
9. Справжнє ключове слово тригера наукової команди (`tech_team`?) і форми складених значень тригерів
   (`CountryPair` тощо).
10. Чи впливає порядок `required` або дублікати ID на гру.
11. Чи використовує рушій `picture` у DH 1.02 (ключ пишеться для будь-якої версії DH).
12. Нумерація кадрів `tc_icons.bmp` у рушії (чи збігається з порядком спеціальностей, §4.2).
