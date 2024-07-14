/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct ASSET_GEOMETORY_PARAM_ST {
    /**
     * @brief Sound bank ID
     *
     * Sound bank ID (-1: no bank, other: bank with specified ID)
     */
    int soundBankId{ -1 };

    /**
     * @brief Destruction sound SEID
     *
     * Destruction sound SEID (9 digits) -1: Generated from assetId
     */
    int soundBreakSEId{ -1 };

    /**
     * @brief Drawing parameter reference ID
     *
     * Drawing parameter reference ID. The reference ID for the part drawing
     * parameter .xlsm.
     */
    int refDrawParamId{ -1 };

    /**
     * @brief Static asset hit build settings
     *
     * Sets the hit build type for static assets. Ignored for dynamic assets.
     */
    signed char hitCreateType{ 0 };

    /**
     * @brief Asset behavior type
     *
     * Dynamic (all asset features available), static (light assets with limited
     * functionality treated as old maps), partially static (partially destroyed
     * assets)
     */
    unsigned char behaviorType{ 1 };

    /**
     * @brief Collision detection type
     *
     * Collision detection type. You can set what the asset will hit.
     */
    unsigned char collisionType{ 0 };

    /**
     * @brief Rain cutoff setting
     *
     * It is a type of rain blocking. You can set the blocking of SFX and wet
     * expression.
     */
    unsigned char rainBlockingType{ 0 };

    /**
     * @brief HP
     *
     * Durability until destruction (-1: Indestructible)
     */
    short hp{ -1 };

    /**
     * @brief Defense power
     *
     * Attack power below this value is no damage
     */
    unsigned short defense{ 0 };

    /**
     * @brief Forced stop time after destruction
     *
     * Time from destruction to forced stop of rigid body (do not force stop at
     * 0)
     */
    float breakStopTime{ 30.f };

    /**
     * @brief SFX ID at the time of destruction
     *
     * SFX ID on destruction (-1: default (810030))
     */
    int breakSfxId{ -1 };

    /**
     * @brief SFX Damipoli ID at the time of destruction
     *
     * SFX generation position at the time of destruction Damipoly ID (-1:
     * placement position)
     */
    int breakSfxCpId{ -1 };

    /**
     * @brief SFX identifier when landing after destruction
     *
     * Object material-dependent SFX identifier that regenerates when first
     * landing after being destroyed (-1: does not occur)
     */
    int breakLandingSfxId{ -1 };

    /**
     * @brief Bomb generation at the time of destruction Action parameter ID
     *
     * Action parameter of [bullet] at the time of destruction (-1: does not
     * occur). Please note that there is an offset specification due to laps.
     * ([GR] SEQ35556)
     */
    int breakBulletBehaviorId{ -1 };

    /**
     * @brief Damipoli ID
     *
     * Location of [bullet] at the time of destruction Damipoli ID (-1:
     * placement position)
     */
    int breakBulletCpId{ -1 };

    /**
     * @brief Hidden debris Wait time (seconds)
     *
     * Hidden debris Waiting time (seconds)
     */
    float FragmentInvisibleWaitTime{ 0.f };

    /**
     * @brief Debris non-display time (seconds)
     *
     * Time to hide debris (seconds)
     */
    float FragmentInvisibleTime{ 0.f };

    /**
     * @brief AI sound ID generated at the time of destruction
     */
    int BreakAiSoundID{ 0 };

    /**
     * @brief At the time of destruction_Item lottery type
     *
     * A type that decides how to obtain items drawn at the time of destruction
     */
    signed char breakItemLotType{ 0 };

    /**
     * @brief Anime destruction ID maximum value
     *
     * What is the animation destruction ID from 0 to what?
     */
    unsigned char animBreakIdMax{ 0 };

    /**
     * @brief Bomb generation attribute damage condition at the time of
     * destruction
     *
     * Generates a bullet if the last damage received when destroying an asset
     * meets the conditions of this setting.
     */
    signed char breakBulletAttributeDamageType{ 0 };

    /**
     * @brief Will it break in a player collision?
     *
     * Broken when the player touches (0: no, 1:)
     */
    bool isBreakByPlayerCollide : 1 { false };

    /**
     * @brief Will it be destroyed by an enemy character collision?
     *
     * Broken when an enemy character touches (0: No, 1: Ru)
     */
    bool isBreakByEnemyCollide : 1 { false };

    /**
     * @brief Will it break if the character gets on it?
     *
     * Will it break if the character gets on (0: it won't break 1: it will
     * break)
     */
    bool isBreak_ByChrRide : 1 { false };

    /**
     * @brief No destruction for initial appearance
     *
     * Broken at the initial appearance of the player (0: ru, 1: no)
     */
    bool isDisableBreakForFirstAppear : 1 { false };

    /**
     * @brief Is it anime destruction?
     *
     * Is it animation destruction (0: physical destruction, 1: animation
     * destruction)
     */
    bool isAnimBreak : 1 { false };

    /**
     * @brief Do you want to shield the damage?
     *
     * Whether to pass the damage to the other side when receiving damage (0:
     * pass, 1: do not pass)
     */
    bool isDamageCover : 1 { false };

    /**
     * @brief Do you play the attack
     *
     * Do you play the attack (0: do not play, 1: play)
     */
    bool isAttackBacklash : 1 { true };

    /**
     * @brief Is it a ladder?
     *
     * Is it a ladder (0: different, 1: yes)
     */
    bool isLadder : 1 { false };

    /**
     * @brief Is it a moving object?
     *
     * Is it a moving object? It is a flag used for branching of movement
     * processing at the time of multi (0: different, 1: yes)
     */
    bool isMoveObj : 1 { false };

    /**
     * @brief Is it treated as a celestial sphere?
     *
     * Processing that treats the celestial sphere (player tracking, etc.) is
     * performed (0: different, 1: yes)
     */
    bool isSkydomeFlag : 1 { false };

    /**
     * @brief Do you want to stop the animation during the poly play?
     *
     * Do you want to stop the animation during the poly play (0: not, 1: do)
     */
    bool isAnimPauseOnRemoPlay : 1 { false };

    /**
     * @brief Will it burn
     *
     * Will it burn (0: not, 1:)
     */
    bool isBurn : 1 { false };

    /**
     * @brief Is there a change during recollection?
     *
     * If this flag is ○, the parameter "At the time of recollection _ ***" will
     * be used for the assets to be collected again in units of placement.
     */
    bool isEnableRepick : 1 { false };

    /**
     * @brief Is it destroyed at the time of collection?
     *
     * If ×, play the animation at the time of collection, if ○, destroy at the
     * time of collection (destroy in all cases including replacement)
     */
    bool isBreakOnPickUp : 1 { false };

    /**
     * @brief Will it be destroyed by a huge enemy collision?
     *
     * Broken when a giant enemy touches (0: No, 1:)
     */
    bool isBreakByHugeenemyCollide : 1 { false };

    /**
     * @brief Pre-destruction navigation mesh flag
     *
     * Navigation mesh flag set from assets before destruction
     */
    unsigned char navimeshFlag{ 0 };

    /**
     * @brief Combustion bullet generation interval (frame)
     *
     * Interval (frame) to generate bullets for spreading fire
     */
    unsigned short burnBulletInterval{ 30 };

    /**
     * @brief Cross update distance (m)
     *
     * Distance from the camera to update havokCloth (0: always update)
     */
    float clothUpdateDist{ 30.f };

    /**
     * @brief Lifetime of runtime generated assets (seconds)
     *
     * Runtime-generated time after creation until disappearance (0: does not
     * disappear)
     */
    float lifeTime_forRuntimeCreate{ 0.f };

    /**
     * @brief SE ID when contacting a player
     *
     * SE ID to play when touched by a local player operated by you (-1: Do not
     * play)
     */
    int contactSeId{ -1 };

    /**
     * @brief At the time of recollection_animation offset
     *
     * When recollecting assets with "Is there a change at the time of
     * recollection?" In units of placement, play the uncollected / collected
     * animation with the anime ID offset by this value.
     */
    int repickAnimIdOffset{ 0 };

    /**
     * @brief Wind coefficient (before destruction)
     */
    float windEffectRate_0{ 0.5f };

    /**
     * @brief Wind coefficient (after destruction)
     */
    float windEffectRate_1{ 0.5f };

    /**
     * @brief Wind effect type (before destruction)
     */
    unsigned char windEffectType_0{ 0 };

    /**
     * @brief Wind effect type (after destruction)
     */
    unsigned char windEffectType_1{ 0 };

    /**
     * @brief Overwrite material ID
     *
     * Asset material ID overwrite setting (-1: Do not overwrite model material
     * ID 0 or more: Material ID overwrite) On the ladder, the material ID is
     * reflected only with this setting
     */
    short overrideMaterialId{ -1 };

    /**
     * @brief Height offset during automatic generation (m)
     *
     * Height offset of how much it floats from where the raycast hits the map
     * when it is automatically generated [m]
     */
    float autoCreateOffsetHeight{ 0.1f };

    /**
     * @brief Burning time (seconds)
     *
     * Burning time (seconds) (continues to burn at 0)
     */
    float burnTime{ 0.f };

    /**
     * @brief Combustion fracture judgment progress
     *
     * Burnup threshold for switching to the ruptured state
     */
    float burnBraekRate{ 0.5f };

    /**
     * @brief Combustion SFXID: 0
     *
     * SFX ID at the time of combustion: 0 (-1: No SFX)
     */
    int burnSfxId{ -1 };

    /**
     * @brief Combustion SFXID: 1
     *
     * SFX ID at the time of combustion: 1 (-1: No SFX)
     */
    int burnSfxId_1{ -1 };

    /**
     * @brief Combustion SFXID: 2
     *
     * SFX ID at the time of combustion: 2 (-1: No SFX)
     */
    int burnSfxId_2{ -1 };

    /**
     * @brief Combustion SFXID: 3
     *
     * SFX ID at the time of combustion: 3 (-1: No SFX)
     */
    int burnSfxId_3{ -1 };

    /**
     * @brief Combustion SFX generation delay Start time (seconds): 0
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMin{ 0.f };

    /**
     * @brief Combustion SFX generation delay Start time (seconds): 1
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMin_1{ 0.f };

    /**
     * @brief Combustion SFX generation delay Start time (seconds): 2
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMin_2{ 0.f };

    /**
     * @brief Combustion SFX generation delay Start time (seconds): 3
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMin_3{ 0.f };

    /**
     * @brief Combustion SFX generation delay End time (seconds): 0
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMax{ 0.f };

    /**
     * @brief Combustion SFX generation delay End time (seconds): 1
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMax_1{ 0.f };

    /**
     * @brief Combustion SFX generation delay End time (seconds): 2
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMax_2{ 0.f };

    /**
     * @brief Combustion SFX generation delay End time (seconds): 3
     *
     * SFX generation delay time during combustion Randomly determined between
     * start and end times
     */
    float burnSfxDelayTimeMax_3{ 0.f };

    /**
     * @brief Combustion bullet generation Behavior parameter: 0
     *
     * Bullet generation behavior parameter at the time of burning: 0 (-1: does
     * not occur)
     */
    int burnBulletBehaviorId{ -1 };

    /**
     * @brief Combustion bullet generation Behavior parameter: 1
     *
     * Bullet generation behavior parameter at the time of burning: 1 (-1: does
     * not occur)
     */
    int burnBulletBehaviorId_1{ -1 };

    /**
     * @brief Combustion bullet generation Behavior parameter: 2
     *
     * Bullet generation behavior parameter at the time of burning: 2 (-1: does
     * not occur)
     */
    int burnBulletBehaviorId_2{ -1 };

    /**
     * @brief Combustion bullet generation Behavior parameters: 3
     *
     * Bullet generation behavior parameter at the time of burning: 3 (-1: does
     * not occur)
     */
    int burnBulletBehaviorId_3{ -1 };

    /**
     * @brief Combustion bullet generation delay time (seconds)
     *
     * Time to delay the generation of bullets for fire spread (seconds)
     */
    float burnBulletDelayTime{ 0.f };

    /**
     * @brief Paint decal target size
     *
     * Paint decal target size 0: Decal disabled (0 to 4096 power of 2 0, 2, 4,
     * 8,… 2048 only valid)
     */
    unsigned short paintDecalTargetTextureSize{ 0 };

    /**
     * @brief Post-destruction navigation mesh flag
     *
     * Navimesh flag set from the destroyed asset
     */
    unsigned char navimeshFlag_after{ 0 };

    /**
     * @brief Drawing when approaching the camera
     *
     * Drawing settings when approaching the camera. [GR] SEQ07529
     */
    signed char camNearBehaviorType{ 0 };

    /**
     * @brief At the time of destruction_item lottery ID_for map
     *
     * Item to be drawn at the time of destruction Lottery ID_for map-1: No
     * lottery
     */
    int breakItemLotParamId{ -1 };

    /**
     * @brief At the time of collection_action button ID
     *
     * Action button ID issued for collection-1: Collection function is disabled
     */
    int pickUpActionButtonParamId{ -1 };

    /**
     * @brief At the time of collection_item lottery ID_for map
     *
     * Item to be drawn at the time of collection For lottery ID_map-1:
     * Collection function is invalid
     */
    int pickUpItemLotParamId{ -1 };

    /**
     * @brief Automatic drawing group_Back side check
     */
    unsigned char autoDrawGroupBackFaceCheck{ 0 };

    /**
     * @brief Auto drawing group_shield
     */
    unsigned char autoDrawGroupDepthWrite{ 0 };

    /**
     * @brief Automatic drawing group_shadow test
     */
    unsigned char autoDrawGroupShadowTest{ 0 };

    /**
     * @brief Debug_allowable ground height check
     *
     * Debug_Allow Ground Height Check See SEQ07876 for details
     */
    bool debug_isHeightCheckEnable{ false };

    /**
     * @brief Underfloor navigation mesh not subject to clipping
     *
     * If it is placed lower than the hit on the floor (ground), set whether to
     * exclude it from the underfloor navigation mesh deletion target Refer to
     * from the tool
     */
    unsigned char hitCarverCancelAreaFlag{ 0 };

    /**
     * @brief Navigation mesh join control
     *
     * The set assets are excluded from the target of joining hit parts when
     * building the Nav Mesh.
     */
    unsigned char assetNavimeshNoCombine{ 0 };

    /**
     * @brief Navimesh flag application destination
     *
     * Where to apply the navigation mesh flag set from the asset
     */
    unsigned char navimeshFlagApply{ 0 };

    /**
     * @brief Post-destruction navigation mesh flag application destination
     *
     * Where to apply the navigation mesh flag set from the destroyed asset
     */
    unsigned char navimeshFlagApply_after{ 0 };

    /**
     * @brief Auto-draw group_passing pixels
     *
     * Automatic drawing group_Pass pixel (set to 0.0-1.0 to enlarge at the time
     * of shooting)
     */
    float autoDrawGroupPassPixelNum{ -1.f };

    /**
     * @brief At the time of collection_replacement flag condition
     *
     * When this event flag is ON, use the ID of the subsequent replacement 0:
     * Do not always replace
     */
    unsigned int pickUpReplacementEventFlag{ 0 };

    /**
     * @brief At the time of collection_replacement animation offset
     *
     * When "Collecting_replacement flag condition" is ON, play the uncollected
     * / collected animation with the animation ID offset by this value.
     */
    int pickUpReplacementAnimIdOffset{ 0 };

    /**
     * @brief At the time of collection_replacement action button ID
     *
     * This action button ID is used when "Collecting_replacement flag
     * condition" is ON.
     */
    int pickUpReplacementActionButtonParamId{ -1 };

    /**
     * @brief At the time of collection_replacement item lottery ID_for map
     *
     * When "Collecting_replacement flag condition" is ON, this item lottery
     * ID_map is used.
     */
    int pickUpReplacementItemLotParamId{ -1 };

    /**
     * @brief Behavior when a bullet crawling on the ground lands
     *
     * When a bullet of the follow-up type "Crawling on the ground even if it
     * collides" collides with an asset, does it bend in the direction along the
     * landing point? Behavior
     */
    unsigned char slidingBulletHitType{ 0 };

    /**
     * @brief Will it break due to bush damage?
     *
     * ◯ Assets can only be damaged by "damage to bushes" ◯ and "object attack
     * power> defense power" attacks [GR] SEQ20617
     */
    bool isBushesForDamage{ false };

    /**
     * @brief Bullet penetration type
     *
     * Will the bullet hit and land? Which bullet para to refer to when
     * deciding? The value that determines.
     */
    unsigned char penetrationBulletType{ 0 };

    unsigned char Reserve_3[1];

    unsigned char Reserve_4[4];

    /**
     * @brief Destruction sound Damipoli ID
     *
     * Damipoli ID of the place where the destruction sound is played (-1:
     * Placement position)
     */
    int soundBreakSECpId{ -1 };

    /**
     * @brief Debug_Allowable ground height_Minimum [m]
     *
     * Debug_Allowable ground height_Minimum [m] See SEQ07876 for details. Must
     * be smaller than maximum
     */
    float debug_HeightCheckCapacityMin{ -99.f };

    /**
     * @brief Debug_Allowable ground height_Max [m]
     *
     * Debug_Allowable ground height_Max [m] See SEQ07876 for details. Must be
     * larger than minimum
     */
    float debug_HeightCheckCapacityMax{ 99.f };

    /**
     * @brief At the time of recollection_action button ID
     *
     * This action button ID is used when recollecting assets whose "Is there a
     * change at the time of recollection?"
     */
    int repickActionButtonParamId{ -1 };

    /**
     * @brief At the time of recollection_item lottery ID_for map
     *
     * Assets with "Is there a change at the time of recollection?" Are used for
     * this item lottery ID_map when recollecting in units of placement.
     */
    int repickItemLotParamId{ -1 };

    /**
     * @brief At the time of recollection_replacement animation offset
     *
     * Use this parameter instead of "At the time of collection_replacement
     * animation offset" at the time of recollection for assets whose "Is there
     * a change at the time of recollection?"
     */
    int repickReplacementAnimIdOffset{ 0 };

    /**
     * @brief At the time of recollection_replacement action button ID
     *
     * Use this parameter instead of "At the time of collection_replacement
     * action button ID" when recollecting assets whose "Is there a change at
     * the time of recollection?"
     */
    int repickReplacementActionButtonParamId{ -1 };

    /**
     * @brief At the time of recollection_replacement item lottery ID_for map
     *
     * Use this parameter instead of "At the time of collection_Replacement item
     * lottery ID_For map" when recollecting assets whose "Is there a change at
     * the time of recollection?"
     */
    int repickReplacementItemLotParamId{ -1 };

    /**
     * @brief Navimesh terrain judgment invalidation
     *
     * Asset with this set does not create Carver
     */
    bool noGenerateCarver{ false };

    /**
     * @brief Do not hit huge enemies after destruction
     *
     * Overwrite the hit filter after destruction with a collision detection
     * type that does not hit a huge enemy (static ○ dynamic ○)
     */
    bool noHitHugeAfterBreak{ false };

    /**
     * @brief Do you want to synchronize the destruction
     *
     * If this is x, do not perform initial synchronization, map activation
     * synchronization, asset destruction synchronization during in-game, and
     * the attack of the remote PC will not hit.
     */
    bool isEnabledBreakSync : 1 { true };

    /**
     * @brief When recollecting _ hidden
     *
     * Hide assets if you can't get them by lottery when recollecting by
     * placement unit
     */
    bool isHiddenOnRepick : 1 { false };

    /**
     * @brief Is it valid only during multi (dynamic only)?
     *
     * Is it valid only during multi? Only valid for dynamic assets. (Details:
     * SEQ15087)
     */
    bool isCreateMultiPlayOnly : 1 { false };

    /**
     * @brief Does not generate bullet landing SFX
     *
     * In the case of ○, the landing SFX does not occur regardless of whether
     * the hit bullet penetrates or lands.
     */
    bool isDisableBulletHitSfx : 1 { false };

    /**
     * @brief Is it possible to create a sign / blood character (before
     * destroying the asset)?
     *
     * Set whether sign / blood character can be created when on the asset
     * (before destruction) 〇: Possible, ×: Impossible (Details: SEQ122568)
     */
    bool isEnableSignPreBreak : 1 { true };

    /**
     * @brief Is it possible to create a sign / blood character (after
     * destroying the asset)?
     *
     * Set whether sign / blood character can be created when on the asset
     * (after destruction) 〇: Possible, ×: Impossible (Details: SEQ122568)
     */
    bool isEnableSignPostBreak : 1 { true };

    unsigned char Reserve_1 : 2;

    /**
     * @brief Summoning prohibited / intrusion prohibited area generation
     * (Damipoli)
     */
    unsigned char generateMultiForbiddenRegion{ 0 };

    /**
     * @brief Resident SEID0
     *
     * Sound ID 0 (9 digits) to be resident in the asset (-1: No resident)
     */
    int residentSeId0{ -1 };

    /**
     * @brief Resident SEID1
     *
     * Sound ID 1 (9 digits) to be resident in the asset (-1: No resident)
     */
    int residentSeId1{ -1 };

    /**
     * @brief Resident SEID2
     *
     * Sound ID 2 (9 digits) to be resident in the asset (-1: No resident)
     */
    int residentSeId2{ -1 };

    /**
     * @brief Resident SEID3
     *
     * Sound ID 3 (9 digits) to be resident in the asset (-1: not resident)
     */
    int residentSeId3{ -1 };

    /**
     * @brief Resident SE Damipoli ID0
     *
     * Damipoli ID0 to attach resident sound (-1: placement position)
     */
    short residentSeDmypolyId0{ -1 };

    /**
     * @brief Resident SE Damipoli ID1
     *
     * Damipoli ID1 to attach resident sound (-1: placement position)
     */
    short residentSeDmypolyId1{ -1 };

    /**
     * @brief Resident SE Damipoli ID2
     *
     * Damipoli ID2 to attach resident sound (-1: placement position)
     */
    short residentSeDmypolyId2{ -1 };

    /**
     * @brief Resident SE Damipoli ID3
     *
     * Damipoli ID3 to attach resident sound (-1: placement position)
     */
    short residentSeDmypolyId3{ -1 };

    /**
     * @brief Open_XB1 exclusion rate
     *
     * Open_XB1 exclusion rate [GR] SEQ25310
     */
    unsigned char excludeActivateRatio_Xboxone_Grid{ 0 };

    /**
     * @brief Legacy_XB1 exclusion rate
     *
     * Legacy_XB1 exclusion rate [GR] SEQ25310
     */
    unsigned char excludeActivateRatio_Xboxone_Legacy{ 0 };

    /**
     * @brief Open_PS4 exclusion rate
     *
     * Open_PS4 exclusion rate [GR] SEQ25310
     */
    unsigned char excludeActivateRatio_PS4_Grid{ 0 };

    /**
     * @brief Legacy_PS4 exclusion rate
     *
     * Legacy_PS4 exclusion rate [GR] SEQ25310
     */
    unsigned char excludeActivateRatio_PS4_Legacy{ 0 };

    unsigned char unknown_0x120{ 0 };

    unsigned char unknown_0x121{ 0 };

    unsigned char unknown_0x122{ 0 };

    unsigned char unknown_0x123{ 0 };

    unsigned char unknown_0x124{ 0 };

    unsigned char unknown_0x125{ 0 };

    unsigned char Reserve_0[26];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ASSET_GEOMETORY_PARAM_ST) == 320,
    "ASSET_GEOMETORY_PARAM_ST paramdef size does not match detected size");
