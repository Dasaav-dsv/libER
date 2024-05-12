/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MULTI_SOUL_BONUS_RATE_PARAM_ST {
    /**
     * @brief host
     *
     * Host reward soul multiplier
     */
    float host{ 0.f };

    /**
     * @brief White sign
     *
     * Cooperation sign white spirit reward soul multiplier
     */
    float WhiteGhost_None{ 0.f };

    /**
     * @brief Gold spirit (sun)
     *
     * Cooperative sign gold spirit reward soul multiplier
     */
    float WhiteGhost_Umbasa{ 0.f };

    /**
     * @brief White berserker
     *
     * Cooperation sign white Berserker reward soul multiplier
     */
    float WhiteGhost_Berserker{ 0.f };

    /**
     * @brief Red sign
     *
     * Hostile sign red spirit reward soul multiplier
     */
    float BlackGhost_None_Sign{ 0.f };

    /**
     * @brief Red gold spirit (signature)
     *
     * Hostile sign red gold spirit reward soul multiplier
     */
    float BlackGhost_Umbasa_Sign{ 0.f };

    /**
     * @brief Red berserker (sign)
     *
     * Hostile sign red berserker reward soul multiplier
     */
    float BlackGhost_Berserker_Sign{ 0.f };

    /**
     * @brief Invasion
     *
     * Invasion reward Soul multiplier
     */
    float BlackGhost_None_Invade{ 0.f };

    /**
     * @brief Red Gold Spirit (Invasion)
     *
     * Invasion Orb's Red Gold Spirit Reward Soul Multiplier
     */
    float BlackGhost_Umbasa_Invade{ 0.f };

    /**
     * @brief Red berserker (invasion)
     *
     * Invasion Orb Red Berserker Reward Soul Multiplier
     */
    float BlackGhost_Berserker_Invade{ 0.f };

    /**
     * @brief Relief guest
     *
     * Relief guest reward soul multiplier
     */
    float RedHunter1{ 0.f };

    /**
     * @brief Red Scare Spirit 2
     *
     * Red Scare Spirit 2 Reward Soul Multiplier
     */
    float RedHunter2{ 0.f };

    /**
     * @brief Map Guardian Spirit (Forest)
     *
     * Map Guardian Spirit (Forest) Reward Soul Magnification
     */
    float GuardianOfForest{ 0.f };

    /**
     * @brief Map Guardian (Anor)
     *
     * Map Guardian Spirit (Anor) Reward Soul Multiplier
     */
    float GuardianOfAnor{ 0.f };

    /**
     * @brief Arena
     *
     * Arena reward soul multiplier
     */
    float BattleRoyal{ 0.f };

    /**
     * @brief Yellow robe's old man
     *
     * Yellow robe's old man's reward soul multiplier
     */
    float YellowMonk{ 0.f };

    unsigned char pad1[64];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MULTI_SOUL_BONUS_RATE_PARAM_ST) == 128,
    "MULTI_SOUL_BONUS_RATE_PARAM_ST paramdef size does not match detected "
    "size");
