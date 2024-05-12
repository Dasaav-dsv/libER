/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct EQUIP_PARAM_CUSTOM_WEAPON_ST {
    /**
     * @brief Weapon base ID
     */
    int baseWepId{ 0 };

    /**
     * @brief Magic stone ID
     */
    int gemId{ 0 };

    /**
     * @brief Enhancement value
     */
    unsigned char reinforceLv{ 0 };

    unsigned char pad[7];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_PARAM_CUSTOM_WEAPON_ST) == 16,
    "EQUIP_PARAM_CUSTOM_WEAPON_ST paramdef size does not match detected size");
