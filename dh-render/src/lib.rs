//! Рендер: канвас, мапа, текст.

pub mod canvas;
pub mod map_render;
pub mod text;
pub mod wgpu_canvas;

/// Шкала води політичної карти гри: блок 23 («water») | біт 0x20 (темна
/// половина). FUN_004dcb20 case 0: вода → 0x17; FUN_004e8a40: для провінцій,
/// не видимих гравцеві, scale |= 0x20 — море завжди таке (спостережено в
/// дампі живої гри: 607 морських провінцій мають scale 55).
pub const WATER_SCALE_DARK: u8 = 23 | 0x20;