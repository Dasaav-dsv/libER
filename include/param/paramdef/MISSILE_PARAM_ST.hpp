/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MISSILE_PARAM_ST {
    /**
     * @brief FFXID
     *
     * ID on the FFX editor
     */
    int FFXID{ 0 };

    /**
     * @brief Survival time [frame]
     *
     * Survival time.
     */
    unsigned short LifeTime{ 0 };

    /**
     * @brief Hit ball radius [cm]
     *
     * Hit ball radius. Unit cm
     */
    unsigned short HitSphereRadius{ 0 };

    /**
     * @brief Landing damage
     *
     * Amount of damage at the time of landing
     */
    unsigned short HitDamage{ 0 };

    unsigned char reserve0[6];

    /**
     * @brief Initial speed [m / s]
     */
    float InitVelocity{ 0.f };

    /**
     * @brief Range distance
     */
    float distance{ 0.f };

    /**
     * @brief Gravity within range
     */
    float gravityInRange{ 0.f };

    /**
     * @brief Out-of-range gravity
     */
    float gravityOutRange{ 0.f };

    /**
     * @brief MP consumption
     */
    int mp{ 0 };

    /**
     * @brief Acceleration within range
     */
    float accelInRange{ 0.f };

    /**
     * @brief Out-of-range acceleration
     */
    float accelOutRange{ 0.f };

    unsigned char reserve1[20];

    /**
     * @brief Landing ID
     */
    unsigned short HitMissileID{ 0 };

    /**
     * @brief Will you die at the end of your life?
     *
     * Will it use up its life without dying even if it lands?
     */
    bool DiedNaturaly{ false };

    /**
     * @brief Will it land when the life has expired?
     */
    bool ExplosionDie{ false };

    /**
     * @brief Action ID on hit
     *
     * Action ID given to the opponent when doing damage
     */
    int behaviorId{ 0 };

    unsigned char reserve_last[56];
};

}; // namespace paramdef
}; // namespace from
