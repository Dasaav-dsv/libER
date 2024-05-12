/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct NPC_AI_ACTION_PARAM_ST {
    /**
     * @brief Move direction input
     *
     * Moving direction to enter
     */
    unsigned char moveDir{ 0 };

    /**
     * @brief Key input 1
     *
     * Key to enter
     */
    unsigned char key1{ 0 };

    /**
     * @brief Key input 2
     *
     * Key to enter
     */
    unsigned char key2{ 0 };

    /**
     * @brief Key input 3
     *
     * Key to enter
     */
    unsigned char key3{ 0 };

    /**
     * @brief Press and hold the movement direction input?
     *
     * Whether to handle the input movement direction as long press
     */
    bool bMoveDirHold{ false };

    /**
     * @brief Press and hold key input 1?
     *
     * Whether to treat the key to be entered as a long press
     */
    bool bKeyHold1{ false };

    /**
     * @brief Press and hold key input 2?
     *
     * Whether to treat the key to be entered as a long press
     */
    bool bKeyHold2{ false };

    /**
     * @brief Press and hold key input 3?
     *
     * Whether to treat the key to be entered as a long press
     */
    bool bKeyHold3{ false };

    /**
     * @brief Gesture ID (valid only when any key input is GESTURE)
     *
     * Gesture ID
     */
    int gestureId{ 0 };

    /**
     * @brief Treat as successful when life is over
     *
     * If this is ON, the AI goal will not be successful until the end of its
     * life
     */
    bool bLifeEndSuccess{ false };

    unsigned char pad1[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::NPC_AI_ACTION_PARAM_ST) == 16,
    "NPC_AI_ACTION_PARAM_ST paramdef size does not match detected size");
