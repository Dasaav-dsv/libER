/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CS_TEXTURE_FILTER_QUALITY_DETAIL {
    /**
     * @brief filter
     */
    unsigned char filter{ 3 };

    /**
     * @brief dmy
     */
    unsigned char dmy[3];

    /**
     * @brief Aniso level
     */
    unsigned int maxAnisoLevel{ 4 };
};

}; // namespace paramdef
}; // namespace from
