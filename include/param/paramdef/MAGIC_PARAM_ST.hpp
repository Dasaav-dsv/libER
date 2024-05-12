/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MAGIC_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Yes / No Dialog Message ID
     *
     * Message ID of Yes / No dialog issued when using magic
     */
    int yesNoDialogMessageId{ 0 };

    /**
     * @brief Special effect ID that is out of usage restrictions
     *
     * Usage restrictions can be ignored when the specified special effect ID is
     * activated
     */
    int limitCancelSpEffectId{ -1 };

    /**
     * @brief SortID
     *
     * Sort ID (-1: Do not collect)
     */
    short sortId{ 0 };

    /**
     * @brief Equipment conditions [luck]
     *
     * Can't be equipped without more PC luck
     */
    unsigned char requirementLuck{ 0 };

    /**
     * @brief AI notification type
     *
     * AI interrupt occurs in act ("AI notification when magic is activated")
     */
    unsigned char aiNotifyType{ 0 };

    /**
     * @brief MP consumption [normal]
     *
     * MP consumption
     */
    short mp{ 0 };

    /**
     * @brief Consumed stamina [normal]
     *
     * Consumption stamina
     */
    short stamina{ 0 };

    /**
     * @brief Icon ID
     *
     * Specify icon> For menu
     */
    short iconId{ 0 };

    /**
     * @brief Action ID
     *
     * Set the action ID
     */
    short behaviorId{ 0 };

    /**
     * @brief Required item ID
     *
     * Item ID required for purchase
     */
    short mtrlItemId{ -1 };

    /**
     * @brief Magic ID to replace
     *
     * ID to be replaced when the state change matches (-1: invalid)
     */
    short replaceMagicId{ -1 };

    /**
     * @brief Maximum number
     *
     * Number per piece (-1: infinity)
     */
    short maxQuantity{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory1{ 0 };

    /**
     * @brief Skill over start value
     */
    unsigned char overDexterity{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory2{ 0 };

    /**
     * @brief Required slot
     *
     * Number of slots required for equipment> For menu
     */
    unsigned char slotLength{ 0 };

    /**
     * @brief Equipment conditions [Intelligence]
     *
     * Can't be equipped without more PC intelligence
     */
    unsigned char requirementIntellect{ 0 };

    /**
     * @brief Equipment conditions [reason]
     *
     * It cannot be equipped without the power of the PC any more.
     */
    unsigned char requirementFaith{ 0 };

    /**
     * @brief Analog minimum workmanship
     *
     * Motion cancel analog: Minimum skill value
     */
    unsigned char analogDexterityMin{ 0 };

    /**
     * @brief Maximum analog workmanship
     *
     * Motion cancel analog: Maximum skill value
     */
    unsigned char analogDexterityMax{ 0 };

    /**
     * @brief category
     *
     * Used for sorting> For menu
     */
    unsigned char ezStateBehaviorType{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory3{ 0 };

    /**
     * @brief Special effects category
     *
     * Since there are effects (enchantment weapons, etc.) whose parameters
     fluctuate depending on skills, magic, items, etc., set each action so that
     the determined effect can correspond to the effect such as "power up only
     weapon attack". Set "None" for items that do not need to be set, such as
     varistor.

    */
    unsigned char spEffectCategory{ 0 };

    /**
     * @brief Motion category
     *
     * Specify motion> For EzState
     */
    unsigned char refType{ 0 };

    /**
     * @brief Menu type at the time of use
     *
     * Menu type to be displayed when using magic
     */
    unsigned char opmeMenuType{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory4{ 0 };

    /**
     * @brief Which normal is it?
     *
     * Specify the state change that needs to replace the magic ID
     */
    unsigned short hasSpEffectType{ 0 };

    /**
     * @brief Replacement category
     *
     * Additional conditions when replacing the magic ID
     */
    unsigned char replaceCategory{ 0 };

    /**
     * @brief Restrictions on use by special effects category
     *
     * Specified to control availability by special effects
     */
    unsigned char useLimitCategory{ 0 };

    /**
     * @brief Pledge 0
     */
    bool vowType0 : 1 { false };

    /**
     * @brief Pledge 1
     */
    bool vowType1 : 1 { false };

    /**
     * @brief Pledge 2
     */
    bool vowType2 : 1 { false };

    /**
     * @brief Pledge 3
     */
    bool vowType3 : 1 { false };

    /**
     * @brief Pledge 4
     */
    bool vowType4 : 1 { false };

    /**
     * @brief Pledge 5
     */
    bool vowType5 : 1 { false };

    /**
     * @brief Pledge 6
     */
    bool vowType6 : 1 { false };

    /**
     * @brief Pledge 7
     */
    bool vowType7 : 1 { false };

    /**
     * @brief Can it be used in multi?
     *
     * Can it be used in multi? Can be used for both single and multi
     */
    bool enable_multi : 1 { false };

    /**
     * @brief Is it only for multi?
     *
     * Is it only for multi? It cannot be used when it is a single. It can be
     * used when it is multi.
     */
    bool enable_multi_only : 1 { false };

    /**
     * @brief Is it an enchantment?
     *
     * Is it magic to enchant?
     */
    bool isEnchant : 1 { false };

    /**
     * @brief Is it a shield enchantment?
     *
     * Is it magic to enchant guards and shields?
     */
    bool isShieldEnchant : 1 { false };

    /**
     * @brief Can be used alive
     *
     * Can surviving characters be used?
     */
    bool enable_live : 1 { false };

    /**
     * @brief Gray available
     *
     * Can gray characters be used?
     */
    bool enable_gray : 1 { false };

    /**
     * @brief White can be used
     *
     * Can white ghost characters be used?
     */
    bool enable_white : 1 { false };

    /**
     * @brief Black can be used
     *
     * Can black ghost characters be used?
     */
    bool enable_black : 1 { false };

    /**
     * @brief Is it unavailable offline?
     */
    bool disableOffline : 1 { false };

    /**
     * @brief Do you deliver resonance magic?
     */
    bool castResonanceMagic : 1 { false };

    /**
     * @brief Is the armor SA damage multiplier valid even at the initial value?
     *
     * Whether the toughness calculation is performed even if the armor SA is
     * the initial value. Check the toughness specification .xlsx for details
     */
    bool isValidTough_ProtSADmg : 1 { false };

    /**
     * @brief Is it warp magic?
     *
     * Is it magic to warp? Magic with a check mark here is prohibited by the
     * special effect "Warp Prohibition".
     */
    bool isWarpMagic : 1 { false };

    /**
     * @brief Can it be used while riding?
     */
    bool enableRiding : 1 { false };

    /**
     * @brief Is it prohibited to use while not riding?
     */
    bool disableRiding : 1 { false };

    /**
     * @brief Can it be used in an attack-prohibited area?
     */
    bool isUseNoAttackRegion : 1 { false };

    unsigned char pad_1 : 1;

    /**
     * @brief Pledge 8
     */
    bool vowType8 : 1 { false };

    /**
     * @brief Pledge 9
     */
    bool vowType9 : 1 { false };

    /**
     * @brief Pledge 10
     */
    bool vowType10 : 1 { false };

    /**
     * @brief Pledge 11
     */
    bool vowType11 : 1 { false };

    /**
     * @brief Pledge 12
     */
    bool vowType12 : 1 { false };

    /**
     * @brief Pledge 13
     */
    bool vowType13 : 1 { false };

    /**
     * @brief Pledge 14
     */
    bool vowType14 : 1 { false };

    /**
     * @brief Pledge 15
     */
    bool vowType15 : 1 { false };

    /**
     * @brief Chanting SFXID
     *
     * SFXID during magical chanting
     */
    int castSfxId{ -1 };

    /**
     * @brief Activate SFXID
     *
     * SFX ID when magic is activated
     */
    int fireSfxId{ -1 };

    /**
     * @brief Effect SFXID
     *
     * SFXID during magic effect
     */
    int effectSfxId{ -1 };

    /**
     * @brief Toughness correction factor
     *
     * It is a magnification that corrects the basic value of toughness.
     */
    float toughnessCorrectRate{ 0.f };

    /**
     * @brief Replacement status type
     */
    unsigned char ReplacementStatusType{ 0 };

    /**
     * @brief Replacement status value 1
     */
    signed char ReplacementStatus1{ -1 };

    /**
     * @brief Replacement status value 2
     */
    signed char ReplacementStatus2{ -1 };

    /**
     * @brief Replacement status value 3
     */
    signed char ReplacementStatus3{ -1 };

    /**
     * @brief Replacement status value 4
     */
    signed char ReplacementStatus4{ -1 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory5{ 0 };

    /**
     * @brief Consume SA [Normal / Reservoir]
     *
     * SA consumption [normal / reservoir]
     */
    short consumeSA{ 0 };

    /**
     * @brief Replacement ID1
     */
    int ReplacementMagic1{ -1 };

    /**
     * @brief Replacement ID2
     */
    int ReplacementMagic2{ -1 };

    /**
     * @brief Replacement ID3
     */
    int ReplacementMagic3{ -1 };

    /**
     * @brief Replacement ID 4
     */
    int ReplacementMagic4{ -1 };

    /**
     * @brief MP consumption [reservoir]
     */
    short mp_charge{ 0 };

    /**
     * @brief Consumption stamina [reservoir]
     */
    short stamina_charge{ 0 };

    /**
     * @brief Creation limit group Id
     *
     * If it is 0, it is unused. Check the number of bullets created for the
     * specified group Id, and if the upper limit is reached, you will not be
     * able to use magic.
     */
    unsigned char createLimitGroupId{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory6{ 0 };

    /**
     * @brief Subcategory 1
     */
    unsigned char subCategory1{ 0 };

    /**
     * @brief Subcategory 2
     */
    unsigned char subCategory2{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory7{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory8{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory9{ 0 };

    /**
     * @brief ID category
     *
     * Call ID category [Attack, Projectile, Special Effects]
     */
    unsigned char refCategory10{ 0 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId1{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId2{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId3{ -1 };

    /**
     * @brief AI usage judgment ID
     */
    int aiUseJudgeId{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId4{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId5{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId6{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId7{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId8{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId9{ -1 };

    /**
     * @brief Call ID
     *
     * ID called from magic
     */
    int refId10{ -1 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType1{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType2{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType3{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType4{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType5{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType6{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType7{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType8{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType9{ 0 };

    /**
     * @brief Consumption type
     */
    unsigned char consumeType10{ 0 };

    /**
     * @brief MP consumption for menu supplement display
     */
    short consumeLoopMP_forMenu{ -1 };

    unsigned char pad[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MAGIC_PARAM_ST) == 168,
    "MAGIC_PARAM_ST paramdef size does not match detected size");
