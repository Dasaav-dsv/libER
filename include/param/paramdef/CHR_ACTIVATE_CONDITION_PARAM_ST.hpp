/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CHR_ACTIVATE_CONDITION_PARAM_ST {
    /**
     * @brief Appearance condition _ sunny
     *
     * Will it appear when the weather is "sunny"?
     */
    bool weatherSunny : 1 { true };

    /**
     * @brief Appearance condition _ fine weather
     *
     * Will it appear when the weather is "clear"?
     */
    bool weatherClearSky : 1 { true };

    /**
     * @brief Appearance condition_light cloudy
     *
     * Will it appear when the weather is "lightly cloudy"?
     */
    bool weatherWeakCloudy : 1 { true };

    /**
     * @brief Appearance condition_cloudy
     *
     * Will it appear when the weather is "cloudy"?
     */
    bool weatherCloudy : 1 { true };

    /**
     * @brief Appearance condition_rain
     *
     * Will it appear when the weather is "rainy"?
     */
    bool weatherRain : 1 { true };

    /**
     * @brief Appearance condition_heavy rain
     *
     * Will it appear when the weather is "heavy rain"?
     */
    bool weatherHeavyRain : 1 { true };

    /**
     * @brief Appearance condition_storm
     *
     * Will it appear when the weather is "stormy"?
     */
    bool weatherStorm : 1 { true };

    /**
     * @brief Appearance condition_Arashi (for battle with the descendants of
     * the guardian)
     *
     * Will it appear when the weather is "storm (for combat with the
     * descendants of the guardian)"?
     */
    bool weatherStormForBattle : 1 { true };

    /**
     * @brief Appearance condition_Snow
     *
     * Will it appear when the weather is "snow"?
     */
    bool weatherSnow : 1 { true };

    /**
     * @brief Appearance condition _ heavy snow
     *
     * Will it appear when the weather is "heavy snow"?
     */
    bool weatherHeavySnow : 1 { true };

    /**
     * @brief Appearance condition_fog
     *
     * Will it appear when the weather is "fog"?
     */
    bool weatherFog : 1 { true };

    /**
     * @brief Appearance condition_Dense fog
     *
     * Will it appear when the weather is "dense fog"?
     */
    bool weatherHeavyFog : 1 { true };

    /**
     * @brief Appearance condition_Dense fog (rain)
     *
     * Does it appear when the weather is "dense fog (rain)"?
     */
    bool weatherHeavyFogRain : 1 { true };

    /**
     * @brief Appearance condition_sandstorm
     *
     * Will it appear when the weather is a "sandstorm"?
     */
    bool weatherSandStorm : 1 { true };

    unsigned char pad1 : 2;

    /**
     * @brief Appearance start in game time_hour
     */
    unsigned char timeStartHour{ 0 };

    /**
     * @brief Appearance start in-game time_minutes
     */
    unsigned char timeStartMin{ 0 };

    /**
     * @brief Appearance end in game time_hour
     */
    unsigned char timeEndHour{ 0 };

    /**
     * @brief End of appearance In-game time_minutes
     */
    unsigned char timeEndMin{ 0 };

    unsigned char pad2[2];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CHR_ACTIVATE_CONDITION_PARAM_ST) == 8,
    "CHR_ACTIVATE_CONDITION_PARAM_ST paramdef size does not match detected "
    "size");
