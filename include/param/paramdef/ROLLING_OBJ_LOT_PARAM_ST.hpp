/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ROLLING_OBJ_LOT_PARAM_ST {
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
     * @brief AssetId_0
     *
     * AssetId_0 (-1: Ignore)
     */
    int AssetId_0{ -1 };

    /**
     * @brief AssetId_1_1
     *
     * AssetId_1 (-1: Ignore)
     */
    int AssetId_1{ -1 };

    /**
     * @brief AssetId_2
     *
     * AssetId_2 (-1: Ignore)
     */
    int AssetId_2{ -1 };

    /**
     * @brief AssetId_3
     *
     * AssetId_3 (-1: Ignore)
     */
    int AssetId_3{ -1 };

    /**
     * @brief AssetId_4
     *
     * AssetId_4 (-1: Ignore)
     */
    int AssetId_4{ -1 };

    /**
     * @brief AssetId_5
     *
     * AssetId_5 (-1: Ignore)
     */
    int AssetId_5{ -1 };

    /**
     * @brief AssetId_6
     *
     * AssetId_6 (-1: Ignore)
     */
    int AssetId_6{ -1 };

    /**
     * @brief AssetId_7
     *
     * AssetId_7 (-1: Ignore)
     */
    int AssetId_7{ -1 };

    /**
     * @brief Appearance weight _0
     *
     * Appearance ratio point (weight) _0: 0 is ignored
     */
    unsigned char CreateWeight_0{ 0 };

    /**
     * @brief Appearance weight _1
     *
     * Appearance ratio point (weight) _1
     */
    unsigned char CreateWeight_1{ 0 };

    /**
     * @brief Appearance weight _2
     *
     * Appearance ratio point (weight) _2
     */
    unsigned char CreateWeight_2{ 0 };

    /**
     * @brief Appearance weight _3
     *
     * Appearance ratio point (weight) _3
     */
    unsigned char CreateWeight_3{ 0 };

    /**
     * @brief Appearance weight _4
     *
     * Appearance ratio point (weight) _4
     */
    unsigned char CreateWeight_4{ 0 };

    /**
     * @brief Appearance weight _5
     *
     * Appearance ratio point (weight) _5
     */
    unsigned char CreateWeight_5{ 0 };

    /**
     * @brief Appearance weight _6
     *
     * Appearance ratio point (weight) _6
     */
    unsigned char CreateWeight_6{ 0 };

    /**
     * @brief Appearance weight _7
     *
     * Appearance ratio point (weight) _7
     */
    unsigned char CreateWeight_7{ 0 };

    unsigned char Reserve_0[20];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ROLLING_OBJ_LOT_PARAM_ST) == 64,
    "ROLLING_OBJ_LOT_PARAM_ST paramdef size does not match detected size");
