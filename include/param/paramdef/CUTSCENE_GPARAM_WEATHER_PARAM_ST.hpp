/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CUTSCENE_GPARAM_WEATHER_PARAM_ST {
    bool disableParam_NT : 1 { false };
    bool disableParam_Debug : 1 { false };
    unsigned char disableParamReserve1 : 6;
    unsigned char disableParamReserve2[3];
    short DstWeather_Sunny{ 0 };
    short DstWeather_ClearSky{ 0 };
    short DstWeather_WeakCloudy{ 0 };
    short DstWeather_Cloud{ 0 };
    short DstWeather_Rain{ 0 };
    short DstWeather_HeavyRain{ 0 };
    short DstWeather_Storm{ 0 };
    short DstWeather_StormForBattle{ 0 };
    short DstWeather_Snow{ 0 };
    short DstWeather_HeavySnow{ 0 };
    short DstWeather_Fog{ 0 };
    short DstWeather_HeavyFog{ 0 };
    short DstWeather_SandStorm{ 0 };
    short DstWeather_HeavyFogRain{ 0 };
    short PostPlayIngameWeather{ -1 };
    unsigned char IndoorOutdoorType{ 0 };
    bool TakeOverDstWeather_Sunny{ true };
    bool TakeOverDstWeather_ClearSky{ true };
    bool TakeOverDstWeather_WeakCloudy{ true };
    bool TakeOverDstWeather_Cloud{ true };
    bool TakeOverDstWeather_Rain{ true };
    bool TakeOverDstWeather_HeavyRain{ true };
    bool TakeOverDstWeather_Storm{ true };
    bool TakeOverDstWeather_StormForBattle{ true };
    bool TakeOverDstWeather_Snow{ true };
    bool TakeOverDstWeather_HeavySnow{ true };
    bool TakeOverDstWeather_Fog{ true };
    bool TakeOverDstWeather_HeavyFog{ true };
    bool TakeOverDstWeather_SandStorm{ true };
    bool TakeOverDstWeather_HeavyFogRain{ true };
    unsigned char reserved[7];
    short DstWeather_Snowstorm{ 0 };
    short DstWeather_LightningStorm{ 0 };
    short DstWeather_Reserved3{ 0 };
    short DstWeather_Reserved4{ 0 };
    short DstWeather_Reserved5{ 0 };
    short DstWeather_Reserved6{ 0 };
    short DstWeather_Reserved7{ 0 };
    short DstWeather_Reserved8{ 0 };
    bool TakeOverDstWeather_Snowstorm{ true };
    bool TakeOverDstWeather_LightningStorm{ true };
    bool TakeOverDstWeather_Reserved3{ true };
    bool TakeOverDstWeather_Reserved4{ true };
    bool TakeOverDstWeather_Reserved5{ true };
    bool TakeOverDstWeather_Reserved6{ true };
    bool TakeOverDstWeather_Reserved7{ true };
    bool TakeOverDstWeather_Reserved8{ true };
    bool IsEnableApplyMapGdRegionIdForGparam{ false };
    unsigned char reserved2[1];
    short OverrideMapGdRegionId{ -1 };
    unsigned char reserved1[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CUTSCENE_GPARAM_WEATHER_PARAM_ST) == 96,
    "CUTSCENE_GPARAM_WEATHER_PARAM_ST paramdef size does not match detected "
    "size");
