/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct BUDDY_PARAM_ST {
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
     * @brief Summon special effect ID
     *
     * Set the special effect ID that will be the summoning condition
     */
    int triggerSpEffectId{ -1 };

    /**
     * @brief NPC parameter ID
     *
     * Set the NPC parameter ID of the summoned buddy
     */
    int npcParamId{ -1 };

    /**
     * @brief Thinking parameter ID
     *
     * Sets the NPC Thinking Parameter ID of the summoned buddy
     */
    int npcThinkParamId{ -1 };

    /**
     * @brief Riding (riding side): NPC parameter ID
     *
     * For buddies that you want to summon while riding, set the NPC parameter
     * ID for the "rider"
     */
    int npcParamId_ridden{ -1 };

    /**
     * @brief Riding (riding side): Thinking parameter ID
     *
     * For buddies that you want to summon while riding, set the NPC Thinking
     * Parameter ID for the "rider"
     */
    int npcThinkParamId_ridden{ -1 };

    /**
     * @brief X: Placement coordinate offset [m]
     *
     * Sets the distance in meters to offset the buddy from the summon point to
     * the X coordinate
     */
    float x_offset{ 0.f };

    /**
     * @brief Z: Placement coordinate offset [m]
     *
     * Sets the distance in meters that offsets the buddy from the summon point
     * to the Z coordinate.
     */
    float z_offset{ 0.f };

    /**
     * @brief Y: Your placement angle [deg]
     *
     * Set the angle to rotate yourself around the Y axis
     */
    float y_angle{ 0.f };

    /**
     * @brief Will it emerge from around the stone monument?
     */
    bool appearOnAroundSekihi{ false };

    /**
     * @brief Do you want to skip target sharing with your PC?
     */
    bool disablePCTargetShare{ false };

    /**
     * @brief PC tracking & warp type
     */
    unsigned char pcFollowType{ 0 };

    unsigned char Reserve[1];

    /**
     * @brief +0 o'clock doping special effect
     */
    int dopingSpEffect_lv0{ -1 };

    /**
     * @brief +1 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv1{ -1 };

    /**
     * @brief +2 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv2{ -1 };

    /**
     * @brief +3 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv3{ -1 };

    /**
     * @brief +4 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv4{ -1 };

    /**
     * @brief +5 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv5{ -1 };

    /**
     * @brief +6 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv6{ -1 };

    /**
     * @brief +7 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv7{ -1 };

    /**
     * @brief +8 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv8{ -1 };

    /**
     * @brief +9 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv9{ -1 };

    /**
     * @brief +10 o'clock doping special effect
     *
     * +0 o'clock doping special effect
     */
    int dopingSpEffect_lv10{ -1 };

    /**
     * @brief Initial parameter ID by architype
     */
    int npcPlayerInitParamId{ -1 };

    /**
     * @brief Generate Anime ID
     */
    int generateAnimId{ -1 };

    unsigned int unknown_0x5c{ 0 };

    unsigned int unknown_0x60{ 0 };

    int unknown_0x64{ 0 };

    int unknown_0x68{ 0 };

    int unknown_0x6c{ 0 };

    int unknown_0x70{ 0 };

    int unknown_0x74{ 0 };

    int unknown_0x78{ 0 };

    int unknown_0x7c{ 0 };

    int unknown_0x80{ 0 };

    unsigned int unknown_0x84{ 0 };

    int unknown_0x88{ 0 };

    int unknown_0x8c{ 0 };

    int unknown_0x90{ 0 };

    int unknown_0x94{ 0 };

    int unknown_0x98{ 0 };

    unsigned int unknown_0x9c{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BUDDY_PARAM_ST) == 160,
    "BUDDY_PARAM_ST paramdef size does not match detected size");
