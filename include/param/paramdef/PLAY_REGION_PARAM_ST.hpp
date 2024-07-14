/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct PLAY_REGION_PARAM_ST {
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
     * @brief Simple match area ID
     */
    int matchAreaId{ 0 };

    /**
     * @brief Multiplayer start limit event flag ID
     */
    unsigned int multiPlayStartLimitEventFlagId{ 0 };

    /**
     * @brief Other distances that cannot be invaded by spirits
     *
     * Other distances that cannot be invaded by spirits. The intrusion position
     * is searched for the intrusion points within the "other ghost invasion
     * impossible distance" to the "other ghost invasion range upper limit" from
     * the host position.
     */
    float otherDisableDistance{ 0.f };

    /**
     * @brief PC position save limit event flag ID
     *
     * PC position save restriction event flag ID (flag ON: PC position save
     * valid flag OFF: PC position save invalid 0: PC position save always
     * valid)
     */
    unsigned int pcPositionSaveLimitEventFlagId{ 0 };

    /**
     * @brief Boss area ID
     *
     * Areas with the same ID are treated as the same boss area.
     */
    unsigned int bossAreaId{ 0 };

    /**
     * @brief NPC White Spirit Summon Ritual Summon NPC Entity ID Free Frame ID
     *
     * NPC White Spirit Summon Ritual Summon The beginning of the free frame ID
     * used as the NPC's entity ID
     */
    short cultNpcWhiteGhostEntityId_byFree{ -1 };

    /**
     * @brief Is it a map guardian area?
     *
     * Whether to increase or decrease the frame of the map protection area
     */
    bool bMapGuradianRegion{ false };

    /**
     * @brief Is it the old man sign area of yellow robe?
     */
    bool bYellowCostumeRegion : 1 { false };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "multiplayer start restriction event flag ID"
     */
    bool multiPlayStartLimitEventFlagId_targetFlagState : 1 { true };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "intrusion restriction event flag ID1"
     */
    bool breakInLimitEventFlagId_1_targetFlagState : 1 { true };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "white sign restriction event flag ID1"
     */
    bool whiteSignLimitEventFlagId_1_targetFlagState : 1 { true };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "red sign limit event flag ID1"
     */
    bool redSignLimitEventFlagId_1_targetFlagState : 1 { true };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "intrusion restriction event flag ID2"
     */
    bool breakInLimitEventFlagId_2_targetFlagState : 1 { true };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "intrusion restriction event flag ID3"
     */
    bool breakInLimitEventFlagId_3_targetFlagState : 1 { true };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "white sign restriction event flag ID2"
     */
    bool whiteSignLimitEventFlagId_2_targetFlagState : 1 { true };

    /**
     * @brief Warp item permit bonfire ID1
     *
     * Bonfire entity ID1 used to determine whether to allow the use of warp
     * items
     */
    unsigned int warpItemUsePermitBonfireId_1{ 0 };

    /**
     * @brief Warp item permit bonfire ID2
     *
     * Bonfire entity ID 2 used to determine permission to use warp items
     */
    unsigned int warpItemUsePermitBonfireId_2{ 0 };

    /**
     * @brief Warp item permit bonfire ID3
     *
     * Bonfire entity ID 3 used to determine permission to use warp items
     */
    unsigned int warpItemUsePermitBonfireId_3{ 0 };

    /**
     * @brief Warp item permit bonfire ID4
     *
     * Bonfire entity ID 4 used to determine permission to use warp items
     */
    unsigned int warpItemUsePermitBonfireId_4{ 0 };

    /**
     * @brief Warp item permit bonfire ID5
     *
     * Bonfire entity ID 5 used to determine permission to use warp items
     */
    unsigned int warpItemUsePermitBonfireId_5{ 0 };

    /**
     * @brief Warp item prohibited event flag ID1
     *
     * Event flag ID 1 to determine the prohibition of warp items. Warp item
     * permission Higher priority than judgment by bonfire ID
     */
    unsigned int warpItemProhibitionEventFlagId_1{ 0 };

    /**
     * @brief Warp item prohibited event flag ID2
     *
     * Event flag ID 2 to determine the prohibition of warp items. Warp item
     * permission Higher priority than judgment by bonfire ID
     */
    unsigned int warpItemProhibitionEventFlagId_2{ 0 };

    /**
     * @brief Warp item prohibited event flag ID3
     *
     * Event flag ID 3 to determine the prohibition of warp items. Warp item
     * permission Higher priority than judgment by bonfire ID
     */
    unsigned int warpItemProhibitionEventFlagId_3{ 0 };

    /**
     * @brief Warp item prohibited event flag ID4
     *
     * Event flag ID 4 to determine the prohibition of warp items. Warp item
     * permission Higher priority than judgment by bonfire ID
     */
    unsigned int warpItemProhibitionEventFlagId_4{ 0 };

    /**
     * @brief Warp Item Ban Event Flag ID 5
     *
     * Event flag ID 5 to determine the prohibition of warp items. Warp item
     * permission Higher priority than judgment by bonfire ID
     */
    unsigned int warpItemProhibitionEventFlagId_5{ 0 };

    /**
     * @brief Effective bloodstain / death illusion
     */
    bool enableBloodstain : 1 { true };

    /**
     * @brief Blood character valid
     */
    bool enableBloodMessage : 1 { true };

    /**
     * @brief Phantom effective
     */
    bool enableGhost : 1 { true };

    /**
     * @brief Map display_display setting M00
     *
     * Whether to display on map M00
     */
    bool dispMask00 : 1 { false };

    /**
     * @brief For map display_Display setting M01
     *
     * Whether to display on map M01
     */
    bool dispMask01 : 1 { false };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "white sign restriction event flag ID3"
     */
    bool whiteSignLimitEventFlagId_3_targetFlagState : 1 { true };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "red sign limit event flag ID2"
     */
    bool redSignLimitEventFlagId_2_targetFlagState : 1 { true };

    /**
     * @brief Flag state to limit
     *
     * Flag state that limits "red sign limit event flag ID3"
     */
    bool redSignLimitEventFlagId_3_targetFlagState : 1 { true };

    /**
     * @brief Is it automatic generation of intrusion points?
     *
     * Is it an intrusion point automatic generation? If it is set to ○, the
     * intrusion position is searched by the automatically generated logic for
     * the intrusion point.
     */
    bool isAutoIntrudePoint : 1 { false };

	unsigned char unknown_0x45_1: 1 { 0 };

	unsigned char pad1: 6;

	unsigned char pad2[2];

    /**
     * @brief Yellow robe's old man host restriction event flag
     *
     * Yellow Coat Host Restriction Event Flag: When this flag is turned on,
     * multiplayer as a host of Yellow Coat is prohibited. It is assumed that
     * the block clear flag will be inserted. 0: No limit
     */
    unsigned int multiPlayHASHostLimitEventFlagId{ 0 };

    /**
     * @brief Other ghost invasion range upper limit
     *
     * Other ghost invasion range upper limit. The intrusion position is
     * searched for the intrusion points within the "other ghost invasion
     * impossible distance" to the "other ghost invasion range upper limit" from
     * the host position.
     */
    float otherMaxDistance{ 1000.f };

    /**
     * @brief Sign pool release event flag ID
     *
     * Sign accumulation release event flag ID
     */
    unsigned int signPuddleOpenEventFlagId{ 0 };

    /**
     * @brief Map display_area number (mXX_00_00_00)
     *
     * Area number (mXX_00_00_00). Data for specifying the display position in
     * the map menu
     */
    unsigned char areaNo{ 0 };

    /**
     * @brief Map display_grid X number (m00_XX_00_00)
     *
     * Grid X number (m00_XX_00_00). Data for specifying the display position in
     * the map menu
     */
    unsigned char gridXNo{ 0 };

    /**
     * @brief Map display_grid Z number (m00_00_XX_00)
     *
     * Grid Z number (m00_00_XX_00). Data for specifying the display position in
     * the map menu
     */
    unsigned char gridZNo{ 0 };

    unsigned char pad4[1];

    /**
     * @brief _X coordinates for map display
     *
     * X coordinates (relative coordinates from the specified map). Data for
     * specifying the display position in the map menu
     */
    float posX{ 0.f };

    /**
     * @brief _Y coordinates for map display
     *
     * Y coordinates (relative coordinates from the specified map). Data for
     * specifying the display position in the map menu. Not actually used, but
     * keep XYZ aligned
     */
    float posY{ 0.f };

    /**
     * @brief _Z coordinates for map display
     *
     * Z coordinates (relative coordinates from the specified map). Data for
     * specifying the display position in the map menu
     */
    float posZ{ 0.f };

    /**
     * @brief Intrusion restriction event flag ID1
     */
    unsigned int breakInLimitEventFlagId_1{ 0 };

    /**
     * @brief White sign limit event flag ID1
     */
    unsigned int whiteSignLimitEventFlagId_1{ 0 };

    /**
     * @brief Sign accumulation registration restriction Event flag ID
     *
     * Sign accumulation registration restriction Event flag ID (Flag ON: Sign
     * accumulation registration is permitted Flag OFF: Sign accumulation
     * registration is prohibited 0: Sign accumulation registration is always
     * permitted)
     */
    unsigned int matchAreaSignCreateLimitEventFlagId{ 0 };

    /**
     * @brief Multipurpose ID 01
     *
     * Multi-purpose ID to be displayed in the list when setting the purpose
     */
    unsigned int signAimId_1{ 0 };

    /**
     * @brief Multipurpose ID 02
     *
     * Multi-purpose ID to be displayed in the list when setting the purpose
     */
    unsigned int signAimId_2{ 0 };

    /**
     * @brief Multipurpose ID 03
     *
     * Multi-purpose ID to be displayed in the list when setting the purpose
     */
    unsigned int signAimId_3{ 0 };

    /**
     * @brief Multipurpose ID 04
     *
     * Multi-purpose ID to be displayed in the list when setting the purpose
     */
    unsigned int signAimId_4{ 0 };

    /**
     * @brief Multipurpose ID 05
     *
     * Multi-purpose ID to be displayed in the list when setting the purpose
     */
    unsigned int signAimId_5{ 0 };

    /**
     * @brief Multipurpose ID 06
     *
     * Multi-purpose ID to be displayed in the list when setting the purpose
     */
    unsigned int signAimId_6{ 0 };

    /**
     * @brief Multipurpose ID 07
     *
     * Multi-purpose ID to be displayed in the list when setting the purpose
     */
    unsigned int signAimId_7{ 0 };

    /**
     * @brief Multipurpose ID08
     *
     * Multi-purpose ID to be displayed in the list when setting the purpose
     */
    unsigned int signAimId_8{ 0 };

    /**
     * @brief Red sign limit event flag ID1
     */
    unsigned int redSignLimitEventFlagId_1{ 0 };

    /**
     * @brief Intrusion restriction event flag ID2
     */
    unsigned int breakInLimitEventFlagId_2{ 0 };

    /**
     * @brief Intrusion restriction event flag ID3
     */
    unsigned int breakInLimitEventFlagId_3{ 0 };

    /**
     * @brief White sign limit event flag ID2
     */
    unsigned int whiteSignLimitEventFlagId_2{ 0 };

    /**
     * @brief White sign limit event flag ID3
     */
    unsigned int whiteSignLimitEventFlagId_3{ 0 };

    /**
     * @brief Red sign limit event flag ID2
     */
    unsigned int redSignLimitEventFlagId_2{ 0 };

    /**
     * @brief Red sign limit event flag ID3
     */
    unsigned int redSignLimitEventFlagId_3{ 0 };

    /**
     * @brief Area boss ID01
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_1{ 0 };

    /**
     * @brief Area boss ID02
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_2{ 0 };

    /**
     * @brief Area boss ID03
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_3{ 0 };

    /**
     * @brief Area boss ID04
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_4{ 0 };

    /**
     * @brief Area Boss ID 05
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_5{ 0 };

    /**
     * @brief Area Boss ID 06
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_6{ 0 };

    /**
     * @brief Area Boss ID 07
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_7{ 0 };

    /**
     * @brief Area boss ID08
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_8{ 0 };

    /**
     * @brief Area Boss ID 09
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_9{ 0 };

    /**
     * @brief Area boss ID 10
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_10{ 0 };

    /**
     * @brief In-area boss ID 11
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_11{ 0 };

    /**
     * @brief In-area boss ID 12
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_12{ 0 };

    /**
     * @brief Area boss ID 13
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_13{ 0 };

    /**
     * @brief Area boss ID14
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_14{ 0 };

    /**
     * @brief Area boss ID15
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_15{ 0 };

    /**
     * @brief Area boss ID 16
     *
     * Area boss ID. It is used to select the target boss when "Is the intrusion
     * point automatically generated?" Is ○.
     */
    unsigned int bossId_16{ 0 };

    /**
     * @brief Map display_event flag ID
     *
     * Map display_event flag ID (0: always displayed). Only when this event
     * flag is set, it will be displayed in a lively manner in the map menu.
     */
    unsigned int mapMenuUnlockEventId{ 0 };

    unsigned char pad5[32];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::PLAY_REGION_PARAM_ST) == 272,
    "PLAY_REGION_PARAM_ST paramdef size does not match detected size");
