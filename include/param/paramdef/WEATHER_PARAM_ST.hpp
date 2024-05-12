/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WEATHER_PARAM_ST {
    /**
     * @brief Weather SfxId (common)
     *
     * SfxId for weather -1: No weather Sfx Set for indoor and outdoor use.
     * Items that can be erased with Above Shadow, such as raindrops of
     * interactive particles, are OK here.
     */
    int SfxId{ -1 };

    /**
     * @brief Wind SfxId (outdoor)
     *
     * Wind SfxId -1: No wind Sfx Created only outdoors
     */
    int WindSfxId{ -1 };

    /**
     * @brief SfxId for ground hit effect
     *
     * SfxId for ground hit effect -1: None for ground hit effect
     */
    int GroundHitSfxId{ -1 };

    /**
     * @brief SoundId for weather (common)
     *
     * SoundId for weather -1: No Sound
     */
    int SoundId{ -1 };

    /**
     * @brief Wet time (seconds)
     *
     * Time to get completely wet (time until the weight of
     * m00_00_0000_WeatherBase reaches 1.0) -1: No wetness
     * (m00_00_0000_WeatherBase remains 0.0)
     */
    float WetTime{ -1.f };

    /**
     * @brief GparamId for weather
     *
     * Specify the XXX part of Gparam (m00_00_? XXX_WeatherOutdoor.gparamxml)
     * for outdoor weather. Gparam to be used can be shared between weather.
     */
    unsigned int GparamId{ 0 };

    /**
     * @brief Minimum time until the next weather lottery (in-game seconds)
     *
     * Specify the minimum time to the next weather lottery in in-game seconds.
     * When transitioning to this weather, the time to the next weather will be
     * a random time between the minimum and maximum.
     */
    unsigned int NextLotIngameSecondsMin{ 3600 };

    /**
     * @brief Maximum time until the next weather lottery (in-game seconds)
     *
     * Specify the maximum time until the next weather lottery in in-game
     * seconds. When transitioning to this weather, the time to the next weather
     * will be a random time between the minimum and maximum.
     */
    unsigned int NextLotIngameSecondsMax{ 7200 };

    /**
     * @brief Wet special effect ID_00
     *
     * Special effect ID on the character (-1: None)
     */
    int WetSpEffectId00{ -1 };

    /**
     * @brief Wet special effect ID_01
     *
     * Special effect ID on the character (-1: None)
     */
    int WetSpEffectId01{ -1 };

    /**
     * @brief Wet special effect ID_02
     *
     * Special effect ID on the character (-1: None)
     */
    int WetSpEffectId02{ -1 };

    /**
     * @brief Wet special effect ID_03
     *
     * Special effect ID on the character (-1: None)
     */
    int WetSpEffectId03{ -1 };

    /**
     * @brief Wet special effect ID_04
     *
     * Special effect ID on the character (-1: None)
     */
    int WetSpEffectId04{ -1 };

    /**
     * @brief Weather SfxId (indoor)
     *
     * Weather SfxId -1: No weather Sfx indoors only
     */
    int SfxIdInoor{ -1 };

    /**
     * @brief Weather SfxId (outdoor)
     *
     * Weather SfxId -1: No weather Sfx, outdoor only
     */
    int SfxIdOutdoor{ -1 };

    /**
     * @brief AI field of view magnification
     */
    float aiSightRate{ 1.f };

    /**
     * @brief Overwrite weight value in the distance camera
     *
     * Overwrite weight value in distant view camera (SEQ16724)
     */
    float DistViewWeatherGparamOverrideWeight{ -1.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WEATHER_PARAM_ST) == 68,
    "WEATHER_PARAM_ST paramdef size does not match detected size");
