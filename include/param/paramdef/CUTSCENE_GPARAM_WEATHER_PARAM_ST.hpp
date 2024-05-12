/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct CUTSCENE_GPARAM_WEATHER_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Is it a debug parameter?
     *
     * Parameters marked with a circle are excluded from all packages (because
     * they are for debugging).
     */
    bool disableParam_Debug : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 6;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Sunny
     */
    short DstWeather_Sunny{ 0 };

    /**
     * @brief Sunny
     */
    short DstWeather_ClearSky{ 0 };

    /**
     * @brief Light cloudy
     */
    short DstWeather_WeakCloudy{ 0 };

    /**
     * @brief cloudy
     */
    short DstWeather_Cloud{ 0 };

    /**
     * @brief rain
     */
    short DstWeather_Rain{ 0 };

    /**
     * @brief Heavy rain
     */
    short DstWeather_HeavyRain{ 0 };

    /**
     * @brief storm
     */
    short DstWeather_Storm{ 0 };

    /**
     * @brief Storm (for combat with the descendants of the guardian)
     */
    short DstWeather_StormForBattle{ 0 };

    /**
     * @brief snow
     */
    short DstWeather_Snow{ 0 };

    /**
     * @brief heavy snow
     */
    short DstWeather_HeavySnow{ 0 };

    /**
     * @brief fog
     */
    short DstWeather_Fog{ 0 };

    /**
     * @brief Thick fog
     */
    short DstWeather_HeavyFog{ 0 };

    /**
     * @brief Sandstorm
     */
    short DstWeather_SandStorm{ 0 };

    /**
     * @brief Thick fog (rain)
     */
    short DstWeather_HeavyFogRain{ 0 };

    /**
     * @brief In-game weather specifications at the end of playback (unused,
     * invalid)
     *
     * In-game weather specifications at the end of playback (nothing is done if
     * blank or "invalid")
     */
    short PostPlayIngameWeather{ -1 };

    /**
     * @brief Indoor / outdoor designation
     *
     * When indoors, the SFX specified by "Weather SfxId (Outdoor)" and "Wind
     * SfxId (Outdoor)" in "Weather Parameter.xlsm" will be invalid in the
     * cutscene.
     */
    unsigned char IndoorOutdoorType{ 0 };

    /**
     * @brief In-game weather SFX to take over? _Sunny
     */
    bool TakeOverDstWeather_Sunny{ true };

    /**
     * @brief In-game weather SFX to take over? _ Sunny
     */
    bool TakeOverDstWeather_ClearSky{ true };

    /**
     * @brief Will the in-game weather SFX be taken over? _ Light cloudy
     */
    bool TakeOverDstWeather_WeakCloudy{ true };

    /**
     * @brief In-game weather SFX to take over? _cloudy
     *
     * Will the in-game weather SFX be taken over? _cloudy
     */
    bool TakeOverDstWeather_Cloud{ true };

    /**
     * @brief In-game weather SFX to take over? _rain
     */
    bool TakeOverDstWeather_Rain{ true };

    /**
     * @brief Will the in-game weather SFX be taken over? _ Heavy rain
     *
     * In-game weather SFX to take over? _ Heavy rain
     */
    bool TakeOverDstWeather_HeavyRain{ true };

    /**
     * @brief Will the in-game weather SFX be taken over? _storm
     *
     * In-game weather SFX to take over? _storm
     */
    bool TakeOverDstWeather_Storm{ true };

    /**
     * @brief In-game weather SFX to take over? _ Storm (for battle with the
     * descendants of the guardian)
     */
    bool TakeOverDstWeather_StormForBattle{ true };

    /**
     * @brief In-game weather SFX to take over? _snow
     */
    bool TakeOverDstWeather_Snow{ true };

    /**
     * @brief In-game weather SFX to take over? _heavy snow
     */
    bool TakeOverDstWeather_HeavySnow{ true };

    /**
     * @brief In-game weather SFX to take over? _fog
     *
     * Will the in-game weather SFX be taken over? _fog
     */
    bool TakeOverDstWeather_Fog{ true };

    /**
     * @brief In-game weather SFX to take over? _ Thick fog
     *
     * Will the in-game weather SFX be taken over? _ Thick fog
     */
    bool TakeOverDstWeather_HeavyFog{ true };

    /**
     * @brief Will the in-game weather SFX be taken over? _ Sandstorm
     *
     * In-game weather SFX to take over? _ Sandstorm
     */
    bool TakeOverDstWeather_SandStorm{ true };

    /**
     * @brief In-game weather SFX to take over? _ Thick fog (rain)
     */
    bool TakeOverDstWeather_HeavyFogRain{ true };

    unsigned char reserved[7];

    /**
     * @brief Snowstorm
     */
    short DstWeather_Snowstorm{ 0 };

    /**
     * @brief Storm (thunder)
     *
     * Preliminary weather 2
     */
    short DstWeather_LightningStorm{ 0 };

    /**
     * @brief Snow special (spare 3)
     *
     * Preliminary weather 3
     */
    short DstWeather_Reserved3{ 0 };

    /**
     * @brief Preliminary weather 4
     */
    short DstWeather_Reserved4{ 0 };

    /**
     * @brief Preliminary weather 5
     */
    short DstWeather_Reserved5{ 0 };

    /**
     * @brief Preliminary weather 6
     */
    short DstWeather_Reserved6{ 0 };

    /**
     * @brief Preliminary weather 7
     */
    short DstWeather_Reserved7{ 0 };

    /**
     * @brief Preliminary weather 8
     */
    short DstWeather_Reserved8{ 0 };

    /**
     * @brief In-game weather SFX to take over? _ Snowstorm
     */
    bool TakeOverDstWeather_Snowstorm{ true };

    /**
     * @brief Will the in-game weather SFX be taken over? _ Storm (thunder)
     *
     * In-game weather SFX to take over? _ Storm (thunder)
     */
    bool TakeOverDstWeather_LightningStorm{ true };

    /**
     * @brief In-game weather SFX to take over? _ Snow Special (Spare 3)
     *
     * Will the in-game weather SFX be taken over? _ Preliminary weather 3
     */
    bool TakeOverDstWeather_Reserved3{ true };

    /**
     * @brief Will the in-game weather SFX be taken over? _ Preliminary weather
     * 4
     *
     * In-game weather SFX to take over? _ Preliminary weather 4
     */
    bool TakeOverDstWeather_Reserved4{ true };

    /**
     * @brief In-game weather SFX to take over? _ Preliminary weather 5
     *
     * Will the in-game weather SFX be taken over? _ Preliminary weather 5
     */
    bool TakeOverDstWeather_Reserved5{ true };

    /**
     * @brief In-game weather SFX to take over? _ Preliminary weather 6
     *
     * Will the in-game weather SFX be taken over? _ Preliminary weather 6
     */
    bool TakeOverDstWeather_Reserved6{ true };

    /**
     * @brief In-game weather SFX to take over? _ Preliminary weather 7
     *
     * Will the in-game weather SFX be taken over? _ Preliminary weather 7
     */
    bool TakeOverDstWeather_Reserved7{ true };

    /**
     * @brief Will the in-game weather SFX be taken over? _ Preliminary weather
     * 8
     *
     * In-game weather SFX to take over? _ Preliminary weather 8
     */
    bool TakeOverDstWeather_Reserved8{ true };

    /**
     * @brief Do you want to apply the MapGD local ID to the weather Gparam?
     *
     * Do you want to apply the mapGD local ID changes to the cutscene weather
     * Gparam as in the in-game? ([GR] SEQ30194)
     */
    bool IsEnableApplyMapGdRegionIdForGparam{ false };

    unsigned char reserved2[1];

    /**
     * @brief Local ID overwrite for weather Gparam MapGD
     *
     * Overwrite the ID used for cutscene weather Gparam (-1: No overwrite.
     * MapGD local ID during cutscene playback is used). If "Do you want to
     * apply MapGD local ID to weather Gparam?" Is x, it is not referenced.
     */
    short OverrideMapGdRegionId{ -1 };

    unsigned char reserved1[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_GPARAM_WEATHER_PARAM_ST) == 96,
    "CUTSCENE_GPARAM_WEATHER_PARAM_ST paramdef size does not match detected "
    "size");
