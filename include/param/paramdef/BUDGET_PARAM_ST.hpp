/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct BUDGET_PARAM_ST {
    /**
     * @brief VRAM: ALL
     *
     * VRAM: ALL (unit is MB)
     */
    float vram_all{ 1.f };

    /**
     * @brief VRAM: Map / Object Texture
     *
     * VRAM: Map / Object Texture (Unit: MB)
     */
    float vram_mapobj_tex{ 1.f };

    /**
     * @brief VRAM: Map / Object Model
     *
     * VRAM: Map / object model (in MB)
     */
    float vram_mapobj_mdl{ 1.f };

    /**
     * @brief VRAM: map
     *
     * VRAM: Map (in MB)
     */
    float vram_map{ 1.f };

    /**
     * @brief VRAM: Character
     *
     * VRAM: Character (unit is MB)
     */
    float vram_chr{ 1.f };

    /**
     * @brief VRAM: Parts
     *
     * VRAM: Parts (unit is MB)
     */
    float vram_parts{ 1.f };

    /**
     * @brief VRAM: SFX
     *
     * VRAM: SFX (unit is MB)
     */
    float vram_sfx{ 1.f };

    /**
     * @brief VRAM: Character texture
     *
     * VRAM: Character texture (unit is MB)
     */
    float vram_chr_tex{ 1.f };

    /**
     * @brief VRAM: Character model
     *
     * VRAM: Character model (unit is MB)
     */
    float vram_chr_mdl{ 1.f };

    /**
     * @brief VRAM: Parts texture
     *
     * VRAM: Parts texture (unit is MB)
     */
    float vram_parts_tex{ 1.f };

    /**
     * @brief VRAM: Parts model
     *
     * VRAM: Parts model (unit is MB)
     */
    float vram_parts_mdl{ 1.f };

    /**
     * @brief VRAM: SFX texture
     *
     * VRAM: SFX texture (unit is MB)
     */
    float vram_sfx_tex{ 1.f };

    /**
     * @brief VRAM: SFX model
     *
     * VRAM: SFX model (in MB)
     */
    float vram_sfx_mdl{ 1.f };

    /**
     * @brief VRAM: Gi
     *
     * VRAM: Gi (unit is MB)
     */
    float vram_gi{ 1.f };

    /**
     * @brief VRAM: Menu
     *
     * VRAM: Menu (unit is MB)
     */
    float vram_menu_tex{ 1.f };

    /**
     * @brief VRAM: DECAL_RT
     *
     * VRAM: DECAL render target (unit is MB)
     */
    float vram_decal_rt{ 1.f };

    /**
     * @brief VRAM: DECAL
     *
     * VRAM: DECAL (unit is MB)
     */
    float vram_decal{ 1.f };

    unsigned char reserve_0[4];

    /**
     * @brief VRAM: Other textures
     *
     * VRAM: Other models (in MB)
     */
    float vram_other_tex{ 1.f };

    /**
     * @brief VRAM: Other models
     *
     * VRAM: Other textures (in MB)
     */
    float vram_other_mdl{ 1.f };

    /**
     * @brief HAVOK: Anime
     *
     * HAVOK: Animation (unit is MB)
     */
    float havok_anim{ 1.f };

    /**
     * @brief HAVOK: Placement
     *
     * HAVOK: Placement (unit is MB)
     */
    float havok_ins{ 1.f };

    /**
     * @brief HAVOK: Hit
     *
     * HAVOK: Hit (unit is MB)
     */
    float havok_hit{ 1.f };

    /**
     * @brief VRAM: Other
     *
     * VRAM: Other (unit is MB)
     */
    float vram_other{ 1.f };

    /**
     * @brief VRAM: total value
     *
     * VRAM: Total value (unit is MB)
     */
    float vram_detail_all{ 1.f };

    /**
     * @brief VRAM: Characters & Parts
     *
     * VRAM: Total value of characters and parts (unit is MB)
     */
    float vram_chr_and_parts{ 1.f };

    /**
     * @brief HAVOK: Navimesh
     *
     * HAVOK: Navimesh (unit is MB)
     */
    float havok_navimesh{ 1.f };

    unsigned char reserve_1[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BUDGET_PARAM_ST) == 132,
    "BUDGET_PARAM_ST paramdef size does not match detected size");
