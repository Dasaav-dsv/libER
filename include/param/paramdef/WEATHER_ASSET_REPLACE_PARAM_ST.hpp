/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WEATHER_ASSET_REPLACE_PARAM_ST {
    /**
     * @brief Map number
     *
     * Specify the map number in 8 digits. Only open and legacy celestial sphere
     * placement maps can be specified
     */
    unsigned int mapId{ 0 };

    /**
     * @brief weather
     *
     * Specifies the assets that will be valid in this weather.
     */
    short TransitionSrcWeather{ 0 };

    unsigned char padding0[2];

    /**
     * @brief After "fire ashes"?
     *
     * Specifies whether or not to adapt to the "fire ash" state of the map.
     */
    bool isFireAsh{ false };

    unsigned char padding1[3];

    unsigned int reserved2{ 0 };

    /**
     * @brief Display Asset 1
     *
     * -1: Invalid Specify the asset ID to generate. AEG999_999-> 999999
     */
    int AssetId0{ -1 };

    /**
     * @brief Display asset 2
     *
     * -1: Invalid Specify the asset ID to generate. AEG999_999-> 999999
     */
    int AssetId1{ -1 };

    /**
     * @brief Display assets 3
     *
     * -1: Invalid Specify the asset ID to generate. AEG999_999-> 999999
     */
    int AssetId2{ -1 };

    /**
     * @brief Display assets 4
     *
     * -1: Invalid Specify the asset ID to generate. AEG999_999-> 999999
     */
    int AssetId3{ -1 };

    /**
     * @brief Display assets 5
     *
     * -1: Invalid Specify the asset ID to generate. AEG999_999-> 999999
     */
    int AssetId4{ -1 };

    /**
     * @brief Display assets 6
     *
     * -1: Invalid Specify the asset ID to generate. AEG999_999-> 999999
     */
    int AssetId5{ -1 };

    /**
     * @brief Display assets 7
     *
     * -1: Invalid Specify the asset ID to generate. AEG999_999-> 999999
     */
    int AssetId6{ -1 };

    /**
     * @brief Display assets 8
     *
     * -1: Invalid Specify the asset ID to generate. AEG999_999-> 999999
     */
    int AssetId7{ -1 };

    unsigned char reserved0[8];

    /**
     * @brief Generation limit ID 0
     *
     * ID for production restriction. -1: Unlimited. Generation is allowed only
     * if it matches the generation limit ID in "Map default parameter .xlsm"
     * (SEQ08921).
     */
    signed char CreateAssetLimitId0{ -1 };

    /**
     * @brief Generation limit ID1
     *
     * ID for production restriction. -1: Unlimited. Generation is allowed only
     * if it matches the generation limit ID in "Map default parameter .xlsm"
     * (SEQ08921).
     */
    signed char CreateAssetLimitId1{ -1 };

    /**
     * @brief Generation limit ID2
     *
     * ID for production restriction. -1: Unlimited. Generation is allowed only
     * if it matches the generation limit ID in "Map default parameter .xlsm"
     * (SEQ08921).
     */
    signed char CreateAssetLimitId2{ -1 };

    /**
     * @brief Generation limit ID3
     *
     * ID for production restriction. -1: Unlimited. Generation is allowed only
     * if it matches the generation limit ID in "Map default parameter .xlsm"
     * (SEQ08921).
     */
    signed char CreateAssetLimitId3{ -1 };

    unsigned char reserved1[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WEATHER_ASSET_REPLACE_PARAM_ST) == 64,
    "WEATHER_ASSET_REPLACE_PARAM_ST paramdef size does not match detected "
    "size");
