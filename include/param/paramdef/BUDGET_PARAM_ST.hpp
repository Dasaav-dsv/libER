/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct BUDGET_PARAM_ST {
    float vram_all{ 1 };
    float vram_mapobj_tex{ 1 };
    float vram_mapobj_mdl{ 1 };
    float vram_map{ 1 };
    float vram_chr{ 1 };
    float vram_parts{ 1 };
    float vram_sfx{ 1 };
    float vram_chr_tex{ 1 };
    float vram_chr_mdl{ 1 };
    float vram_parts_tex{ 1 };
    float vram_parts_mdl{ 1 };
    float vram_sfx_tex{ 1 };
    float vram_sfx_mdl{ 1 };
    float vram_gi{ 1 };
    float vram_menu_tex{ 1 };
    float vram_decal_rt{ 1 };
    float vram_decal{ 1 };
    unsigned char reserve_0[4];
    float vram_other_tex{ 1 };
    float vram_other_mdl{ 1 };
    float havok_anim{ 1 };
    float havok_ins{ 1 };
    float havok_hit{ 1 };
    float vram_other{ 1 };
    float vram_detail_all{ 1 };
    float vram_chr_and_parts{ 1 };
    float havok_navimesh{ 1 };
    unsigned char reserve_1[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BUDGET_PARAM_ST) == 132,
    "BUDGET_PARAM_ST paramdef size does not match detected size");
