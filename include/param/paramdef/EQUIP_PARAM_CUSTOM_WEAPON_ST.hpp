/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct EQUIP_PARAM_CUSTOM_WEAPON_ST {
    int baseWepId{ 0 };
    int gemId{ 0 };
    unsigned char reinforceLv{ 0 };
    unsigned char pad[7];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_CUSTOM_WEAPON_ST) == 16,
    "EQUIP_PARAM_CUSTOM_WEAPON_ST paramdef size does not match detected size");
