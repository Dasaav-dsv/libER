/**
 * @file draw.hpp
 * @brief D3D12 on-screen display tasks
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <coresystem/task.hpp>

// D3D12 resource forward declarations
struct ID3D12Device;
struct ID3D12RootSignature;
struct ID3D12CommandQueue;

struct D3D12_VIEWPORT;
struct D3D12_CPU_DESCRIPTOR_HANDLE;

struct tagRECT;

using D3D12_RECT = tagRECT;
using HANDLE = void*;


namespace from {
namespace GXBS {

class GXDrawTask : public CS::CSEzTask {
public:
    enum scene {
        GAME_SCENE,
        UI_SCENE
    };

    LIBERAPI void eztask_execute(FD4::FD4TaskData* data) override final;

    void register_task(
        CS::CSTaskGroup task_group = CS::CSTaskGroup::INVALID) override {
        CS::CSEzTask::register_task(CS::CSTaskGroup::GraphicsStep);
    }

    virtual void draw() = 0;

    scene get_scene() const noexcept {
        return this->draw_scene;
    }

    void set_scene(scene new_scene) noexcept {
        this->draw_scene = new_scene;
    }

    ID3D12Device& get_device() noexcept {
        return *this->device;
    }

    ID3D12RootSignature& get_root_signature() noexcept {
        return *this->root_signature;
    }

    ID3D12CommandQueue& get_command_queue() noexcept {
        return *this->command_queue;
    }

    D3D12_CPU_DESCRIPTOR_HANDLE& get_render_target_view() noexcept {
        return *this->render_target_view;
    }

    D3D12_CPU_DESCRIPTOR_HANDLE& get_depth_stencil_view() noexcept {
        return *this->depth_stencil_view;
    }

    const D3D12_VIEWPORT& get_viewport() noexcept {
        return *this->viewport;
    }

    const D3D12_RECT& get_scissor_rect() noexcept {
        return *this->scissor_rect;
    }

    float get_delta_time() noexcept {
        return this->delta_time;
    }

    int get_times_called() noexcept {
        return this->times_called;
    }

private:
    friend bool liber_draw_callback(uintptr_t device_context, GXDrawTask* task);

    ID3D12Device* device = nullptr;
    ID3D12RootSignature* root_signature = nullptr;
    ID3D12CommandQueue* command_queue = nullptr;
    D3D12_CPU_DESCRIPTOR_HANDLE* render_target_view = nullptr;
    D3D12_CPU_DESCRIPTOR_HANDLE* depth_stencil_view = nullptr;
    D3D12_VIEWPORT* viewport = nullptr;
    D3D12_RECT* scissor_rect = nullptr;
    scene draw_scene = GAME_SCENE;
    float delta_time = 0.0f;
    int times_called = 0;
};
} // namespace GXBS
} // namespace from
