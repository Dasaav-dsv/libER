/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WEATHER_ASSET_CREATE_PARAM_ST {
    /**
     * @brief Asset Id
     *
     * Specify the asset ID to generate. AEG999_999-> 999999
     */
    unsigned int AssetId{ 0 };

    /**
     * @brief Slot number
     *
     * This is the number for generation control. Only one asset can be
     * generated in the same slot. You can control whether you want to generate
     * duplicates or not.
     */
    unsigned int SlotNo{ 0 };

    /**
     * @brief Occurrence condition
     *
     * The type of condition of occurrence
     */
    unsigned char CreateConditionType{ 0 };

    unsigned char padding0[3];

    /**
     * @brief Transition source weather
     *
     * Specify the transition source weather. It is referenced only when the
     * occurrence condition is "transition".
     */
    short TransitionSrcWeather{ 0 };

    /**
     * @brief Transition destination weather
     *
     * Specify the transition destination weather. It is referenced only when
     * the occurrence condition is "transition".
     */
    short TransitionDstWeather{ 0 };

    /**
     * @brief Elapsed time check weather
     *
     * Specify the weather to check the elapsed time.
     */
    short ElapsedTimeCheckweather{ 0 };

    unsigned char padding1[2];

    /**
     * @brief Elapsed time [Second]
     *
     * Specify the elapsed time. It is referenced only when the occurrence
     * condition is "time elapsed". Real time Specify in seconds.
     */
    float ElapsedTime{ 0.f };

    /**
     * @brief Generation delay time [Second]
     *
     * Specifies the time to delay after the generation is determined. The
     * created slot will be in use while it is delayed. Created immediately with
     * 0 or less.
     */
    float CreateDelayTime{ -1.f };

    /**
     * @brief Probability of occurrence [%]
     *
     * Specifies the probability of occurrence when conditions for weather
     * transitions or elapsed time are met.
     */
    unsigned int CreateProbability{ 100 };

    /**
     * @brief Lifespan [Second]
     *
     * Specifies the life of the generated asset. Real time Specify in seconds.
     */
    float LifeTime{ 600.f };

    /**
     * @brief Fade time [Second]
     *
     * Time [seconds] used for fade-in and fade-out. No fade below 0.
     */
    float FadeTime{ 1.f };

    /**
     * @brief Generateable start time [Hour]
     *
     * Specifies a start time that can be generated [0.0 --24.0]. If you put -1
     * in either the start or the end, it will be treated as unlimited (can be
     * generated in all time).
     */
    float EnableCreateTimeMin{ -1.f };

    /**
     * @brief Generateable end time [Hour]
     *
     * Specifies the end time that can be generated [0.0 --24.0]. If you put -1
     * in either the start or the end, it will be treated as unlimited (can be
     * generated in all time).
     */
    float EnableCreateTimeMax{ -1.f };

    /**
     * @brief Generation point 0
     *
     * Specify the generation point number. Specify the last 3 digits of the
     * "Weather Asset Generation Point" in MapStudio. -1 will be invalid
     */
    short CreatePoint0{ -1 };

    /**
     * @brief Generation point 1
     *
     * Specify the generation point number. Specify the last 3 digits of the
     * "Weather Asset Generation Point" in MapStudio. -1 will be invalid
     */
    short CreatePoint1{ -1 };

    /**
     * @brief Generation point 2
     *
     * Specify the generation point number. Specify the last 3 digits of the
     * "Weather Asset Generation Point" in MapStudio. -1 will be invalid
     */
    short CreatePoint2{ -1 };

    /**
     * @brief Generation point 3
     *
     * Specify the generation point number. Specify the last 3 digits of the
     * "Weather Asset Generation Point" in MapStudio. -1 will be invalid
     */
    short CreatePoint3{ -1 };

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

    unsigned char Reserved2[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WEATHER_ASSET_CREATE_PARAM_ST) == 64,
    "WEATHER_ASSET_CREATE_PARAM_ST paramdef size does not match detected size");
