/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct AI_ATTACK_PARAM_ST {
    /**
     * @brief Reference ID
     *
     * ID specified by NPC thinking parameters
     */
    int attackTableId{ 0 };

    /**
     * @brief Attack ID
     *
     * Attack number
     */
    int attackId{ 0 };

    /**
     * @brief Success judgment distance
     *
     * For arguments of Common_Attack type subgoals
     */
    float successDistance{ 0.f };

    /**
     * @brief Turn time before attack
     *
     * For arguments of Common_Attack type subgoals
     */
    float turnTimeBeforeAttack{ 0.f };

    /**
     * @brief Front judgment angle
     *
     * For arguments of Common_Attack type subgoals
     */
    short frontAngleRange{ 0 };

    /**
     * @brief Upward execution threshold
     *
     * For arguments of Common_Attack type subgoals
     */
    short upAngleThreshold{ 0 };

    /**
     * @brief Downward execution threshold
     *
     * For arguments of Common_Attack type subgoals
     */
    short downAngleThershold{ 0 };

    /**
     * @brief Is it a starting technique?
     *
     * Attacks from the second stage of the combo are ×
     */
    bool isFirstAttack{ false };

    /**
     * @brief Whether to select outside the proper distance
     *
     * Whether to select when the distance is out of the proper distance
     */
    bool doesSelectOnOutRange{ false };

    /**
     * @brief Minimum proper distance
     *
     * Minimum value of proper attack distance
     */
    float minOptimalDistance{ 0.f };

    /**
     * @brief Maximum proper distance
     *
     * Maximum attack suitability distance
     */
    float maxOptimalDistance{ 0.f };

    /**
     * @brief Appropriate angle reference direction 1
     *
     * Direction that serves as a reference for the proper angle of attack (XZ
     * plane)
     */
    short baseDirectionForOptimalAngle1{ 0 };

    /**
     * @brief Appropriate angle reference range 1
     *
     * Range of aptitude angles for attacks
     */
    short optimalAttackAngleRange1{ 0 };

    /**
     * @brief Appropriate angle reference direction 2
     *
     * Direction that serves as a reference for attack aptitude accuracy (XZ
     * plane)
     */
    short baseDirectionForOptimalAngle2{ 0 };

    /**
     * @brief Appropriate angle reference range 2
     *
     * Range of aptitude angles for attacks
     */
    short optimalAttackAngleRange2{ 0 };

    /**
     * @brief Executable interval
     *
     * Time required to attack once and then use it again
     */
    float intervalForExec{ 1.f };

    /**
     * @brief Selection rate
     *
     * Specify the ease of selection by magnification
     */
    float selectionTendency{ -1.f };

    /**
     * @brief Short range selection rate
     *
     * Selection rate at close range
     */
    float shortRangeTendency{ -1.f };

    /**
     * @brief Medium range selection rate
     *
     * Selection rate at medium range
     */
    float middleRangeTendency{ -1.f };

    /**
     * @brief Distance selection rate
     *
     * Selection rate at long distances
     */
    float farRangeTendency{ -1.f };

    /**
     * @brief Out of range rate
     *
     * Selection rate out of range
     */
    float outRangeTendency{ -1.f };

    /**
     * @brief Derived attack 1
     *
     * Derivable attack number
     */
    int deriveAttackId1{ -1 };

    /**
     * @brief Derived attack 2
     *
     * Derivable attack number
     */
    int deriveAttackId2{ -1 };

    /**
     * @brief Derived attack 3
     *
     * Derivable attack number
     */
    int deriveAttackId3{ -1 };

    /**
     * @brief Derived attack 4
     *
     * Derivable attack number
     */
    int deriveAttackId4{ -1 };

    /**
     * @brief Derived attack 5
     *
     * Derivable attack number
     */
    int deriveAttackId5{ -1 };

    /**
     * @brief Derived attack 6
     *
     * Derivable attack number
     */
    int deriveAttackId6{ -1 };

    /**
     * @brief Derived attack 7
     *
     * Derivable attack number
     */
    int deriveAttackId7{ -1 };

    /**
     * @brief Derived attack 8
     *
     * Derivable attack number
     */
    int deriveAttackId8{ -1 };

    /**
     * @brief Derived attack 9
     *
     * Derivable attack number
     */
    int deriveAttackId9{ -1 };

    /**
     * @brief Derived attack 10
     *
     * Derivable attack number
     */
    int deriveAttackId10{ -1 };

    /**
     * @brief Derived attack 11
     *
     * Derivable attack number
     */
    int deriveAttackId11{ -1 };

    /**
     * @brief Derived attack 12
     *
     * Derivable attack number
     */
    int deriveAttackId12{ -1 };

    /**
     * @brief Derived attack 13
     *
     * Derivable attack number
     */
    int deriveAttackId13{ -1 };

    /**
     * @brief Derived attack 14
     *
     * Derivable attack number
     */
    int deriveAttackId14{ -1 };

    /**
     * @brief Derived attack 15
     *
     * Derivable attack number
     */
    int deriveAttackId15{ -1 };

    /**
     * @brief Derived attack 16
     *
     * Derivable attack number
     */
    int deriveAttackId16{ -1 };

    /**
     * @brief Minimum life of the goal
     */
    float goalLifeMin{ 0.f };

    /**
     * @brief Maximum life span of the goal
     */
    float goalLifeMax{ 0.f };

    /**
     * @brief Whether to select within the appropriate distance
     *
     * Whether to select when within the appropriate distance
     */
    bool doesSelectOnInnerRange{ false };

    /**
     * @brief Whether to use it as the first hit
     */
    bool enableAttackOnBattleStart{ true };

    /**
     * @brief Whether to select when the target is down
     */
    bool doesSelectOnTargetDown{ true };

    unsigned char pad1[1];

    /**
     * @brief Minimum reach judgment distance
     */
    float minArriveDistance{ 0.f };

    /**
     * @brief Maximum reach judgment distance
     */
    float maxArriveDistance{ 0.f };

    /**
     * @brief Continuous attack execution distance
     *
     * Distance used to determine the execution of attacks from the second stage
     * onward
     */
    float comboExecDistance{ 4.f };

    /**
     * @brief Continuous attack execution angle
     *
     * Distance used to determine the execution of attacks from the second stage
     * onward
     */
    float comboExecRange{ 180.f };
};

}; // namespace paramdef
}; // namespace from
