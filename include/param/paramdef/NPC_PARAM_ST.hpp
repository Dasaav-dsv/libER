/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct NPC_PARAM_ST {
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
     * @brief Behavior variation ID
     *
     * Variation ID used when calculating the action ID.
     */
    int behaviorVariationId{ 0 };

    /**
     * @brief Poison resistance correction rule ID
     *
     * When the abnormal condition is activated, the maximum value is
     * temporarily changed by using the set value of the abnormal condition
     * resistance correction parameter.
     */
    int resistCorrectId_poison{ -1 };

    /**
     * @brief NPC name ID
     *
     * NPC Name Message Parameter ID
     */
    int nameId{ -1 };

    /**
     * @brief Turning speed [deg / sec]
     *
     * Rotational speed [degrees / second] that can turn in 1 second.
     */
    float turnVellocity{ 0.f };

    /**
     * @brief Height per map [m]
     *
     * The height of the capsule per character.
     */
    float hitHeight{ 0.f };

    /**
     * @brief Radius per map [m]
     *
     * Radius of capsule per character.
     */
    float hitRadius{ 0.f };

    /**
     * @brief Weight [kg]
     *
     * weight.
     */
    unsigned int weight{ 0 };

    /**
     * @brief Display position Y offset [m]
     *
     * Offset of the model display position in the Y (height) direction. It can
     * be floated from the hit position.
     */
    float hitYOffset{ 0.f };

    /**
     * @brief HP
     *
     * Death grace.
     */
    unsigned int hp{ 0 };

    /**
     * @brief MP
     *
     * Magic usage.
     */
    unsigned int mp{ 0 };

    /**
     * @brief Seoul
     *
     * The amount of soul that a character can get at the time of death.
     */
    unsigned int getSoul{ 0 };

    /**
     * @brief Item lottery ID_for enemies
     *
     * Specify the lottery ID_for enemies of the item to be acquired at the time
     * of death. Please set only one of them.
     */
    int itemLotId_enemy{ -1 };

    /**
     * @brief Item lottery ID_for map
     *
     * Specify for the lottery ID_map of the item to be acquired at the time of
     * death. Please set only one of them.
     */
    int itemLotId_map{ -1 };

    /**
     * @brief FootIK Ankle limit angle_roll
     *
     * FootIK Ankle roll limit angle (-1: no limit)
     */
    float maxAnkleRollAngle{ -1.f };

    /**
     * @brief Per group and used navigation mesh
     *
     * Set the hit judgment with other characters (If you hit the ragdoll, other
     * characters will hit the ragdoll)
     */
    unsigned char chrHitGroupAndNavimesh{ 0 };

    /**
     * @brief NPC face image ID
     *
     * NPC face image ID (0: invalid value (default)). Specify the ID of the
     * face image to be displayed in the "Sign browsing menu", "Kick menu", etc.
     * If it is an invalid value, the dress-up model is displayed.
     */
    unsigned char faceIconId{ 0 };

    /**
     * @brief Deactivate distance setting [m]
     *
     * Distance at which the character is deactivated (valid only for open
     * placement characters)
     */
    short deactivateDist{ -1 };

    /**
     * @brief Character appearance condition Para
     *
     * Character appearance condition parameter ID
     */
    unsigned int chrActivateConditionParamId{ 0 };

    /**
     * @brief FootIK Appearance up / down limit
     */
    float footIkErrorHeightLimit{ 0.f };

    /**
     * @brief Human nature lottery ID
     *
     * Specify the lottery ID of human nature to be acquired at the time of
     * death
     */
    int humanityLotId{ -1 };

    /**
     * @brief Resident special effect 0
     */
    int spEffectID0{ -1 };

    /**
     * @brief Resident special effect 1
     */
    int spEffectID1{ -1 };

    /**
     * @brief Resident special effect 2
     */
    int spEffectID2{ -1 };

    /**
     * @brief Resident special effect 3
     */
    int spEffectID3{ -1 };

    /**
     * @brief Resident special effect 4
     */
    int spEffectID4{ -1 };

    /**
     * @brief Resident special effect 5
     */
    int spEffectID5{ -1 };

    /**
     * @brief Resident special effect 6
     */
    int spEffectID6{ -1 };

    /**
     * @brief Resident special effect 7
     */
    int spEffectID7{ -1 };

    /**
     * @brief Special effect ID for lap bonus
     */
    int GameClearSpEffectID{ -1 };

    /**
     * @brief Physical attack cut rate [%]
     *
     * Set the damage cut rate when guarding for each attack
     */
    float physGuardCutRate{ 0.f };

    /**
     * @brief Magic attack cut rate [%]
     *
     * If it is not a guard attack, enter 0
     */
    float magGuardCutRate{ 0.f };

    /**
     * @brief Flame attack power cut rate [%]
     *
     * How much to cut the fire attack?
     */
    float fireGuardCutRate{ 0.f };

    /**
     * @brief Electric shock attack power cut rate [%]
     *
     * How much to cut the electric shock attack?
     */
    float thunGuardCutRate{ 0.f };

    /**
     * @brief Anime ID offset 1
     *
     * All animations will be played with IDs shifted by this number. If not,
     * the original anime ID is referenced.
     */
    int animIdOffset{ 0 };

    /**
     * @brief Gaze point of Rock Damipoli 0
     *
     * Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1:
     * Invalid)
     */
    short lockGazePoint0{ -1 };

    /**
     * @brief Gaze point of Rock Damipoli 1
     *
     * Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1:
     * Invalid)
     */
    short lockGazePoint1{ -1 };

    /**
     * @brief Gaze point of Rock Damipoli 2
     *
     * Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1:
     * Invalid)
     */
    short lockGazePoint2{ -1 };

    /**
     * @brief Gaze point of Rock Damipoli 3
     *
     * Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1:
     * Invalid)
     */
    short lockGazePoint3{ -1 };

    /**
     * @brief Gaze point of Rock Damipoli 4
     *
     * Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1:
     * Invalid)
     */
    short lockGazePoint4{ -1 };

    /**
     * @brief Gaze point of Rock Damipoli 5
     *
     * Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1:
     * Invalid)
     */
    short lockGazePoint5{ -1 };

    /**
     * @brief Network warp judgment distance [m / sec]
     *
     * Distance to warp instead of complementary movement in network
     * synchronization. Faster people (ex dragons) need to be longer.
     */
    float networkWarpDist{ 0.f };

    /**
     * @brief R1
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorR1{ -1 };

    /**
     * @brief L1
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorL1{ -1 };

    /**
     * @brief R2
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorR2{ -1 };

    /**
     * @brief L2
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorL2{ -1 };

    /**
     * @brief □
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorRL{ -1 };

    /**
     * @brief ○ ○
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorRR{ -1 };

    /**
     * @brief ×
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorRD{ -1 };

    /**
     * @brief △
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorRU{ -1 };

    /**
     * @brief ←
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorLL{ -1 };

    /**
     * @brief →
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorLR{ -1 };

    /**
     * @brief ↓
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorLD{ -1 };

    /**
     * @brief ↑
     *
     * Register the ID from the action parameter tool and specify the action.
     */
    int dbgBehaviorLU{ -1 };

    /**
     * @brief Anime ID offset 2
     *
     * All animations will be played with IDs shifted by this number. If not,
     * the animation ID of the animation ID offset 1 is referred to.
     */
    int animIdOffset2{ 0 };

    /**
     * @brief Damage group 1 Damage multiplier
     *
     * Magnification that adapts to damage processing for part 1
     */
    float partsDamageRate1{ 1.f };

    /**
     * @brief Damage group 2 Damage multiplier
     *
     * Magnification that adapts to damage processing for part 2
     */
    float partsDamageRate2{ 1.f };

    /**
     * @brief Damage group 3 Damage multiplier
     *
     * Magnification that adapts to damage processing for part 3
     */
    float partsDamageRate3{ 1.f };

    /**
     * @brief Damage group 4 damage multiplier
     *
     * Magnification that adapts to damage processing for part 4
     */
    float partsDamageRate4{ 1.f };

    /**
     * @brief Damage group 5 damage multiplier
     *
     * Magnification that adapts to damage processing for part 5
     */
    float partsDamageRate5{ 1.f };

    /**
     * @brief Damage group 6 damage multiplier
     *
     * Magnification to adapt to damage processing for part 6
     */
    float partsDamageRate6{ 1.f };

    /**
     * @brief Damage group 7 Damage multiplier
     *
     * Magnification that adapts to damage processing for part 7
     */
    float partsDamageRate7{ 1.f };

    /**
     * @brief Damage group 8 damage multiplier
     *
     * Magnification that adapts to damage processing for part 8
     */
    float partsDamageRate8{ 1.f };

    /**
     * @brief Weak point damage ratio
     *
     * Magnification that adapts to damage processing for weak points
     */
    float weakPartsDamageRate{ 1.f };

    /**
     * @brief SA recovery time correction value
     *
     * Correction value for super armor recovery time
     */
    float superArmorRecoverCorrection{ 0.f };

    /**
     * @brief Knockback distance at SA break
     *
     * Knockback distance that can be used only at the time of SA break
     */
    float superArmorBrakeKnockbackDist{ 0.f };

    /**
     * @brief stamina
     *
     * Total amount of stamina.
     */
    unsigned short stamina{ 0 };

    /**
     * @brief Stamina recovery basic speed [point / s]
     */
    unsigned short staminaRecoverBaseVel{ 0 };

    /**
     * @brief Physical defense
     *
     * Damage reduction base value for physical attacks.
     */
    unsigned short def_phys{ 0 };

    /**
     * @brief Slash defense [%]
     *
     * Look at the attack attribute, and if it is a slash attribute, reduce the
     * defense power.
     */
    short def_slash{ 0 };

    /**
     * @brief Blow defense [%]
     *
     * Look at the attack attribute, and if it is a hit attribute, reduce the
     * defense power.
     */
    short def_blow{ 0 };

    /**
     * @brief Puncture defense [%]
     *
     * Look at the attack attribute, and if it is a piercing attribute, reduce
     * the defense power.
     */
    short def_thrust{ 0 };

    /**
     * @brief Magic defense
     *
     * Damage reduction base value for magic attacks.
     */
    unsigned short def_mag{ 0 };

    /**
     * @brief Fire defense
     *
     * Damage reduction base value against fire attack.
     */
    unsigned short def_fire{ 0 };

    /**
     * @brief Electric shock defense
     *
     * Damage reduction base value against electric shock attack.
     */
    unsigned short def_thunder{ 0 };

    /**
     * @brief Repellent defense
     *
     * Used to determine the repelling of enemy attacks. // It is intended to be
     * repelled by normal attacks other than guards. // Enemies with a hard skin
     * can be repelled without doing anything ... It doesn't matter if it is a
     * normal enemy.
     */
    unsigned short defFlickPower{ 0 };

    /**
     * @brief Poison resistance
     *
     * Difficulty in getting poisonous
     */
    unsigned short resist_poison{ 0 };

    /**
     * @brief Epidemic resistance
     *
     * Difficulty in getting sick
     */
    unsigned short resist_desease{ 0 };

    /**
     * @brief Bleeding resistance
     *
     * Difficulty in getting bleeding abnormalities
     */
    unsigned short resist_blood{ 0 };

    /**
     * @brief Curse resistance
     *
     * Difficulty in dealing with abnormal curse conditions
     */
    unsigned short resist_curse{ 0 };

    /**
     * @brief Replacement model ID for wandering ghost
     *
     * Replacement model when wandering ghost, texture ID
     */
    short ghostModelId{ -1 };

    /**
     * @brief Normal replacement resource ID
     *
     * Replace resource ID during normal operation (do not use it unnecessarily)
     */
    short normalChangeResouceId{ -1 };

    /**
     * @brief Guard range [deg]
     *
     * Defense range angle when guarding weapons. Pending
     */
    short guardAngle{ 0 };

    /**
     * @brief Slash attack cut rate [%]
     *
     * Looking at the attack type, what percentage of the damage of the slashing
     * attribute is cut? Specify
     */
    short slashGuardCutRate{ 0 };

    /**
     * @brief Batter attack cut rate [%]
     *
     * Looking at the attack type, what percentage of the damage of the hit
     * attribute is cut? Specify
     */
    short blowGuardCutRate{ 0 };

    /**
     * @brief Puncture attack cut rate [%]
     *
     * Looking at the attack type, what percentage of the damage of the piercing
     * attribute is cut? Specify
     */
    short thrustGuardCutRate{ 0 };

    /**
     * @brief Gaze point of Rock Damipoli 6
     *
     * Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1:
     * Invalid)
     */
    short lockGazePoint6{ -1 };

    /**
     * @brief Normal replacement texture character ID
     *
     * Normal replacement texture character ID (do not use it unnecessarily)
     */
    short normalChangeTexChrId{ -1 };

    /**
     * @brief Display format of drop items
     *
     * Display method when dropping an item (corpse emission or item display)
     */
    unsigned short dropType{ 0 };

    /**
     * @brief Knockback cut rate [%]
     *
     * Decrease value when receiving knockback damage / Specifically, cut the
     * initial knockback speed of the attacking side
     */
    unsigned char knockbackRate{ 0 };

    /**
     * @brief Knockback parameter ID
     *
     * Set the parameter ID used for knockback
     */
    unsigned char knockbackParamId{ 0 };

    /**
     * @brief Fall damage reduction correction [%]
     */
    unsigned char fallDamageDump{ 0 };

    /**
     * @brief Stamina attack cut rate [%]
     *
     * Defense against enemy stamina attacks when guarding successfully
     */
    unsigned char staminaGuardDef{ 0 };

    /**
     * @brief Sleep tolerance
     *
     * Difficulty in getting sleep abnormalities
     */
    unsigned short resist_sleep{ 0 };

    /**
     * @brief Madness resistance
     *
     * Difficulty in getting mad
     */
    unsigned short resist_madness{ 0 };

    /**
     * @brief Sleep attack cut rate [%]
     *
     * How much to cut the attack power against sleep (set as a special effect
     * parameter)
     */
    signed char sleepGuardResist{ 0 };

    /**
     * @brief Mad attack cut rate [%]
     *
     * How much to cut the attack power against madness (set as a special effect
     * parameter)
     */
    signed char madnessGuardResist{ 0 };

    /**
     * @brief Gaze point of Rock Damipoli 7
     *
     * Gaze at the Damipoli specified when locking the Lock-on Damipoly 22X (-1:
     * Invalid)
     */
    short lockGazePoint7{ -1 };

    /**
     * @brief MP recovery basic speed [% / s]
     */
    unsigned char mpRecoverBaseVel{ 0 };

    /**
     * @brief Damage attenuation rate when repelling [%]
     *
     * Set a value to attenuate damage when repelling an attack
     */
    unsigned char flickDamageCutRate{ 0 };

    /**
     * @brief Default LOD Param ID
     *
     * Default LOD Param ID (-1: None)
     */
    signed char defaultLodParamId{ -1 };

    /**
     * @brief Drawing type
     */
    signed char drawType{ 0 };

    /**
     * @brief NPC type
     *
     * NPC type. OK if Zako enemies / boss enemies are distinguished
     */
    unsigned char npcType{ 0 };

    /**
     * @brief Team type
     *
     * NPC attack hit / not hit, aim / not aim setting
     */
    unsigned char teamType{ 0 };

    /**
     * @brief Movement type
     *
     * Moving method. This changes the control.
     */
    unsigned char moveType{ 0 };

    /**
     * @brief Lock distance
     *
     * Lock-on distance [m]
     */
    unsigned char lockDist{ 0 };

    /**
     * @brief Weakness defense material 1 [SE]
     *
     * Determines the SE that sounds when the weak point is damaged. 1
     */
    unsigned short materialSe_Weak1{ 0 };

    /**
     * @brief Weakness protection material 1 [SFX]
     *
     * Determines the SFX that occurs when the weak point is damaged. 1
     */
    unsigned short materialSfx_Weak1{ 0 };

    /**
     * @brief Part damage application attack
     *
     * Set the attack type to apply site damage
     */
    unsigned char partsDamageType{ 0 };

    /**
     * @brief Pledge
     *
     * Pledge type
     */
    unsigned char vowType{ 0 };

    /**
     * @brief Guard level
     *
     * When guarding, which guard motion will the enemy attack? Decide
     */
    signed char guardLevel{ 0 };

    /**
     * @brief Combustion SFX type
     *
     * SFX type at the time of combustion
     */
    unsigned char burnSfxType{ 0 };

    /**
     * @brief Poison resistance cut rate [%]
     *
     * How much to cut the attack power to poison (set to the special effect
     * parameter)
     */
    signed char poisonGuardResist{ 0 };

    /**
     * @brief Epidemic attack cut rate [%]
     *
     * How much to cut the attack power (set as a special effect parameter) to
     * make it a plague
     */
    signed char diseaseGuardResist{ 0 };

    /**
     * @brief Bleeding attack cut rate [%]
     *
     * How much to cut the attack power (set as a special effect parameter) to
     * make bleeding
     */
    signed char bloodGuardResist{ 0 };

    /**
     * @brief Curse attack cut rate [%]
     *
     * How much to cut the attack power (set as a special effect parameter) to
     * make a curse
     */
    signed char curseGuardResist{ 0 };

    /**
     * @brief Parry attack power
     *
     * Parry attack power. Used by the parrying side
     */
    unsigned char parryAttack{ 0 };

    /**
     * @brief Parry defense
     *
     * Parry defense. Used by the parried side.
     */
    unsigned char parryDefence{ 0 };

    /**
     * @brief SFX size
     */
    unsigned char sfxSize{ 0 };

    /**
     * @brief Camera extrusion area radius [m]
     */
    unsigned char pushOutCamRegionRadius{ 12 };

    /**
     * @brief Do you want to hit stop
     *
     * Setting whether to perform hit stop processing
     */
    unsigned char hitStopType{ 0 };

    /**
     * @brief Ladder top termination offset [1 / 10m]
     *
     * Upper side of the ladder end judgment offset
     */
    unsigned char ladderEndChkOffsetTop{ 15 };

    /**
     * @brief Ladder bottom termination offset [1 / 10m]
     *
     * Lower side of ladder end judgment offset
     */
    unsigned char ladderEndChkOffsetLow{ 8 };

    /**
     * @brief Ragdoll per camera hit
     *
     * Does the camera hit the enemy ragdoll? (Valid only when hitting the
     * player)
     */
    bool useRagdollCamHit : 1 { false };

    /**
     * @brief Disable cross-rigid hits
     *
     * If you want to prevent the cross rigid from hitting you ○
     */
    bool disableClothRigidHit : 1 { false };

    /**
     * @brief Whether to use front and back undulation addition
     */
    bool useUndulationAddAnimFB : 1 { false };

    /**
     * @brief Is it special attack A?
     *
     * Special attack A? Special attack A damage multiplier will be included in
     * the calculation
     */
    bool isWeakA : 1 { false };

    /**
     * @brief Is it a ghost?
     *
     * The opponent's attack will be able to slip through. The attack hits only
     * when the "anti-spirit weapon" of the weapon para is attacked with the
     * weapon of ○. Be careful not to confuse it with a wandering ghost
     */
    bool isGhost : 1 { false };

    /**
     * @brief No damage motion when damage is 0
     *
     * Do you not play the damage motion when the damage is 0?
     */
    bool isNoDamageMotion : 1 { false };

    /**
     * @brief Do you adjust the angle to the undulations?
     *
     * Do you match the back and forth rotation of the character with the
     * undulations of the ground? Cannot be used for flying characters
     */
    bool isUnduration : 1 { false };

    /**
     * @brief Will it be a wandering ghost?
     *
     * Will it be a wandering ghost when the player is a client?
     */
    bool isChangeWanderGhost : 1 { false };

    /**
     * @brief Model display mask 0
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask0 : 1 { false };

    /**
     * @brief Model display mask 1
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask1 : 1 { false };

    /**
     * @brief Model display mask 2
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask2 : 1 { false };

    /**
     * @brief Model display mask 3
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask3 : 1 { false };

    /**
     * @brief Model display mask 4
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask4 : 1 { false };

    /**
     * @brief Model display mask 5
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask5 : 1 { false };

    /**
     * @brief Model display mask 6
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask6 : 1 { false };

    /**
     * @brief Model display mask 7
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask7 : 1 { false };

    /**
     * @brief Model display mask 8
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask8 : 1 { false };

    /**
     * @brief Model display mask 9
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask9 : 1 { false };

    /**
     * @brief Model display mask 10
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask10 : 1 { false };

    /**
     * @brief Model display mask 11
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask11 : 1 { false };

    /**
     * @brief Model display mask 12
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask12 : 1 { false };

    /**
     * @brief Model display mask 13
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask13 : 1 { false };

    /**
     * @brief Model display mask 14
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask14 : 1 { false };

    /**
     * @brief Model display mask 15
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask15 : 1 { false };

    /**
     * @brief Whether to enable swinging
     *
     * Do you want to enable the swing set in Param Weaver?
     */
    bool isEnableNeckTurn : 1 { false };

    /**
     * @brief Is it prohibited to respond?
     *
     * Do you ban respawn?
     */
    bool disableRespawn : 1 { false };

    /**
     * @brief Do you wait for mobile animation?
     *
     * Do you want to play the moving animation until the animation is over?
     * (Like a mayfly dragon.)
     */
    bool isMoveAnimWait : 1 { false };

    /**
     * @brief Whether to reduce crowd processing
     *
     * Do you want to reduce the processing load during crowds? For babies
     * (preferably phalanx)
     */
    bool isCrowd : 1 { false };

    /**
     * @brief Is it special attack B?
     *
     * Special attack B? Special attack B damage multiplier will be included in
     * the calculation
     */
    bool isWeakB : 1 { false };

    /**
     * @brief Is it special attack C?
     *
     * Special attack C? Special attack C damage multiplier will be included in
     * the calculation
     */
    bool isWeakC : 1 { false };

    /**
     * @brief Is it special attack D?
     *
     * Special attack D? Special attack D damage multiplier will be included in
     * the calculation
     */
    bool isWeakD : 1 { false };

    /**
     * @brief Do you always make a special turn?
     *
     * Always execute a special turn (even if there is no navigation mesh at the
     * turn destination, the special turn is continuously executed)
     */
    bool doesAlwaysUseSpecialTurn : 1 { false };

    /**
     * @brief Is it a riding special attack?
     *
     * Will you be the target of a riding special attack (if you are riding)?
     */
    bool isRideAtkTarget : 1 { false };

    /**
     * @brief Whether to use step-over display interpolation
     */
    bool isEnableStepDispInterpolate : 1 { false };

    /**
     * @brief Is it a stealth attack target?
     */
    bool isStealthTarget : 1 { true };

    /**
     * @brief No initial death
     *
     * If you do not make an initial death, TRUE, even if you kill and save it,
     * the corpse will not be reproduced.
     */
    bool disableInitializeDead : 1 { false };

    /**
     * @brief Does it vibrate when hit?
     *
     * TRUE if it vibrates when hit. Use when you want to change from a normal
     * hit stop, such as a dead person.
     */
    bool isHitRumble : 1 { false };

    /**
     * @brief Does it turn smoothly?
     *
     * Whether to perform interpolation when turning between nodes in route
     * movement
     */
    bool isSmoothTurn : 1 { true };

    /**
     * @brief Is it special attack E?
     *
     * Special attack E? Special attack E damage multiplier will be included in
     * the calculation
     */
    bool isWeakE : 1 { false };

    /**
     * @brief Is it special attack F?
     *
     * Special attack F? Special attack F damage multiplier will be included in
     * the calculation
     */
    bool isWeakF : 1 { false };

    /**
     * @brief Model display mask 16
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask16 : 1 { false };

    /**
     * @brief Model display mask 17
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask17 : 1 { false };

    /**
     * @brief Model display mask 18
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask18 : 1 { false };

    /**
     * @brief Model display mask 19
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask19 : 1 { false };

    /**
     * @brief Model display mask 20
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask20 : 1 { false };

    /**
     * @brief Model display mask 21
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask21 : 1 { false };

    /**
     * @brief Model display mask 22
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask22 : 1 { false };

    /**
     * @brief Model display mask 23
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask23 : 1 { false };

    /**
     * @brief Model display mask 24
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask24 : 1 { false };

    /**
     * @brief Model display mask 25
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask25 : 1 { false };

    /**
     * @brief Model display mask 26
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask26 : 1 { false };

    /**
     * @brief Model display mask 27
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask27 : 1 { false };

    /**
     * @brief Model display mask 28
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask28 : 1 { false };

    /**
     * @brief Model display mask 29
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask29 : 1 { false };

    /**
     * @brief Model display mask 30
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask30 : 1 { false };

    /**
     * @brief Model display mask 31
     *
     * Displays the model corresponding to the display mask.
     */
    bool modelDispMask31 : 1 { false };

    /**
     * @brief Drop item radius correction
     *
     * Radius to be added as a correction to the cylinder radius of normal Item
     * search judgment (applicable to enemy drop items. Used for large
     * characters etc.)
     */
    float itemSearchRadius{ 0.f };

    /**
     * @brief Height per character [m]
     *
     * The height of the capsule per character.
     */
    float chrHitHeight{ 0.f };

    /**
     * @brief Radius per character [m]
     *
     * Radius of capsule per character.
     */
    float chrHitRadius{ 0.f };

    /**
     * @brief Special turning type
     */
    unsigned char specialTurnType{ 0 };

    /**
     * @brief Do you get a boss in soul?
     */
    bool isSoulGetByBoss : 1 { false };

    /**
     * @brief Is it a bullet owner treated as an object?
     *
     * If you become the owner of a bullet, a flag that applies the object's
     * damage calculation related to the bullet. Used for damage correction by
     * power.
     */
    bool isBulletOwner_byObject : 1 { false };

    /**
     * @brief Do you use low hit FootIK?
     *
     * Whether to use the FootIk filter for low hits
     */
    bool isUseLowHitFootIk : 1 { false };

    /**
     * @brief Whether to apply PvP damage compensation control
     *
     * Decide whether to calculate damage as a "player" when calculating damage.
     * If it is invalid, it is treated as an "enemy".
     */
    bool isCalculatePvPDamage : 1 { false };

    /**
     * @brief Can only be activated when active in the host world
     */
    bool isHostSyncChr : 1 { false };

    /**
     * @brief Do you want to skip the weakness animation?
     *
     * Weakness damage Whether to skip animation playback. "Part damage rate"
     * and "defense material" are treated as weak points just by not playing the
     * animation.
     */
    bool isSkipWeakDamageAnim : 1 { false };

    /**
     * @brief When riding, do you enable the capsule around the rider?
     *
     * When riding on a character with this parameter ○, the character's Atari
     * remains while riding.
     */
    bool isKeepHitOnRide : 1 { false };

    /**
     * @brief Is it a special character?
     */
    bool isSpCollide : 1 { false };

    /**
     * @brief Dark defense
     *
     * Damage reduction base value for dark attacks.
     */
    unsigned short def_dark{ 0 };

    /**
     * @brief Threat level
     *
     * Threat level. If it is 0, even if the PC is found, "FE that seems to be
     * found" is not displayed.
     */
    unsigned int threatLv{ 1 };

    /**
     * @brief Threshold for special turning distance [m]
     *
     * Make a special turn when the distance to the target is greater than or
     * equal to the set threshold
     */
    float specialTurnDistanceThreshold{ 4.f };

    /**
     * @brief Foot effect identifier
     *
     * The SFX identifier used in the automatic foot effect. (ZZZ of XYYZZZ)
     */
    int autoFootEffectSfxId{ -1 };

    /**
     * @brief Defensive material 1 [SE]
     *
     * Determine the SE that sounds when damaged. 1. It is OK to set it by
     * appearance.
     */
    unsigned short materialSe1{ 0 };

    /**
     * @brief Defensive material 1 [SFX]
     *
     * Determine the SFX that occurs when you take damage. 1. It is OK to set it
     * by appearance.
     */
    unsigned short materialSfx1{ 0 };

    /**
     * @brief Weakness defense material 2 [SE]
     *
     * Determines the SE that sounds when the weak point is damaged. 2
     */
    unsigned short materialSe_Weak2{ 0 };

    /**
     * @brief Weakness protection material 2 [SFX]
     *
     * Determines the SFX that occurs when the weak point is damaged. 2
     */
    unsigned short materialSfx_Weak2{ 0 };

    /**
     * @brief Defensive material 2 [SE]
     *
     * Determine the SE that sounds when damaged. 2. It is OK to set it by
     * appearance.
     */
    unsigned short materialSe2{ 0 };

    /**
     * @brief Defensive material 2 [SFX]
     *
     * Determine the SFX that occurs when you take damage. 2. It is OK to set it
     * by appearance.
     */
    unsigned short materialSfx2{ 0 };

    /**
     * @brief Resident special effect 8
     */
    int spEffectID8{ -1 };

    /**
     * @brief Resident special effect 9
     */
    int spEffectID9{ -1 };

    /**
     * @brief Resident special effect 10
     */
    int spEffectID10{ -1 };

    /**
     * @brief Resident special effects 11
     */
    int spEffectID11{ -1 };

    /**
     * @brief Resident special effect 12
     */
    int spEffectID12{ -1 };

    /**
     * @brief Resident special effect 13
     */
    int spEffectID13{ -1 };

    /**
     * @brief Resident special effect 14
     */
    int spEffectID14{ -1 };

    /**
     * @brief Resident special effects 15
     */
    int spEffectID15{ -1 };

    /**
     * @brief Foot decal identifier 1
     *
     * Decal to be attached when a foot effect occurs. Floor material is also
     * taken into consideration
     */
    int autoFootEffectDecalBaseId1{ -1 };

    /**
     * @brief Toughness
     *
     * Basic value of toughness
     */
    unsigned int toughness{ 0 };

    /**
     * @brief Toughness recovery time correction value
     *
     * Correction value for toughness recovery time
     */
    float toughnessRecoverCorrection{ 0.f };

    /**
     * @brief Non-attribute damage multiplier
     *
     * Non-attribute damage multiplier. The final damage value is the value
     * obtained by multiplying the damage calculation result by this value.
     */
    float neutralDamageCutRate{ 1.f };

    /**
     * @brief Slash damage multiplier
     *
     * Slash damage multiplier. The final damage value is the value obtained by
     * multiplying the damage calculation result by this value.
     */
    float slashDamageCutRate{ 1.f };

    /**
     * @brief Batter damage multiplier
     *
     * Batter damage multiplier. The final damage value is the value obtained by
     * multiplying the damage calculation result by this value.
     */
    float blowDamageCutRate{ 1.f };

    /**
     * @brief Puncture damage ratio
     *
     * Puncture damage ratio. The final damage value is the value obtained by
     * multiplying the damage calculation result by this value.
     */
    float thrustDamageCutRate{ 1.f };

    /**
     * @brief Magic damage multiplier
     *
     * Magic damage multiplier. The final damage value is the value obtained by
     * multiplying the damage calculation result by this value.
     */
    float magicDamageCutRate{ 1.f };

    /**
     * @brief Flame damage multiplier
     *
     * Flame damage multiplier. The final damage value is the value obtained by
     * multiplying the damage calculation result by this value.
     */
    float fireDamageCutRate{ 1.f };

    /**
     * @brief Electric shock damage ratio
     *
     * Electric shock damage ratio. The final damage value is the value obtained
     * by multiplying the damage calculation result by this value.
     */
    float thunderDamageCutRate{ 1.f };

    /**
     * @brief Dark damage multiplier
     *
     * Dark damage multiplier. The final damage value is the value obtained by
     * multiplying the damage calculation result by this value.
     */
    float darkDamageCutRate{ 1.f };

    /**
     * @brief Dark attack power cut rate [%]
     *
     * How much to cut the dark attack?
     */
    float darkGuardCutRate{ 0.f };

    /**
     * @brief Cross update priority offset [m]
     */
    signed char clothUpdateOffset{ 0 };

    /**
     * @brief Weight setting for NPC players
     *
     * Equipment weight type applied for NPC players
     */
    unsigned char npcPlayerWeightType{ 0 };

    /**
     * @brief Normal time replacement model ID
     *
     * Normal replacement model, texture ID
     */
    short normalChangeModelId{ -1 };

    /**
     * @brief Normal replacement anime character ID
     *
     * Replace the target animation with the specified ID Anibnd
     */
    short normalChangeAnimChrId{ -1 };

    /**
     * @brief Paint render target size [pix]
     */
    unsigned short paintRenderTargetSize{ 256 };

    /**
     * @brief Epidemic resistance correction rule ID
     *
     * When the abnormal condition is activated, the maximum value is
     * temporarily changed by using the set value of the abnormal condition
     * resistance correction parameter.
     */
    int resistCorrectId_disease{ -1 };

    /**
     * @brief Applicable shader ID
     *
     * ID of the phantom parameter .xlsm to apply
     */
    int phantomShaderId{ -1 };

    /**
     * @brief Multiplayer correction parameter ID
     */
    int multiPlayCorrectionParamId{ -1 };

    /**
     * @brief FootIK Ankle limit angle_pitch
     *
     * FootIK Ankle pitch limit angle (-1: no limit). If you have not set Foot
     * End L S in HAT, this angle is used in common with rolls.
     */
    float maxAnklePitchAngle{ -1.f };

    /**
     * @brief Cold resistance
     *
     * Difficulty in getting cold air condition abnormal
     */
    unsigned short resist_freeze{ 0 };

    /**
     * @brief Cold attack cut rate [%]
     *
     * How much to cut the attack power against cold air (set as a special
     * effect parameter)
     */
    signed char freezeGuardResist{ 0 };

    unsigned char unknown_0x1e3{ 0 };

    /**
     * @brief Lock camera parameter ID
     *
     * The ID of the lock camera parameter applied to the camera when locked on.
     * Highest priority. Unused if -1
     */
    int lockCameraParamId{ -1 };

    /**
     * @brief Resident special effects 16
     */
    int spEffectID16{ -1 };

    /**
     * @brief Resident special effects 17
     */
    int spEffectID17{ -1 };

    /**
     * @brief Resident special effects 18
     */
    int spEffectID18{ -1 };

    /**
     * @brief Resident special effects 19
     */
    int spEffectID19{ -1 };

    /**
     * @brief Resident special effect 20
     */
    int spEffectID20{ -1 };

    /**
     * @brief Resident special effect 21
     */
    int spEffectID21{ -1 };

    /**
     * @brief Resident special effect 22
     */
    int spEffectID22{ -1 };

    /**
     * @brief Resident special effect 23
     */
    int spEffectID23{ -1 };

    /**
     * @brief Resident special effect 24
     */
    int spEffectID24{ -1 };

    /**
     * @brief Resident special effects 25
     */
    int spEffectID25{ -1 };

    /**
     * @brief Resident special effect 26
     */
    int spEffectID26{ -1 };

    /**
     * @brief Resident special effect 27
     */
    int spEffectID27{ -1 };

    /**
     * @brief Resident special effects 28
     */
    int spEffectID28{ -1 };

    /**
     * @brief Resident special effect 29
     */
    int spEffectID29{ -1 };

    /**
     * @brief Resident special effect 30
     */
    int spEffectID30{ -1 };

    /**
     * @brief Resident special effects 31
     */
    int spEffectID31{ -1 };

    /**
     * @brief Central angle of lockable area [deg]
     *
     * Create a conical lock-on non-lockable area beneath the enemy. The angle
     * of the size of the cone. Can be changed temporarily from TAE
     */
    float disableLockOnAng{ 0.f };

    /**
     * @brief Cross OffLOD level
     *
     * Set the LOD level to turn off cross processing
     */
    signed char clothOffLodLevel{ -1 };

    /**
     * @brief Whether to use FootIK results to match undulations
     *
     * Do you use the FootIK result to match your character to the undulations
     * of the ground? Cannot be used for flying characters
     */
    bool isUseFootIKNormalByUnduration : 1 { false };

    /**
     * @brief Whether to ground the capsule at the time of initial death
     */
    bool attachHitInitializeDead : 1 { false };

    /**
     * @brief Do you want to remove it from the group reward judgment?
     *
     * Group reward: In the judgment of "all dead", characters with this
     * parameter ○ are excluded from the judgment.
     */
    bool excludeGroupRewardCheck : 1 { false };

    /**
     * @brief Is Rock Damipoli (for Enemy) 212 Effective?
     */
    bool enableAILockDmyPoly_212 : 1 { true };

    /**
     * @brief Is Rock Damipoli (for Enemy) 213 Effective?
     */
    bool enableAILockDmyPoly_213 : 1 { true };

    /**
     * @brief Is Rock Damipoli (for Enemy) 214 Effective?
     */
    bool enableAILockDmyPoly_214 : 1 { true };

    /**
     * @brief Excluded from open_XB1
     */
    bool disableActivateOpen_xb1 : 1 { false };

    /**
     * @brief Excluded from Legacy_XB1
     */
    bool disableActivateLegacy_xb1 : 1 { false };

    /**
     * @brief HP Est Bottle / MP Est Bottle Recovery Number Parameter ID
     *
     * When the character dies, the data ID of the est usage count recovery
     * parameter .xlsm, which is the same as the value, is acquired and the est
     * bottle is recovered. Unused if -1
     */
    short estusFlaskRecoveryParamId{ -1 };

    /**
     * @brief Role name text ID
     *
     * Specify the role name at the time of summoning. -1: Use the default role
     * name of the target spirit body. 0: No display. 1 or more: Used as a text
     * ID.
     */
    int roleNameId{ -1 };

    /**
     * @brief HP & MP Est Bottle Recovery Lottery Probability
     *
     * HP / MP est recovery probability when defeating an enemy. The numerator
     * is obtained from the NPC para with 10000 as the denominator.
     */
    unsigned short estusFlaskLotPoint{ 0 };

    /**
     * @brief HP Est Bottle Recovery Lottery Probability
     *
     * Recovery probability of MP Est when defeating an enemy. The numerator is
     * obtained from the NPC para with 10000 as the denominator.
     */
    unsigned short hpEstusFlaskLotPoint{ 0 };

    /**
     * @brief MP Est Bottle Recovery Lottery Probability
     *
     * Recovery probability of MP Est when defeating an enemy. The numerator is
     * obtained from the NPC para with 10000 as the denominator.
     */
    unsigned short mpEstusFlaskLotPoint{ 0 };

    /**
     * @brief HP & MP Est Bottle Recovery Addition lottery probability at the
     * time of defeat
     *
     * Next time probability increase value when you miss the HP / MP est
     * recovery lottery. Addition value of numerator.
     */
    unsigned short estusFlaskRecovery_failedLotPointAdd{ 0 };

    /**
     * @brief HP Est Bottle Recovery Addition lottery probability at the time of
     * defeat
     *
     * The next probability increase value when you miss the HP Est Recovery
     * Lottery. Addition value of numerator.
     */
    unsigned short hpEstusFlaskRecovery_failedLotPointAdd{ 0 };

    /**
     * @brief MP est bottle recovery Addition lottery probability at the time of
     * defeat
     *
     * The next probability increase value when the MP est recovery lottery is
     * missed. Addition value of numerator.
     */
    unsigned short mpEstusFlaskRecovery_failedLotPointAdd{ 0 };

    /**
     * @brief Will you be a wandering ghost using a phantom shader?
     *
     * Phantom shader with ID specified only on the guest side Specify the
     * phantom shader ID and make it an illusion
     */
    int WanderGhostPhantomId{ -1 };

    /**
     * @brief Hearing head size [m]
     *
     * The offset size to be set instead of the capsule offset at the time of
     * hearing judgment. Use this value as an offset only if it is set to 0 or
     * higher.
     */
    float hearingHeadSize{ -1.f };

    /**
     * @brief Sound bank ID
     *
     * Sound bank ID can be specified -1: Use the bank of character ID (resource
     * name)
     */
    short SoundBankId{ -1 };

    /**
     * @brief Maximum anteroposterior angle to match undulations
     *
     * The upper limit angle when adjusting the front-back angle to the
     * undulation. If the total length is long, it is better to set it lower.
     */
    unsigned char forwardUndulationLimit{ 0 };

    /**
     * @brief Maximum left-right angle to match undulations
     *
     * Upper limit angle when adjusting the left and right angles to the
     * undulations. If the total length is long, it is better to set it lower.
     */
    unsigned char sideUndulationLimit{ 0 };

    /**
     * @brief Platoon Deactive Movement Speed [m / s]
     */
    float deactiveMoveSpeed{ 0.f };

    /**
     * @brief Distance to switch to platoon deactive movement [m]
     */
    float deactiveMoveDist{ 0.f };

    /**
     * @brief Sound source effective distance [m]
     *
     * The distance from the player for which the character sound source is
     * valid. -1: Effective at all distances
     */
    float enableSoundObjDist{ 48.f };

    /**
     * @brief Correction gain value to match undulations
     *
     * Set the speed when adjusting the angle to the undulations
     */
    float undulationCorrectGain{ 0.1f };

    /**
     * @brief Foot decal identifier 2
     *
     * Decal to be attached when a foot effect occurs. Floor material is also
     * taken into consideration
     */
    short autoFootEffectDecalBaseId2{ -1 };

    /**
     * @brief Foot decal identifier 3
     *
     * Decal to be attached when a foot effect occurs. Floor material is also
     * taken into consideration
     */
    short autoFootEffectDecalBaseId3{ -1 };

    /**
     * @brief Retarget reference character ID
     *
     * Character ID to be referred to when specifying the motion retarget
     * destination
     */
    short RetargetReferenceChrId{ -1 };

    /**
     * @brief SFX resource bank ID
     *
     * SFX resource bank ID can be specified -1: Use the bank of character ID
     * (resource name)
     */
    short SfxResBankId{ -1 };

    /**
     * @brief Update and activate priorities
     *
     * Used to determine the activation / renewal level. The larger it is, the
     * lower the update level will be even if you are far from the player.
     */
    float updateActivatePriolity{ 1.f };

    /**
     * @brief Pre-death navigation mesh flag
     *
     * Flag the value of the touching Nav Mesh while the character is alive.
     * Does not follow the movement.
     */
    unsigned char chrNavimeshFlag_Alive{ 0 };

    /**
     * @brief Post-mortem navigation mesh flag
     *
     * Flag the value on the touching Nav Mesh while the character is dying.
     * Does not follow the movement.
     */
    unsigned char chrNavimeshFlag_Dead{ 0 };

    /**
     * @brief isConsideredUndead
     */
    bool isConsideredUndead{ false };

    /**
     * @brief Wheel control type
     */
    unsigned char wheelRotType{ 0 };

    /**
     * @brief Wheel radius
     *
     * Specify the radius of the wheel [m]
     */
    float wheelRotRadius{ 0.f };

    /**
     * @brief Retarget movement amount magnification
     *
     * Magnification of movement amount at the time of retargeting
     */
    float retargetMoveRate{ 1.f };

    /**
     * @brief Ladder warp position offset
     *
     * Offsets along the Damipoly Z-axis at the specified value. Both positive
     * and negative numbers can be specified.
     */
    float ladderWarpOffset{ 0.f };

    /**
     * @brief Load asset ID
     *
     * Asset ID to be read in connection with character loading (for dynamic
     * generation of characters, etc.).
     */
    int loadAssetId{ -1 };

    /**
     * @brief Overlap camera target lock Damipoli ID
     *
     * Set the Damipoly ID (220-227) to enable the overlap camera. If it is -1,
     * it will be invalid.
     */
    int overlapCameraDmypolyId{ -1 };

    /**
     * @brief Resident Material Expansion Para ID0
     */
    int residentMaterialExParamId00{ -1 };

    /**
     * @brief Resident Material Expansion Para ID1
     */
    int residentMaterialExParamId01{ -1 };

    /**
     * @brief Resident Material Expansion Para ID2
     */
    int residentMaterialExParamId02{ -1 };

    /**
     * @brief Resident Material Expansion Para ID3
     */
    int residentMaterialExParamId03{ -1 };

    /**
     * @brief Resident Material Expansion Para ID4
     */
    int residentMaterialExParamId04{ -1 };

    /**
     * @brief Item lottery ID_for enemies
     *
     * Specify the lottery ID_for enemies of the item to be acquired when
     * collecting Nemuri. Please set only one of them.
     */
    int sleepCollectorItemLotId_enemy{ -1 };

    /**
     * @brief Nemuri item lottery ID_for map
     *
     * Specify for the lottery ID_map of the item to be acquired when collecting
     * Nemuri. Please set only one of them.
     */
    int sleepCollectorItemLotId_map{ -1 };

    /**
     * @brief FootIK Appearance height correction ON gain value
     */
    float footIkErrorOnGain{ 0.1f };

    /**
     * @brief FootIK Appearance height correction OFF gain value
     */
    float footIkErrorOffGain{ 0.4f };

    /**
     * @brief Additional sound bank ID
     *
     * You can specify an additional sound bank ID -1 or 0: No addition (SEQ
     * 16135)
     */
    short SoundAddBankId{ -1 };

    /**
     * @brief Defensive material variation value
     *
     * It is a value used in combination with the defense material to classify
     * abnormal conditions, damage SFX, and SE. SEQ16473
     */
    unsigned char materialVariationValue{ 0 };

    /**
     * @brief Weakness defense material variation value
     *
     * It is a value used for variation of abnormal condition, damage SFX, SE in
     * combination with weak point defense material. SEQ16473
     */
    unsigned char materialVariationValue_Weak{ 0 };

    /**
     * @brief SA endurance
     *
     * Super armor durability value
     */
    float superArmorDurability{ 0.f };

    /**
     * @brief SA recovery speed correction value
     *
     * Correct the SA recovery speed by multiplying the SA basic recovery amount
     */
    float saRecoveryRate{ 1.f };

    /**
     * @brief SA attack cut rate [%]
     *
     * Cut rate of SA damage when guard is successful
     */
    float saGuardCutRate{ 0.f };

    /**
     * @brief Bleeding resistance correction rule ID
     *
     * When the abnormal condition is activated, the maximum value is
     * temporarily changed by using the setting value of the abnormal condition
     * resistance correction parameter.
     */
    int resistCorrectId_blood{ -1 };

    /**
     * @brief Curse resistance correction rule ID
     *
     * When the abnormal condition is activated, the maximum value is
     * temporarily changed by using the set value of the abnormal condition
     * resistance correction parameter.
     */
    int resistCorrectId_curse{ -1 };

    /**
     * @brief Cold resistance correction rule ID
     *
     * When the abnormal condition is activated, the maximum value is
     * temporarily changed by using the setting value of the abnormal condition
     * resistance correction parameter.
     */
    int resistCorrectId_freeze{ -1 };

    /**
     * @brief Sleep tolerance correction rule ID
     *
     * When the abnormal condition is activated, the maximum value is
     * temporarily changed by using the set value of the abnormal condition
     * resistance correction parameter.
     */
    int resistCorrectId_sleep{ -1 };

    /**
     * @brief Madness resistance correction rule ID
     *
     * When the abnormal condition is activated, the maximum value is
     * temporarily changed by using the set value of the abnormal condition
     * resistance correction parameter.
     */
    int resistCorrectId_madness{ -1 };

    /**
     * @brief Character death tutorial judgment flag ID
     *
     * Event flag ID for the tutorial when the character is defeated for the
     * first time. Flag ON when the character dies.
     */
    unsigned int chrDeadTutorialFlagId{ 0 };

    /**
     * @brief Step crossing display interpolation time
     */
    float stepDispInterpolateTime{ 0.5f };

    /**
     * @brief Step crossing display activation judgment value
     */
    float stepDispInterpolateTriggerValue{ 0.6f };

    /**
     * @brief Lock score correction value
     */
    float lockScoreOffset{ 0.f };

    /**
     * @brief dlcGameClearSpEffectID
     */
    int dlcGameClearSpEffectID{ 0 };

    unsigned char pad12[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::NPC_PARAM_ST) == 736,
    "NPC_PARAM_ST paramdef size does not match detected size");
