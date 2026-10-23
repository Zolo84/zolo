//! Ігровий час: накопичувач реального часу → ігрові дні.
//!
//! RE-джерела: `re/RE-tick.md` §3 (таймкіпер: winmm-таймер 15 мс, лічильник днів,
//! події 0x18/0x19/0x1a з FUN_0042cf30), §7 (таблиця швидкостей `DAT_0083b050`
//! = {500,250,100,50,25,10,5,2}), `re/RE-pause-found.md` §2 (місячна подія 0x19 →
//! автосейв-декремент), §3 (індекс 0 = 500 = найповільніше, окремого стану "пауза" немає).
//!
//! Календар: 1 рік = 360 днів, 1 місяць = 30 днів (Paradox-кодування, `GameDate`).

use dh_format::GameDate;

/// Мс реального часу на 1 ігровий день для швидкостей 0..7 — оригінальна таблиця
/// `DAT_0083b050` (RE-tick.md §7). Швидкість 0 — найповільніша (500 мс/день), 7 — найшвидша.
///
/// TODO(RE): в оригіналі таблиця застосовується лише як дільник float-накопичувача
/// в MP-гілці таймкіпера; фактичний SP-темп задавав невідкомпільований код
/// (RE-pause-found.md §3). Тут значення трактуються як "мс на день" і для SP — зручно
/// і відтворює оригінальні пропорції; оригінальний темп — повернути пізніше.
pub const SPEED_MS_PER_DAY: [f64; 8] = [500.0, 250.0, 100.0, 50.0, 25.0, 10.0, 5.0, 2.0];

/// Подія ігрового часу (відповідає постингу подій зміни дати FUN_0042cf30).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum TimeEvent {
    /// Змінився день (ориг. подія 0x18 — "день змінився").
    DayTick(GameDate),
    /// Змінився місяць (ориг. 0x19 TIMER_MONTH — з неї ж автосейв-декремент,
    /// RE-pause-found.md §2: лічильник місяців 1/3/5/10).
    MonthTick(GameDate),
    /// Змінився рік (ориг. 0x1a).
    YearTick(GameDate),
}

/// Накопичувач ігрового часу. Аналог об'єкта-таймкіпера `DAT_00893530`
/// (RE-tick.md §3), але без winmm-потоку: `advance` викликається з ігрового циклу
/// з реальним дельта-часом.
#[derive(Debug, Clone)]
pub struct GameTime {
    /// Поточна ігрова дата.
    pub timer: GameDate,
    /// Накопичений прогрес у частках дня (дробова частина не переходить у день).
    pub tick_accum: f64,
}

impl GameTime {
    pub fn new(start: GameDate) -> Self {
        Self {
            timer: start,
            tick_accum: 0.0,
        }
    }

    /// Просунути ігровий час на `real_dt_ms` реальних мілісекунд зі швидкістю
    /// `speed` (0..7, див. [`SPEED_MS_PER_DAY`]).
    ///
    /// Повертає події в порядку настання: на кожен повний день — `DayTick`;
    /// якщо новий день є першим днем місяця — додатково `MonthTick`;
    /// першим днем року — `YearTick`. При `speed > 7` береться максимальна швидкість;
    /// при `real_dt_ms <= 0` подій немає.
    ///
    /// Паузу реалізує викликач: поки `World::paused`, `advance` просто не викликається
    /// (окремого стану паузи в оригіналі не знайдено — RE-pause-found.md §3).
    pub fn advance(&mut self, real_dt_ms: f64, speed: u8) -> Vec<TimeEvent> {
        let ms_per_day = SPEED_MS_PER_DAY[speed.min(7) as usize];
        self.tick_accum += real_dt_ms / ms_per_day;

        let mut events = Vec::new();
        while self.tick_accum >= 1.0 {
            self.tick_accum -= 1.0;
            self.timer = self.timer.add_days(1);
            let d = self.timer;
            events.push(TimeEvent::DayTick(d));
            if d.is_month_start() {
                events.push(TimeEvent::MonthTick(d));
            }
            if d.is_year_start() {
                events.push(TimeEvent::YearTick(d));
            }
        }
        events
    }

    /// Скинути таймер на `start` (початок нової партії / завантаження сейву).
    pub fn reset(&mut self, start: GameDate) {
        self.timer = start;
        self.tick_accum = 0.0;
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn jan1_1936() -> GameDate {
        GameDate::from_ymd(1936, 1, 1)
    }

    #[test]
    fn speed_zero_is_500ms_per_day() {
        let mut t = GameTime::new(jan1_1936());
        let ev = t.advance(500.0, 0);
        assert_eq!(ev.len(), 1);
        assert!(matches!(ev[0], TimeEvent::DayTick(d) if d == GameDate::from_ymd(1936, 1, 2)));
        assert_eq!(t.timer, GameDate::from_ymd(1936, 1, 2));
    }

    #[test]
    fn speed_progression_and_partial_days() {
        // Швидкість 7 = 2 мс/день: 2 мс → 1 день.
        let mut fast = GameTime::new(jan1_1936());
        assert_eq!(fast.advance(2.0, 7).len(), 1);
        assert_eq!(fast.advance(1.9, 7).len(), 0); // неповний день накопичується
        assert_eq!(fast.advance(0.1, 7).len(), 1); // і переходить у день
                                                   // Швидкість 0: ті самі 2 мс — 0 днів.
        let mut slow = GameTime::new(jan1_1936());
        assert!(slow.advance(2.0, 0).is_empty());
        // Швидкість >= 8 клампується до 7.
        let mut clamped = GameTime::new(jan1_1936());
        assert_eq!(clamped.advance(2.0, 255).len(), 1);
    }

    #[test]
    fn month_boundary_emits_month_tick() {
        // 30 днів від 1 січня 1936 → 1 лютого 1936: MonthTick на останньому кроці.
        let mut t = GameTime::new(jan1_1936());
        let ev = t.advance(500.0 * 30.0, 0);
        assert_eq!(ev.len(), 31); // 30 DayTick + 1 MonthTick
        assert_eq!(
            ev.iter()
                .filter(|e| matches!(e, TimeEvent::DayTick(_)))
                .count(),
            30
        );
        assert_eq!(
            ev.iter()
                .filter(|e| matches!(e, TimeEvent::MonthTick(_)))
                .count(),
            1
        );
        assert_eq!(t.timer, GameDate::from_ymd(1936, 2, 1));
        assert!(t.timer.is_month_start());
    }

    #[test]
    fn year_is_360_days() {
        // 360 днів = рівно 1 рік (Paradox-календар): 360 DayTick + 12 MonthTick + 1 YearTick.
        let mut t = GameTime::new(jan1_1936());
        let ev = t.advance(500.0 * 360.0, 0);
        assert_eq!(
            ev.iter()
                .filter(|e| matches!(e, TimeEvent::DayTick(_)))
                .count(),
            360
        );
        assert_eq!(
            ev.iter()
                .filter(|e| matches!(e, TimeEvent::MonthTick(_)))
                .count(),
            12
        );
        assert_eq!(
            ev.iter()
                .filter(|e| matches!(e, TimeEvent::YearTick(_)))
                .count(),
            1
        );
        assert_eq!(t.timer, GameDate::from_ymd(1937, 1, 1));
        assert!(t.timer.is_year_start());
    }
}
