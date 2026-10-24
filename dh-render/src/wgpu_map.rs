//! GPU-рендер мапи: lightmap + палітра/LUT безпосередньо в шейдері.
//!
//! Замість рендера кадру на CPU (MapRenderer у Canvas → аплоад текстури)
//! шейдер сам перетворює дані lightmap у колір:
//!
//! ```text
//! колір = palette[ (LUT[light + 32] << 6) | (scale & 0x3F) ]
//! ```
//!
//! (RE: map_color.rs — LUT[i] = clamp(i + 47, 4, 127), відхилення off = 15,
//! тож LUT[light − 15] = clamp(light + 32, 4, 127).) Семантика повністю
//! повторює [`crate::map_render`] за моделі (color_model + prov_scales):
//!
//! - **region** — R32Uint-текстура: видимий прямокутник світлопікселів
//!   поточного рівня lightmap (L1..L4), пак `(prov_id << 8) | light`;
//!   видимі тайли квадродерева декодуються на CPU і заливаються раз на
//!   [`GpuRenderer::set_view`] (один тайл покриває 32² світлопікселів);
//! - **scales** — R32Uint 4096×1: шкала провінції (власник → колір country.csv);
//! - **palette** — RGBA8 8192×1: RGB565-палітра, розгорнута без втрат;
//! - **river_blocks** — R32Uint 936×360: index.tbl (номер тайла річки блока);
//! - **river_atlas** — RGBA8 8192×1408: tiles.bmp (α=0 = прозорий).
//!
//! Три проходи, кожен — повноекранний трикутник (координати з
//! `@builtin(position)`, без інтерполянтів):
//! 1) мапа (без бленду; поза межами мапи — колір океану);
//! 2) річки поверх (src-over, discard де немає річки);
//! 3) HUD-текст із CPU-канваса.
//!
//! Відповідність CPU-шляху байт-у-байт перевіряється прикладом `gpu_compare_png`.
//!
//! Обмеження: GPU-шлях покриває модель `color_model + prov_scales`
//! (політична карта гри). Терен/провінції-кольори без моделі — CPU-шлях
//! (`map_render::MapRenderer` + `WgpuCanvas`, режим `--backend soft`).

use std::num::NonZeroU64;

use anyhow::Context;
use dh_format::map::{MapData, TileInfo, ATLAS_W, BLOCKS_X, BLOCKS_Y};
use dh_format::map_color::GameColorModel;
use wgpu_types::WgpuHasDisplayHandle;
use winit::window::Window;

use crate::canvas::Canvas;
use crate::map_render::Viewport;

/// Розмір світу в пікселях мапи (936×360 блоків по 32).
const WORLD_PX_W: i32 = BLOCKS_X as i32 * 32;
const WORLD_PX_H: i32 = BLOCKS_Y as i32 * 32;
/// Висота атласа річок tiles.bmp (8192×1408).
const ATLAS_H: u32 = 1408;
/// Розмір таблиці шкал провінцій (PROV_MAX ~2769 + запас).
const SCALES_LEN: u32 = 4096;
const DEF_W: u32 = 1;
const DEF_H: u32 = 1;

/// Колір океану поза межами мапи — той самий, що [`crate::map_render::OCEAN_COLOR`].
const OCEAN: [f32; 3] = [135.0 / 255.0, 172.0 / 255.0, 216.0 / 255.0];

/// Вибір бекенда рендера (перемикач `--backend`).
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum Backend {
    /// wgpu з бекендами за замовчуванням (або WGPU_BACKEND env).
    Auto,
    /// CPU-канвас (MapRenderer + WgpuCanvas) — без GPU-шейдерів.
    Soft,
    Vulkan,
    Gl,
    Dx12,
}

impl Backend {
    pub fn parse(s: &str) -> Option<Self> {
        Some(match s.to_ascii_lowercase().as_str() {
            "auto" => Self::Auto,
            "soft" | "cpu" => Self::Soft,
            "vulkan" | "vk" => Self::Vulkan,
            "gl" | "gles" | "opengl" => Self::Gl,
            "dx" | "dx12" | "d3d12" => Self::Dx12,
            _ => return None,
        })
    }

    pub fn wgpu_backends(self) -> Option<wgpu::Backends> {
        Some(match self {
            Self::Auto => wgpu::Backends::all(),
            Self::Soft => return None,
            Self::Vulkan => wgpu::Backends::VULKAN,
            Self::Gl => wgpu::Backends::GL,
            Self::Dx12 => wgpu::Backends::DX12,
        })
    }

    pub fn name(self) -> &'static str {
        match self {
            Self::Auto => "auto",
            Self::Soft => "soft",
            Self::Vulkan => "vulkan",
            Self::Gl => "gl",
            Self::Dx12 => "dx12",
        }
    }
}

// ============================================================================
// Uniform-буфер і шейдери
// ============================================================================

/// Uniform-дані (std140-сумісний layout, 48 байт: WGSL округлює розмір
/// uniform-структури до 16, тому _pad = 4×u32).
#[repr(C)]
#[derive(Clone, Copy, Debug)]
struct Uniforms {
    /// Лівий верхній кут в'юпорта в пікселях мапи.
    cam_world: [i32; 2],
    /// Розмір рівня lightmap у світлопікселях (29952>>lv × 11520>>lv).
    level: [i32; 2],
    /// Перший світлопіксель region-текстури (cam_world >> lv).
    lo: [i32; 2],
    /// zoom (i32) та індекс рівня lightmap lv (0..=3).
    zoom: i32,
    lv: i32,
    _pad: [u32; 4],
}

const SHADER_BASE: &str = r#"
struct MapVsOut {
    @builtin(position) pos: vec4f,
};

@vertex
fn vs_main(@builtin(vertex_index) vi: u32) -> MapVsOut {
    var o: MapVsOut;
    // Повноекранний трикутник: вершини (-1,-1), (3,-1), (-1,3) покривають
    // весь в'юпорт; фрагментні функції читають @builtin(position).
    let x = f32(i32(vi & 1u) * 4 - 1);
    let y = f32(i32((vi >> 1u) & 1u) * 4 - 1);
    o.pos = vec4f(x, -y, 0.0, 1.0);
    return o;
}
"#;

const SHADER_UNIFORM: &str = r#"
struct Uniforms {
    cam_world: vec2i,
    level: vec2i,
    lo: vec2i,
    zoom: i32,
    lv: i32,
    _pad: vec4u,
};
@group(0) @binding(0) var<uniform> u: Uniforms;

// Піксель мапи для екранного пікселя (frag_pos = px + 0.5 → i32 → px).
fn map_px(p: vec2i) -> vec2i {
    if (u.zoom >= 0) {
        return u.cam_world + (p >> vec2u(u32(u.zoom)));
    }
    return u.cam_world + (p << vec2u(u32(-u.zoom)));
}

// Світлопіксель рівня для екранного пікселя.
fn light_px(p: vec2i) -> vec2i {
    if (u.zoom >= 0) {
        return map_px(p) >> vec2u(u32(u.lv));
    }
    // (cam + p·2^k) >> k == (cam >> k) + p точно при будь-якому cam.
    return u.lo + p;
}
"#;

const SHADER_MAP: &str = r#"
@group(1) @binding(0) var region_tex: texture_2d<u32>;
@group(1) @binding(1) var scales_tex: texture_2d<u32>;
@group(1) @binding(2) var palette_tex: texture_2d<f32>;

@fragment
fn fs(in: MapVsOut) -> @location(0) vec4f {
    let p = vec2i(i32(in.pos.x), i32(in.pos.y));
    let light = light_px(p);
    if (light.x < 0 || light.y < 0 || light.x >= u.level.x || light.y >= u.level.y) {
        return vec4f(135.0 / 255.0, 172.0 / 255.0, 216.0 / 255.0, 1.0); // океан
    }
    let texel = light - u.lo;
    let data = textureLoad(region_tex, texel, 0).r;
    let prov = data >> 8u;
    let light_val = data & 63u;
    let scale = textureLoad(scales_tex, vec2i(i32(prov), 0), 0).r;
    // LUT[light − 15] = clamp(light + 32, 4, 127) (RE: off = 15 стабільно).
    let light2 = clamp(light_val + 32u, 4u, 127u);
    let idx = ((light2 << 6u) | (scale & 63u)) & 0x1FFFu;
    let c = textureLoad(palette_tex, vec2i(i32(idx), 0), 0);
    return vec4f(c.rgb, 1.0);
}
"#;

const SHADER_RIVER: &str = r#"
@group(1) @binding(0) var river_blocks_tex: texture_2d<u32>;
@group(1) @binding(1) var river_atlas_tex: texture_2d<f32>;

@fragment
fn fs(in: MapVsOut) -> @location(0) vec4f {
    let p = vec2i(i32(in.pos.x), i32(in.pos.y));
    let map = map_px(p);
    if (map.x < 0 || map.y < 0 || map.x >= 29952 || map.y >= 11520) {
        discard;
    }
    let block = map >> vec2u(5u);
    let idx = textureLoad(river_blocks_tex, block, 0).r;
    if (idx == 0u) {
        discard;
    }
    let tile_x = (idx % 256u) * 32u;
    let tile_y = (idx / 256u) * 32u;
    let local = map & vec2i(31);
    let c = textureLoad(river_atlas_tex, vec2i(i32(tile_x) + local.x, i32(tile_y) + local.y), 0);
    if (c.a < 0.5) {
        discard; // прозорий піксель атласа
    }
    return c;
}
"#;

const SHADER_HUD: &str = r#"
@group(0) @binding(0) var hud_tex: texture_2d<f32>;

@fragment
fn fs_hud(in: MapVsOut) -> @location(0) vec4f {
    let p = vec2i(i32(in.pos.x), i32(in.pos.y));
    return textureLoad(hud_tex, p, 0);
}
"#;

/// Рамки провінцій: список сегментів у NDC (вершини з CPU), колір білий;
/// `fs_highlight` — жовта підсвітка вибраної провінції (той самий vs_frames).
const SHADER_FRAMES: &str = r#"
@vertex
fn vs_frames(@location(0) pos: vec2f) -> @builtin(position) vec4f {
    return vec4f(pos, 0.0, 1.0);
}

@fragment
fn fs_frames() -> @location(0) vec4f {
    return vec4f(1.0, 1.0, 1.0, 1.0);
}

@fragment
fn fs_highlight() -> @location(0) vec4f {
    return vec4f(1.0, 0.82, 0.2, 1.0);
}
"#;

fn map_shader() -> String {
    let mut s = String::from(SHADER_BASE);
    s.push_str(SHADER_UNIFORM);
    s.push_str(SHADER_MAP);
    s
}

fn river_shader() -> String {
    let mut s = String::from(SHADER_BASE);
    s.push_str(SHADER_UNIFORM);
    s.push_str(SHADER_RIVER);
    s
}

fn hud_shader() -> String {
    // HUD проходить без uniform-групи (своя bgl), тож без SHADER_UNIFORM.
    let mut s = String::from(SHADER_BASE);
    s.push_str(SHADER_HUD);
    s
}

// ============================================================================
// Допоміжні утиліти (без bytemuck)
// ============================================================================

/// u32 LE → байти.
fn u32s_to_bytes(v: &[u32]) -> Vec<u8> {
    let mut out = Vec::with_capacity(v.len() * 4);
    for x in v {
        out.extend_from_slice(&x.to_le_bytes());
    }
    out
}

/// Створює R32Uint-текстуру й заливає її даними (з вирівнюванням рядків до 256 Б).
fn texture_r32(
    device: &wgpu::Device,
    queue: &wgpu::Queue,
    label: &str,
    w: u32,
    h: u32,
    data: &[u32],
) -> wgpu::Texture {
    let tex = device.create_texture(&wgpu::TextureDescriptor {
        label: Some(label),
        size: wgpu::Extent3d {
            width: w.max(1),
            height: h.max(1),
            depth_or_array_layers: 1,
        },
        mip_level_count: 1,
        sample_count: 1,
        dimension: wgpu::TextureDimension::D2,
        format: wgpu::TextureFormat::R32Uint,
        usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
        view_formats: &[],
    });
    let bytes = u32s_to_bytes(data);
    let row_bytes = w.max(1) * 4;
    let padded = row_bytes.next_multiple_of(256);
    let (buf, bpr) = if padded == row_bytes {
        (bytes, padded)
    } else {
        let mut pb = vec![0u8; padded as usize * h.max(1) as usize];
        for (row, chunk) in bytes.chunks_exact(row_bytes as usize).enumerate() {
            pb[row * padded as usize..row * padded as usize + row_bytes as usize]
                .copy_from_slice(chunk);
        }
        (pb, padded)
    };
    queue.write_texture(
        wgpu::TexelCopyTextureInfo {
            texture: &tex,
            mip_level: 0,
            origin: wgpu::Origin3d::ZERO,
            aspect: wgpu::TextureAspect::All,
        },
        &buf,
        wgpu::TexelCopyBufferLayout {
            offset: 0,
            bytes_per_row: Some(bpr),
            rows_per_image: Some(h.max(1)),
        },
        wgpu::Extent3d {
            width: w.max(1),
            height: h.max(1),
            depth_or_array_layers: 1,
        },
    );
    tex
}

/// Canvas ARGB8888 → RGBA8-байти (для HUD-завантаження).
/// Alpha = 255 ЛИШЕ там, де є пікселі (канвас прозорий за замовчуванням):
/// інакше порожній HUD-квад із alpha=255 був би непрозорим чорним
/// прямокутником ПОВЕРХ мапи (src-over бленд у HUD-проході).
fn canvas_to_rgba(c: &Canvas) -> Vec<u8> {
    let w = c.width() as usize;
    let h = c.height() as usize;
    let mut rgba = vec![0u8; w * h * 4];
    for (i, &px) in c.buf().iter().take(w * h).enumerate() {
        if px != 0 {
            rgba[i * 4] = ((px >> 16) & 0xFF) as u8;
            rgba[i * 4 + 1] = ((px >> 8) & 0xFF) as u8;
            rgba[i * 4 + 2] = (px & 0xFF) as u8;
            rgba[i * 4 + 3] = 0xFF;
        }
        // px == 0 → прозорий (всі канали 0, alpha 0)
    }
    rgba
}

// ============================================================================
// GpuRenderer
// ============================================================================

/// GPU-рендер мапи: поверхня (або headless), статичні дані мапи, проходи.
pub struct GpuRenderer<'a> {
    #[allow(dead_code)]
    instance: wgpu::Instance,
    surface: Option<wgpu::Surface<'a>>,
    device: wgpu::Device,
    queue: wgpu::Queue,
    config: Option<wgpu::SurfaceConfiguration>,
    /// Розмір кадру для headless-режиму (встановлює set_view).
    screen: (u32, u32),

    // Статичні дані мапи.
    map: Option<MapData>,
    river_blocks: Option<wgpu::Texture>,
    river_atlas: Option<wgpu::Texture>,
    palette: Option<wgpu::Texture>,
    scales: Option<wgpu::Texture>,

    // Region-текстура видимого прямокутника світлопікселів.
    region: wgpu::Texture,
    region_view: wgpu::TextureView,
    region_pack: Vec<u32>,
    region_w: u32,
    region_h: u32,
    region_stride: u32, // вирівняний до 256 байт рядок, у u32
    /// Рівень lightmap, для якого зібрано region_pack (u32::MAX = порожньо).
    region_lv: u32,

    uniforms: wgpu::Buffer,
    uniform_data: Uniforms,
    uniform_bg: wgpu::BindGroup,

    hud: Canvas,
    hud_texture: wgpu::Texture,
    hud_view: wgpu::TextureView,

    bgl_map: wgpu::BindGroupLayout,
    bgl_river: wgpu::BindGroupLayout,
    bgl_hud: wgpu::BindGroupLayout,
    bg_map: wgpu::BindGroup,
    bg_river: wgpu::BindGroup,
    bg_hud: wgpu::BindGroup,
    pipeline_map: wgpu::RenderPipeline,
    pipeline_river: wgpu::RenderPipeline,
    pipeline_hud: wgpu::RenderPipeline,
    /// Рамки провінцій: вершини сегментів у NDC (оновлюються [`Self::set_province_frames`]).
    frames_vb: Option<wgpu::Buffer>,
    frames_count: u32,
    pipeline_frames: wgpu::RenderPipeline,
    /// Підсвітка вибраної провінції (жовтий, [`Self::set_highlight_rect`]).
    highlight_vb: Option<wgpu::Buffer>,
    highlight_count: u32,
    pipeline_highlight: wgpu::RenderPipeline,
}

impl<'a> GpuRenderer<'a> {
    /// Спільна збірка після створення instance/device.
    fn assemble(
        instance: wgpu::Instance,
        surface: Option<wgpu::Surface<'a>>,
        device: wgpu::Device,
        queue: wgpu::Queue,
        config: Option<wgpu::SurfaceConfiguration>,
    ) -> anyhow::Result<Self> {
        let region = device.create_texture(&wgpu::TextureDescriptor {
            label: Some("region"),
            size: wgpu::Extent3d {
                width: 1,
                height: 1,
                depth_or_array_layers: 1,
            },
            mip_level_count: 1,
            sample_count: 1,
            dimension: wgpu::TextureDimension::D2,
            format: wgpu::TextureFormat::R32Uint,
            usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
            view_formats: &[],
        });
        let region_view = region.create_view(&wgpu::TextureViewDescriptor::default());

        let hud_texture = device.create_texture(&wgpu::TextureDescriptor {
            label: Some("hud"),
            size: wgpu::Extent3d {
                width: DEF_W,
                height: DEF_H,
                depth_or_array_layers: 1,
            },
            mip_level_count: 1,
            sample_count: 1,
            dimension: wgpu::TextureDimension::D2,
            format: wgpu::TextureFormat::Rgba8Unorm,
            usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
            view_formats: &[],
        });
        let hud_view = hud_texture.create_view(&wgpu::TextureViewDescriptor::default());

        let uniforms = device.create_buffer(&wgpu::BufferDescriptor {
            label: Some("uniforms"),
            size: std::mem::size_of::<Uniforms>() as u64,
            usage: wgpu::BufferUsages::UNIFORM | wgpu::BufferUsages::COPY_DST,
            mapped_at_creation: false,
        });
        let uniform_data = Uniforms {
            cam_world: [0, 0],
            level: [WORLD_PX_W, WORLD_PX_H],
            lo: [0, 0],
            zoom: 0,
            lv: 0,
            _pad: [0, 0, 0, 0],
        };

        let uniform_bgl = device.create_bind_group_layout(&wgpu::BindGroupLayoutDescriptor {
            label: Some("uniform bgl"),
            entries: &[wgpu::BindGroupLayoutEntry {
                binding: 0,
                visibility: wgpu::ShaderStages::VERTEX_FRAGMENT,
                ty: wgpu::BindingType::Buffer {
                    ty: wgpu::BufferBindingType::Uniform,
                    has_dynamic_offset: false,
                    min_binding_size: NonZeroU64::new(std::mem::size_of::<Uniforms>() as u64),
                },
                count: None,
            }],
        });
        let uniform_bg = device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("uniform bg"),
            layout: &uniform_bgl,
            entries: &[wgpu::BindGroupEntry {
                binding: 0,
                resource: wgpu::BindingResource::Buffer(wgpu::BufferBinding {
                    buffer: &uniforms,
                    offset: 0,
                    size: None,
                }),
            }],
        });

        let bgl_map = device.create_bind_group_layout(&wgpu::BindGroupLayoutDescriptor {
            label: Some("map bgl"),
            entries: &[
                tex_binding(0, wgpu::TextureSampleType::Uint),
                tex_binding(1, wgpu::TextureSampleType::Uint),
                tex_binding(2, wgpu::TextureSampleType::Float { filterable: false }),
            ],
        });
        let bgl_river = device.create_bind_group_layout(&wgpu::BindGroupLayoutDescriptor {
            label: Some("river bgl"),
            entries: &[
                tex_binding(0, wgpu::TextureSampleType::Uint),
                tex_binding(1, wgpu::TextureSampleType::Float { filterable: false }),
            ],
        });
        let bgl_hud = device.create_bind_group_layout(&wgpu::BindGroupLayoutDescriptor {
            label: Some("hud bgl"),
            entries: &[tex_binding(
                0,
                wgpu::TextureSampleType::Float { filterable: false },
            )],
        });

        // Заглушки для bind groups до set_map/set_scales (валидні, 1×1).
        let bogus = |f: wgpu::TextureFormat| {
            device.create_texture(&wgpu::TextureDescriptor {
                label: Some("bogus"),
                size: wgpu::Extent3d {
                    width: 1,
                    height: 1,
                    depth_or_array_layers: 1,
                },
                mip_level_count: 1,
                sample_count: 1,
                dimension: wgpu::TextureDimension::D2,
                format: f,
                usage: wgpu::TextureUsages::TEXTURE_BINDING,
                view_formats: &[],
            })
        };
        let view_of = |t: &wgpu::Texture| t.create_view(&wgpu::TextureViewDescriptor::default());
        let t_r32 = bogus(wgpu::TextureFormat::R32Uint);
        let t_rgba = bogus(wgpu::TextureFormat::Rgba8Unorm);
        let bg_map = device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("map bg (stub)"),
            layout: &bgl_map,
            entries: &[
                wgpu::BindGroupEntry {
                    binding: 0,
                    resource: wgpu::BindingResource::TextureView(&region_view),
                },
                wgpu::BindGroupEntry {
                    binding: 1,
                    resource: wgpu::BindingResource::TextureView(&view_of(&t_r32)),
                },
                wgpu::BindGroupEntry {
                    binding: 2,
                    resource: wgpu::BindingResource::TextureView(&view_of(&t_rgba)),
                },
            ],
        });
        let bg_river = device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("river bg (stub)"),
            layout: &bgl_river,
            entries: &[
                wgpu::BindGroupEntry {
                    binding: 0,
                    resource: wgpu::BindingResource::TextureView(&view_of(&t_r32)),
                },
                wgpu::BindGroupEntry {
                    binding: 1,
                    resource: wgpu::BindingResource::TextureView(&view_of(&t_rgba)),
                },
            ],
        });
        let bg_hud = device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("hud bg (stub)"),
            layout: &bgl_hud,
            entries: &[wgpu::BindGroupEntry {
                binding: 0,
                resource: wgpu::BindingResource::TextureView(&hud_view),
            }],
        });

        // Піплайни. Формат цілі: Rgba8Unorm (headless і windowed — без гамми).
        let fmt = config
            .as_ref()
            .map(|c| c.format)
            .unwrap_or(wgpu::TextureFormat::Rgba8Unorm);
        let mk =
            |role: &str, bgl: &wgpu::BindGroupLayout, shader: &wgpu::ShaderModule, blend: bool| {
                let layout = device.create_pipeline_layout(&wgpu::PipelineLayoutDescriptor {
                    label: Some(&format!("{role} pl")),
                    bind_group_layouts: &[Some(&uniform_bgl), Some(bgl)],
                    immediate_size: 0,
                });
                device.create_render_pipeline(&wgpu::RenderPipelineDescriptor {
                    label: Some(&format!("{role} pipeline")),
                    layout: Some(&layout),
                    vertex: wgpu::VertexState {
                        module: shader,
                        entry_point: Some("vs_main"),
                        compilation_options: Default::default(),
                        buffers: &[],
                    },
                    fragment: Some(wgpu::FragmentState {
                        module: shader,
                        entry_point: Some("fs"),
                        compilation_options: Default::default(),
                        targets: &[Some(wgpu::ColorTargetState {
                            format: fmt,
                            blend: if blend {
                                Some(wgpu::BlendState::ALPHA_BLENDING)
                            } else {
                                None
                            },
                            write_mask: wgpu::ColorWrites::ALL,
                        })],
                    }),
                    primitive: wgpu::PrimitiveState::default(),
                    depth_stencil: None,
                    multisample: wgpu::MultisampleState::default(),
                    multiview_mask: None,
                    cache: None,
                })
            };
        let shader_map = device.create_shader_module(wgpu::ShaderModuleDescriptor {
            label: Some("map shader"),
            source: wgpu::ShaderSource::Wgsl(map_shader().into()),
        });
        let shader_river = device.create_shader_module(wgpu::ShaderModuleDescriptor {
            label: Some("river shader"),
            source: wgpu::ShaderSource::Wgsl(river_shader().into()),
        });
        let shader_hud = device.create_shader_module(wgpu::ShaderModuleDescriptor {
            label: Some("hud shader"),
            source: wgpu::ShaderSource::Wgsl(hud_shader().into()),
        });
        let shader_frames = device.create_shader_module(wgpu::ShaderModuleDescriptor {
            label: Some("frames shader"),
            source: wgpu::ShaderSource::Wgsl(SHADER_FRAMES.into()),
        });
        // HUD-піплайн: без uniform-групи.
        let hud_layout = device.create_pipeline_layout(&wgpu::PipelineLayoutDescriptor {
            label: Some("hud pl"),
            bind_group_layouts: &[Some(&bgl_hud)],
            immediate_size: 0,
        });
        let pipeline_hud = device.create_render_pipeline(&wgpu::RenderPipelineDescriptor {
            label: Some("hud pipeline"),
            layout: Some(&hud_layout),
            vertex: wgpu::VertexState {
                module: &shader_hud,
                entry_point: Some("vs_main"),
                compilation_options: Default::default(),
                buffers: &[],
            },
            fragment: Some(wgpu::FragmentState {
                module: &shader_hud,
                entry_point: Some("fs_hud"),
                compilation_options: Default::default(),
                targets: &[Some(wgpu::ColorTargetState {
                    format: fmt,
                    blend: Some(wgpu::BlendState::ALPHA_BLENDING),
                    write_mask: wgpu::ColorWrites::ALL,
                })],
            }),
            primitive: wgpu::PrimitiveState::default(),
            depth_stencil: None,
            multisample: wgpu::MultisampleState::default(),
            multiview_mask: None,
            cache: None,
        });
        let pipeline_map = mk("map", &bgl_map, &shader_map, false);
        let pipeline_river = mk("river", &bgl_river, &shader_river, true);

        // Піплайн рамок: без бінд-груп, LineList, вершини vec2f у NDC.
        let pipeline_frames = device.create_render_pipeline(&wgpu::RenderPipelineDescriptor {
            label: Some("frames pipeline"),
            layout: Some(
                &device.create_pipeline_layout(&wgpu::PipelineLayoutDescriptor {
                    label: Some("frames pl"),
                    bind_group_layouts: &[],
                    immediate_size: 0,
                }),
            ),
            vertex: wgpu::VertexState {
                module: &shader_frames,
                entry_point: Some("vs_frames"),
                compilation_options: Default::default(),
                buffers: &[Some(wgpu::VertexBufferLayout {
                    array_stride: 8,
                    step_mode: wgpu::VertexStepMode::Vertex,
                    attributes: &[wgpu::VertexAttribute {
                        format: wgpu::VertexFormat::Float32x2,
                        offset: 0,
                        shader_location: 0,
                    }],
                })],
            },
            fragment: Some(wgpu::FragmentState {
                module: &shader_frames,
                entry_point: Some("fs_frames"),
                compilation_options: Default::default(),
                targets: &[Some(wgpu::ColorTargetState {
                    format: fmt,
                    blend: None,
                    write_mask: wgpu::ColorWrites::ALL,
                })],
            }),
            primitive: wgpu::PrimitiveState {
                topology: wgpu::PrimitiveTopology::LineList,
                ..Default::default()
            },
            depth_stencil: None,
            multisample: wgpu::MultisampleState::default(),
            multiview_mask: None,
            cache: None,
        });

        // Піплайн підсвітки: типовий vs_frames + жовтий fs_highlight.
        let pipeline_highlight = device.create_render_pipeline(&wgpu::RenderPipelineDescriptor {
            label: Some("highlight pipeline"),
            layout: Some(
                &device.create_pipeline_layout(&wgpu::PipelineLayoutDescriptor {
                    label: Some("highlight pl"),
                    bind_group_layouts: &[],
                    immediate_size: 0,
                }),
            ),
            vertex: wgpu::VertexState {
                module: &shader_frames,
                entry_point: Some("vs_frames"),
                compilation_options: Default::default(),
                buffers: &[Some(wgpu::VertexBufferLayout {
                    array_stride: 8,
                    step_mode: wgpu::VertexStepMode::Vertex,
                    attributes: &[wgpu::VertexAttribute {
                        format: wgpu::VertexFormat::Float32x2,
                        offset: 0,
                        shader_location: 0,
                    }],
                })],
            },
            fragment: Some(wgpu::FragmentState {
                module: &shader_frames,
                entry_point: Some("fs_highlight"),
                compilation_options: Default::default(),
                targets: &[Some(wgpu::ColorTargetState {
                    format: fmt,
                    blend: None,
                    write_mask: wgpu::ColorWrites::ALL,
                })],
            }),
            primitive: wgpu::PrimitiveState {
                topology: wgpu::PrimitiveTopology::LineList,
                ..Default::default()
            },
            depth_stencil: None,
            multisample: wgpu::MultisampleState::default(),
            multiview_mask: None,
            cache: None,
        });

        Ok(GpuRenderer {
            instance,
            surface,
            device,
            queue,
            config,
            screen: (DEF_W, DEF_H),
            map: None,
            river_blocks: None,
            river_atlas: None,
            palette: None,
            scales: None,
            region,
            region_view,
            region_pack: Vec::new(),
            region_w: 1,
            region_h: 1,
            region_stride: 1,
            region_lv: u32::MAX,
            uniforms,
            uniform_data,
            uniform_bg: uniform_bg,
            hud: Canvas::new(DEF_W, DEF_H),
            hud_texture,
            hud_view,
            bgl_map,
            bgl_river,
            bgl_hud,
            bg_map,
            bg_river,
            bg_hud,
            pipeline_map,
            pipeline_river,
            pipeline_hud,
            frames_vb: None,
            frames_count: 0,
            pipeline_frames,
            highlight_vb: None,
            highlight_count: 0,
            pipeline_highlight,
        })
    }

    /// Headless-рендерер (без поверхні) для офскрін-рендера й тестів.
    pub fn new_headless() -> anyhow::Result<Self> {
        Self::new_headless_backend(Backend::Auto)
    }

    pub fn new_headless_backend(backend: Backend) -> anyhow::Result<Self> {
        let mut desc = wgpu::InstanceDescriptor::new_without_display_handle();
        if let Some(b) = backend.wgpu_backends() {
            desc.backends = b;
        }
        let instance = wgpu::Instance::new(desc);
        let adapter = pollster::block_on(instance.request_adapter(&wgpu::RequestAdapterOptions {
            power_preference: wgpu::PowerPreference::default(),
            compatible_surface: None,
            force_fallback_adapter: false,
            apply_limit_buckets: false,
        }))
        .context("gpu: адаптер не знайдено")?;
        log::info!(
            "gpu: адаптер {:?}, бекенд {:?}",
            adapter.get_info().name,
            adapter.get_info().backend
        );
        let (device, queue) = pollster::block_on(adapter.request_device(&wgpu::DeviceDescriptor {
            label: Some("dh-engine gpu device"),
            ..Default::default()
        }))
        .context("gpu: створення device")?;
        device.on_uncaptured_error(std::sync::Arc::new(|e| {
            eprintln!("wgpu validation error: {e:?}");
        }));
        Self::assemble(instance, None, device, queue, None)
    }

    /// Рендерер для вікна з явним вибором бекенда (`--backend` / WGPU_BACKEND).
    pub fn new_windowed(
        window: &'a Window,
        display: Box<dyn WgpuHasDisplayHandle>,
        width: u32,
        height: u32,
        backend: Backend,
    ) -> anyhow::Result<Self> {
        let mut desc = wgpu::InstanceDescriptor::new_with_display_handle(display);
        // Явний вибір із клієнта; інакше WGPU_BACKEND env; інакше все.
        if let Some(b) = backend.wgpu_backends() {
            desc.backends = b;
        } else if let Ok(backends) = std::env::var("WGPU_BACKEND") {
            let backends = backends.to_ascii_lowercase();
            desc.backends = if backends.contains("vulkan") {
                wgpu::Backends::VULKAN
            } else if backends.contains("gl") || backends.contains("gles") {
                wgpu::Backends::GL
            } else {
                wgpu::Backends::all()
            };
        }
        let instance = wgpu::Instance::new(desc);
        let surface = instance
            .create_surface(window)
            .context("gpu: створення поверхні")?;
        let adapter = pollster::block_on(instance.request_adapter(&wgpu::RequestAdapterOptions {
            power_preference: wgpu::PowerPreference::default(),
            compatible_surface: Some(&surface),
            force_fallback_adapter: false,
            apply_limit_buckets: false,
        }))
        .context("gpu: адаптер не знайдено")?;
        let (device, queue) = pollster::block_on(adapter.request_device(&wgpu::DeviceDescriptor {
            label: Some("dh-engine gpu device"),
            ..Default::default()
        }))
        .context("gpu: створення device")?;
        device.on_uncaptured_error(std::sync::Arc::new(|e| {
            eprintln!("wgpu validation error: {e}");
        }));
        let mut config = surface
            .get_default_config(&adapter, width.max(1), height.max(1))
            .context("gpu: surface config")?;
        // Формат поверхні НЕ форсуємо: деякі WSI (особливо Vulkan) не
        // підтримують Rgba8Unorm і дають порожній/чорний кадр. Беремо те,
        // що реально підтримує поверхня (як робив старий WgpuCanvas);
        // піплайни створюються під цей формат у assemble.
        eprintln!(
            "[gpu] config: формат {:?}, present_mode {:?}, alpha {:?}, розмір {}x{}",
            config.format, config.present_mode, config.alpha_mode, config.width, config.height
        );
        config.width = width.max(1);
        config.height = height.max(1);
        surface.configure(&device, &config);
        Self::assemble(instance, Some(surface), device, queue, Some(config))
    }

    /// Доступ до інстанса (діагностика).
    pub fn instance(&self) -> &wgpu::Instance {
        &self.instance
    }

    /// Статичні дані мапи: index.tbl (річки) + атлас tiles.bmp.
    pub fn set_map(&mut self, map: &MapData) -> anyhow::Result<()> {
        let river_blocks = texture_r32(
            &self.device,
            &self.queue,
            "river_blocks",
            BLOCKS_X,
            BLOCKS_Y,
            &map.index,
        );

        // tiles.bmp: індекс палітри на піксель; 0 = прозорий (α=0).
        let mut atlas = vec![0u8; (ATLAS_W as usize) * (ATLAS_H as usize) * 4];
        for y in 0..ATLAS_H as usize {
            for x in 0..ATLAS_W as usize {
                let idx = map.tiles_indices[y * ATLAS_W as usize + x] as usize;
                let [r, g, b] = map.tiles_palette.get(idx).copied().unwrap_or([0, 0, 0]);
                let o = (y * ATLAS_W as usize + x) * 4;
                atlas[o] = r;
                atlas[o + 1] = g;
                atlas[o + 2] = b;
                atlas[o + 3] = if idx == 0 { 0 } else { 255 };
            }
        }
        let river_atlas = self.device.create_texture(&wgpu::TextureDescriptor {
            label: Some("river_atlas"),
            size: wgpu::Extent3d {
                width: ATLAS_W,
                height: ATLAS_H,
                depth_or_array_layers: 1,
            },
            mip_level_count: 1,
            sample_count: 1,
            dimension: wgpu::TextureDimension::D2,
            format: wgpu::TextureFormat::Rgba8Unorm,
            usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
            view_formats: &[],
        });
        self.queue.write_texture(
            wgpu::TexelCopyTextureInfo {
                texture: &river_atlas,
                mip_level: 0,
                origin: wgpu::Origin3d::ZERO,
                aspect: wgpu::TextureAspect::All,
            },
            &atlas,
            wgpu::TexelCopyBufferLayout {
                offset: 0,
                bytes_per_row: Some(ATLAS_W * 4),
                rows_per_image: Some(ATLAS_H),
            },
            wgpu::Extent3d {
                width: ATLAS_W,
                height: ATLAS_H,
                depth_or_array_layers: 1,
            },
        );

        let rv = river_blocks.create_view(&wgpu::TextureViewDescriptor::default());
        let av = river_atlas.create_view(&wgpu::TextureViewDescriptor::default());
        self.bg_river = self.device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("river bg (map)"),
            layout: &self.bgl_river,
            entries: &[
                wgpu::BindGroupEntry {
                    binding: 0,
                    resource: wgpu::BindingResource::TextureView(&rv),
                },
                wgpu::BindGroupEntry {
                    binding: 1,
                    resource: wgpu::BindingResource::TextureView(&av),
                },
            ],
        });
        self.river_blocks = Some(river_blocks);
        self.river_atlas = Some(river_atlas);
        self.map = Some(map.clone());
        Ok(())
    }

    /// Палітра гри (RGB565 → RGBA8, розгортання без втрат).
    pub fn set_color_model(&mut self, model: &GameColorModel) -> anyhow::Result<()> {
        let pal = model.palette();
        let mut rgba = vec![0u8; pal.len() * 4];
        for (i, v) in pal.iter().enumerate() {
            let [r, g, b] = dh_format::map_color::rgb565(*v);
            rgba[i * 4] = r;
            rgba[i * 4 + 1] = g;
            rgba[i * 4 + 2] = b;
            rgba[i * 4 + 3] = 255;
        }
        let palette = self.device.create_texture(&wgpu::TextureDescriptor {
            label: Some("palette"),
            size: wgpu::Extent3d {
                width: pal.len() as u32,
                height: 1,
                depth_or_array_layers: 1,
            },
            mip_level_count: 1,
            sample_count: 1,
            dimension: wgpu::TextureDimension::D2,
            format: wgpu::TextureFormat::Rgba8Unorm,
            usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
            view_formats: &[],
        });
        self.queue.write_texture(
            wgpu::TexelCopyTextureInfo {
                texture: &palette,
                mip_level: 0,
                origin: wgpu::Origin3d::ZERO,
                aspect: wgpu::TextureAspect::All,
            },
            &rgba,
            wgpu::TexelCopyBufferLayout {
                offset: 0,
                bytes_per_row: Some(pal.len() as u32 * 4),
                rows_per_image: Some(1),
            },
            wgpu::Extent3d {
                width: pal.len() as u32,
                height: 1,
                depth_or_array_layers: 1,
            },
        );
        self.palette = Some(palette);
        self.rebuild_map_bg();
        Ok(())
    }

    /// Шкали провінцій політичної карти (id → 0..63, біт 0x20 = «темна»).
    pub fn set_scales(&mut self, scales: &[u8]) {
        let mut data = vec![23u32 | 0x20; SCALES_LEN as usize]; // вода за замовчуванням
        for (i, s) in scales.iter().take(SCALES_LEN as usize).enumerate() {
            data[i] = *s as u32;
        }
        let tex = texture_r32(&self.device, &self.queue, "scales", SCALES_LEN, 1, &data);
        self.scales = Some(tex);
        self.rebuild_map_bg();
    }

    /// Оновлює bg_map після зміни scales/palette (пересоздає view).
    fn rebuild_map_bg(&mut self) {
        let (Some(scales), Some(palette)) = (&self.scales, &self.palette) else {
            return;
        };
        let rv = self
            .region
            .create_view(&wgpu::TextureViewDescriptor::default());
        let sv = scales.create_view(&wgpu::TextureViewDescriptor::default());
        let pv = palette.create_view(&wgpu::TextureViewDescriptor::default());
        self.bg_map = self.device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("map bg"),
            layout: &self.bgl_map,
            entries: &[
                wgpu::BindGroupEntry {
                    binding: 0,
                    resource: wgpu::BindingResource::TextureView(&rv),
                },
                wgpu::BindGroupEntry {
                    binding: 1,
                    resource: wgpu::BindingResource::TextureView(&sv),
                },
                wgpu::BindGroupEntry {
                    binding: 2,
                    resource: wgpu::BindingResource::TextureView(&pv),
                },
            ],
        });
    }

    /// HUD-канвас для малювання тексту на CPU (до [`Self::present`]).
    pub fn hud(&mut self) -> &mut Canvas {
        &mut self.hud
    }

    /// Рамки провінцій (екранні пікселі `(x1,y1,x2,y2)`, зовнішні краї):
    /// конвертує в NDC-сегменти й заливає vertex-буфер. Порожній список —
    /// вимикає прохід.
    pub fn set_province_frames(&mut self, rects: &[(i32, i32, i32, i32)]) -> anyhow::Result<()> {
        let verts = self.rects_to_ndc_lines(rects);
        self.frames_count = (verts.len() / 2) as u32;
        if verts.is_empty() {
            return Ok(());
        }
        let (device, queue) = (&self.device, &self.queue);
        Self::upload_line_buffer(device, queue, &mut self.frames_vb, "frames vb", &verts)
    }

    /// Жовта підсвітка прямокутника (вибрана провінція); None — вимкнути.
    pub fn set_highlight_rect(&mut self, rect: Option<(i32, i32, i32, i32)>) -> anyhow::Result<()> {
        let verts = match rect {
            Some(r) => {
                let mut verts = Vec::with_capacity(8);
                self.push_rect_ndc(&mut verts, r);
                verts
            }
            None => Vec::new(),
        };
        self.highlight_count = (verts.len() / 2) as u32;
        if verts.is_empty() {
            return Ok(());
        }
        let (device, queue) = (&self.device, &self.queue);
        Self::upload_line_buffer(
            device,
            queue,
            &mut self.highlight_vb,
            "highlight vb",
            &verts,
        )
    }

    /// Прямокутники (екранні пікселі) → сегменти в NDC: 4 лінії на прямокутник.
    fn rects_to_ndc_lines(&self, rects: &[(i32, i32, i32, i32)]) -> Vec<f32> {
        let mut verts = Vec::with_capacity(rects.len() * 16);
        for &r in rects {
            self.push_rect_ndc(&mut verts, r);
        }
        verts
    }

    fn push_rect_ndc(&self, verts: &mut Vec<f32>, (x1, y1, x2, y2): (i32, i32, i32, i32)) {
        let (w, h) = self.window_size();
        let (w, h) = (w.max(1) as f32, h.max(1) as f32);
        let nx = |x: i32| x as f32 / w * 2.0 - 1.0;
        let ny = |y: i32| 1.0 - y as f32 / h * 2.0;
        let (x1, y1, x2, y2) = (nx(x1), ny(y1), nx(x2), ny(y2));
        verts.extend_from_slice(&[x1, y1, x2, y1]); // верх
        verts.extend_from_slice(&[x2, y1, x2, y2]); // право
        verts.extend_from_slice(&[x2, y2, x1, y2]); // низ
        verts.extend_from_slice(&[x1, y2, x1, y1]); // ліво
    }

    /// Заливає (або пересоздає) vertex-буфер ліній із f32-пар. Без `self`:
    /// device/queue передаються окремо, щоб не конфліктувати з полем-буфером.
    fn upload_line_buffer(
        device: &wgpu::Device,
        queue: &wgpu::Queue,
        slot: &mut Option<wgpu::Buffer>,
        label: &str,
        verts: &[f32],
    ) -> anyhow::Result<()> {
        let bytes: Vec<u8> = verts.iter().flat_map(|v| v.to_le_bytes()).collect();
        let need = bytes.len() as u64;
        match slot.as_ref() {
            Some(b) if b.size() >= need => {
                queue.write_buffer(b, 0, &bytes);
            }
            _ => {
                let capacity = need.next_power_of_two().max(4096);
                let vb = device.create_buffer(&wgpu::BufferDescriptor {
                    label: Some(label),
                    size: capacity,
                    usage: wgpu::BufferUsages::VERTEX | wgpu::BufferUsages::COPY_DST,
                    mapped_at_creation: false,
                });
                queue.write_buffer(&vb, 0, &bytes);
                *slot = Some(vb);
            }
        }
        Ok(())
    }

    /// Розмір кадру (headless) — заповнюється в [`Self::set_view`].
    pub fn screen_size(&self) -> (u32, u32) {
        self.screen
    }

    /// Розмір вікна (windowed) або кадру (headless).
    pub fn window_size(&self) -> (u32, u32) {
        self.config
            .as_ref()
            .map(|c| (c.width, c.height))
            .unwrap_or(self.screen)
    }

    /// Оновлює камеру: збирає region-текстуру видимих світлопікселів рівня.
    pub fn set_view(&mut self, zoom: i8, view: Viewport) {
        let Some(map) = self.map.as_ref() else {
            return;
        };
        let (z, lv) = if zoom >= 0 {
            (zoom as i32, (zoom as i32).min(3))
        } else {
            (zoom as i32, -zoom as i32)
        };
        let cam_world = [view.x as i32 * 32, view.y as i32 * 32];
        let level_w = WORLD_PX_W >> lv;
        let level_h = WORLD_PX_H >> lv;
        let lo = [cam_world[0] >> lv, cam_world[1] >> lv];

        let (w, h) = view.screen_size(zoom);
        self.screen = (w.max(1), h.max(1));
        let (sw, sh) = (w.max(1) as i32, h.max(1) as i32);

        let (region_w, region_h) = if zoom >= 0 {
            // p ∈ [0, w): texel = ((cam + p>>z) >> lv) − lo, максимум ≈ w >> (z+lv).
            let rw = ((sw - 1) >> (z + lv)).max(0) + 2;
            let rh = ((sh - 1) >> (z + lv)).max(0) + 2;
            (rw.min(level_w), rh.min(level_h))
        } else {
            // texel = p 1:1; в'юпорт може виходити за межі мапи.
            (sw.min(level_w), sh.min(level_h))
        };
        let region_w = region_w.max(1) as u32;
        let region_h = region_h.max(1) as u32;
        let stride = (region_w * 4).next_multiple_of(256) / 4;

        // ВАЖЛИВО: поля region_w/region_h оновлюємо ДО пакування — pack_tile
        // кліпить рядки за цими полями. Сама GPU-текстура — після пакування
        // (не залежить від вмісту, але не дає тримати borrow на self.map).
        let size_changed = self.region_w != region_w || self.region_h != region_h;
        self.region_w = region_w;
        self.region_h = region_h;
        self.region_stride = stride;
        if self.region_lv != lv as u32 || self.region_pack.len() != (stride * region_h) as usize {
            self.region_pack = vec![0u32; (stride * region_h) as usize];
        }
        self.region_pack.fill(0);

        // Декодуємо спершу всі видимі тайли (owned), потім пакуємо — щоб не
        // тримати immutable borrow на self.map у мутабельному контексті.
        let mut decoded: Vec<(i32, i32, TileInfo)> = Vec::new();
        if let Some(lvl) = map.lightmap.get(lv as usize) {
            let tiles_x = lvl.tiles_x as i32;
            let tiles_y = lvl.tiles_y as i32;
            let t0x = (lo[0].max(0) / 32).max(0).min(tiles_x - 1);
            let t0y = (lo[1].max(0) / 32).max(0).min(tiles_y - 1);
            let t1x = ((lo[0] + region_w as i32 - 1).max(0) / 32).clamp(0, tiles_x - 1);
            let t1y = ((lo[1] + region_h as i32 - 1).max(0) / 32).clamp(0, tiles_y - 1);
            for ty in t0y..=t1y {
                for tx in t0x..=t1x {
                    if let Ok(ti) = lvl.decode_tile(tx as u32, ty as u32) {
                        decoded.push((tx, ty, ti));
                    }
                }
            }
        }
        for (tx, ty, ti) in &decoded {
            self.pack_tile(ti, *tx, *ty, lo, region_w as i32, stride);
        }
        self.region_lv = lv as u32;

        if size_changed {
            self.region = self.device.create_texture(&wgpu::TextureDescriptor {
                label: Some("region"),
                size: wgpu::Extent3d {
                    width: region_w,
                    height: region_h,
                    depth_or_array_layers: 1,
                },
                mip_level_count: 1,
                sample_count: 1,
                dimension: wgpu::TextureDimension::D2,
                format: wgpu::TextureFormat::R32Uint,
                usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
                view_formats: &[],
            });
            self.region_view = self
                .region
                .create_view(&wgpu::TextureViewDescriptor::default());
            self.rebuild_map_bg();
        }

        let bytes = u32s_to_bytes(&self.region_pack);
        self.queue.write_texture(
            wgpu::TexelCopyTextureInfo {
                texture: &self.region,
                mip_level: 0,
                origin: wgpu::Origin3d::ZERO,
                aspect: wgpu::TextureAspect::All,
            },
            &bytes,
            wgpu::TexelCopyBufferLayout {
                offset: 0,
                bytes_per_row: Some(stride * 4),
                rows_per_image: Some(region_h),
            },
            wgpu::Extent3d {
                width: region_w,
                height: region_h,
                depth_or_array_layers: 1,
            },
        );

        self.uniform_data.cam_world = cam_world;
        self.uniform_data.level = [level_w, level_h];
        self.uniform_data.lo = lo;
        self.uniform_data.zoom = z;
        self.uniform_data.lv = lv;
        // Uniform-дані — сирі байти (u32s_to_bytes не годиться для struct).
        let uniform_bytes: &[u8] = unsafe {
            std::slice::from_raw_parts(
                (&self.uniform_data as *const Uniforms).cast::<u8>(),
                std::mem::size_of::<Uniforms>(),
            )
        };
        self.queue.write_buffer(&self.uniforms, 0, uniform_bytes);
    }

    /// Діагностика: кілька u32 рядка region-паку (row < region_h).
    pub fn debug_region_row(&self, row: u32, first: usize) -> Vec<u32> {
        let row = row.min(self.region_h.saturating_sub(1));
        let base = row as usize * self.region_stride as usize;
        self.region_pack[base..(base + first).min(self.region_pack.len())].to_vec()
    }

    /// Пакує один розкодований тайл у region-пак (з кліпом до прямокутника).
    fn pack_tile(
        &mut self,
        ti: &TileInfo,
        tx: i32,
        ty: i32,
        lo: [i32; 2],
        region_w: i32,
        stride: u32,
    ) {
        let base_x = tx * 32 - lo[0];
        let base_y = ty * 32 - lo[1];
        for y in 0..32u32 {
            let row = (base_y + y as i32).max(0) as usize;
            if row >= self.region_h as usize {
                continue;
            }
            for x in 0..32u32 {
                let col = (base_x + x as i32).max(0) as usize;
                if col >= region_w as usize {
                    continue;
                }
                let c = (y * 32 + x) as usize;
                let packed = ((ti.prov_ids[c] as u32) << 8) | (ti.light_vals[c] as u32);
                self.region_pack[row * stride as usize + col] = packed;
            }
        }
    }

    /// Змінює розмір вікна/HUD.
    pub fn resize(&mut self, width: u32, height: u32) -> anyhow::Result<()> {
        let (w, h) = (width.max(1), height.max(1));
        if let Some(config) = self.config.as_mut() {
            config.width = w;
            config.height = h;
            if let Some(surface) = self.surface.as_ref() {
                surface.configure(&self.device, &config);
            }
        }
        self.hud = Canvas::new(w, h);
        self.hud_texture = self.device.create_texture(&wgpu::TextureDescriptor {
            label: Some("hud"),
            size: wgpu::Extent3d {
                width: w,
                height: h,
                depth_or_array_layers: 1,
            },
            mip_level_count: 1,
            sample_count: 1,
            dimension: wgpu::TextureDimension::D2,
            format: wgpu::TextureFormat::Rgba8Unorm,
            usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
            view_formats: &[],
        });
        self.hud_view = self
            .hud_texture
            .create_view(&wgpu::TextureViewDescriptor::default());
        self.bg_hud = self.device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("hud bg (resize)"),
            layout: &self.bgl_hud,
            entries: &[wgpu::BindGroupEntry {
                binding: 0,
                resource: wgpu::BindingResource::TextureView(&self.hud_view),
            }],
        });
        Ok(())
    }

    /// Завантажує HUD-канвас у текстуру.
    fn upload_hud(&mut self, w: u32, h: u32) {
        let rgba = canvas_to_rgba(&self.hud);
        let row_bytes = w * 4;
        if row_bytes % 256 == 0 {
            self.queue.write_texture(
                wgpu::TexelCopyTextureInfo {
                    texture: &self.hud_texture,
                    mip_level: 0,
                    origin: wgpu::Origin3d::ZERO,
                    aspect: wgpu::TextureAspect::All,
                },
                &rgba,
                wgpu::TexelCopyBufferLayout {
                    offset: 0,
                    bytes_per_row: Some(row_bytes),
                    rows_per_image: Some(h),
                },
                wgpu::Extent3d {
                    width: w,
                    height: h,
                    depth_or_array_layers: 1,
                },
            );
        } else {
            let padded = row_bytes.next_multiple_of(256);
            let mut pbuf = vec![0u8; padded as usize * h as usize];
            for row in 0..h as usize {
                let src = &rgba[row * w as usize * 4..(row + 1) as usize * w as usize * 4];
                pbuf[row * padded as usize..row * padded as usize + src.len()].copy_from_slice(src);
            }
            self.queue.write_texture(
                wgpu::TexelCopyTextureInfo {
                    texture: &self.hud_texture,
                    mip_level: 0,
                    origin: wgpu::Origin3d::ZERO,
                    aspect: wgpu::TextureAspect::All,
                },
                &pbuf,
                wgpu::TexelCopyBufferLayout {
                    offset: 0,
                    bytes_per_row: Some(padded),
                    rows_per_image: Some(h),
                },
                wgpu::Extent3d {
                    width: w,
                    height: h,
                    depth_or_array_layers: 1,
                },
            );
        }
    }

    /// Малює всі проходи в цільовий view.
    fn draw_passes(&mut self, target: &wgpu::TextureView, w: u32, h: u32, with_hud: bool) {
        if with_hud {
            self.upload_hud(w, h);
        }
        let mut encoder = self
            .device
            .create_command_encoder(&wgpu::CommandEncoderDescriptor {
                label: Some("gpu map"),
            });
        {
            let mut rpass = encoder.begin_render_pass(&wgpu::RenderPassDescriptor {
                label: Some("gpu map pass"),
                color_attachments: &[Some(wgpu::RenderPassColorAttachment {
                    view: target,
                    depth_slice: None,
                    resolve_target: None,
                    ops: wgpu::Operations {
                        load: wgpu::LoadOp::Clear(wgpu::Color {
                            r: OCEAN[0] as f64,
                            g: OCEAN[1] as f64,
                            b: OCEAN[2] as f64,
                            a: 1.0,
                        }),
                        store: wgpu::StoreOp::Store,
                    },
                })],
                depth_stencil_attachment: None,
                timestamp_writes: None,
                occlusion_query_set: None,
                multiview_mask: None,
            });
            rpass.set_pipeline(&self.pipeline_map);
            rpass.set_bind_group(0, &self.uniform_bg, &[]);
            rpass.set_bind_group(1, &self.bg_map, &[]);
            rpass.draw(0..3, 0..1);
            rpass.set_pipeline(&self.pipeline_river);
            rpass.set_bind_group(0, &self.uniform_bg, &[]);
            rpass.set_bind_group(1, &self.bg_river, &[]);
            rpass.draw(0..3, 0..1);
            if self.frames_count > 0 {
                if let Some(vb) = self.frames_vb.as_ref() {
                    rpass.set_pipeline(&self.pipeline_frames);
                    rpass.set_vertex_buffer(0, vb.slice(..));
                    rpass.draw(0..self.frames_count, 0..1);
                }
            }
            if self.highlight_count > 0 {
                if let Some(vb) = self.highlight_vb.as_ref() {
                    rpass.set_pipeline(&self.pipeline_highlight);
                    rpass.set_vertex_buffer(0, vb.slice(..));
                    rpass.draw(0..self.highlight_count, 0..1);
                }
            }
            if with_hud {
                rpass.set_pipeline(&self.pipeline_hud);
                rpass.set_bind_group(0, &self.bg_hud, &[]);
                rpass.draw(0..3, 0..1);
            }
        }
        self.queue.submit([encoder.finish()]);
    }

    /// Показує кадр на поверхні (windowed).
    pub fn present(&mut self) -> anyhow::Result<()> {
        let Some(config) = self.config.as_ref() else {
            anyhow::bail!("present викликано на headless-рендерері");
        };
        let (w, h) = (config.width, config.height);
        let frame = match self.surface.as_ref().unwrap().get_current_texture() {
            wgpu::CurrentSurfaceTexture::Success(t)
            | wgpu::CurrentSurfaceTexture::Suboptimal(t) => t,
            other => {
                // Діагностика (тимчасова): перші 10 невдалих спроб.
                use std::sync::atomic::{AtomicU32, Ordering};
                static FAILS: AtomicU32 = AtomicU32::new(0);
                let n = FAILS.fetch_add(1, Ordering::Relaxed);
                if n < 10 {
                    eprintln!("[gpu] поверхня недоступна ({n}): {other:?}");
                }
                return Ok(()); // поверхня тимчасово недоступна — пропускаємо кадр
            }
        };
        let view = frame
            .texture
            .create_view(&wgpu::TextureViewDescriptor::default());
        self.draw_passes(&view, w, h, true);
        self.queue.present(frame);
        Ok(())
    }

    /// Офскрін-рендер (headless): малює кадр у текстуру й повертає RGBA8.
    /// Розмір — із [`Self::set_view`] (view.screen_size(zoom)).
    pub fn render_offscreen(&mut self) -> anyhow::Result<(u32, u32, Vec<u8>)> {
        let (w, h) = self.screen;
        let target = self.device.create_texture(&wgpu::TextureDescriptor {
            label: Some("offscreen target"),
            size: wgpu::Extent3d {
                width: w,
                height: h,
                depth_or_array_layers: 1,
            },
            mip_level_count: 1,
            sample_count: 1,
            dimension: wgpu::TextureDimension::D2,
            format: wgpu::TextureFormat::Rgba8Unorm,
            usage: wgpu::TextureUsages::RENDER_ATTACHMENT | wgpu::TextureUsages::COPY_SRC,
            view_formats: &[],
        });
        let view = target.create_view(&wgpu::TextureViewDescriptor::default());
        self.draw_passes(&view, w, h, false);

        let row_bytes = w * 4;
        let padded = row_bytes.next_multiple_of(256);
        let buffer = self.device.create_buffer(&wgpu::BufferDescriptor {
            label: Some("readback"),
            size: (padded as u64) * h as u64,
            usage: wgpu::BufferUsages::COPY_DST | wgpu::BufferUsages::MAP_READ,
            mapped_at_creation: false,
        });
        let mut encoder = self
            .device
            .create_command_encoder(&wgpu::CommandEncoderDescriptor {
                label: Some("readback"),
            });
        encoder.copy_texture_to_buffer(
            wgpu::TexelCopyTextureInfo {
                texture: &target,
                mip_level: 0,
                origin: wgpu::Origin3d::ZERO,
                aspect: wgpu::TextureAspect::All,
            },
            wgpu::TexelCopyBufferInfo {
                buffer: &buffer,
                layout: wgpu::TexelCopyBufferLayout {
                    offset: 0,
                    bytes_per_row: Some(padded),
                    rows_per_image: Some(h),
                },
            },
            wgpu::Extent3d {
                width: w,
                height: h,
                depth_or_array_layers: 1,
            },
        );
        self.queue.submit([encoder.finish()]);

        let (tx, rx) = std::sync::mpsc::channel();
        buffer.slice(..).map_async(wgpu::MapMode::Read, move |r| {
            let _ = tx.send(r);
        });
        self.device.poll(wgpu::PollType::wait_indefinitely()).ok();
        rx.recv()
            .map_err(|_| anyhow::anyhow!("readback: канал закрито"))??;

        let data = buffer.slice(..).get_mapped_range()?;
        let mut out = Vec::with_capacity((w as usize) * (h as usize) * 4);
        for row in 0..h as usize {
            let start = row * padded as usize;
            out.extend_from_slice(&data[start..start + row_bytes as usize]);
        }
        Ok((w, h, out))
    }
}

/// Короткий конструктор entry для текстурних біндінгів.
fn tex_binding(binding: u32, sample_type: wgpu::TextureSampleType) -> wgpu::BindGroupLayoutEntry {
    wgpu::BindGroupLayoutEntry {
        binding,
        visibility: wgpu::ShaderStages::FRAGMENT,
        ty: wgpu::BindingType::Texture {
            sample_type,
            view_dimension: wgpu::TextureViewDimension::D2,
            multisampled: false,
        },
        count: None,
    }
}
