/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ROLE_PARAM_ST {
    unsigned char teamType{ 0 };
    unsigned char pad10[3];
    int phantomParamId{ -1 };
    int spEffectID0{ -1 };
    int spEffectID1{ -1 };
    int spEffectID2{ -1 };
    int spEffectID3{ -1 };
    int spEffectID4{ -1 };
    int spEffectID5{ -1 };
    int spEffectID6{ -1 };
    int spEffectID7{ -1 };
    int spEffectID8{ -1 };
    int spEffectID9{ -1 };
    int sosSignSfxId{ 0 };
    int mySosSignSfxId{ 0 };
    int summonStartAnimId{ 0 };
    int itemlotParamId{ -1 };
    unsigned char voiceChatGroup{ 0 };
    unsigned char roleNameColor{ 0 };
    unsigned char pad1[2];
    int roleNameId{ 0 };
    unsigned int threatLv{ 0 };
    int phantomParamId_vowRank1{ -1 };
    int phantomParamId_vowRank2{ -1 };
    int phantomParamId_vowRank3{ -1 };
    int spEffectID_vowRank0{ -1 };
    int spEffectID_vowRank1{ -1 };
    int spEffectID_vowRank2{ -1 };
    int spEffectID_vowRank3{ -1 };
    int signPhantomId{ -1 };
    int nonPlayerSummonStartAnimId{ 0 };
    unsigned char pad2[16];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::ROLE_PARAM_ST) == 128,
    "ROLE_PARAM_ST paramdef size does not match detected size");
