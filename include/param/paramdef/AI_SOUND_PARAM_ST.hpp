/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct AI_SOUND_PARAM_ST {
    /**
     * @brief Sound radius [m]
     *
     * AI sound radius
     */
    float radius{ 0.f };

    /**
     * @brief Extinction time [seconds]
     *
     * Time for AI sound to remain
     */
    float lifeFrame{ 0.f };

    /**
     * @brief Is it affected by special effects?
     *
     * Whether it is affected by the special effect "Sound Radius Magnification"
     */
    bool bSpEffectEnable{ false };

    /**
     * @brief kinds
     *
     * AI sound type
     */
    unsigned char type{ 0 };

    /**
     * @brief Target: ● Hostile
     */
    bool opposeTarget : 1 { true };

    /**
     * @brief Target: ○ Allies
     */
    bool friendlyTarget : 1 { false };

    /**
     * @brief Target: myself
     */
    bool selfTarget : 1 { false };

    /**
     * @brief You can't listen while targeting your PC
     */
    bool disableOnTargetPCompany : 1 { false };

    /**
     * @brief Character behavior
     *
     * Character behavior (former: sound type)
     */
    unsigned char rank{ 0 };

    /**
     * @brief Time to forget the sound target (overwrite) [sec]
     */
    float forgetTime{ -1.f };

    /**
     * @brief AI sound priority
     */
    int priority{ 100 };

    /**
     * @brief Behavior ID
     */
    int soundBehaviorId{ -1 };

    /**
     * @brief AI sound level
     *
     * How hard it is to hear
     */
    unsigned char aiSoundLevel{ 0 };

    /**
     * @brief AI state to replan
     *
     * AI state setting to run replanning when listening to AI sound
     */
    unsigned char replaningState{ 0 };

    unsigned char pad1[6];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::AI_SOUND_PARAM_ST) == 32,
    "AI_SOUND_PARAM_ST paramdef size does not match detected size");
