/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct AI_STANDARD_INFO_BANK {
    /**
     * @brief Recognition distance [m]
     *
     * Distance to recognize hostile characters
     */
    unsigned short RadarRange{ 20 };

    /**
     * @brief Recognition angle X [deg]
     *
     * X angle for recognizing hostile characters: The current line-of-sight
     * direction is 0 degrees, and the top is +.
     */
    unsigned char RadarAngleX{ 30 };

    /**
     * @brief Recognition angle Y [deg]
     *
     * Y angle for recognizing hostile characters: The current line-of-sight
     * direction is 0 degrees, and the right is +.
     */
    unsigned char RadarAngleY{ 60 };

    /**
     * @brief Territory distance [m]
     *
     * The distance of your territory. If the recognizing player deviates from
     * this distance, it will return to the initial position.
     */
    unsigned short TerritorySize{ 20 };

    /**
     * @brief Intimidation rate before attack [0-100]
     *
     * Probability of threatening before attack
     */
    unsigned char ThreatBeforeAttackRate{ 50 };

    /**
     * @brief First recognition menacing
     *
     * Whether to intimidate when recognizing the first player
     */
    bool ForceThreatOnFirstLocked{ false };

    unsigned char reserve0[24];

    /**
     * @brief Attack 1 Maai [m]
     *
     * Time to attack [m]
     */
    unsigned short Attack1_Distance{ 0 };

    /**
     * @brief Attack 1 Maai play [m]
     *
     * Play between attacks. Do not vibrate near the distance
     */
    unsigned short Attack1_Margin{ 0 };

    /**
     * @brief Attack 1 ratio [0-100]
     *
     * Frequency of attacks
     */
    unsigned char Attack1_Rate{ 50 };

    /**
     * @brief Attack 1 type
     *
     * Types of attacks
     */
    unsigned char Attack1_ActionID{ 0 };

    /**
     * @brief Attack 1 Minimum delay time [frame]
     *
     * The minimum delay time from the time when an attack becomes possible to
     * the time when an attack is possible.
     */
    unsigned char Attack1_DelayMin{ 0 };

    /**
     * @brief Attack 1 Maximum delay time [frame]
     *
     * The longest delay time from the time when an attack becomes possible to
     * the time when an attack is possible.
     */
    unsigned char Attack1_DelayMax{ 0 };

    /**
     * @brief Attack 1 Attack permission Conical angle [deg]
     *
     * If the angle between the line-of-sight direction and the direction vector
     * to the target is within this angle, the attack is OK.
     */
    unsigned char Attack1_ConeAngle{ 30 };

    unsigned char reserve10[7];

    /**
     * @brief Attack 2 Maai [m]
     *
     * Time to attack [m]
     */
    unsigned short Attack2_Distance{ 0 };

    /**
     * @brief Attack 2 Maai play [m]
     *
     * Play between attacks. Do not vibrate near the distance
     */
    unsigned short Attack2_Margin{ 0 };

    /**
     * @brief Attack 1 ratio [0-100]
     *
     * Frequency of attacks
     */
    unsigned char Attack2_Rate{ 50 };

    /**
     * @brief Attack 2 type
     *
     * Types of attacks
     */
    unsigned char Attack2_ActionID{ 0 };

    /**
     * @brief Attack 2 Minimum delay time [frame]
     *
     * The minimum delay time from the time when an attack becomes possible to
     * the time when an attack is possible.
     */
    unsigned char Attack2_DelayMin{ 0 };

    /**
     * @brief Attack 2 Maximum delay time [frame]
     *
     * The longest delay time from the time when an attack becomes possible to
     * the time when an attack is possible.
     */
    unsigned char Attack2_DelayMax{ 0 };

    /**
     * @brief Attack 2 Attack permission Conical angle [deg]
     *
     * If the angle between the line-of-sight direction and the direction vector
     * to the target is within this angle, the attack is OK.
     */
    unsigned char Attack2_ConeAngle{ 30 };

    unsigned char reserve11[7];

    /**
     * @brief Attack 3 Maai [m]
     *
     * Time to attack [m]
     */
    unsigned short Attack3_Distance{ 0 };

    /**
     * @brief Attack 3 Maai play [m]
     *
     * Play between attacks. Do not vibrate near the distance
     */
    unsigned short Attack3_Margin{ 0 };

    /**
     * @brief Attack 1 ratio [0-100]
     *
     * Frequency of attacks
     */
    unsigned char Attack3_Rate{ 50 };

    /**
     * @brief Attack 3 types
     *
     * Types of attacks
     */
    unsigned char Attack3_ActionID{ 0 };

    /**
     * @brief Attack 3 Minimum delay time [frame]
     *
     * The minimum delay time from the time when an attack becomes possible to
     * the time when an attack is possible.
     */
    unsigned char Attack3_DelayMin{ 0 };

    /**
     * @brief Attack 3 Maximum delay time [frame]
     *
     * The longest delay time from the time when an attack becomes possible to
     * the time when an attack is possible.
     */
    unsigned char Attack3_DelayMax{ 0 };

    /**
     * @brief Attack 3 Attack permission Conical angle [deg]
     *
     * If the angle between the line-of-sight direction and the direction vector
     * to the target is within this angle, the attack is OK.
     */
    unsigned char Attack3_ConeAngle{ 30 };

    unsigned char reserve12[7];

    /**
     * @brief Attack 4 Maai [m]
     *
     * Time to attack [m]
     */
    unsigned short Attack4_Distance{ 0 };

    /**
     * @brief Attack 4 Maai play [m]
     *
     * Play between attacks. Do not vibrate near the distance
     */
    unsigned short Attack4_Margin{ 0 };

    /**
     * @brief Attack 1 ratio [0-100]
     *
     * Frequency of attacks
     */
    unsigned char Attack4_Rate{ 50 };

    /**
     * @brief 4 types of attacks
     *
     * Types of attacks
     */
    unsigned char Attack4_ActionID{ 0 };

    /**
     * @brief Attack 4 Minimum delay time [frame]
     *
     * The minimum delay time from the time when an attack becomes possible to
     * the time when an attack is possible.
     */
    unsigned char Attack4_DelayMin{ 0 };

    /**
     * @brief Attack 4 Maximum delay time [frame]
     *
     * The longest delay time from the time when an attack becomes possible to
     * the time when an attack is possible.
     */
    unsigned char Attack4_DelayMax{ 0 };

    /**
     * @brief Attack 4 Attack permission Conical angle [deg]
     *
     * If the angle between the line-of-sight direction and the direction vector
     * to the target is within this angle, the attack is OK.
     */
    unsigned char Attack4_ConeAngle{ 30 };

    unsigned char reserve13[7];

    unsigned char reserve_last[32];
};

}; // namespace paramdef
}; // namespace from
