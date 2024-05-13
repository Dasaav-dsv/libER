/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct THROW_PARAM_ST {
    /**
     * @brief Throwing side character ID
     */
    int AtkChrId{ 0 };

    /**
     * @brief Recipient character ID
     */
    int DefChrId{ 0 };

    /**
     * @brief Effective distance [m]
     *
     * Do not throw unless the distance is closer than this value [m]
     */
    float Dist{ 0.f };

    /**
     * @brief Angle difference range between your own direction and the
     * direction of the other party min
     *
     * If the angle difference (Y-axis) between the throwing side and the
     * receiving side is not larger than this angle, it will not be thrown.
     */
    float DiffAngMin{ 0.f };

    /**
     * @brief Angle difference range between your own direction and the
     * direction of the other party max
     *
     * If the angle difference (Y-axis) between the throwing side and the
     * receiving side is smaller than this angle, it will not be thrown.
     */
    float DiffAngMax{ 0.f };

    /**
     * @brief On the height range [m]
     *
     * Do not throw unless the relative distance of the Y axis from the throwing
     * side to the receiving side is smaller than this value
     */
    float upperYRange{ 0.2f };

    /**
     * @brief Below the height range [m]
     *
     * Do not throw unless the relative distance of the Y axis from the throwing
     * side to the receiving side is smaller than this value
     */
    float lowerYRange{ 0.2f };

    /**
     * @brief Angle difference between your own direction and the direction from
     * yourself to the other party
     *
     * The angle difference between the vector in front of you and the vector in
     * the direction from you to the other party. If it is larger than this
     * value, it will not be thrown
     */
    float diffAngMyToDef{ 60.f };

    /**
     * @brief Throw type ID
     *
     * ID that identifies the type of throw (association with attack parameter)
     */
    int throwTypeId{ 0 };

    /**
     * @brief Throwing side anime ID
     *
     * Set attack animation ID (linked to EzState)
     */
    int atkAnimId{ 0 };

    /**
     * @brief Recipient anime ID
     *
     * Set damage animation ID (linked to EzState)
     */
    int defAnimId{ 0 };

    /**
     * @brief Throw through HP
     *
     * Value that can withstand throwing through
     */
    unsigned short escHp{ 0 };

    /**
     * @brief Self-throwing cycle time [ms]
     *
     * Cycle time for self-throwing [ms]
     */
    unsigned short selfEscCycleTime{ 0 };

    /**
     * @brief Sphere Cast Radius Ratio_Top [1/100 Rate]
     *
     * Ratio of upper radius of sphere cast [80-> 0.8]
     */
    unsigned short sphereCastRadiusRateTop{ 80 };

    /**
     * @brief Sphere Cast Radius Ratio_Bottom [1/100 Rate]
     *
     * Spherecast lower radius ratio [80-> 0.8]
     */
    unsigned short sphereCastRadiusRateLow{ 80 };

    /**
     * @brief Operation type
     */
    unsigned char PadType{ 1 };

    /**
     * @brief Throwable state type on the throwing side
     *
     * Please set the state type that can be thrown on the throwing side
     */
    unsigned char AtkEnableState{ 0 };

    /**
     * @brief Throw-following method
     *
     * How to follow the character possessed by Adsorbed Damipoli while
     * throwing. * Follow-up period is controlled by TAE action
     */
    unsigned char throwFollowingType{ 0 };

    unsigned char pad2[1];

    /**
     * @brief Throw type
     *
     * Type of throw
     */
    unsigned char throwType{ 0 };

    /**
     * @brief Number of self-throwing cycles
     */
    unsigned char selfEscCycleCnt{ 0 };

    /**
     * @brief Direction of Damipoli possession character when throwing occurs
     */
    unsigned char dmyHasChrDirType{ 0 };

    /**
     * @brief Does the throwing side turn?
     */
    bool isTurnAtker : 1 { false };

    /**
     * @brief Do you want to skip the weapon category check?
     *
     * Do you want to skip the attacker's weapon category check?
     */
    bool isSkipWepCate : 1 { false };

    /**
     * @brief Do you want to skip the sphere cast?
     */
    bool isSkipSphereCast : 1 { false };

    /**
     * @brief Whether to return to the positional relationship equivalent to
     * flat ground at the time of throwing adsorption
     *
     * If it is set to ◯, the location of the throwing position will be the
     * "position of the adsorption Damipoli that has returned to the positional
     * relationship equivalent to the flat ground".
     */
    bool isEnableCorrectPos_forThrowAdjust : 1 { true };

    /**
     * @brief Do you prevent the fall when the throwing follow is released?
     *
     * Is the same treatment as the wall removal prevention applied to the fall
     * prevention wall so that it does not fall from the step when the follow-up
     * is released?
     */
    bool isEnableThrowFollowingFallAssist : 1 { true };

    /**
     * @brief Do you want to prevent the wall from digging in while following
     * the throw?
     *
     * Do you want to return the character with the Adsorbed Damipoli when it
     * comes in contact with a hit or fall prevention wall so that it does not
     * look like it will get stuck in the middle wall or fall from a step?
     */
    bool isEnableThrowFollowingFeedback : 1 { true };

    unsigned char pad0 : 2;

    /**
     * @brief Throw side adsorption Damipoly ID
     *
     * Where on the throwing side should the receiving side be attracted?
     */
    short atkSorbDmyId{ 0 };

    /**
     * @brief Recipient side adsorption Damipoly ID
     *
     * Where on the receiving side should the throwing side be adsorbed?
     */
    short defSorbDmyId{ 0 };

    /**
     * @brief Effective distance (start throwing) [m]
     *
     * Only throw at a distance closer than this value [m] Used for throwing at
     * the start of the back stub
     */
    float Dist_start{ 0.f };

    /**
     * @brief Angle difference range between your own direction and the other's
     * direction min (start throwing)
     *
     * If the angle difference (Y-axis) between the throwing side and the
     * receiving side is not larger than this angle, it will not be thrown. It
     * is used for throwing at the start of the back stub.
     */
    float DiffAngMin_start{ 0.f };

    /**
     * @brief Angle difference range between your own direction and the
     * opponent's direction max (start throwing)
     *
     * The angle difference (Y-axis) between the throwing side and the receiving
     * side must be smaller than this angle to throw. Used for throwing at the
     * start of the back stub.
     */
    float DiffAngMax_start{ 0.f };

    /**
     * @brief On the height range (start throwing) [m]
     *
     * It will not be thrown unless the relative distance of the Y axis from the
     * throwing side to the receiving side is smaller than this value. It is
     * used for throwing at the start of the back stub.
     */
    float upperYRange_start{ 0.f };

    /**
     * @brief Below the height range (start throwing) [m]
     *
     * It will not be thrown unless the relative distance of the Y axis from the
     * throwing side to the receiving side is smaller than this value. It is
     * used for throwing at the start of the back stub.
     */
    float lowerYRange_start{ 0.f };

    /**
     * @brief Angle difference between your own direction and the direction from
     * yourself to the opponent (start throwing)
     *
     * The angle difference between the vector in front of you and the vector in
     * the direction from you to the other party. If it is larger than this
     * value, it will not be thrown. It will be used for throwing at the start
     * of the back stub.
     */
    float diffAngMyToDef_start{ 0.f };

    /**
     * @brief Throwing range judgment criteria on the throwing side Damipoli Id
     *
     * Damipoli that the thrower considers to be his position when calculating
     * the throw range. If -1, the capsule origin
     */
    int judgeRangeBasePosDmyId1{ -1 };

    /**
     * @brief Criteria for throwing range on the thrown side Damipoli Id
     *
     * Damipoli that the thrower considers to be his position when calculating
     * the throw range. If -1, the capsule origin
     */
    int judgeRangeBasePosDmyId2{ -1 };

    /**
     * @brief Model position interpolation time during adsorption [s]
     *
     * After the capsule is adsorbed on Damipoli, the time it takes for the
     * character model to interpolate and move to the position according to the
     * throwing animation data (when 0 is set, the model position is not
     * interpolated and playback starts immediately after adsorption with the
     * positional relationship according to the animation data. Will be)
     */
    float adsrobModelPosInterpolationTime{ 0.5f };

    /**
     * @brief Model position interpolation time at the end of tracking [s]
     *
     * Model position interpolation time at the end of tracking
     */
    float throwFollowingEndEasingTime{ 0.5f };

    unsigned char pad1[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::THROW_PARAM_ST) == 128,
    "THROW_PARAM_ST paramdef size does not match detected size");
