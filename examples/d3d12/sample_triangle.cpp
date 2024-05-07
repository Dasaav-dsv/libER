// Draw a DirectX 12 sample triangle
// Sample code based on D3D12 Hello World samples by Microsoft

#include "../example_base.hpp"

// For D3D12 draw tasks inside the game's render pipeline:
#include <graphics/draw.hpp>
// For wait_for_system:
#include <dantelion2/system.hpp>
// For memory management:
#include <memory/from_unique_ptr.hpp>

// DirectX 12 dependencies:
#include <D3Dcompiler.h>
#include <d3d12.h>

// DirectX Windows dependencies:
#include <detail/windows.inl>
#include <wrl/client.h>

class draw_sample : public from::GXBS::GXDrawTask {
public:
    void draw() override {
        // Get the device from the task context,
        // all context getters are guaranteed to return
        // initialized resources
        ID3D12Device* device = &this->get_device();
        if (this->needs_init) {
            // This method has ran for the first time
            // so our D3D12 resources need to be initialized
            this->init_pipeline_state();
            this->init_command_list();
            this->init_vertex_buffer();
            this->needs_init = false;
        }
        this->command_allocator->Reset();
        this->command_list->Reset(this->command_allocator.Get(),
            this->pipeline_state.Get());
        this->command_list->SetGraphicsRootSignature(
            &this->get_root_signature());
        this->command_list->RSSetViewports(1, &this->get_viewport());
        this->command_list->RSSetScissorRects(1, &this->get_scissor_rect());
        this->command_list->OMSetRenderTargets(1,
            &this->get_render_target_view(), FALSE, nullptr);
        this->command_list->IASetPrimitiveTopology(
            D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST);
        this->command_list->IASetVertexBuffers(0, 1, &vertex_buffer_view);
        this->command_list->DrawInstanced(3, 1, 0, 0);
        this->command_list->Close();
        ID3D12CommandList* command_list = this->command_list.Get();
        this->get_command_queue().ExecuteCommandLists(1, &command_list);
    }

private:
    // Create a pipeline state for our resource
    void init_pipeline_state() {
        Microsoft::WRL::ComPtr<ID3DBlob> vertex_shader_buffer;
        Microsoft::WRL::ComPtr<ID3DBlob> pixel_shader_buffer;
        D3DCompileFromFile(L"shaders.hlsl", nullptr, nullptr, "VSMain",
            "vs_5_0", 0, 0, &vertex_shader_buffer, nullptr);
        D3DCompileFromFile(L"shaders.hlsl", nullptr, nullptr, "PSMain",
            "ps_5_0", 0, 0, &pixel_shader_buffer, nullptr);
        D3D12_GRAPHICS_PIPELINE_STATE_DESC pso_desc{};
        D3D12_INPUT_ELEMENT_DESC input_desc[2] = {
            { "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, 0,
                D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 },
            { "COLOR", 0, DXGI_FORMAT_R32G32B32A32_FLOAT, 0, 12,
                D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA, 0 }
        };
        pso_desc.InputLayout = { input_desc, 2 };
        pso_desc.pRootSignature = &this->get_root_signature();
        pso_desc.VS = { vertex_shader_buffer->GetBufferPointer(),
            vertex_shader_buffer->GetBufferSize() };
        pso_desc.PS = { pixel_shader_buffer->GetBufferPointer(),
            pixel_shader_buffer->GetBufferSize() };
        D3D12_RASTERIZER_DESC& rasterizer_desc = pso_desc.RasterizerState;
        rasterizer_desc.FillMode = D3D12_FILL_MODE_SOLID;
        rasterizer_desc.CullMode = D3D12_CULL_MODE_BACK;
        rasterizer_desc.FrontCounterClockwise = FALSE;
        rasterizer_desc.DepthBias = D3D12_DEFAULT_DEPTH_BIAS;
        rasterizer_desc.DepthBiasClamp = D3D12_DEFAULT_DEPTH_BIAS_CLAMP;
        rasterizer_desc.SlopeScaledDepthBias =
            D3D12_DEFAULT_SLOPE_SCALED_DEPTH_BIAS;
        rasterizer_desc.DepthClipEnable = TRUE;
        rasterizer_desc.MultisampleEnable = FALSE;
        rasterizer_desc.AntialiasedLineEnable = FALSE;
        rasterizer_desc.ForcedSampleCount = 0;
        rasterizer_desc.ConservativeRaster =
            D3D12_CONSERVATIVE_RASTERIZATION_MODE_OFF;
        D3D12_BLEND_DESC& blend_desc = pso_desc.BlendState;
        blend_desc.AlphaToCoverageEnable = FALSE;
        blend_desc.IndependentBlendEnable = FALSE;
        for (auto& rt_blend_desc : blend_desc.RenderTarget) {
            rt_blend_desc.BlendEnable = FALSE;
            rt_blend_desc.LogicOpEnable = FALSE;
            rt_blend_desc.SrcBlend = D3D12_BLEND_ONE;
            rt_blend_desc.DestBlend = D3D12_BLEND_ZERO;
            rt_blend_desc.BlendOp = D3D12_BLEND_OP_ADD;
            rt_blend_desc.SrcBlendAlpha = D3D12_BLEND_ONE;
            rt_blend_desc.DestBlendAlpha = D3D12_BLEND_ZERO;
            rt_blend_desc.BlendOpAlpha = D3D12_BLEND_OP_ADD;
            rt_blend_desc.LogicOp = D3D12_LOGIC_OP_NOOP;
            rt_blend_desc.RenderTargetWriteMask = D3D12_COLOR_WRITE_ENABLE_ALL;
        }
        pso_desc.DepthStencilState.DepthEnable = FALSE;
        pso_desc.DepthStencilState.StencilEnable = FALSE;
        pso_desc.SampleMask = UINT_MAX;
        pso_desc.PrimitiveTopologyType = D3D12_PRIMITIVE_TOPOLOGY_TYPE_TRIANGLE;
        pso_desc.NumRenderTargets = 1;
        pso_desc.RTVFormats[0] = DXGI_FORMAT_R8G8B8A8_UNORM;
        pso_desc.SampleDesc.Count = 1;
        this->get_device().CreateGraphicsPipelineState(&pso_desc,
            IID_PPV_ARGS(&this->pipeline_state));
    }

    // Create the command list to be executed whenever draw_sample::draw is
    // called by the game
    void init_command_list() {
        ID3D12Device& device = this->get_device();
        device.CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT,
            IID_PPV_ARGS(&this->command_allocator));
        device.CreateCommandList(0, D3D12_COMMAND_LIST_TYPE_DIRECT,
            this->command_allocator.Get(), this->pipeline_state.Get(),
            IID_PPV_ARGS(&this->command_list));
        this->command_list->Close();
    }

    // Initialize the vertex buffer to be drawn
    void init_vertex_buffer() {
        ID3D12Device& device = this->get_device();
        // XYZRGBA
        using vertex_data = float[7];
        float triangle_point =
            0.25f * this->get_viewport().Width / this->get_viewport().Height;
        // clang-format off
        vertex_data vertices[3] = {
            {   0.0f,  triangle_point, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f },
            {  0.25f, -triangle_point, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f },
            { -0.25f, -triangle_point, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f }
        };
        // clang-format on
        D3D12_HEAP_PROPERTIES heap_properties{ D3D12_HEAP_TYPE_UPLOAD,
            D3D12_CPU_PAGE_PROPERTY_UNKNOWN, D3D12_MEMORY_POOL_UNKNOWN, 1, 1 };
        D3D12_RESOURCE_DESC resource_desc{ D3D12_RESOURCE_DIMENSION_BUFFER, 0,
            sizeof(vertices), 1, 1, 1, DXGI_FORMAT_UNKNOWN, 1, 0,
            D3D12_TEXTURE_LAYOUT_ROW_MAJOR, D3D12_RESOURCE_FLAG_NONE };
        device.CreateCommittedResource(&heap_properties, D3D12_HEAP_FLAG_NONE,
            &resource_desc, D3D12_RESOURCE_STATE_GENERIC_READ, nullptr,
            IID_PPV_ARGS(&this->vertex_buffer));
        void* vertex_data_buf;
        D3D12_RANGE range{ 0, 0 };
        vertex_buffer->Map(0, &range, &vertex_data_buf);
        std::memcpy((void*)vertex_data_buf, (void*)vertices, sizeof(vertices));
        vertex_buffer->Unmap(0, nullptr);
        vertex_buffer_view.BufferLocation =
            vertex_buffer->GetGPUVirtualAddress();
        vertex_buffer_view.StrideInBytes = sizeof(vertices[0]);
        vertex_buffer_view.SizeInBytes = sizeof(vertices);
    }

    bool needs_init = true;
    Microsoft::WRL::ComPtr<ID3D12PipelineState> pipeline_state;
    Microsoft::WRL::ComPtr<ID3D12CommandAllocator> command_allocator;
    Microsoft::WRL::ComPtr<ID3D12GraphicsCommandList> command_list;
    Microsoft::WRL::ComPtr<ID3D12Resource> vertex_buffer;
    D3D12_VERTEX_BUFFER_VIEW vertex_buffer_view;
};

void example_base() {
    // Allocate console
    con_allocate(false);
    // It's necessary to wait for the task system to be initialized
    // before registering tasks. We can use wait_for_system
    // with a timeout of 5000ms to ensure ELDEN RING has initialized it
    if (!from::DLSY::wait_for_system(5'000)) {
        std::cout << "wait_for_system timed out!\n";
        return;
    }
    // Create the draw task with a smart pointer
    // that has a delay deleter. This is important for the
    // task to be properly unregistered on destruction
    auto task = from::make_unique<draw_sample>();
    // Set the render target/layer on which to draw
    // UI_SCENE (called UIScene by ELDEN RING) is the HUD and menu
    // HDR_SCENE (called HDRScene by ELDEN RING) is the game world,
    // overlayed by the UIScene in the final composite.
    // This means that to draw under the HUD, HDR_SCENE must be chosen,
    // and to draw above the HUD, UI_SCENE must be chosen instead.
    // Keep in mind that the game world scene is actually using
    // an HDR colorspace like it says in the name
    task->set_scene(from::GXBS::GXDrawTask::UI_SCENE);
    // Call for the draw task to be registered and executed
    task->register_task();
    // Sleep before letting the task unique_ptr go out of scope
    // and cease rendering as it gets destroyed
    Sleep(20'000);
}
