/**
 * @file draw.hpp
 * @brief D3D12 on-screen display tasks
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <coresystem/task.hpp>
#include <dantelion2/utility.hpp>

#include <utility>

// D3D12 resource forward declarations
struct ID3D12Device;
struct ID3D12RootSignature;
struct ID3D12CommandQueue;

struct D3D12_VIEWPORT;
struct D3D12_CPU_DESCRIPTOR_HANDLE;

struct tagRECT;

/// @cond DOXYGEN_SKIP
using D3D12_RECT = tagRECT;
using HANDLE = void*;
/// @endcond

namespace from {
namespace GXBS {
/**
 * @brief Abstract graphics draw task base.
 *
 * Based on @link from::CS::CSEzTask CS::CSEzTask @endlink,
 * this task executes during the CS::CSTaskGroup::GraphicsStep
 * once registered. Concrete classes that derive from it must implement the
 * @link from::GXBS::GXDrawTask::draw draw @endlink method,
 * and may access DirectX 12 resources through other methods of this class.
 *
 * Two layer options are provided by default, which determine if the D3D12
 * render target view returned by from::GXBS::GXDrawTask::get_render_target_view
 * is above or below ELDEN RING's menu/UI.
 *
 * @see from::CS::CSEzTask
 *
 */
class GXDrawTask : public DLUT::DLReferenceCountObject, public CS::CSEzTask {
public:
    /**
     * @brief Whether the task should draw on top of the UI.
     *
     * HDR_SCENE (called HDRScene by the game): draw before
     * the UI is composited onto the final render target.
     *
     * UI_SCENE (called UIScene by the game): draw on top of the composited UI,
     * but below any 3rd party overlays.
     *
     */
    enum scene {
        HDR_SCENE,
        UI_SCENE
    };

    using CS::CSEzTask::register_task;

    /**
     * @brief Register the draw task, i.e. start its execution.
     *
     */
    void register_task() {
        CS::CSEzTask::register_task(CS::CSTaskGroup::GraphicsStep);
    }

    /**
     * @brief The abstract method that is called whenever the task
     * executes after being registered by from::GXBS::GXDrawTask::register_task.
     *
     * The DirectX 12 resources accessible through this class's methods are
     * guaranteed to be initialized.
     *
     */
    virtual void draw() = 0;

    /**
     * @brief Get the scene, which selects the layer to draw on.
     *
     * @return scene layer selection enum value
     */
    scene get_scene() const noexcept {
        return this->draw_scene;
    }

    /**
     * @brief Set the scene object, which selects the layer to draw on.
     *
     * @param new_scene scene layer selection enum value to use
     */
    void set_scene(scene new_scene) noexcept {
        this->draw_scene = new_scene;
    }

    /**
     * @brief Get the ID3D12Device interface.
     *
     * Guaranteed to be initialized when called from
     * from::GXBS::GXDrawTask::draw
     *
     * @return ID3D12Device& reference to the interface
     */
    ID3D12Device& get_device() noexcept {
        return *this->device;
    }

    /**
     * @brief Get the ID3D12RootSignature interface.
     *
     * @return ID3D12RootSignature& reference to the interface
     */
    ID3D12RootSignature& get_root_signature() noexcept {
        return *this->root_signature;
    }

    /**
     * @brief Get the ID3D12CommandQueue interface.
     *
     * @return ID3D12CommandQueue& reference to the interface
     */
    ID3D12CommandQueue& get_command_queue() noexcept {
        return *this->command_queue;
    }

    /**
     * @brief Get the render target view handle.
     *
     * @return D3D12_CPU_DESCRIPTOR_HANDLE& rtv handle
     */
    D3D12_CPU_DESCRIPTOR_HANDLE& get_render_target_view() noexcept {
        return *this->render_target_view;
    }

    /**
     * @brief Get the depth stencil view handle.
     *
     * @return D3D12_CPU_DESCRIPTOR_HANDLE& dsv handle
     */
    D3D12_CPU_DESCRIPTOR_HANDLE& get_depth_stencil_view() noexcept {
        return *this->depth_stencil_view;
    }

    /**
     * @brief Get the current viewport dimensions.
     *
     * @return const D3D12_VIEWPORT& reference to the viewport structure
     */
    const D3D12_VIEWPORT& get_viewport() noexcept {
        return *this->viewport;
    }

    /**
     * @brief Get the scissor rect dimensions.
     *
     * @return const D3D12_RECT& reference to the scissor rectangle structure
     */
    const D3D12_RECT& get_scissor_rect() noexcept {
        return *this->scissor_rect;
    }

    /**
     * @brief Get the delta time of this frame.
     *
     * @return float delta time in seconds
     */
    float get_delta_time() noexcept {
        return this->delta_time;
    }

    /**
     * @brief Get how many times this draw task has been called.
     *
     * @return int times called
     */
    int get_times_called() noexcept {
        return this->times_called;
    }

private:
    void ref_for_callback() noexcept {
        if (!std::exchange(this->callback_referenced, true))
            static_cast<DLUT::DLReferenceCountObject*>(this)->ref();
    }

    void unref_after_callback() noexcept {
        if (std::exchange(this->callback_referenced, false))
            static_cast<DLUT::DLReferenceCountObject*>(this)->unref();
    }

    LIBERAPI void eztask_execute(FD4::FD4TaskData* data) override final;

    friend bool liber_draw_callback(uintptr_t device_context, GXDrawTask* task);

    ID3D12Device* device = nullptr;
    ID3D12RootSignature* root_signature = nullptr;
    ID3D12CommandQueue* command_queue = nullptr;
    D3D12_CPU_DESCRIPTOR_HANDLE* render_target_view = nullptr;
    D3D12_CPU_DESCRIPTOR_HANDLE* depth_stencil_view = nullptr;
    D3D12_VIEWPORT* viewport = nullptr;
    D3D12_RECT* scissor_rect = nullptr;
    scene draw_scene = HDR_SCENE;
    bool callback_referenced = false;
    float delta_time = 0.0f;
    int times_called = 0;
};
} // namespace GXBS
} // namespace from
