/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct LOCK_CAM_PARAM_ST {
    /**
     * @brief Camera distance target [m]
     *
     * Camera distance target
     */
    float camDistTarget{ 4.f };

    /**
     * @brief Minimum X-axis rotation [deg]
     *
     * Minimum X-axis rotation
     */
    float rotRangeMinX{ -40.f };

    /**
     * @brief Lock X rotation shift rate (0.0-1.0)
     *
     * Lock X rotation shift rate
     */
    float lockRotXShiftRatio{ 0.6f };

    /**
     * @brief Character base point offset (character space)
     *
     * Character base point offset
     */
    float chrOrgOffset_Y{ 1.42f };

    /**
     * @brief Character range maximum radius [m]
     *
     * Maximum radius of character range
     */
    float chrLockRangeMaxRadius{ 15.f };

    /**
     * @brief Vertical angle of view [deg]
     *
     * Vertical angle of view
     */
    float camFovY{ 43.f };

    /**
     * @brief Maximum radius of character range for darkness [m]
     *
     * Lockable range of characters in dark places
     */
    float chrLockRangeMaxRadius_forD{ -1.f };

    /**
     * @brief Maximum radius of character range for pitch darkness [m]
     *
     * Character lockable range in total darkness
     */
    float chrLockRangeMaxRadius_forPD{ -1.f };

    /**
     * @brief Melee attack automatic capture Upper limit height [m]
     *
     * Automatic lock-on judgment height upper limit when non-lock-on is close
     */
    float closeMaxHeight{ 0.f };

    /**
     * @brief Melee attack automatic capture Lower limit height [m]
     *
     * Automatic lock-on judgment height lower limit when not locked on
     * Proximity
     */
    float closeMinHeight{ 0.f };

    /**
     * @brief Melee attack automatic capture Angle range Left and right [deg]
     *
     * Automatic lock-on judgment when non-lock-on Left / right angle [deg]
     * Proximity
     */
    float closeAngRange{ 0.f };

    /**
     * @brief Melee attack automatic capture Character range maximum radius [m]
     *
     * Automatic lock-on judgment distance when non-lock-on is close
     */
    float closeMaxRadius{ 0.f };

    /**
     * @brief Melee attack automatic capture Dark character range maximum radius
     * [m]
     *
     * Automatic lock-on judgment distance at non-lock-on _ darkness proximity
     */
    float closeMaxRadius_forD{ 0.f };

    /**
     * @brief Melee attack automatic capture Character range for total darkness
     * Maximum radius [m]
     *
     * Automatic lock-on when non-lock-on _ pitch black proximity
     */
    float closeMaxRadius_forPD{ 0.f };

    /**
     * @brief Bullet automatic capture Character range maximum radius [m]
     *
     * Automatic lock-on judgment distance when non-lock-on bullet
     */
    float bulletMaxRadius{ 0.f };

    /**
     * @brief Bullet automatic capture Maximum radius of character range for
     * darkness [m]
     *
     * Automatic lock-on judgment distance at non-lock-on _ darkness bullet
     */
    float bulletMaxRadius_forD{ 0.f };

    /**
     * @brief Automatic bullet capture Character range for total darkness
     * Maximum radius [m]
     *
     * Automatic lock-on judgment distance at non-lock-on _ pitch black bullet
     */
    float bulletMaxRadius_forPD{ 0.f };

    /**
     * @brief Bullet automatic capture Angle range Left and right [deg]
     *
     * Automatic lock-on left / right angle when non-lock-on bullet
     */
    float bulletAngRange{ 0.f };

    /**
     * @brief Time to continue locking even if the lock condition is not met [s]
     *
     * Time to continue locking even if the lock condition is not met (disabled
     * at 0.0)
     */
    float lockTgtKeepTime{ 2.f };

    /**
     * @brief Normal character translation tracking rate
     *
     * Normal character translation tracking rate (disabled at -1.0)
     */
    float chrTransChaseRateForNormal{ -1.f };

    unsigned char pad[48];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::LOCK_CAM_PARAM_ST) == 128,
    "LOCK_CAM_PARAM_ST paramdef size does not match detected size");
