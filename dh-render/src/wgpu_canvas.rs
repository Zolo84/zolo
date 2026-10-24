//! Wgpu-канвас: рендер CPU-буфера [`Canvas`] (ARGB8888) на GPU-поверхню.
//!
//! Логіка малювання лишається в CPU (Canvas + MapRenderer — точна копія
//! оригінального підходу гри), а `WgpuCanvas` лише заливає готовий кадр
//! у текстуру й малює повноекранний трикутник через шейдер. Це дає:
//! - відображення через GPU (Vulkan/Metal/DX12) замість softbuffer (X11/Wayland shm);
//! - плавний і дешевий масштаб через семплер (FilterMode::Nearest — чіткі пікселі);
//! - без `unsafe` трансмутації лайфтаймів поверхні (wgpu сам тримає window-handle).
//!
//! Поверхня втримує лайфтайм `'a` від `&Window` — той самий підхід, що раніше
//! мав `SoftbufferCanvas`; `window` живе весь час роботи застосунку.

use std::ops::{Deref, DerefMut};

use anyhow::Context;
use wgpu_types::WgpuHasDisplayHandle;
use winit::window::Window;

use super::canvas::{Canvas, RenderSurface};

/// Шейдер: повноекранний трикутник, текстура канваса 1:1 (за потреби —
/// майбутній zoom через uniform uv-зміщення).
const SHADER: &str = r#"
@group(0) @binding(0) var canvas_tex: texture_2d<f32>;
@group(0) @binding(1) var canvas_samp: sampler;

struct VsOut {
    @builtin(position) pos: vec4f,
    @location(0) uv: vec2f,
};

@vertex
fn vs_main(@builtin(vertex_index) vi: u32) -> VsOut {
    var out: VsOut;
    // Повноекранний трикутник: вершини (-1,-1), (3,-1), (-1,3) покривають
    // весь екран (двічі більший за в'юпорт). uv = (x+1)/2 за межами [0,1]
    // затискаються семплером (ClampToEdge).
    let x = f32(i32(vi & 1u) * 4 - 1);
    let y = f32(i32((vi >> 1u) & 1u) * 4 - 1);
    out.pos = vec4f(x, -y, 0.0, 1.0);
    out.uv = vec2f(x * 0.5 + 0.5, y * 0.5 + 0.5);
    return out;
}

@fragment
fn fs_main(in: VsOut) -> @location(0) vec4f {
    return textureSample(canvas_tex, canvas_samp, in.uv);
}
"#;

/// GPU-обгортка канваса: малюємо в CPU-буфер, `present()` показує через wgpu.
pub struct WgpuCanvas<'a> {
    canvas: Canvas,
    instance: wgpu::Instance,
    surface: wgpu::Surface<'a>,
    device: wgpu::Device,
    queue: wgpu::Queue,
    config: wgpu::SurfaceConfiguration,
    /// Текстура-джерело кадру (RGBA8Unorm, розмір = канвас).
    texture: wgpu::Texture,
    texture_view: wgpu::TextureView,
    /// Layout бінд-групи (потрібен для пересозданя bind_group при ресайзі).
    bind_group_layout: wgpu::BindGroupLayout,
    sampler: wgpu::Sampler,
    bind_group: wgpu::BindGroup,
    pipeline: wgpu::RenderPipeline,
}

impl<'a> WgpuCanvas<'a> {
    /// Створює GPU-поверхню для вікна та рендер-піплайн.
    ///
    /// `display` — власний display handle (winit: `event_loop.owned_display_handle()`);
    /// на Wayland обов'язковий для коректного підключення surface.
    pub fn new(
        window: &'a Window,
        display: Box<dyn WgpuHasDisplayHandle>,
        width: u32,
        height: u32,
    ) -> anyhow::Result<Self> {
        let mut desc = wgpu::InstanceDescriptor::new_with_display_handle(display);
        // Поважаємо WGPU_BACKEND (vulkan/gles): на headless-композиторах без
        // Vulkan-WSI це дозволяє примусово обрати GLES (EGL-surface працює там,
        // де Vulkan-present недоступний — softbuffer раніше працював на shm).
        if let Ok(backends) = std::env::var("WGPU_BACKEND") {
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
            .context("wgpu: створення поверхні")?;

        let adapter = pollster::block_on(instance.request_adapter(&wgpu::RequestAdapterOptions {
            power_preference: wgpu::PowerPreference::default(),
            compatible_surface: Some(&surface),
            force_fallback_adapter: false,
            apply_limit_buckets: false,
        }))
        .context("wgpu: адаптер не знайдено")?;
        eprintln!(
            "[wgpu] адаптер: {:?}, бекенд: {:?}",
            adapter.get_info().name,
            adapter.get_info().backend
        );

        let (device, queue) = pollster::block_on(adapter.request_device(&wgpu::DeviceDescriptor {
            label: Some("dh-engine device"),
            ..Default::default()
        }))
        .context("wgpu: створення device")?;
        device.on_uncaptured_error(std::sync::Arc::new(|e| {
            eprintln!("wgpu validation error: {e}");
        }));

        let mut config = surface
            .get_default_config(&adapter, width.max(1), height.max(1))
            .context("wgpu: surface config")?;
        // Канвас тримає сирі коди гри (не-sRGB, як і палітра в wgpu_map).
        eprintln!(
            "[wgpu] config: формат {:?}, present_mode {:?}, alpha {:?}, розмір {}x{}",
            config.format, config.present_mode, config.alpha_mode, config.width, config.height
        );
        surface.configure(&device, &config);

        // Текстура кадру: не-srgb, щоб кольори з нашого CPU-буфера лягали
        // без гамма-перетворень (Canvas вже містить кінцеві значення).
        let texture = device.create_texture(&wgpu::TextureDescriptor {
            label: Some("canvas texture"),
            size: wgpu::Extent3d {
                width: width.max(1),
                height: height.max(1),
                depth_or_array_layers: 1,
            },
            mip_level_count: 1,
            sample_count: 1,
            dimension: wgpu::TextureDimension::D2,
            format: wgpu::TextureFormat::Rgba8UnormSrgb,
            usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
            view_formats: &[],
        });
        let texture_view = texture.create_view(&wgpu::TextureViewDescriptor::default());

        let sampler = device.create_sampler(&wgpu::SamplerDescriptor {
            label: Some("canvas sampler"),
            mag_filter: wgpu::FilterMode::Nearest,
            min_filter: wgpu::FilterMode::Nearest,
            ..Default::default()
        });

        let shader = device.create_shader_module(wgpu::ShaderModuleDescriptor {
            label: Some("canvas shader"),
            source: wgpu::ShaderSource::Wgsl(SHADER.into()),
        });

        let bgl = device.create_bind_group_layout(&wgpu::BindGroupLayoutDescriptor {
            label: Some("canvas bgl"),
            entries: &[
                wgpu::BindGroupLayoutEntry {
                    binding: 0,
                    visibility: wgpu::ShaderStages::FRAGMENT,
                    ty: wgpu::BindingType::Texture {
                        sample_type: wgpu::TextureSampleType::Float { filterable: true },
                        view_dimension: wgpu::TextureViewDimension::D2,
                        multisampled: false,
                    },
                    count: None,
                },
                wgpu::BindGroupLayoutEntry {
                    binding: 1,
                    visibility: wgpu::ShaderStages::FRAGMENT,
                    ty: wgpu::BindingType::Sampler(wgpu::SamplerBindingType::Filtering),
                    count: None,
                },
            ],
        });
        let bind_group = device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("canvas bind group"),
            layout: &bgl,
            entries: &[
                wgpu::BindGroupEntry {
                    binding: 0,
                    resource: wgpu::BindingResource::TextureView(&texture_view),
                },
                wgpu::BindGroupEntry {
                    binding: 1,
                    resource: wgpu::BindingResource::Sampler(&sampler),
                },
            ],
        });

        let pipeline_layout = device.create_pipeline_layout(&wgpu::PipelineLayoutDescriptor {
            label: Some("canvas pipeline layout"),
            bind_group_layouts: &[Some(&bgl)],
            immediate_size: 0,
        });
        let pipeline = device.create_render_pipeline(&wgpu::RenderPipelineDescriptor {
            label: Some("canvas pipeline"),
            layout: Some(&pipeline_layout),
            vertex: wgpu::VertexState {
                module: &shader,
                entry_point: Some("vs_main"),
                compilation_options: Default::default(),
                buffers: &[],
            },
            fragment: Some(wgpu::FragmentState {
                module: &shader,
                entry_point: Some("fs_main"),
                compilation_options: Default::default(),
                targets: &[Some(wgpu::ColorTargetState {
                    format: config.format,
                    blend: None,
                    write_mask: wgpu::ColorWrites::ALL,
                })],
            }),
            primitive: wgpu::PrimitiveState::default(),
            depth_stencil: None,
            multisample: wgpu::MultisampleState::default(),
            multiview_mask: None,
            cache: None,
        });

        Ok(WgpuCanvas {
            canvas: Canvas::new(width, height),
            instance,
            surface,
            device,
            queue,
            config,
            texture,
            texture_view,
            bind_group_layout: bgl,
            sampler,
            bind_group,
            pipeline,
        })
    }

    /// Змінює розмір канваса й переконфігуровує поверхню.
    pub fn resize(&mut self, width: u32, height: u32) -> anyhow::Result<()> {
        let w = width.max(1);
        let h = height.max(1);
        self.config.width = w;
        self.config.height = h;
        self.surface.configure(&self.device, &self.config);
        self.texture = self.device.create_texture(&wgpu::TextureDescriptor {
            label: Some("canvas texture"),
            size: wgpu::Extent3d {
                width: w,
                height: h,
                depth_or_array_layers: 1,
            },
            mip_level_count: 1,
            sample_count: 1,
            dimension: wgpu::TextureDimension::D2,
            format: wgpu::TextureFormat::Rgba8UnormSrgb,
            usage: wgpu::TextureUsages::TEXTURE_BINDING | wgpu::TextureUsages::COPY_DST,
            view_formats: &[],
        });
        self.texture_view = self
            .texture
            .create_view(&wgpu::TextureViewDescriptor::default());
        // ВАЖЛИВО: bind_group прив'язаний до КОНКРЕТНОГО texture_view —
        // після ресайза пересоздаємо його, інакше шейдер семплює порожню
        // стару текстуру (чорний екран).
        self.bind_group = self.device.create_bind_group(&wgpu::BindGroupDescriptor {
            label: Some("canvas bind group (resize)"),
            layout: &self.bind_group_layout,
            entries: &[
                wgpu::BindGroupEntry {
                    binding: 0,
                    resource: wgpu::BindingResource::TextureView(&self.texture_view),
                },
                wgpu::BindGroupEntry {
                    binding: 1,
                    resource: wgpu::BindingResource::Sampler(&self.sampler),
                },
            ],
        });
        self.canvas = Canvas::new(w, h);
        Ok(())
    }

    /// Доступ до інстанса (наприклад, для діагностики).
    pub fn instance(&self) -> &wgpu::Instance {
        &self.instance
    }
}

impl Deref for WgpuCanvas<'_> {
    type Target = Canvas;

    fn deref(&self) -> &Canvas {
        &self.canvas
    }
}

impl DerefMut for WgpuCanvas<'_> {
    fn deref_mut(&mut self) -> &mut Canvas {
        &mut self.canvas
    }
}

impl RenderSurface for WgpuCanvas<'_> {
    fn present(&mut self) -> anyhow::Result<()> {
        let w = self.canvas.width();
        let h = self.canvas.height();
        if w == 0 || h == 0 {
            return Ok(());
        }

        // ARGB8888 (u32) → RGBA8 (байти) для wgpu.
        let buf = self.canvas.buf();
        let mut rgba = vec![0u8; (w as usize) * (h as usize) * 4];
        for (i, &px) in buf.iter().enumerate() {
            rgba[i * 4] = ((px >> 16) & 0xFF) as u8;
            rgba[i * 4 + 1] = ((px >> 8) & 0xFF) as u8;
            rgba[i * 4 + 2] = (px & 0xFF) as u8;
            rgba[i * 4 + 3] = 0xFF;
        }

        self.queue.write_texture(
            wgpu::TexelCopyTextureInfo {
                texture: &self.texture,
                mip_level: 0,
                origin: wgpu::Origin3d::ZERO,
                aspect: wgpu::TextureAspect::All,
            },
            &rgba,
            wgpu::TexelCopyBufferLayout {
                offset: 0,
                bytes_per_row: Some(w * 4),
                rows_per_image: Some(h),
            },
            wgpu::Extent3d {
                width: w,
                height: h,
                depth_or_array_layers: 1,
            },
        );

        let frame_result = self.surface.get_current_texture();
        let frame = match frame_result {
            wgpu::CurrentSurfaceTexture::Success(t)
            | wgpu::CurrentSurfaceTexture::Suboptimal(t) => t,
            wgpu::CurrentSurfaceTexture::Timeout
            | wgpu::CurrentSurfaceTexture::Occluded
            | wgpu::CurrentSurfaceTexture::Outdated
            | wgpu::CurrentSurfaceTexture::Lost
            | wgpu::CurrentSurfaceTexture::Validation => {
                // Пропускаємо кадр: поверхня тимчасово недоступна (мінімізація,
                // ресайз, втрата поверхні) — наступний виклик повторить спробу.
                return Ok(());
            }
        };
        let view = frame
            .texture
            .create_view(&wgpu::TextureViewDescriptor::default());

        let mut encoder = self
            .device
            .create_command_encoder(&wgpu::CommandEncoderDescriptor {
                label: Some("canvas encoder"),
            });
        {
            let mut rpass = encoder.begin_render_pass(&wgpu::RenderPassDescriptor {
                label: Some("canvas pass"),
                color_attachments: &[Some(wgpu::RenderPassColorAttachment {
                    view: &view,
                    depth_slice: None,
                    resolve_target: None,
                    ops: wgpu::Operations {
                        load: wgpu::LoadOp::Clear(wgpu::Color::BLACK),
                        store: wgpu::StoreOp::Store,
                    },
                })],
                depth_stencil_attachment: None,
                timestamp_writes: None,
                occlusion_query_set: None,
                multiview_mask: None,
            });
            rpass.set_pipeline(&self.pipeline);
            rpass.set_bind_group(0, &self.bind_group, &[]);
            rpass.draw(0..3, 0..1);
        }
        self.queue.submit([encoder.finish()]);
        // У wgpu 30 презентація — метод Queue::present (споживає SurfaceTexture).
        self.queue.present(frame);

        Ok(())
    }
}
