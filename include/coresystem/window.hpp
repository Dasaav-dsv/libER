/**
 * @file window.hpp
 * @brief Namespace CS window interface
 *
 * Copyright 2024 libER ELDEN RING API library
 */
#pragma once

#include <detail/preprocessor.hpp>
#include <fd4/component.hpp>
#include <fd4/detail/singleton.hpp>
#include <memory/from_string.hpp>

namespace from {
namespace CS {

class CSWindowImp;
class CSScreenModeCtrl;

/**
 * @brief The singleton responsible for managing the game window
 * and graphics settings.
 */
class CSWindowImp : public FD4::FD4ComponentBase {
public:
    FD4_SINGLETON_CLASS(CSWindowImp);

    virtual ~CSWindowImp() LIBER_INTERFACE_ONLY;

    /// @cond DOXYGEN_SKIP
    using window_handle_type = void*;
    using window_position_type = std::pair<int, int>;
    using window_size_type = std::pair<int, int>;
    /// @endcond

    /**
     * @brief The window screen mode.
     * 
     */
    enum class screen_mode : int {
        window = 0,
        fullscreen = 1,
        borderless_window = 2,
    };

    /**
     * @brief The quality of a @ref graphics_settings entry.
     * 
     */
    enum class quality_level : int {
        off = 0,
        low = 1,
        medium = 2,
        high = 3,
        max = 4,
    };

    struct graphics_settings {
        /// @cond DOXYGEN_SKIP
        screen_mode screen_mode;
        bool auto_detect_best_rendering_settings;
        quality_level graphics_quality;
        quality_level texture_quality;
        quality_level antialiasing_quality;
        quality_level ssao;
        quality_level depth_of_field;
        quality_level motion_blur;
        quality_level shadow_quality;
        quality_level lighting_quality;
        quality_level effects_quality;
        quality_level reflection_quality;
        quality_level water_surface_quality;
        quality_level shader_quality;
        quality_level volumetric_quality;
        quality_level ray_tracing_quality;
        quality_level global_illumination_quality;
        quality_level grass_quality;
        /// @endcond
    };

    /**
     * @brief Return a Win32 API window handle for the main Elden Ring game
     * window
     */
    window_handle_type get_window_handle() const {
        return this->window_handle;
    }

    /**
     * @brief Return a read-only view of the window position (if the game is in
     * windowed mode)
     */
    window_position_type get_window_position() const {
        return this->window_position;
    }

    /**
     * @brief Return a read-only view of the window width and height
     */
    window_size_type get_window_size() const {
        return this->window_size;
    }

    /**
     * @brief Check if the window is currently full screen
     *
     * This is always true in fullscreen mode and false otherwise
     */
    bool is_window_fullscreen() const {
        return this->window_full_screen;
    }

    /**
     * @brief Check if the window was focused on the previous frame
     */
    bool is_window_focused_previous() const {
        return this->window_focused;
    }

    /**
     * @brief Check if the window is currently focused
     */
    bool is_window_focused() const {
        return this->window_focused;
    }

    /**
     * @brief Return the current graphics quality settings
     */
    graphics_settings& get_graphics_settings() {
        return this->graphics_settings;
    }

    /**
     * @brief Return the current graphics quality settings
     */
    const graphics_settings& get_graphics_settings() const {
        return this->graphics_settings;
    }

    /**
     * @brief Set the graphics quality settings
     */
    void set_graphics_settings(const graphics_settings& graphics_settings) {
        this->graphics_settings = graphics_settings;
    }

private:
    window_handle_type window_handle;
    int liber_unknown[4];
    window_position_type window_position;
    window_size_type window_size;
    int liber_unknown[2];
    CSScreenModeCtrl* screen_mode_ctrl;
    int liber_unknown[8];
    bool liber_unknown;
    bool window_focused_previous;
    bool window_full_screen;
    bool window_focused;
    int liber_unknown[32];
    graphics_settings graphics_settings;
};

LIBER_ASSERTS_BEGIN(CSWindowImp);
LIBER_ASSERT_OFFS(0x8, window_handle);
LIBER_ASSERT_OFFS(0x20, window_position);
LIBER_ASSERT_OFFS(0x28, window_size);
LIBER_ASSERT_OFFS(0x38, screen_mode_ctrl);
LIBER_ASSERT_OFFS(0x61, window_focused_previous);
LIBER_ASSERT_OFFS(0x62, window_full_screen);
LIBER_ASSERT_OFFS(0x63, window_focused);
LIBER_ASSERT_OFFS(0xe4, graphics_settings.screen_mode);
LIBER_ASSERT_OFFS(0xe8, graphics_settings.auto_detect_best_rendering_settings);
LIBER_ASSERT_OFFS(0xec, graphics_settings.graphics_quality);
LIBER_ASSERT_OFFS(0xf0, graphics_settings.texture_quality);
LIBER_ASSERT_OFFS(0xf4, graphics_settings.antialiasing_quality);
LIBER_ASSERT_OFFS(0xf8, graphics_settings.ssao);
LIBER_ASSERT_OFFS(0xfc, graphics_settings.depth_of_field);
LIBER_ASSERT_OFFS(0x100, graphics_settings.motion_blur);
LIBER_ASSERT_OFFS(0x104, graphics_settings.shadow_quality);
LIBER_ASSERT_OFFS(0x108, graphics_settings.lighting_quality);
LIBER_ASSERT_OFFS(0x10c, graphics_settings.effects_quality);
LIBER_ASSERT_OFFS(0x110, graphics_settings.reflection_quality);
LIBER_ASSERT_OFFS(0x114, graphics_settings.water_surface_quality);
LIBER_ASSERT_OFFS(0x118, graphics_settings.shader_quality);
LIBER_ASSERT_OFFS(0x11c, graphics_settings.volumetric_quality);
LIBER_ASSERT_OFFS(0x120, graphics_settings.ray_tracing_quality);
LIBER_ASSERT_OFFS(0x124, graphics_settings.global_illumination_quality);
LIBER_ASSERT_OFFS(0x128, graphics_settings.grass_quality);
LIBER_ASSERT_OFFS(0x128, graphics_settings.grass_quality);
LIBER_ASSERTS_END;

} // namespace CS
} // namespace from
