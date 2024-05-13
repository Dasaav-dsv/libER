/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ATTACK_ELEMENT_CORRECT_PARAM_ST {
    /**
     * @brief Whether to correct muscle strength (physical)
     */
    bool isStrengthCorrect_byPhysics : 1 { false };

    /**
     * @brief Whether to correct the skill (physical)
     */
    bool isDexterityCorrect_byPhysics : 1 { false };

    /**
     * @brief Whether to correct the force (physics)
     */
    bool isMagicCorrect_byPhysics : 1 { false };

    /**
     * @brief Do you correct your faith (physics)?
     */
    bool isFaithCorrect_byPhysics : 1 { false };

    /**
     * @brief Whether to correct luck (physical)
     */
    bool isLuckCorrect_byPhysics : 1 { false };

    /**
     * @brief Whether to correct muscle strength (magic)
     */
    bool isStrengthCorrect_byMagic : 1 { false };

    /**
     * @brief Do you correct your workmanship (magic)?
     */
    bool isDexterityCorrect_byMagic : 1 { false };

    /**
     * @brief Do you correct the force (magic)?
     */
    bool isMagicCorrect_byMagic : 1 { false };

    /**
     * @brief Do you correct your faith (magic)?
     */
    bool isFaithCorrect_byMagic : 1 { false };

    /**
     * @brief Do you correct your luck (magic)
     */
    bool isLuckCorrect_byMagic : 1 { false };

    /**
     * @brief Do you correct muscle strength (flame)?
     */
    bool isStrengthCorrect_byFire : 1 { false };

    /**
     * @brief Do you correct your workmanship (flame)?
     */
    bool isDexterityCorrect_byFire : 1 { false };

    /**
     * @brief Do you correct the force (flame)?
     */
    bool isMagicCorrect_byFire : 1 { false };

    /**
     * @brief Do you correct your faith (flame)?
     */
    bool isFaithCorrect_byFire : 1 { false };

    /**
     * @brief Do you correct your luck (flame)?
     */
    bool isLuckCorrect_byFire : 1 { false };

    /**
     * @brief Whether to correct muscle strength (lightning)
     */
    bool isStrengthCorrect_byThunder : 1 { false };

    /**
     * @brief Do you correct your workmanship (lightning)?
     */
    bool isDexterityCorrect_byThunder : 1 { false };

    /**
     * @brief Do you correct the force (lightning)?
     */
    bool isMagicCorrect_byThunder : 1 { false };

    /**
     * @brief Do you correct your faith (thunder)?
     */
    bool isFaithCorrect_byThunder : 1 { false };

    /**
     * @brief Do you correct your luck (lightning)?
     */
    bool isLuckCorrect_byThunder : 1 { false };

    /**
     * @brief Do you correct your strength (darkness)?
     */
    bool isStrengthCorrect_byDark : 1 { false };

    /**
     * @brief Do you correct your workmanship (darkness)?
     */
    bool isDexterityCorrect_byDark : 1 { false };

    /**
     * @brief Do you correct the force (darkness)?
     */
    bool isMagicCorrect_byDark : 1 { false };

    /**
     * @brief Do you correct your faith (darkness)?
     */
    bool isFaithCorrect_byDark : 1 { false };

    /**
     * @brief Do you correct your luck (darkness)?
     */
    bool isLuckCorrect_byDark : 1 { false };

    unsigned char pad1 : 7;

    /**
     * @brief Overwrite muscle strength correction value (physical)
     */
    short overwriteStrengthCorrectRate_byPhysics{ -1 };

    /**
     * @brief Skill correction value overwrite (physical)
     */
    short overwriteDexterityCorrectRate_byPhysics{ -1 };

    /**
     * @brief Overwrite the force correction value (physical)
     */
    short overwriteMagicCorrectRate_byPhysics{ -1 };

    /**
     * @brief Faith correction value overwrite (physical)
     */
    short overwriteFaithCorrectRate_byPhysics{ -1 };

    /**
     * @brief Overwrite luck correction value (physical)
     */
    short overwriteLuckCorrectRate_byPhysics{ -1 };

    /**
     * @brief Overwrite muscle strength correction value (magic)
     */
    short overwriteStrengthCorrectRate_byMagic{ -1 };

    /**
     * @brief Skill correction value overwrite (magic)
     */
    short overwriteDexterityCorrectRate_byMagic{ -1 };

    /**
     * @brief Overwrite the force correction value (magic)
     */
    short overwriteMagicCorrectRate_byMagic{ -1 };

    /**
     * @brief Faith correction value overwrite (magic)
     */
    short overwriteFaithCorrectRate_byMagic{ -1 };

    /**
     * @brief Overwrite luck correction value (magic)
     */
    short overwriteLuckCorrectRate_byMagic{ -1 };

    /**
     * @brief Overwrite muscle strength correction value (flame)
     */
    short overwriteStrengthCorrectRate_byFire{ -1 };

    /**
     * @brief Skill correction value overwrite (flame)
     */
    short overwriteDexterityCorrectRate_byFire{ -1 };

    /**
     * @brief Overwrite the force correction value (flame)
     */
    short overwriteMagicCorrectRate_byFire{ -1 };

    /**
     * @brief Faith correction value overwrite (flame)
     */
    short overwriteFaithCorrectRate_byFire{ -1 };

    /**
     * @brief Overwrite luck correction value (flame)
     */
    short overwriteLuckCorrectRate_byFire{ -1 };

    /**
     * @brief Overwrite muscle strength correction value (lightning)
     */
    short overwriteStrengthCorrectRate_byThunder{ -1 };

    /**
     * @brief Skill correction value overwrite (lightning)
     */
    short overwriteDexterityCorrectRate_byThunder{ -1 };

    /**
     * @brief Overwrite the force correction value (lightning)
     */
    short overwriteMagicCorrectRate_byThunder{ -1 };

    /**
     * @brief Faith correction value overwrite (thunder)
     */
    short overwriteFaithCorrectRate_byThunder{ -1 };

    /**
     * @brief Overwrite luck correction value (lightning)
     */
    short overwriteLuckCorrectRate_byThunder{ -1 };

    /**
     * @brief Overwrite muscle strength correction value (darkness)
     */
    short overwriteStrengthCorrectRate_byDark{ -1 };

    /**
     * @brief Skill correction value overwrite (darkness)
     */
    short overwriteDexterityCorrectRate_byDark{ -1 };

    /**
     * @brief Overwrite the force correction value (darkness)
     */
    short overwriteMagicCorrectRate_byDark{ -1 };

    /**
     * @brief Faith correction value overwrite (darkness)
     */
    short overwriteFaithCorrectRate_byDark{ -1 };

    /**
     * @brief Overwrite luck correction value (darkness)
     */
    short overwriteLuckCorrectRate_byDark{ -1 };

    /**
     * @brief Strength correction value Impact rate (physical)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceStrengthCorrectRate_byPhysics{ 100 };

    /**
     * @brief Skill correction value Impact rate (physical)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceDexterityCorrectRate_byPhysics{ 100 };

    /**
     * @brief Force correction value Impact rate (physical)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceMagicCorrectRate_byPhysics{ 100 };

    /**
     * @brief Faith correction value Impact rate (physical)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceFaithCorrectRate_byPhysics{ 100 };

    /**
     * @brief Luck correction value influence rate (physical)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceLuckCorrectRate_byPhysics{ 100 };

    /**
     * @brief Strength correction value Impact rate (magic)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceStrengthCorrectRate_byMagic{ 100 };

    /**
     * @brief Skill correction value Impact rate (magic)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceDexterityCorrectRate_byMagic{ 100 };

    /**
     * @brief Force correction value Impact rate (magic)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceMagicCorrectRate_byMagic{ 100 };

    /**
     * @brief Faith correction value Impact rate (magic)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceFaithCorrectRate_byMagic{ 100 };

    /**
     * @brief Luck correction value influence rate (magic)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceLuckCorrectRate_byMagic{ 100 };

    /**
     * @brief Strength correction value Impact rate (flame)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceStrengthCorrectRate_byFire{ 100 };

    /**
     * @brief Skill correction value Impact rate (flame)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceDexterityCorrectRate_byFire{ 100 };

    /**
     * @brief Force correction value Impact rate (flame)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceMagicCorrectRate_byFire{ 100 };

    /**
     * @brief Faith correction value Impact rate (flame)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceFaithCorrectRate_byFire{ 100 };

    /**
     * @brief Luck correction value influence rate (flame)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceLuckCorrectRate_byFire{ 100 };

    /**
     * @brief Strength correction value Impact rate (lightning)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceStrengthCorrectRate_byThunder{ 100 };

    /**
     * @brief Skill correction value Impact rate (lightning)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceDexterityCorrectRate_byThunder{ 100 };

    /**
     * @brief Force correction value Impact rate (lightning)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceMagicCorrectRate_byThunder{ 100 };

    /**
     * @brief Faith correction value Impact rate (lightning)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceFaithCorrectRate_byThunder{ 100 };

    /**
     * @brief Luck correction value influence rate (lightning)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceLuckCorrectRate_byThunder{ 100 };

    /**
     * @brief Strength correction value influence rate (darkness)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceStrengthCorrectRate_byDark{ 100 };

    /**
     * @brief Skill correction value Impact rate (darkness)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceDexterityCorrectRate_byDark{ 100 };

    /**
     * @brief Force correction value Impact rate (darkness)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceMagicCorrectRate_byDark{ 100 };

    /**
     * @brief Faith correction value Impact rate (darkness)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceFaithCorrectRate_byDark{ 100 };

    /**
     * @brief Luck correction value influence rate (darkness)
     *
     * The rate of influence of the correction factor.
     */
    short InfluenceLuckCorrectRate_byDark{ 100 };

    unsigned char pad2[24];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ATTACK_ELEMENT_CORRECT_PARAM_ST) == 128,
    "ATTACK_ELEMENT_CORRECT_PARAM_ST paramdef size does not match detected "
    "size");
