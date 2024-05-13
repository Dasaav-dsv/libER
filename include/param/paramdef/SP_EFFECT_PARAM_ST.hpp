/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct SP_EFFECT_PARAM_ST {
    /**
     * @brief Icon ID
     *
     * Icon ID (When -1, no icon is required)
     */
    int iconId{ -1 };

    /**
     * @brief Trigger condition: Remaining HP ratio [%]
     *
     * Set what percentage of maxHP the remaining HP will be activated
     */
    float conditionHp{ -1.f };

    /**
     * @brief Effect duration time [s]
     *
     * Change duration / -1 for permanent / 0 for one moment only
     */
    float effectEndurance{ 0.f };

    /**
     * @brief Activation interval [s]
     *
     * Set how many seconds it occurs
     */
    float motionInterval{ 0.f };

    /**
     * @brief Maximum HP magnification [%]
     *
     * Correct the maximum HP
     */
    float maxHpRate{ 1.f };

    /**
     * @brief Maximum MP magnification [%]
     *
     * Correct the maximum MP
     */
    float maxMpRate{ 1.f };

    /**
     * @brief Maximum stamina magnification [%]
     *
     * Correct the maximum SP
     */
    float maxStaminaRate{ 1.f };

    /**
     * @brief Defender: Slash damage multiplier
     *
     * Slash damage ratio: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float slashDamageCutRate{ 1.f };

    /**
     * @brief Defender: Batter damage multiplier
     *
     * Batter damage ratio: The calculated damage is corrected by XX times. 1 is
     * normal.
     */
    float blowDamageCutRate{ 1.f };

    /**
     * @brief Defender: Puncture damage multiplier
     *
     * Puncture damage ratio: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float thrustDamageCutRate{ 1.f };

    /**
     * @brief Defender: Non-attribute damage multiplier
     *
     * Non-attribute damage ratio: Correct the calculated damage by XX times. 1
     * is normal.
     */
    float neutralDamageCutRate{ 1.f };

    /**
     * @brief Defender: Magic damage multiplier
     *
     * Magic damage multiplier: The calculated damage is corrected by XX times.
     * 1 is normal.
     */
    float magicDamageCutRate{ 1.f };

    /**
     * @brief Defender: Fire damage multiplier
     *
     * Flame damage ratio: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float fireDamageCutRate{ 1.f };

    /**
     * @brief Defender: Electric shock damage multiplier
     *
     * Electric shock damage ratio: Correct the calculated damage by XX times. 1
     * is normal.
     */
    float thunderDamageCutRate{ 1.f };

    /**
     * @brief Attacker: Physical damage multiplier
     *
     * Physical damage ratio: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float physicsAttackRate{ 1.f };

    /**
     * @brief Attacker: Magic damage multiplier
     *
     * Magic damage multiplier: The calculated damage is corrected by XX times.
     * 1 is normal.
     */
    float magicAttackRate{ 1.f };

    /**
     * @brief Attacker: Fire damage multiplier
     *
     * Flame damage ratio: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float fireAttackRate{ 1.f };

    /**
     * @brief Attack side: Electric shock damage ratio
     *
     * Electric shock damage ratio: Correct the calculated damage by XX times. 1
     * is normal.
     */
    float thunderAttackRate{ 1.f };

    /**
     * @brief Physical attack power multiplier
     *
     * Multiply the physical attack power by the set value
     */
    float physicsAttackPowerRate{ 1.f };

    /**
     * @brief Magic attack power multiplier
     *
     * Multiply the magic attack power by the set value
     */
    float magicAttackPowerRate{ 1.f };

    /**
     * @brief Fire attack power multiplier
     *
     * Multiply the fire attack power by the set value
     */
    float fireAttackPowerRate{ 1.f };

    /**
     * @brief Electric shock attack power multiplier
     *
     * Multiply the electric shock attack power by the set value
     */
    float thunderAttackPowerRate{ 1.f };

    /**
     * @brief Physical attack power [point]
     *
     * Add or subtract the value set for physical attack power
     */
    int physicsAttackPower{ 0 };

    /**
     * @brief Magic attack power [point]
     *
     * Add or subtract the value set for the magic attack power
     */
    int magicAttackPower{ 0 };

    /**
     * @brief Fire attack power [point]
     *
     * Add or subtract the value set for the flame attack power
     */
    int fireAttackPower{ 0 };

    /**
     * @brief Electric shock attack power [point]
     *
     * Add or subtract the value set for the electric shock attack power
     */
    int thunderAttackPower{ 0 };

    /**
     * @brief Physical defense power multiplier
     *
     * Multiply the set value for physical defense
     */
    float physicsDiffenceRate{ 1.f };

    /**
     * @brief Magic defense multiplier
     *
     * Multiply the value set for magic defense
     */
    float magicDiffenceRate{ 1.f };

    /**
     * @brief Fire defense multiplier
     *
     * Multiply the fire defense by the set value
     */
    float fireDiffenceRate{ 1.f };

    /**
     * @brief Electric shock defense power multiplier
     *
     * Multiply the value set for the electric shock defense
     */
    float thunderDiffenceRate{ 1.f };

    /**
     * @brief Physical defense [point]
     *
     * Add or subtract the value set for physical defense
     */
    int physicsDiffence{ 0 };

    /**
     * @brief Magic defense [point]
     *
     * Add or subtract the value set for magic defense
     */
    int magicDiffence{ 0 };

    /**
     * @brief Fire defense [point]
     *
     * Add or subtract the value set for the fire defense
     */
    int fireDiffence{ 0 };

    /**
     * @brief Electric shock defense [point]
     *
     * Add or subtract the value set for the electric shock defense
     */
    int thunderDiffence{ 0 };

    /**
     * @brief Gap damage ratio
     *
     * Replace the damage ratio at the time of the gap with the set value (set
     * on the damage side)
     */
    float NoGuardDamageRate{ 1.f };

    /**
     * @brief Sweet spot magnification
     *
     * Replaces the damage calculation of the sweet spot with the specified
     * value (key point damage correction) -Invalid at 1.0
     */
    float vitalSpotChangeRate{ -1.f };

    /**
     * @brief Normal hit magnification
     *
     * Replaces normal hit damage calculation with the specified number -Invalid
     * at 1.0
     */
    float normalSpotChangeRate{ -1.f };

    /**
     * @brief LookAt Position Offset [m]
     *
     * Offset the target position when the enemy looks at. Set to crouch or
     * mount on the side to be seen
     */
    float lookAtTargetPosOffset{ 0.f };

    /**
     * @brief Action ID designation frame
     *
     * Specified -1 when dealing damage using action ID from special effects
     */
    int behaviorId{ -1 };

    /**
     * @brief HP damage amount [%]
     *
     * Set what percentage of the maximum HP to subtract (or add) with one
     * activation
     */
    float changeHpRate{ 0.f };

    /**
     * @brief HP damage [point]
     *
     * Set how many points to subtract (or add) with one activation
     */
    int changeHpPoint{ 0 };

    /**
     * @brief MP damage amount [%]
     *
     * Set what percentage of the maximum MP to subtract (or add) with one
     * activation
     */
    float changeMpRate{ 0.f };

    /**
     * @brief MP damage [point]
     *
     * Set how many points to subtract (or add) with one activation
     */
    int changeMpPoint{ 0 };

    /**
     * @brief MP recovery speed change [point]
     *
     * Change the recovery speed. Add or subtract to the standard recovery speed
     * and initial recovery speed of the recovery formula.
     */
    int mpRecoverChangeSpeed{ 0 };

    /**
     * @brief Stamina damage amount [%]
     *
     * Set what percentage of the maximum stamina to subtract (or add) with one
     * activation
     */
    float changeStaminaRate{ 0.f };

    /**
     * @brief Stamina damage [point]
     *
     * Set how many points to subtract (or add) with one activation
     */
    int changeStaminaPoint{ 0 };

    /**
     * @brief Stamina recovery speed change [point]
     *
     * Change the recovery speed. Add or subtract to the standard recovery speed
     * and initial recovery speed of the recovery formula.
     */
    int staminaRecoverChangeSpeed{ 0 };

    /**
     * @brief Magic effect time change
     *
     * Add / subtract the time set for the effect duration only for magic that
     * has the effect duration set to 0.1 seconds or more.
     */
    float magicEffectTimeChange{ 0.f };

    /**
     * @brief Durability change: Internal wear [point]
     *
     * Add or subtract the numerical value to the internal wear degree
     */
    int insideDurability{ 0 };

    /**
     * @brief Durability change: Maximum wear change [point]
     *
     * Add the set value to the maximum value of the internal wear degree of
     * durability.
     */
    int maxDurability{ 0 };

    /**
     * @brief Stamina attack power multiplier
     *
     * Multiply the stamina attack power by a factor (1.0 1 times 0.5 half)
     */
    float staminaAttackRate{ 1.f };

    /**
     * @brief Poison resistance attack power [point]
     *
     * A value to be added to the target's [poison resistance value] when it
     * hits
     */
    int poizonAttackPower{ 0 };

    /**
     * @brief Epidemic resistance attack power [point]
     *
     * Numerical value to be added to the target [Plague resistance value] when
     * hit
     */
    int diseaseAttackPower{ 0 };

    /**
     * @brief Bleeding resistance attack power [point]
     *
     * A value to be added to the target's [bleeding resistance value] when it
     * hits
     */
    int bloodAttackPower{ 0 };

    /**
     * @brief Curse resistance attack power [point]
     *
     * A number to be added to the target [curse resistance value] when hit
     */
    int curseAttackPower{ 0 };

    /**
     * @brief Fall damage ratio
     *
     * Multiply the damage calculation when falling
     */
    float fallDamageRate{ 0.f };

    /**
     * @brief Get Soul Magnification
     *
     * The amount of soul acquired when defeating an enemy is added by the
     * specified multiple.
     */
    float soulRate{ 0.f };

    /**
     * @brief Equipment weight change rate
     *
     * Multiply the maximum equipment weight by the set magnification
     */
    float equipWeightChangeRate{ 0.f };

    /**
     * @brief Possession weight change rate
     *
     * Multiply the maximum weight you have by the set magnification
     */
    float allItemWeightChangeRate{ 0.f };

    /**
     * @brief Soul addition
     *
     * Add the set value to the possessed soul
     */
    int soul{ 0 };

    /**
     * @brief Anime ID offset (invalid-1)
     */
    int animIdOffset{ -1 };

    /**
     * @brief Possession soul rate
     *
     * For enemy lap effect. It is applied when the soul goes out from the set
     * character.
     */
    float haveSoulRate{ 1.f };

    /**
     * @brief Target priority addition
     *
     * During multiplayer, the enemy will give priority to being targeted as a
     * target. Addition of priority. 0 is the default. It will be often targeted
     * with a positive value. Minus is up to -1.
     */
    float targetPriority{ 0.f };

    /**
     * @brief Those who can see: Visual magnification
     *
     * Correct the ease of finding by a magnification
     */
    float sightSearchEnemyRate{ 1.f };

    /**
     * @brief Who can hear: AI sound radius magnification
     *
     * Correct the loudness of the AI sound emitted by the magnification
     */
    float hearingSearchEnemyRate{ 1.f };

    /**
     * @brief Gravity rate
     */
    float grabityRate{ 1.f };

    /**
     * @brief Poison resistance change rate
     *
     * Multiply the poison resistance value by the set multiplier
     */
    float registPoizonChangeRate{ 1.f };

    /**
     * @brief Epidemic resistance change rate
     *
     * Multiply the plague resistance value by the set magnification
     */
    float registDiseaseChangeRate{ 1.f };

    /**
     * @brief Bleeding resistance change rate
     *
     * Multiply the bleeding resistance value by the set magnification
     */
    float registBloodChangeRate{ 1.f };

    /**
     * @brief Curse resistance change rate
     *
     * Multiply the spell resistance value by the set multiplier
     */
    float registCurseChangeRate{ 1.f };

    /**
     * @brief Soul Steel Coefficient
     *
     * Defense against HP robbed by NPCs in Soul Steel
     */
    float soulStealRate{ 0.f };

    /**
     * @brief Defense: Life factor
     */
    float lifeReductionRate{ 0.f };

    /**
     * @brief HP recovery coefficient
     *
     * It doesn't work when HP decreases.
     */
    float hpRecoverRate{ 0.f };

    /**
     * @brief Special effects to replace
     *
     * Special effect ID added at the end of life (-1 is ignored)
     */
    int replaceSpEffectId{ -1 };

    /**
     * @brief Periodic special effects
     *
     * Special effect ID that occurs in each activation cycle (-1 is ignored)
     */
    int cycleOccurrenceSpEffectId{ -1 };

    /**
     * @brief Attack occurrence special effect
     *
     * Special effect ID that occurs when hitting an attack (-1 is ignored)
     */
    int atkOccurrenceSpEffectId{ -1 };

    /**
     * @brief When guarding, the defense power up rate
     *
     * Repellent defense correction value when guarding
     */
    float guardDefFlickPowerRate{ 1.f };

    /**
     * @brief Stamina cut magnification when guarding
     *
     * Stamina cut rate correction value when guarding
     */
    float guardStaminaCutRate{ 1.f };

    /**
     * @brief Passing the line of sight: Activation time [ms]
     *
     * Passing the line of sight: Activation time [ms] (for evil eye)
     */
    short rayCastPassedTime{ -1 };

    /**
     * @brief Vs to subcategory parameter change 1
     */
    unsigned char magicSubCategoryChange1{ 0 };

    /**
     * @brief Vs to subcategory parameter change 2
     */
    unsigned char magicSubCategoryChange2{ 0 };

    /**
     * @brief Bow distance correction [%]
     *
     * Correction value added to the flight distance correction of the weapon
     */
    short bowDistRate{ 0 };

    /**
     * @brief Special effects category
     *
     * Categories that determine behavior such as overwriting special effects
     */
    unsigned short spCategory{ 0 };

    /**
     * @brief In-category priority
     *
     * Priority within the same category (lower one has priority)
     */
    unsigned char categoryPriority{ 0 };

    /**
     * @brief Save category
     *
     * Category to save special effects
     */
    signed char saveCategory{ -1 };

    /**
     * @brief Magic registration frame change Magic slot
     *
     * You can increase the specified number of magic registration slots
     */
    unsigned char changeMagicSlot{ 0 };

    /**
     * @brief Miracle registration frame change Miracle slot
     *
     * You can increase the specified number of trajectory registration frames.
     */
    unsigned char changeMiracleSlot{ 0 };

    /**
     * @brief Human damage value
     *
     * Damage value given to human nature value
     */
    signed char heroPointDamage{ 0 };

    /**
     * @brief Repellent Defense_Overwrite
     *
     * Set a value that overwrites the repelling defense
     */
    unsigned char defFlickPower{ 0 };

    /**
     * @brief Damage attenuation rate when repelling [%] _ Overwrite
     *
     * Set a value that overwrites the damage attenuation rate at the time of
     * repelling
     */
    unsigned char flickDamageCutRate{ 0 };

    /**
     * @brief Bleeding damage correction factor
     *
     * Point damage of state change type [bleeding], correction value used only
     * when% damage
     */
    unsigned char bloodDamageRate{ 100 };

    /**
     * @brief DL_No damage (0)
     *
     * Specify the type to replace the damage Lv0
     */
    signed char dmgLv_None{ 0 };

    /**
     * @brief DL_Small (1)
     *
     * Specify the type to replace the damage Lv1
     */
    signed char dmgLv_S{ 0 };

    /**
     * @brief DL_Medium (2)
     *
     * Specify the type to replace the damage Lv2
     */
    signed char dmgLv_M{ 0 };

    /**
     * @brief DL_Large (3)
     *
     * Specify the type to replace the damage Lv3
     */
    signed char dmgLv_L{ 0 };

    /**
     * @brief DL_ Blow-off (4)
     *
     * Specify the type to replace the damage Lv4
     */
    signed char dmgLv_BlowM{ 0 };

    /**
     * @brief DL_push (5)
     *
     * Specify the type to replace the damage Lv5
     */
    signed char dmgLv_Push{ 0 };

    /**
     * @brief DL_Slamming (6)
     *
     * Specify the type to replace the damage Lv6
     */
    signed char dmgLv_Strike{ 0 };

    /**
     * @brief DL_Small blow (7)
     *
     * Specify the type to replace the damage Lv7
     */
    signed char dmgLv_BlowS{ 0 };

    /**
     * @brief DL_minimal (8)
     *
     * Specify the type to replace the damage Lv8
     */
    signed char dmgLv_Min{ 0 };

    /**
     * @brief DL_ Launch (9)
     *
     * Specify the type to replace the damage Lv9
     */
    signed char dmgLv_Uppercut{ 0 };

    /**
     * @brief DL_ Oversized Blowout (10)
     *
     * Specify the type to replace the damage Lv10
     */
    signed char dmgLv_BlowLL{ 0 };

    /**
     * @brief DL_Breath (11)
     *
     * Specify the type to replace the damage Lv11
     */
    signed char dmgLv_Breath{ 0 };

    /**
     * @brief Physical attributes
     *
     * Physical attributes to set for special effects
     */
    unsigned char atkAttribute{ 254 };

    /**
     * @brief Special attributes
     *
     * Special attributes to set for special effects
     */
    unsigned char spAttribute{ 254 };

    /**
     * @brief State change type
     *
     * State change judgment flag
     */
    unsigned short stateInfo{ 0 };

    /**
     * @brief Weapon parameter change
     *
     * Specify which weapon is effective. If there is no limit, all attacks and
     * defenses including enemies are targeted
     */
    unsigned char wepParamChange{ 0 };

    /**
     * @brief Movement type
     *
     * Movement type. Change the movement speed.
     */
    unsigned char moveType{ 0 };

    /**
     * @brief Defense: Life reduction type
     */
    unsigned short lifeReductionType{ 0 };

    /**
     * @brief Throwing conditions
     *
     * Throwing conditions. Affects the throwing mask.
     */
    unsigned char throwCondition{ 0 };

    /**
     * @brief Condition value to be added to the action judgment ID
     *
     * Condition value to add a value to the action judgment ID (Def: -1)
     */
    signed char addBehaviorJudgeId_condition{ -1 };

    /**
     * @brief Cold damage correction factor
     *
     * Correction value used only for point damage and% damage of state change
     * type [cold air]
     */
    unsigned char freezeDamageRate{ 100 };

    /**
     * @brief Effect target: Affiliation
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetSelf : 1 { false };

    /**
     * @brief Effect target: Affiliation ally
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetFriend : 1 { false };

    /**
     * @brief Effect target: Affiliation enemy
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetEnemy : 1 { false };

    /**
     * @brief Effect target: Operation PC
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetPlayer : 1 { false };

    /**
     * @brief Effect target: Operation AI
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetAI : 1 { false };

    /**
     * @brief Effect target: State survival
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetLive : 1 { false };

    /**
     * @brief Effect target: State All ghosts
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetGhost : 1 { false };

    /**
     * @brief Sleep disabled
     *
     * If this effect is applied, you will not sleep
     */
    bool disableSleep : 1 { false };

    /**
     * @brief Madness invalid
     *
     * With this effect, you won't go mad
     */
    bool disableMadness : 1 { false };

    /**
     * @brief Effect target: Activated by an attacker
     *
     * Apply special effects to attackers after damage (cannot enter defenders)
     */
    bool effectTargetAttacker : 1 { false };

    /**
     * @brief Icon display even if not activated
     *
     * The icon is displayed even in the state of waiting for activation.
     */
    bool dispIconNonactive : 1 { false };

    /**
     * @brief Whether to generate a regain gauge
     */
    bool regainGaugeDamage : 1 { false };

    /**
     * @brief Do you want to correct the magic power?
     */
    bool bAdjustMagicAblity : 1 { false };

    /**
     * @brief Do you correct your faith?
     */
    bool bAdjustFaithAblity : 1 { false };

    /**
     * @brief Is it for a lap bonus?
     *
     * Whether it is for the game clear lap bonus.
     */
    bool bGameClearBonus : 1 { false };

    /**
     * @brief Anti-magic parameter change
     *
     * Set whether or not it is effective against magic
     */
    bool magParamChange : 1 { false };

    /**
     * @brief Anti-miracle parameter change
     *
     * Set whether or not it is effective against miracles
     */
    bool miracleParamChange : 1 { false };

    /**
     * @brief Do you want to clear your soul?
     *
     * Possession soul becomes 0.
     */
    bool clearSoul : 1 { false };

    /**
     * @brief SOS sign judgment flag
     *
     * If checked, issue an SOS sign request when activated
     */
    bool requestSOS : 1 { false };

    /**
     * @brief Black SOS sign judgment flag
     *
     * If checked, issue a black SOS sign request when activated
     */
    bool requestBlackSOS : 1 { false };

    /**
     * @brief Intrusion_A request judgment flag
     *
     * If checked, issue an intrusion_A request when activated
     */
    bool requestForceJoinBlackSOS : 1 { false };

    /**
     * @brief Kick judgment flag
     *
     * If checked, a kick request will be issued at the time of activation.
     */
    bool requestKickSession : 1 { false };

    /**
     * @brief Exit judgment flag
     *
     * If checked, an exit request will be issued at the time of activation.
     */
    bool requestLeaveSession : 1 { false };

    /**
     * @brief NPC intrusion judgment flag
     *
     * If checked, an intrusion request to the NPC will be issued at the time of
     * activation.
     */
    bool requestNpcInveda : 1 { false };

    /**
     * @brief Undecidable judgment flag
     *
     * Whether you can be corpse. With this check, you will not be dead
     */
    bool noDead : 1 { false };

    /**
     * @brief Does HP now affect even if the maximum HP increases or decreases?
     */
    bool bCurrHPIndependeMaxHP : 1 { false };

    /**
     * @brief Ignore corrosion
     *
     * [State change type] ignores [Durability] decrease due to [Corrosion]
     */
    bool corrosionIgnore : 1 { false };

    /**
     * @brief Ignore visual search enemy cuts
     *
     * Ignore visual search invalidity
     */
    bool sightSearchCutIgnore : 1 { false };

    /**
     * @brief Ignore hearing search enemy cut
     *
     * Ignore auditory search invalidity
     */
    bool hearingSearchCutIgnore : 1 { false };

    /**
     * @brief Anti-magic disabled
     *
     * You can use magic even in the anti-magic range
     */
    bool antiMagicIgnore : 1 { false };

    /**
     * @brief False target invalid_ hallucination system
     *
     * Don't get caught in the fake target that occurred
     */
    bool fakeTargetIgnore : 1 { false };

    /**
     * @brief False target invalid_human
     *
     * You will not be caught by the fake target of the human system that
     * occurred
     */
    bool fakeTargetIgnoreUndead : 1 { false };

    /**
     * @brief False target invalid_beast system
     *
     * You will not be caught by the fake target of the beast system that
     * occurred
     */
    bool fakeTargetIgnoreAnimal : 1 { false };

    /**
     * @brief Gravity disabled
     *
     * Gravity effect disabled
     */
    bool grabityIgnore : 1 { false };

    /**
     * @brief Poison invalid
     *
     * If this effect is applied, it will not be poisoned.
     */
    bool disablePoison : 1 { false };

    /**
     * @brief Epidemic invalid
     *
     * If this effect is applied, you will not get plague
     */
    bool disableDisease : 1 { false };

    /**
     * @brief Bleeding disabled
     *
     * With this effect, you won't get bleeding
     */
    bool disableBlood : 1 { false };

    /**
     * @brief Curse invalid
     *
     * With this effect, you won't be cursed
     */
    bool disableCurse : 1 { false };

    /**
     * @brief Enchanting effective
     *
     * If this effect is applied, you will be fascinated.
     */
    bool enableCharm : 1 { false };

    /**
     * @brief Do you want to extend your life?
     *
     * Will the life be extended when the flag is set by TAE?
     */
    bool enableLifeTime : 1 { false };

    /**
     * @brief Do you want to correct your strength?
     */
    bool bAdjustStrengthAblity : 1 { false };

    /**
     * @brief Do you want to correct your workmanship?
     */
    bool bAdjustAgilityAblity : 1 { false };

    /**
     * @brief Will it be extinguished by bonfire recovery?
     */
    bool eraseOnBonfireRecover : 1 { false };

    /**
     * @brief Anti-throw parameter change
     *
     * Set whether or not it is effective against throwing attacks
     */
    bool throwAttackParamChange : 1 { false };

    /**
     * @brief Exit from the arena Judgment flag
     *
     * If checked, a request to leave the arena will be issued at the time of
     * activation.
     */
    bool requestLeaveColiseumSession : 1 { false };

    /**
     * @brief Will it be extended by the life extension effect?
     *
     * Whether to be eligible for extension when the life extension effect is
     * applied
     */
    bool isExtendSpEffectLife : 1 { false };

    /**
     * @brief Do you know the enemy?
     *
     * Do you know the enemy? : [Activation condition] (for evil eye users)
     */
    bool hasTarget : 1 { false };

    /**
     * @brief Do you want to replan when activated?
     *
     * Whether to replan at the time of activation
     */
    bool replanningOnFire : 1 { false };

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
     * @brief Attack side damage level replacement
     *
     * The damage level of the attacking side changes to this value
     */
    signed char repAtkDmgLv{ 0 };

    /**
     * @brief Viewer: Visual magnification
     *
     * Correct the ease of finding with a magnification
     */
    float sightSearchRate{ 1.f };

    /**
     * @brief Effect target: ● Hostile
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetOpposeTarget : 1 { false };

    /**
     * @brief Effect target: ○ Allies
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetFriendlyTarget : 1 { false };

    /**
     * @brief Effect target: myself
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetSelfTarget : 1 { false };

    /**
     * @brief Effect target: PC horse
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetPcHorse : 1 { false };

    /**
     * @brief Effect target: PC dead only
     *
     * Only the target for which this judgment is checked is effective, the
     * default is ×
     */
    bool effectTargetPcDeceased : 1 { false };

    /**
     * @brief Will it be shortened by the effect of shortening the life?
     *
     * Whether it will be shortened when the life shortening effect is applied
     */
    bool isContractSpEffectLife : 1 { false };

    /**
     * @brief Deleted when entering the waiting state
     *
     * Do you want to delete it the moment you are in a waiting state?
     */
    bool isWaitModeDelete : 1 { false };

    /**
     * @brief Will it be activated even when it is invincible?
     *
     * Whether to apply the damage from this special effect even in the
     * invincible state only when the state change type "Apply the activation
     * function even when invincible" is applied.
     */
    bool isIgnoreNoDamage : 1 { false };

    /**
     * @brief Team type change
     *
     * Overwrites the specified team type
     */
    signed char changeTeamType{ -1 };

    /**
     * @brief Damipoli ID
     *
     * Damipoli ID. Damipoli ID range is 0 to 999.1000, 10000 is the category
     * number.
     */
    short dmypolyId{ -1 };

    /**
     * @brief Special effect VfxId_0
     *
     * Special effect VfxId (-1 disabled)
     */
    int vfxId{ -1 };

    /**
     * @brief Special effect Id activated at the upper limit of the spirit ball
     */
    int accumuOverFireId{ -1 };

    /**
     * @brief Genkitama upper limit
     */
    int accumuOverVal{ -1 };

    /**
     * @brief Special effect Id activated at the lower limit of the spirit ball
     */
    int accumuUnderFireId{ -1 };

    /**
     * @brief Genkitama lower limit
     */
    int accumuUnderVal{ -1 };

    /**
     * @brief Genkitama accumulation value
     */
    int accumuVal{ 0 };

    /**
     * @brief How to see: Overwrite visual angle (height) [deg]
     *
     * Override the findability angle
     */
    unsigned char eye_angX{ 0 };

    /**
     * @brief How to see: Overwrite visual angle (width) [deg]
     *
     * Override the findability angle
     */
    unsigned char eye_angY{ 0 };

    /**
     * @brief Change the degree of death
     *
     * Add this value to the degree of death
     */
    short addDeceasedLv{ 0 };

    /**
     * @brief Special effect VfxId_1
     *
     * Special effect VfxId1 (-1 invalid)
     */
    int vfxId1{ -1 };

    /**
     * @brief Special effect VfxId_2
     *
     * Special effect VfxId2 (-1 invalid)
     */
    int vfxId2{ -1 };

    /**
     * @brief Special effect VfxId_3
     *
     * Special effect VfxId3 (-1 invalid)
     */
    int vfxId3{ -1 };

    /**
     * @brief Special effect VfxId_4
     *
     * Special effect VfxId4 (-1 invalid)
     */
    int vfxId4{ -1 };

    /**
     * @brief Special effect VfxId_5
     *
     * Special effect VfxId5 (-1 invalid)
     */
    int vfxId5{ -1 };

    /**
     * @brief Special effect VfxId_6
     *
     * Special effect VfxId6 (-1 invalid)
     */
    int vfxId6{ -1 };

    /**
     * @brief Special effect VfxId_7
     *
     * Special effect VfxId7 (-1 invalid)
     */
    int vfxId7{ -1 };

    /**
     * @brief Cold resistance attack power [point]
     *
     * Numerical value to be added to the target [Cold air resistance value]
     * when hit
     */
    int freezeAttackPower{ 0 };

    /**
     * @brief Generated AI sound ID
     *
     * Generates AI sound parameters with set values
     */
    int AppearAiSoundId{ 0 };

    /**
     * @brief Additional foot effect identifier
     *
     * The identifier of the foot effect that is additionally generated during
     * special effects. XYYZZZ ZZZ
     */
    short addFootEffectSfxId{ -1 };

    /**
     * @brief Virtual status for skill cancellation
     *
     * Add this value when calculating the end timing of the TAE flag of "Skill
     * Cancel".
     */
    signed char dexterityCancelSystemOnlyAddDexterity{ 0 };

    /**
     * @brief Team attack influence_overwrite
     *
     * Overwrite and change the target [Team Attack Influence] value. Do not
     * change the default value (-1).
     */
    signed char teamOffenseEffectivity{ -1 };

    /**
     * @brief Toughness Damage multiplier
     *
     * Toughness version cut rate
     */
    float toughnessDamageCutRate{ 1.f };

    /**
     * @brief Special attack A damage multiplier correction
     *
     * Special Attack A Damage multiplier is corrected. 1 is normal.
     */
    float weakDmgRateA{ 1.f };

    /**
     * @brief Special attack B damage multiplier correction
     *
     * Special attack B Damage multiplier is corrected. 1 is normal.
     */
    float weakDmgRateB{ 1.f };

    /**
     * @brief Special attack C damage multiplier correction
     *
     * Special attack C Damage multiplier is corrected. 1 is normal.
     */
    float weakDmgRateC{ 1.f };

    /**
     * @brief Special attack D damage multiplier correction
     *
     * Special attack D Damage multiplier is corrected. 1 is normal.
     */
    float weakDmgRateD{ 1.f };

    /**
     * @brief Special attack E damage multiplier correction
     *
     * Special attack E Damage multiplier is corrected. 1 is normal.
     */
    float weakDmgRateE{ 1.f };

    /**
     * @brief Special attack F damage multiplier correction
     *
     * Special attack F Damage multiplier is corrected. 1 is normal.
     */
    float weakDmgRateF{ 1.f };

    /**
     * @brief Defender: Dark damage multiplier
     *
     * Dark damage multiplier: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float darkDamageCutRate{ 1.f };

    /**
     * @brief Dark defense multiplier
     *
     * Multiply the darkness defense by the set value
     */
    float darkDiffenceRate{ 1.f };

    /**
     * @brief Dark defense [point]
     *
     * Add or subtract the value set for darkness defense
     */
    int darkDiffence{ 0 };

    /**
     * @brief Attacker: Dark damage multiplier
     *
     * Dark damage multiplier: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float darkAttackRate{ 1.f };

    /**
     * @brief Dark attack power multiplier
     *
     * Multiply the dark attack power by the set value
     */
    float darkAttackPowerRate{ 1.f };

    /**
     * @brief Dark attack power [point]
     *
     * Add or subtract the value set for the dark attack power
     */
    int darkAttackPower{ 0 };

    /**
     * @brief Radius of full view of darkness [m]
     *
     * Radius of full view of darkness [m]. If you are within this distance, you
     * will be able to see at normal distance even in the dark.
     */
    float antiDarkSightRadius{ 0.f };

    /**
     * @brief Damipoli ID with full view of darkness
     *
     * Damipoli ID (-1: Master) with full view of darkness. Create a full view
     * area around this Damipoli
     */
    int antiDarkSightDmypolyId{ -1 };

    /**
     * @brief Trigger condition: Remaining HP ratio is above a certain level [%]
     *
     * Activates only when you have HP above the specified value
     */
    float conditionHpRate{ -1.f };

    /**
     * @brief Consumption stamina magnification
     *
     * Multiply by multiplying the consumption stamina value of the behavior
     * parameter
     */
    float consumeStaminaRate{ 1.f };

    /**
     * @brief Item drop correction
     *
     * The set value is added to [Item Drop Correction]
     */
    float itemDropRate{ 0.f };

    /**
     * @brief Poison resistance change [point]
     *
     * Increase or decrease the state resistance value
     */
    int changePoisonResistPoint{ 0 };

    /**
     * @brief Epidemic resistance change [point]
     *
     * Increase or decrease the state resistance value
     */
    int changeDiseaseResistPoint{ 0 };

    /**
     * @brief Bleeding resistance change [point]
     *
     * Increase or decrease the state resistance value
     */
    int changeBloodResistPoint{ 0 };

    /**
     * @brief Curse resistance change [point]
     *
     * Increase or decrease the state resistance value
     */
    int changeCurseResistPoint{ 0 };

    /**
     * @brief Change in cold tolerance [point]
     *
     * Increase or decrease the state resistance value
     */
    int changeFreezeResistPoint{ 0 };

    /**
     * @brief Attacker: Slash damage multiplier
     *
     * Slash damage ratio: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float slashAttackRate{ 1.f };

    /**
     * @brief Attacker: Batter damage multiplier
     *
     * Batter damage ratio: The calculated damage is corrected by XX times. 1 is
     * normal.
     */
    float blowAttackRate{ 1.f };

    /**
     * @brief Attack side: piercing damage multiplier
     *
     * Puncture damage ratio: Correct the calculated damage by XX times. 1 is
     * normal.
     */
    float thrustAttackRate{ 1.f };

    /**
     * @brief Attacker: Non-attribute damage multiplier
     *
     * Non-attribute damage ratio: Correct the calculated damage by XX times. 1
     * is normal.
     */
    float neutralAttackRate{ 1.f };

    /**
     * @brief Slash attack power multiplier
     *
     * Multiply the slashing attack power by the set value
     */
    float slashAttackPowerRate{ 1.f };

    /**
     * @brief Batter attack power multiplier
     *
     * Multiply the hit attack power by the set value
     */
    float blowAttackPowerRate{ 1.f };

    /**
     * @brief Puncture attack power multiplier
     *
     * Multiply the piercing attack power by the set value
     */
    float thrustAttackPowerRate{ 1.f };

    /**
     * @brief Non-attribute attack power multiplier
     *
     * Multiply the non-attribute attack power by the set value
     */
    float neutralAttackPowerRate{ 1.f };

    /**
     * @brief Slash attack power [point]
     *
     * Add or subtract the value set for the slashing attack power
     */
    int slashAttackPower{ 0 };

    /**
     * @brief Batter attack power [point]
     *
     * Add or subtract the value set for the batter attack power
     */
    int blowAttackPower{ 0 };

    /**
     * @brief Puncture attack power [point]
     *
     * Add or subtract the value set for the piercing attack power
     */
    int thrustAttackPower{ 0 };

    /**
     * @brief Non-attribute attack power [point]
     *
     * Add or subtract the value set for non-attribute attack power
     */
    int neutralAttackPower{ 0 };

    /**
     * @brief Strength correction change [point]
     *
     * Add or subtract the correction value of the weapon
     */
    int changeStrengthPoint{ 0 };

    /**
     * @brief Agility correction change [point]
     *
     * Add or subtract the correction value of the weapon
     */
    int changeAgilityPoint{ 0 };

    /**
     * @brief Magic correction change [point]
     *
     * Add or subtract the correction value of the weapon
     */
    int changeMagicPoint{ 0 };

    /**
     * @brief Faith correction change [point]
     *
     * Add or subtract the correction value of the weapon
     */
    int changeFaithPoint{ 0 };

    /**
     * @brief Luck correction change [point]
     *
     * Add or subtract the correction value of the weapon
     */
    int changeLuckPoint{ 0 };

    /**
     * @brief Arts point recovery Strength system
     *
     * Arts Point Restores strength
     */
    signed char recoverArtsPoint_Str{ 0 };

    /**
     * @brief Arts point recovery workmanship system
     *
     * Restores arts point workmanship
     */
    signed char recoverArtsPoint_Dex{ 0 };

    /**
     * @brief Arts point recovery magic system
     *
     * Restores arts point magic
     */
    signed char recoverArtsPoint_Magic{ 0 };

    /**
     * @brief Arts point recovery Miracle system
     *
     * Recover arts point miracles
     */
    signed char recoverArtsPoint_Miracle{ 0 };

    /**
     * @brief Mad damage correction factor
     *
     * Correction value used only for point damage and% damage of state change
     * type [madness]
     */
    unsigned char madnessDamageRate{ 100 };

    /**
     * @brief Whether to apply the abnormal state attack power multiplier
     * correction
     *
     * If ○, the abnormal state attack power multiplier correction of the attack
     * para is applied.
     */
    bool isUseStatusAilmentAtkPowerCorrect : 1 { false };

    /**
     * @brief Whether to apply the attack power multiplier correction of the
     * attack parameter
     *
     * If ○, the attack power multiplier correction of the attack para is
     * applied.
     */
    bool isUseAtkParamAtkPowerCorrect : 1 { false };

    /**
     * @brief Do not delete at death
     *
     * If it is ○, it will not be deleted even if the character dies. Mainly
     * used for death effects.
     */
    bool dontDeleteOnDead : 1 { false };

    /**
     * @brief Cold air invalid
     *
     * When this effect is applied, it will not be cold
     */
    bool disableFreeze : 1 { false };

    /**
     * @brief Do not synchronize with the net
     *
     * Do not synchronize with the net. It does not mean that you will be able
     * to call it locally, but simply do not send it online. For example, a
     * remote character does not activate locally, so nothing happens in that
     * case.
     */
    bool isDisableNetSync : 1 { false };

    /**
     * @brief Anti-magic parameter change
     *
     * Set whether or not it is effective against spells
     */
    bool shamanParamChange : 1 { false };

    /**
     * @brief Stop notification of search enemy status
     *
     * Whether to stop notifications targeting your army (used by EventMaker
     * decisions and buddy platoons)
     */
    bool isStopSearchedNotify : 1 { false };

    /**
     * @brief It only takes when outside the rain shield
     *
     * If it is ○, it will not be applied when it is judged to be shielded (× is
     * always applied)
     */
    bool isCheckAboveShadowTest : 1 { false };

    /**
     * @brief Addition value to be added to the action judgment ID
     *
     * If the addition value of the action judgment ID is 0, the action is not
     * switched and the action is stopped.
     */
    unsigned short addBehaviorJudgeId_add{ 0 };

    /**
     * @brief SA value_damage ratio
     *
     * Multiplier for SA damage
     */
    float saReceiveDamageRate{ 1.f };

    /**
     * @brief Defending player Physical damage compensation factor
     *
     * Damage correction for the damage value received from the player.
     */
    float defPlayerDmgCorrectRate_Physics{ 1.f };

    /**
     * @brief Defending player magic damage correction multiplier
     *
     * Damage correction for the damage value received from the player.
     */
    float defPlayerDmgCorrectRate_Magic{ 1.f };

    /**
     * @brief Defending player Fire damage compensation factor
     *
     * Damage correction for the damage value received from the player.
     */
    float defPlayerDmgCorrectRate_Fire{ 1.f };

    /**
     * @brief Defending player Lightning damage compensation factor
     *
     * Damage correction for the damage value received from the player.
     */
    float defPlayerDmgCorrectRate_Thunder{ 1.f };

    /**
     * @brief Defending player Dark damage correction factor
     *
     * Damage correction for the damage value received from the player.
     */
    float defPlayerDmgCorrectRate_Dark{ 1.f };

    /**
     * @brief Defender Enemy Physical Damage Compensation Magnification
     *
     * Damage correction for the damage value received from the enemy.
     */
    float defEnemyDmgCorrectRate_Physics{ 1.f };

    /**
     * @brief Defender enemy magic damage correction factor
     *
     * Damage correction for the damage value received from the enemy.
     */
    float defEnemyDmgCorrectRate_Magic{ 1.f };

    /**
     * @brief Defender enemy flame damage correction factor
     *
     * Damage correction for the damage value received from the enemy.
     */
    float defEnemyDmgCorrectRate_Fire{ 1.f };

    /**
     * @brief Defender enemy lightning damage correction factor
     *
     * Damage correction for the damage value received from the enemy.
     */
    float defEnemyDmgCorrectRate_Thunder{ 1.f };

    /**
     * @brief Defender enemy darkness damage correction factor
     *
     * Damage correction for the damage value received from the enemy.
     */
    float defEnemyDmgCorrectRate_Dark{ 1.f };

    /**
     * @brief Defender Object Damage Compensation Magnification
     *
     * Damage correction for the damage value received from OBJ.
     */
    float defObjDmgCorrectRate{ 1.f };

    /**
     * @brief Attacking player Physical damage correction factor
     *
     * Damage correction for the damage value given to the player.
     */
    float atkPlayerDmgCorrectRate_Physics{ 1.f };

    /**
     * @brief Attacking player Magic damage compensation factor
     *
     * Damage correction for the damage value given to the player.
     */
    float atkPlayerDmgCorrectRate_Magic{ 1.f };

    /**
     * @brief Attacker Player Flame Damage Compensation Multiplier
     *
     * Damage correction for the damage value given to the player.
     */
    float atkPlayerDmgCorrectRate_Fire{ 1.f };

    /**
     * @brief Attacking player Lightning damage compensation factor
     *
     * Damage correction for the damage value given to the player.
     */
    float atkPlayerDmgCorrectRate_Thunder{ 1.f };

    /**
     * @brief Attacking player Dark damage correction factor
     *
     * Damage correction for the damage value given to the player.
     */
    float atkPlayerDmgCorrectRate_Dark{ 1.f };

    /**
     * @brief Attacker Enemy Physical Damage Compensation Magnification
     *
     * Damage correction for the damage value given to the enemy.
     */
    float atkEnemyDmgCorrectRate_Physics{ 1.f };

    /**
     * @brief Attacking side Enemy magic damage correction factor
     *
     * Damage correction for the damage value given to the enemy.
     */
    float atkEnemyDmgCorrectRate_Magic{ 1.f };

    /**
     * @brief Attacking side Enemy flame damage correction factor
     *
     * Damage correction for the damage value given to the enemy.
     */
    float atkEnemyDmgCorrectRate_Fire{ 1.f };

    /**
     * @brief Attacking side Enemy lightning damage correction factor
     *
     * Damage correction for the damage value given to the enemy.
     */
    float atkEnemyDmgCorrectRate_Thunder{ 1.f };

    /**
     * @brief Attacking side Enemy darkness damage correction factor
     *
     * Damage correction for the damage value given to the enemy.
     */
    float atkEnemyDmgCorrectRate_Dark{ 1.f };

    /**
     * @brief Cold resistance change rate
     *
     * Multiply the cold resistance value by the set magnification
     */
    float registFreezeChangeRate{ 1.f };

    /**
     * @brief Trigger condition state change type 1
     */
    unsigned short invocationConditionsStateChange1{ 0 };

    /**
     * @brief Trigger condition state change type 2
     */
    unsigned short invocationConditionsStateChange2{ 0 };

    /**
     * @brief Trigger condition state change type 3
     */
    unsigned short invocationConditionsStateChange3{ 0 };

    /**
     * @brief Listener: Overwrite audible AI sound level
     *
     * Overwrite how good your ears are
     */
    short hearingAiSoundLevel{ -1 };

    /**
     * @brief Capsule size magnification
     *
     * Magnification over the height of the character capsule
     */
    float chrProxyHeightRate{ 1.f };

    /**
     * @brief Search side addition correction_viewer
     */
    float addAwarePointCorrectValue_forMe{ 0.f };

    /**
     * @brief Searching degree addition correction _ side to be seen
     */
    float addAwarePointCorrectValue_forTarget{ 0.f };

    /**
     * @brief Those who can see: Visual addition
     *
     * Correct the ease of finding with a real number
     */
    float sightSearchEnemyAdd{ 0.f };

    /**
     * @brief How to see: Visual addition
     *
     * Correct the ease of finding with a real number
     */
    float sightSearchAdd{ 0.f };

    /**
     * @brief Listener: AI sound radius addition
     *
     * Correct the hearing of AI sounds with real numbers
     */
    float hearingSearchAdd{ 0.f };

    /**
     * @brief Listener: AI sound radius magnification
     *
     * Correct the audibility of AI sound by magnification
     */
    float hearingSearchRate{ 1.f };

    /**
     * @brief Those who can hear: AI sound radius addition
     *
     * Correct the loudness of the emitted AI sound with a real number
     */
    float hearingSearchEnemyAdd{ 0.f };

    /**
     * @brief Sales price correction: Magnification
     */
    float value_Magnification{ 1.f };

    /**
     * @brief Arts MP consumption magnification
     *
     * Arts MP consumption multiplier [%]
     */
    float artsConsumptionRate{ 1.f };

    /**
     * @brief Magic consumption MP magnification
     *
     * Magic consumption MP multiplier [%]
     */
    float magicConsumptionRate{ 1.f };

    /**
     * @brief Magic consumption MP multiplier
     *
     * Magic consumption MP multiplier [%]
     */
    float shamanConsumptionRate{ 1.f };

    /**
     * @brief Miracle consumption MP magnification
     *
     * Miracle consumption MP magnification [%]
     */
    float miracleConsumptionRate{ 1.f };

    /**
     * @brief Est bottle HP damage amount [%]
     *
     * Set what percentage of the maximum HP to add (or subtract) with one
     * activation
     */
    int changeHpEstusFlaskRate{ 0 };

    /**
     * @brief Est bottle HP damage amount [point]
     *
     * Set how many points to add (or subtract) with one activation
     */
    int changeHpEstusFlaskPoint{ 0 };

    /**
     * @brief Est Bottle MP Damage Amount [%]
     *
     * Set what percentage of the maximum MP to add (or subtract) with one
     * activation
     */
    int changeMpEstusFlaskRate{ 0 };

    /**
     * @brief Est Bottle MP Damage Amount [point]
     *
     * Set how many points to add (or subtract) with one activation
     */
    int changeMpEstusFlaskPoint{ 0 };

    /**
     * @brief Est bottle HP damage multiplier
     *
     * Correct the damage amount of the HP Est bottle
     */
    float changeHpEstusFlaskCorrectRate{ 1.f };

    /**
     * @brief Est bottle MP damage multiplier
     *
     * Correct the damage amount of MP Est Bottle
     */
    float changeMpEstusFlaskCorrectRate{ 1.f };

    /**
     * @brief HP drain activation special effect
     *
     * When the special effect of the state change type "HP drain" is enabled,
     * when the enemy is defeated, the special effect ID set in the "HP drain
     * activation special effect" of the same special effect is called (0:
     * ignore).
     */
    int applyIdOnGetSoul{ 0 };

    /**
     * @brief Life extension factor
     *
     * Extension coefficient of state change type "life extension"
     */
    float extendLifeRate{ 1.f };

    /**
     * @brief Life shortening ratio
     *
     * Shortening coefficient of state change type "life shortening"
     */
    float contractLifeRate{ 1.f };

    /**
     * @brief Damaged object attack power multiplier
     *
     * Corrects the attack power against the damage received from OBJ. (Not
     * damage compensation)
     */
    float defObjectAttackPowerRate{ 1.f };

    /**
     * @brief Group ID that deletes the character's paint decal when the special
     * effect disappears
     *
     * When the special effect disappears (lifetime / overwritten / erased ...
     * etc.), the paint decal is deleted if the special effect of the same group
     * ID is not applied.
     */
    short effectEndDeleteDecalGroupId{ -1 };

    /**
     * @brief Vitality additional value
     *
     * Add value to growth status
     */
    signed char addLifeForceStatus{ 0 };

    /**
     * @brief Mental strength additional value
     *
     * Add value to growth status
     */
    signed char addWillpowerStatus{ 0 };

    /**
     * @brief Endurance additional value
     *
     * Add value to growth status
     */
    signed char addEndureStatus{ 0 };

    /**
     * @brief Additional physical strength
     *
     * Add value to growth status
     */
    signed char addVitalityStatus{ 0 };

    /**
     * @brief Strength addition value
     *
     * Add value to growth status
     */
    signed char addStrengthStatus{ 0 };

    /**
     * @brief Workmanship addition value
     *
     * Add value to growth status
     */
    signed char addDexterityStatus{ 0 };

    /**
     * @brief Force addition value
     *
     * Add value to growth status
     */
    signed char addMagicStatus{ 0 };

    /**
     * @brief Faith additional value
     *
     * Add value to growth status
     */
    signed char addFaithStatus{ 0 };

    /**
     * @brief Luck addition value
     *
     * Add value to growth status
     */
    signed char addLuckStatus{ 0 };

    /**
     * @brief Deletion condition damage
     *
     * Reason for damage under the condition to remove special effects
     */
    unsigned char deleteCriteriaDamage{ 0 };

    /**
     * @brief Vs to subcategory parameter change 3
     */
    unsigned char magicSubCategoryChange3{ 0 };

    /**
     * @brief Special attribute variation value
     *
     * This value is used to give variation to abnormal state SFX, SE, etc. in
     * combination with the special attribute set for the special effect.
     * SEQ16473
     */
    unsigned char spAttributeVariationValue{ 0 };

    /**
     * @brief Repelling attack power_overwrite
     *
     * Set a value that overwrites the repelling attack power
     */
    unsigned char atkFlickPower{ 0 };

    /**
     * @brief Water level setting for wet conditions
     *
     * TimeAct Determines whether special effects are applied in combination
     * with "at what water level you get wet"
     */
    unsigned char wetConditionDepth{ 0 };

    /**
     * @brief SA recovery speed change
     *
     * Change the recovery speed of SA durability
     */
    float changeSaRecoveryVelocity{ 1.f };

    /**
     * @brief Regain magnification
     */
    float regainRate{ 1.f };

    /**
     * @brief SA attack power multiplier
     */
    float saAttackPowerRate{ 1.f };

    /**
     * @brief Sleep tolerance attack power [point]
     *
     * Numerical value to be added to the target's [Sleep tolerance] when hit
     */
    int sleepAttackPower{ 0 };

    /**
     * @brief Madness resistance attack power [point]
     *
     * A number to be added to the target's [madness resistance value] when it
     * hits
     */
    int madnessAttackPower{ 0 };

    /**
     * @brief Sleep tolerance change rate
     *
     * Multiply the sleep tolerance value by the set magnification
     */
    float registSleepChangeRate{ 1.f };

    /**
     * @brief Madness resistance change rate
     *
     * Multiply the madness resistance value by the set multiplier
     */
    float registMadnessChangeRate{ 1.f };

    /**
     * @brief Changes in sleep tolerance [point]
     *
     * Increase or decrease the state resistance value
     */
    int changeSleepResistPoint{ 0 };

    /**
     * @brief Madness resistance change [point]
     *
     * Increase or decrease the state resistance value
     */
    int changeMadnessResistPoint{ 0 };

    /**
     * @brief Sleep damage correction factor
     *
     * Point damage of state change type [Sleep], correction value used only
     * when% damage
     */
    unsigned char sleepDamageRate{ 100 };

    /**
     * @brief Changes in site parameters
     *
     * The effect is limited by the part where the attack hits. Only defensive
     * items in damage calculation are subject to restriction
     */
    unsigned char applyPartsGroup{ 0 };

    /**
     * @brief Clear the target
     *
     * Does not recognize the target while the special effect is applied
     * (excluding the riding target)
     */
    bool clearTarget : 1 { false };

    /**
     * @brief False target invalid_subhuman
     *
     * You will not be caught by the fake target of the subhuman system that
     * occurred
     */
    bool fakeTargetIgnoreAjin : 1 { false };

    /**
     * @brief False target invalid_phantom arts system
     *
     * You will not be caught by the fake target of the phantom arts system that
     * occurred
     */
    bool fakeTargetIgnoreMirageArts : 1 { false };

    /**
     * @brief Intrusion_B request judgment flag
     *
     * If checked, issue an intrusion_B request when activated
     */
    bool requestForceJoinBlackSOS_B : 1 { false };

    bool unk353_4 : 1 { false };

    unsigned char pad2[1];

    /**
     * @brief Maximum SA addition value [point]
     *
     * Value to add to the super armor value
     */
    float changeSuperArmorPoint{ 0.f };

    /**
     * @brief SA damage amount [point]
     *
     * Set how many points to subtract (or add) with one activation
     */
    float changeSaPoint{ 0.f };

    /**
     * @brief Giant enemy lift height overwrite [m]
     */
    float hugeEnemyPickupHeightOverwrite{ 0.f };

    /**
     * @brief Defender: Poison resistance damage multiplier
     *
     * Poison resistance damage ratio: Correct the calculated damage by XX
     * times. 1 is normal.
     */
    float poisonDefDamageRate{ 1.f };

    /**
     * @brief Defender: Epidemic resistance damage multiplier
     *
     * Epidemic resistance damage ratio: Correct the calculated damage by XX
     * times. 1 is normal.
     */
    float diseaseDefDamageRate{ 1.f };

    /**
     * @brief Defender: Bleeding resistance damage multiplier
     *
     * Bleeding resistance damage ratio: Correct the calculated damage by XX
     * times. 1 is normal.
     */
    float bloodDefDamageRate{ 1.f };

    /**
     * @brief Defender: Curse resistance damage multiplier
     *
     * Curse resistance damage multiplier: Corrects the calculated damage by XX
     * times. 1 is normal.
     */
    float curseDefDamageRate{ 1.f };

    /**
     * @brief Defender: Cold resistance damage multiplier
     *
     * Cold resistance damage ratio: Correct the calculated damage by XX times.
     * 1 is normal.
     */
    float freezeDefDamageRate{ 1.f };

    /**
     * @brief Defender: Sleep resistance damage multiplier
     *
     * Sleep resistance damage ratio: Correct the calculated damage by XX times.
     * 1 is normal.
     */
    float sleepDefDamageRate{ 1.f };

    /**
     * @brief Defender: Madness resistance damage multiplier
     *
     * Madness resistance damage multiplier: Correct the calculated damage by XX
     * times. 1 is normal.
     */
    float madnessDefDamageRate{ 1.f };

    /**
     * @brief Distance to go home no matter what [m] _ overwrite
     */
    unsigned short overwrite_maxBackhomeDist{ 0 };

    /**
     * @brief Distance to return home while fighting [m] _ Overwrite
     */
    unsigned short overwrite_backhomeDist{ 0 };

    /**
     * @brief Distance to give up and fight to return to the nest [m] _
     * overwrite
     */
    unsigned short overwrite_backhomeBattleDist{ 0 };

    /**
     * @brief When returning home: Distance to see the target [m] _ Overwrite
     */
    unsigned short overwrite_BackHome_LookTargetDist{ 0 };

    /**
     * @brief Item consumption MP magnification
     *
     * Item consumption MP multiplier
     */
    float goodsConsumptionRate{ 1.f };

    /**
     * @brief Guard stamina magnification 
     */
    float guardStaminaMult{ 1.f };

    unsigned char unk3[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::SP_EFFECT_PARAM_ST) == 912,
    "SP_EFFECT_PARAM_ST paramdef size does not match detected size");
