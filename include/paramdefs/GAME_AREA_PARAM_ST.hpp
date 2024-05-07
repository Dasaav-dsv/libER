/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct GAME_AREA_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int bonusSoul_single{ 0 };
    unsigned int bonusSoul_multi{ 0 };
    unsigned int humanityPointCountFlagIdTop{ 0 };
    unsigned short humanityDropPoint1{ 0 };
    unsigned short humanityDropPoint2{ 0 };
    unsigned short humanityDropPoint3{ 0 };
    unsigned short humanityDropPoint4{ 0 };
    unsigned short humanityDropPoint5{ 0 };
    unsigned short humanityDropPoint6{ 0 };
    unsigned short humanityDropPoint7{ 0 };
    unsigned short humanityDropPoint8{ 0 };
    unsigned short humanityDropPoint9{ 0 };
    unsigned short humanityDropPoint10{ 0 };
    unsigned int soloBreakInPoint_Min{ 0 };
    unsigned int soloBreakInPoint_Max{ 10000 };
    unsigned int defeatBossFlagId_forSignAimList{ 0 };
    unsigned int displayAimFlagId{ 0 };
    unsigned int foundBossFlagId{ 0 };
    int foundBossTextId{ -1 };
    int notFindBossTextId{ -1 };
    unsigned int bossChallengeFlagId{ 0 };
    unsigned int defeatBossFlagId{ 0 };
    float bossPosX{ 0 };
    float bossPosY{ 0 };
    float bossPosZ{ 0 };
    unsigned char bossMapAreaNo{ 0 };
    unsigned char bossMapBlockNo{ 0 };
    unsigned char bossMapMapNo{ 0 };
    unsigned char reserve[9];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::GAME_AREA_PARAM_ST) == 96,
    "GAME_AREA_PARAM_ST paramdef size does not match detected size");
