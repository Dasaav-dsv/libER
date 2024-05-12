/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct AUTO_CREATE_ENV_SOUND_PARAM_ST {
    /**
     * @brief Appearance distance Min [m]
     */
    float RangeMin{ 10.f };

    /**
     * @brief Appearance distance Max [m]
     *
     * Appearance distance Max [
     */
    float RangeMax{ 25.f };

    /**
     * @brief Lifespan Min [seconds]
     */
    float LifeTimeMin{ 30.f };

    /**
     * @brief Lifespan Max [seconds]
     */
    float LifeTimeMax{ 30.f };

    /**
     * @brief Delete distance [m]
     */
    float DeleteDist{ 30.f };

    /**
     * @brief Neighborhood judgment distance [m]
     */
    float NearDist{ 15.f };

    /**
     * @brief Generation angle limit Min [degree]
     *
     * Angle limit Min [degree] (Specify the Y-axis angle +-in front of the
     * camera. 180 is omnidirectional)
     */
    float LimiteRotateMin{ 0.f };

    /**
     * @brief Generation angle limit Max [degrees]
     *
     * Angle limit Max [degree] (Specify the Y-axis angle +-in front of the
     * camera. 180 is omnidirectional)
     */
    float LimiteRotateMax{ 180.f };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::AUTO_CREATE_ENV_SOUND_PARAM_ST) == 32,
    "AUTO_CREATE_ENV_SOUND_PARAM_ST paramdef size does not match detected "
    "size");
