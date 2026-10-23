# Мережева підсистема Darkest Hour.exe — звіт з реверс-інжинірингу

**Об'єкт:** Darkest Hour.exe (32-бітний PE, MSVC6, збірка 2022)
**Джерела:** декомпіляції `/tmp/dh-decomp/` (Ghidra), дизасемблювання objdump, дамп імпортів PE та рядків (з тексту самого exe).
**Область:** клас `Bsocket` (адреси 0x741400–0x7423xx), мережеві клієнти/потоки (0x742xxx–0x748xxx), лобі мультиплеєра (`ClientLobby.cpp` 0x7466f0, екран лобі 0x582e00/0x582f10).

> **Стан покриття (оновлено):** «гепи» 0x7416a0–0x7418xx (серверна частина Bsocket), 0x743630–0x743960 (PThread/PMutex/PSemaphore, net-client) та 0x7443f0–0x7445xx (цикл «Network reader thread») **повністю закрито** безпосереднім дизасемблюванням exe (objdump) із прив'язкою викликів до IAT. Ключовий висновок: значна частина Bsocket-API (включно з усією серверною стороною) — **недосяжний (мертвий) код** цієї збірки; перевірено пошуком по всьому бінарю (не лише .text): жодного call-site / посилання на адресу немає.

---

## 1. Які API Winsock викликаються і де

WS2_32.dll імпортується **виключно за ординалами**; у PE щоразу імпортовано рівно 18 функцій. Кожна функція Winsock використовується в коді через один call-site (єдиний виклик через thunk-таблицю 0x796a9e–0x796b04):

| API (ws2_32) | Ordinal | Де викликається | Призначення |
|---|---|---|---|
| `WSAStartup` | 115 | `FUN_00741450` (0x741450) — **конструктор Bsocket** | Ініціалізація; версія **2.2** (`0x202`), перевіряється wVersion==2.2. Помилка → фатальний збій `"Could not find a usable WinSock DLL with version <= 2.2"` (Bsocket.cpp, рядки 0x2d5/0x2e6 = 725/742) |
| `WSACleanup` | 116 | `FUN_00741520` (0x741520) — **деструктор Bsocket** | Завершення Winsock |
| `socket` | 23 | `FUN_007420f0` (0x7420f0) | `socket(AF_INET=2, SOCK_STREAM=1, 0)` — TCP-сокет; стан об'єкта → 2 |
| `setsockopt` | 21 | `FUN_007420f0` (2 виклики) | (а) `SO_REUSEADDR` (`SOL_SOCKET=0xffff`, opt=4, val=1) — **тільки якщо прапорець класу (this+8)=='\\x01'**; помилка → `"setsockopt reusable"` (Bsocket.h, рядок 0x27b=635). (б) `TCP_NODELAY` (рівень = `getprotobyname("tcp")->p_proto`, optname=1, val=1); помилка → `"setsockopt nodelay"` (Bsocket.h, рядок 0x284=644) |
| `getprotobyname` | 53 | `FUN_007420f0` | Аргумент рядка перевірено: `0x874498 == "tcp"` |
| `htons` | 9 | `FUN_00741ff0` (0x741ff0) | Порт у мережевому порядку → `sockaddr_in.sin_port` (this+0x28) |
| `htonl` | 8 | `FUN_00741ff0` | `htonl(INADDR_ANY)=0` у `sin_addr`, коли хост порожній |
| `gethostbyname` | 52 | `FUN_00741ff0` | Резолв хоста; копіює `h_addr_list[0]` (рівно `h_length` байт) у `sin_addr` (this+0x2a); невдача → WSAGetLastError у this+0x36, return -1 |
| `connect` | 4 | `FUN_007418a0` (0x7418a0) | `connect(sock, (sockaddr*)&this+0x26, 16)` — після резолву; стан → **4** |
| `send` | 19 | `FUN_00741bc0`, `FUN_00741dd0`, `FUN_007421d0` (три копії `Bsocket::write`, див. §2) | `send(sock, buf, len, 0)` |
| `recv` | 16 | `FUN_00741f50` (`recvN` — цикл до повного буфера), `0x741630` (recv по 1 байту, прапори **всюди 0** — MSG_PEEK НЕ використовується), `0x741d00` (recvAll — мертвий код), `0x7416a0` (read-until-string, мертвий код) | Читання даних |
| `closesocket` | 3 | `FUN_00741520`, `FUN_007415c0`, `FUN_00741b50` (reconnect) | Закриття, якщо стан ∉ {1, 0x10}; помилка → `"The socket should be a closeable socket"` (Bsocket.cpp, рядок 0x2bd=701) |
| `accept` | 1 | `FUN_00741870` (0x741870) | `accept(sock, NULL, NULL)`; помилка → лише лог `"accept: "` (не фатальна) |
| `bind` | 2 | **серверна функція 0x741740** (геп, дизасембльовано) | `bind(sock, &this+0x26, 16)`; помилка → WSAGetLastError у this+0x36, -1 |
| `listen` | 13 | **0x741740** | `listen(sock, backlog)` (backlog — аргумент виклику); помилка аналогічно |
| `getpeername` | 5 | **0x743870** (геп, net-client) | `getpeername(sock, &addr, 16)` |
| `inet_ntoa` | 12 | **0x743905** | Перетворення адреси партнера в рядок (AnsiString); при невдачі getpeername — порожній рядок |
| `WSAGetLastError` | 111 | Усі помилкові гілки (22 site-и) | Код помилки зберігається в полі **this+0x36** |

**Висновок:** `Bsocket` — повноцінний TCP-клас із підтримкою і клієнта, і сервера (bind/listen/accept), хоча в декомпільованому коді видимих активних server-loop немає — див. §6 (непідтверджене).

---

## 2. Архітектура Bsocket

### Об'єкт (зсуви полів, за декомпіляціями)
| Зсув | Поле |
|---|---|
| +0x00 | vtable (`PTR_FUN_007fa188`) |
| +0x04 | порт (int, мережевий через htons при використанні) |
| +0x08 | прапорець SO_REUSEADDR (byte) |
| +0x0a | поле «timeout» (DWORD): 10000 передається в конструктор і зберігається тут; **це не час** — використовується як розмір порції читання в `0x741d00` (recvAll) і виставляється сеттером `0x741fe0`. Обидві функції — **мертвий код**; жоден живий шлях +0xa не читає. **Питання «де застосовується timeout» закрито: ніде в живому коді.** |
| +0x0e | службовий байт |
| +0x12 / +0x16 / +0x1a | збережений хост: AnsiString-подібно (ptr / length / capacity; звільнення з реф-каунтом у байті перед буфером) |
| +0x1e | **стан**: 1=ініціалізовано (конструктор), 2=сокет створено, 4=з'єднано, **8=слухає (listen, мертвий шлях)**, 0x10=закрито |
| +0x22 | SOCKET (початково `0xffffffff` = INVALID_SOCKET) |
| +0x26 | `sockaddr_in` (sin_family=2, sin_port, sin_addr) |
| +0x36 | last error (WSAGetLastError; ініціалізовано 0xffffcfc7 ≈ -12345 «немає помилки») |

### Конструктор — `FUN_00741450` (0x741450)
`BSocket(int port, byte reuse, int timeout)` — виклики з кодом: `FUN_00741450(0,1,10000)` → порт=0, reuse=1, timeout=10000.
1. Обнуляє поля, встановлює vtable, стан=1, sock=INVALID_SOCKET.
2. `WSAStartup(0x202, &wsaData)`.
3. Перевірка версії: молодший і старший байти == 2 → успіх; інакше **фатальне** `FUN_0074bc80("Could not find a usable WinSock DLL with version <= 2.2", "Unknown method", "C:\Dev\HoI2 Projects\Darkest Hour\Bsocket.cpp", рядок)`.

### Деструктори
- `FUN_00741500` (0x741500): `~Bsocket` — викликає тіло деструктора + operator delete (якщо прапорець &1).
- `FUN_00741520` (0x741520): тіло деструктора: якщо стан ∉ {1, 0x10} → `closesocket` (помилка → фatal «The socket should be a closeable socket», Bsocket.cpp:701); стан → 0x10; `WSACleanup`; звільнення рядка хоста (реф-каунт).

### `Bsocket::write` — три ідентичні копії
`FUN_00741bc0` (0x741bc0), `FUN_00741dd0` (0x741dd0), `FUN_007421d0` (0x7421d0) — ймовірно, одна й та сама функція, скомпільована в різних TU/COMDAT. Патерн (розібрано дизасемблюванням):
```
send(sock(this+0x22), buf, len, 0);
лог: FUN_00742920(&DAT_00dc4c20, "Bsocket._write: ")   // рядок 0x874454 (перевірено в exe)
if (повернуло -1) {                                     // SOCKET_ERROR
    лог: FUN_00742920(&DAT_00dc4c20, "Tried to BSocket._write: ")  // 0x874468
    FUN_00742550(buf, len);   // дамп даних, які не вдалося відправити, у лог
    FUN_007423e0(10);         // '\n'
    this+0x36 = WSAGetLastError();
    return -1;
}
```
- `FUN_00741bc0` / `FUN_007421d0` — одноразовий `send`, повертає -1 або кількість байт. **Обидві — мертві копії (0 call-site'ів).**
- `FUN_00741dd0` — **повний запис**: цикл `do { send(...) } while (накопичено != len)`, повертає len (кількість фактично відправлених байт при частковій помилці). Це основний «write-all» — **єдина жива** копія (8 call-site'ів).
- Логування йде в глобальний лог-потік `DAT_00dc4c20` (стандартний лог HoI2).

### `Bsocket::close` — `FUN_007415c0` (0x7415c0)
Підтверджено дизасемблюванням: якщо стан ∉ {1, 0x10} → спершу `sock(+0x22) = INVALID_SOCKET (0xffffffff)`, потім `closesocket`; помилка (SOCKET_ERROR) → `WSAGetLastError` у +0x36 + **фатальне** `"The socket should be a closeable socket"` (Bsocket.cpp рядок 0x2bd=701); стан → 0x10; повертає 0 (успіх) або -1. Якщо стан вже {1, 0x10} («вже закрито») → одразу -1. Поруч: `0x741620` — геттер стану (`mov eax,[ecx+0x1e]`), `0x741fa0` — геттер порту (+0x4), `0x741fb0` — геттер SOCKET (+0x22), `0x741fc0` — `setSocket(SOCKET)`: стан → 4, приймає зовнішній сокет (очевидно, призначалася для пари з accept), `0x741fe0` — `setTimeout(+0xa)`; усі — без call-site'ів (мертві).

### `Bsocket::connect(host, port)` — `FUN_007418a0` (0x7418a0) + обгортка `FUN_00741b50` (0x741b50)
`FUN_00741b50` — спершу закриває поточний сокет, потім `FUN_007418a0` (це й є ланцюжок «reconnect»):
1. Зберігає хост-рядок (AnsiString) у поля +0x12..; самоприсвоєння відловлюється (this+0xe == param).
2. `FUN_007420f0()` — створення сокета + setsockopt (стан → 2).
3. Якщо порт < 1 → фатал `"Port not set to valid portnumber! (Port is zero)\n"` (0x874420), Bsocket.h рядок 0x110=272.
4. Якщо хост порожній (порівняння з `0x88ebf8 == ""`) → фатал `"No host specified"` (0x87440c), рядок 0x115=277.
5. `this+4 = port`; `FUN_00741ff0` — резолв у sockaddr_in.
6. `connect(sock, &this+0x26, 16)`; помилка → -1 (з WSAGetLastError у +0x36).
7. Стан → **4**, повертає 1.

### Неіндексовані функції (знайдено дизасемблюванням; життєвий статус — перевірено по всьому бінарю)
- **0x741630 — «read-until» (ЖИВА, 3 call-site: 0x744433 reader-потік, 0x74599f `recvString`, 0x75802f)**: цикл `recv(sock, buf+pos, 1, 0)` (прапори **0**!), поки байт ≠ роздільник (аргумент byte, у всіх викликах = **0/NUL**); ліміт ~max-1 байт; повертає позицію роздільника+1 (довжина з NUL) або -1 (помилка/0 байт; WSAGetLastError у +0x36). Це і є «читання рядка до `\0`» з §4.
- **0x741d00 — `recvAll(int* out)` (МЕРТВИЙ, 0 викликів)**: `recv(sock, buf+off, [this+0xa], 0)` порціями по `+0xa` (10000) байт, буфер доростає (new+memcpy+free), до `recv==0` (EOF) або -1; повертає сумарну кількість, буфер через вихідний параметр. **Єдиний споживач поля +0xa** — отже «timeout» це насправді розмір порції читання recvAll.
- **0x7416a0 — read-until-string (МЕРТВИЙ)**: читає по 1 байту (`recv(...,1,0)`, **без MSG_PEEK** — байти споживаються) у занулений буфер, після кожного байта порівнює накопичений префікс (0x7a9780, порівняння рядків) із рядком-зразком (аргумент); повертає кінцеву позицію зразка+1 або -1.
- **0x741740 — `listen(backlog)` (МЕРТВИЙ)**: 0x7420f0 (сокет+опції) → порожній хост-рядок (0x88ebf8) → 0x741ff0 (резолв; INADDR_ANY) → `bind(sock, &this+0x26, 16)` (помилка → +0x36, -1) → `listen(sock, backlog)` (аналогічно) → **стан = 8** → 1. `ret 4` — один аргумент (backlog).
- **0x741870 — `accept()` (МЕРТВИЙ)**: `accept(sock, 0, 0)`; <0 → +0x36 + лог `"accept: "` (0x874400), -1. Парна до неї 0x741fc0 `setSocket` теж мертва.
- **0x743870 — `getpeername` + `inet_ntoa`**: адреса партнера → IP-рядок (AnsiString); при невдачі — порожній рядок.

---

## 3. Потокова модель

Уся синхронізація мережевого коду — на **Win32 handle-примітивах**, загорнутих у власні класи `PThread` / `PMutex` / `PSemaphore` (з файлів `PThread.h`, `Mutex.h`, `PSemaphore.h` — шляхи підтверджені рядками 0x874508/0x874560/0x8745ec/...). Імпорти через IAT: `CreateThread`(0x7e30d0), `CreateSemaphoreA`(0x7e30c8), `CreateMutexA`(0x7e30a4), `ReleaseSemaphore`(0x7e30d4), `ReleaseMutex`(0x7e309c), `WaitForSingleObject`(0x7e30d8), `CloseHandle`(0x7e30a8), `ExitThread`(0x7e30b0), `GetCurrentThreadId`(0x7e30ec), `SetThreadPriority`(0x7e308c).

### PThread
- **0x743630 (геп) — `PThread::start`**: `CreateThread(NULL, 0, 0x743f00 /*proc*/, this, 0, &threadId)`; при невдачі GetLastError; якщо задано пріоритет (this+0xc) → `SetThreadPriority`.
- **0x743f00 — trampoline потоку**: якщо [arg+4]==0 → виклик віртуального `run()` (vtable+4) — базовий `PThread::run()`, якому відповідає рядок `"void* PThread::run() was called. Should not happen!"` (0x8744xx; PThread.h); інакше — прямий виклик [arg+0x14].
- Ім'я потоку зберігається як AnsiString (конструктор через `FUN_00673c70(name,...)` + strlen `FUN_00674d80`).

### Потоки мережевого клієнта
Об'єкт мережевого клієнта (ctor `FUN_00742c30` і `FUN_00744798`, dtor `FUN_007468b0`, vtable `0x7fa1a0`/`0x7fa210`) створює:
1. **«Network reader thread»** (`s_Network_reader_thread_008744d4`, 0x8744d4) — створюється `FUN_00744150`/`FUN_00748370` (thread-fn **0x7443f0**, 2 місця запису proc-вказівника: 0x744187 і 0x748490). Цикл розібрано повністю (дизасемблювання):
   - об'єкт потоку: **+0x4 = ліміт довжини повідомлення (100)**, **+0x8 = `Bsocket*`**, +0xc = прапорець зупинки (1 → вихід), +0x14 = proc-вказівник (PThread), **+0x22 = PMutex**, **+0x2a = ThreadSafeList***, **+0x2e = лічильник повідомлень**;
   - крок 1: `new(8)` → вузол-повідомлення `{data@0, len@4}` (спершу використовується як буфер цифр довжини);
   - крок 2: `0x741630(sock, вузол, 0x20, 0)` — читання десяткових цифр довжини до байта `\0` (макс. ~0x20 байт; ≤0 → вихід);
   - крок 3: `atoi` → len; `len > [+0x4] (100)` → вихід; `len<0` → вихід;
   - крок 4: `new(len)` → payload; `recvN(0x741f50, sock, payload, len)`; неповне читання → `free(payload)` + вихід;
   - крок 5: `WaitForSingleObject(mutex +0x22, INFINITE)` — невдача → фатал (Mutex.h рядок 0x80, GetLastError в eax);
   - крок 6: вузол: `data=payload, len=len`; додавання в ThreadSafeList (12-байтний вузол `{prev,next,data}`, двозв'язний append до хвоста списку +0x2a); лічильник +0x2e++;
   - крок 7: `ReleaseMutex(+0x22)` — невдача → фатал (Mutex.h рядок 0x95);
   - крок 8: `[+0xc]==1` → вихід, інакше — наступна ітерація (наступне повідомлення).
   Підтверджує wire-формат §4 («довжина\0 + payload»; payload отримується як сирі байти, завершальний `\0` є частиною довжини, бо len включає його з боку відправника).
2. **Два потоки «Noname Thread»** (`s_Noname_Thread_008744b0`) — `FUN_00743d70`, thread-fn **0x757cf0**: диспетчер за `GetCurrentThreadId()` — якщо поточний потік == id потоку-відправника → **0x757d30** (цикл: WaitForSingleObject(mutex +0xd0, INFINITE); витягти вузол із черги +0xd8; ReleaseMutex; WaitForSingleObject(mutex +0x10c); `ReleaseSemaphore(+0x110, 1, &prev)`); якщо == id потоку-обробника → **0x758090** (цикл: `WaitForSingleObject(семафор +0x110, INFINITE)` — з прийняттям WAIT_TIMEOUT(0x102); lock +0x10c; лічильник — ; обробка повідомлень із черги; lock +0xd0; pop вузла; ReleaseMutex). Тобто **семафорна розсилка «повідомлення готове»** між потоками.
3. `FUN_00744ce0` ×2 — два **PSemaphore**; `FUN_00748370` — ThreadSafeList + м'ютекс + reader-потік.

### PMutex (`FUN_00743be0`, `FUN_00743f30` — ThreadSafeList; dtor у `FUN_007468b0`)
`CreateMutexA(NULL, FALSE, NULL)`; невдача → фатал `"CreateMutex(NULL, false, NULL) failed"` (Mutex.h рядок 0x28=40). Захоплення: `WaitForSingleObject(handle, INFINITE)` (помилка → `"WaitForSingleObject(_mutex, INFINITE) failed."`, Mutex.h 0x80=128); звільнення: `ReleaseMutex` (помилка → `"Releasemutex(_mutex) failed."`, рядок 0x95=149). Закриття: `CloseHandle` (`"CloseHandle(_mutex) failed."`, рядок 0x50=80).

### PSemaphore (`FUN_00742fc0`, `FUN_00744ce0`)
Внутрішній PMutex («Semaphore mutex» `s_Semaphore_mutex_0087458c`) + `CreateSemaphoreA(NULL, initial_count, 9999999, NULL)`; невдача → фатал `"Error creating semaphore"` (PSemaphore.h, рядок ~0x39). Очікування: `WaitForSingleObject(handle, INFINITE)` (помилка, окрім WAIT_TIMEOUT 0x102 → `"WaitForSingleObject(_semaphore, timeout)"`, рядок 0x93=147); сигналізація: `ReleaseSemaphore(handle, 1, &prev)` (помилка → `"ReleaseSemaphore"`, рядок 0xbb=187); закриття `CloseHandle` (`"CloseHandle( _semaphore )"`, рядок 0x72=114).

### Черги відправлення клієнта
- `FUN_00746ab0`: BE-читання аргументу → виклик віртуального обробника; `WaitForSingleObject(mutex +0x1ba)`; `ReleaseSemaphore(+0x1be,1)`; лічильник +0x192++; `ReleaseMutex`.
- `FUN_00746b90`: `WaitForSingleObject(sem +0x1be, INFINITE)` (WAIT_TIMEOUT припустимий) → lock, лічильник --, unlock — «споживання токена» перед відправленням.
- `FUN_00747770`: pop з ThreadSafeList за м'ютексом +0x68.
- `FUN_007579c0`: push у ThreadSafeList (+0xd0 mutex, список +0xd8).

Незалежне підтвердження: усі call-site’и `CreateThread` у .text — 0x74364f (PThread::start), 0x74e283/0x74e697/0x74f9fc (інші підсистеми, не мережа), 0x757c50 (диспетчер); `CreateEventA` у мережевому коді не використовується (лише 2 site-и поза мережею).

---

## 4. Формат пакетів / протокол (видно з коду)

Все — **великий кінець (big-endian) зверху вручну**:
- `FUN_00745a60` — запис uint32 у мережевому порядку (байт 0 = старший);
- `FUN_00745a30` — читання uint32 BE (зсуви `0x18 - i*8`).

**Рядки на дроті** (підтверджено з обох боків):
- відправка (`FUN_007458e0`, `FUN_007464b0`, формат `DAT_008390a0 == "%d"` — перевірено в exe): `sprintf("%d", strlen(payload)+1)` → `Bocket::write` цифрового рядка **разом із завершальним '\\0'** → `Bsocket::write(payload, strlen+1)` (payload теж NUL-завершений);
- прийом (`FUN_00745980`, `FUN_00758010`, reader-thread 0x744433+): читати байти по одному **до байта '\\0'** (макс. 32 символи довжини) → `atoi` (`FUN_007a7b3c`) → `recvN` рівно len байт → **перевірка, що останній байт == '\\0'**; ліміт довжини повідомлення: 100 байт (у `FUN_007455d0`, `FUN_007460d0`, reader-thread cmp esi,100).
- Отже, wire-формат строки: `"<десяткова довжина>\\0<payload, що закінчується \\0>"`.

**Типові послідовності обміну** (рукостискання клієнта, `FUN_007460d0` — login-потік ClientLobby-клієнта):
1. `BSocket(порт, reuse, timeout)` → `connect(IP, port)`;
2. `write int32 BE = 1` (тип/версія клієнта);
3. `sendString(ім'я гравця)` (двічі — ім'я та пароль/друге поле; не підтверджено, що саме пароль);
4. `recvN 4` (код відповіді), `recvString(ліміт 100)`, `recvN 4`;
5. збереження двох отриманих int32 у поля об'єкта +0x10/+0x14; при збої — стан помилки 1/3 та закриття сокета.

Інший варіант входу (`FUN_007455d0`): `write int32 BE = 3` → `sendString(ім'я)` → `recvN 4` ×2 → цикл `FUN_00745a30()` разів: `recvString(100)` → колбек у `FUN_00749da0(...,1,...)` (наповнення списку, ймовірно, списку серверів/ігор). 

`FUN_00745c90` будує рядок типу `"<" + ім'я + ">: " + повідомлення` (константи 0x874708 = `"<"`, 0x874704 = `">: "`) — формат чату/повідомлень лобі, далі int32-обмін і push у ThreadSafeList.

У коді **не знайдено** шифрування/хешування пакетів, стиснення, контрольних сум, ID послідовності — простий текстовий протокол поверх TCP.

---

## 5. Лобі мультиплеєра

### Екран лобі/вибору режиму — `FUN_00582e00` (0x582e00) і `FUN_00582f10` (0x582f10)
Обидві — конструктори (друга — варіант із поверненням this) UI-об'єкта меню (розмір 0x7e, vtable `0x7eaf14`):
1. Звільнення/створення глобального екземпляра (`DAT_00bd1524`);
2. `FUN_00580c80` — COM-ініціалізація звуку: `CoCreateInstance(IID..., CLSID..., ..., DirectSound)` + серія викликів через vtable (інтерфейс DirectSound — налаштування CooperativeLevel тощо);
3. `FUN_007a8800` — зсув/налаштування класу (5 аргументів, 2 колбеки `FUN_005835f0`/`FUN_00583610` — обробники подій меню);
4. **`FUN_00583250(0,"lobby.txt")`, `(1,"war.txt")`, `(2,"peace.txt")`** — завантаження трьох списків: шлях = корінь гри (`DAT_00dc1a70`, встановлюється в рантаймі) + ім'я файлу, відкриття в режимі `"rb"`, парсинг рядків у три зв'язані списки;
5. `GetSystemTime` + `FUN_005830c0` — **випадковий вибір треку з поточного списку** (`rand() % count`, можливий примус першого через глобал `DAT_008576dc`) і відтворення через звуковий рушій (`*DAT_00bd0e18`).
   → Тобто lobby.txt / war.txt / peace.txt — це **плейлисти музики** для екрана лобі (спокійна/війна/мир), а не мережеві дані.
6. Великий стан-машина `FUN_00791fe9` (рядок ~900) викликає `FUN_00582e00()` при переході в стан мультиплеєрного лобі, попередньо програвши набір sfx (`UAFS1.wav`, `UAM1.wav`, `UAS1.wav`, `UNM1.wav`, `UNS1.wav`, `UTFR.wav`, `UUFB.wav` — радіо/голосові звуки).

### ClientLobby-з'єднання
- Рядок **`"socket.reconnects(cil.getPort() , cil.getIP())"`** (0x87470c) і шлях `"C:\Dev\HoI2 Projects\Darkest Hour\ClientLobby.cpp"` (0x87473c) вказують на клас `ClientLobby` з методами `getIP()`/`getPort()`.
- `FUN_007466f0` (0x7466f0) — функція reconnect лобі-клієнта (підтверджено і дизасемблюванням, і Ghidra `007466f0_FUN_007466f0.c`): сигнатура 4 аргументи + this (`ret 0x10`); будує AnsiString з param_1 (IP/хост) і param_4 (пароль), конструктор рядка/потоку через `0x673c70(param_3, ...)`, викликає `0x7460d0` (login через Bsocket; аргументи містять param_2 — порт); при успіху входу — **`0x741b50`(host, port)** на Bsocket `this+0x1a` (тобто `Bsocket` вбудовано в ClientLobby на зсуві 0x1a, підтверджено також деструктором 0x7468b0: `lea ecx,[esi+0x1a]; call 0x7415c0`); при `0x741b50 == -1` — фатал `"socket.reconnects(cil.getPort() , cil.getIP())"` (0x87470c), `ClientLobby.cpp` рядок 0x6a=106 (0x87473c).
  > **Питання «call-site відсутній» закрито остаточно**: у всьому `.text` немає жодного `call 0x7466f0`, і в усьому бінарі (перевірено пошуком LE-байтів адреси `f0 66 74 00` по файлу exe, включно з .rdata/.data) — **0 посилань**. Функція недосяжна в цій збірці (мертвий код/залишок старого ClientLobby). Відповідно її єдиний downstream `0x741b50` (reconnect = close+connect) теж ніколи не викликається: живий шлях входу йде напряму `0x7460d0 → 0x7418a0` (2 call-site всередині 0x7460d0: 0x74601d, 0x74612d).
- `FUN_00745ef0` (0x745ef0, викликається з `FUN_007515a0` — UI приєднання до гри): будує клієнтський об'єкт, `FUN_007460d0` (connect+login), при успіху встановлює прапор з'єднання `+0x24e=1` і зберігає отримані ідентифікатори; при невдачі повертає код 3.
- `FUN_00750750` (екран лобі): рядки `"EN_GAME_STARTED_WITH_NAME"` (0x8749dc) і `"N:%s P:%s"` (0x8749f8 — ім'я гравця/кількість) — елементи лобі, що показують стан гри (хто приєднався / гра почалася).

### Непідтверджене / зауваження (всі відкриті питання попередніх ітерацій закрито)
- ~~**Сервер-луп із accept не знайдено**~~ — **ЗАКРИТО**: у всьому `.text` 0 call-site'ів до 0x741740/0x741870/0x7416a0/0x741d00/0x741fc0, і в усьому файлі exe 0 посилань на ці адреси (перевірено пошуком LE-байтів; vtable 0x7fa188 та сусідні таблиці не містять їх). Приймальна сторона (`bind/listen/accept`, read-until-*, recvAll, setSocket) — **мертвий код цієї збірки**: гра цією збіркою не може бути TCP-сервером. Хостинг, вочевидь, винесено (зовнішній сервер/інший компонент), у грі лишається лише клієнтський стек.
- ~~**timeout=10000: де застосовується**~~ — **ЗАКРИТО**: зберігається в +0xa (0x741472); **єдиний** читач — `0x741d00` (recvAll: порція реcv = `[+0xa]`, тобто 10000 — це розмір порції/ліміт буфера, а не час); сеттер `0x741fe0`; обидві функції мертві → у живому коді +0xa не використовується взагалі (ні SO_RCVTIMEO, ні connect-timeout немає).
- ~~**Call-site до 0x7466f0 відсутній**~~ — **ЗАКРИТО**: 0 посилань у всьому бінарі; 0x7466f0 (ClientLobby::reconnects) — недосяжний код; її єдиний downstream 0x741b50 (reconnect) також живих викликів не має (живий шлях: 0x7460d0 → 0x7418a0 напряму).
- ~~**Reader thread 0x7443f0 — геп**~~ — **ЗАКРИТО**: повний розбір циклу та структури об'єкта у §3.
- **0x7416a0-0x7418xx «серверна частина»** — **ЗАКРИТО**: 0x7416a0 = read-until-string, 0x741740 = listen(backlog) (стан → 8), 0x741870 = accept — усі мертві; 0x7415c0 = `Bsocket::close` (розібрано, жива: 4 call-site).
- Адреси 0x7405d0–0x7411f0 з початкового списку — це **не** мережа, а CD-перевірка/копіювальний захист (пошук EU/CD-диска з `1111.VPP`, `2222.VPP`..., декрипт-таблиці 0x874228/0x8742a8, `GetDriveTypeA`, MessageBox «EU CD not found» + `exit`) — включено для повноти.

---

## 6. Методика та верифікація
- Понад 40 декомпільованих функцій прочитано повністю; 5 фрагментів поза індексом (гепи) дизасембльовано objdump'ом.
- Відповідність ординалів Winsock підтверджено таблицею імпортів PE (0x7e32xx) і thunk-таблицею (0x796a9e–0x796b04).
- Рядки (`"Bsocket._write: "`, `"Tried to BSocket._write: "`, `"%d"`, `"tcp"`, шляхи Bsocket.cpp/Bsocket.h/ClientLobby.cpp/PThread.h/Mutex.h/PSemaphore.h, імена потоків, повідомлення помилок) прочитано безпосередньо з `.rdata` exe за VA.
- IAT-прив'язка `CreateThread`/`CreateSemaphoreA`/`CreateMutexA`/`WaitForSingleObject`/`ReleaseSemaphore`/`ReleaseMutex`/`CloseHandle`/`GetLastError`/`GetCurrentThreadId`/`SetThreadPriority` — за KERNEL32-імпортами PE (0x7e30xx).