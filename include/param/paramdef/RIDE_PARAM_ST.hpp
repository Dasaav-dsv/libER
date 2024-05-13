/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct RIDE_PARAM_ST {
    /**
     * @brief Riding side character ID
     *
     * It is a parameter that identifies the character of the "riding side" when
     * riding.
     */
    unsigned int atkChrId{ 0 };

    /**
     * @brief Riding side character ID
     *
     * It is a parameter that identifies the character of the "riding side" when
     * riding.
     */
    unsigned int defChrId{ 0 };

    /**
     * @brief Camera ID when riding
     *
     * It is a parameter to change the camera parameter at the time of riding to
     * a dedicated camera. It is a parameter for PC only, and it does not work
     * even if it is set to the enemy.
     */
    int rideCamParamId{ -1 };

    /**
     * @brief Riding side_Riding animation type and direction variable value
     *
     * It is a parameter to rewrite the value of variable "RideOnAnimId" set in
     * "RideOn (playback during riding) state" of the tool "HavokAnimationTool
     * (HAT)" that controls character animation playback.
     */
    unsigned int atkChrAnimId{ 0 };

    /**
     * @brief Riding side_Riding animation type and direction variable value
     *
     * It is a parameter to rewrite the value of variable "RiddenOnAnimId" set
     * in "RiddenOn (playback when riding) state" of the tool
     * "HavokAnimationTool (HAT)" that controls character animation playback.
     */
    unsigned int defChrAnimId{ 0 };

    /**
     * @brief Alignment of the rider at the start of riding animation Damipoli
     * ID
     *
     * This is a Damipoli setting that is required only for the rider (the
     * rider's character does not need to be set).
     */
    int defAdjustDmyId{ -1 };

    /**
     * @brief Riding judgment _ Judgment criteria of the rider Damipoli ID
     *
     * There is no need to set Damipoli for the character on the riding side.
     */
    int defCheckDmyId{ -1 };

    /**
     * @brief Riding judgment_Front judgment angle range on the riding side
     * [deg]
     *
     * Judgment is made by the angle difference between the [direction] on the
     * riding side and the "front judgment Damipoly ID" on the riding side. The
     * higher the value, the more you can ride even if you are facing away.
     */
    float diffAngMyToDef{ 0.f };

    /**
     * @brief Riding judgment_effective distance [m]
     *
     * It is a parameter that determines the "mountable distance to the target"
     */
    float dist{ 0.f };

    /**
     * @brief Riding judgment_effective height upward [m]
     *
     * Is it possible to ride even if the target to be ridden is above the
     * target to be ridden? Is set in meters
     */
    float upperYRange{ 0.f };

    /**
     * @brief Riding judgment_effective height downward [m]
     *
     * Is it possible to ride even if the target to be ridden is below the
     * target to be ridden? Is set in meters
     */
    float lowerYRange{ 0.f };

    /**
     * @brief Riding judgment_angle difference range between objects min [deg]
     *
     * In what range (angle) of the rider can ride? Set the minimum value of
     */
    float diffAngMin{ 0.f };

    /**
     * @brief Riding judgment_angle difference range between objects max [deg]
     *
     * In what range (angle) of the rider can ride? Set the maximum value of
     */
    float diffAngMax{ 0.f };

    unsigned char pad[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::RIDE_PARAM_ST) == 64,
    "RIDE_PARAM_ST paramdef size does not match detected size");
