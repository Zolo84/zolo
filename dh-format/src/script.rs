//! Лексер і парсер скрипт-мови Paradox («ключ = значення», блоки `{}`).
//!
//! Та сама мова використовується в `.eug` (сценарії/сейви), `.txt` (бази, події,
//! ai) і локалізаційних `.csv`. Clean-room за RE-звітами:
//! RE: re/RE-scripts.md §1-3 (лексер 0x5343dc, читачі токенів 0x534391/0x535490,
//!     розділювачі та службові ID §3, диспетчер стейтментів 0x534a40),
//!     re/RE-savegames.md §4 (відкриття файлів 0x534930, «got a parsing error at
//!     line %d» — 0x535c60).
//!
//! Реальний синтаксис (перевірено на файлах мода «Darkest Hour Full»):
//! - `key = value`, де value — число, слово, рядок `"..."` або блок `{}`;
//! - значення може стояти на наступному рядку після `=` (`header =\n{ ... }`);
//! - у блоках бувають «голі» значення без ключа: `economy = { 1.5 4.0 ... }`
//!   (db/misc.txt), `selectable = { AFG ALB ... }`, `dormant_leaders = { 35014 ... }`;
//! - коментарі `#` до кінця рядка, можуть іти одразу після токена (`0.2#0.25`);
//! - від'ємні числа (`-1`), дублікати ключів (`event = { ... }` багато разів).

use std::path::Path;

use anyhow::{bail, Context, Result};

/// Тип токена скрипт-мови.
///
/// Відповідність службовим ID токенів оригінального движка (RE-scripts.md §3):
/// 0x524 — слово/число, 0x527 — рядок, 0x531 — EOF, 4 — `{`, 8 — `}`,
/// розділювачі 1..10 — `= " { } ( ) # ¤(0xA4) , \n` (рядки 0x850b30..0x850b58).
#[derive(Debug, Clone, PartialEq)]
pub enum TokenKind {
    /// Слово поза лапками (тип 0x524 «слово/число»). `u16` — id слова в реєстрі
    /// ключових слів гри (0 = слова немає в реєстрі). Повний реєстр (1669 токенів,
    /// RE-scripts.md §5; пошук у BST 0x429fa0) підключать у `tokens.rs` — зараз
    /// лексер завжди ставить 0; текст слова — у `Token::text`.
    Ident(u16),
    /// Рядок у подвійних лапках (0x527); ескейпи `\"` і `\\` уже знято.
    Stringy(String),
    /// Число (частина типу 0x524). Точний текст запису — у `Token::text`
    /// (потрібен, щоб відрізнити «1» від «1.0» у парсері).
    Number(f64),
    /// `{` — ID 4.
    OpenBrace,
    /// `}` — ID 8.
    CloseBrace,
    /// `=` — розділювач.
    Equals,
    /// Кінець файлу — ID 0x531.
    Eof,
    /// Перенесення рядка `\n` — розділювач. Парсер його пропускає (значення
    /// може бути на наступному рядку), але токен зберігається в потоці.
    Newline,
}

/// Один токен: аналог запису токена гри `{ uint32 id; char text[512] }`
/// (RE-scripts.md §2) плюс номер рядка для повідомлень про помилки.
#[derive(Debug, Clone, PartialEq)]
pub struct Token {
    pub kind: TokenKind,
    /// Номер рядка (з 1), де починається токен — «got a parsing error at line %d»
    /// (RE-savegames.md §4, 0x535c60).
    pub line: u32,
    /// Сирий текст токена: для `Ident` — слово, для `Number` — точний запис
    /// числа, для `Stringy` — значення рядка без лапок; для службових — "".
    /// Байти зберігаються 1:1 (latin-1), як у грі (`strcpy` без кодування,
    /// файли DH — ANSI/cp1252).
    pub text: String,
}

impl Token {
    fn new(kind: TokenKind, line: u32, text: String) -> Self {
        Self { kind, line, text }
    }

    fn eof(line: u32) -> Self {
        Self::new(TokenKind::Eof, line, String::new())
    }
}

/// Лексер скрипт-мови — відповідає FUN_005343dc @ 0x5343dc (слова, рядки
/// `"..."`, числа, коментарі `#`, лічильник рядків; RE-scripts.md §1).
///
/// Розділювачі — за RE-scripts.md §3: `= " { } ( ) # ¤(0xA4) , \n`, плюс
/// пробіл/таб/`\r`. Токени-розділювачі `( ) ¤ ,` не мають семантики в нашій
/// моделі значень (у реальних файлах DH вони трапляються лише всередині
/// коментарів і в .csv-локалізації), тому пропускаються як розділювачі.
pub struct Lexer {
    src: Vec<u8>,
    pos: usize,
    /// Поточний рядок (з 1), лічильник як у лексері гри 0x5343dc.
    line: u32,
}

impl Lexer {
    /// Створює лексер; знімає BOM (\xEF\xBB\xBF), якщо він є на початку файлу.
    pub fn new(src: &[u8]) -> Self {
        let mut src = src.to_vec();
        if src.starts_with(b"\xEF\xBB\xBF") {
            src.drain(..3);
        }
        Self {
            src,
            pos: 0,
            line: 1,
        }
    }

    /// Поточний номер рядка (з 1).
    pub fn line(&self) -> u32 {
        self.line
    }

    /// Пропускає коментар `#` до кінця рядка (сам `\n` не поглинає — його
    /// віддасть наступний `next_token`). Так само робить лексер гри: `#` —
    /// розділювач, усе до `\n` ігнорується (напр. `0.2#0.25`, `5.0 #8.0`).
    pub fn skip_comments(&mut self) {
        while self.pos < self.src.len() && self.src[self.pos] != b'\n' {
            self.pos += 1;
        }
    }

    /// Наступний токен. Пробіли/таби/`\r` пропускаються (`\r\n` → один Newline).
    pub fn next_token(&mut self) -> Token {
        loop {
            while self.pos < self.src.len() && matches!(self.src[self.pos], b' ' | b'\t' | b'\r') {
                self.pos += 1;
            }
            if self.pos >= self.src.len() {
                return Token::eof(self.line);
            }
            let line = self.line;
            let b = self.src[self.pos];
            match b {
                b'\n' => {
                    self.pos += 1;
                    self.line += 1;
                    return Token::new(TokenKind::Newline, line, String::new());
                }
                b'#' => self.skip_comments(),
                b'"' => return self.lex_string(line),
                b'{' => {
                    self.pos += 1;
                    return Token::new(TokenKind::OpenBrace, line, String::new());
                }
                b'}' => {
                    self.pos += 1;
                    return Token::new(TokenKind::CloseBrace, line, String::new());
                }
                b'=' => {
                    self.pos += 1;
                    return Token::new(TokenKind::Equals, line, String::new());
                }
                // Токени-розділювачі гри без семантики в нашій моделі (див. вище).
                b',' | b'(' | b')' | 0xA4 => {
                    self.pos += 1;
                }
                // Число: цифри, `-` перед цифрою (від'ємні, напр. `-1` у misc.txt),
                // `.5` / `1.5`. Експоненти в файлах DH не трапляються.
                _ if b.is_ascii_digit()
                    || (b == b'-'
                        && self.pos + 1 < self.src.len()
                        && (self.src[self.pos + 1].is_ascii_digit()
                            || (self.src[self.pos + 1] == b'.'
                                && self.pos + 2 < self.src.len()
                                && self.src[self.pos + 2].is_ascii_digit())))
                    || (b == b'.'
                        && self.pos + 1 < self.src.len()
                        && self.src[self.pos + 1].is_ascii_digit()) =>
                {
                    return self.lex_number(line);
                }
                _ => return self.lex_ident(line),
            }
        }
    }

    /// Рядок у лапках: `"..."` з ескейпами `\"` і `\\`. Інші `\x` — дослівно
    /// (шляхи в лапках мають одинарні обернені слеші: `"scenarios\data\x.bmp"`).
    /// `\n` усередині рядка допускається (багаторядкові рядки) і лічить рядки;
    /// `\r` прибирається як артефакт форматування. Незакритий рядок тягнеться
    /// до кінця файлу (TODO: сувора помилка, як у грі).
    fn lex_string(&mut self, line: u32) -> Token {
        self.pos += 1; // '"'
        let mut s: Vec<u8> = Vec::new();
        while self.pos < self.src.len() {
            let b = self.src[self.pos];
            match b {
                b'"' => {
                    self.pos += 1;
                    return Token::new(TokenKind::Stringy(self.text(&s)), line, self.text(&s));
                }
                b'\\' if self.pos + 1 < self.src.len() => {
                    let n = self.src[self.pos + 1];
                    if n == b'"' || n == b'\\' {
                        s.push(n);
                        self.pos += 2;
                    } else {
                        // не-ескейп: `\` зберігаємо дослівно
                        s.push(b'\\');
                        self.pos += 1;
                    }
                }
                b'\n' => {
                    s.push(b'\n');
                    self.pos += 1;
                    self.line += 1;
                }
                b'\r' => {
                    self.pos += 1;
                }
                _ => {
                    s.push(b);
                    self.pos += 1;
                }
            }
        }
        // незакритий рядок — до кінця файлу
        Token::new(TokenKind::Stringy(self.text(&s)), line, self.text(&s))
    }

    /// Число: `[−]цифри[.цифри]` або `.цифри`. Текст зберігається в `Token::text`.
    fn lex_number(&mut self, line: u32) -> Token {
        let start = self.pos;
        if self.src[self.pos] == b'-' {
            self.pos += 1;
        }
        while self.pos < self.src.len() && self.src[self.pos].is_ascii_digit() {
            self.pos += 1;
        }
        if self.pos < self.src.len() && self.src[self.pos] == b'.' {
            self.pos += 1;
            while self.pos < self.src.len() && self.src[self.pos].is_ascii_digit() {
                self.pos += 1;
            }
        }
        let text = self.text(&self.src[start..self.pos]);
        // `1.`/`.5` Rust::parse теж розуміє; сюди за guard потрапляють лише
        // коректні записи, тому 0.0 — лише страховка.
        let v: f64 = text.parse().unwrap_or(0.0);
        Token::new(TokenKind::Number(v), line, text)
    }

    /// Слово: довільні байти до роздільника. id у реєстрі ключових слів зараз
    /// завжди 0 — реєстр (1669 слів) буде в `tokens.rs` (пошук у BST 0x429fa0).
    fn lex_ident(&mut self, line: u32) -> Token {
        let start = self.pos;
        while self.pos < self.src.len() && !Self::is_delim(self.src[self.pos]) {
            self.pos += 1;
        }
        let text = self.text(&self.src[start..self.pos]);
        Token::new(TokenKind::Ident(0), line, text)
    }

    /// Розділювачі слова (RE-scripts.md §3 + пробіл/таб/`\r`).
    fn is_delim(b: u8) -> bool {
        matches!(
            b,
            b' ' | b'\t'
                | b'\r'
                | b'\n'
                | b'='
                | b'"'
                | b'{'
                | b'}'
                | b'#'
                | b','
                | b'('
                | b')'
                | 0xA4
        )
    }

    /// Байти → текст 1:1 (latin-1), без втрат і без перекодування.
    fn text(&self, bytes: &[u8]) -> String {
        bytes.iter().map(|&b| b as char).collect()
    }
}

/// Значення скрипт-мови: дерево «ключ = значення».
#[derive(Debug, Clone, PartialEq)]
pub enum Value {
    /// Одиничне значення (unit): `key =` без значення перед `}`/кінцем файлу.
    None,
    /// Число.
    Number(f64),
    /// Рядок у лапках або слово без лапок (окрім yes/no/1/0).
    String(String),
    /// `yes`/`no`/`1`/`0` поза лапками.
    Bool(bool),
    /// Блок `{}` або корінь файлу: послідовність стейтментів «ключ = значення».
    ///
    /// Зберігається `Vec<(String, Value)>`, а не Map, щоб зберегти порядок і
    /// дублікати ключів (движок читає токени послідовно — 0x534a40). «Голі»
    /// значення без ключа (списки в блоках) зберігаються під порожнім ключем
    /// "" — так зберігаються порядок і дублікати, доступ — через `get_all("")`.
    List(Vec<(String, Value)>),
}

impl Value {
    /// Останнє входження ключа (попередні дублікати ігноруються, як при
    /// послідовному читанні движком).
    pub fn get(&self, key: &str) -> Option<&Value> {
        match self {
            Value::List(entries) => entries.iter().rev().find(|(k, _)| k == key).map(|(_, v)| v),
            _ => None,
        }
    }

    /// Усі входження ключа в порядку файлу (дублікати зберігаються).
    pub fn get_all(&self, key: &str) -> Vec<&Value> {
        match self {
            Value::List(entries) => entries
                .iter()
                .filter(|(k, _)| k == key)
                .map(|(_, v)| v)
                .collect(),
            _ => Vec::new(),
        }
    }
}

/// Рекурсивний парсер: корінь файлу і блоки `{}` — список стейтментів
/// (диспетчер стейтментів гри FUN_00534a40 @ 0x534a40).
struct Parser {
    lexer: Lexer,
    peeked: Option<Token>,
}

impl Parser {
    fn new(lexer: Lexer) -> Self {
        Self {
            lexer,
            peeked: None,
        }
    }

    /// Наступний токен із пропуском Newline: перенесення рядка — лише
    /// розділювач, значення може стояти на наступному рядку
    /// (`header =\n{ ... }` у .eug).
    fn next(&mut self) -> Token {
        if let Some(t) = self.peeked.take() {
            return t;
        }
        let mut t = self.lexer.next_token();
        while t.kind == TokenKind::Newline {
            t = self.lexer.next_token();
        }
        t
    }

    /// Те саме, але без споживання токена.
    fn peek(&mut self) -> &Token {
        if self.peeked.is_none() {
            let mut t = self.lexer.next_token();
            while t.kind == TokenKind::Newline {
                t = self.lexer.next_token();
            }
            self.peeked = Some(t);
        }
        self.peeked.as_ref().unwrap()
    }

    /// Список стейтментів до `}` (якщо `in_block`) або до кінця файлу.
    /// Стейтмент: `ключ = значення`, або «голе» значення без ключа.
    fn parse_statements(&mut self, in_block: bool, open_line: u32) -> Result<Vec<(String, Value)>> {
        let mut out = Vec::new();
        loop {
            let tok = self.peek().clone();
            match tok.kind {
                TokenKind::Eof => {
                    if in_block {
                        bail!(
                            "несподіваний кінець файлу: блок `{{`, відкритий на рядку {open_line}, не закритий `}}`"
                        );
                    }
                    break;
                }
                TokenKind::CloseBrace => {
                    if !in_block {
                        // Зайва `}` на верхньому рівні: файли гри містять таке
                        // (напр. db/events/AI/ai_ministers.txt, рядок 18390 —
                        // подвійне `}` після event-блоку), движок її ігнорує.
                        self.next();
                        continue;
                    }
                    self.next(); // спожити '}'
                    break;
                }
                TokenKind::Equals => bail!("несподіваний `=` на рядку {}", tok.line),
                TokenKind::OpenBrace => {
                    // «голий» блок без ключа (крайній випадок, у файлах DH не
                    // трапляється; тримаємо для стійкості)
                    let line = tok.line;
                    self.next();
                    out.push((String::new(), self.parse_block_body(line)?));
                }
                TokenKind::Ident(_) | TokenKind::Number(_) | TokenKind::Stringy(_) => {
                    // Ключ: слово / число / рядок (текст 1:1).
                    let key = tok.text.clone();
                    self.next();
                    if self.peek().kind == TokenKind::Equals {
                        self.next(); // '='
                        let v = self.parse_value()?;
                        out.push((key, v));
                    } else {
                        // «Голе» значення без ключа: так движок читає списки
                        // значень усередині блоку (`economy = { 1.5 4.0 ... }`
                        // у db/misc.txt, `selectable = { AFG ALB ... }` у .eug) —
                        // завантажувачі гри читають токени підряд, без '='.
                        // У нашому дереві — під порожнім ключем "" (див. Value::List).
                        out.push((String::new(), Self::token_to_value(&tok)));
                    }
                }
                TokenKind::Newline => unreachable!("Newline відфільтровано в peek()"),
            }
        }
        Ok(out)
    }

    /// Значення після `=`: блок `{}`, число, слово, рядок; `None`, якщо
    /// значення немає (`key =` перед `}` або кінцем файлу).
    fn parse_value(&mut self) -> Result<Value> {
        let tok = self.next();
        match tok.kind {
            TokenKind::OpenBrace => {
                let line = tok.line;
                self.parse_block_body(line)
            }
            TokenKind::Number(_) | TokenKind::Ident(_) | TokenKind::Stringy(_) => {
                Ok(Self::token_to_value(&tok))
            }
            TokenKind::CloseBrace | TokenKind::Eof => Ok(Value::None),
            TokenKind::Equals => bail!("несподіваний `=` на рядку {}", tok.line),
            TokenKind::Newline => unreachable!("Newline відфільтровано в next()"),
        }
    }

    /// Блок: `{` уже спожито, читаємо стейтменти до `}` (споживається теж).
    fn parse_block_body(&mut self, open_line: u32) -> Result<Value> {
        let entries = self.parse_statements(true, open_line)?;
        Ok(Value::List(entries))
    }

    /// Токен-значення → Value. Слова `yes`/`no` і числа `1`/`0` → Bool (за ТЗ;
    /// у грі тип 0x524 «слово/число» трактує завантажувач). Тільки поза
    /// лапками: `"1"` у лапках — рядок (0x527), його не чіпаємо.
    fn token_to_value(t: &Token) -> Value {
        match &t.kind {
            TokenKind::Number(v) => match t.text.as_str() {
                "1" => Value::Bool(true),
                "0" => Value::Bool(false),
                _ => Value::Number(*v),
            },
            TokenKind::Ident(_) => match t.text.as_str() {
                "yes" => Value::Bool(true),
                "no" => Value::Bool(false),
                "1" => Value::Bool(true),
                "0" => Value::Bool(false),
                s => Value::String(s.to_string()),
            },
            TokenKind::Stringy(s) => Value::String(s.clone()),
            _ => Value::None,
        }
    }
}

/// Парсить скрипт-файл (.eug/.txt/.csv — та сама мова «ключ = значення»).
/// Корінь файлу — завжди `Value::List` (послідовність стейтментів).
pub fn parse_file(path: &Path) -> Result<Value> {
    let bytes =
        std::fs::read(path).with_context(|| format!("не вдалося прочитати скрипт {path:?}"))?;
    parse_bytes(&bytes)
}

/// Парсить скрипт із пам'яті (для тестів і вбудованих скриптів).
pub fn parse_str(src: &str) -> Result<Value> {
    parse_bytes(src.as_bytes())
}

/// Байти файлу (CP1252/Latin-1) → дерево значень; для читання через VFS
/// (байти з vfs.read ідують у лексер 1:1, як у грі).
pub fn parse_bytes(bytes: &[u8]) -> Result<Value> {
    let mut parser = Parser::new(Lexer::new(bytes));
    let entries = parser.parse_statements(false, 0)?;
    Ok(Value::List(entries))
}

#[cfg(test)]
mod tests {
    use super::*;

    /// Токени: BOM, коментар, \r\n, слово, число, рядок з ескейпом, дужки,
    /// кома-розділювач, лічильник рядків.
    #[test]
    fn lexer_basic_tokens() {
        let src = "\u{FEFF}# коментар\r\nfoo = 1.5 \"a\\\"b\" { } , \n";
        let mut lx = Lexer::new(src.as_bytes());
        let mut got = Vec::new();
        loop {
            let t = lx.next_token();
            let is_eof = t.kind == TokenKind::Eof;
            got.push((t.kind, t.line, t.text));
            if is_eof {
                break;
            }
        }
        use TokenKind::*;
        assert_eq!(
            got,
            vec![
                (Newline, 1, String::new()), // \r\n після коментаря
                (Ident(0), 2, "foo".into()), // id 0 — реєстр слів ще не підключено
                (Equals, 2, String::new()),
                (Number(1.5), 2, "1.5".into()),
                (Stringy("a\"b".into()), 2, "a\"b".into()), // ескейп \"
                (OpenBrace, 2, String::new()),
                (CloseBrace, 2, String::new()), // кома ',' пропущена як розділювач
                (Newline, 2, String::new()),
                (Eof, 3, String::new()),
            ]
        );
    }

    /// Рядки: обернені слеші в шляхах зберігаються дослівно, `\\` — ескейп.
    #[test]
    fn lexer_string_backslashes() {
        let mut lx = Lexer::new(b"\"scenarios\\data\\x.bmp\" \"a\\\\b\"".as_slice());
        let t1 = lx.next_token();
        assert_eq!(t1.kind, TokenKind::Stringy("scenarios\\data\\x.bmp".into()));
        let t2 = lx.next_token();
        assert_eq!(t2.kind, TokenKind::Stringy("a\\b".into()));
    }

    /// Числа: цілі, від'ємні, "1.0" проти "1", ".5", коментар одразу після числа.
    #[test]
    fn lexer_number_variants() {
        let mut lx = Lexer::new(b"1 -1 1.0 .5 0.2#x".as_slice());
        let t = lx.next_token();
        assert_eq!((t.kind, t.text.as_str()), (TokenKind::Number(1.0), "1"));
        let t = lx.next_token();
        assert_eq!((t.kind, t.text.as_str()), (TokenKind::Number(-1.0), "-1"));
        let t = lx.next_token();
        assert_eq!((t.kind, t.text.as_str()), (TokenKind::Number(1.0), "1.0"));
        let t = lx.next_token();
        assert_eq!((t.kind, t.text.as_str()), (TokenKind::Number(0.5), ".5"));
        let t = lx.next_token();
        assert_eq!((t.kind, t.text.as_str()), (TokenKind::Number(0.2), "0.2"));
        // "#x" — коментар до кінця рядка, далі EOF
        assert_eq!(lx.next_token().kind, TokenKind::Eof);
    }

    /// Головний тест ТЗ: дублікати ключів, рядки в лапках, Bool-перетворення,
    /// «голі» значення в блоці, порожні блоки, `key =` без значення.
    #[test]
    fn parse_duplicate_keys_and_quoted_strings() {
        let src = "\u{FEFF}# приклад: дублікати ключів і рядки в лапках
country = { tag = GER name = \"Deutschland\" capital = 152 }
command = { type = 5010 value = 2 }
command = { type = 5011 value = \"zwei\" }
selectable = { AFG ALB ARG }
flag = yes
flag = no
n1 = 1
n2 = 1.0
s1 = \"1\"
empty = { }
trailing =
";
        let v = parse_str(src).unwrap();
        assert!(matches!(v, Value::List(_)));

        let c = v.get("country").expect("country");
        assert_eq!(c.get("tag").unwrap(), &Value::String("GER".into()));
        assert_eq!(c.get("name").unwrap(), &Value::String("Deutschland".into()));
        assert_eq!(c.get("capital").unwrap(), &Value::Number(152.0));

        // дублікати: get — останнє входження, get_all — усі, порядок збережено
        let cmds = v.get_all("command");
        assert_eq!(cmds.len(), 2);
        assert_eq!(cmds[0].get("type").unwrap(), &Value::Number(5010.0));
        assert_eq!(cmds[1].get("type").unwrap(), &Value::Number(5011.0));
        assert_eq!(
            v.get("command").unwrap().get("type").unwrap(),
            &Value::Number(5011.0)
        );

        // «голі» значення в блоці — під порожнім ключем, порядок збережено
        let sel = v.get("selectable").unwrap();
        assert_eq!(
            sel.get_all(""),
            vec![
                &Value::String("AFG".into()),
                &Value::String("ALB".into()),
                &Value::String("ARG".into()),
            ]
        );

        // Bool: yes/no, і числа 1/0 поза лапками (за ТЗ); "1.0" — число
        assert_eq!(v.get("flag").unwrap(), &Value::Bool(false)); // останнє: no
        assert_eq!(v.get("n1").unwrap(), &Value::Bool(true)); // текст "1" → Bool
        assert_eq!(v.get("n2").unwrap(), &Value::Number(1.0)); // текст "1.0" — число
        assert_eq!(v.get("s1").unwrap(), &Value::String("1".into())); // лапки — рядок

        assert_eq!(v.get("empty").unwrap(), &Value::List(vec![]));
        assert_eq!(v.get("trailing").unwrap(), &Value::None); // `key =` без значення
    }

    /// Блоки з «голими» числами, як economy у db/misc.txt (коментарі після
    /// чисел, від'ємні числа).
    #[test]
    fn parse_bare_value_block_like_db_misc() {
        let src = "economy = {\n\t1.5\n\t4.0\n\t0.2#0.25\n\t-1 #0.75\n}\n";
        let v = parse_str(src).unwrap();
        let eco = v.get("economy").unwrap();
        assert_eq!(
            eco.get_all(""),
            vec![
                &Value::Number(1.5),
                &Value::Number(4.0),
                &Value::Number(0.2),
                &Value::Number(-1.0),
            ]
        );
    }

    /// `=` зі значенням на наступному рядку (як у .eug), порожній файл,
    /// файл лише з коментарями.
    #[test]
    fn parse_multiline_equals_and_empty_file() {
        let v = parse_str("header =\n{ name = \"Grand Campaign\"\n}\n").unwrap();
        assert_eq!(
            v.get("header").unwrap().get("name").unwrap(),
            &Value::String("Grand Campaign".into())
        );
        assert_eq!(parse_str("").unwrap(), Value::List(vec![]));
        assert_eq!(
            parse_str("# тільки коментарі\n").unwrap(),
            Value::List(vec![])
        );
    }

    /// Незакритий блок — помилка з номером рядка відкриття.
    #[test]
    fn parse_reports_unclosed_block_line() {
        let err = parse_str("a = {\n  b = 1\n").unwrap_err();
        let msg = format!("{err:#}");
        assert!(msg.contains("рядку 1"), "{msg}");
    }

    /// Тест на реальних файлах гри (потрібна встановлена Darkest Hour).
    /// Шлях: змінна оточення DH_GAME_DIR — корінь гри або каталог мода
    /// «Darkest Hour Full»; якщо не задана — стандартний Steam-шлях
    /// (GamePaths::from_steam). Без гри тест мовчки пропускається.
    #[test]
    #[ignore = "потребує файлів гри (DH_GAME_DIR)"]
    fn parse_real_game_files() {
        let base = match std::env::var("DH_GAME_DIR") {
            Ok(dir) => {
                let p = Path::new(&dir);
                let mod_dir = p.join("Mods/Darkest Hour Full");
                if mod_dir.is_dir() {
                    mod_dir
                } else {
                    p.to_path_buf()
                }
            }
            Err(_) => match crate::GamePaths::from_steam() {
                Ok(gp) => gp.mod_dir,
                Err(e) => {
                    eprintln!("гра не знайдена, тест пропущено: {e}");
                    return;
                }
            },
        };

        // db/misc.txt — блоки зі «голими» числами та коментарями після чисел
        let misc = parse_file(&base.join("db/misc.txt")).expect("db/misc.txt");
        let eco = misc.get("economy").expect("economy у misc.txt");
        assert!(
            eco.get_all("").len() >= 30,
            "багато чисел у economy misc.txt"
        );

        // сценарій .eug — багаторядкові `=`, блоки, «голі» списки
        let eug = parse_file(&base.join("scenarios/1936.eug")).expect("scenarios/1936.eug");
        assert!(eug.get("header").is_some(), "header у 1936.eug");
        assert!(eug.get("globaldata").is_some(), "globaldata у 1936.eug");

        // файл подій — маса дублікатів `event = { ... }`
        let ev = parse_file(&base.join("db/events/1940s_events.txt"))
            .expect("db/events/1940s_events.txt");
        let events = ev.get_all("event");
        assert!(events.len() >= 1, "event у 1940s_events.txt");
        assert!(events[0].get("country").is_some(), "country у першій події");
    }
}
