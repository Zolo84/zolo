//! Ігрова дата Darkest Hour: рік = 360 днів, місяць = 30 днів (Paradox-календар).
//! День 0 = 1 січня 1900? Ні: відлік днів від epoch гри; рік починається з day%360==0.

/// Ігрова дата (Paradox-календар: 12 місяців × 30 днів = 360 днів у році).
#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash, PartialOrd, Ord, Default)]
pub struct GameDate {
    pub day: i64, // абсолютний номер дня від epoch гри
}

impl GameDate {
    pub const DAYS_PER_YEAR: i64 = 360;
    pub const DAYS_PER_MONTH: i64 = 30;

    pub fn new(day: i64) -> Self {
        Self { day }
    }

    /// Дата з (рік, місяць 1..12, день 1..30); 1 січня 1900 = день 0.
    pub fn from_ymd(year: i32, month: i32, day: i32) -> Self {
        let year0 = 1900;
        Self {
            day: ((year - year0) as i64) * Self::DAYS_PER_YEAR
                + ((month - 1) as i64) * Self::DAYS_PER_MONTH
                + ((day - 1) as i64),
        }
    }

    pub fn year(&self) -> i32 {
        1900 + (self.day.div_euclid(Self::DAYS_PER_YEAR)) as i32
    }

    /// Місяць 1..12.
    pub fn month(&self) -> i32 {
        1 + (self.day.rem_euclid(Self::DAYS_PER_YEAR) / Self::DAYS_PER_MONTH) as i32
    }

    /// День місяця 1..30.
    pub fn day_of_month(&self) -> i32 {
        1 + (self.day.rem_euclid(Self::DAYS_PER_MONTH)) as i32
    }

    /// Місячний індекс 0..11 у поточному році.
    pub fn month_index(&self) -> usize {
        (self.day.rem_euclid(Self::DAYS_PER_YEAR) / Self::DAYS_PER_MONTH) as usize
    }

    pub fn add_days(&self, n: i64) -> Self {
        Self { day: self.day + n }
    }

    /// Чи цей день є першим днем місяця.
    pub fn is_month_start(&self) -> bool {
        self.day.rem_euclid(Self::DAYS_PER_MONTH) == 0
    }

    /// Чи цей день є першим днем року.
    pub fn is_year_start(&self) -> bool {
        self.day.rem_euclid(Self::DAYS_PER_YEAR) == 0
    }

    pub fn display(&self) -> String {
        const MONTHS: [&str; 12] = [
            "January",
            "February",
            "March",
            "April",
            "May",
            "June",
            "July",
            "August",
            "September",
            "October",
            "November",
            "December",
        ];
        format!(
            "{} {} {}",
            MONTHS[(self.month() - 1) as usize],
            self.day_of_month(),
            self.year()
        )
    }
}

/// Дата зі скрипт-значення `{ year = N [month = N|назва] [day = N] }`.
///
/// У файлах сценаріїв/подій день і ЧИСЛОВИЙ місяць нуль-базовані (HoI2-спадок;
/// назви місяців — звичайно). Еталон: оригінальна гра на старті 1933 показує
/// «0:00 March 4, 1933» при `startdate = { year = 1933 month = march day = 3 }`
/// (скрін re/wine-1933-poland-ingame.png); числовий `month = 0` = січень —
/// та сама конвенція, що й у dh_data::GameDate::from_block.
pub fn date_from_value(v: &crate::script::Value) -> Option<GameDate> {
    let as_f64 = |val: &crate::script::Value| -> Option<f64> {
        match val {
            crate::script::Value::Number(n) => Some(*n),
            // Парсер знає yes/no/1/0 як bool: `day = 0`/`month = 0` у датах —
            // це теж 0 (нуль-базований день/місяць).
            crate::script::Value::Bool(b) => Some(i32::from(*b) as f64),
            crate::script::Value::String(s) => s.trim().parse().ok(),
            _ => None,
        }
    };
    let year = as_f64(v.get("year")?)? as i32;
    let month = match v.get("month") {
        None => 1,
        Some(m) => match m {
            // 0-базований; `0` парсер дає як Bool(false) (yes/no/1/0).
            crate::script::Value::Number(n) => (*n as i32).checked_add(1)?,
            crate::script::Value::Bool(b) => i32::from(*b) + 1,
            crate::script::Value::String(s) => {
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
                let s = s.trim().to_ascii_lowercase();
                match MONTHS.iter().position(|m| *m == s) {
                    Some(i) => i as i32 + 1,
                    None => s.parse::<i32>().ok()?.checked_add(1)?, // число теж буває
                }
            }
            _ => return None,
        },
    };
    let day = match v.get("day") {
        None => 1,
        Some(d) => match d {
            crate::script::Value::Number(n) => (*n as i64).checked_add(1)?, // 0-базований
            crate::script::Value::Bool(b) => i64::from(*b) + 1,
            _ => return None,
        },
    } as i32;
    if !(1..=12).contains(&month) || !(1..=31).contains(&day) {
        return None;
    }
    Some(GameDate::from_ymd(year, month, day))
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn script_dates_are_zero_based() {
        use crate::script::parse_str;
        // Еталон гри: `day = 3` при month = march → 4 березня.
        let doc = parse_str("d = { year = 1933 month = march day = 3 }").unwrap();
        let d = date_from_value(doc.get("d").unwrap()).unwrap();
        assert_eq!(d.display(), "March 4 1933");
        // Лише рік → 1 січня.
        let doc = parse_str("d = { year = 1933 }").unwrap();
        let d = date_from_value(doc.get("d").unwrap()).unwrap();
        assert_eq!(d.display(), "January 1 1933");
        // Числовий місяць теж нуль-базований: month = 0 → січень, day = 0 → 1-ше.
        let doc = parse_str("d = { year = 1936 month = 0 day = 0 }").unwrap();
        let d = date_from_value(doc.get("d").unwrap()).unwrap();
        assert_eq!(d.display(), "January 1 1936");
    }

    #[test]
    fn ymd_roundtrip() {
        let d = GameDate::from_ymd(1936, 1, 1);
        assert_eq!(d.year(), 1936);
        assert_eq!(d.month(), 1);
        assert_eq!(d.day_of_month(), 1);
        assert_eq!(d.day, 36 * 360);

        let d2 = GameDate::from_ymd(1939, 9, 1);
        assert_eq!(d2.month(), 9);
        assert_eq!(d2.day_of_month(), 1);

        // 360-денний рік: 31 грудня 1936 = день 36*360+359
        let dec = d.add_days(359);
        assert_eq!(dec.year(), 1936);
        assert_eq!(dec.month(), 12);
        assert_eq!(dec.day_of_month(), 30);
        let jan = dec.add_days(1);
        assert_eq!(jan.year(), 1937);
        assert_eq!(jan.month(), 1);
    }
}
