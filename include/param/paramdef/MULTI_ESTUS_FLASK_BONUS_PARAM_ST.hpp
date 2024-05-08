/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MULTI_ESTUS_FLASK_BONUS_PARAM_ST {
    unsigned char host{ 0 };
    unsigned char WhiteGhost_None{ 0 };
    unsigned char WhiteGhost_Umbasa{ 0 };
    unsigned char WhiteGhost_Berserker{ 0 };
    unsigned char BlackGhost_None_Sign{ 0 };
    unsigned char BlackGhost_Umbasa_Sign{ 0 };
    unsigned char BlackGhost_Berserker_Sign{ 0 };
    unsigned char BlackGhost_None_Invade{ 0 };
    unsigned char BlackGhost_Umbasa_Invade{ 0 };
    unsigned char BlackGhost_Berserker_Invade{ 0 };
    unsigned char RedHunter1{ 0 };
    unsigned char RedHunter2{ 0 };
    unsigned char GuardianOfForest{ 0 };
    unsigned char GuardianOfAnor{ 0 };
    unsigned char BattleRoyal{ 0 };
    unsigned char YellowMonk{ 0 };
    unsigned char pad1[48];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MULTI_ESTUS_FLASK_BONUS_PARAM_ST) == 64,
    "MULTI_ESTUS_FLASK_BONUS_PARAM_ST paramdef size does not match detected "
    "size");
