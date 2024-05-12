/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MATERIAL_EX_PARAM_ST {
    /**
     * @brief Material parameter name
     *
     * Set the parameter name of the material. Up to 31 characters
     */
    wchar_t paramName[32];

    /**
     * @brief Target material ID
     *
     * NPC Para: Resident Material Expansion Para ID setting -1 for all
     * materials
     */
    int materialId{ -1 };

    /**
     * @brief Overwrite value 1 (R)
     *
     * NPC Para: Resident Material Extended Para ID Settings
     */
    float materialParamValue0{ 0.f };

    /**
     * @brief Overwrite value 2 (G)
     *
     * NPC Para: Resident Material Expansion Para ID Settings
     */
    float materialParamValue1{ 0.f };

    /**
     * @brief Overwrite value 3 (B)
     *
     * NPC Para: Resident Material Expansion Para ID Settings
     */
    float materialParamValue2{ 0.f };

    /**
     * @brief Overwrite value 4 (A)
     *
     * NPC Para: Resident Material Extended Para ID Settings
     */
    float materialParamValue3{ 0.f };

    /**
     * @brief Overwrite value 5 (I)
     *
     * NPC Para: Resident Material Expansion Para ID Settings
     */
    float materialParamValue4{ 1.f };

    unsigned char pad[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MATERIAL_EX_PARAM_ST) == 96,
    "MATERIAL_EX_PARAM_ST paramdef size does not match detected size");
