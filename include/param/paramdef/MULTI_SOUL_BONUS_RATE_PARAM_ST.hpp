/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MULTI_SOUL_BONUS_RATE_PARAM_ST {
    float host{ 0 };
    float WhiteGhost_None{ 0 };
    float WhiteGhost_Umbasa{ 0 };
    float WhiteGhost_Berserker{ 0 };
    float BlackGhost_None_Sign{ 0 };
    float BlackGhost_Umbasa_Sign{ 0 };
    float BlackGhost_Berserker_Sign{ 0 };
    float BlackGhost_None_Invade{ 0 };
    float BlackGhost_Umbasa_Invade{ 0 };
    float BlackGhost_Berserker_Invade{ 0 };
    float RedHunter1{ 0 };
    float RedHunter2{ 0 };
    float GuardianOfForest{ 0 };
    float GuardianOfAnor{ 0 };
    float BattleRoyal{ 0 };
    float YellowMonk{ 0 };
    unsigned char pad1[64];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MULTI_SOUL_BONUS_RATE_PARAM_ST) == 128,
    "MULTI_SOUL_BONUS_RATE_PARAM_ST paramdef size does not match detected "
    "size");
