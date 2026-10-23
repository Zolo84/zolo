//! Країна: стан держави на карті — економіка, ресурси, технології, дипломатія.
//!
//! RE-джерела: `re/RE-eug-format.md` (структура країн у .eug), `re/RE-misc-details.md` §C
//! (фаза 5 — економіка/політика, фаза 6 — дипломатія), `re/RE-tick.md` §6 (список країн
//! `DAT_0089cad8` — 344 слоти за тег-індексом).
//!
//! Країни зберігаються у `Vec<Country>` світу; зв'язок Tag → індекс — у `World::tags`.

use std::collections::{HashMap, HashSet};

use dh_format::{ProvinceId, Tag};

/// Стратегічні ресурси країни (накопичені на складі).
#[derive(Debug, Clone, Default, PartialEq)]
pub struct CountryResources {
    pub oil: f64,
    pub metal: f64,
    pub energy: f64,
    /// Рідкісні матеріали (rare materials).
    pub rare: f64,
    /// Запаси/постачання (supplies).
    pub supplies: f64,
}

/// Держава.
#[derive(Debug, Clone)]
pub struct Country {
    pub tag: Tag,
    pub name: String,
    pub capital: Option<ProvinceId>,
    pub money: f64,
    pub manpower: f64,
    /// Престиж (у DH токен `wealth` 0x237 — RE-scripts.md §5 «Ресурси/економіка»;
    /// команда престижу виконується через цей баланс).
    pub prestige: f64,
    /// Промисловий потенціал (джерело доходу у фазі 5).
    pub ic: f64,
    pub resources: CountryResources,
    /// Досліджені технології (id з db/tech — TODO: завантаження з бази).
    pub techs: Vec<u16>,
    /// Ставлення до інших країн: Tag → −200..200 (HoI2-шкала).
    pub relations: HashMap<Tag, i32>,
    /// Країни, з якими йде війна.
    pub at_war: HashSet<Tag>,
    /// Керується AI (інакше — людина).
    pub ai_enabled: bool,
}

impl Country {
    pub fn new(tag: Tag, name: impl Into<String>) -> Self {
        Self {
            tag,
            name: name.into(),
            capital: None,
            money: 0.0,
            manpower: 0.0,
            prestige: 0.0,
            ic: 0.0,
            resources: CountryResources::default(),
            techs: Vec::new(),
            relations: HashMap::new(),
            at_war: HashSet::new(),
            ai_enabled: true,
        }
    }

    /// Додати гроші (від'ємне значення — витрата). Повертає новий баланс.
    pub fn add_money(&mut self, amount: f64) -> f64 {
        self.money += amount;
        self.money
    }

    /// Змінити ставлення до країни `tag` на `delta` з клампом у HoI2-шкалу −200..200.
    /// Повертає нове значення ставлення.
    pub fn change_relation(&mut self, tag: &Tag, delta: i32) -> i32 {
        let rel = (self.relations.get(tag).copied().unwrap_or(0) + delta).clamp(-200, 200);
        self.relations.insert(tag.clone(), rel);
        rel
    }

    /// Одноосібне оголошення війни: `self` оголошує війну `tag`.
    /// Повертає `true`, якщо війну оголошено; `false` — самому собі або якщо
    /// війна вже йде. Відносини падають до −200.
    ///
    /// Увага: це односторонній бік; для симетричної війни обох сторін
    /// використовуй [`crate::world::World::declare_war`] (як SETUP_WAR в оригіналі).
    pub fn declare_war(&mut self, tag: &Tag) -> bool {
        if tag == &self.tag || self.at_war.contains(tag) {
            return false;
        }
        self.at_war.insert(tag.clone());
        // Ориг.: оголошення війни обнуляє відносини в мінус.
        self.relations.insert(tag.clone(), -200);
        true
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn tag(s: &str) -> Tag {
        Tag(s.to_string())
    }

    #[test]
    fn add_money_accumulates() {
        let mut c = Country::new(tag("GER"), "Німеччина");
        assert_eq!(c.add_money(100.5), 100.5);
        assert_eq!(c.add_money(-30.25), 70.25);
    }

    #[test]
    fn change_relation_clamps_to_hoi2_scale() {
        let mut c = Country::new(tag("GER"), "Німеччина");
        let sov = tag("SOV");
        assert_eq!(c.change_relation(&sov, 500), 200);
        assert_eq!(c.change_relation(&sov, -1000), -200);
        assert_eq!(c.relations.get(&sov), Some(&-200));
    }

    #[test]
    fn declare_war_updates_at_war_and_relations() {
        let mut c = Country::new(tag("GER"), "Німеччина");
        let sov = tag("SOV");
        assert!(c.declare_war(&sov));
        assert!(c.at_war.contains(&sov));
        assert_eq!(c.relations.get(&sov), Some(&-200));
        // Повторне оголошення — нічого не змінює
        assert!(!c.declare_war(&sov));
        assert_eq!(c.at_war.len(), 1);
        // Війна самому собі неможлива
        assert!(!c.declare_war(&tag("GER")));
    }
}
