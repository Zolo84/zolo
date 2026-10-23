//! Weather (`docs/spec/weather.md`): every 6 hours each province's weather
//! follows its climate and the season, and weather fronts spread rain and
//! snow around a centre that drifts across the map.
//!
//! The update draws from its own copy of the game's `rand()` (an MSVC linear
//! congruential generator), reseeded from the simulation's RNG each time as
//! the game reseeds it from the clock.

use crate::movement::{terrain, MoveContext, ProvinceInfo};
use crate::{Rng, System, World};
use dh_data::{Climate, Weather, WeatherSetup};
use std::sync::Arc;

/// Hours between updates (`0x7821A9`).
pub const UPDATE_HOURS: u8 = 6;
/// Natural fronts on a map with every province enabled (`0x75E9CB`).
const FRONTS: usize = 24;

/// A weather front (`0x75EF10`, 0x3C bytes).
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct WeatherFront {
    /// Provinces it covers, in the order they joined.
    pub provinces: Vec<u32>,
    /// Province it is centred on; 0 when it has none and is dying out.
    pub centre: u32,
    /// Updates a centre waits before moving on.
    pub speed: i64,
    /// Direction it prefers, 0 north … 7 northwest (in [`direction`]'s
    /// mirrored sense).
    pub heading: u8,
    /// Updates since the centre last moved.
    pub idle: i64,
    /// Made by an event (`start_pattern`): not counted among natural fronts.
    pub special: bool,
}

impl WeatherFront {
    /// Defaults of the constructor: speed 3, heading east.
    pub fn new() -> Self {
        WeatherFront {
            provinces: Vec::new(),
            centre: 0,
            speed: 3,
            heading: 2,
            idle: 0,
            special: false,
        }
    }
}

impl Default for WeatherFront {
    fn default() -> Self {
        Self::new()
    }
}

/// The fronts of a scenario's `weather` block.
pub fn fronts_from(setup: &WeatherSetup) -> Vec<WeatherFront> {
    setup
        .patterns
        .iter()
        .map(|p| {
            let d = WeatherFront::new();
            WeatherFront {
                provinces: p.provinces.clone(),
                centre: p.centre.unwrap_or(0),
                speed: p.speed.unwrap_or(d.speed),
                heading: p.heading.unwrap_or(d.heading),
                special: p.special,
                ..d
            }
        })
        .collect()
}

/// The game's `rand()`: MSVC's LCG, 15-bit results.
#[derive(Debug, Clone)]
pub struct MsvcRand(u32);

impl MsvcRand {
    pub fn new(seed: u32) -> Self {
        MsvcRand(seed)
    }

    pub fn rand(&mut self) -> u32 {
        self.0 = self.0.wrapping_mul(0x343FD).wrapping_add(0x269EC3);
        (self.0 >> 16) & 0x7FFF
    }
}

/// Season predicates of weather.md §2.1 (`m` 0 = January).
mod season {
    use super::Climate::{self, *};

    pub fn deep_winter(c: Climate, north: bool, m: u8) -> bool {
        match c {
            Arctic if north => !(4..=8).contains(&m),
            Arctic => (3..=9).contains(&m),
            Subarctic | Muddy if north => !(3..=9).contains(&m),
            Subarctic | Muddy => (5..=8).contains(&m),
            // The game tests `m <= 1 && m >= 11`, which never holds.
            Temperate if north => false,
            Temperate => m == 6,
            _ => false,
        }
    }

    pub fn onset(c: Climate, north: bool, m: u8) -> bool {
        match c {
            Arctic => m == if north { 8 } else { 2 },
            Subarctic | Muddy => m == if north { 9 } else { 4 },
            Temperate => m == if north { 10 } else { 5 },
            _ => false,
        }
    }

    pub fn thaw(c: Climate, north: bool, m: u8) -> bool {
        match c {
            Arctic => m == if north { 4 } else { 10 },
            Subarctic | Muddy => m == if north { 3 } else { 9 },
            Temperate => m == if north { 2 } else { 7 },
            _ => false,
        }
    }

    pub fn warm(c: Climate, north: bool, m: u8) -> bool {
        match c {
            Arctic if north => (5..=8).contains(&m),
            Arctic => !(3..=10).contains(&m),
            Subarctic | Muddy if north => (4..=8).contains(&m),
            Subarctic | Muddy => !(4..=9).contains(&m),
            Temperate if north => (3..=9).contains(&m),
            Temperate => !(5..=7).contains(&m),
            _ => true,
        }
    }

    pub fn rainy(c: Climate, north: bool, m: u8) -> bool {
        match c {
            Tropical if north => (4..=10).contains(&m),
            Tropical => !(4..=8).contains(&m),
            Subtropical if north => !(1..=10).contains(&m),
            Subtropical => (5..=6).contains(&m),
            Mediterranean if north => !(2..=8).contains(&m),
            Mediterranean => (4..=7).contains(&m),
            _ => false,
        }
    }

    pub fn dry(c: Climate, north: bool, m: u8) -> bool {
        match c {
            Arid => true,
            Mediterranean if north => (5..=8).contains(&m),
            Mediterranean => !(3..=10).contains(&m),
            _ => false,
        }
    }
}

/// Direction from province centre `c` to `s` (`0x75D220`): 0..=7 with 0
/// "north", but measured with y growing southward, so 0 is down the map;
/// 2 and 6 never come out.
pub fn direction(c: (i64, i64), s: (i64, i64)) -> u8 {
    let (dx, dy) = ((s.0 - c.0) as f32, (s.1 - c.1) as f32);
    if dx == 0.0 {
        return if dy > 0.0 { 0 } else { 4 };
    }
    let r = dy / dx;
    let bin = if r > 2.0 {
        0
    } else if r > 0.0 {
        1
    } else if r >= -2.0 {
        2
    } else {
        3
    };
    if dx > 0.0 {
        [0, 1, 3, 4][bin]
    } else {
        [4, 5, 7, 0][bin]
    }
}

/// Removes the first occurrence of `p`, as the game's list does (`0x417400`).
/// A front's list only holds a province twice in modded set-ups, where it
/// was not precipitating when it joined.
fn remove_first(list: &mut Vec<u32>, p: u32) {
    if let Some(k) = list.iter().position(|&x| x == p) {
        list.remove(k);
    }
}

/// Keeps the provinces' weather moving.
pub struct WeatherSystem {
    ctx: Arc<MoveContext>,
    started: bool,
}

impl WeatherSystem {
    pub fn new(ctx: Arc<MoveContext>) -> Self {
        WeatherSystem {
            ctx,
            started: false,
        }
    }
}

impl System for WeatherSystem {
    fn name(&self) -> &str {
        "weather"
    }

    fn on_hour(&mut self, world: &mut World, rng: &mut Rng) {
        // The game also updates once when the scenario starts; here that
        // happens on the first simulated hour.
        if !self.started || world.date.hour % UPDATE_HOURS == 0 {
            self.started = true;
            let seed = rng.below(0x8000);
            update(&self.ctx, world, seed);
        }
    }
}

/// One weather update (`0x75DCC0`) with the given `rand()` seed.
pub fn update(ctx: &MoveContext, world: &mut World, seed: u32) {
    if world.weather_static {
        return;
    }
    let n = ctx.provinces.len();
    if world.weather.len() < n {
        world.weather.resize(n, Weather::Clear);
    }
    let mut u = Update {
        ctx,
        month: world.date.month.saturating_sub(1),
        rand: MsvcRand::new(seed),
        weather: std::mem::take(&mut world.weather),
    };
    let mut fronts = std::mem::take(&mut world.weather_fronts);
    u.climate_step(&fronts, seed);
    let mut last = seed;
    for front in &mut fronts {
        last = u.front(front);
    }
    // The target is trunc(enabled / all · 24); every province counts as
    // enabled until the scenario's `map` block is read.
    if fronts.iter().filter(|f| !f.special).count() < FRONTS {
        let mut front = WeatherFront::new();
        u.seed_front(&mut front, last);
        fronts.push(front);
    }
    world.weather = u.weather;
    world.weather_fronts = fronts;
}

struct Update<'a> {
    ctx: &'a MoveContext,
    month: u8,
    rand: MsvcRand,
    weather: Vec<Weather>,
}

impl Update<'_> {
    fn info(&self, p: u32) -> Option<&ProvinceInfo> {
        self.ctx.province(p)
    }

    fn climate(&self, p: u32) -> (Climate, bool) {
        self.info(p)
            .map_or((Climate::None, true), |i| (i.climate, i.north))
    }

    fn rainy(&self, p: u32) -> bool {
        let (c, north) = self.climate(p);
        season::rainy(c, north, self.month)
    }

    fn dry(&self, p: u32) -> bool {
        let (c, north) = self.climate(p);
        season::dry(c, north, self.month)
    }

    fn thaw(&self, p: u32) -> bool {
        let (c, north) = self.climate(p);
        season::thaw(c, north, self.month)
    }

    fn get(&self, p: u32) -> Weather {
        self.weather.get(p as usize).copied().unwrap_or_default()
    }

    fn set(&mut self, p: u32, w: Weather) {
        if let Some(slot) = self.weather.get_mut(p as usize) {
            *slot = w;
        }
    }

    /// Rain, or snow where it is cold.
    fn precipitation(&self, p: u32) -> Weather {
        if self.get(p).is_cold() {
            Weather::Snowing
        } else {
            Weather::Raining
        }
    }

    /// Storm, or blizzard where it is cold.
    fn heavy(&self, p: u32) -> Weather {
        if self.get(p).is_cold() {
            Weather::Blizzard
        } else {
            Weather::Storm
        }
    }

    /// The front has left: frozen ground stays, mud in a muddy thaw.
    fn clear(&mut self, p: u32) {
        let w = if self.get(p).is_cold() {
            Weather::Frozen
        } else if self.climate(p).0 == Climate::Muddy && self.thaw(p) {
            Weather::Muddy
        } else {
            Weather::Clear
        };
        self.set(p, w);
    }

    /// 0 for the same province, 1 for a neighbour, 2 for a neighbour's
    /// neighbour, 3 beyond (`0x4E76F0`).
    fn dist(&self, a: u32, c: u32) -> i64 {
        if a == c {
            return 0;
        }
        let near = |p: u32| self.ctx.regular_neighbours(p).any(|l| l.to == c);
        if near(a) {
            1
        } else if self.ctx.regular_neighbours(a).any(|l| near(l.to)) {
            2
        } else {
            3
        }
    }

    /// §2.1: climate and season for every province.
    fn climate_step(&mut self, fronts: &[WeatherFront], seed: u32) {
        let mut in_front = vec![false; self.weather.len()];
        for p in fronts.iter().flat_map(|f| &f.provinces) {
            if let Some(slot) = in_front.get_mut(*p as usize) {
                *slot = true;
            }
        }
        use Weather::*;
        for (i, &in_front) in in_front.iter().enumerate() {
            let p = i as u32;
            let (c, north) = self.climate(p);
            let m = self.month;
            let event = (seed as usize + i) % 60 == 0;
            let w = self.weather[i];
            let w = if season::deep_winter(c, north, m) || season::onset(c, north, m) && event {
                match w {
                    Clear => Frozen,
                    Raining => Snowing,
                    Storm => Blizzard,
                    w => w,
                }
            } else if season::thaw(c, north, m) && event {
                match w {
                    Snowing => Raining,
                    Blizzard => Storm,
                    Raining | Storm => w,
                    _ if c == Climate::Muddy => Muddy,
                    _ => Clear,
                }
            } else if season::warm(c, north, m) {
                match w {
                    Snowing => Raining,
                    Blizzard => Storm,
                    Frozen => Clear,
                    Muddy if self.rand.rand() % 12 == 0 => Clear,
                    w => w,
                }
            } else {
                w
            };
            let w = if in_front {
                w
            } else {
                match w {
                    Raining | Storm if c == Climate::Muddy && season::thaw(c, north, m) => Muddy,
                    Raining | Storm => Clear,
                    Snowing | Blizzard => Frozen,
                    w => w,
                }
            };
            self.weather[i] = w;
        }
    }

    /// §2.2: one front's update; returns the last `rand()` value drawn.
    fn front(&mut self, f: &mut WeatherFront) -> u32 {
        let r = self.rand.rand();
        let mut last = r;
        let k = if self.rainy(f.centre) { 20 } else { 10 };
        if f.provinces.is_empty() {
            self.seed_front(f, r);
        } else if f.centre != 0 && (r % k == 0 || self.dry(f.centre)) {
            // The centre dies out.
            let c = f.centre;
            let w = if self.get(c).is_cold() {
                Weather::Frozen
            } else {
                Weather::Clear
            };
            self.set(c, w);
            remove_first(&mut f.provinces, c);
            f.centre = 0;
        }
        let mut moved = false;
        let mut first_new = 0;
        let mut i = 0;
        while i < f.provinces.len() {
            let s = f.provinces[i];
            if s == first_new {
                break;
            }
            let r2 = self.rand.rand();
            last = r2;
            let c = f.centre;
            let mut removed = false;
            if c == 0 {
                if r2 % (if self.dry(s) { 1 } else { 2 }) == 0 {
                    self.clear(s);
                    remove_first(&mut f.provinces, s);
                    removed = true;
                }
                if !removed {
                    i += 1;
                }
                continue;
            }
            let tropical = self.climate(s).0 == Climate::Tropical;
            let heavy = matches!(self.get(s), Weather::Storm | Weather::Blizzard);
            match self.dist(s, c) {
                3 => {
                    if r2 % (if self.rainy(s) { 12 } else { 6 }) == 0 {
                        self.clear(s);
                        remove_first(&mut f.provinces, s);
                        removed = true;
                    }
                }
                2 => {
                    if !heavy && (r2 % 100 == 0 || tropical && r2 % 48 == 0) {
                        self.set(s, self.heavy(s));
                    } else if heavy && r2 % 48 == 0 {
                        self.set(s, self.precipitation(s));
                    }
                }
                1 => {
                    if !moved {
                        let h = f.heading;
                        let dir = direction(self.centre(c), self.centre(s));
                        let near = dir == h || dir == (h + 1) % 8 || dir == (h + 7) % 8;
                        let go = if dir == h && f.idle >= f.speed || f.idle > f.speed + 3 && near {
                            true
                        } else if f.idle > f.speed + 6 {
                            f.heading = if r2 % 2 == 0 {
                                (h + 1) % 8
                            } else {
                                (h + 7) % 8
                            };
                            true
                        } else {
                            false
                        };
                        if go {
                            f.centre = s;
                            f.idle = 0;
                            moved = true;
                        }
                    }
                    if !heavy && (r2 % 73 == 0 || tropical && r2 % 24 == 0) {
                        self.set(s, self.heavy(s));
                    } else if heavy && r2 % 100 == 0 {
                        self.set(s, self.precipitation(s));
                    }
                }
                _ => {}
            }
            self.spread(f, s, r2, &mut first_new);
            if !removed {
                i += 1;
            }
        }
        if !moved {
            f.idle += 1;
        }
        last
    }

    fn centre(&self, p: u32) -> (i64, i64) {
        self.info(p).map_or((0, 0), |i| i.centre)
    }

    /// Rain or snow spreads from `s` to its neighbours, likelier near the
    /// centre and in the rainy season; one roll for all of them.
    fn spread(&mut self, f: &mut WeatherFront, s: u32, r2: u32, first_new: &mut u32) {
        let neighbours: Vec<u32> = self.ctx.regular_neighbours(s).map(|l| l.to).collect();
        for n in neighbours {
            if self.get(n).is_precipitation() || self.dry(n) {
                continue;
            }
            let factor = if self.rainy(n) { 3 } else { 5 };
            let x = (self.dist(n, f.centre) * factor).max(1) as u32;
            if r2 % x == 0 {
                self.set(n, self.precipitation(n));
                f.provinces.push(n);
                if *first_new == 0 {
                    *first_new = n;
                }
            }
        }
    }

    /// A new centre somewhere it can rain (`0x75D660`).
    fn seed_front(&mut self, f: &mut WeatherFront, r: u32) {
        let n = self.weather.len() as u32;
        if n < 2 {
            return;
        }
        let mut p = r % (n - 1) + 1;
        for _ in 0..=2 * n {
            let ok = self.info(p).is_some_and(|i| i.terrain != terrain::RIVER)
                && !self.get(p).is_precipitation()
                && !self.dry(p);
            if ok {
                f.centre = p;
                f.provinces.push(p);
                f.heading = (r % 8) as u8;
                f.speed = (r % 5 + 1) as i64;
                self.set(p, self.precipitation(p));
                return;
            }
            p = if p + 1 >= n { 1 } else { p + 1 };
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn msvc_rand_sequence() {
        let mut r = MsvcRand::new(1);
        assert_eq!([r.rand(), r.rand(), r.rand()], [41, 18467, 6334]);
    }

    #[test]
    fn directions_are_mirrored_and_skip_east_west() {
        let c = (100, 100);
        assert_eq!(direction(c, (100, 150)), 0); // down the map
        assert_eq!(direction(c, (100, 50)), 4);
        assert_eq!(direction(c, (110, 150)), 0); // steep
        assert_eq!(direction(c, (150, 120)), 1);
        assert_eq!(direction(c, (150, 100)), 3); // straight right: not 2
        assert_eq!(direction(c, (150, 80)), 3);
        assert_eq!(direction(c, (110, 50)), 4);
        assert_eq!(direction(c, (50, 80)), 5);
        assert_eq!(direction(c, (50, 100)), 7); // straight left: not 6
        assert_eq!(direction(c, (50, 120)), 7);
        assert_eq!(direction(c, (90, 150)), 0);
    }

    #[test]
    fn seasons_follow_the_tables() {
        use season::*;
        // Temperate north never gets deep winter (the game's test is
        // `m <= 1 && m >= 11`); frost comes in November and leaves in March.
        assert!((0..12).all(|m| !deep_winter(Climate::Temperate, true, m)));
        assert!(onset(Climate::Temperate, true, 10));
        assert!(thaw(Climate::Temperate, true, 2));
        assert!(!warm(Climate::Temperate, true, 0) && warm(Climate::Temperate, true, 3));
        // Arctic north: October..April.
        let arctic: Vec<u8> = (0..12)
            .filter(|&m| deep_winter(Climate::Arctic, true, m))
            .collect();
        assert_eq!(arctic, [0, 1, 2, 3, 9, 10, 11]);
        assert!(dry(Climate::Arid, false, 5) && !rainy(Climate::Arid, true, 5));
        assert!(rainy(Climate::Tropical, true, 6) && rainy(Climate::Tropical, false, 0));
        assert!(warm(Climate::None, true, 0));
    }
}
