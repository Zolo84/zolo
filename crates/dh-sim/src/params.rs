//! Game constants the simulation reads from `db/misc.txt`, by position
//! (`combat[n]` is the n-th number of the `combat` section). [`Params::default`]
//! holds the values of the shipped file; [`Params::from_misc`] takes them from
//! the install, so a mod's `misc.txt` changes them.

use dh_data::Misc;

/// A division at or below this strength is destroyed (hard-coded in the game).
pub const DESTROYED_BELOW: f32 = 0.1;
/// Divisions with less organisation do not fire (hard-coded in the game).
pub const MIN_ORG_TO_FIRE: f32 = 0.5;

#[derive(Debug, Clone, PartialEq)]
pub struct Params {
    pub org_min: f32,                   // combat[90]
    pub org_range: u32,                 // combat[91]
    pub org_range_hard_on_soft: u32,    // combat[92]
    pub str_min: f32,                   // combat[93]
    pub str_range: u32,                 // combat[94]
    pub str_range_hard_on_soft: u32,    // combat[95]
    pub org_damage: f32,                // combat[121]
    pub str_damage: f32,                // combat[125]
    pub evade_with_defences: f32,       // combat[73] × 100
    pub evade_without_defences: f32,    // combat[77] × 100
    pub ground_defence_efficiency: f32, // country[3]
    pub experience: f32,                // combat[63]
    pub multiple_combats: f32,          // combat[14]
    pub combined_arms_attack: f32,      // combat[15]
    pub combined_arms_defence: f32,     // combat[16]
    pub surprise: f32,                  // combat[17]
    pub over_command_limit: f32,        // combat[18]
    /// Per attack direction above two.
    pub envelopment: f32, // combat[21]
    pub encircled: f32,                 // combat[22]
    pub fort_per_level: f32,            // combat[23]
    pub hard_in_city: f32,              // combat[25]
    pub dissent: f32,                   // combat[26]
    pub dig_in: f32,                    // combat[38]
    pub own_terrain_trait: f32,         // combat[83]
    pub similar_terrain_trait: f32,     // combat[84]
    pub event_trait: f32,               // combat[85] × 100
    pub leader_skill: f32,              // combat[86]
    pub retreat_org: f32,               // combat[228]
    pub leader_experience: f32,         // combat[6]
    /// Attrition severity (weather.md §4.3).
    pub attrition: f32, // combat[7]
    /// Daily strength a land division loses out of supply.
    pub out_of_supply_attrition: f32, // combat[8]
    /// Divisions at or below this strength take no attrition.
    pub attrition_floor: f32, // combat[11]
    /// Land speed bonus of a leader's own terrain trait, and of
    /// WinterSpecialist in cold weather (land-movement.md §3.5).
    pub leader_move: f32, // combat[159]
    /// Land speed bonus of a similar terrain trait.
    pub leader_move_similar: f32, // combat[160]
    /// Supply efficiency a Logistics Wizard adds while it is below 1.
    pub logistics_wizard_ese: f32, // combat[161]
    /// Land speed factor out of supply (land-movement.md §3.1).
    pub out_of_supply_speed: f32, // combat[208]
    /// Land travel time factor while a division has no fuel.
    pub no_fuel_travel: f32, // combat[210]
    /// Speed of a division without fuel, when not negative (−1: off).
    pub fuel_speed: f32, // combat[211]
    /// Default combat modifiers of land divisions without supplies / fuel.
    pub no_supplies_combat: f32, // combat[27]
    pub no_fuel_combat: f32,            // combat[30]
    /// Land supply need factors: standing still, in combat.
    pub supply_idle: f32, // economy[63]
    pub supply_combat: f32,             // economy[64]
    /// Land fuel need factors: standing still, in combat.
    pub fuel_idle: f32, // economy[65]
    pub fuel_combat: f32,               // economy[66]
    /// Air supply need at its base, air and naval fuel at base / in port,
    /// naval supply in port, naval fuel idle at sea.
    pub air_supply_base: f32, // economy[67]
    pub fuel_at_base: f32,              // economy[69]
    pub naval_supply_port: f32,         // economy[71]
    pub naval_fuel_idle: f32,           // economy[73]
    /// IC to transport capacity.
    pub ic_to_tc: f32, // economy[1]
    /// IC of provinces outside the national ones: owned, not owned.
    pub non_national_ic: f32, // economy[10]
    pub non_owned_ic: f32,              // economy[11]
    /// Supply load: per occupied province; land, air, naval needs.
    pub load_occupied: f32, // economy[18]
    pub load_land: f32,                 // economy[19]
    pub load_air: f32,                  // economy[20]
    pub load_naval: f32,                // economy[21]
    /// Transport capacity modifiers every country starts with.
    pub tc_modifier: f32, // country[6]
    pub occupied_tc_modifier: f32,      // country[7]
    /// Friendly-province ORG regain: `min(2 · infra + bonus, cap)`
    /// (organisation.md §2, old logic).
    pub org_friendly_bonus: f32, // combat[165]
    pub org_friendly_cap: f32,          // combat[166]
    /// The newer ORG regain rules (`combat[167]` exactly 1).
    pub new_org_logic: bool, // combat[167]
    pub org_morale: f32,                // combat[168]
    /// ORG regain factor by weather 0..=6 under the newer rules.
    pub org_weather: [f32; 7], // combat[169..=175]
    /// Newer rules, land: base, no fuel, no supplies, low-ORG boost,
    /// friendly territory, on a transport, moving, retreating.
    pub org_land: [f32; 8], // combat[188..=195]
    /// Supply distance factor of ORG regain.
    pub supply_distance: f32, // economy[87]
    pub country_supply_distance: f32,   // country[10]
    /// Hourly ORG of rebels.
    pub rebel_org: f32, // mod[21]
    /// Command limits by leader rank 0..=3; every lower rank counts as 3.
    pub land_command_limit: [u32; 4], // combat[39..=42]
    pub air_command_limit: [u32; 4],    // combat[43..=46]
    pub naval_command_limit: [u32; 4],  // combat[47..=50]
    pub hq_command_factor: u32,         // combat[51]
    /// Encirclement and breakthrough grow likelier when the side's stacks
    /// average more than this speed (km/h), by the bonus per km/h above it,
    /// up to the given range.
    pub event_speed_min: f32, // combat[230]
    pub event_speed_range: f32,         // combat[231]
    pub event_speed_bonus: f32,         // combat[232]
    pub event_hours: u64,               // combat[233]
    /// Damage taken during each combat event, by event: ORG and STR taken
    /// by attackers, then ORG and STR taken by defenders.
    pub event_damage: [[f32; 4]; 7], // combat[234..=261]

    // `country` section: every country starts with these.
    /// Divides attrition (`attrition` commands change it).
    pub country_attrition: f32, // country[8]
    pub hq_ese: f32,          // country[14]
    pub event_hq_chance: f32, // country[15]
    /// Chance of each combat event.
    pub event_chance: f32, // country[16]
    pub land_surprise: f32,   // country[32]
    pub dig_in_max: f32,      // country[44]
    pub dig_in_daily: f32,    // country[45]

    /// Efficiency of amphibious assaults every country starts with
    /// (`task_efficiency` technologies raise it; not applied yet).
    pub amphibious_assault: f32, // mission[73]
}

impl Default for Params {
    fn default() -> Self {
        Params {
            org_min: 1.0,
            org_range: 2,
            org_range_hard_on_soft: 4,
            str_min: 1.0,
            str_range: 2,
            str_range_hard_on_soft: 1,
            org_damage: 0.6,
            str_damage: 0.1,
            evade_with_defences: 100.0,
            evade_without_defences: 60.0,
            ground_defence_efficiency: 0.8,
            experience: 0.5,
            multiple_combats: -0.5,
            combined_arms_attack: 0.05,
            combined_arms_defence: 0.15,
            surprise: -0.2,
            over_command_limit: -0.75,
            envelopment: -0.1,
            encircled: -0.1,
            fort_per_level: -0.07,
            hard_in_city: -0.5,
            dissent: -0.005,
            dig_in: 0.01,
            own_terrain_trait: 0.1,
            similar_terrain_trait: 0.05,
            event_trait: 5.0,
            leader_skill: 0.05,
            retreat_org: 5.0,
            leader_experience: 1.3,
            attrition: 0.05,
            out_of_supply_attrition: 0.5,
            attrition_floor: 0.0,
            leader_move: 0.05,
            leader_move_similar: 0.025,
            logistics_wizard_ese: 0.1,
            out_of_supply_speed: 0.1,
            no_fuel_travel: 3.0,
            fuel_speed: -1.0,
            no_supplies_combat: -0.2,
            no_fuel_combat: 0.0,
            supply_idle: 1.0,
            supply_combat: 1.0,
            fuel_idle: 0.25,
            fuel_combat: 1.0,
            air_supply_base: 1.0,
            fuel_at_base: 0.01,
            naval_supply_port: 0.5,
            naval_fuel_idle: 0.25,
            ic_to_tc: 1.5,
            non_national_ic: 0.2,
            non_owned_ic: 0.2,
            load_occupied: 1.0,
            load_land: 1.0,
            load_air: 1.0,
            load_naval: 0.3333,
            tc_modifier: 1.0,
            occupied_tc_modifier: 1.0,
            org_friendly_bonus: 0.0,
            org_friendly_cap: 1.2,
            new_org_logic: false,
            org_morale: 0.01,
            org_weather: [1.0, 1.0, 1.0, 0.8, 0.8, 0.6, 0.7],
            org_land: [1.0, 1.0, 1.0, 3.0, 1.3, 0.0, 0.0, 1.0],
            supply_distance: 1.0,
            country_supply_distance: 1.0,
            rebel_org: 0.2,
            land_command_limit: [12, 9, 3, 1],
            air_command_limit: [24, 16, 8, 4],
            naval_command_limit: [30, 18, 12, 6],
            hq_command_factor: 2,
            event_speed_min: 3.0,
            event_speed_range: 4.0,
            event_speed_bonus: 0.1,
            event_hours: 8,
            event_damage: [
                [1.5, 1.0, 1.0, 1.25],  // counterattack
                [1.0, 1.25, 1.5, 1.0],  // assault
                [0.9, 1.0, 1.0, 1.75],  // encirclement
                [0.8, 0.8, 1.2, 1.2],   // ambush
                [1.0, 1.0, 1.0, 0.5],   // delay
                [0.75, 0.5, 0.25, 0.5], // tactical withdrawal
                [1.0, 0.8, 1.5, 1.0],   // breakthrough
            ],
            country_attrition: 1.0,
            hq_ese: 0.01,
            event_hq_chance: 1.0,
            event_chance: 0.01,
            land_surprise: 1.0,
            dig_in_max: 20.0,
            dig_in_daily: 1.0,
            amphibious_assault: 0.5,
        }
    }
}

impl Params {
    /// Values from a loaded `misc.txt`; any the file lacks keep the default.
    pub fn from_misc(misc: &Misc) -> Self {
        let mut p = Params::default();
        let f = |section: &str, n: usize, v: &mut f32| {
            if let Some(x) = misc.get(section, n) {
                *v = x as f32;
            }
        };
        // Stored as chances; the rules use percentages.
        let percent = |n: usize, v: &mut f32| {
            if let Some(x) = misc.get("combat", n) {
                *v = (x * 100.0) as f32;
            }
        };
        // Integer slots are read like the game's `(int)` cast.
        let i = |n: usize, v: &mut u32| {
            if let Some(x) = misc.get("combat", n) {
                *v = x.max(0.0) as u32;
            }
        };
        i(91, &mut p.org_range);
        i(92, &mut p.org_range_hard_on_soft);
        i(94, &mut p.str_range);
        i(95, &mut p.str_range_hard_on_soft);
        i(51, &mut p.hq_command_factor);
        for (r, v) in p.land_command_limit.iter_mut().enumerate() {
            i(39 + r, v);
        }
        for (r, v) in p.air_command_limit.iter_mut().enumerate() {
            i(43 + r, v);
        }
        for (r, v) in p.naval_command_limit.iter_mut().enumerate() {
            i(47 + r, v);
        }
        if let Some(x) = misc.get("combat", 233) {
            p.event_hours = x.max(0.0) as u64;
        }
        for (e, row) in p.event_damage.iter_mut().enumerate() {
            for (k, v) in row.iter_mut().enumerate() {
                f("combat", 234 + 4 * e + k, v);
            }
        }
        for (n, v) in [
            (90, &mut p.org_min),
            (93, &mut p.str_min),
            (121, &mut p.org_damage),
            (125, &mut p.str_damage),
            (63, &mut p.experience),
            (14, &mut p.multiple_combats),
            (15, &mut p.combined_arms_attack),
            (16, &mut p.combined_arms_defence),
            (17, &mut p.surprise),
            (18, &mut p.over_command_limit),
            (21, &mut p.envelopment),
            (22, &mut p.encircled),
            (23, &mut p.fort_per_level),
            (25, &mut p.hard_in_city),
            (26, &mut p.dissent),
            (38, &mut p.dig_in),
            (83, &mut p.own_terrain_trait),
            (84, &mut p.similar_terrain_trait),
            (86, &mut p.leader_skill),
            (228, &mut p.retreat_org),
            (6, &mut p.leader_experience),
            (7, &mut p.attrition),
            (8, &mut p.out_of_supply_attrition),
            (11, &mut p.attrition_floor),
            (159, &mut p.leader_move),
            (160, &mut p.leader_move_similar),
            (161, &mut p.logistics_wizard_ese),
            (208, &mut p.out_of_supply_speed),
            (230, &mut p.event_speed_min),
            (231, &mut p.event_speed_range),
            (232, &mut p.event_speed_bonus),
        ] {
            f("combat", n, v);
        }
        percent(73, &mut p.evade_with_defences);
        percent(77, &mut p.evade_without_defences);
        percent(85, &mut p.event_trait);
        for (n, v) in [
            (3, &mut p.ground_defence_efficiency),
            (8, &mut p.country_attrition),
            (14, &mut p.hq_ese),
            (15, &mut p.event_hq_chance),
            (16, &mut p.event_chance),
            (32, &mut p.land_surprise),
            (44, &mut p.dig_in_max),
            (45, &mut p.dig_in_daily),
        ] {
            f("country", n, v);
        }
        f("mission", 73, &mut p.amphibious_assault);
        f("combat", 165, &mut p.org_friendly_bonus);
        f("combat", 166, &mut p.org_friendly_cap);
        if let Some(x) = misc.get("combat", 167) {
            p.new_org_logic = x == 1.0;
        }
        f("combat", 168, &mut p.org_morale);
        for (w, v) in p.org_weather.iter_mut().enumerate() {
            f("combat", 169 + w, v);
        }
        for (k, v) in p.org_land.iter_mut().enumerate() {
            f("combat", 188 + k, v);
        }
        f("economy", 87, &mut p.supply_distance);
        f("combat", 210, &mut p.no_fuel_travel);
        f("combat", 211, &mut p.fuel_speed);
        f("combat", 27, &mut p.no_supplies_combat);
        f("combat", 30, &mut p.no_fuel_combat);
        f("economy", 63, &mut p.supply_idle);
        f("economy", 64, &mut p.supply_combat);
        f("economy", 65, &mut p.fuel_idle);
        f("economy", 66, &mut p.fuel_combat);
        f("economy", 67, &mut p.air_supply_base);
        f("economy", 69, &mut p.fuel_at_base);
        f("economy", 71, &mut p.naval_supply_port);
        f("economy", 73, &mut p.naval_fuel_idle);
        f("economy", 1, &mut p.ic_to_tc);
        f("economy", 10, &mut p.non_national_ic);
        f("economy", 11, &mut p.non_owned_ic);
        f("economy", 18, &mut p.load_occupied);
        f("economy", 19, &mut p.load_land);
        f("economy", 20, &mut p.load_air);
        f("economy", 21, &mut p.load_naval);
        f("country", 6, &mut p.tc_modifier);
        f("country", 7, &mut p.occupied_tc_modifier);
        f("country", 10, &mut p.country_supply_distance);
        f("mod", 21, &mut p.rebel_org);
        p
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn misc_positions_fill_the_fields() {
        let mut combat = vec!["0"; 263];
        combat[16] = "-0.4"; // combat[17]
        combat[40] = "6"; // combat[41]
        combat[72] = "0.9"; // combat[73]
        combat[234] = "2.5"; // combat[235]
        let text = format!(
            "combat = {{ {} }}\ncountry = {{ 0 0 1.0 }}",
            combat.join(" ")
        );
        let p = Params::from_misc(&Misc::parse(text.as_bytes()));
        assert_eq!(p.surprise, -0.4);
        assert_eq!(p.land_command_limit[2], 6);
        assert_eq!(p.evade_with_defences, 90.0);
        assert_eq!(p.event_damage[0][1], 2.5);
        assert_eq!(p.ground_defence_efficiency, 1.0);
        // Absent from the file: the default.
        assert_eq!(p.dig_in_max, 20.0);
    }
}
