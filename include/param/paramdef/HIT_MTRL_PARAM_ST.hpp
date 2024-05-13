/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct HIT_MTRL_PARAM_ST {
    /**
     * @brief Sound radius magnification
     *
     * Normal when 1x. When set to 0, the radius of sound becomes 0 (SE and SFX
     * are unrelated game-like parameters).
     */
    float aiVolumeRate{ 1.f };

    /**
     * @brief Special effect 0 applied when stepping on hit material
     *
     * When the character steps on the hit material, the set special effect 0 is
     * exhibited.
     */
    int spEffectIdOnHit0{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 1
     *
     * When the character steps on the hit material, the set special effect 1 is
     * exhibited.
     */
    int spEffectIdOnHit1{ -1 };

    /**
     * @brief Foot effect height type
     *
     * Height to generate foot effect
     */
    unsigned char footEffectHeightType : 2 { 0 };

    /**
     * @brief Foot effect orientation type
     *
     * Direction of foot effect
     */
    unsigned char footEffectDirType : 2 { 0 };

    /**
     * @brief Ground height type
     *
     * For floating items such as the surface of the water
     */
    unsigned char floorHeightType : 2 { 0 };

    /**
     * @brief Is fall damage invalid?
     *
     * Set to 1 for floors that are not subject to fall damage
     */
    bool disableFallDamage : 1 { false };

    /**
     * @brief Is it a hard material for sound echo?
     *
     * Is it a hard material for sound echo? (0: soft, 1: hard)
     */
    bool isHardnessForSoundReverb : 1 { false };

    /**
     * @brief Material hardness type
     *
     * The hardness of the material. Used for soft contact processing of rigid
     * bodies.
     */
    unsigned char hardnessType{ 0 };

    unsigned char pad2[6];

    /**
     * @brief Special effect applied when stepping on the hit material 0 2nd lap
     */
    int spEffectIdOnHit0_ClearCount_2{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 0 3rd lap
     */
    int spEffectIdOnHit0_ClearCount_3{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 0 4th lap
     */
    int spEffectIdOnHit0_ClearCount_4{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 0 5th lap
     */
    int spEffectIdOnHit0_ClearCount_5{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 0 6th lap
     */
    int spEffectIdOnHit0_ClearCount_6{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 0 7th lap
     */
    int spEffectIdOnHit0_ClearCount_7{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 0 8th lap
     */
    int spEffectIdOnHit0_ClearCount_8{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 1st lap
     */
    int spEffectIdOnHit1_ClearCount_2{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 1 3rd lap
     */
    int spEffectIdOnHit1_ClearCount_3{ -1 };

    /**
     * @brief Special effect when stepping on the hit material 1 4th lap
     *
     * Special effect applied when stepping on the hit material 1 4th lap
     */
    int spEffectIdOnHit1_ClearCount_4{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 1 5th lap
     */
    int spEffectIdOnHit1_ClearCount_5{ -1 };

    /**
     * @brief Special effect when stepping on the hit material 1 6th lap
     */
    int spEffectIdOnHit1_ClearCount_6{ -1 };

    /**
     * @brief Special effect applied when stepping on the hit material 1 7th lap
     */
    int spEffectIdOnHit1_ClearCount_7{ -1 };

    /**
     * @brief Special effect when stepping on the hit material 1 8th lap
     *
     * Special effect applied when stepping on the hit material 1 8th lap
     */
    int spEffectIdOnHit1_ClearCount_8{ -1 };

    /**
     * @brief Hit material replacement (rain)
     *
     * Hit material change destination ID due to weather (rain) (-1: No change)
     */
    short replaceMateiralId_Rain{ -1 };

    unsigned char pad4[2];

    /**
     * @brief Wet special effect ID_00
     *
     * Special effect for wetting 00
     */
    int spEffectId_forWet00{ -1 };

    /**
     * @brief Wet special effect ID_01
     *
     * Special effects for wetting 01
     */
    int spEffectId_forWet01{ -1 };

    /**
     * @brief Wet special effect ID_02
     *
     * Special effects for wetting 02
     */
    int spEffectId_forWet02{ -1 };

    /**
     * @brief Wet special effect ID_03
     *
     * Special effects for wetting 03
     */
    int spEffectId_forWet03{ -1 };

    /**
     * @brief Wet special effect ID_04
     *
     * Special effects for wetting 04
     */
    int spEffectId_forWet04{ -1 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::HIT_MTRL_PARAM_ST) == 100,
    "HIT_MTRL_PARAM_ST paramdef size does not match detected size");
