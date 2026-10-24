//! Реєстр ключових слів скрипт-мови Darkest Hour (id → слово).
//!
//! Джерело: `re/RE-scripts.md` (§5 «Повний список токенів — 1669», §2-3 механіка реєстру).
//! Слова реєструються в exe при старті гри (`FUN_0052bb4a`: 249 прямих + 1420 через `FUN_005348d0`);
//! рядок→ID — BST `FUN_00429fa0`, ID→рядок — `FUN_005341fe`/`DAT_00bcc57c` (RE-scripts.md §6).
//! Згенеровано скриптом /tmp/gen_tokens.py — не редагувати вручну.
//!
//! §4 (ключові слова парсера подій): усі 9 одиничних пар (event, sleepevent, event2start,
//! ai_chance, trigger, command, random, queued_events, archivedgameevents) вже входять до §5;
//! діапазонні рядки `0x284/0x285`, `0x3f4..0x3f7`, `0x57a..0x57d` НЕ розгорнуті в окремі
//! записи (розгортання потребувало б домислювання відповідності слово→ID) — див. §4 RE-звіту.

/// Один запис реєстру: числовий ID токена та ключове слово.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct TokenEntry {
    pub id: u16,
    pub name: &'static str,
}

/// Повний реєстр токенів, відсортований за ID.
/// Статичний масив (без HashMap), щоб реєстр працював у no_std-оточенні.
pub static TOKENS: &[TokenEntry] = &[
    // === §5: Ресурси/економіка/торгівля (95) ===
    TokenEntry {
        id: 0x000c,
        name: "convoy",
    },
    TokenEntry {
        id: 0x000d,
        name: "convoypool",
    },
    TokenEntry {
        id: 0x000e,
        name: "escortpool",
    },
    TokenEntry {
        id: 0x0011,
        name: "oilpool",
    },
    TokenEntry {
        id: 0x0012,
        name: "rarematerialspool",
    },
    TokenEntry {
        id: 0x0013,
        name: "moneypool",
    },
    TokenEntry {
        id: 0x0014,
        name: "metalpool",
    },
    TokenEntry {
        id: 0x0015,
        name: "energypool",
    },
    TokenEntry {
        id: 0x0016,
        name: "supplypool",
    },
    TokenEntry {
        id: 0x007f,
        name: "manpowerpool",
    },
    TokenEntry {
        id: 0x0080,
        name: "influence",
    },
    TokenEntry {
        id: 0x001e,
        name: "max_manpower",
    },
    TokenEntry {
        id: 0x001f,
        name: "max_oil",
    },
    TokenEntry {
        id: 0x0020,
        name: "max_metal",
    },
    TokenEntry {
        id: 0x0021,
        name: "max_energy",
    },
    TokenEntry {
        id: 0x0022,
        name: "max_rare_materials",
    },
    TokenEntry {
        id: 0x000b,
        name: "price",
    },
    TokenEntry {
        id: 0x014f,
        name: "consumer",
    },
    TokenEntry {
        id: 0x0150,
        name: "production",
    },
    TokenEntry {
        id: 0x00f6,
        name: "money",
    },
    TokenEntry {
        id: 0x02ab,
        name: "peacetime_ic_mod",
    },
    TokenEntry {
        id: 0x02ac,
        name: "wartime_ic_mod",
    },
    TokenEntry {
        id: 0x02b0,
        name: "resource",
    },
    TokenEntry {
        id: 0x0152,
        name: "reinforcement",
    },
    TokenEntry {
        id: 0x0153,
        name: "upgrading",
    },
    TokenEntry {
        id: 0x01b3,
        name: "manpower",
    },
    TokenEntry {
        id: 0x01e7,
        name: "income",
    },
    TokenEntry {
        id: 0x01ea,
        name: "lastmonthincome",
    },
    TokenEntry {
        id: 0x01eb,
        name: "lastmonthexpense",
    },
    TokenEntry {
        id: 0x01ec,
        name: "lastyearincome",
    },
    TokenEntry {
        id: 0x01ed,
        name: "lastyearexpense",
    },
    TokenEntry {
        id: 0x01ee,
        name: "expense",
    },
    TokenEntry {
        id: 0x01ef,
        name: "thismonthincome",
    },
    TokenEntry {
        id: 0x01f0,
        name: "thismonthexpense",
    },
    TokenEntry {
        id: 0x0201,
        name: "budget",
    },
    TokenEntry {
        id: 0x0237,
        name: "wealth",
    },
    TokenEntry {
        id: 0x0489,
        name: "supply",
    },
    TokenEntry {
        id: 0x048b,
        name: "notsupply",
    },
    TokenEntry {
        id: 0x02c0,
        name: "industry",
    },
    TokenEntry {
        id: 0x037b,
        name: "industrial_multiplier",
    },
    TokenEntry {
        id: 0x037c,
        name: "industrial_modifier",
    },
    TokenEntry {
        id: 0x037d,
        name: "supply_modifier",
    },
    TokenEntry {
        id: 0x037f,
        name: "energy_to_oil",
    },
    TokenEntry {
        id: 0x0380,
        name: "oil_to_rare_materials",
    },
    TokenEntry {
        id: 0x0382,
        name: "supplies",
    },
    TokenEntry {
        id: 0x0234,
        name: "metal",
    },
    TokenEntry {
        id: 0x0232,
        name: "rare_materials",
    },
    TokenEntry {
        id: 0x0233,
        name: "energy",
    },
    TokenEntry {
        id: 0x0025,
        name: "free_transport",
    },
    TokenEntry {
        id: 0x0024,
        name: "free_escort",
    },
    TokenEntry {
        id: 0x0026,
        name: "free_supplies",
    },
    TokenEntry {
        id: 0x0027,
        name: "free_oil",
    },
    TokenEntry {
        id: 0x0028,
        name: "free_ic",
    },
    TokenEntry {
        id: 0x0029,
        name: "free_manpower",
    },
    TokenEntry {
        id: 0x002a,
        name: "free_energy",
    },
    TokenEntry {
        id: 0x002b,
        name: "free_money",
    },
    TokenEntry {
        id: 0x002c,
        name: "free_metal",
    },
    TokenEntry {
        id: 0x002d,
        name: "free_rare_materials",
    },
    TokenEntry {
        id: 0x0452,
        name: "ic_at_war",
    },
    TokenEntry {
        id: 0x0453,
        name: "force_ic_until",
    },
    TokenEntry {
        id: 0x0454,
        name: "ic_end_year",
    },
    TokenEntry {
        id: 0x0493,
        name: "extra_tc",
    },
    TokenEntry {
        id: 0x0494,
        name: "tc_mod",
    },
    TokenEntry {
        id: 0x0495,
        name: "tc_occupied_mod",
    },
    TokenEntry {
        id: 0x0496,
        name: "attrition_mod",
    },
    TokenEntry {
        id: 0x0497,
        name: "trickleback_mod",
    },
    TokenEntry {
        id: 0x0498,
        name: "max_amphib_mod",
    },
    TokenEntry {
        id: 0x0499,
        name: "supply_dist_mod",
    },
    TokenEntry {
        id: 0x049a,
        name: "repair_mod",
    },
    TokenEntry {
        id: 0x049d,
        name: "allow_building",
    },
    TokenEntry {
        id: 0x054d,
        name: "decrease_intelligence_founding",
    },
    TokenEntry {
        id: 0x054e,
        name: "daily_maintenance",
    },
    TokenEntry {
        id: 0x055e,
        name: "do_not_import",
    },
    TokenEntry {
        id: 0x055f,
        name: "do_not_export",
    },
    TokenEntry {
        id: 0x0560,
        name: "stockpile",
    },
    TokenEntry {
        id: 0x0561,
        name: "tradedates",
    },
    TokenEntry {
        id: 0x0562,
        name: "peacetime_stockpile_industry",
    },
    TokenEntry {
        id: 0x0563,
        name: "wartime_stockpile_industry",
    },
    TokenEntry {
        id: 0x0564,
        name: "peacetime_stockpile_oil_and_supp",
    },
    TokenEntry {
        id: 0x0565,
        name: "wartime_stokckpile_oil_and_suppl",
    },
    TokenEntry {
        id: 0x0566,
        name: "auto_trade",
    },
    TokenEntry {
        id: 0x0567,
        name: "auto_trade_reset",
    },
    TokenEntry {
        id: 0x0568,
        name: "import",
    },
    TokenEntry {
        id: 0x0569,
        name: "export",
    },
    TokenEntry {
        id: 0x056a,
        name: "resource_shortage",
    },
    TokenEntry {
        id: 0x0575,
        name: "one_action",
    },
    TokenEntry {
        id: 0x0582,
        name: "reinforce_cost",
    },
    TokenEntry {
        id: 0x0583,
        name: "reinforce_time",
    },
    TokenEntry {
        id: 0x0588,
        name: "demobilize",
    },
    TokenEntry {
        id: 0x068c,
        name: "ic_modifier",
    },
    TokenEntry {
        id: 0x068d,
        name: "oil_modifier",
    },
    TokenEntry {
        id: 0x068e,
        name: "metal_modifier",
    },
    TokenEntry {
        id: 0x068f,
        name: "energy_modifier",
    },
    TokenEntry {
        id: 0x0690,
        name: "rare_materials_modifier",
    },
    TokenEntry {
        id: 0x0691,
        name: "money_modifier",
    },
    // === §5: Загальні ключові слова/поля структур (272) ===
    TokenEntry {
        id: 0x0017,
        name: "persistent",
    },
    TokenEntry {
        id: 0x0019,
        name: "inventions",
    },
    TokenEntry {
        id: 0x001d,
        name: "construct",
    },
    TokenEntry {
        id: 0x0072,
        name: "switch",
    },
    TokenEntry {
        id: 0x0133,
        name: "rules",
    },
    TokenEntry {
        id: 0x0032,
        name: "sunk",
    },
    TokenEntry {
        id: 0x0089,
        name: "path",
    },
    TokenEntry {
        id: 0x00ec,
        name: "country",
    },
    TokenEntry {
        id: 0x00ed,
        name: "unit",
    },
    TokenEntry {
        id: 0x00e9,
        name: "name",
    },
    TokenEntry {
        id: 0x00f1,
        name: "city",
    },
    TokenEntry {
        id: 0x00f2,
        name: "level",
    },
    TokenEntry {
        id: 0x00f4,
        name: "location",
    },
    TokenEntry {
        id: 0x008a,
        name: "replacement",
    },
    TokenEntry {
        id: 0x038b,
        name: "nuke",
    },
    TokenEntry {
        id: 0x038c,
        name: "nukedate",
    },
    TokenEntry {
        id: 0x0081,
        name: "bomber",
    },
    TokenEntry {
        id: 0x00e8,
        name: "history",
    },
    TokenEntry {
        id: 0x025e,
        name: "op_defensive",
    },
    TokenEntry {
        id: 0x025f,
        name: "defensive",
    },
    TokenEntry {
        id: 0x0260,
        name: "exception",
    },
    TokenEntry {
        id: 0x02a5,
        name: "min",
    },
    TokenEntry {
        id: 0x00ea,
        name: "list",
    },
    TokenEntry {
        id: 0x00eb,
        name: "values",
    },
    TokenEntry {
        id: 0x01ad,
        name: "owned",
    },
    TokenEntry {
        id: 0x01af,
        name: "exists",
    },
    TokenEntry {
        id: 0x00f3,
        name: "core",
    },
    TokenEntry {
        id: 0x00ee,
        name: "landunit",
    },
    TokenEntry {
        id: 0x00ef,
        name: "navalunit",
    },
    TokenEntry {
        id: 0x00f0,
        name: "airunit",
    },
    TokenEntry {
        id: 0x010f,
        name: "mine",
    },
    TokenEntry {
        id: 0x0110,
        name: "major",
    },
    TokenEntry {
        id: 0x0111,
        name: "yes",
    },
    TokenEntry {
        id: 0x0112,
        name: "no",
    },
    TokenEntry {
        id: 0x0124,
        name: "controlledprovinces",
    },
    TokenEntry {
        id: 0x0125,
        name: "knownprovinces",
    },
    TokenEntry {
        id: 0x0126,
        name: "ownedprovinces",
    },
    TokenEntry {
        id: 0x0127,
        name: "nationalprovinces",
    },
    TokenEntry {
        id: 0x0128,
        name: "claimedprovinces",
    },
    TokenEntry {
        id: 0x0129,
        name: "locked",
    },
    TokenEntry {
        id: 0x012c,
        name: "capital",
    },
    TokenEntry {
        id: 0x012e,
        name: "rank",
    },
    TokenEntry {
        id: 0x0523,
        name: "id",
    },
    TokenEntry {
        id: 0x002e,
        name: "relative",
    },
    TokenEntry {
        id: 0x0169,
        name: "gim_efficiency",
    },
    TokenEntry {
        id: 0x016c,
        name: "perfect",
    },
    TokenEntry {
        id: 0x016d,
        name: "success",
    },
    TokenEntry {
        id: 0x016e,
        name: "failure",
    },
    TokenEntry {
        id: 0x016f,
        name: "mpi",
    },
    TokenEntry {
        id: 0x017b,
        name: "sea",
    },
    TokenEntry {
        id: 0x0194,
        name: "leadertable",
    },
    TokenEntry {
        id: 0x0198,
        name: "desc",
    },
    TokenEntry {
        id: 0x01a1,
        name: "port",
    },
    TokenEntry {
        id: 0x0137,
        name: "war",
    },
    TokenEntry {
        id: 0x01a2,
        name: "attackers",
    },
    TokenEntry {
        id: 0x01a3,
        name: "defenders",
    },
    TokenEntry {
        id: 0x01a4,
        name: "attackerscore",
    },
    TokenEntry {
        id: 0x01a5,
        name: "defenderscore",
    },
    TokenEntry {
        id: 0x01ab,
        name: "x",
    },
    TokenEntry {
        id: 0x01ac,
        name: "y",
    },
    TokenEntry {
        id: 0x01b0,
        name: "static",
    },
    TokenEntry {
        id: 0x01b1,
        name: "status",
    },
    TokenEntry {
        id: 0x025d,
        name: "offensive",
    },
    TokenEntry {
        id: 0x01b5,
        name: "from",
    },
    TokenEntry {
        id: 0x01b6,
        name: "to",
    },
    TokenEntry {
        id: 0x01b7,
        name: "provinces",
    },
    TokenEntry {
        id: 0x01b8,
        name: "newowners",
    },
    TokenEntry {
        id: 0x01b9,
        name: "cash",
    },
    TokenEntry {
        id: 0x01ba,
        name: "demanding",
    },
    TokenEntry {
        id: 0x01bb,
        name: "seperatefrom",
    },
    TokenEntry {
        id: 0x01bc,
        name: "seperateto",
    },
    TokenEntry {
        id: 0x01bd,
        name: "scheduled",
    },
    TokenEntry {
        id: 0x01c3,
        name: "attacker_position",
    },
    TokenEntry {
        id: 0x01c4,
        name: "defender_position",
    },
    TokenEntry {
        id: 0x01c7,
        name: "hold",
    },
    TokenEntry {
        id: 0x01c8,
        name: "up",
    },
    TokenEntry {
        id: 0x01d2,
        name: "a_years",
    },
    TokenEntry {
        id: 0x01da,
        name: "scenariotactics",
    },
    TokenEntry {
        id: 0x01db,
        name: "countrytactics",
    },
    TokenEntry {
        id: 0x01dc,
        name: "modifiers",
    },
    TokenEntry {
        id: 0x01dd,
        name: "morale",
    },
    TokenEntry {
        id: 0x01e1,
        name: "land_percentage",
    },
    TokenEntry {
        id: 0x01e3,
        name: "air_percentage",
    },
    TokenEntry {
        id: 0x01e2,
        name: "naval_percentage",
    },
    TokenEntry {
        id: 0x01f1,
        name: "province",
    },
    TokenEntry {
        id: 0x01f9,
        name: "ai",
    },
    TokenEntry {
        id: 0x01fa,
        name: "same",
    },
    TokenEntry {
        id: 0x01fb,
        name: "neighbour",
    },
    TokenEntry {
        id: 0x01fc,
        name: "enemies",
    },
    TokenEntry {
        id: 0x01fd,
        name: "empty",
    },
    TokenEntry {
        id: 0x01ae,
        name: "continent",
    },
    TokenEntry {
        id: 0x01ff,
        name: "area",
    },
    TokenEntry {
        id: 0x0200,
        name: "region",
    },
    TokenEntry {
        id: 0x0207,
        name: "liberate",
    },
    TokenEntry {
        id: 0x020a,
        name: "combatlosses",
    },
    TokenEntry {
        id: 0x020b,
        name: "attritionlosses",
    },
    TokenEntry {
        id: 0x020c,
        name: "disbandlosses",
    },
    TokenEntry {
        id: 0x020d,
        name: "minimum",
    },
    TokenEntry {
        id: 0x020e,
        name: "extra",
    },
    TokenEntry {
        id: 0x020f,
        name: "conquerable",
    },
    TokenEntry {
        id: 0x0210,
        name: "annexable",
    },
    TokenEntry {
        id: 0x0211,
        name: "vassalable",
    },
    TokenEntry {
        id: 0x021d,
        name: "countrydifficulty",
    },
    TokenEntry {
        id: 0x021e,
        name: "countryeconomy",
    },
    TokenEntry {
        id: 0x021f,
        name: "countrymilitary",
    },
    TokenEntry {
        id: 0x0220,
        name: "countrydiplomacy",
    },
    TokenEntry {
        id: 0x0223,
        name: "development",
    },
    TokenEntry {
        id: 0x0236,
        name: "eyr",
    },
    TokenEntry {
        id: 0x0238,
        name: "landtech",
    },
    TokenEntry {
        id: 0x0239,
        name: "navaltech",
    },
    TokenEntry {
        id: 0x023a,
        name: "army",
    },
    TokenEntry {
        id: 0x023b,
        name: "navy",
    },
    TokenEntry {
        id: 0x0242,
        name: "intrinsic_gov_type",
    },
    TokenEntry {
        id: 0x0249,
        name: "map",
    },
    TokenEntry {
        id: 0x024a,
        name: "zoom",
    },
    TokenEntry {
        id: 0x0256,
        name: "mod",
    },
    TokenEntry {
        id: 0x048a,
        name: "owner",
    },
    TokenEntry {
        id: 0x048c,
        name: "base",
    },
    TokenEntry {
        id: 0x0228,
        name: "patrol",
    },
    TokenEntry {
        id: 0x00e2,
        name: "ic",
    },
    TokenEntry {
        id: 0x00e3,
        name: "maxic",
    },
    TokenEntry {
        id: 0x0280,
        name: "set_ai_aggresive",
    },
    TokenEntry {
        id: 0x0281,
        name: "set_difficulty",
    },
    TokenEntry {
        id: 0x0282,
        name: "set_gamespeed",
    },
    TokenEntry {
        id: 0x0283,
        name: "set_fow",
    },
    TokenEntry {
        id: 0x0286,
        name: "set_conq_capital",
    },
    TokenEntry {
        id: 0x0288,
        name: "set_basevp",
    },
    TokenEntry {
        id: 0x02a0,
        name: "tax",
    },
    TokenEntry {
        id: 0x02a4,
        name: "max",
    },
    TokenEntry {
        id: 0x02b8,
        name: "difficulty",
    },
    TokenEntry {
        id: 0x02b9,
        name: "double_time",
    },
    TokenEntry {
        id: 0x0115,
        name: "upgrade",
    },
    TokenEntry {
        id: 0x0010,
        name: "under_attack",
    },
    TokenEntry {
        id: 0x0360,
        name: "now",
    },
    TokenEntry {
        id: 0x0369,
        name: "allow_dig_in",
    },
    TokenEntry {
        id: 0x036a,
        name: "nuclear_carrier",
    },
    TokenEntry {
        id: 0x036b,
        name: "missile_carrier",
    },
    TokenEntry {
        id: 0x036c,
        name: "max_reactor_size",
    },
    TokenEntry {
        id: 0x036d,
        name: "nuke_damage",
    },
    TokenEntry {
        id: 0x036e,
        name: "abomb_production",
    },
    TokenEntry {
        id: 0x036f,
        name: "minisub_bonus",
    },
    TokenEntry {
        id: 0x0370,
        name: "surprise",
    },
    TokenEntry {
        id: 0x0371,
        name: "intelligence",
    },
    TokenEntry {
        id: 0x0372,
        name: "army_detection",
    },
    TokenEntry {
        id: 0x0023,
        name: "desperation",
    },
    TokenEntry {
        id: 0x0374,
        name: "land_surprise",
    },
    TokenEntry {
        id: 0x0373,
        name: "air_surprise",
    },
    TokenEntry {
        id: 0x0375,
        name: "naval_surprise",
    },
    TokenEntry {
        id: 0x0377,
        name: "enemy_intelligence",
    },
    TokenEntry {
        id: 0x0376,
        name: "enemy_army_detection",
    },
    TokenEntry {
        id: 0x0378,
        name: "AA_batteries",
    },
    TokenEntry {
        id: 0x0379,
        name: "us",
    },
    TokenEntry {
        id: 0x037a,
        name: "them",
    },
    TokenEntry {
        id: 0x037e,
        name: "AA_efficiency",
    },
    TokenEntry {
        id: 0x0381,
        name: "total",
    },
    TokenEntry {
        id: 0x0383,
        name: "elite",
    },
    TokenEntry {
        id: 0x0384,
        name: "land_fort_eff",
    },
    TokenEntry {
        id: 0x0385,
        name: "coast_fort_eff",
    },
    TokenEntry {
        id: 0x0386,
        name: "convoy_def_eff",
    },
    TokenEntry {
        id: 0x0387,
        name: "ground_def_eff",
    },
    TokenEntry {
        id: 0x0388,
        name: "radar_eff",
    },
    TokenEntry {
        id: 0x0389,
        name: "carrier_level",
    },
    TokenEntry {
        id: 0x038a,
        name: "double_nuke_prod",
    },
    TokenEntry {
        id: 0x0229,
        name: "points",
    },
    TokenEntry {
        id: 0x022a,
        name: "project",
    },
    TokenEntry {
        id: 0x022b,
        name: "alignment",
    },
    TokenEntry {
        id: 0x022c,
        name: "frustration",
    },
    TokenEntry {
        id: 0x022d,
        name: "hate",
    },
    TokenEntry {
        id: 0x0235,
        name: "oil",
    },
    TokenEntry {
        id: 0x0082,
        name: "switch_allegiance",
    },
    TokenEntry {
        id: 0x0083,
        name: "delete_unit",
    },
    TokenEntry {
        id: 0x03bc,
        name: "pattern",
    },
    TokenEntry {
        id: 0x03bd,
        name: "centre",
    },
    TokenEntry {
        id: 0x03be,
        name: "heading",
    },
    TokenEntry {
        id: 0x03bf,
        name: "north",
    },
    TokenEntry {
        id: 0x03c0,
        name: "northeast",
    },
    TokenEntry {
        id: 0x03c1,
        name: "east",
    },
    TokenEntry {
        id: 0x03c2,
        name: "southeast",
    },
    TokenEntry {
        id: 0x03c3,
        name: "south",
    },
    TokenEntry {
        id: 0x03c4,
        name: "southwest",
    },
    TokenEntry {
        id: 0x03c5,
        name: "west",
    },
    TokenEntry {
        id: 0x03c6,
        name: "northwest",
    },
    TokenEntry {
        id: 0x03c7,
        name: "start_pattern",
    },
    TokenEntry {
        id: 0x03c8,
        name: "add_to_pattern",
    },
    TokenEntry {
        id: 0x03c9,
        name: "end_pattern",
    },
    TokenEntry {
        id: 0x03ca,
        name: "set_ground",
    },
    TokenEntry {
        id: 0x03cb,
        name: "conversion",
    },
    TokenEntry {
        id: 0x03d0,
        name: "revoltriskdate",
    },
    TokenEntry {
        id: 0x03d1,
        name: "inherit",
    },
    TokenEntry {
        id: 0x03d6,
        name: "flag",
    },
    TokenEntry {
        id: 0x03fb,
        name: "intel_diff",
    },
    TokenEntry {
        id: 0x000f,
        name: "home",
    },
    TokenEntry {
        id: 0x022f,
        name: "axis",
    },
    TokenEntry {
        id: 0x049e,
        name: "info_may_cause",
    },
    TokenEntry {
        id: 0x049f,
        name: "gas_attack",
    },
    TokenEntry {
        id: 0x04a0,
        name: "gas_protection",
    },
    TokenEntry {
        id: 0x04a1,
        name: "activate",
    },
    TokenEntry {
        id: 0x04a2,
        name: "task_efficiency",
    },
    TokenEntry {
        id: 0x04a3,
        name: "add_prov_resource",
    },
    TokenEntry {
        id: 0x04a4,
        name: "max_positioning",
    },
    TokenEntry {
        id: 0x04a5,
        name: "min_positioning",
    },
    TokenEntry {
        id: 0x0298,
        name: "done",
    },
    TokenEntry {
        id: 0x0299,
        name: "days",
    },
    TokenEntry {
        id: 0x04ea,
        name: "idle",
    },
    TokenEntry {
        id: 0x04ed,
        name: "isnaval",
    },
    TokenEntry {
        id: 0x04ef,
        name: "unitleader",
    },
    TokenEntry {
        id: 0x0506,
        name: "home_defence",
    },
    TokenEntry {
        id: 0x0507,
        name: "naval_asw",
    },
    TokenEntry {
        id: 0x0508,
        name: "naval_anti_air_s",
    },
    TokenEntry {
        id: 0x0509,
        name: "naval_radar_s",
    },
    TokenEntry {
        id: 0x050a,
        name: "naval_fire_controll_s",
    },
    TokenEntry {
        id: 0x050b,
        name: "naval_improved_hull_s",
    },
    TokenEntry {
        id: 0x050c,
        name: "naval_torpedoes_s",
    },
    TokenEntry {
        id: 0x050d,
        name: "naval_anti_air_l",
    },
    TokenEntry {
        id: 0x050e,
        name: "naval_radar_l",
    },
    TokenEntry {
        id: 0x050f,
        name: "naval_fire_controll_l",
    },
    TokenEntry {
        id: 0x0510,
        name: "naval_improved_hull_l",
    },
    TokenEntry {
        id: 0x0511,
        name: "naval_torpedoes_l",
    },
    TokenEntry {
        id: 0x0512,
        name: "brigade_model1",
    },
    TokenEntry {
        id: 0x0513,
        name: "brigade_model2",
    },
    TokenEntry {
        id: 0x0514,
        name: "brigade_model3",
    },
    TokenEntry {
        id: 0x0515,
        name: "brigade_model4",
    },
    TokenEntry {
        id: 0x0516,
        name: "brigade_model5",
    },
    TokenEntry {
        id: 0x0517,
        name: "extra1",
    },
    TokenEntry {
        id: 0x0518,
        name: "extra2",
    },
    TokenEntry {
        id: 0x0519,
        name: "extra3",
    },
    TokenEntry {
        id: 0x051a,
        name: "extra4",
    },
    TokenEntry {
        id: 0x051b,
        name: "extra5",
    },
    TokenEntry {
        id: 0x051f,
        name: "brig_upgr_progress1",
    },
    TokenEntry {
        id: 0x0520,
        name: "brig_upgr_progress2",
    },
    TokenEntry {
        id: 0x0521,
        name: "brig_upgr_progress3",
    },
    TokenEntry {
        id: 0x0522,
        name: "brig_upgr_progress4",
    },
    TokenEntry {
        id: 0x054f,
        name: "defence",
    },
    TokenEntry {
        id: 0x0550,
        name: "diplomacy_chances",
    },
    TokenEntry {
        id: 0x0551,
        name: "diplomacy_cost",
    },
    TokenEntry {
        id: 0x0552,
        name: "intelligence_chances",
    },
    TokenEntry {
        id: 0x0553,
        name: "intelligence_cost",
    },
    TokenEntry {
        id: 0x0554,
        name: "intelligence_report",
    },
    TokenEntry {
        id: 0x0555,
        name: "intelligence_network",
    },
    TokenEntry {
        id: 0x0557,
        name: "detection",
    },
    TokenEntry {
        id: 0x0558,
        name: "weak_target",
    },
    TokenEntry {
        id: 0x0559,
        name: "same_alignment",
    },
    TokenEntry {
        id: 0x055a,
        name: "opposite_alignment",
    },
    TokenEntry {
        id: 0x055b,
        name: "democracies",
    },
    TokenEntry {
        id: 0x055c,
        name: "dictatorships",
    },
    TokenEntry {
        id: 0x055d,
        name: "close_government_type",
    },
    TokenEntry {
        id: 0x056b,
        name: "max_allowed_brigades",
    },
    TokenEntry {
        id: 0x056c,
        name: "tz",
    },
    TokenEntry {
        id: 0x056d,
        name: "ac",
    },
    TokenEntry {
        id: 0x056e,
        name: "rb",
    },
    TokenEntry {
        id: 0x056f,
        name: "dc",
    },
    TokenEntry {
        id: 0x0570,
        name: "org",
    },
    TokenEntry {
        id: 0x0572,
        name: "nuked",
    },
    TokenEntry {
        id: 0x0573,
        name: "flag_ext",
    },
    TokenEntry {
        id: 0x0576,
        name: "min_extra",
    },
    TokenEntry {
        id: 0x0584,
        name: "out_of_fuel_speed",
    },
    TokenEntry {
        id: 0x0585,
        name: "brig",
    },
    TokenEntry {
        id: 0x0586,
        name: "no_supplies_combat_mod",
    },
    TokenEntry {
        id: 0x0587,
        name: "no_fuel_combat_mod",
    },
    TokenEntry {
        id: 0x058a,
        name: "ry",
    },
    TokenEntry {
        id: 0x0594,
        name: "transmute",
    },
    TokenEntry {
        id: 0x066b,
        name: "speed_cap",
    },
    TokenEntry {
        id: 0x0686,
        name: "remove_units",
    },
    TokenEntry {
        id: 0x0687,
        name: "add_brigade",
    },
    TokenEntry {
        id: 0x0692,
        name: "add_core_area",
    },
    TokenEntry {
        id: 0x0693,
        name: "add_core_region",
    },
    TokenEntry {
        id: 0x0694,
        name: "remove_core_area",
    },
    TokenEntry {
        id: 0x0695,
        name: "remove_core_region",
    },
    TokenEntry {
        id: 0x0696,
        name: "add_claim_area",
    },
    TokenEntry {
        id: 0x0697,
        name: "add_claim_region",
    },
    TokenEntry {
        id: 0x0698,
        name: "remove_claim_area",
    },
    TokenEntry {
        id: 0x0699,
        name: "remove_claim_region",
    },
    // === §5: Технології/дослідження/моделі (153) ===
    TokenEntry {
        id: 0x0018,
        name: "invention",
    },
    TokenEntry {
        id: 0x001a,
        name: "is_tech_active",
    },
    TokenEntry {
        id: 0x0034,
        name: "blueprints",
    },
    TokenEntry {
        id: 0x02dc,
        name: "naval_artillery",
    },
    TokenEntry {
        id: 0x02dd,
        name: "naval_training",
    },
    TokenEntry {
        id: 0x02de,
        name: "aircraft_testing",
    },
    TokenEntry {
        id: 0x02df,
        name: "fighter_tactics",
    },
    TokenEntry {
        id: 0x02e0,
        name: "bomber_tactics",
    },
    TokenEntry {
        id: 0x02e3,
        name: "large_taskforce_tactics",
    },
    TokenEntry {
        id: 0x02e4,
        name: "small_taskforce_tactics",
    },
    TokenEntry {
        id: 0x02e5,
        name: "seamanship",
    },
    TokenEntry {
        id: 0x02e6,
        name: "piloting",
    },
    TokenEntry {
        id: 0x02e1,
        name: "carrier_tactics",
    },
    TokenEntry {
        id: 0x02e2,
        name: "submarine_tactics",
    },
    TokenEntry {
        id: 0x02e7,
        name: "avionics",
    },
    TokenEntry {
        id: 0x02e8,
        name: "munitions",
    },
    TokenEntry {
        id: 0x02e9,
        name: "vehicle_engineering",
    },
    TokenEntry {
        id: 0x02ea,
        name: "carrier_design",
    },
    TokenEntry {
        id: 0x02eb,
        name: "submarine_design",
    },
    TokenEntry {
        id: 0x02ec,
        name: "fighter_design",
    },
    TokenEntry {
        id: 0x02ed,
        name: "bomber_design",
    },
    TokenEntry {
        id: 0x02ee,
        name: "mountain_training",
    },
    TokenEntry {
        id: 0x02ef,
        name: "airborne_training",
    },
    TokenEntry {
        id: 0x02f0,
        name: "marine_training",
    },
    TokenEntry {
        id: 0x02f1,
        name: "maneuver_tactics",
    },
    TokenEntry {
        id: 0x02f2,
        name: "blitzkrieg_tactics",
    },
    TokenEntry {
        id: 0x02f3,
        name: "static_defense_tactics",
    },
    TokenEntry {
        id: 0x02f4,
        name: "medicine",
    },
    TokenEntry {
        id: 0x02f5,
        name: "cavalry_tactics",
    },
    TokenEntry {
        id: 0x02f6,
        name: "rt_user_1",
    },
    TokenEntry {
        id: 0x02f7,
        name: "rt_user_2",
    },
    TokenEntry {
        id: 0x02f8,
        name: "rt_user_3",
    },
    TokenEntry {
        id: 0x02f9,
        name: "rt_user_4",
    },
    TokenEntry {
        id: 0x02fa,
        name: "rt_user_5",
    },
    TokenEntry {
        id: 0x02fb,
        name: "rt_user_6",
    },
    TokenEntry {
        id: 0x02fc,
        name: "rt_user_7",
    },
    TokenEntry {
        id: 0x02fd,
        name: "rt_user_8",
    },
    TokenEntry {
        id: 0x02fe,
        name: "rt_user_9",
    },
    TokenEntry {
        id: 0x02ff,
        name: "rt_user_10",
    },
    TokenEntry {
        id: 0x0300,
        name: "rt_user_11",
    },
    TokenEntry {
        id: 0x0301,
        name: "rt_user_12",
    },
    TokenEntry {
        id: 0x0302,
        name: "rt_user_13",
    },
    TokenEntry {
        id: 0x0303,
        name: "rt_user_14",
    },
    TokenEntry {
        id: 0x0304,
        name: "rt_user_15",
    },
    TokenEntry {
        id: 0x0305,
        name: "rt_user_16",
    },
    TokenEntry {
        id: 0x0306,
        name: "rt_user_17",
    },
    TokenEntry {
        id: 0x0307,
        name: "rt_user_18",
    },
    TokenEntry {
        id: 0x0308,
        name: "rt_user_19",
    },
    TokenEntry {
        id: 0x0309,
        name: "rt_user_20",
    },
    TokenEntry {
        id: 0x030a,
        name: "rt_user_21",
    },
    TokenEntry {
        id: 0x030b,
        name: "rt_user_22",
    },
    TokenEntry {
        id: 0x030c,
        name: "rt_user_23",
    },
    TokenEntry {
        id: 0x030d,
        name: "rt_user_24",
    },
    TokenEntry {
        id: 0x030e,
        name: "rt_user_25",
    },
    TokenEntry {
        id: 0x030f,
        name: "rt_user_26",
    },
    TokenEntry {
        id: 0x0310,
        name: "rt_user_27",
    },
    TokenEntry {
        id: 0x0311,
        name: "rt_user_28",
    },
    TokenEntry {
        id: 0x0312,
        name: "rt_user_29",
    },
    TokenEntry {
        id: 0x0313,
        name: "rt_user_30",
    },
    TokenEntry {
        id: 0x0314,
        name: "rt_user_31",
    },
    TokenEntry {
        id: 0x0315,
        name: "rt_user_32",
    },
    TokenEntry {
        id: 0x0316,
        name: "rt_user_33",
    },
    TokenEntry {
        id: 0x0317,
        name: "rt_user_34",
    },
    TokenEntry {
        id: 0x0318,
        name: "rt_user_35",
    },
    TokenEntry {
        id: 0x0319,
        name: "rt_user_36",
    },
    TokenEntry {
        id: 0x031a,
        name: "rt_user_37",
    },
    TokenEntry {
        id: 0x031b,
        name: "rt_user_38",
    },
    TokenEntry {
        id: 0x031c,
        name: "rt_user_39",
    },
    TokenEntry {
        id: 0x031d,
        name: "rt_user_40",
    },
    TokenEntry {
        id: 0x031e,
        name: "rt_user_41",
    },
    TokenEntry {
        id: 0x031f,
        name: "rt_user_42",
    },
    TokenEntry {
        id: 0x0320,
        name: "rt_user_43",
    },
    TokenEntry {
        id: 0x0321,
        name: "rt_user_44",
    },
    TokenEntry {
        id: 0x0322,
        name: "rt_user_45",
    },
    TokenEntry {
        id: 0x0323,
        name: "rt_user_46",
    },
    TokenEntry {
        id: 0x0324,
        name: "rt_user_47",
    },
    TokenEntry {
        id: 0x0325,
        name: "rt_user_48",
    },
    TokenEntry {
        id: 0x0326,
        name: "rt_user_49",
    },
    TokenEntry {
        id: 0x0327,
        name: "rt_user_50",
    },
    TokenEntry {
        id: 0x0328,
        name: "rt_user_51",
    },
    TokenEntry {
        id: 0x0329,
        name: "rt_user_52",
    },
    TokenEntry {
        id: 0x032a,
        name: "rt_user_53",
    },
    TokenEntry {
        id: 0x032b,
        name: "rt_user_54",
    },
    TokenEntry {
        id: 0x032c,
        name: "rt_user_55",
    },
    TokenEntry {
        id: 0x032d,
        name: "rt_user_56",
    },
    TokenEntry {
        id: 0x032e,
        name: "rt_user_57",
    },
    TokenEntry {
        id: 0x032f,
        name: "rt_user_58",
    },
    TokenEntry {
        id: 0x0330,
        name: "rt_user_59",
    },
    TokenEntry {
        id: 0x0331,
        name: "rt_user_60",
    },
    TokenEntry {
        id: 0x0142,
        name: "research_types",
    },
    TokenEntry {
        id: 0x014b,
        name: "tech_sharing",
    },
    TokenEntry {
        id: 0x0151,
        name: "research",
    },
    TokenEntry {
        id: 0x02ba,
        name: "component",
    },
    TokenEntry {
        id: 0x02bd,
        name: "technology",
    },
    TokenEntry {
        id: 0x02be,
        name: "tech_team",
    },
    TokenEntry {
        id: 0x02bf,
        name: "team_slots",
    },
    TokenEntry {
        id: 0x02c1,
        name: "aircraft",
    },
    TokenEntry {
        id: 0x02c2,
        name: "heavy_aircraft",
    },
    TokenEntry {
        id: 0x02c3,
        name: "light_aircraft",
    },
    TokenEntry {
        id: 0x02c4,
        name: "nuclear",
    },
    TokenEntry {
        id: 0x02c5,
        name: "rocket",
    },
    TokenEntry {
        id: 0x02c6,
        name: "electronics",
    },
    TokenEntry {
        id: 0x02c7,
        name: "mechanics",
    },
    TokenEntry {
        id: 0x02c8,
        name: "chemistry",
    },
    TokenEntry {
        id: 0x02c9,
        name: "training",
    },
    TokenEntry {
        id: 0x02ca,
        name: "general_equipment",
    },
    TokenEntry {
        id: 0x02cb,
        name: "rocketry",
    },
    TokenEntry {
        id: 0x02cc,
        name: "naval_engineering",
    },
    TokenEntry {
        id: 0x02cd,
        name: "aeronautics",
    },
    TokenEntry {
        id: 0x02ce,
        name: "nuclear_physics",
    },
    TokenEntry {
        id: 0x02cf,
        name: "nuclear_engineering",
    },
    TokenEntry {
        id: 0x02d0,
        name: "management",
    },
    TokenEntry {
        id: 0x02d1,
        name: "industrial_engineering",
    },
    TokenEntry {
        id: 0x02d2,
        name: "mathematics",
    },
    TokenEntry {
        id: 0x02d3,
        name: "infantry_focus",
    },
    TokenEntry {
        id: 0x02d4,
        name: "small_unit_tactics",
    },
    TokenEntry {
        id: 0x02d5,
        name: "centralized_execution",
    },
    TokenEntry {
        id: 0x02d6,
        name: "decentralized_execution",
    },
    TokenEntry {
        id: 0x02d7,
        name: "technical_efficiency",
    },
    TokenEntry {
        id: 0x02d8,
        name: "large_unit_tactics",
    },
    TokenEntry {
        id: 0x02db,
        name: "large_unit_focus",
    },
    TokenEntry {
        id: 0x02d9,
        name: "individual_courage",
    },
    TokenEntry {
        id: 0x02da,
        name: "combined_arms_focus",
    },
    TokenEntry {
        id: 0x0332,
        name: "land_doctrines",
    },
    TokenEntry {
        id: 0x0333,
        name: "air_doctrines",
    },
    TokenEntry {
        id: 0x0334,
        name: "naval_doctrines",
    },
    TokenEntry {
        id: 0x0335,
        name: "secret_weapons",
    },
    TokenEntry {
        id: 0x0336,
        name: "fantasy_secret_weapons",
    },
    TokenEntry {
        id: 0x0337,
        name: "number",
    },
    TokenEntry {
        id: 0x0338,
        name: "application",
    },
    TokenEntry {
        id: 0x0339,
        name: "required",
    },
    TokenEntry {
        id: 0x033a,
        name: "OR_required",
    },
    TokenEntry {
        id: 0x033b,
        name: "chance",
    },
    TokenEntry {
        id: 0x033c,
        name: "time",
    },
    TokenEntry {
        id: 0x033d,
        name: "pos_offset",
    },
    TokenEntry {
        id: 0x033e,
        name: "neg_offset",
    },
    TokenEntry {
        id: 0x033f,
        name: "effects",
    },
    TokenEntry {
        id: 0x0340,
        name: "ongoing",
    },
    TokenEntry {
        id: 0x0113,
        name: "techlevels",
    },
    TokenEntry {
        id: 0x0114,
        name: "techapps",
    },
    TokenEntry {
        id: 0x0116,
        name: "allowed_divisions",
    },
    TokenEntry {
        id: 0x0117,
        name: "allowed_brigades",
    },
    TokenEntry {
        id: 0x0118,
        name: "allowed_buildings",
    },
    TokenEntry {
        id: 0x0119,
        name: "building_prod_mod",
    },
    TokenEntry {
        id: 0x011a,
        name: "convoy_prod_mod",
    },
    TokenEntry {
        id: 0x0406,
        name: "steal_tech",
    },
    TokenEntry {
        id: 0x0407,
        name: "gain_tech",
    },
    TokenEntry {
        id: 0x0408,
        name: "research_sabotaged",
    },
    TokenEntry {
        id: 0x047d,
        name: "start_research",
    },
    TokenEntry {
        id: 0x047e,
        name: "prio_research",
    },
    TokenEntry {
        id: 0x049b,
        name: "scrap_model",
    },
    TokenEntry {
        id: 0x049c,
        name: "research_mod",
    },
    TokenEntry {
        id: 0x04fd,
        name: "disrupt_techteam",
    },
    // === §5: Інтерфейс/графіка/музика (50) ===
    TokenEntry {
        id: 0x0243,
        name: "all",
    },
    TokenEntry {
        id: 0x0244,
        name: "top",
    },
    TokenEntry {
        id: 0x0245,
        name: "bottom",
    },
    TokenEntry {
        id: 0x0259,
        name: "panel",
    },
    TokenEntry {
        id: 0x0492,
        name: "independence",
    },
    TokenEntry {
        id: 0x0073,
        name: "avi",
    },
    TokenEntry {
        id: 0x0074,
        name: "songs",
    },
    TokenEntry {
        id: 0x0055,
        name: "label",
    },
    TokenEntry {
        id: 0x0199,
        name: "picture",
    },
    TokenEntry {
        id: 0x01a6,
        name: "sprite",
    },
    TokenEntry {
        id: 0x01a7,
        name: "bitmap",
    },
    TokenEntry {
        id: 0x01a8,
        name: "origin",
    },
    TokenEntry {
        id: 0x01a9,
        name: "frames",
    },
    TokenEntry {
        id: 0x01aa,
        name: "speed",
    },
    TokenEntry {
        id: 0x01b2,
        name: "palette",
    },
    TokenEntry {
        id: 0x01be,
        name: "background",
    },
    TokenEntry {
        id: 0x01bf,
        name: "shortcut",
    },
    TokenEntry {
        id: 0x01c0,
        name: "upper",
    },
    TokenEntry {
        id: 0x01c1,
        name: "lower",
    },
    TokenEntry {
        id: 0x01c2,
        name: "position",
    },
    TokenEntry {
        id: 0x01c5,
        name: "lighted",
    },
    TokenEntry {
        id: 0x01c6,
        name: "press",
    },
    TokenEntry {
        id: 0x01c9,
        name: "shadow",
    },
    TokenEntry {
        id: 0x01ca,
        name: "shadow_fascist",
    },
    TokenEntry {
        id: 0x01cb,
        name: "shadow_communist",
    },
    TokenEntry {
        id: 0x01cc,
        name: "shadow_LC",
    },
    TokenEntry {
        id: 0x01cd,
        name: "shadow_CE",
    },
    TokenEntry {
        id: 0x01ce,
        name: "shadow_RS",
    },
    TokenEntry {
        id: 0x01e4,
        name: "percentage",
    },
    TokenEntry {
        id: 0x01e5,
        name: "ledger",
    },
    TokenEntry {
        id: 0x01e6,
        name: "opinion",
    },
    TokenEntry {
        id: 0x01e8,
        name: "military",
    },
    TokenEntry {
        id: 0x01e9,
        name: "economy",
    },
    TokenEntry {
        id: 0x0212,
        name: "transparency",
    },
    TokenEntry {
        id: 0x0213,
        name: "opacity",
    },
    TokenEntry {
        id: 0x023c,
        name: "size",
    },
    TokenEntry {
        id: 0x0246,
        name: "interface",
    },
    TokenEntry {
        id: 0x0247,
        name: "mouse",
    },
    TokenEntry {
        id: 0x0248,
        name: "mapmode",
    },
    TokenEntry {
        id: 0x024b,
        name: "state",
    },
    TokenEntry {
        id: 0x024c,
        name: "units",
    },
    TokenEntry {
        id: 0x024d,
        name: "cover",
    },
    TokenEntry {
        id: 0x024e,
        name: "combat",
    },
    TokenEntry {
        id: 0x024f,
        name: "movetime",
    },
    TokenEntry {
        id: 0x0250,
        name: "retreat",
    },
    TokenEntry {
        id: 0x0251,
        name: "wardates",
    },
    TokenEntry {
        id: 0x0253,
        name: "playername",
    },
    TokenEntry {
        id: 0x0255,
        name: "gametype",
    },
    TokenEntry {
        id: 0x0592,
        name: "short_name",
    },
    TokenEntry {
        id: 0x0593,
        name: "short_desc",
    },
    // === §5: Характеристики юнітів/бойові параметри (109) ===
    TokenEntry {
        id: 0x002f,
        name: "activate_division",
    },
    TokenEntry {
        id: 0x00bc,
        name: "strength",
    },
    TokenEntry {
        id: 0x00bd,
        name: "max_strength",
    },
    TokenEntry {
        id: 0x00be,
        name: "organisation",
    },
    TokenEntry {
        id: 0x00bf,
        name: "buildtime",
    },
    TokenEntry {
        id: 0x00c0,
        name: "cost",
    },
    TokenEntry {
        id: 0x00c1,
        name: "maxspeed",
    },
    TokenEntry {
        id: 0x00c2,
        name: "speed_cap_art",
    },
    TokenEntry {
        id: 0x00c3,
        name: "speed_cap_eng",
    },
    TokenEntry {
        id: 0x00c5,
        name: "speed_cap_aa",
    },
    TokenEntry {
        id: 0x00c4,
        name: "speed_cap_at",
    },
    TokenEntry {
        id: 0x00c6,
        name: "supplyconsumption",
    },
    TokenEntry {
        id: 0x00c7,
        name: "fuelconsumption",
    },
    TokenEntry {
        id: 0x00c8,
        name: "toughness",
    },
    TokenEntry {
        id: 0x00c9,
        name: "defensiveness",
    },
    TokenEntry {
        id: 0x00ca,
        name: "softness",
    },
    TokenEntry {
        id: 0x00cb,
        name: "suppression",
    },
    TokenEntry {
        id: 0x00cc,
        name: "airdefence",
    },
    TokenEntry {
        id: 0x00cd,
        name: "softattack",
    },
    TokenEntry {
        id: 0x00ce,
        name: "hardattack",
    },
    TokenEntry {
        id: 0x00cf,
        name: "transportweight",
    },
    TokenEntry {
        id: 0x00d0,
        name: "airattack",
    },
    TokenEntry {
        id: 0x00d1,
        name: "defaultorganisation",
    },
    TokenEntry {
        id: 0x00d2,
        name: "surfacedetectioncapability",
    },
    TokenEntry {
        id: 0x00d3,
        name: "airdetectioncapability",
    },
    TokenEntry {
        id: 0x00d4,
        name: "subdetectioncapability",
    },
    TokenEntry {
        id: 0x00d5,
        name: "surfacedefence",
    },
    TokenEntry {
        id: 0x00d6,
        name: "strategicattack",
    },
    TokenEntry {
        id: 0x00d7,
        name: "navalattack",
    },
    TokenEntry {
        id: 0x00d8,
        name: "range",
    },
    TokenEntry {
        id: 0x00d9,
        name: "travelled",
    },
    TokenEntry {
        id: 0x00da,
        name: "visibility",
    },
    TokenEntry {
        id: 0x00db,
        name: "seadefence",
    },
    TokenEntry {
        id: 0x00dc,
        name: "seaattack",
    },
    TokenEntry {
        id: 0x00dd,
        name: "subattack",
    },
    TokenEntry {
        id: 0x00de,
        name: "convoyattack",
    },
    TokenEntry {
        id: 0x00df,
        name: "shorebombardment",
    },
    TokenEntry {
        id: 0x00e0,
        name: "transportcapability",
    },
    TokenEntry {
        id: 0x00e1,
        name: "none",
    },
    TokenEntry {
        id: 0x012a,
        name: "lock_division",
    },
    TokenEntry {
        id: 0x012b,
        name: "unlock_division",
    },
    TokenEntry {
        id: 0x017d,
        name: "dig_in",
    },
    TokenEntry {
        id: 0x011b,
        name: "mission_efficiency",
    },
    TokenEntry {
        id: 0x0341,
        name: "model",
    },
    TokenEntry {
        id: 0x0342,
        name: "brigade_model",
    },
    TokenEntry {
        id: 0x0343,
        name: "models",
    },
    TokenEntry {
        id: 0x0344,
        name: "obsolete_models",
    },
    TokenEntry {
        id: 0x0345,
        name: "when",
    },
    TokenEntry {
        id: 0x0346,
        name: "where",
    },
    TokenEntry {
        id: 0x0347,
        name: "ai_chance",
    },
    TokenEntry {
        id: 0x0348,
        name: "soft_attack",
    },
    TokenEntry {
        id: 0x034b,
        name: "hard_attack",
    },
    TokenEntry {
        id: 0x034c,
        name: "naval_attack",
    },
    TokenEntry {
        id: 0x034f,
        name: "naval_defense",
    },
    TokenEntry {
        id: 0x034d,
        name: "strategic_attack",
    },
    TokenEntry {
        id: 0x034e,
        name: "ground_defense",
    },
    TokenEntry {
        id: 0x0350,
        name: "air_attack",
    },
    TokenEntry {
        id: 0x0349,
        name: "sub_attack",
    },
    TokenEntry {
        id: 0x034a,
        name: "convoy_attack",
    },
    TokenEntry {
        id: 0x0351,
        name: "air_defense",
    },
    TokenEntry {
        id: 0x0352,
        name: "build_cost",
    },
    TokenEntry {
        id: 0x0353,
        name: "build_time",
    },
    TokenEntry {
        id: 0x0354,
        name: "upgrade_time_factor",
    },
    TokenEntry {
        id: 0x0355,
        name: "upgrade_cost_factor",
    },
    TokenEntry {
        id: 0x0356,
        name: "max_organization",
    },
    TokenEntry {
        id: 0x0357,
        name: "transport_weight",
    },
    TokenEntry {
        id: 0x0358,
        name: "supply_consumption",
    },
    TokenEntry {
        id: 0x0359,
        name: "fuel_consumption",
    },
    TokenEntry {
        id: 0x035a,
        name: "air_detection",
    },
    TokenEntry {
        id: 0x035b,
        name: "sub_detection",
    },
    TokenEntry {
        id: 0x035c,
        name: "surface_detection",
    },
    TokenEntry {
        id: 0x035e,
        name: "aircraft_capacity",
    },
    TokenEntry {
        id: 0x035f,
        name: "aircraftcapacity",
    },
    TokenEntry {
        id: 0x035d,
        name: "transport_capacity",
    },
    TokenEntry {
        id: 0x0361,
        name: "on_upgrade",
    },
    TokenEntry {
        id: 0x0362,
        name: "new_model",
    },
    TokenEntry {
        id: 0x0363,
        name: "redep_target",
    },
    TokenEntry {
        id: 0x0364,
        name: "redep_unit_name",
    },
    TokenEntry {
        id: 0x0365,
        name: "redep_unit_leader",
    },
    TokenEntry {
        id: 0x0366,
        name: "activate_unit_type",
    },
    TokenEntry {
        id: 0x0367,
        name: "deactivate_unit_type",
    },
    TokenEntry {
        id: 0x0368,
        name: "relative_manpower",
    },
    TokenEntry {
        id: 0x0085,
        name: "skill",
    },
    TokenEntry {
        id: 0x0086,
        name: "max_skill",
    },
    TokenEntry {
        id: 0x0088,
        name: "loyalty",
    },
    TokenEntry {
        id: 0x0087,
        name: "experience",
    },
    TokenEntry {
        id: 0x044d,
        name: "max_factor",
    },
    TokenEntry {
        id: 0x044e,
        name: "max_AA_level",
    },
    TokenEntry {
        id: 0x044f,
        name: "max_coastal_level",
    },
    TokenEntry {
        id: 0x0450,
        name: "fort_borders",
    },
    TokenEntry {
        id: 0x0451,
        name: "max_land_level",
    },
    TokenEntry {
        id: 0x04a7,
        name: "can_upgrade",
    },
    TokenEntry {
        id: 0x04a8,
        name: "can_reinforce",
    },
    TokenEntry {
        id: 0x04e9,
        name: "reorganize",
    },
    TokenEntry {
        id: 0x04eb,
        name: "battlehistory",
    },
    TokenEntry {
        id: 0x04ec,
        name: "maxdivisions",
    },
    TokenEntry {
        id: 0x04ee,
        name: "recordedbattle",
    },
    TokenEntry {
        id: 0x04f0,
        name: "stillactive",
    },
    TokenEntry {
        id: 0x04f2,
        name: "winner",
    },
    TokenEntry {
        id: 0x04f3,
        name: "tobedeleted",
    },
    TokenEntry {
        id: 0x0589,
        name: "detachable",
    },
    TokenEntry {
        id: 0x058b,
        name: "strength_cap",
    },
    TokenEntry {
        id: 0x066c,
        name: "brig_modifiers",
    },
    TokenEntry {
        id: 0x0680,
        name: "losses",
    },
    TokenEntry {
        id: 0x0682,
        name: "redep_unit_id",
    },
    TokenEntry {
        id: 0x0683,
        name: "front_leader_home",
    },
    TokenEntry {
        id: 0x0684,
        name: "front_leader_overseas",
    },
    TokenEntry {
        id: 0x068a,
        name: "dig_in_max",
    },
    TokenEntry {
        id: 0x068b,
        name: "dig_in_daily",
    },
    // === §5: Політика/ідеології/уряд (44) ===
    TokenEntry {
        id: 0x042c,
        name: "active",
    },
    TokenEntry {
        id: 0x006a,
        name: "neutrality",
    },
    TokenEntry {
        id: 0x010e,
        name: "stability",
    },
    TokenEntry {
        id: 0x025c,
        name: "policy",
    },
    TokenEntry {
        id: 0x01cf,
        name: "ruling",
    },
    TokenEntry {
        id: 0x01d0,
        name: "cabinet_a",
    },
    TokenEntry {
        id: 0x01d1,
        name: "cabinet_b",
    },
    TokenEntry {
        id: 0x01d4,
        name: "cabinet",
    },
    TokenEntry {
        id: 0x01de,
        name: "populationgrowth",
    },
    TokenEntry {
        id: 0x0204,
        name: "population",
    },
    TokenEntry {
        id: 0x0206,
        name: "revolt",
    },
    TokenEntry {
        id: 0x02b1,
        name: "nationalism",
    },
    TokenEntry {
        id: 0x02b2,
        name: "belligerence",
    },
    TokenEntry {
        id: 0x0084,
        name: "dissent",
    },
    TokenEntry {
        id: 0x025b,
        name: "culture",
    },
    TokenEntry {
        id: 0x03cc,
        name: "domestic",
    },
    TokenEntry {
        id: 0x03cd,
        name: "set_domestic",
    },
    TokenEntry {
        id: 0x03ce,
        name: "change_policy",
    },
    TokenEntry {
        id: 0x03cf,
        name: "revoltrisk",
    },
    TokenEntry {
        id: 0x03fc,
        name: "government",
    },
    TokenEntry {
        id: 0x0400,
        name: "regime_falls",
    },
    TokenEntry {
        id: 0x0404,
        name: "resistance",
    },
    TokenEntry {
        id: 0x0405,
        name: "civil_war",
    },
    TokenEntry {
        id: 0x0409,
        name: "fascist",
    },
    TokenEntry {
        id: 0x040a,
        name: "communist",
    },
    TokenEntry {
        id: 0x040b,
        name: "democratic",
    },
    TokenEntry {
        id: 0x040c,
        name: "political_left",
    },
    TokenEntry {
        id: 0x040d,
        name: "freedom",
    },
    TokenEntry {
        id: 0x040e,
        name: "free_market",
    },
    TokenEntry {
        id: 0x040f,
        name: "professional_army",
    },
    TokenEntry {
        id: 0x0410,
        name: "defense_lobby",
    },
    TokenEntry {
        id: 0x0411,
        name: "interventionism",
    },
    TokenEntry {
        id: 0x0412,
        name: "detect_units",
    },
    TokenEntry {
        id: 0x0415,
        name: "flak",
    },
    TokenEntry {
        id: 0x0422,
        name: "ideology",
    },
    TokenEntry {
        id: 0x0423,
        name: "nazi",
    },
    TokenEntry {
        id: 0x0424,
        name: "paternal_autocrat",
    },
    TokenEntry {
        id: 0x0425,
        name: "social_conservative",
    },
    TokenEntry {
        id: 0x0426,
        name: "market_liberal",
    },
    TokenEntry {
        id: 0x0427,
        name: "social_liberal",
    },
    TokenEntry {
        id: 0x0428,
        name: "social_democrat",
    },
    TokenEntry {
        id: 0x0429,
        name: "left_wing_radical",
    },
    TokenEntry {
        id: 0x042a,
        name: "leninist",
    },
    TokenEntry {
        id: 0x042b,
        name: "stalinist",
    },
    // === §5: AI-параметри/місії (130) ===
    TokenEntry {
        id: 0x0030,
        name: "frequency",
    },
    TokenEntry {
        id: 0x028a,
        name: "group1",
    },
    TokenEntry {
        id: 0x028b,
        name: "group2",
    },
    TokenEntry {
        id: 0x028c,
        name: "group3",
    },
    TokenEntry {
        id: 0x028d,
        name: "group4",
    },
    TokenEntry {
        id: 0x028e,
        name: "group5",
    },
    TokenEntry {
        id: 0x028f,
        name: "group6",
    },
    TokenEntry {
        id: 0x0290,
        name: "group7",
    },
    TokenEntry {
        id: 0x0291,
        name: "group8",
    },
    TokenEntry {
        id: 0x0292,
        name: "group9",
    },
    TokenEntry {
        id: 0x0293,
        name: "group0",
    },
    TokenEntry {
        id: 0x0294,
        name: "include",
    },
    TokenEntry {
        id: 0x0295,
        name: "mission",
    },
    TokenEntry {
        id: 0x02bb,
        name: "endgoal",
    },
    TokenEntry {
        id: 0x02bc,
        name: "preference",
    },
    TokenEntry {
        id: 0x042d,
        name: "defend_overseas_beaches",
    },
    TokenEntry {
        id: 0x042e,
        name: "human_border",
    },
    TokenEntry {
        id: 0x042f,
        name: "war_target",
    },
    TokenEntry {
        id: 0x0430,
        name: "opposing_alliance",
    },
    TokenEntry {
        id: 0x0431,
        name: "claim_threat",
    },
    TokenEntry {
        id: 0x0432,
        name: "unstable_border",
    },
    TokenEntry {
        id: 0x0433,
        name: "country_priorities",
    },
    TokenEntry {
        id: 0x0434,
        name: "province_priorities",
    },
    TokenEntry {
        id: 0x0435,
        name: "key_point_prio_mult",
    },
    TokenEntry {
        id: 0x0436,
        name: "revolt_risk_mult",
    },
    TokenEntry {
        id: 0x0437,
        name: "support_defense_prop",
    },
    TokenEntry {
        id: 0x0438,
        name: "recklessness",
    },
    TokenEntry {
        id: 0x0439,
        name: "distrib_vs_ai",
    },
    TokenEntry {
        id: 0x043a,
        name: "distrib_vs_human",
    },
    TokenEntry {
        id: 0x043b,
        name: "enemy_handicap",
    },
    TokenEntry {
        id: 0x043c,
        name: "even",
    },
    TokenEntry {
        id: 0x043d,
        name: "reactive",
    },
    TokenEntry {
        id: 0x043e,
        name: "max_front_ratio",
    },
    TokenEntry {
        id: 0x043f,
        name: "max_front_ratios",
    },
    TokenEntry {
        id: 0x0440,
        name: "max_garrison_prop",
    },
    TokenEntry {
        id: 0x0441,
        name: "min_garrison_prop",
    },
    TokenEntry {
        id: 0x0442,
        name: "evac_islands",
    },
    TokenEntry {
        id: 0x0443,
        name: "use_offensive_supply",
    },
    TokenEntry {
        id: 0x0444,
        name: "reserve_prop",
    },
    TokenEntry {
        id: 0x0445,
        name: "panic_ratio_vs_ai",
    },
    TokenEntry {
        id: 0x0446,
        name: "panic_ratio_vs_human",
    },
    TokenEntry {
        id: 0x0447,
        name: "enemy_reinf_days",
    },
    TokenEntry {
        id: 0x0448,
        name: "base_attack_odds",
    },
    TokenEntry {
        id: 0x0449,
        name: "min_attack_odds",
    },
    TokenEntry {
        id: 0x044a,
        name: "max_attack_odds",
    },
    TokenEntry {
        id: 0x044b,
        name: "reinforce_odds",
    },
    TokenEntry {
        id: 0x044c,
        name: "withdraw_odds",
    },
    TokenEntry {
        id: 0x0455,
        name: "not_atwar",
    },
    TokenEntry {
        id: 0x0461,
        name: "passivity",
    },
    TokenEntry {
        id: 0x0462,
        name: "strat_redeploy_threshold",
    },
    TokenEntry {
        id: 0x0463,
        name: "max_redeploying",
    },
    TokenEntry {
        id: 0x0464,
        name: "max_fuel_offensive",
    },
    TokenEntry {
        id: 0x0465,
        name: "home_multiplier",
    },
    TokenEntry {
        id: 0x0466,
        name: "overseas_multiplier",
    },
    TokenEntry {
        id: 0x0467,
        name: "home_peace_cap",
    },
    TokenEntry {
        id: 0x0468,
        name: "war_zone_odds",
    },
    TokenEntry {
        id: 0x0469,
        name: "area_multiplier",
    },
    TokenEntry {
        id: 0x046e,
        name: "sce_frequency",
    },
    TokenEntry {
        id: 0x046f,
        name: "build_division",
    },
    TokenEntry {
        id: 0x0470,
        name: "add_division",
    },
    TokenEntry {
        id: 0x0471,
        name: "remove_division",
    },
    TokenEntry {
        id: 0x0472,
        name: "add_corps",
    },
    TokenEntry {
        id: 0x0473,
        name: "damage_division",
    },
    TokenEntry {
        id: 0x0474,
        name: "disorg_division",
    },
    TokenEntry {
        id: 0x047c,
        name: "enable_task",
    },
    TokenEntry {
        id: 0x0296,
        name: "progress",
    },
    TokenEntry {
        id: 0x0297,
        name: "total_progress",
    },
    TokenEntry {
        id: 0x029a,
        name: "days_for_first",
    },
    TokenEntry {
        id: 0x029b,
        name: "gearing_bonus",
    },
    TokenEntry {
        id: 0x029c,
        name: "div_upgr_progress",
    },
    TokenEntry {
        id: 0x029d,
        name: "brig_upgr_progress",
    },
    TokenEntry {
        id: 0x04a6,
        name: "prioritized",
    },
    TokenEntry {
        id: 0x04aa,
        name: "help_allies",
    },
    TokenEntry {
        id: 0x04ab,
        name: "ignore",
    },
    TokenEntry {
        id: 0x04ac,
        name: "air_support",
    },
    TokenEntry {
        id: 0x04ad,
        name: "priority",
    },
    TokenEntry {
        id: 0x04ae,
        name: "nearest",
    },
    TokenEntry {
        id: 0x04af,
        name: "redirect",
    },
    TokenEntry {
        id: 0x04a9,
        name: "division_exists",
    },
    TokenEntry {
        id: 0x04c0,
        name: "airsuperioritydesirability",
    },
    TokenEntry {
        id: 0x04c1,
        name: "airsuperioritylosstolerance",
    },
    TokenEntry {
        id: 0x04c2,
        name: "groundattacklosstolerance",
    },
    TokenEntry {
        id: 0x04c3,
        name: "groundattackdesirability",
    },
    TokenEntry {
        id: 0x04c4,
        name: "interdictionlosstolerance",
    },
    TokenEntry {
        id: 0x04c5,
        name: "inderdictiondesirability",
    },
    TokenEntry {
        id: 0x04c6,
        name: "logisticalstrikelosstolerance",
    },
    TokenEntry {
        id: 0x04c7,
        name: "logisticalstrikeefficency",
    },
    TokenEntry {
        id: 0x04c8,
        name: "logisticalstrikedesirability",
    },
    TokenEntry {
        id: 0x04c9,
        name: "runwaycrateringlosstolerance",
    },
    TokenEntry {
        id: 0x04ca,
        name: "runwaycrateringefficency",
    },
    TokenEntry {
        id: 0x04cb,
        name: "runwaycrateringdesirability",
    },
    TokenEntry {
        id: 0x04cc,
        name: "strategicstriketolerance",
    },
    TokenEntry {
        id: 0x04cd,
        name: "strategicstrikeefficency",
    },
    TokenEntry {
        id: 0x04ce,
        name: "strategicstrikedesirability",
    },
    TokenEntry {
        id: 0x04cf,
        name: "nukestriketolerance",
    },
    TokenEntry {
        id: 0x04d0,
        name: "nukestrikedesirability",
    },
    TokenEntry {
        id: 0x04d1,
        name: "installationstriketolerance",
    },
    TokenEntry {
        id: 0x04d2,
        name: "installationstrikeefficency",
    },
    TokenEntry {
        id: 0x04d3,
        name: "installationstrikedesirability",
    },
    TokenEntry {
        id: 0x04d4,
        name: "navalstriketolerance",
    },
    TokenEntry {
        id: 0x04d5,
        name: "navalstrikedesirability",
    },
    TokenEntry {
        id: 0x04d6,
        name: "portstriketolerance",
    },
    TokenEntry {
        id: 0x04d7,
        name: "portstrikedesirability",
    },
    TokenEntry {
        id: 0x04d8,
        name: "convoyraidtolerance",
    },
    TokenEntry {
        id: 0x04d9,
        name: "convoyraiddesirability",
    },
    TokenEntry {
        id: 0x04da,
        name: "min_mission_strength_org",
    },
    TokenEntry {
        id: 0x04db,
        name: "icxdayscostfactor",
    },
    TokenEntry {
        id: 0x04dc,
        name: "manpowercostfactor",
    },
    TokenEntry {
        id: 0x04dd,
        name: "destructionriskthreashold",
    },
    TokenEntry {
        id: 0x04de,
        name: "taskforcetype",
    },
    TokenEntry {
        id: 0x04df,
        name: "desiredratio",
    },
    TokenEntry {
        id: 0x04e0,
        name: "rangeweight",
    },
    TokenEntry {
        id: 0x04e1,
        name: "airkillpowerweight",
    },
    TokenEntry {
        id: 0x04e2,
        name: "hardkillpowerweight",
    },
    TokenEntry {
        id: 0x04e3,
        name: "softkillpowerweight",
    },
    TokenEntry {
        id: 0x04e4,
        name: "navalkillpowerweight",
    },
    TokenEntry {
        id: 0x04e5,
        name: "strategickillpowerweight",
    },
    TokenEntry {
        id: 0x04e6,
        name: "transportcapacityweight",
    },
    TokenEntry {
        id: 0x04e7,
        name: "airvulnurabilityweight",
    },
    TokenEntry {
        id: 0x04e8,
        name: "surfacevulnurabilityweight",
    },
    TokenEntry {
        id: 0x052e,
        name: "dont_want_exp_forces",
    },
    TokenEntry {
        id: 0x0532,
        name: "personality",
    },
    TokenEntry {
        id: 0x0533,
        name: "national",
    },
    TokenEntry {
        id: 0x0534,
        name: "non_national",
    },
    TokenEntry {
        id: 0x0595,
        name: "gfx_prio",
    },
    TokenEntry {
        id: 0x066a,
        name: "list_prio",
    },
    TokenEntry {
        id: 0x0681,
        name: "ai_settings",
    },
    TokenEntry {
        id: 0x0685,
        name: "ui_prio",
    },
    TokenEntry {
        id: 0x0688,
        name: "build_brigade",
    },
    TokenEntry {
        id: 0x0689,
        name: "disable_task",
    },
    // === §5: Погода/місцевість/клімат (88) ===
    TokenEntry {
        id: 0x0031,
        name: "night",
    },
    TokenEntry {
        id: 0x0175,
        name: "terrain_cost",
    },
    TokenEntry {
        id: 0x0176,
        name: "clear",
    },
    TokenEntry {
        id: 0x0177,
        name: "marsh",
    },
    TokenEntry {
        id: 0x0178,
        name: "forest",
    },
    TokenEntry {
        id: 0x0179,
        name: "mountain",
    },
    TokenEntry {
        id: 0x017a,
        name: "desert",
    },
    TokenEntry {
        id: 0x017c,
        name: "terrain_cost_mod",
    },
    TokenEntry {
        id: 0x017e,
        name: "river",
    },
    TokenEntry {
        id: 0x017f,
        name: "load",
    },
    TokenEntry {
        id: 0x0180,
        name: "unload",
    },
    TokenEntry {
        id: 0x0181,
        name: "winter",
    },
    TokenEntry {
        id: 0x0182,
        name: "storm",
    },
    TokenEntry {
        id: 0x0183,
        name: "blizzard",
    },
    TokenEntry {
        id: 0x0184,
        name: "snowing",
    },
    TokenEntry {
        id: 0x0185,
        name: "raining",
    },
    TokenEntry {
        id: 0x0186,
        name: "muddy",
    },
    TokenEntry {
        id: 0x0187,
        name: "arid",
    },
    TokenEntry {
        id: 0x0188,
        name: "food",
    },
    TokenEntry {
        id: 0x0189,
        name: "terrain",
    },
    TokenEntry {
        id: 0x018a,
        name: "weather",
    },
    TokenEntry {
        id: 0x018b,
        name: "poor",
    },
    TokenEntry {
        id: 0x018c,
        name: "climate",
    },
    TokenEntry {
        id: 0x018d,
        name: "tropical",
    },
    TokenEntry {
        id: 0x018e,
        name: "arctic",
    },
    TokenEntry {
        id: 0x018f,
        name: "looted",
    },
    TokenEntry {
        id: 0x0190,
        name: "distance",
    },
    TokenEntry {
        id: 0x0191,
        name: "max_distance",
    },
    TokenEntry {
        id: 0x0192,
        name: "max_staging_distance",
    },
    TokenEntry {
        id: 0x01a0,
        name: "movement",
    },
    TokenEntry {
        id: 0x0205,
        name: "attrition",
    },
    TokenEntry {
        id: 0x029f,
        name: "wilderness",
    },
    TokenEntry {
        id: 0x02a1,
        name: "ferocity",
    },
    TokenEntry {
        id: 0x02a2,
        name: "efficiency",
    },
    TokenEntry {
        id: 0x02a3,
        name: "tolerance",
    },
    TokenEntry {
        id: 0x038d,
        name: "blizzard_attack",
    },
    TokenEntry {
        id: 0x038e,
        name: "snow_attack",
    },
    TokenEntry {
        id: 0x038f,
        name: "frozen_attack",
    },
    TokenEntry {
        id: 0x0390,
        name: "rain_attack",
    },
    TokenEntry {
        id: 0x0391,
        name: "storm_attack",
    },
    TokenEntry {
        id: 0x0392,
        name: "muddy_attack",
    },
    TokenEntry {
        id: 0x0393,
        name: "night_attack",
    },
    TokenEntry {
        id: 0x0394,
        name: "desert_attack",
    },
    TokenEntry {
        id: 0x0395,
        name: "mountain_attack",
    },
    TokenEntry {
        id: 0x0396,
        name: "hill_attack",
    },
    TokenEntry {
        id: 0x0397,
        name: "forest_attack",
    },
    TokenEntry {
        id: 0x0398,
        name: "jungle_attack",
    },
    TokenEntry {
        id: 0x0399,
        name: "swamp_attack",
    },
    TokenEntry {
        id: 0x039a,
        name: "urban_attack",
    },
    TokenEntry {
        id: 0x039b,
        name: "river_attack",
    },
    TokenEntry {
        id: 0x039c,
        name: "shore_attack",
    },
    TokenEntry {
        id: 0x039d,
        name: "paradrop_attack",
    },
    TokenEntry {
        id: 0x039e,
        name: "fort_attack",
    },
    TokenEntry {
        id: 0x039f,
        name: "blizzard_defense",
    },
    TokenEntry {
        id: 0x03a0,
        name: "snow_defense",
    },
    TokenEntry {
        id: 0x03a1,
        name: "frozen_defense",
    },
    TokenEntry {
        id: 0x03a2,
        name: "rain_defense",
    },
    TokenEntry {
        id: 0x03a3,
        name: "storm_defense",
    },
    TokenEntry {
        id: 0x03a4,
        name: "muddy_defense",
    },
    TokenEntry {
        id: 0x03a5,
        name: "night_defense",
    },
    TokenEntry {
        id: 0x03a6,
        name: "desert_defense",
    },
    TokenEntry {
        id: 0x03a7,
        name: "mountain_defense",
    },
    TokenEntry {
        id: 0x03a8,
        name: "hill_defense",
    },
    TokenEntry {
        id: 0x03a9,
        name: "forest_defense",
    },
    TokenEntry {
        id: 0x03aa,
        name: "jungle_defense",
    },
    TokenEntry {
        id: 0x03ab,
        name: "swamp_defense",
    },
    TokenEntry {
        id: 0x03ac,
        name: "urban_defense",
    },
    TokenEntry {
        id: 0x03ad,
        name: "blizzard_move",
    },
    TokenEntry {
        id: 0x03ae,
        name: "snow_move",
    },
    TokenEntry {
        id: 0x03af,
        name: "frozen_move",
    },
    TokenEntry {
        id: 0x03b0,
        name: "rain_move",
    },
    TokenEntry {
        id: 0x03b1,
        name: "storm_move",
    },
    TokenEntry {
        id: 0x03b2,
        name: "muddy_move",
    },
    TokenEntry {
        id: 0x03b3,
        name: "night_move",
    },
    TokenEntry {
        id: 0x03b4,
        name: "desert_move",
    },
    TokenEntry {
        id: 0x03b5,
        name: "mountain_move",
    },
    TokenEntry {
        id: 0x03b6,
        name: "hill_move",
    },
    TokenEntry {
        id: 0x03b7,
        name: "forest_move",
    },
    TokenEntry {
        id: 0x03b8,
        name: "jungle_move",
    },
    TokenEntry {
        id: 0x03b9,
        name: "swamp_move",
    },
    TokenEntry {
        id: 0x03ba,
        name: "urban_move",
    },
    TokenEntry {
        id: 0x03bb,
        name: "deactivate",
    },
    TokenEntry {
        id: 0x058c,
        name: "clear_attack",
    },
    TokenEntry {
        id: 0x058d,
        name: "plain_attack",
    },
    TokenEntry {
        id: 0x058e,
        name: "clear_defense",
    },
    TokenEntry {
        id: 0x058f,
        name: "plain_defense",
    },
    TokenEntry {
        id: 0x0590,
        name: "clear_move",
    },
    TokenEntry {
        id: 0x0591,
        name: "plain_move",
    },
    // === §5: Бойові місії/накази військам (75) ===
    TokenEntry {
        id: 0x0035,
        name: "attack",
    },
    TokenEntry {
        id: 0x0036,
        name: "rebase",
    },
    TokenEntry {
        id: 0x0037,
        name: "strat_redeploy",
    },
    TokenEntry {
        id: 0x0038,
        name: "support_attack",
    },
    TokenEntry {
        id: 0x0039,
        name: "support_defense",
    },
    TokenEntry {
        id: 0x003a,
        name: "reserves",
    },
    TokenEntry {
        id: 0x003b,
        name: "anti_partisan_duty",
    },
    TokenEntry {
        id: 0x003c,
        name: "air_superiority",
    },
    TokenEntry {
        id: 0x003d,
        name: "ground_attack",
    },
    TokenEntry {
        id: 0x003e,
        name: "runway_cratering",
    },
    TokenEntry {
        id: 0x003f,
        name: "installation_strike",
    },
    TokenEntry {
        id: 0x0040,
        name: "interdiction",
    },
    TokenEntry {
        id: 0x0041,
        name: "naval_strike",
    },
    TokenEntry {
        id: 0x0042,
        name: "port_strike",
    },
    TokenEntry {
        id: 0x0043,
        name: "logistical_strike",
    },
    TokenEntry {
        id: 0x0044,
        name: "strategic_bombardment",
    },
    TokenEntry {
        id: 0x0045,
        name: "air_supply",
    },
    TokenEntry {
        id: 0x0046,
        name: "airborne_assault",
    },
    TokenEntry {
        id: 0x0047,
        name: "convoy_raiding",
    },
    TokenEntry {
        id: 0x0048,
        name: "asw",
    },
    TokenEntry {
        id: 0x0049,
        name: "naval_interdiction",
    },
    TokenEntry {
        id: 0x004a,
        name: "shore_bombardment",
    },
    TokenEntry {
        id: 0x004b,
        name: "amphibious_assault",
    },
    TokenEntry {
        id: 0x004c,
        name: "sea_transport",
    },
    TokenEntry {
        id: 0x004d,
        name: "naval_combat_patrol",
    },
    TokenEntry {
        id: 0x004e,
        name: "naval_port_strike",
    },
    TokenEntry {
        id: 0x004f,
        name: "naval_airbase_strike",
    },
    TokenEntry {
        id: 0x0050,
        name: "convoy_air_raiding",
    },
    TokenEntry {
        id: 0x0051,
        name: "planned_defense",
    },
    TokenEntry {
        id: 0x0052,
        name: "sneak_move",
    },
    TokenEntry {
        id: 0x0053,
        name: "naval_scramble",
    },
    TokenEntry {
        id: 0x0054,
        name: "air_scramble",
    },
    TokenEntry {
        id: 0x0075,
        name: "min_org",
    },
    TokenEntry {
        id: 0x0076,
        name: "min_dmg",
    },
    TokenEntry {
        id: 0x0077,
        name: "return_org",
    },
    TokenEntry {
        id: 0x0078,
        name: "return_dmg",
    },
    TokenEntry {
        id: 0x0079,
        name: "min_core_attack_fleets",
    },
    TokenEntry {
        id: 0x007a,
        name: "num_attack_fleets",
    },
    TokenEntry {
        id: 0x0033,
        name: "sunk_by_country",
    },
    TokenEntry {
        id: 0x007c,
        name: "repeat",
    },
    TokenEntry {
        id: 0x0066,
        name: "protect",
    },
    TokenEntry {
        id: 0x0067,
        name: "befriend",
    },
    TokenEntry {
        id: 0x007d,
        name: "rtask",
    },
    TokenEntry {
        id: 0x007e,
        name: "rdest",
    },
    TokenEntry {
        id: 0x006b,
        name: "invasion",
    },
    TokenEntry {
        id: 0x006c,
        name: "staging_province",
    },
    TokenEntry {
        id: 0x006e,
        name: "beach",
    },
    TokenEntry {
        id: 0x006f,
        name: "pocket",
    },
    TokenEntry {
        id: 0x0070,
        name: "island",
    },
    TokenEntry {
        id: 0x006d,
        name: "target",
    },
    TokenEntry {
        id: 0x0071,
        name: "adjacentenemy",
    },
    TokenEntry {
        id: 0x0056,
        name: "defensiveIC",
    },
    TokenEntry {
        id: 0x0057,
        name: "recentlybombed",
    },
    TokenEntry {
        id: 0x0058,
        name: "protectoil",
    },
    TokenEntry {
        id: 0x0059,
        name: "protectenergy",
    },
    TokenEntry {
        id: 0x005a,
        name: "protectmetal",
    },
    TokenEntry {
        id: 0x005b,
        name: "protectrarematerials",
    },
    TokenEntry {
        id: 0x005c,
        name: "areasize",
    },
    TokenEntry {
        id: 0x005d,
        name: "areadistance",
    },
    TokenEntry {
        id: 0x005e,
        name: "adjacency",
    },
    TokenEntry {
        id: 0x005f,
        name: "targetic",
    },
    TokenEntry {
        id: 0x0060,
        name: "avoidaa",
    },
    TokenEntry {
        id: 0x0061,
        name: "targetenergy",
    },
    TokenEntry {
        id: 0x0062,
        name: "targetmetal",
    },
    TokenEntry {
        id: 0x0063,
        name: "targetoil",
    },
    TokenEntry {
        id: 0x0064,
        name: "targetrarematerials",
    },
    TokenEntry {
        id: 0x0065,
        name: "occupied",
    },
    TokenEntry {
        id: 0x007b,
        name: "halted",
    },
    TokenEntry {
        id: 0x0475,
        name: "counterattack",
    },
    TokenEntry {
        id: 0x0476,
        name: "assault",
    },
    TokenEntry {
        id: 0x0477,
        name: "encirclement",
    },
    TokenEntry {
        id: 0x0478,
        name: "ambush",
    },
    TokenEntry {
        id: 0x0479,
        name: "delay",
    },
    TokenEntry {
        id: 0x047a,
        name: "tactical_withdrawal",
    },
    TokenEntry {
        id: 0x047b,
        name: "breakthrough",
    },
    // === §5: Дипломатія/альянси (91) ===
    TokenEntry {
        id: 0x0068,
        name: "demand_claims",
    },
    TokenEntry {
        id: 0x0069,
        name: "claim_acceptance",
    },
    TokenEntry {
        id: 0x02a6,
        name: "guarantee",
    },
    TokenEntry {
        id: 0x02a7,
        name: "end_guarantee",
    },
    TokenEntry {
        id: 0x02ad,
        name: "end_non_aggression",
    },
    TokenEntry {
        id: 0x02ae,
        name: "end_trades",
    },
    TokenEntry {
        id: 0x02af,
        name: "trade_resource",
    },
    TokenEntry {
        id: 0x0134,
        name: "diplomacy",
    },
    TokenEntry {
        id: 0x0135,
        name: "relation",
    },
    TokenEntry {
        id: 0x0136,
        name: "set_relation",
    },
    TokenEntry {
        id: 0x013a,
        name: "permanent",
    },
    TokenEntry {
        id: 0x013b,
        name: "temporary",
    },
    TokenEntry {
        id: 0x013c,
        name: "alliance",
    },
    TokenEntry {
        id: 0x013d,
        name: "treaty",
    },
    TokenEntry {
        id: 0x013e,
        name: "action",
    },
    TokenEntry {
        id: 0x013f,
        name: "militaryalliance",
    },
    TokenEntry {
        id: 0x0140,
        name: "annexation",
    },
    TokenEntry {
        id: 0x0141,
        name: "type",
    },
    TokenEntry {
        id: 0x0144,
        name: "air",
    },
    TokenEntry {
        id: 0x0145,
        name: "land",
    },
    TokenEntry {
        id: 0x0146,
        name: "naval",
    },
    TokenEntry {
        id: 0x0147,
        name: "trade",
    },
    TokenEntry {
        id: 0x0148,
        name: "cancel_deal_threshold",
    },
    TokenEntry {
        id: 0x0149,
        name: "favored",
    },
    TokenEntry {
        id: 0x014a,
        name: "embargo",
    },
    TokenEntry {
        id: 0x014c,
        name: "non_aggression",
    },
    TokenEntry {
        id: 0x014e,
        name: "value",
    },
    TokenEntry {
        id: 0x0154,
        name: "landthresholds",
    },
    TokenEntry {
        id: 0x0155,
        name: "navalthresholds",
    },
    TokenEntry {
        id: 0x0156,
        name: "startdate",
    },
    TokenEntry {
        id: 0x0157,
        name: "enddate",
    },
    TokenEntry {
        id: 0x0158,
        name: "refusetrade",
    },
    TokenEntry {
        id: 0x0159,
        name: "increase",
    },
    TokenEntry {
        id: 0x015d,
        name: "tweakable",
    },
    TokenEntry {
        id: 0x0160,
        name: "coastal",
    },
    TokenEntry {
        id: 0x0161,
        name: "nations",
    },
    TokenEntry {
        id: 0x0165,
        name: "gim_alliance",
    },
    TokenEntry {
        id: 0x0166,
        name: "cancel",
    },
    TokenEntry {
        id: 0x0167,
        name: "running",
    },
    TokenEntry {
        id: 0x0168,
        name: "nation",
    },
    TokenEntry {
        id: 0x0193,
        name: "lastpeace",
    },
    TokenEntry {
        id: 0x0195,
        name: "participant",
    },
    TokenEntry {
        id: 0x0197,
        name: "vassal",
    },
    TokenEntry {
        id: 0x0196,
        name: "breakvassal",
    },
    TokenEntry {
        id: 0x0139,
        name: "ai_prepare_war",
    },
    TokenEntry {
        id: 0x0138,
        name: "atwar",
    },
    TokenEntry {
        id: 0x01b4,
        name: "peace",
    },
    TokenEntry {
        id: 0x0209,
        name: "diplomaticdates",
    },
    TokenEntry {
        id: 0x0486,
        name: "conquer",
    },
    TokenEntry {
        id: 0x0487,
        name: "garrison",
    },
    TokenEntry {
        id: 0x0488,
        name: "enemy",
    },
    TokenEntry {
        id: 0x048d,
        name: "front",
    },
    TokenEntry {
        id: 0x048e,
        name: "strategic",
    },
    TokenEntry {
        id: 0x0162,
        name: "task",
    },
    TokenEntry {
        id: 0x0163,
        name: "taskprov",
    },
    TokenEntry {
        id: 0x0164,
        name: "prevprov",
    },
    TokenEntry {
        id: 0x00e4,
        name: "puppet",
    },
    TokenEntry {
        id: 0x00e5,
        name: "ispuppet",
    },
    TokenEntry {
        id: 0x00e6,
        name: "make_puppet",
    },
    TokenEntry {
        id: 0x00e7,
        name: "coup_nation",
    },
    TokenEntry {
        id: 0x0143,
        name: "offset",
    },
    TokenEntry {
        id: 0x02b5,
        name: "access",
    },
    TokenEntry {
        id: 0x02b6,
        name: "warned",
    },
    TokenEntry {
        id: 0x02b7,
        name: "guaranteed",
    },
    TokenEntry {
        id: 0x02b3,
        name: "addcore",
    },
    TokenEntry {
        id: 0x02b4,
        name: "removecore",
    },
    TokenEntry {
        id: 0x046a,
        name: "exp_force_ratio",
    },
    TokenEntry {
        id: 0x046b,
        name: "no_exp_forces_to",
    },
    TokenEntry {
        id: 0x046c,
        name: "exp_force_ratios",
    },
    TokenEntry {
        id: 0x046d,
        name: "hq_supply_eff",
    },
    TokenEntry {
        id: 0x047f,
        name: "leave_alliance",
    },
    TokenEntry {
        id: 0x0480,
        name: "end_puppet",
    },
    TokenEntry {
        id: 0x0481,
        name: "end_mastery",
    },
    TokenEntry {
        id: 0x0482,
        name: "end_access",
    },
    TokenEntry {
        id: 0x0483,
        name: "lost_VP",
    },
    TokenEntry {
        id: 0x0484,
        name: "lost_national",
    },
    TokenEntry {
        id: 0x0485,
        name: "lost_IC",
    },
    TokenEntry {
        id: 0x022e,
        name: "allies",
    },
    TokenEntry {
        id: 0x0230,
        name: "comintern",
    },
    TokenEntry {
        id: 0x048f,
        name: "secedeprovince",
    },
    TokenEntry {
        id: 0x0490,
        name: "secedearea",
    },
    TokenEntry {
        id: 0x0491,
        name: "secederegion",
    },
    TokenEntry {
        id: 0x0501,
        name: "spyprefs",
    },
    TokenEntry {
        id: 0x053e,
        name: "assume_military_control",
    },
    TokenEntry {
        id: 0x053f,
        name: "cancel_military_control",
    },
    TokenEntry {
        id: 0x0540,
        name: "send_expeditionary_force",
    },
    TokenEntry {
        id: 0x054c,
        name: "dont_send_forces",
    },
    TokenEntry {
        id: 0x0571,
        name: "military_control",
    },
    TokenEntry {
        id: 0x0577,
        name: "claims",
    },
    TokenEntry {
        id: 0x0578,
        name: "addclaim",
    },
    TokenEntry {
        id: 0x0579,
        name: "removeclaim",
    },
    // === §5: Типи юнітів (дивізії/бригади/зброя) (77) ===
    TokenEntry {
        id: 0x008b,
        name: "infantry",
    },
    TokenEntry {
        id: 0x008c,
        name: "cavalry",
    },
    TokenEntry {
        id: 0x008d,
        name: "artillery",
    },
    TokenEntry {
        id: 0x008e,
        name: "motorized",
    },
    TokenEntry {
        id: 0x008f,
        name: "mechanized",
    },
    TokenEntry {
        id: 0x0090,
        name: "paratrooper",
    },
    TokenEntry {
        id: 0x0091,
        name: "marine",
    },
    TokenEntry {
        id: 0x0092,
        name: "bergsjaeger",
    },
    TokenEntry {
        id: 0x0093,
        name: "fighter",
    },
    TokenEntry {
        id: 0x0094,
        name: "strategic_bomber",
    },
    TokenEntry {
        id: 0x0095,
        name: "tactical_bomber",
    },
    TokenEntry {
        id: 0x0096,
        name: "cas",
    },
    TokenEntry {
        id: 0x0097,
        name: "cag",
    },
    TokenEntry {
        id: 0x0098,
        name: "naval_bomber",
    },
    TokenEntry {
        id: 0x0099,
        name: "transport_plane",
    },
    TokenEntry {
        id: 0x009a,
        name: "battleship",
    },
    TokenEntry {
        id: 0x009b,
        name: "light_cruiser",
    },
    TokenEntry {
        id: 0x009c,
        name: "heavy_cruiser",
    },
    TokenEntry {
        id: 0x009d,
        name: "battlecruiser",
    },
    TokenEntry {
        id: 0x009e,
        name: "destroyer",
    },
    TokenEntry {
        id: 0x009f,
        name: "carrier",
    },
    TokenEntry {
        id: 0x00a0,
        name: "submarine",
    },
    TokenEntry {
        id: 0x00a1,
        name: "militia",
    },
    TokenEntry {
        id: 0x00b4,
        name: "anti_tank",
    },
    TokenEntry {
        id: 0x00b5,
        name: "anti_air",
    },
    TokenEntry {
        id: 0x00b6,
        name: "flying_bomb",
    },
    TokenEntry {
        id: 0x00b7,
        name: "flying_rocket",
    },
    TokenEntry {
        id: 0x00a2,
        name: "engineer",
    },
    TokenEntry {
        id: 0x00a3,
        name: "escort_carrier",
    },
    TokenEntry {
        id: 0x00a4,
        name: "nuclear_submarine",
    },
    TokenEntry {
        id: 0x00a5,
        name: "light_armor",
    },
    TokenEntry {
        id: 0x00a6,
        name: "light_armor_brigade",
    },
    TokenEntry {
        id: 0x00a7,
        name: "armor",
    },
    TokenEntry {
        id: 0x00a8,
        name: "heavy_armor",
    },
    TokenEntry {
        id: 0x00a9,
        name: "escort",
    },
    TokenEntry {
        id: 0x00aa,
        name: "multi_role",
    },
    TokenEntry {
        id: 0x00ab,
        name: "interceptor",
    },
    TokenEntry {
        id: 0x00ac,
        name: "hq",
    },
    TokenEntry {
        id: 0x00ad,
        name: "police",
    },
    TokenEntry {
        id: 0x00ae,
        name: "rocket_artillery",
    },
    TokenEntry {
        id: 0x00af,
        name: "sp_artillery",
    },
    TokenEntry {
        id: 0x00b0,
        name: "sp_rct_artillery",
    },
    TokenEntry {
        id: 0x00b1,
        name: "tank_destroyer",
    },
    TokenEntry {
        id: 0x00b2,
        name: "super_heavy_armor",
    },
    TokenEntry {
        id: 0x00b3,
        name: "armored_car",
    },
    TokenEntry {
        id: 0x00b8,
        name: "division",
    },
    TokenEntry {
        id: 0x00b9,
        name: "landdivision",
    },
    TokenEntry {
        id: 0x00bb,
        name: "airdivision",
    },
    TokenEntry {
        id: 0x00ba,
        name: "navaldivision",
    },
    TokenEntry {
        id: 0x0596,
        name: "light_carrier",
    },
    TokenEntry {
        id: 0x0597,
        name: "rocket_interceptor",
    },
    TokenEntry {
        id: 0x0598,
        name: "d_rsv_33",
    },
    TokenEntry {
        id: 0x0599,
        name: "d_rsv_34",
    },
    TokenEntry {
        id: 0x059a,
        name: "d_rsv_35",
    },
    TokenEntry {
        id: 0x059b,
        name: "d_rsv_36",
    },
    TokenEntry {
        id: 0x059c,
        name: "d_rsv_37",
    },
    TokenEntry {
        id: 0x059d,
        name: "d_rsv_38",
    },
    TokenEntry {
        id: 0x059e,
        name: "d_rsv_39",
    },
    TokenEntry {
        id: 0x059f,
        name: "d_rsv_40",
    },
    TokenEntry {
        id: 0x0603,
        name: "cavalry_brigade",
    },
    TokenEntry {
        id: 0x0604,
        name: "sp_anti_air",
    },
    TokenEntry {
        id: 0x0605,
        name: "medium_armor",
    },
    TokenEntry {
        id: 0x0606,
        name: "floatplane",
    },
    TokenEntry {
        id: 0x066d,
        name: "light_cag",
    },
    TokenEntry {
        id: 0x066e,
        name: "amph_armor",
    },
    TokenEntry {
        id: 0x066f,
        name: "glider_armor",
    },
    TokenEntry {
        id: 0x0670,
        name: "glider_artillery",
    },
    TokenEntry {
        id: 0x0671,
        name: "super_heavy_artillery",
    },
    TokenEntry {
        id: 0x0677,
        name: "equipment",
    },
    TokenEntry {
        id: 0x0678,
        name: "heavy_artillery",
    },
    TokenEntry {
        id: 0x0679,
        name: "horses",
    },
    TokenEntry {
        id: 0x067a,
        name: "trucks",
    },
    TokenEntry {
        id: 0x067b,
        name: "halftracks",
    },
    TokenEntry {
        id: 0x067c,
        name: "heavy_bomber",
    },
    TokenEntry {
        id: 0x067d,
        name: "heavy_fighter",
    },
    TokenEntry {
        id: 0x067e,
        name: "helicopter",
    },
    TokenEntry {
        id: 0x067f,
        name: "balloon",
    },
    // === §5: Лідери/міністри/риси (73) ===
    TokenEntry {
        id: 0x0262,
        name: "logistics_wizard",
    },
    TokenEntry {
        id: 0x0263,
        name: "defensive_doctrine",
    },
    TokenEntry {
        id: 0x0264,
        name: "offensive_doctrine",
    },
    TokenEntry {
        id: 0x0265,
        name: "winter_specialist",
    },
    TokenEntry {
        id: 0x0266,
        name: "trickster",
    },
    TokenEntry {
        id: 0x0267,
        name: "fortress_buster",
    },
    TokenEntry {
        id: 0x0268,
        name: "panzer_leader",
    },
    TokenEntry {
        id: 0x0269,
        name: "commando",
    },
    TokenEntry {
        id: 0x026a,
        name: "old_guard",
    },
    TokenEntry {
        id: 0x0273,
        name: "desert_fox",
    },
    TokenEntry {
        id: 0x026b,
        name: "seawolf",
    },
    TokenEntry {
        id: 0x026c,
        name: "blockade_runner",
    },
    TokenEntry {
        id: 0x026d,
        name: "superior_tactician",
    },
    TokenEntry {
        id: 0x026e,
        name: "spotter",
    },
    TokenEntry {
        id: 0x026f,
        name: "tank_buster",
    },
    TokenEntry {
        id: 0x0270,
        name: "carpet_bomber",
    },
    TokenEntry {
        id: 0x0271,
        name: "night_flyer",
    },
    TokenEntry {
        id: 0x0272,
        name: "fleet_destroyer",
    },
    TokenEntry {
        id: 0x0274,
        name: "jungle_expert",
    },
    TokenEntry {
        id: 0x0275,
        name: "urban_fighter",
    },
    TokenEntry {
        id: 0x0276,
        name: "forest_fighter",
    },
    TokenEntry {
        id: 0x0277,
        name: "mountain_expert",
    },
    TokenEntry {
        id: 0x0278,
        name: "hills_fighter",
    },
    TokenEntry {
        id: 0x0279,
        name: "counterattack_expert",
    },
    TokenEntry {
        id: 0x027a,
        name: "assault_expert",
    },
    TokenEntry {
        id: 0x027b,
        name: "encirclement_expert",
    },
    TokenEntry {
        id: 0x027c,
        name: "ambush_expert",
    },
    TokenEntry {
        id: 0x027d,
        name: "delay_expert",
    },
    TokenEntry {
        id: 0x027e,
        name: "tactical_withdrawal_expert",
    },
    TokenEntry {
        id: 0x027f,
        name: "breakthrough_expert",
    },
    TokenEntry {
        id: 0x0261,
        name: "trait",
    },
    TokenEntry {
        id: 0x011c,
        name: "wakeminister",
    },
    TokenEntry {
        id: 0x011d,
        name: "sleepminister",
    },
    TokenEntry {
        id: 0x011e,
        name: "waketeam",
    },
    TokenEntry {
        id: 0x011f,
        name: "sleepteam",
    },
    TokenEntry {
        id: 0x0120,
        name: "steal_leader",
    },
    TokenEntry {
        id: 0x0121,
        name: "wakeleader",
    },
    TokenEntry {
        id: 0x0122,
        name: "sleepleader",
    },
    TokenEntry {
        id: 0x0123,
        name: "deathdate",
    },
    TokenEntry {
        id: 0x012d,
        name: "leader",
    },
    TokenEntry {
        id: 0x012f,
        name: "rank_year",
    },
    TokenEntry {
        id: 0x0130,
        name: "ideal_rank",
    },
    TokenEntry {
        id: 0x0131,
        name: "negotiation",
    },
    TokenEntry {
        id: 0x0132,
        name: "expirydate",
    },
    TokenEntry {
        id: 0x015a,
        name: "general",
    },
    TokenEntry {
        id: 0x015b,
        name: "admiral",
    },
    TokenEntry {
        id: 0x015c,
        name: "commander",
    },
    TokenEntry {
        id: 0x01df,
        name: "historicalleader",
    },
    TokenEntry {
        id: 0x01e0,
        name: "historicalmonarch",
    },
    TokenEntry {
        id: 0x03fd,
        name: "minister_loyalty",
    },
    TokenEntry {
        id: 0x03fe,
        name: "leader_loyalty",
    },
    TokenEntry {
        id: 0x03ff,
        name: "purge",
    },
    TokenEntry {
        id: 0x0401,
        name: "set_leader_skill",
    },
    TokenEntry {
        id: 0x0402,
        name: "add_leader_skill",
    },
    TokenEntry {
        id: 0x0403,
        name: "set_minister_skill",
    },
    TokenEntry {
        id: 0x0413,
        name: "reveal_leader_loyalty",
    },
    TokenEntry {
        id: 0x0414,
        name: "reveal_minister_loyalty",
    },
    TokenEntry {
        id: 0x029e,
        name: "minister",
    },
    TokenEntry {
        id: 0x04b3,
        name: "leader_ratio",
    },
    TokenEntry {
        id: 0x04b4,
        name: "land_field_marshal",
    },
    TokenEntry {
        id: 0x04b5,
        name: "land_general",
    },
    TokenEntry {
        id: 0x04b6,
        name: "land_lt_general",
    },
    TokenEntry {
        id: 0x04b7,
        name: "land_mj_general",
    },
    TokenEntry {
        id: 0x04b8,
        name: "sea_grand_admiral",
    },
    TokenEntry {
        id: 0x04b9,
        name: "sea_admiral",
    },
    TokenEntry {
        id: 0x04ba,
        name: "sea_vice_admiral",
    },
    TokenEntry {
        id: 0x04bb,
        name: "sea_rear_admiral",
    },
    TokenEntry {
        id: 0x04bc,
        name: "air_marshal",
    },
    TokenEntry {
        id: 0x04bd,
        name: "air_general",
    },
    TokenEntry {
        id: 0x04be,
        name: "air_lt_General",
    },
    TokenEntry {
        id: 0x04bf,
        name: "mj_General",
    },
    TokenEntry {
        id: 0x04f4,
        name: "steal_blueprint",
    },
    TokenEntry {
        id: 0x0556,
        name: "leader_skill",
    },
    // === §5: Провінції/будівництво/конвої (76) ===
    TokenEntry {
        id: 0x010c,
        name: "transports",
    },
    TokenEntry {
        id: 0x010d,
        name: "escorts",
    },
    TokenEntry {
        id: 0x00f5,
        name: "province_revoltrisk",
    },
    TokenEntry {
        id: 0x02a8,
        name: "allow_convoy_escorts",
    },
    TokenEntry {
        id: 0x02a9,
        name: "transport_pool",
    },
    TokenEntry {
        id: 0x02aa,
        name: "escort_pool",
    },
    TokenEntry {
        id: 0x014d,
        name: "infra",
    },
    TokenEntry {
        id: 0x015e,
        name: "landfort",
    },
    TokenEntry {
        id: 0x015f,
        name: "coastalfort",
    },
    TokenEntry {
        id: 0x001b,
        name: "largefort",
    },
    TokenEntry {
        id: 0x001c,
        name: "smallfort",
    },
    TokenEntry {
        id: 0x016a,
        name: "gim_prod_facility",
    },
    TokenEntry {
        id: 0x016b,
        name: "gim_prod_facility_result",
    },
    TokenEntry {
        id: 0x0170,
        name: "gim_tech",
    },
    TokenEntry {
        id: 0x0171,
        name: "manuf",
    },
    TokenEntry {
        id: 0x0172,
        name: "gim_tech_result",
    },
    TokenEntry {
        id: 0x0173,
        name: "buildingtime",
    },
    TokenEntry {
        id: 0x0174,
        name: "transport",
    },
    TokenEntry {
        id: 0x01f2,
        name: "construction",
    },
    TokenEntry {
        id: 0x01f3,
        name: "flags",
    },
    TokenEntry {
        id: 0x01f4,
        name: "vp",
    },
    TokenEntry {
        id: 0x01f5,
        name: "division_in_province",
    },
    TokenEntry {
        id: 0x01f6,
        name: "basevp",
    },
    TokenEntry {
        id: 0x0214,
        name: "fortresscost",
    },
    TokenEntry {
        id: 0x0215,
        name: "unitcost",
    },
    TokenEntry {
        id: 0x0216,
        name: "manufacturycost",
    },
    TokenEntry {
        id: 0x0217,
        name: "efficiencymod",
    },
    TokenEntry {
        id: 0x0218,
        name: "taxincomemod",
    },
    TokenEntry {
        id: 0x0219,
        name: "inflationmod",
    },
    TokenEntry {
        id: 0x021a,
        name: "revoltmod",
    },
    TokenEntry {
        id: 0x021b,
        name: "landmaintenance",
    },
    TokenEntry {
        id: 0x021c,
        name: "navalmaintenance",
    },
    TokenEntry {
        id: 0x0224,
        name: "division_development",
    },
    TokenEntry {
        id: 0x0225,
        name: "brigade_development",
    },
    TokenEntry {
        id: 0x0226,
        name: "province_development",
    },
    TokenEntry {
        id: 0x0227,
        name: "convoy_development",
    },
    TokenEntry {
        id: 0x023d,
        name: "current_size",
    },
    TokenEntry {
        id: 0x023e,
        name: "source",
    },
    TokenEntry {
        id: 0x023f,
        name: "destination",
    },
    TokenEntry {
        id: 0x0240,
        name: "blitz_destination",
    },
    TokenEntry {
        id: 0x0241,
        name: "regular_id",
    },
    TokenEntry {
        id: 0x03d2,
        name: "building",
    },
    TokenEntry {
        id: 0x03d3,
        name: "provincetax",
    },
    TokenEntry {
        id: 0x03d4,
        name: "province_manpower",
    },
    TokenEntry {
        id: 0x03d5,
        name: "province_keypoints",
    },
    TokenEntry {
        id: 0x0416,
        name: "infrastructure",
    },
    TokenEntry {
        id: 0x0417,
        name: "coastal_fort",
    },
    TokenEntry {
        id: 0x0418,
        name: "land_fort",
    },
    TokenEntry {
        id: 0x0419,
        name: "air_base",
    },
    TokenEntry {
        id: 0x041a,
        name: "naval_base",
    },
    TokenEntry {
        id: 0x041b,
        name: "radar_station",
    },
    TokenEntry {
        id: 0x041c,
        name: "nuclear_reactor",
    },
    TokenEntry {
        id: 0x041d,
        name: "rocket_test",
    },
    TokenEntry {
        id: 0x041e,
        name: "max_nuclear",
    },
    TokenEntry {
        id: 0x041f,
        name: "nuclear_reactor_prov",
    },
    TokenEntry {
        id: 0x0420,
        name: "max_rocket",
    },
    TokenEntry {
        id: 0x0421,
        name: "rocket_test_prov",
    },
    TokenEntry {
        id: 0x0456,
        name: "relative_build_scheme",
    },
    TokenEntry {
        id: 0x0457,
        name: "AA_provs",
    },
    TokenEntry {
        id: 0x0458,
        name: "coastal_fort_provs",
    },
    TokenEntry {
        id: 0x0459,
        name: "max_radar",
    },
    TokenEntry {
        id: 0x045a,
        name: "radar_provs",
    },
    TokenEntry {
        id: 0x045b,
        name: "max_air_base",
    },
    TokenEntry {
        id: 0x045c,
        name: "air_base_provs",
    },
    TokenEntry {
        id: 0x045d,
        name: "max_naval_base",
    },
    TokenEntry {
        id: 0x045e,
        name: "naval_base_provs",
    },
    TokenEntry {
        id: 0x045f,
        name: "IC_provs",
    },
    TokenEntry {
        id: 0x0460,
        name: "fort_provs",
    },
    TokenEntry {
        id: 0x04b0,
        name: "max_batch_peace",
    },
    TokenEntry {
        id: 0x04b1,
        name: "max_batch_war",
    },
    TokenEntry {
        id: 0x04b2,
        name: "max_batch_home_front",
    },
    TokenEntry {
        id: 0x051c,
        name: "democracy_war",
    },
    TokenEntry {
        id: 0x051d,
        name: "ictakeover",
    },
    TokenEntry {
        id: 0x051e,
        name: "teamtakeover",
    },
    TokenEntry {
        id: 0x052f,
        name: "extra_convoys_war",
    },
    TokenEntry {
        id: 0x0530,
        name: "extra_convoys_peace",
    },
    // === §5: Дати/календар (24) ===
    TokenEntry {
        id: 0x00f7,
        name: "globaldata",
    },
    TokenEntry {
        id: 0x00f8,
        name: "data",
    },
    TokenEntry {
        id: 0x00f9,
        name: "year",
    },
    TokenEntry {
        id: 0x00fa,
        name: "month",
    },
    TokenEntry {
        id: 0x00fb,
        name: "day",
    },
    TokenEntry {
        id: 0x00fc,
        name: "hour",
    },
    TokenEntry {
        id: 0x00fd,
        name: "date",
    },
    TokenEntry {
        id: 0x00fe,
        name: "january",
    },
    TokenEntry {
        id: 0x00ff,
        name: "february",
    },
    TokenEntry {
        id: 0x0100,
        name: "march",
    },
    TokenEntry {
        id: 0x0101,
        name: "april",
    },
    TokenEntry {
        id: 0x0102,
        name: "may",
    },
    TokenEntry {
        id: 0x0103,
        name: "june",
    },
    TokenEntry {
        id: 0x0104,
        name: "july",
    },
    TokenEntry {
        id: 0x0105,
        name: "august",
    },
    TokenEntry {
        id: 0x0106,
        name: "september",
    },
    TokenEntry {
        id: 0x0107,
        name: "october",
    },
    TokenEntry {
        id: 0x0108,
        name: "november",
    },
    TokenEntry {
        id: 0x0109,
        name: "december",
    },
    TokenEntry {
        id: 0x010a,
        name: "tag",
    },
    TokenEntry {
        id: 0x010b,
        name: "control",
    },
    TokenEntry {
        id: 0x0221,
        name: "startyear",
    },
    TokenEntry {
        id: 0x0222,
        name: "endyear",
    },
    TokenEntry {
        id: 0x0574,
        name: "save_date",
    },
    // === §5: Події/рішення (events/decisions) (71) ===
    TokenEntry {
        id: 0x03e6,
        name: "share_country",
    },
    TokenEntry {
        id: 0x0231,
        name: "endgame",
    },
    TokenEntry {
        id: 0x019b,
        name: "selectablenations",
    },
    TokenEntry {
        id: 0x019a,
        name: "selectable",
    },
    TokenEntry {
        id: 0x019c,
        name: "header",
    },
    TokenEntry {
        id: 0x019d,
        name: "special",
    },
    TokenEntry {
        id: 0x019e,
        name: "remark",
    },
    TokenEntry {
        id: 0x019f,
        name: "category",
    },
    TokenEntry {
        id: 0x03e8,
        name: "HeadOfState",
    },
    TokenEntry {
        id: 0x03e9,
        name: "HeadOfGovernment",
    },
    TokenEntry {
        id: 0x03ea,
        name: "ForeignMinister",
    },
    TokenEntry {
        id: 0x03eb,
        name: "ArmamentMinister",
    },
    TokenEntry {
        id: 0x03ec,
        name: "MinisterOfSecurity",
    },
    TokenEntry {
        id: 0x03ed,
        name: "MinisterOfIntelligence",
    },
    TokenEntry {
        id: 0x03ee,
        name: "ChiefOfStaff",
    },
    TokenEntry {
        id: 0x03ef,
        name: "ChiefOfArmy",
    },
    TokenEntry {
        id: 0x03f0,
        name: "ChiefOfNavy",
    },
    TokenEntry {
        id: 0x03f1,
        name: "ChiefOfAir",
    },
    TokenEntry {
        id: 0x03f2,
        name: "InCabinet",
    },
    TokenEntry {
        id: 0x03f3,
        name: "reinforcing",
    },
    TokenEntry {
        id: 0x01d5,
        name: "victorycondition",
    },
    TokenEntry {
        id: 0x01d6,
        name: "vpvalue",
    },
    TokenEntry {
        id: 0x01d7,
        name: "penvalue",
    },
    TokenEntry {
        id: 0x01d8,
        name: "vpdesc",
    },
    TokenEntry {
        id: 0x01d9,
        name: "vpcondition",
    },
    TokenEntry {
        id: 0x01f7,
        name: "event",
    },
    TokenEntry {
        id: 0x01f8,
        name: "sleepevent",
    },
    TokenEntry {
        id: 0x01fe,
        name: "importance",
    },
    TokenEntry {
        id: 0x0202,
        name: "archivedgameevents",
    },
    TokenEntry {
        id: 0x0203,
        name: "generic",
    },
    TokenEntry {
        id: 0x0208,
        name: "tutorial",
    },
    TokenEntry {
        id: 0x0252,
        name: "event2start",
    },
    TokenEntry {
        id: 0x0254,
        name: "optionfile",
    },
    TokenEntry {
        id: 0x0258,
        name: "option",
    },
    TokenEntry {
        id: 0x0289,
        name: "tutorialfile",
    },
    TokenEntry {
        id: 0x0284,
        name: "set_rand_events",
    },
    TokenEntry {
        id: 0x0285,
        name: "set_hist_events",
    },
    TokenEntry {
        id: 0x025a,
        name: "optionmode",
    },
    TokenEntry {
        id: 0x0257,
        name: "saved",
    },
    TokenEntry {
        id: 0x03e7,
        name: "can_change_policy",
    },
    TokenEntry {
        id: 0x03d7,
        name: "setflag",
    },
    TokenEntry {
        id: 0x03d8,
        name: "clrflag",
    },
    TokenEntry {
        id: 0x03d9,
        name: "local_flag",
    },
    TokenEntry {
        id: 0x03da,
        name: "local_setflag",
    },
    TokenEntry {
        id: 0x03db,
        name: "local_clrflag",
    },
    TokenEntry {
        id: 0x03dc,
        name: "trigger",
    },
    TokenEntry {
        id: 0x03dd,
        name: "and",
    },
    TokenEntry {
        id: 0x03de,
        name: "or",
    },
    TokenEntry {
        id: 0x03df,
        name: "not",
    },
    TokenEntry {
        id: 0x03e0,
        name: "dormant",
    },
    TokenEntry {
        id: 0x03e1,
        name: "dormant_leaders",
    },
    TokenEntry {
        id: 0x03e2,
        name: "dormant_ministers",
    },
    TokenEntry {
        id: 0x03e3,
        name: "dormant_teams",
    },
    TokenEntry {
        id: 0x03e4,
        name: "which",
    },
    TokenEntry {
        id: 0x03e5,
        name: "free",
    },
    TokenEntry {
        id: 0x03f4,
        name: "action_a",
    },
    TokenEntry {
        id: 0x03f5,
        name: "action_b",
    },
    TokenEntry {
        id: 0x03f6,
        name: "action_c",
    },
    TokenEntry {
        id: 0x03f7,
        name: "action_d",
    },
    TokenEntry {
        id: 0x03f8,
        name: "command",
    },
    TokenEntry {
        id: 0x03f9,
        name: "style",
    },
    TokenEntry {
        id: 0x03fa,
        name: "random",
    },
    TokenEntry {
        id: 0x04f1,
        name: "recordedleaderevent",
    },
    TokenEntry {
        id: 0x057a,
        name: "decision",
    },
    TokenEntry {
        id: 0x057b,
        name: "decision_trigger",
    },
    TokenEntry {
        id: 0x057c,
        name: "decision_picture",
    },
    TokenEntry {
        id: 0x057d,
        name: "decision_desc",
    },
    TokenEntry {
        id: 0x057e,
        name: "alliance_leader",
    },
    TokenEntry {
        id: 0x057f,
        name: "alliance_name",
    },
    TokenEntry {
        id: 0x0580,
        name: "upgrade_time_boost",
    },
    TokenEntry {
        id: 0x0581,
        name: "queued_events",
    },
    // === §5: Спеціальні/службові (9) ===
    TokenEntry {
        id: 0x01d3,
        name: "b_years",
    },
    TokenEntry {
        id: 0x0600,
        name: "d_97",
    },
    TokenEntry {
        id: 0x0601,
        name: "d_98",
    },
    TokenEntry {
        id: 0x0602,
        name: "d_99",
    },
    TokenEntry {
        id: 0x0672,
        name: "b_rsv_36",
    },
    TokenEntry {
        id: 0x0673,
        name: "b_rsv_37",
    },
    TokenEntry {
        id: 0x0674,
        name: "b_rsv_38",
    },
    TokenEntry {
        id: 0x0675,
        name: "b_rsv_39",
    },
    TokenEntry {
        id: 0x0676,
        name: "b_rsv_40",
    },
    // === §5: Шпигуни/розвідка (17) ===
    TokenEntry {
        id: 0x052b,
        name: "NumberOfSpies",
    },
    TokenEntry {
        id: 0x0504,
        name: "SpyInfo",
    },
    TokenEntry {
        id: 0x0505,
        name: "spyFriendly",
    },
    TokenEntry {
        id: 0x04f5,
        name: "minister_assassination",
    },
    TokenEntry {
        id: 0x04f6,
        name: "send_spy",
    },
    TokenEntry {
        id: 0x04f7,
        name: "smear_campaign",
    },
    TokenEntry {
        id: 0x04f8,
        name: "coup",
    },
    TokenEntry {
        id: 0x04f9,
        name: "sabotage_industry",
    },
    TokenEntry {
        id: 0x04fa,
        name: "nuclear_sabotage",
    },
    TokenEntry {
        id: 0x04fb,
        name: "found_partisans",
    },
    TokenEntry {
        id: 0x04fc,
        name: "massmedia",
    },
    TokenEntry {
        id: 0x04ff,
        name: "counter_espionage",
    },
    TokenEntry {
        id: 0x0502,
        name: "percentage_on_spies",
    },
    TokenEntry {
        id: 0x0500,
        name: "spyprefsdata",
    },
    TokenEntry {
        id: 0x0503,
        name: "min_number_of_spies",
    },
    TokenEntry {
        id: 0x052c,
        name: "percentage_foreign_mission",
    },
    TokenEntry {
        id: 0x052d,
        name: "spy_status",
    },
    // === §5: AI-дипломатичні рішення/дії (20) ===
    TokenEntry {
        id: 0x0535,
        name: "declare_war",
    },
    TokenEntry {
        id: 0x0536,
        name: "offer_alliance",
    },
    TokenEntry {
        id: 0x0537,
        name: "bring_to_alliance",
    },
    TokenEntry {
        id: 0x0538,
        name: "join_alliance",
    },
    TokenEntry {
        id: 0x0539,
        name: "ban_from_alliance",
    },
    TokenEntry {
        id: 0x053a,
        name: "influence_nation",
    },
    TokenEntry {
        id: 0x053b,
        name: "ask_for_military_access",
    },
    TokenEntry {
        id: 0x053c,
        name: "cancel_military_access",
    },
    TokenEntry {
        id: 0x053d,
        name: "revoke_military_access",
    },
    TokenEntry {
        id: 0x0541,
        name: "guarantee_independence",
    },
    TokenEntry {
        id: 0x0542,
        name: "annex_nation",
    },
    TokenEntry {
        id: 0x0543,
        name: "demand_territory",
    },
    TokenEntry {
        id: 0x0544,
        name: "offer_non_aggression",
    },
    TokenEntry {
        id: 0x0545,
        name: "cancel_non_aggression",
    },
    TokenEntry {
        id: 0x0546,
        name: "offer_trade_agreement",
    },
    TokenEntry {
        id: 0x0547,
        name: "cancel_trade_agreement",
    },
    TokenEntry {
        id: 0x0548,
        name: "cancel_peace_treaty",
    },
    TokenEntry {
        id: 0x0549,
        name: "sue_for_peace",
    },
    TokenEntry {
        id: 0x054a,
        name: "release_puppet",
    },
    TokenEntry {
        id: 0x054b,
        name: "liberate_nation",
    },
    // === §5: Зарезервовані ID дивізій для модів (d_01..d_96) (96) ===
    TokenEntry {
        id: 0x05a0,
        name: "d_01",
    },
    TokenEntry {
        id: 0x05a1,
        name: "d_02",
    },
    TokenEntry {
        id: 0x05a2,
        name: "d_03",
    },
    TokenEntry {
        id: 0x05a3,
        name: "d_04",
    },
    TokenEntry {
        id: 0x05a4,
        name: "d_05",
    },
    TokenEntry {
        id: 0x05a5,
        name: "d_06",
    },
    TokenEntry {
        id: 0x05a6,
        name: "d_07",
    },
    TokenEntry {
        id: 0x05a7,
        name: "d_08",
    },
    TokenEntry {
        id: 0x05a8,
        name: "d_09",
    },
    TokenEntry {
        id: 0x05a9,
        name: "d_10",
    },
    TokenEntry {
        id: 0x05aa,
        name: "d_11",
    },
    TokenEntry {
        id: 0x05ab,
        name: "d_12",
    },
    TokenEntry {
        id: 0x05ac,
        name: "d_13",
    },
    TokenEntry {
        id: 0x05ad,
        name: "d_14",
    },
    TokenEntry {
        id: 0x05ae,
        name: "d_15",
    },
    TokenEntry {
        id: 0x05af,
        name: "d_16",
    },
    TokenEntry {
        id: 0x05b0,
        name: "d_17",
    },
    TokenEntry {
        id: 0x05b1,
        name: "d_18",
    },
    TokenEntry {
        id: 0x05b2,
        name: "d_19",
    },
    TokenEntry {
        id: 0x05b3,
        name: "d_20",
    },
    TokenEntry {
        id: 0x05b4,
        name: "d_21",
    },
    TokenEntry {
        id: 0x05b5,
        name: "d_22",
    },
    TokenEntry {
        id: 0x05b6,
        name: "d_23",
    },
    TokenEntry {
        id: 0x05b7,
        name: "d_24",
    },
    TokenEntry {
        id: 0x05b8,
        name: "d_25",
    },
    TokenEntry {
        id: 0x05b9,
        name: "d_26",
    },
    TokenEntry {
        id: 0x05ba,
        name: "d_27",
    },
    TokenEntry {
        id: 0x05bb,
        name: "d_28",
    },
    TokenEntry {
        id: 0x05bc,
        name: "d_29",
    },
    TokenEntry {
        id: 0x05bd,
        name: "d_30",
    },
    TokenEntry {
        id: 0x05be,
        name: "d_31",
    },
    TokenEntry {
        id: 0x05bf,
        name: "d_32",
    },
    TokenEntry {
        id: 0x05c0,
        name: "d_33",
    },
    TokenEntry {
        id: 0x05c1,
        name: "d_34",
    },
    TokenEntry {
        id: 0x05c2,
        name: "d_35",
    },
    TokenEntry {
        id: 0x05c3,
        name: "d_36",
    },
    TokenEntry {
        id: 0x05c4,
        name: "d_37",
    },
    TokenEntry {
        id: 0x05c5,
        name: "d_38",
    },
    TokenEntry {
        id: 0x05c6,
        name: "d_39",
    },
    TokenEntry {
        id: 0x05c7,
        name: "d_40",
    },
    TokenEntry {
        id: 0x05c8,
        name: "d_41",
    },
    TokenEntry {
        id: 0x05c9,
        name: "d_42",
    },
    TokenEntry {
        id: 0x05ca,
        name: "d_43",
    },
    TokenEntry {
        id: 0x05cb,
        name: "d_44",
    },
    TokenEntry {
        id: 0x05cc,
        name: "d_45",
    },
    TokenEntry {
        id: 0x05cd,
        name: "d_46",
    },
    TokenEntry {
        id: 0x05ce,
        name: "d_47",
    },
    TokenEntry {
        id: 0x05cf,
        name: "d_48",
    },
    TokenEntry {
        id: 0x05d0,
        name: "d_49",
    },
    TokenEntry {
        id: 0x05d1,
        name: "d_50",
    },
    TokenEntry {
        id: 0x05d2,
        name: "d_51",
    },
    TokenEntry {
        id: 0x05d3,
        name: "d_52",
    },
    TokenEntry {
        id: 0x05d4,
        name: "d_53",
    },
    TokenEntry {
        id: 0x05d5,
        name: "d_54",
    },
    TokenEntry {
        id: 0x05d6,
        name: "d_55",
    },
    TokenEntry {
        id: 0x05d7,
        name: "d_56",
    },
    TokenEntry {
        id: 0x05d8,
        name: "d_57",
    },
    TokenEntry {
        id: 0x05d9,
        name: "d_58",
    },
    TokenEntry {
        id: 0x05da,
        name: "d_59",
    },
    TokenEntry {
        id: 0x05db,
        name: "d_60",
    },
    TokenEntry {
        id: 0x05dc,
        name: "d_61",
    },
    TokenEntry {
        id: 0x05dd,
        name: "d_62",
    },
    TokenEntry {
        id: 0x05de,
        name: "d_63",
    },
    TokenEntry {
        id: 0x05df,
        name: "d_64",
    },
    TokenEntry {
        id: 0x05e0,
        name: "d_65",
    },
    TokenEntry {
        id: 0x05e1,
        name: "d_66",
    },
    TokenEntry {
        id: 0x05e2,
        name: "d_67",
    },
    TokenEntry {
        id: 0x05e3,
        name: "d_68",
    },
    TokenEntry {
        id: 0x05e4,
        name: "d_69",
    },
    TokenEntry {
        id: 0x05e5,
        name: "d_70",
    },
    TokenEntry {
        id: 0x05e6,
        name: "d_71",
    },
    TokenEntry {
        id: 0x05e7,
        name: "d_72",
    },
    TokenEntry {
        id: 0x05e8,
        name: "d_73",
    },
    TokenEntry {
        id: 0x05e9,
        name: "d_74",
    },
    TokenEntry {
        id: 0x05ea,
        name: "d_75",
    },
    TokenEntry {
        id: 0x05eb,
        name: "d_76",
    },
    TokenEntry {
        id: 0x05ec,
        name: "d_77",
    },
    TokenEntry {
        id: 0x05ed,
        name: "d_78",
    },
    TokenEntry {
        id: 0x05ee,
        name: "d_79",
    },
    TokenEntry {
        id: 0x05ef,
        name: "d_80",
    },
    TokenEntry {
        id: 0x05f0,
        name: "d_81",
    },
    TokenEntry {
        id: 0x05f1,
        name: "d_82",
    },
    TokenEntry {
        id: 0x05f2,
        name: "d_83",
    },
    TokenEntry {
        id: 0x05f3,
        name: "d_84",
    },
    TokenEntry {
        id: 0x05f4,
        name: "d_85",
    },
    TokenEntry {
        id: 0x05f5,
        name: "d_86",
    },
    TokenEntry {
        id: 0x05f6,
        name: "d_87",
    },
    TokenEntry {
        id: 0x05f7,
        name: "d_88",
    },
    TokenEntry {
        id: 0x05f8,
        name: "d_89",
    },
    TokenEntry {
        id: 0x05f9,
        name: "d_90",
    },
    TokenEntry {
        id: 0x05fa,
        name: "d_91",
    },
    TokenEntry {
        id: 0x05fb,
        name: "d_92",
    },
    TokenEntry {
        id: 0x05fc,
        name: "d_93",
    },
    TokenEntry {
        id: 0x05fd,
        name: "d_94",
    },
    TokenEntry {
        id: 0x05fe,
        name: "d_95",
    },
    TokenEntry {
        id: 0x05ff,
        name: "d_96",
    },
    // === §5: Зарезервовані ID бригад для модів (b_01..b_99) (99) ===
    TokenEntry {
        id: 0x0607,
        name: "b_01",
    },
    TokenEntry {
        id: 0x0608,
        name: "b_02",
    },
    TokenEntry {
        id: 0x0609,
        name: "b_03",
    },
    TokenEntry {
        id: 0x060a,
        name: "b_04",
    },
    TokenEntry {
        id: 0x060b,
        name: "b_05",
    },
    TokenEntry {
        id: 0x060c,
        name: "b_06",
    },
    TokenEntry {
        id: 0x060d,
        name: "b_07",
    },
    TokenEntry {
        id: 0x060e,
        name: "b_08",
    },
    TokenEntry {
        id: 0x060f,
        name: "b_09",
    },
    TokenEntry {
        id: 0x0610,
        name: "b_10",
    },
    TokenEntry {
        id: 0x0611,
        name: "b_11",
    },
    TokenEntry {
        id: 0x0612,
        name: "b_12",
    },
    TokenEntry {
        id: 0x0613,
        name: "b_13",
    },
    TokenEntry {
        id: 0x0614,
        name: "b_14",
    },
    TokenEntry {
        id: 0x0615,
        name: "b_15",
    },
    TokenEntry {
        id: 0x0616,
        name: "b_16",
    },
    TokenEntry {
        id: 0x0617,
        name: "b_17",
    },
    TokenEntry {
        id: 0x0618,
        name: "b_18",
    },
    TokenEntry {
        id: 0x0619,
        name: "b_19",
    },
    TokenEntry {
        id: 0x061a,
        name: "b_20",
    },
    TokenEntry {
        id: 0x061b,
        name: "b_21",
    },
    TokenEntry {
        id: 0x061c,
        name: "b_22",
    },
    TokenEntry {
        id: 0x061d,
        name: "b_23",
    },
    TokenEntry {
        id: 0x061e,
        name: "b_24",
    },
    TokenEntry {
        id: 0x061f,
        name: "b_25",
    },
    TokenEntry {
        id: 0x0620,
        name: "b_26",
    },
    TokenEntry {
        id: 0x0621,
        name: "b_27",
    },
    TokenEntry {
        id: 0x0622,
        name: "b_28",
    },
    TokenEntry {
        id: 0x0623,
        name: "b_29",
    },
    TokenEntry {
        id: 0x0624,
        name: "b_30",
    },
    TokenEntry {
        id: 0x0625,
        name: "b_31",
    },
    TokenEntry {
        id: 0x0626,
        name: "b_32",
    },
    TokenEntry {
        id: 0x0627,
        name: "b_33",
    },
    TokenEntry {
        id: 0x0628,
        name: "b_34",
    },
    TokenEntry {
        id: 0x0629,
        name: "b_35",
    },
    TokenEntry {
        id: 0x062a,
        name: "b_36",
    },
    TokenEntry {
        id: 0x062b,
        name: "b_37",
    },
    TokenEntry {
        id: 0x062c,
        name: "b_38",
    },
    TokenEntry {
        id: 0x062d,
        name: "b_39",
    },
    TokenEntry {
        id: 0x062e,
        name: "b_40",
    },
    TokenEntry {
        id: 0x062f,
        name: "b_41",
    },
    TokenEntry {
        id: 0x0630,
        name: "b_42",
    },
    TokenEntry {
        id: 0x0631,
        name: "b_43",
    },
    TokenEntry {
        id: 0x0632,
        name: "b_44",
    },
    TokenEntry {
        id: 0x0633,
        name: "b_45",
    },
    TokenEntry {
        id: 0x0634,
        name: "b_46",
    },
    TokenEntry {
        id: 0x0635,
        name: "b_47",
    },
    TokenEntry {
        id: 0x0636,
        name: "b_48",
    },
    TokenEntry {
        id: 0x0637,
        name: "b_49",
    },
    TokenEntry {
        id: 0x0638,
        name: "b_50",
    },
    TokenEntry {
        id: 0x0639,
        name: "b_51",
    },
    TokenEntry {
        id: 0x063a,
        name: "b_52",
    },
    TokenEntry {
        id: 0x063b,
        name: "b_53",
    },
    TokenEntry {
        id: 0x063c,
        name: "b_54",
    },
    TokenEntry {
        id: 0x063d,
        name: "b_55",
    },
    TokenEntry {
        id: 0x063e,
        name: "b_56",
    },
    TokenEntry {
        id: 0x063f,
        name: "b_57",
    },
    TokenEntry {
        id: 0x0640,
        name: "b_58",
    },
    TokenEntry {
        id: 0x0641,
        name: "b_59",
    },
    TokenEntry {
        id: 0x0642,
        name: "b_60",
    },
    TokenEntry {
        id: 0x0643,
        name: "b_61",
    },
    TokenEntry {
        id: 0x0644,
        name: "b_62",
    },
    TokenEntry {
        id: 0x0645,
        name: "b_63",
    },
    TokenEntry {
        id: 0x0646,
        name: "b_64",
    },
    TokenEntry {
        id: 0x0647,
        name: "b_65",
    },
    TokenEntry {
        id: 0x0648,
        name: "b_66",
    },
    TokenEntry {
        id: 0x0649,
        name: "b_67",
    },
    TokenEntry {
        id: 0x064a,
        name: "b_68",
    },
    TokenEntry {
        id: 0x064b,
        name: "b_69",
    },
    TokenEntry {
        id: 0x064c,
        name: "b_70",
    },
    TokenEntry {
        id: 0x064d,
        name: "b_71",
    },
    TokenEntry {
        id: 0x064e,
        name: "b_72",
    },
    TokenEntry {
        id: 0x064f,
        name: "b_73",
    },
    TokenEntry {
        id: 0x0650,
        name: "b_74",
    },
    TokenEntry {
        id: 0x0651,
        name: "b_75",
    },
    TokenEntry {
        id: 0x0652,
        name: "b_76",
    },
    TokenEntry {
        id: 0x0653,
        name: "b_77",
    },
    TokenEntry {
        id: 0x0654,
        name: "b_78",
    },
    TokenEntry {
        id: 0x0655,
        name: "b_79",
    },
    TokenEntry {
        id: 0x0656,
        name: "b_80",
    },
    TokenEntry {
        id: 0x0657,
        name: "b_81",
    },
    TokenEntry {
        id: 0x0658,
        name: "b_82",
    },
    TokenEntry {
        id: 0x0659,
        name: "b_83",
    },
    TokenEntry {
        id: 0x065a,
        name: "b_84",
    },
    TokenEntry {
        id: 0x065b,
        name: "b_85",
    },
    TokenEntry {
        id: 0x065c,
        name: "b_86",
    },
    TokenEntry {
        id: 0x065d,
        name: "b_87",
    },
    TokenEntry {
        id: 0x065e,
        name: "b_88",
    },
    TokenEntry {
        id: 0x065f,
        name: "b_89",
    },
    TokenEntry {
        id: 0x0660,
        name: "b_90",
    },
    TokenEntry {
        id: 0x0661,
        name: "b_91",
    },
    TokenEntry {
        id: 0x0662,
        name: "b_92",
    },
    TokenEntry {
        id: 0x0663,
        name: "b_93",
    },
    TokenEntry {
        id: 0x0664,
        name: "b_94",
    },
    TokenEntry {
        id: 0x0665,
        name: "b_95",
    },
    TokenEntry {
        id: 0x0666,
        name: "b_96",
    },
    TokenEntry {
        id: 0x0667,
        name: "b_97",
    },
    TokenEntry {
        id: 0x0668,
        name: "b_98",
    },
    TokenEntry {
        id: 0x0669,
        name: "b_99",
    },
];

/// Лінійний пошук ID за словом (аналог BST `FUN_00429fa0` у exe).
pub fn lookup(name: &str) -> Option<u16> {
    TOKENS.iter().find(|t| t.name == name).map(|t| t.id)
}

/// Зворотний пошук: слово за ID (аналог `FUN_005341fe` у exe).
pub fn name(id: u16) -> Option<&'static str> {
    TOKENS.iter().find(|t| t.id == id).map(|t| t.name)
}

/// Кількість токенів у реєстрі.
pub fn count() -> usize {
    TOKENS.len()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn token_count_matches_report() {
        // RE-scripts.md §6: усього 1669 токенів (249 + 1420); §5 «Повний список токенів — 1669».
        assert_eq!(count(), 1669);
    }

    #[test]
    fn all_ids_and_names_are_unique() {
        // RE-scripts.md §6: «Усі 1669 імен унікальні».
        use std::collections::HashSet;
        let ids: HashSet<u16> = TOKENS.iter().map(|t| t.id).collect();
        let names: HashSet<&str> = TOKENS.iter().map(|t| t.name).collect();
        assert_eq!(ids.len(), count());
        assert_eq!(names.len(), count());
    }

    #[test]
    fn lookup_and_name_roundtrip() {
        // Перший і останній записи реєстру (діапазон ID 0xB..0x699, RE-scripts.md §6).
        let first = TOKENS[0];
        assert_eq!(lookup(first.name), Some(first.id));
        assert_eq!(name(first.id), Some(first.name));
        let last = TOKENS[TOKENS.len() - 1];
        assert_eq!(lookup(last.name), Some(last.id));
        assert_eq!(name(last.id), Some(last.name));
        assert_eq!(lookup("немає_такого_слова"), None);
        assert_eq!(name(0xFFFF), None);
    }
}
