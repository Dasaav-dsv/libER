/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ENEMY_STANDARD_INFO_BANK {
    /**
     * @brief Behavior id
     *
     * Enemy behavior ID
     */
    int EnemyBehaviorID{ 0 };

    /**
     * @brief Hit points
     */
    unsigned short HP{ 1 };

    /**
     * @brief Offensive power
     *
     * Attack power (for proto only)
     */
    unsigned short AttackPower{ 1 };

    /**
     * @brief Character type
     */
    int ChrType{ 5 };

    /**
     * @brief Height per [m]
     *
     * Height per (Please specify a size larger than the diameter)
     */
    float HitHeight{ 2.f };

    /**
     * @brief Radius around [m]
     *
     * Radius around
     */
    float HitRadius{ 0.4f };

    /**
     * @brief Weight [kg]
     *
     * The weight of the character
     */
    float Weight{ 60.f };

    /**
     * @brief Dynamic friction force
     */
    float DynamicFriction{ 0.f };

    /**
     * @brief Static friction
     *
     * Static friction force
     */
    float StaticFriction{ 0.f };

    /**
     * @brief Upper body initial state
     *
     * Upper body initial state (PG input)
     */
    int UpperDefState{ 0 };

    /**
     * @brief Initial state of action
     *
     * Action initial state (PG input)
     */
    int ActionDefState{ 0 };

    /**
     * @brief Angle that can be turned per unit time [deg / s]
     *
     * Y-axis turning angle per unit time [deg / s]
     */
    float RotY_per_Second{ 10.f };

    unsigned char reserve0[20];

    /**
     * @brief unused
     */
    unsigned char RotY_per_Second_old{ 0 };

    /**
     * @brief Can you move left and right?
     */
    unsigned char EnableSideStep{ 0 };

    /**
     * @brief Whether to use a ragdoll per character
     */
    unsigned char UseRagdollHit{ 0 };

    unsigned char reserve_last[5];

    /**
     * @brief Amount of stamina
     *
     * Total amount of stamina
     */
    unsigned short stamina{ 0 };

    /**
     * @brief Stamina recovery
     *
     * Stamina recovery amount per second
     */
    unsigned short staminaRecover{ 0 };

    /**
     * @brief Stamina basic consumption
     *
     * Basic value of stamina consumption used when attacking and guarding
     */
    unsigned short staminaConsumption{ 0 };

    /**
     * @brief Physical defense
     *
     * Damage reduction base value for physical attacks
     */
    unsigned short deffenct_Phys{ 0 };

    unsigned char reserve_last2[48];
};

}; // namespace paramdef
}; // namespace from
