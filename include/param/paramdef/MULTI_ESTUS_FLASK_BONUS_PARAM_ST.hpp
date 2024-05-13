/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MULTI_ESTUS_FLASK_BONUS_PARAM_ST {
    /**
     * @brief host
     *
     * Number of host est recovery
     */
    unsigned char host{ 0 };

    /**
     * @brief White sign
     *
     * Number of white spirits recovering from the cooperation sign
     */
    unsigned char WhiteGhost_None{ 0 };

    /**
     * @brief Gold spirit (sun)
     *
     * Number of est recovery of gold spirits of cooperation sign
     */
    unsigned char WhiteGhost_Umbasa{ 0 };

    /**
     * @brief White berserker
     *
     * Number of recovery of white Berserker's est of cooperation sign
     */
    unsigned char WhiteGhost_Berserker{ 0 };

    /**
     * @brief Red sign
     *
     * Number of est recovery of red spirits of hostile sign
     */
    unsigned char BlackGhost_None_Sign{ 0 };

    /**
     * @brief Red gold spirit (signature)
     *
     * Number of est recovery of red gold spirit of hostile sign
     */
    unsigned char BlackGhost_Umbasa_Sign{ 0 };

    /**
     * @brief Red berserker (sign)
     *
     * Number of est recovery of red Berserker of hostile sign
     */
    unsigned char BlackGhost_Berserker_Sign{ 0 };

    /**
     * @brief Invasion
     *
     * Number of intrusion est recovery
     */
    unsigned char BlackGhost_None_Invade{ 0 };

    /**
     * @brief Red Gold Spirit (Invasion)
     *
     * Number of est recovery of red gold spirits of invading orbs
     */
    unsigned char BlackGhost_Umbasa_Invade{ 0 };

    /**
     * @brief Red berserker (invasion)
     *
     * Invasion Orb Red Berserker Est Recovery Number
     */
    unsigned char BlackGhost_Berserker_Invade{ 0 };

    /**
     * @brief Relief guest
     *
     * Number of rescue guests' est recovery
     */
    unsigned char RedHunter1{ 0 };

    /**
     * @brief Red Scare Spirit 2
     *
     * Number of est recovery of Red Scare Spirit 2
     */
    unsigned char RedHunter2{ 0 };

    /**
     * @brief Map Guardian Spirit (Forest)
     *
     * Map guardian spirit (forest) est recovery number
     */
    unsigned char GuardianOfForest{ 0 };

    /**
     * @brief Map Guardian (Anor)
     *
     * Map Guardian Spirit (Anor) Est Recovery Number
     */
    unsigned char GuardianOfAnor{ 0 };

    /**
     * @brief Arena
     *
     * Number of est recovery in the arena
     */
    unsigned char BattleRoyal{ 0 };

    /**
     * @brief Yellow robe's old man
     *
     * The number of est recovery of the old man in yellow
     */
    unsigned char YellowMonk{ 0 };

    unsigned char pad1[48];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MULTI_ESTUS_FLASK_BONUS_PARAM_ST) == 64,
    "MULTI_ESTUS_FLASK_BONUS_PARAM_ST paramdef size does not match detected "
    "size");
