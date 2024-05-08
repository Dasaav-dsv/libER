/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct EQUIP_PARAM_CUSTOM_WEAPON_ST {
    int baseWepId{ 0 };
    int gemId{ 0 };
    unsigned char reinforceLv{ 0 };
    unsigned char pad[7];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::EQUIP_PARAM_CUSTOM_WEAPON_ST) == 16,
    "EQUIP_PARAM_CUSTOM_WEAPON_ST paramdef size does not match detected size");
