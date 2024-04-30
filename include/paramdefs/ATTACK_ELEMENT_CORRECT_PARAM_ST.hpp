/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ATTACK_ELEMENT_CORRECT_PARAM_ST {
    bool isStrengthCorrect_byPhysics : 1 { false };
    bool isDexterityCorrect_byPhysics : 1 { false };
    bool isMagicCorrect_byPhysics : 1 { false };
    bool isFaithCorrect_byPhysics : 1 { false };
    bool isLuckCorrect_byPhysics : 1 { false };
    bool isStrengthCorrect_byMagic : 1 { false };
    bool isDexterityCorrect_byMagic : 1 { false };
    bool isMagicCorrect_byMagic : 1 { false };
    bool isFaithCorrect_byMagic : 1 { false };
    bool isLuckCorrect_byMagic : 1 { false };
    bool isStrengthCorrect_byFire : 1 { false };
    bool isDexterityCorrect_byFire : 1 { false };
    bool isMagicCorrect_byFire : 1 { false };
    bool isFaithCorrect_byFire : 1 { false };
    bool isLuckCorrect_byFire : 1 { false };
    bool isStrengthCorrect_byThunder : 1 { false };
    bool isDexterityCorrect_byThunder : 1 { false };
    bool isMagicCorrect_byThunder : 1 { false };
    bool isFaithCorrect_byThunder : 1 { false };
    bool isLuckCorrect_byThunder : 1 { false };
    bool isStrengthCorrect_byDark : 1 { false };
    bool isDexterityCorrect_byDark : 1 { false };
    bool isMagicCorrect_byDark : 1 { false };
    bool isFaithCorrect_byDark : 1 { false };
    bool isLuckCorrect_byDark : 1 { false };
    unsigned char pad1 : 7;
    short overwriteStrengthCorrectRate_byPhysics{ -1 };
    short overwriteDexterityCorrectRate_byPhysics{ -1 };
    short overwriteMagicCorrectRate_byPhysics{ -1 };
    short overwriteFaithCorrectRate_byPhysics{ -1 };
    short overwriteLuckCorrectRate_byPhysics{ -1 };
    short overwriteStrengthCorrectRate_byMagic{ -1 };
    short overwriteDexterityCorrectRate_byMagic{ -1 };
    short overwriteMagicCorrectRate_byMagic{ -1 };
    short overwriteFaithCorrectRate_byMagic{ -1 };
    short overwriteLuckCorrectRate_byMagic{ -1 };
    short overwriteStrengthCorrectRate_byFire{ -1 };
    short overwriteDexterityCorrectRate_byFire{ -1 };
    short overwriteMagicCorrectRate_byFire{ -1 };
    short overwriteFaithCorrectRate_byFire{ -1 };
    short overwriteLuckCorrectRate_byFire{ -1 };
    short overwriteStrengthCorrectRate_byThunder{ -1 };
    short overwriteDexterityCorrectRate_byThunder{ -1 };
    short overwriteMagicCorrectRate_byThunder{ -1 };
    short overwriteFaithCorrectRate_byThunder{ -1 };
    short overwriteLuckCorrectRate_byThunder{ -1 };
    short overwriteStrengthCorrectRate_byDark{ -1 };
    short overwriteDexterityCorrectRate_byDark{ -1 };
    short overwriteMagicCorrectRate_byDark{ -1 };
    short overwriteFaithCorrectRate_byDark{ -1 };
    short overwriteLuckCorrectRate_byDark{ -1 };
    short InfluenceStrengthCorrectRate_byPhysics{ 100 };
    short InfluenceDexterityCorrectRate_byPhysics{ 100 };
    short InfluenceMagicCorrectRate_byPhysics{ 100 };
    short InfluenceFaithCorrectRate_byPhysics{ 100 };
    short InfluenceLuckCorrectRate_byPhysics{ 100 };
    short InfluenceStrengthCorrectRate_byMagic{ 100 };
    short InfluenceDexterityCorrectRate_byMagic{ 100 };
    short InfluenceMagicCorrectRate_byMagic{ 100 };
    short InfluenceFaithCorrectRate_byMagic{ 100 };
    short InfluenceLuckCorrectRate_byMagic{ 100 };
    short InfluenceStrengthCorrectRate_byFire{ 100 };
    short InfluenceDexterityCorrectRate_byFire{ 100 };
    short InfluenceMagicCorrectRate_byFire{ 100 };
    short InfluenceFaithCorrectRate_byFire{ 100 };
    short InfluenceLuckCorrectRate_byFire{ 100 };
    short InfluenceStrengthCorrectRate_byThunder{ 100 };
    short InfluenceDexterityCorrectRate_byThunder{ 100 };
    short InfluenceMagicCorrectRate_byThunder{ 100 };
    short InfluenceFaithCorrectRate_byThunder{ 100 };
    short InfluenceLuckCorrectRate_byThunder{ 100 };
    short InfluenceStrengthCorrectRate_byDark{ 100 };
    short InfluenceDexterityCorrectRate_byDark{ 100 };
    short InfluenceMagicCorrectRate_byDark{ 100 };
    short InfluenceFaithCorrectRate_byDark{ 100 };
    short InfluenceLuckCorrectRate_byDark{ 100 };
    unsigned char pad2[24];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::ATTACK_ELEMENT_CORRECT_PARAM_ST) == 128,
    "ATTACK_ELEMENT_CORRECT_PARAM_ST paramdef size does not match detected "
    "size");
