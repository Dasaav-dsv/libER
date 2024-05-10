/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct KNOCKBACK_PARAM_ST {
    float damage_Min_ContTime{ 0 };
    float damage_S_ContTime{ 0 };
    float damage_M_ContTime{ 0 };
    float damage_L_ContTime{ 0 };
    float damage_BlowS_ContTime{ 0 };
    float damage_BlowM_ContTime{ 0 };
    float damage_Strike_ContTime{ 0 };
    float damage_Uppercut_ContTime{ 0 };
    float damage_Push_ContTime{ 0 };
    float damage_Breath_ContTime{ 0 };
    float damage_HeadShot_ContTime{ 0 };
    float guard_S_ContTime{ 0 };
    float guard_L_ContTime{ 0 };
    float guard_LL_ContTime{ 0 };
    float guardBrake_ContTime{ 0 };
    float damage_Min_DecTime{ 0 };
    float damage_S_DecTime{ 0 };
    float damage_M_DecTime{ 0 };
    float damage_L_DecTime{ 0 };
    float damage_BlowS_DecTime{ 0 };
    float damage_BlowM_DecTime{ 0 };
    float damage_Strike_DecTime{ 0 };
    float damage_Uppercut_DecTime{ 0 };
    float damage_Push_DecTime{ 0 };
    float damage_Breath_DecTime{ 0 };
    float damage_HeadShot_DecTime{ 0 };
    float guard_S_DecTime{ 0 };
    float guard_L_DecTime{ 0 };
    float guard_LL_DecTime{ 0 };
    float guardBrake_DecTime{ 0 };
    unsigned char pad[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::KNOCKBACK_PARAM_ST) == 128,
    "KNOCKBACK_PARAM_ST paramdef size does not match detected size");
