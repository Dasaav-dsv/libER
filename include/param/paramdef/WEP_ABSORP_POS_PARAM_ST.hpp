/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct WEP_ABSORP_POS_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Storage location type
     *
     * The animation at the time of sword delivery changes depending on this
     * value
     */
    unsigned char hangPosType{ 0 };

    /**
     * @brief Do you want to combine skeletons?
     */
    bool isSkeletonBind{ false };

    unsigned char pad0[2];

    /**
     * @brief Model 0_ Right hand adsorption Damipoly
     *
     * Model 0 adsorption Damipoli when holding the weapon in one hand.
     */
    short right_0{ 0 };

    /**
     * @brief Model 0_ Left hand adsorption Damipoly
     *
     * Model 0 adsorption Damipoli when holding the weapon in one hand.
     */
    short left_0{ 0 };

    /**
     * @brief Model 0_ Right hand Adsorption Damipoly with both hands
     *
     * Model 0 adsorption Damipoli when holding a right-handed weapon with both
     * hands.
     */
    short both_0{ 0 };

    /**
     * @brief Model 0_ Left hand sword adsorption Damipoly
     *
     * Model 0 adsorption Damipoli when holding a weapon in the left hand and
     * delivering the weapon.
     */
    short leftHang_0{ 0 };

    /**
     * @brief Model 0_Suction Damipoli at the time of right hand sword delivery
     *
     * Model 0 adsorption Damipoli when holding a weapon in the right hand and
     * delivering the weapon.
     */
    short rightHang_0{ 0 };

    /**
     * @brief Model 1_Right-handed adsorption Damipoly
     *
     * Model 1 adsorption Damipoli when holding the weapon in one hand.
     */
    short right_1{ 0 };

    /**
     * @brief Model 1_ Left hand adsorption Damipoly
     *
     * Model 1 adsorption Damipoli when holding the weapon in one hand.
     */
    short left_1{ 0 };

    /**
     * @brief Model 1_Right-handed two-handed adsorption Damipoly
     *
     * Model 1 adsorption Damipoli when holding a right-handed weapon with both
     * hands.
     */
    short both_1{ 0 };

    /**
     * @brief Model 1_ Left hand sword adsorption Damipoli
     *
     * Model 1 adsorption Damipoli when holding a weapon in the left hand and
     * delivering the weapon.
     */
    short leftHang_1{ 0 };

    /**
     * @brief Model 1_Suction Damipoli at the time of right hand sword delivery
     *
     * Model 1 adsorption Damipoli when holding a weapon in the right hand and
     * delivering the weapon.
     */
    short rightHang_1{ 0 };

    /**
     * @brief Model 2_Right-handed adsorption Damipoly
     *
     * Model 2 adsorption Damipoli when holding the weapon in one hand.
     */
    short right_2{ 0 };

    /**
     * @brief Model 2_ Left hand adsorption Damipoly
     *
     * Model 2 adsorption Damipoli when holding the weapon in one hand.
     */
    short left_2{ 0 };

    /**
     * @brief Model 2_Right-handed two-handed adsorption Damipoly
     *
     * Model 2 adsorption Damipoli when holding a right-handed weapon with both
     * hands.
     */
    short both_2{ 0 };

    /**
     * @brief Model 2_ Left hand sword adsorption Damipoli
     *
     * Model 2 adsorption Damipoli when holding a weapon in the left hand and
     * delivering the weapon.
     */
    short leftHang_2{ 0 };

    /**
     * @brief Model 2_Suction Damipoli at the time of right hand sword delivery
     *
     * Model 2 adsorption Damipoli when holding a weapon in the right hand and
     * delivering the weapon.
     */
    short rightHang_2{ 0 };

    /**
     * @brief Model 3_Right-handed adsorption Damipoly
     *
     * Model 3 adsorption Damipoli when holding the weapon in one hand.
     */
    short right_3{ 0 };

    /**
     * @brief Model 3_ Left hand adsorption Damipoly
     *
     * Model 3 adsorption Damipoli when holding the weapon in one hand.
     */
    short left_3{ 0 };

    /**
     * @brief Model 3_Right-handed two-handed adsorption Damipoly
     *
     * Model 3 adsorption Damipoli when holding a right-handed weapon with both
     * hands.
     */
    short both_3{ 0 };

    /**
     * @brief Model 3_ Left hand sword adsorption Damipoli
     *
     * Model 3 Adsorption Damipoli when holding a weapon in the left hand and
     * delivering the weapon.
     */
    short leftHang_3{ 0 };

    /**
     * @brief Model 3_Suction Damipoli at the time of right hand sword delivery
     *
     * Model 3 Adsorption Damipoli when holding a weapon in his right hand and
     * delivering the weapon.
     */
    short rightHang_3{ 0 };

    /**
     * @brief Model 0_Weapon hidden type
     *
     * Hidden type of model 0. When hiding a weapon with TAE, erase the one that
     * matches this
     */
    unsigned char wepInvisibleType_0{ 0 };

    /**
     * @brief Model 1_Weapon hidden type
     *
     * Hidden type of model 1. When hiding a weapon with TAE, erase the one that
     * matches this
     */
    unsigned char wepInvisibleType_1{ 0 };

    /**
     * @brief Model 2_Weapon hidden type
     *
     * Hidden type of model 2. When hiding a weapon with TAE, erase the one that
     * matches this
     */
    unsigned char wepInvisibleType_2{ 0 };

    /**
     * @brief Model 3_Weapon hidden type
     *
     * Model 3 hidden type. When hiding a weapon with TAE, erase the one that
     * matches this
     */
    unsigned char wepInvisibleType_3{ 0 };

    /**
     * @brief Model 0_Left hand Adsorption Damipoly with both hands
     *
     * Model 0 adsorption Damipoli when holding a left-handed weapon with both
     * hands.
     */
    short leftBoth_0{ 0 };

    /**
     * @brief Model 1_Left hand Adsorption Damipoly with both hands
     *
     * Model 1 adsorption Damipoli when holding a left-handed weapon with both
     * hands.
     */
    short leftBoth_1{ 0 };

    /**
     * @brief Model 2_Left hand Adsorption Damipoly with both hands
     *
     * Model 2 adsorption Damipoli when holding a left-handed weapon with both
     * hands.
     */
    short leftBoth_2{ 0 };

    /**
     * @brief Model 3_ Left hand adsorption Damipoly with both hands
     *
     * Model 3 adsorption Damipoli when holding a left-handed weapon with both
     * hands.
     */
    short leftBoth_3{ 0 };

    /**
     * @brief Model 0_Right hand display position
     *
     * Model 0_ Right-hand display position (used to specify hidden position
     * from TAE)
     */
    unsigned char dispPosType_right_0{ 0 };

    /**
     * @brief Model 0_left hand display position
     *
     * Model 0_Left hand display position (used to specify hidden position from
     * TAE)
     */
    unsigned char dispPosType_left_0{ 0 };

    /**
     * @brief Model 0_Right hand Display position with both hands
     *
     * Model 0_Right-handed two-handed display position (used to specify hidden
     * position from TAE)
     */
    unsigned char dispPosType_rightBoth_0{ 0 };

    /**
     * @brief Model 0_ Left hand Display position with both hands
     *
     * Model 0_ Left-handed two-handed display position (used to specify hidden
     * position from TAE)
     */
    unsigned char dispPosType_leftBoth_0{ 0 };

    /**
     * @brief Model 0_ Right hand display position when sword is delivered
     *
     * Model 0_ Right-handed sword display position (used to specify the
     * non-display position from TAE)
     */
    unsigned char dispPosType_rightHang_0{ 0 };

    /**
     * @brief Model 0_ Display position when delivering the left hand sword
     *
     * Model 0_ Left hand sword display position (used to specify the
     * non-display position from TAE)
     */
    unsigned char dispPosType_leftHang_0{ 0 };

    /**
     * @brief Model 1_Right hand display position
     *
     * Model 1_ Right-hand display position (used to specify hidden position
     * from TAE)
     */
    unsigned char dispPosType_right_1{ 0 };

    /**
     * @brief Model 1_left hand display position
     *
     * Model 1_Left hand display position (used to specify hidden position from
     * TAE)
     */
    unsigned char dispPosType_left_1{ 0 };

    /**
     * @brief Model 1_Right hand Display position with both hands
     *
     * Model 1_Right-handed two-handed display position (used to specify hidden
     * position from TAE)
     */
    unsigned char dispPosType_rightBoth_1{ 0 };

    /**
     * @brief Model 1_ Left hand Display position with both hands
     *
     * Model 1_ Left-handed two-handed display position (used to specify hidden
     * position from TAE)
     */
    unsigned char dispPosType_leftBoth_1{ 0 };

    /**
     * @brief Model 1_ Right hand display position when sword is delivered
     *
     * Model 1_ Right-handed sword display position (used to specify the
     * non-display position from TAE)
     */
    unsigned char dispPosType_rightHang_1{ 0 };

    /**
     * @brief Model 1_ Display position when delivering the left hand sword
     *
     * Model 1_ Left hand sword display position (used to specify the
     * non-display position from TAE)
     */
    unsigned char dispPosType_leftHang_1{ 0 };

    /**
     * @brief Model 2_Right hand display position
     *
     * Model 2_ Right-hand display position (used to specify hidden position
     * from TAE)
     */
    unsigned char dispPosType_right_2{ 0 };

    /**
     * @brief Model 2_left hand display position
     *
     * Model 2_Left hand display position (used to specify hidden position from
     * TAE)
     */
    unsigned char dispPosType_left_2{ 0 };

    /**
     * @brief Model 2_Right hand Display position with both hands
     *
     * Model 2_Right-handed two-handed display position (used to specify hidden
     * position from TAE)
     */
    unsigned char dispPosType_rightBoth_2{ 0 };

    /**
     * @brief Model 2_ Left hand Display position with both hands
     *
     * Model 2_ Left-handed two-handed display position (used to specify hidden
     * position from TAE)
     */
    unsigned char dispPosType_leftBoth_2{ 0 };

    /**
     * @brief Model 2_ Right hand display position when sword is delivered
     *
     * Model 2_Right-handed sword display position (used to specify the
     * non-display position from TAE)
     */
    unsigned char dispPosType_rightHang_2{ 0 };

    /**
     * @brief Model 2_ Display position when delivering the left hand sword
     *
     * Model 2_ Left hand sword display position (used to specify the
     * non-display position from TAE)
     */
    unsigned char dispPosType_leftHang_2{ 0 };

    /**
     * @brief Model 3_ Right hand display position
     *
     * Model 3_ Right-hand display position (used to specify hidden position
     * from TAE)
     */
    unsigned char dispPosType_right_3{ 0 };

    /**
     * @brief Model 3_left hand display position
     *
     * Model 3_Left hand display position (used to specify hidden position from
     * TAE)
     */
    unsigned char dispPosType_left_3{ 0 };

    /**
     * @brief Model 3_Right hand display position with both hands
     *
     * Model 3_Right-handed two-handed display position (used to specify hidden
     * position from TAE)
     */
    unsigned char dispPosType_rightBoth_3{ 0 };

    /**
     * @brief Model 3_ Left hand Display position with both hands
     *
     * Model 3_ Left-handed two-handed display position (used to specify hidden
     * position from TAE)
     */
    unsigned char dispPosType_leftBoth_3{ 0 };

    /**
     * @brief Model 3_ Right hand display position when sword is delivered
     *
     * Model 3_Right-handed sword display position (used to specify the
     * non-display position from TAE)
     */
    unsigned char dispPosType_rightHang_3{ 0 };

    /**
     * @brief Model 3_ Display position when delivering the left hand sword
     *
     * Model 3_ Left hand sword display position (used to specify the
     * non-display position from TAE)
     */
    unsigned char dispPosType_leftHang_3{ 0 };

    signed char unknown_0x54{ 0 };

    signed char unknown_0x55{ 0 };

    signed char unknown_0x56{ 0 };

    signed char unknown_0x57{ 0 };

    unsigned char reserve[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WEP_ABSORP_POS_PARAM_ST) == 96,
    "WEP_ABSORP_POS_PARAM_ST paramdef size does not match detected size");
