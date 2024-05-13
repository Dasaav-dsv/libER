/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MAP_MIMICRY_ESTABLISHMENT_PARAM_ST {
    /**
     * @brief Mimicry weight 0
     */
    float mimicryEstablishment0{ -1.f };

    /**
     * @brief Mimicry weight 1
     */
    float mimicryEstablishment1{ -1.f };

    /**
     * @brief Mimicry weight 2
     */
    float mimicryEstablishment2{ -1.f };

    /**
     * @brief Mimicry 0 SFXID Forward swing
     */
    int mimicryBeginSfxId0{ -1 };

    /**
     * @brief Mimicry 0 SFXID body
     */
    int mimicrySfxId0{ -1 };

    /**
     * @brief Mimicry 0 SFXID release
     */
    int mimicryEndSfxId0{ -1 };

    /**
     * @brief Mimicry 1 SFXID Forward swing
     */
    int mimicryBeginSfxId1{ -1 };

    /**
     * @brief Mimicry 1 SFXID body
     */
    int mimicrySfxId1{ -1 };

    /**
     * @brief Mimicry 1 SFXID release
     */
    int mimicryEndSfxId1{ -1 };

    /**
     * @brief Mimicry 2 SFXID Forward swing
     */
    int mimicryBeginSfxId2{ -1 };

    /**
     * @brief Mimicry 2 SFXID body
     */
    int mimicrySfxId2{ -1 };

    /**
     * @brief Mimicry 2 SFXID cancellation
     */
    int mimicryEndSfxId2{ -1 };

    unsigned char pad1[16];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MAP_MIMICRY_ESTABLISHMENT_PARAM_ST) == 64,
    "MAP_MIMICRY_ESTABLISHMENT_PARAM_ST paramdef size does not match detected "
    "size");
