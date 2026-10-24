//! In-game calendar. The engine advances in one-hour ticks on the Gregorian calendar.

use dh_text::Block;
use std::fmt;

const MONTHS: [&str; 12] = [
    "january",
    "february",
    "march",
    "april",
    "may",
    "june",
    "july",
    "august",
    "september",
    "october",
    "november",
    "december",
];

#[derive(Debug, Clone, Copy, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct GameDate {
    pub year: i32,
    /// 1..=12
    pub month: u8,
    /// 1..=31
    pub day: u8,
    /// 0..=23
    pub hour: u8,
}

impl GameDate {
    pub fn new(year: i32, month: u8, day: u8) -> Self {
        GameDate {
            year,
            month,
            day,
            hour: 0,
        }
    }

    /// Reads a date block such as `{ year = 1936 month = january day = 0 hour = 0 }`.
    ///
    /// HoI2-lineage files store the day zero-based (`day = 0` is the 1st), which is
    /// what we assume here; `docs/formats.md` tracks the verification status.
    pub fn from_block(b: &Block) -> Option<Self> {
        let year = b.get_i64("year")? as i32;
        let month = match b.get_scalar("month") {
            None => 1,
            Some(m) => match m.as_i64() {
                Some(n) => n as u8 + 1, // numeric months are zero-based as well
                None => month_from_name(m.as_str())?,
            },
        };
        let day = b.get_i64("day").unwrap_or(0) as u8 + 1;
        let hour = b.get_i64("hour").unwrap_or(0) as u8;
        Self::checked(year, month, day, hour)
    }

    /// Parses the dotted `1936.1.1` form (1-based, optionally `.hour`).
    pub fn parse_dotted(s: &str) -> Option<Self> {
        let mut it = s.split('.');
        let year = it.next()?.parse().ok()?;
        let month = it.next()?.parse().ok()?;
        let day = it.next()?.parse().ok()?;
        let hour = it.next().map(str::parse).transpose().ok()?.unwrap_or(0);
        if it.next().is_some() {
            return None;
        }
        Self::checked(year, month, day, hour)
    }

    fn checked(year: i32, month: u8, day: u8, hour: u8) -> Option<Self> {
        ((1..=12).contains(&month) && day >= 1 && day <= days_in_month(year, month) && hour < 24)
            .then_some(GameDate {
                year,
                month,
                day,
                hour,
            })
    }

    pub fn add_hours(mut self, hours: u32) -> Self {
        for _ in 0..hours {
            self.hour += 1;
            if self.hour == 24 {
                self.hour = 0;
                self = self.next_day();
            }
        }
        self
    }

    pub fn next_day(mut self) -> Self {
        self.day += 1;
        if self.day > days_in_month(self.year, self.month) {
            self.day = 1;
            self.month += 1;
            if self.month > 12 {
                self.month = 1;
                self.year += 1;
            }
        }
        self
    }

    pub fn month_name(&self) -> &'static str {
        MONTHS[self.month as usize - 1]
    }
}

pub fn month_from_name(name: &str) -> Option<u8> {
    MONTHS
        .iter()
        .position(|m| m.eq_ignore_ascii_case(name))
        .map(|i| i as u8 + 1)
}

pub fn is_leap(year: i32) -> bool {
    (year % 4 == 0 && year % 100 != 0) || year % 400 == 0
}

pub fn days_in_month(year: i32, month: u8) -> u8 {
    match month {
        2 if is_leap(year) => 29,
        2 => 28,
        4 | 6 | 9 | 11 => 30,
        _ => 31,
    }
}

impl fmt::Display for GameDate {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(
            f,
            "{:04}-{:02}-{:02} {:02}:00",
            self.year, self.month, self.day, self.hour
        )
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn parses_block_dates() {
        let doc = dh_text::script::parse_str("d = { year = 1936 month = january day = 0 }\ne = { year = 1940 month = 4 day = 9 hour = 5 }");
        assert_eq!(
            GameDate::from_block(doc.root.get_block("d").unwrap()),
            Some(GameDate::new(1936, 1, 1))
        );
        let e = GameDate::from_block(doc.root.get_block("e").unwrap()).unwrap();
        assert_eq!(e.to_string(), "1940-05-10 05:00");
    }

    #[test]
    fn calendar_arithmetic() {
        let d = GameDate::new(1940, 2, 28).add_hours(24);
        assert_eq!(d, GameDate::new(1940, 2, 29));
        assert_eq!(
            GameDate::new(1939, 12, 31).add_hours(25).to_string(),
            "1940-01-01 01:00"
        );
        assert_eq!(
            GameDate::parse_dotted("1914.6.28"),
            Some(GameDate::new(1914, 6, 28))
        );
        assert_eq!(GameDate::parse_dotted("1914.2.30"), None);
    }
}
