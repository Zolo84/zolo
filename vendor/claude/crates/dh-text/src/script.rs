//! Paradox script: the `key = value` / `key = { ... }` format shared by
//! databases (`db/**/*.txt`), events, scenarios (`*.eug`) and save games.
//!
//! The parser is lenient, like the original engine: malformed input is recorded
//! in [`Document::errors`] and parsing continues, so a single typo in a mod does
//! not hide the rest of the file.

use crate::encoding;
use std::fmt;

/// Comparison operator between a key and its value.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Op {
    Eq,
    Lt,
    Gt,
    Le,
    Ge,
}

impl Op {
    fn as_str(self) -> &'static str {
        match self {
            Op::Eq => "=",
            Op::Lt => "<",
            Op::Gt => ">",
            Op::Le => "<=",
            Op::Ge => ">=",
        }
    }
}

/// A leaf token: bare word, number, date or quoted string.
#[derive(Debug, Clone, PartialEq)]
pub struct Scalar {
    pub text: String,
    pub quoted: bool,
}

impl Scalar {
    pub fn as_str(&self) -> &str {
        &self.text
    }
    pub fn as_i64(&self) -> Option<i64> {
        self.text.parse().ok()
    }
    pub fn as_f64(&self) -> Option<f64> {
        self.text.parse().ok()
    }
    /// `yes`/`no` (and `true`/`false`, `1`/`0`, which some files use).
    pub fn as_bool(&self) -> Option<bool> {
        match self.text.to_ascii_lowercase().as_str() {
            "yes" | "true" | "1" => Some(true),
            "no" | "false" | "0" => Some(false),
            _ => None,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub enum Value {
    Scalar(Scalar),
    Block(Block),
}

impl Value {
    pub fn as_scalar(&self) -> Option<&Scalar> {
        match self {
            Value::Scalar(s) => Some(s),
            Value::Block(_) => None,
        }
    }
    pub fn as_block(&self) -> Option<&Block> {
        match self {
            Value::Block(b) => Some(b),
            Value::Scalar(_) => None,
        }
    }
}

#[derive(Debug, Clone, PartialEq)]
pub struct Field {
    pub key: String,
    pub op: Op,
    pub value: Value,
    /// 1-based source line of the key.
    pub line: u32,
}

/// An entry of a block: either `key op value` or a bare value (list element).
#[derive(Debug, Clone, PartialEq)]
pub enum Item {
    Field(Field),
    Value(Value),
}

#[derive(Debug, Clone, PartialEq, Default)]
pub struct Block {
    pub items: Vec<Item>,
}

impl Block {
    /// All fields; keys repeat freely (e.g. many `country = { ... }`).
    pub fn fields(&self) -> impl Iterator<Item = &Field> {
        self.items.iter().filter_map(|i| match i {
            Item::Field(f) => Some(f),
            Item::Value(_) => None,
        })
    }

    /// Values of every field named `key` (keys are case-insensitive in the engine).
    pub fn get_all<'a>(&'a self, key: &'a str) -> impl Iterator<Item = &'a Value> + 'a {
        self.fields()
            .filter(move |f| f.key.eq_ignore_ascii_case(key))
            .map(|f| &f.value)
    }

    pub fn get(&self, key: &str) -> Option<&Value> {
        self.fields()
            .find(|f| f.key.eq_ignore_ascii_case(key))
            .map(|f| &f.value)
    }

    pub fn get_scalar(&self, key: &str) -> Option<&Scalar> {
        self.get(key)?.as_scalar()
    }

    pub fn get_str(&self, key: &str) -> Option<&str> {
        self.get_scalar(key).map(Scalar::as_str)
    }

    pub fn get_i64(&self, key: &str) -> Option<i64> {
        self.get_scalar(key)?.as_i64()
    }

    pub fn get_f64(&self, key: &str) -> Option<f64> {
        self.get_scalar(key)?.as_f64()
    }

    pub fn get_bool(&self, key: &str) -> Option<bool> {
        self.get_scalar(key)?.as_bool()
    }

    pub fn get_block(&self, key: &str) -> Option<&Block> {
        self.get(key)?.as_block()
    }

    /// Bare list elements, e.g. the numbers in `ownedprovinces = { 1 2 3 }`.
    pub fn values(&self) -> impl Iterator<Item = &Value> {
        self.items.iter().filter_map(|i| match i {
            Item::Value(v) => Some(v),
            Item::Field(_) => None,
        })
    }

    /// Bare list elements that parse as integers.
    pub fn ints(&self) -> impl Iterator<Item = i64> + '_ {
        self.values().filter_map(|v| v.as_scalar()?.as_i64())
    }
}

#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ParseError {
    pub line: u32,
    pub col: u32,
    pub message: String,
}

impl fmt::Display for ParseError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}:{}: {}", self.line, self.col, self.message)
    }
}

impl std::error::Error for ParseError {}

#[derive(Debug, Clone, Default)]
pub struct Document {
    pub root: Block,
    pub errors: Vec<ParseError>,
}

/// Parses a CP1252 script file. Never fails; problems end up in `errors`.
pub fn parse(bytes: &[u8]) -> Document {
    let text = encoding::decode(bytes);
    parse_str(&text)
}

pub fn parse_str(text: &str) -> Document {
    let mut p = Parser {
        lexer: Lexer::new(text),
        peeked: None,
        errors: Vec::new(),
    };
    let root = p.block(true, 0);
    Document {
        root,
        errors: p.errors,
    }
}

#[derive(Debug, Clone, PartialEq)]
enum Tok {
    Word(String),
    Quoted(String),
    Op(Op),
    Open,
    Close,
    Eof,
}

#[derive(Debug, Clone)]
struct Spanned {
    tok: Tok,
    line: u32,
    col: u32,
}

struct Lexer<'a> {
    chars: std::iter::Peekable<std::str::Chars<'a>>,
    line: u32,
    col: u32,
}

impl<'a> Lexer<'a> {
    fn new(text: &'a str) -> Self {
        Lexer {
            chars: text.chars().peekable(),
            line: 1,
            col: 1,
        }
    }

    fn bump(&mut self) -> Option<char> {
        let c = self.chars.next()?;
        if c == '\n' {
            self.line += 1;
            self.col = 1;
        } else {
            self.col += 1;
        }
        Some(c)
    }

    fn next(&mut self) -> Spanned {
        loop {
            match self.chars.peek() {
                Some(c) if c.is_whitespace() => {
                    self.bump();
                }
                Some('#') => {
                    while !matches!(self.chars.peek(), None | Some('\n')) {
                        self.bump();
                    }
                }
                _ => break,
            }
        }
        let (line, col) = (self.line, self.col);
        let tok = match self.bump() {
            None => Tok::Eof,
            Some('{') => Tok::Open,
            Some('}') => Tok::Close,
            Some('=') => Tok::Op(Op::Eq),
            Some(c @ ('<' | '>')) => {
                let eq = self.chars.peek() == Some(&'=');
                if eq {
                    self.bump();
                }
                Tok::Op(match (c, eq) {
                    ('<', false) => Op::Lt,
                    ('<', true) => Op::Le,
                    ('>', false) => Op::Gt,
                    _ => Op::Ge,
                })
            }
            Some('"') => {
                // No escape sequences in the original format; a string may span lines.
                let mut s = String::new();
                while let Some(c) = self.bump() {
                    if c == '"' {
                        break;
                    }
                    s.push(c);
                }
                Tok::Quoted(s)
            }
            Some(first) => {
                let mut s = String::from(first);
                while let Some(&c) = self.chars.peek() {
                    if c.is_whitespace() || matches!(c, '{' | '}' | '=' | '<' | '>' | '#' | '"') {
                        break;
                    }
                    s.push(c);
                    self.bump();
                }
                Tok::Word(s)
            }
        };
        Spanned { tok, line, col }
    }
}

const MAX_DEPTH: usize = 256;

struct Parser<'a> {
    lexer: Lexer<'a>,
    peeked: Option<Spanned>,
    errors: Vec<ParseError>,
}

impl Parser<'_> {
    fn next(&mut self) -> Spanned {
        self.peeked.take().unwrap_or_else(|| self.lexer.next())
    }

    fn peek(&mut self) -> &Spanned {
        if self.peeked.is_none() {
            self.peeked = Some(self.lexer.next());
        }
        self.peeked.as_ref().unwrap()
    }

    fn error(&mut self, at: &Spanned, message: impl Into<String>) {
        self.errors.push(ParseError {
            line: at.line,
            col: at.col,
            message: message.into(),
        });
    }

    /// Parses items until the matching `}` (or EOF for the top level).
    fn block(&mut self, top: bool, depth: usize) -> Block {
        let mut block = Block::default();
        loop {
            let t = self.next();
            match t.tok {
                Tok::Eof => {
                    if !top {
                        self.error(&t, "unexpected end of file: missing `}`");
                    }
                    return block;
                }
                Tok::Close if top => self.error(&t, "unmatched `}`"),
                Tok::Close => return block,
                Tok::Open => {
                    let inner = self.nested(&t, depth);
                    block.items.push(Item::Value(Value::Block(inner)));
                }
                Tok::Op(op) => self.error(&t, format!("`{}` without a key", op.as_str())),
                Tok::Word(_) | Tok::Quoted(_) => {
                    let (key, quoted) = match t.tok {
                        Tok::Word(s) => (s, false),
                        Tok::Quoted(s) => (s, true),
                        _ => unreachable!(),
                    };
                    if let Tok::Op(op) = self.peek().tok {
                        self.next();
                        if let Some(value) = self.value(depth) {
                            block.items.push(Item::Field(Field {
                                key,
                                op,
                                value,
                                line: t.line,
                            }));
                        }
                    } else {
                        let scalar = Scalar { text: key, quoted };
                        block.items.push(Item::Value(Value::Scalar(scalar)));
                    }
                }
            }
        }
    }

    fn nested(&mut self, open: &Spanned, depth: usize) -> Block {
        if depth >= MAX_DEPTH {
            self.error(open, "blocks nested too deeply");
            // Skip the over-deep block entirely to stay bounded.
            let mut level = 1;
            while level > 0 {
                match self.next().tok {
                    Tok::Open => level += 1,
                    Tok::Close => level -= 1,
                    Tok::Eof => break,
                    _ => {}
                }
            }
            return Block::default();
        }
        self.block(false, depth + 1)
    }

    fn value(&mut self, depth: usize) -> Option<Value> {
        let t = self.peek().clone();
        match t.tok {
            Tok::Open => {
                self.next();
                Some(Value::Block(self.nested(&t, depth)))
            }
            Tok::Word(_) | Tok::Quoted(_) => {
                let t = self.next();
                let (text, quoted) = match t.tok {
                    Tok::Word(s) => (s, false),
                    Tok::Quoted(s) => (s, true),
                    _ => unreachable!(),
                };
                Some(Value::Scalar(Scalar { text, quoted }))
            }
            // Leave `}`/EOF for the enclosing block to consume.
            _ => {
                self.error(&t, "missing value after operator");
                None
            }
        }
    }
}

// ---------------------------------------------------------------------------
// Writer: produces text the original engine can read back (encode with CP1252).

impl fmt::Display for Block {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write_items(f, &self.items, 0)
    }
}

fn write_items(f: &mut fmt::Formatter<'_>, items: &[Item], indent: usize) -> fmt::Result {
    for item in items {
        write!(f, "{:1$}", "", indent * 2)?;
        match item {
            Item::Field(field) => {
                write!(
                    f,
                    "{} {} ",
                    quote_if_needed(&field.key, false),
                    field.op.as_str()
                )?;
                write_value(f, &field.value, indent)?;
            }
            Item::Value(v) => write_value(f, v, indent)?,
        }
        writeln!(f)?;
    }
    Ok(())
}

fn write_value(f: &mut fmt::Formatter<'_>, value: &Value, indent: usize) -> fmt::Result {
    match value {
        Value::Scalar(s) => write!(f, "{}", quote_if_needed(&s.text, s.quoted)),
        Value::Block(b)
            if b.items
                .iter()
                .all(|i| matches!(i, Item::Value(Value::Scalar(_)))) =>
        {
            write!(f, "{{")?;
            for v in b.values() {
                write!(f, " ")?;
                write_value(f, v, indent)?;
            }
            write!(f, " }}")
        }
        Value::Block(b) => {
            writeln!(f, "{{")?;
            write_items(f, &b.items, indent + 1)?;
            write!(f, "{:1$}}}", "", indent * 2)
        }
    }
}

fn quote_if_needed(text: &str, quoted: bool) -> String {
    let needs = quoted
        || text.is_empty()
        || text
            .chars()
            .any(|c| c.is_whitespace() || matches!(c, '{' | '}' | '=' | '<' | '>' | '#'));
    if needs {
        format!("\"{text}\"")
    } else {
        text.to_owned()
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    const SAMPLE: &str = r#"
# Scenario header
header = {
    name = "The Road to War"
    startdate = { year = 1936 month = january day = 0 }
    selectable = { GER ENG SOV }
}
country = {
    tag = GER
    capital = 1863
    ownedprovinces = { 1863 1864 1870 }
    ai = "germany.ai"
    manpower = 1250.50
}
trigger = { ai = no year > 1938 }
"#;

    #[test]
    fn parses_sample() {
        let doc = parse_str(SAMPLE);
        assert!(doc.errors.is_empty(), "{:?}", doc.errors);
        let header = doc.root.get_block("header").unwrap();
        assert_eq!(header.get_str("name"), Some("The Road to War"));
        assert_eq!(
            header.get_block("startdate").unwrap().get_i64("year"),
            Some(1936)
        );
        let tags: Vec<_> = header
            .get_block("selectable")
            .unwrap()
            .values()
            .map(|v| v.as_scalar().unwrap().text.clone())
            .collect();
        assert_eq!(tags, ["GER", "ENG", "SOV"]);
        let ger = doc.root.get_block("COUNTRY").unwrap();
        assert_eq!(
            ger.get_block("ownedprovinces")
                .unwrap()
                .ints()
                .collect::<Vec<_>>(),
            [1863, 1864, 1870]
        );
        assert_eq!(ger.get_f64("manpower"), Some(1250.5));
        let trigger = doc.root.get_block("trigger").unwrap();
        assert_eq!(trigger.get_bool("ai"), Some(false));
        let year = trigger.fields().nth(1).unwrap();
        assert_eq!((year.op, year.line), (Op::Gt, 15));
    }

    #[test]
    fn writer_round_trips() {
        let doc = parse_str(SAMPLE);
        let written = doc.root.to_string();
        let again = parse_str(&written);
        assert!(again.errors.is_empty());
        // Line numbers differ after reformatting; compare the rendered form.
        assert_eq!(again.root.to_string(), written);
        assert!(written.contains("ownedprovinces = { 1863 1864 1870 }"));
        assert!(written.contains("name = \"The Road to War\""));
    }

    #[test]
    fn recovers_from_errors() {
        let doc = parse_str("a = 1\n}\nx = { b = }\nc = { d = 2\n");
        let msgs: Vec<_> = doc
            .errors
            .iter()
            .map(|e| (e.line, e.message.as_str()))
            .collect();
        assert_eq!(
            msgs,
            [
                (2, "unmatched `}`"),
                (3, "missing value after operator"),
                (5, "unexpected end of file: missing `}`")
            ]
        );
        assert_eq!(doc.root.get_i64("a"), Some(1));
        assert_eq!(doc.root.get_block("c").unwrap().get_i64("d"), Some(2));
    }

    #[test]
    fn deep_nesting_is_bounded() {
        let text = "{".repeat(10_000) + &"}".repeat(10_000);
        let doc = parse_str(&text);
        assert_eq!(doc.errors.len(), 1);
    }

    #[test]
    fn cp1252_input() {
        let doc = parse(b"name = \"S\xe3o Paulo\" # coment\xe1rio\n");
        assert_eq!(doc.root.get_str("name"), Some("São Paulo"));
    }
}
