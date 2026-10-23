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
            "January", "February", "March", "April", "May", "June", "July", "August",
            "September", "October", "November", "December",
        ];
        format!(
            "{} {} {}",
            MONTHS[(self.month() - 1) as usize],
            self.day_of_month(),
            self.year()
        )
    }
}

#[cfg(test)]
mod tests {
    use super::*;

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