/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct BEHAVIOR_PARAM_ST {
    /**
     * @brief Behavior variation ID
     *
     * Used when calculating the ID for attack parameters. It is not used
     * directly on the actual machine.
     */
    int variationId{ 0 };

    /**
     * @brief Action judgment ID
     *
     * Used when calculating the ID for attack parameters. This ID matches the
     * action judgment ID entered in TimeActEditor. It is not used directly on
     * the actual machine.
     */
    int behaviorJudgeId{ 0 };

    /**
     * @brief For ID rules
     *
     * For ID calculation rules
     */
    unsigned char ezStateBehaviorType_old{ 0 };

    /**
     * @brief Reference ID type
     *
     * Specify the reference ID so that it is correct.
     */
    unsigned char refType{ 0 };

    unsigned char pad2[2];

    /**
     * @brief Reference ID
     *
     * It can be used properly according to the attack power, missile, ID of
     * special effect parameter, and refType.
     */
    int refId{ -1 };

    /**
     * @brief Consumption SA
     *
     * Set the amount of SA consumed during action.
     */
    float consumeSA{ 0.f };

    /**
     * @brief Consumption stamina
     *
     * Set the amount of stamina consumed during action.
     */
    int stamina{ 0 };

    /**
     * @brief Weapon durability consumption (only when using missiles)
     *
     * Set the durability of weapons consumed during action.
     */
    int consumeDurability{ 0 };

    /**
     * @brief category
     *
     * Since there are effects (enchantment weapons, etc.) whose parameters
     * fluctuate depending on skills, magic, items, etc., set each action so
     * that the determined effect can correspond to the effect such as "power up
     * only weapon attack". Set "None" for items that do not need to be set,
     * such as varistor.
     */
    unsigned char category{ 0 };

    /**
     * @brief Consumer nature
     *
     * Set the amount of humanity consumed during action
     */
    unsigned char heroPoint{ 0 };

    unsigned char pad1[2];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BEHAVIOR_PARAM_ST) == 32,
    "BEHAVIOR_PARAM_ST paramdef size does not match detected size");
