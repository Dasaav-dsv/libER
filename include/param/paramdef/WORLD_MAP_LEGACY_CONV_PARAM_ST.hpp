/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WORLD_MAP_LEGACY_CONV_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Conversion source map ID: Area number
     */
    unsigned char srcAreaNo{ 0 };

    /**
     * @brief Source map ID: Grid X
     */
    unsigned char srcGridXNo{ 0 };

    /**
     * @brief Source map ID: Grid Z
     */
    unsigned char srcGridZNo{ 0 };

    unsigned char pad1[1];

    /**
     * @brief Source map reference coordinates X
     */
    float srcPosX{ 0.f };

    /**
     * @brief Source map reference coordinates Y
     */
    float srcPosY{ 0.f };

    /**
     * @brief Source map reference coordinates Z
     */
    float srcPosZ{ 0.f };

    /**
     * @brief Conversion destination map ID: Area number
     */
    unsigned char dstAreaNo{ 0 };

    /**
     * @brief Destination map ID: Grid X
     */
    unsigned char dstGridXNo{ 0 };

    /**
     * @brief Destination map ID: Grid Z
     */
    unsigned char dstGridZNo{ 0 };

    unsigned char pad2[1];

    /**
     * @brief Destination map reference coordinates X
     */
    float dstPosX{ 0.f };

    /**
     * @brief Destination map reference coordinates Y
     */
    float dstPosY{ 0.f };

    /**
     * @brief Destination map reference coordinates Z
     */
    float dstPosZ{ 0.f };

    /**
     * @brief Is it a reference connection point?
     *
     * Is it a reference connection point? One reference connection point is
     * always set for one conversion source map ID.
     */
    bool isBasePoint : 1 { false };

    unsigned char pad3 : 7;

    unsigned char pad4[11];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WORLD_MAP_LEGACY_CONV_PARAM_ST) == 48,
    "WORLD_MAP_LEGACY_CONV_PARAM_ST paramdef size does not match detected "
    "size");
