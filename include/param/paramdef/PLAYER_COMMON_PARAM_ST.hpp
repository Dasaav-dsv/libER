/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct PLAYER_COMMON_PARAM_ST {
    /**
     * @brief Player's automatic foot effect SFX identifier [3 digits]
     *
     * The identifier used for the SFX ID of the automatic foot effect. It
     * corresponds to ZZZ of XYYZZZ.
     */
    int playerFootEffect_bySFX{ 0 };

    /**
     * @brief Player hidden fade time during precision shooting
     *
     * The fade time when hiding the player during precision shooting. The unit
     * is seconds
     */
    float snipeModeDrawAlpha_FadeTime{ 0.f };

    /**
     * @brief Player toughness recovery time correction value
     *
     * A correction value used to calculate the player's toughness recovery
     * time.
     */
    float toughnessRecoverCorrection{ 0.f };

    /**
     * @brief Magic memory slot initial value
     */
    unsigned char baseMagicSlotSize{ 0 };

    /**
     * @brief Talisman equipment slot initial value
     */
    unsigned char baseAccSlotNum{ 0 };

    unsigned char reserved02[2];

    /**
     * @brief Drop item acquisition animation ID
     *
     * Animation ID when picking up a drop item
     */
    int animeID_DropItemPick{ 0 };

    /**
     * @brief Player resistance value recovery amount_sleep [point / s]
     */
    float resistRecoverPoint_Sleep_Player{ 0.f };

    /**
     * @brief Flare overwrite induction performance [deg / s]
     *
     * Flare overwrite guidance performance [deg / s] (-1: no overwrite)
     */
    int flareOverrideHomingAngle{ -1 };

    /**
     * @brief Flare overwrite guidance stop distance [m]
     *
     * Flare overwrite guidance stop distance [m] (-1: no overwrite)
     */
    float flareOverrideHomingStopRange{ -1.f };

    /**
     * @brief Animation ID when acquiring Nemuri item
     */
    int animeID_SleepCollectorItemPick{ 0 };

    /**
     * @brief Weapon attribute ban event flag base ID
     */
    unsigned int unlockEventFlagBaseId_forWepAttr{ 0 };

    /**
     * @brief Special effect ID for activating large runes via the system
     *
     * Special effect Id to call when a large rune is activated from the system
     */
    int systemEnchant_BigRune{ 0 };

    /**
     * @brief Insufficient status Basic attack power reduction
     */
    float lowStatus_AtkPowDown{ 0.f };

    /**
     * @brief Insufficient status Stamina consumption ratio
     */
    float lowStatus_ConsumeStaminaRate{ 0.f };

    /**
     * @brief Insufficient status Playing attack power
     */
    short lowStatus_AtkGuardBreak{ 0 };

    /**
     * @brief Shield status correction Judgment status maximum value
     *
     * Maximum status value to increase performance used when calculating the
     * status correction value of shield performance
     */
    short guardStatusCorrect_MaxStatusVal{ 0 };

    /**
     * @brief Weapon attribute ban event flag number of steps
     *
     * How much space is left for each weapon attribute ID from the base ID.
     * Weapon attribute ban event flag ID = << Weapon attribute ban event flag
     * base ID >> + Weapon attribute ID x << Weapon attribute ban event flag
     * number of steps >>
     */
    unsigned short unlockEventFlagStepNum_forWepAttr{ 1 };

    /**
     * @brief Causal Retribution_Number of Damages Before Counterattack
     */
    unsigned short retributionMagic_damageCountNum{ 0 };

    /**
     * @brief Causal response_Number of damages until counterattack Duration [s]
     */
    unsigned short retributionMagic_damageCountRemainTime{ 0 };

    /**
     * @brief Causal Retribution_Counterattack Magic Damipoli ID
     */
    unsigned short retributionMagic_burstDmypolyId{ 0 };

    /**
     * @brief Causal Retribution_Counterattack Magic Param ID
     */
    int retributionMagic_burstMagicParamId{ -1 };

    /**
     * @brief Riding precision shooting camera offset height
     */
    float chrAimCam_rideOffsetHeight{ 0.f };

    unsigned char reserved23[4];

    /**
     * @brief Quiver adsorption Damipoly ID
     */
    int arrowCaseWepBindDmypolyId{ 0 };

    /**
     * @brief Bolt tube adsorption Damipoly ID
     *
     * Bolt cylinder adsorption Damipoly ID (However, if the bolt cylinder is
     * used alone, the quiver Damipoly ID is used)
     */
    int boltPouchWepBindDmypolyId{ 0 };

    /**
     * @brief Multi-time client bottle correction magnification
     *
     * Multi-time client bottle correction magnification (0.5 specified to halve
     * the number of possessions)
     */
    float estusFlaskAllocateRate{ 0.f };

    unsigned char reserved38[2];

    /**
     * @brief Angle at which a kick can be taken when viewed from the front of
     * the player
     */
    unsigned char kickAcceptanceDeg{ 0 };

    /**
     * @brief Analog Weight Ratio for NPC Players_Lightweight
     *
     * Analog weight ratio for NPC players [%]. lightweight.
     */
    unsigned char npcPlayerAnalogWeightRate_Light{ 0 };

    /**
     * @brief Analog Weight Ratio for NPC Players_Medium Weight
     *
     * Analog weight ratio for NPC players [%]. Medium weight.
     */
    unsigned char npcPlayerAnalogWeightRate_Normal{ 0 };

    /**
     * @brief Analog Weight Ratio for NPC Players_Weight
     *
     * Analog weight ratio for NPC players [%]. weight.
     */
    unsigned char npcPlayerAnalogWeightRate_Heavy{ 0 };

    /**
     * @brief Analog Weight Ratio for NPC Players_Overweight
     *
     * Analog weight ratio for NPC players [%]. Overweight.
     */
    unsigned char npcPlayerAnalogWeightRate_WeightOver{ 0 };

    /**
     * @brief Analog Weight Ratio for NPC Players_Ultra Lightweight
     *
     * Analog weight ratio for NPC players [%]. Super lightweight.
     */
    unsigned char npcPlayerAnalogWeightRate_SuperLight{ 0 };

    unsigned char reserved45[4];

    /**
     * @brief Orbit correction special effect standard ID
     *
     * Criteria ID for special effects applied for lap correction
     */
    int clearCountCorrectBaseSpEffectId{ 0 };

    /**
     * @brief Arrow, bolt model Id offset
     *
     * Offset added to the model ID when equipped in slot 1 when displaying the
     * arrow and bolt models. (Model Id + offset value)
     */
    int arrowBoltModelIdOffset{ 0 };

    /**
     * @brief Threshold for the remaining number of model masks based on the
     * remaining amount of arrows and bolts _1 step [%]
     *
     * When displaying the arrow and bolt models, the one-step judgment value
     * [%] of the threshold value when applying the display mask by the number.
     * (If it is more than this value, it is displayed in one step)
     */
    signed char arrowBoltRemainingNumModelMaskThreshold1{ 0 };

    /**
     * @brief Threshold for the remaining number of model masks based on the
     * remaining amount of arrows and bolts _2 steps [%]
     *
     * Two-step judgment value [%] of the threshold value when applying a
     * display mask based on the number of arrows and bolt models. (If it is
     * more than this value, it is displayed in 2 steps)
     */
    signed char arrowBoltRemainingNumModelMaskThreshold2{ 0 };

    unsigned char reserved27[2];

    /**
     * @brief Player resistance recovery amount_poison [point / s]
     */
    float resistRecoverPoint_Poision_Player{ 0.f };

    /**
     * @brief Player resistance value recovery amount_plague [point / s]
     */
    float resistRecoverPoint_Desease_Player{ 0.f };

    /**
     * @brief Player resistance recovery amount_bleeding [point / s]
     */
    float resistRecoverPoint_Blood_Player{ 0.f };

    /**
     * @brief Player resistance recovery amount_curse [point / s]
     */
    float resistRecoverPoint_Curse_Player{ 0.f };

    /**
     * @brief Player resistance value recovery amount_cold air [point / s]
     */
    float resistRecoverPoint_Freeze_Player{ 0.f };

    /**
     * @brief Enemy resistance recovery amount_poison [point / s]
     */
    float resistRecoverPoint_Poision_Enemy{ 0.f };

    /**
     * @brief Enemy resistance value recovery amount_plague [point / s]
     */
    float resistRecoverPoint_Desease_Enemy{ 0.f };

    /**
     * @brief Enemy resistance recovery amount_bleeding [point / s]
     */
    float resistRecoverPoint_Blood_Enemy{ 0.f };

    /**
     * @brief Enemy resistance recovery amount_curse [point / s]
     */
    float resistRecoverPoint_Curse_Enemy{ 0.f };

    /**
     * @brief Enemy resistance value recovery amount_cold air [point / s]
     */
    float resistRecoverPoint_Freeze_Enemy{ 0.f };

    /**
     * @brief Left hand two-handed request button long press time [s]
     *
     * Button input time when holding both left hand
     */
    float requestTimeLeftBothHand{ 0.f };

    /**
     * @brief Player resistance value recovery amount_madness [point / s]
     */
    float resistRecoverPoint_Madness_Player{ 0.f };

    /**
     * @brief Material Item acquisition animation ID
     *
     * Animation ID when picking up a material item
     */
    int animeID_MaterialItemPick{ 0 };

    /**
     * @brief Yellow Cloth HP Est Bottle Correction Magnification
     */
    float hpEstusFlaskAllocateRateForYellowMonk{ 0.f };

    /**
     * @brief Yellow Cloth HP Est Bottle Offset
     */
    int hpEstusFlaskAllocateOffsetForYellowMonk{ 0 };

    /**
     * @brief Yellow Cloth MP Est Bottle Correction Magnification
     */
    float mpEstusFlaskAllocateRateForYellowMonk{ 0.f };

    /**
     * @brief Yellow Cloth MP Est Bottle Offset
     */
    int mpEstusFlaskAllocateOffsetForYellowMonk{ 0 };

    /**
     * @brief Enemy resistance value recovery amount_sleep [point / s]
     */
    float resistRecoverPoint_Sleep_Enemy{ 0.f };

    /**
     * @brief Enemy resistance value recovery amount_madness [point / s]
     */
    float resistRecoverPoint_Madness_Enemy{ 0.f };

    /**
     * @brief Abnormal condition_immediate death_immediate death Item ID
     */
    int resistCurseItemId{ -1 };

    /**
     * @brief Abnormal condition_immediate death_maximum number of instant death
     * items
     */
    unsigned char resistCurseItemMaxNum{ 0 };

    unsigned char reserved_123[3];

    /**
     * @brief Abnormal condition_Instant death_Instant death Item possession
     * Special effect base ID
     */
    int resistCurseItemSpEffectBaseId{ -1 };

    /**
     * @brief Abnormal condition_immediate death_immediate death item lottery
     * ID_for map
     */
    int resistCurseItemLotParamId_map{ -1 };

    int unknown_0xcc{ 0 };

    int unknown_0xd0{ 0 };

    int unknown_0xd4{ 0 };

    int unknown_0xd8{ 0 };

    int unknown_0xdc{ 0 };

    int unknown_0xe0{ 0 };

    unsigned char reserved41[28];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::PLAYER_COMMON_PARAM_ST) == 256,
    "PLAYER_COMMON_PARAM_ST paramdef size does not match detected size");
