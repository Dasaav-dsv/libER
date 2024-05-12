/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SE_MATERIAL_CONVERT_PARAM_ST {
    /**
     * @brief SE material ID
     *
     * Conversion from SFX material ID (3 digits) to SE material ID (2 digits)
     */
    unsigned char seMaterialId{ 0 };

    unsigned char pad[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SE_MATERIAL_CONVERT_PARAM_ST) == 4,
    "SE_MATERIAL_CONVERT_PARAM_ST paramdef size does not match detected size");
