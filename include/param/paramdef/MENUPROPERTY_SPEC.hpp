/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MENUPROPERTY_SPEC {
    /**
     * @brief Item name Text ID
     */
    int CaptionTextID{ 0 };

    /**
     * @brief Item icon ID
     */
    int IconID{ 0 };

    /**
     * @brief Required skills
     */
    unsigned int RequiredPropertyID{ 0 };

    /**
     * @brief Superiority or inferiority judgment
     */
    signed char CompareType{ 0 };

    unsigned char pad2[1];

    /**
     * @brief Format
     */
    unsigned short FormatType{ 0 };

    unsigned char pad[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MENUPROPERTY_SPEC) == 32,
    "MENUPROPERTY_SPEC paramdef size does not match detected size");
