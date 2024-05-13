/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SP_EFFECT_VFX_PARAM_ST {
    /**
     * @brief In effect SfxID
     *
     * In effect SfxID (-1: invalid)
     */
    int midstSfxId{ -1 };

    /**
     * @brief In effect SeID
     *
     * In effect SeID (-1: invalid)
     */
    int midstSeId{ -1 };

    /**
     * @brief SfxID at the time of activation
     *
     * SfxID at activation (-1: invalid)
     */
    int initSfxId{ -1 };

    /**
     * @brief SeID at the time of activation
     *
     * When activated SeID (-1: invalid)
     */
    int initSeId{ -1 };

    /**
     * @brief SfxID at the time of release
     *
     * SfxID at the time of cancellation (-1: invalid)
     */
    int finishSfxId{ -1 };

    /**
     * @brief SeID at the time of release
     *
     * SeID at the time of release (-1: invalid)
     */
    int finishSeId{ -1 };

    /**
     * @brief Hidden start distance [m]
     *
     * It is the camouflage start distance
     */
    float camouflageBeginDist{ -1.f };

    /**
     * @brief Hidden end distance [m]
     *
     * It is the camouflage end distance
     */
    float camouflageEndDist{ -1.f };

    /**
     * @brief Makeover Armor ID
     *
     * Makeover Armor ID (-1: None)
     */
    int transformProtectorId{ -1 };

    /**
     * @brief Damipoli ID in effect
     *
     * In effect Damipoli ID (-1: Root)
     */
    short midstDmyId{ -1 };

    /**
     * @brief Damipoli ID at the time of activation
     *
     * Damipoli ID at the time of activation (-1: root)
     */
    short initDmyId{ -1 };

    /**
     * @brief Damipoli ID at the time of cancellation
     *
     * Damipoli ID at the time of cancellation (-1: root)
     */
    short finishDmyId{ -1 };

    /**
     * @brief Effect type
     */
    unsigned char effectType{ 0 };

    /**
     * @brief Soul Param ID for Weapon Enchantment
     *
     * Soul Param ID for Weapon Enchantment (-1: None). Change the applied
     * Phantom Param.
     */
    unsigned char soulParamIdForWepEnchant{ 0 };

    /**
     * @brief VFX playback category
     *
     * Controls effect playback due to duplicate effects
     */
    unsigned char playCategory{ 0 };

    /**
     * @brief In-category priority
     *
     * Set the playback priority when the categories match (lower one has
     * priority)
     */
    unsigned char playPriority{ 0 };

    /**
     * @brief Is there a large effect?
     */
    bool existEffectForLarge : 1 { false };

    /**
     * @brief Is there an effect for the soul body?
     */
    bool existEffectForSoul : 1 { false };

    /**
     * @brief Whether to hide the effect when hiding
     */
    bool effectInvisibleAtCamouflage : 1 { false };

    /**
     * @brief Do you hide
     */
    bool useCamouflage : 1 { false };

    /**
     * @brief Is it hidden even by allies when hiding?
     */
    bool invisibleAtFriendCamouflage : 1 { false };

    /**
     * @brief Do you want to turn off the foot effect when hiding?
     */
    bool isHideFootEffect_forCamouflage : 1 { false };

    /**
     * @brief Only translucent appearance
     */
    bool halfCamouflage : 1 { false };

    /**
     * @brief Is the transformation armor ID for the whole body?
     */
    bool isFullBodyTransformProtectorId : 1 { false };

    /**
     * @brief Invisible Weapon for Weapon Enchantment?
     *
     * Invisible Weapon for Weapon Enchantment (0: Weapon Show, 1: Weapon Hide)
     */
    bool isInvisibleWeapon : 1 { false };

    /**
     * @brief Is it silence?
     *
     * Is it silence? (0: No, 1: Yes)
     */
    bool isSilence : 1 { false };

    /**
     * @brief Whole body (in effect)
     *
     * Do you use whole body Damipoli for equipping SFX during effect? Play SFX
     * from torso: 190, head: 191, hands: 192, legs: 193 at 1
     */
    bool isMidstFullbody : 1 { false };

    /**
     * @brief Whole body (at the time of activation)
     *
     * Do you use the whole body Damipoli for equipping SFX during activation?
     * Play SFX from torso: 190, head: 191, hands: 192, legs: 193 at 1
     */
    bool isInitFullbody : 1 { false };

    /**
     * @brief Whole body (at the time of release)
     *
     * Do you use the whole body Damipoli for equipping SFX at the time of
     * release? Play SFX from torso: 190, head: 191, hands: 192, legs: 193 at 1
     */
    bool isFinishFullbody : 1 { false };

    /**
     * @brief Do you want to display even when the body is dead?
     *
     * If ○, VFX will be displayed even when the corpse is dead.
     */
    bool isVisibleDeadChr : 1 { false };

    /**
     * @brief Enchantment SFX size offset adaptation?
     *
     * Whether to offset the SfxId according to the "enchantment Sfx size" of
     * the weapon para
     */
    bool isUseOffsetEnchantSfxSize : 1 { false };

    unsigned char pad_1 : 1;

    /**
     * @brief Decal ID1
     *
     * Decal ID 1 (-1: invalid)
     */
    int decalId1{ -1 };

    /**
     * @brief Decal ID2
     *
     * Decal ID 2 (-1: invalid)
     */
    int decalId2{ -1 };

    /**
     * @brief Foot effect priority
     *
     * Foot effect offset priority (lower is higher)
     */
    unsigned char footEffectPriority{ 0 };

    /**
     * @brief Foot effect offset
     *
     * Amount offset to foot effect ID when this special effect is applied
     */
    unsigned char footEffectOffset{ 0 };

    /**
     * @brief Sword flash SFX ID offset type
     *
     * The offset value applied to the sword flash SFX ID. Used for enchantment
     * and sword trajectory effects
     */
    unsigned char traceSfxIdOffsetType{ 0 };

    /**
     * @brief Forced overwriting of player appearance
     *
     * A function that can force the appearance of a character to be alive /
     * dead
     */
    unsigned char forceDeceasedType{ 0 };

    /**
     * @brief Enchantment time root Damipoli ID_0
     *
     * Damipoli ID generated at the base of enchantment
     */
    int enchantStartDmyId_0{ -1 };

    /**
     * @brief Damipoli ID_0 at the time of enchantment
     *
     * Damipoli ID generated at the tip of the sword at the time of enchantment.
     * -1 If specified, it will be automatically put out to the point where it
     * is a serial number.
     */
    int enchantEndDmyId_0{ -1 };

    /**
     * @brief Enchantment time root Damipoli ID_1
     *
     * Damipoli ID generated at the base of enchantment
     */
    int enchantStartDmyId_1{ -1 };

    /**
     * @brief Damipoli ID_1 at the time of enchantment
     *
     * Damipoli ID generated at the tip of the sword at the time of enchantment.
     * -1 If specified, it will be automatically put out to the point where it
     * is a serial number.
     */
    int enchantEndDmyId_1{ -1 };

    /**
     * @brief Enchantment time root Damipoli ID_2
     *
     * Damipoli ID generated at the base of enchantment
     */
    int enchantStartDmyId_2{ -1 };

    /**
     * @brief Enchantment time sword tip Damipoli ID_2
     *
     * Damipoli ID generated at the tip of the sword at the time of enchantment.
     * -1 If specified, it will be automatically put out to the point where it
     * is a serial number.
     */
    int enchantEndDmyId_2{ -1 };

    /**
     * @brief Enchantment time root Damipoli ID_3
     *
     * Damipoli ID generated at the base of enchantment
     */
    int enchantStartDmyId_3{ -1 };

    /**
     * @brief Damipoli ID_3 at the time of enchantment
     *
     * Damipoli ID generated at the tip of the sword at the time of enchantment.
     * -1 If specified, it will be automatically put out to the point where it
     * is a serial number.
     */
    int enchantEndDmyId_3{ -1 };

    /**
     * @brief Enchantment time root Damipoli ID_4
     *
     * Damipoli ID generated at the base of enchantment
     */
    int enchantStartDmyId_4{ -1 };

    /**
     * @brief Damipoli ID_4 at the time of enchantment
     *
     * Damipoli ID generated at the tip of the sword at the time of enchantment.
     * -1 If specified, it will be automatically put out to the point where it
     * is a serial number.
     */
    int enchantEndDmyId_4{ -1 };

    /**
     * @brief Enchantment time root Damipoli ID_5
     *
     * Damipoli ID generated at the base of enchantment
     */
    int enchantStartDmyId_5{ -1 };

    /**
     * @brief Damipoli ID_5 at the time of enchantment
     *
     * Damipoli ID generated at the tip of the sword at the time of enchantment.
     * -1 If specified, it will be automatically put out to the point where it
     * is a serial number.
     */
    int enchantEndDmyId_5{ -1 };

    /**
     * @brief Enchantment time root Damipoli ID_6
     *
     * Damipoli ID generated at the base of enchantment
     */
    int enchantStartDmyId_6{ -1 };

    /**
     * @brief Damipoli ID_6 at the time of enchantment
     *
     * Damipoli ID generated at the tip of the sword at the time of enchantment.
     * -1 If specified, it will be automatically put out to the point where it
     * is a serial number.
     */
    int enchantEndDmyId_6{ -1 };

    /**
     * @brief Enchantment time root Damipoli ID_7
     *
     * Damipoli ID generated at the base of enchantment
     */
    int enchantStartDmyId_7{ -1 };

    /**
     * @brief Damipoli ID_7 at the time of enchantment
     *
     * Damipoli ID generated at the tip of the sword at the time of enchantment.
     * -1 If specified, it will be automatically put out to the point where it
     * is a serial number.
     */
    int enchantEndDmyId_7{ -1 };

    /**
     * @brief SfxID offset type
     */
    unsigned char SfxIdOffsetType{ 0 };

    /**
     * @brief Forced specification of phantom parameters
     *
     * Forced overwrite type of phantom parameters
     */
    unsigned char phantomParamOverwriteType{ 0 };

    /**
     * @brief Minimum α value when hiding [%]
     */
    unsigned char camouflageMinAlpha{ 0 };

    /**
     * @brief Water wet effect
     *
     * Generate a wet expression by referring to the wet parameter
     */
    unsigned char wetAspectType{ 0 };

    /**
     * @brief Phantom parameter overwrite ID
     *
     * Forced Id of phantom parameter
     */
    int phantomParamOverwriteId{ 0 };

    /**
     * @brief Material extension parameter ID
     *
     * ID0-99 are GS reservation IDs. If ID100 or later is specified, the
     * material extension parameter is referenced (-1: invalid value).
     */
    int materialParamId{ -1 };

    /**
     * @brief Initial values of material parameters
     *
     * The value at the start of the fade of the material parameter. The target
     * is specified by the material parameter ID. If the material parameter ID
     * is -1, do nothing
     */
    float materialParamInitValue{ 0.f };

    /**
     * @brief Material parameter target value
     *
     * The value at the end of the fade of the material parameter. The target is
     * specified by the material parameter ID. If the material parameter ID is
     * -1, do nothing
     */
    float materialParamTargetValue{ 0.f };

    /**
     * @brief Fade time of material parameter values
     *
     * Fade time for material parameter values. Gradually reach the target value
     * over this time. If the material parameter ID is -1, do nothing
     */
    float materialParamFadeTime{ 0.f };

    /**
     * @brief Foot Decal Material Offset Forced Overwrite ID
     *
     * Forcibly rewrite the floor material ID offset of the foot decal (-1
     * unused)
     */
    short footDecalMaterialOffsetOverwriteId{ -1 };

    unsigned char pad[14];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SP_EFFECT_VFX_PARAM_ST) == 164,
    "SP_EFFECT_VFX_PARAM_ST paramdef size does not match detected size");
