/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ASSET_MODEL_SFX_PARAM_ST {
    /**
     * @brief 0: SfxID
     */
    int sfxId_0{ -1 };

    /**
     * @brief 0: Damipoli ID
     */
    int dmypolyId_0{ -1 };

    unsigned char reserve_0[8];

    /**
     * @brief 1: SfxID
     */
    int sfxId_1{ -1 };

    /**
     * @brief 1: Damipoli ID
     */
    int dmypolyId_1{ -1 };

    unsigned char reserve_1[8];

    /**
     * @brief 2: SfxID
     */
    int sfxId_2{ -1 };

    /**
     * @brief 2: Damipoli ID
     */
    int dmypolyId_2{ -1 };

    unsigned char reserve_2[8];

    /**
     * @brief 3: SfxID
     */
    int sfxId_3{ -1 };

    /**
     * @brief 3: Damipoli ID
     */
    int dmypolyId_3{ -1 };

    unsigned char reserve_3[8];

    /**
     * @brief 4: SfxID
     */
    int sfxId_4{ -1 };

    /**
     * @brief 4: Damipoli ID
     */
    int dmypolyId_4{ -1 };

    unsigned char reserve_4[8];

    /**
     * @brief 5: SfxID
     */
    int sfxId_5{ -1 };

    /**
     * @brief 5: Damipoli ID
     */
    int dmypolyId_5{ -1 };

    unsigned char reserve_5[8];

    /**
     * @brief 6: SfxID
     */
    int sfxId_6{ -1 };

    /**
     * @brief 6: Damipoli ID
     */
    int dmypolyId_6{ -1 };

    unsigned char reserve_6[8];

    /**
     * @brief 7: SfxID
     */
    int sfxId_7{ -1 };

    /**
     * @brief 7: Damipoli ID
     */
    int dmypolyId_7{ -1 };

    /**
     * @brief Disables the effect on irradiance volume
     *
     * When enabled, the effect on irradiance volume shooting is disabled.
     */
    bool isDisableIV{ false };

    unsigned char reserve_7[7];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ASSET_MODEL_SFX_PARAM_ST) == 128,
    "ASSET_MODEL_SFX_PARAM_ST paramdef size does not match detected size");
