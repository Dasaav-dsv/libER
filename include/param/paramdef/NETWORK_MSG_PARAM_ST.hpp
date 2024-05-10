/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct NETWORK_MSG_PARAM_ST {
    unsigned short priority{ 0 };
    bool forcePlay{ false };
    unsigned char pad1[1];
    int normalWhite{ -1 };
    int umbasaWhite{ -1 };
    int berserkerWhite{ -1 };
    int sinnerHeroWhite{ -1 };
    int normalBlack{ -1 };
    int umbasaBlack{ -1 };
    int berserkerBlack{ -1 };
    int forceJoinBlack{ -1 };
    int forceJoinUmbasaBlack{ -1 };
    int forceJoinBerserkerBlack{ -1 };
    int sinnerHunterVisitor{ -1 };
    int redHunterVisitor{ -1 };
    int guardianOfBossVisitor{ -1 };
    int guardianOfForestMapVisitor{ -1 };
    int guardianOfAnolisVisitor{ -1 };
    int rosaliaBlack{ -1 };
    int forceJoinRosaliaBlack{ -1 };
    int redHunterVisitor2{ -1 };
    int npc1{ -1 };
    int npc2{ -1 };
    int npc3{ -1 };
    int npc4{ -1 };
    int battleRoyal{ -1 };
    int npc5{ -1 };
    int npc6{ -1 };
    int npc7{ -1 };
    int npc8{ -1 };
    int npc9{ -1 };
    int npc10{ -1 };
    int npc11{ -1 };
    int npc12{ -1 };
    int npc13{ -1 };
    int npc14{ -1 };
    int npc15{ -1 };
    int npc16{ -1 };
    int forceJoinBlack_B{ -1 };
    int normalWhite_Npc{ -1 };
    int forceJoinBlack_Npc{ -1 };
    int forceJoinBlack_B_Npc{ -1 };
    int forceJoinBlack_C_Npc{ -1 };
    unsigned char pad2[28];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::NETWORK_MSG_PARAM_ST) == 192,
    "NETWORK_MSG_PARAM_ST paramdef size does not match detected size");
