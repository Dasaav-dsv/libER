/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct BUDDY_STONE_PARAM_ST {
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
     * @brief Conversation character entity ID
     *
     * Used as a foreign key when referencing from a conversation.
     */
    unsigned int talkChrEntityId{ 0 };

    /**
     * @brief Defeat Target List Entity ID
     *
     * Entity ID of the character / group to be defeated by the buddy when
     * summoned from this stele
     */
    unsigned int eliminateTargetEntityId{ 0 };

    /**
     * @brief Summoned event flag ID
     *
     * Flag ID that stands when summoned from a stone monument. When this flag
     * is set, the stone monument cannot be summoned.
     */
    unsigned int summonedEventFlagId{ 0 };

    /**
     * @brief Is it special?
     *
     * Is the stone monument an SP stone monument or a general-purpose stone
     * monument? A bool that distinguishes.
     */
    bool isSpecial : 1 { false };

    unsigned char pad1 : 7;

    unsigned char pad2[3];

    /**
     * @brief Buddy ID
     *
     * ID of the buddy parameter. If "Special" is ○, this buddy ID will be
     * summoned.
     */
    int buddyId{ 0 };

    /**
     * @brief Special effects ID for doping
     *
     * Special effect ID applied to the buddy when summoning the buddy.
     */
    int dopingSpEffectId{ -1 };

    /**
     * @brief Buddy activation distance [m]
     *
     * If there is at least one character to be defeated in this range, you can
     * summon a buddy at that stone monument.
     */
    unsigned short activateRange{ 100 };

    /**
     * @brief Buddy homecoming distance overwrite [m]
     *
     * Buddy's homecoming distance can be overridden
     */
    short overwriteReturnRange{ -1 };

    /**
     * @brief Launch range overwrite area entity ID
     *
     * The range where the buddy can be summoned can be overwritten in the area
     * of the specified entity ID.
     */
    unsigned int overwriteActivateRegionEntityId{ 0 };

    /**
     * @brief Warning range overwrite area entity ID
     *
     * Warning area entity ID
     */
    unsigned int warnRegionEntityId{ 0 };

    unsigned char pad3[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BUDDY_STONE_PARAM_ST) == 64,
    "BUDDY_STONE_PARAM_ST paramdef size does not match detected size");
