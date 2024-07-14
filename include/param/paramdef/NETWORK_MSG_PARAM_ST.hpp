/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct NETWORK_MSG_PARAM_ST {
    /**
     * @brief priority
     */
    unsigned short priority{ 0 };

    /**
     * @brief Forced interrupt
     */
    bool forcePlay{ false };

    unsigned char pad1[1];

    /**
     * @brief White spirit (white sign)
     */
    int normalWhite{ -1 };

    /**
     * @brief Sun spirit (white sign)
     */
    int umbasaWhite{ -1 };

    /**
     * @brief Berserker spirit (white sign)
     */
    int berserkerWhite{ -1 };

    /**
     * @brief Sinner Hero Spirit (white sign)
     */
    int sinnerHeroWhite{ -1 };

    /**
     * @brief Dark spirit (red sign)
     */
    int normalBlack{ -1 };

    /**
     * @brief Sun spirit (red sign)
     */
    int umbasaBlack{ -1 };

    /**
     * @brief Berserker spirit (red sign)
     */
    int berserkerBlack{ -1 };

    /**
     * @brief Intrusion_A
     */
    int forceJoinBlack{ -1 };

    /**
     * @brief Sun spirit (intrusion)
     */
    int forceJoinUmbasaBlack{ -1 };

    /**
     * @brief Berserker spirit (intrusion)
     */
    int forceJoinBerserkerBlack{ -1 };

    /**
     * @brief Sinner hunting spirit (visit)
     */
    int sinnerHunterVisitor{ -1 };

    /**
     * @brief Red Scare Spirit (Visit)
     */
    int redHunterVisitor{ -1 };

    /**
     * @brief Boss guardian spirit (visit)
     */
    int guardianOfBossVisitor{ -1 };

    /**
     * @brief Map Guardian Spirit_Forest (Visit)
     */
    int guardianOfForestMapVisitor{ -1 };

    /**
     * @brief Map Guardian_Anor (Visit)
     */
    int guardianOfAnolisVisitor{ -1 };

    /**
     * @brief Rosalia spirit (red sign)
     */
    int rosaliaBlack{ -1 };

    /**
     * @brief Rosalia spirit (intrusion)
     */
    int forceJoinRosaliaBlack{ -1 };

    /**
     * @brief Red Scare Spirit 2 (Visit)
     */
    int redHunterVisitor2{ -1 };

    /**
     * @brief NPC Pseudo Multi 1
     */
    int npc1{ -1 };

    /**
     * @brief NPC Pseudo Multi 2
     */
    int npc2{ -1 };

    /**
     * @brief NPC Pseudo Multi 3
     */
    int npc3{ -1 };

    /**
     * @brief NPC Pseudo Multi 4
     */
    int npc4{ -1 };

    /**
     * @brief Battle royale
     */
    int battleRoyal{ -1 };

    /**
     * @brief NPC Pseudo Multi 5
     */
    int npc5{ -1 };

    /**
     * @brief NPC Pseudo Multi 6
     */
    int npc6{ -1 };

    /**
     * @brief NPC Pseudo Multi 7
     */
    int npc7{ -1 };

    /**
     * @brief NPC Pseudo Multi 8
     */
    int npc8{ -1 };

    /**
     * @brief NPC Pseudo Multi 9
     */
    int npc9{ -1 };

    /**
     * @brief NPC Pseudo Multi 10
     */
    int npc10{ -1 };

    /**
     * @brief NPC Pseudo Multi 11
     */
    int npc11{ -1 };

    /**
     * @brief NPC Pseudo Multi 12
     */
    int npc12{ -1 };

    /**
     * @brief NPC Pseudo Multi 13
     */
    int npc13{ -1 };

    /**
     * @brief NPC Pseudo Multi 14
     */
    int npc14{ -1 };

    /**
     * @brief NPC Pseudo Multi 15
     */
    int npc15{ -1 };

    /**
     * @brief NPC Pseudo Multi 16
     */
    int npc16{ -1 };

    /**
     * @brief Intrusion_B
     */
    int forceJoinBlack_B{ -1 };

    /**
     * @brief White spirit (white sign) for NPCs
     */
    int normalWhite_Npc{ -1 };

    /**
     * @brief For intrusion_A_NPCs
     */
    int forceJoinBlack_Npc{ -1 };

    /**
     * @brief For intrusion_B_NPCs
     */
    int forceJoinBlack_B_Npc{ -1 };

    /**
     * @brief For intrusion_C_NPCs
     */
    int forceJoinBlack_C_Npc{ -1 };

    int unknown_0xa4{ 0 };

    int unknown_0xa8{ 0 };

    int unknown_0xac{ 0 };

    int unknown_0xb0{ 0 };

    int unknown_0xb4{ 0 };

    unsigned char pad2_new[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::NETWORK_MSG_PARAM_ST) == 192,
    "NETWORK_MSG_PARAM_ST paramdef size does not match detected size");
