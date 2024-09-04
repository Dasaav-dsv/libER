#include <dantelion2/kernel_runtime.hpp>
#include <detail/functions.hpp>
#include <detail/symbols.hpp>
#include <graphics/draw.hpp>
#include <memory/from_list.hpp>

#include <cstddef>
#include <cstdint>

#define GXDRAWBASE_D3D12_ENV_OFFSET 0x8
#define GXDRAWBASE_GXSWAPCHAIN_OFFSET 0x128
#define GXDRAWBASE_DRAW_QUEUE_ARRAY_OFFSET 0x6E8
#define GXDRAWBASE_DRAW_QUEUE_SELECTOR_OFFSET 0x708

#define GXDEVICEPROXY_VIEWPORT_OFFSET 0xCC
#define GXDEVICEPROXY_RECT_OFFSET 0x190
// #define GXDEVICEPROXY_RTV_OFFSET 0x1C28
// #define GXDEVICEPROXY_DSV_OFFSET 0x1CB8

struct ID3D12Fence;

namespace from {
namespace GXBS {
struct d3d12_env {
    void* allocator;
    ID3D12CommandQueue* command_queue;
    ID3D12Fence* fences[2];
    void* event_handle;
    struct {
        from::list<void*> command_lists; // unused
        void* first_command_list;
        ID3D12Device* device;
        char liber_unknown;
    }* bound_device;
    void* liber_unknown;
    long long update_count;
    DLKR::DLPlainLightMutex* mutexes[2];
};

struct CGView {
    void* liber_unknown; // vtable
    void* liber_unknown; // DLCG3::CGTexture2D
    HANDLE handle;
};

struct GXBuffer {
    void* liber_unknown[15];
    CGView** cg_view;
};

struct GXSwapChain {
    LIBER_CLASS(GXSwapChain);

    struct {
        void* DXGISwapChain;
        from::allocator<void> allocator;
        void** textures; // DLCG3::CGTexture2D
        int texture_count;
        int liber_unknown;
        void* liber_unknown;
        char liber_unknown[16];
        struct {
            void* DXGIAdapter;
            struct {
                void* DXGIOutput;
            }* output_holder;
            int liber_unknown;
            from::allocator<void> allocator;
            int liber_unknown;
        }* adapter_holder;

    }* swap_chain_holder;
    void* liber_unknown;
    int resolution_x;
    int resolution_y;
    int target_framerate;
    int liber_unknown[19];
    void* main_texture;              // DLCG3::CGTexture2D
    CGView* main_render_target_view; // DLCG3::CGRenderTargetView
    void* textures[3];               // DLCG3::CGTexture2D
    CGView* render_target_views[3];  // DLCG3::CGRenderTargetView
    GXBuffer* render_targets[3];     // GXBS::GXRenderTarget2D
    void* liber_unknown[3];
    int target_count; // 3
    void* liber_unknown;
    GXBuffer* depth_stencil_buffer; // GXBS::GXDepthStencilBuffer
    GXBuffer* render_pre;           // GXBS::GXRenderTarget2D
    void* render_to_texture;        // GXBS::GXRenderToTexture
    GXBuffer* render_post;          // GXBS::GXRenderTarget2D
    int liber_unknown[26];
};

bool liber_draw_callback(uintptr_t device_context, GXDrawTask* task) {
    ++task->times_called;
    uintptr_t draw_base = liber::symbol<"GLOBAL_GXDrawBase">::as<uintptr_t>();
    d3d12_env* environment =
        *reinterpret_cast<d3d12_env**>(draw_base + GXDRAWBASE_D3D12_ENV_OFFSET);
    GXSwapChain* sc = *reinterpret_cast<GXSwapChain**>(
        draw_base + GXDRAWBASE_GXSWAPCHAIN_OFFSET);
    task->device = environment->bound_device->device;
    task->root_signature =
        liber::symbol<"GLOBAL_ID3D12RootSignature">::as<ID3D12RootSignature*>();
    task->command_queue = environment->command_queue;
    CGView* rtv = [&]() {
        if (task->get_scene() == GXDrawTask::UI_SCENE)
            return sc->main_render_target_view;
        return *sc->render_post->cg_view;
    }();
    task->render_target_view =
        reinterpret_cast<D3D12_CPU_DESCRIPTOR_HANDLE*>(&rtv->handle);
    CGView* dsv = *sc->depth_stencil_buffer->cg_view;
    task->depth_stencil_view =
        reinterpret_cast<D3D12_CPU_DESCRIPTOR_HANDLE*>(&dsv->handle);
    task->viewport = reinterpret_cast<D3D12_VIEWPORT*>(
        device_context + GXDEVICEPROXY_VIEWPORT_OFFSET);
    task->scissor_rect = reinterpret_cast<D3D12_RECT*>(
        device_context + GXDEVICEPROXY_RECT_OFFSET);
    task->draw();
    // Unreference task after executing its callback
    task->unref_after_callback();
    return false;
}

void GXDrawTask::eztask_execute(FD4::FD4TaskData* data) {
    this->delta_time = data->get_dt();
    uintptr_t draw_base = liber::symbol<"GLOBAL_GXDrawBase">::as<uintptr_t>();
    if (!draw_base)
        return;
    void** draw_queue_array = reinterpret_cast<void**>(
        draw_base + GXDRAWBASE_DRAW_QUEUE_ARRAY_OFFSET);
    int draw_queue_selector = *reinterpret_cast<int*>(
        draw_base + GXDRAWBASE_DRAW_QUEUE_SELECTOR_OFFSET);
    if (draw_queue_selector > 1)
        return;
    void* draw_queue = draw_queue_array[draw_queue_selector];
    int priority = this->draw_scene == HDR_SCENE ? -1 : -2;
    // Reference task before queueing its callback
    this->ref_for_callback();
    liber::function<"GXBS::GXDrawQueue::queue_callback", void>::call(draw_queue,
        &liber_draw_callback, this, this, priority);
}

LIBER_ASSERTS_BEGIN(GXSwapChain);
LIBER_ASSERT_SIZE(0x170);
LIBER_ASSERT_OFFS(0x68, main_texture);
LIBER_ASSERT_OFFS(0xE8, depth_stencil_buffer);
LIBER_ASSERTS_END;
} // namespace GXBS
} // namespace from
