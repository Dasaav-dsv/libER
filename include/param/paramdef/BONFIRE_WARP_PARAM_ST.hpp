/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct BONFIRE_WARP_PARAM_ST {
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
     * @brief Event flag ID
     *
     * Release condition event flag ID
     */
    unsigned int eventflagId{ 0 };

    /**
     * @brief Bonfire entity ID
     */
    unsigned int bonfireEntityId{ 0 };

    unsigned char pad4[2];

    /**
     * @brief Sort ID
     *
     * Bonfire Warp Subcategory Sort ID. Specify the order (ascending order) in
     * the same subcategory
     */
    unsigned short bonfireSubCategorySortId{ 0 };

    /**
     * @brief Warp Prohibition Icon ID
     *
     * Icon ID when warp is prohibited
     */
    unsigned short forbiddenIconId{ 0 };

    /**
     * @brief Display zoom step
     *
     * Zoom step to display the bonfire (0 when zoomed out most, +1 for each
     * zoom). Displayed when "<< Display zoom step >> ≤ Current zoom step".
     * Default is 0 (always displayed)
     */
    unsigned char dispMinZoomStep{ 0 };

    /**
     * @brief Selectable zoom steps
     *
     * A zoom step that allows you to select and snap a bonfire (0 for the most
     * zoomed out state, +1 for each zoom). Can be selected and snapped when "<<
     * Selectable zoom step >> ≤ current enlargement stage". The default is 0
     * (always selectable / snappable)
     */
    unsigned char selectMinZoomStep{ 0 };

    /**
     * @brief Subcategory ID
     *
     * Bonfire Warp Subcategory Parameter ID (-1: Invalid). Set which
     * subcategory it belongs to. If it is invalid, it will not be displayed in
     * the bonfire list.
     */
    int bonfireSubCategoryId{ -1 };

    /**
     * @brief Cleared event flag ID
     *
     * Cleared event flag ID (0: always treated as cleared)
     */
    unsigned int clearedEventFlagId{ 0 };

    /**
     * @brief Icon ID
     */
    unsigned short iconId{ 0 };

    /**
     * @brief Display setting M00
     *
     * Whether to display with M00
     */
    bool dispMask00 : 1 { false };

    /**
     * @brief Display setting M01
     *
     * Whether to display with M01
     */
    bool dispMask01 : 1 { false };

    /**
     * @brief dispMask02
     */
    unsigned char dispMask02 : 1 { 0 };

    unsigned char pad1 : 5;

    unsigned char pad2[1];

    /**
     * @brief Area number
     *
     * AA part of mAA_BB_CC_DD
     */
    unsigned char areaNo{ 0 };

    /**
     * @brief Grid X number
     *
     * BB part of mAA_BB_CC_DD
     */
    unsigned char gridXNo{ 0 };

    /**
     * @brief Grid Z number
     *
     * CC part of mAA_BB_CC_DD
     */
    unsigned char gridZNo{ 0 };

    unsigned char pad3[1];

    /**
     * @brief X coordinate
     */
    float posX{ 0.f };

    /**
     * @brief Y coordinate
     *
     * Y coordinate (not used)
     */
    float posY{ 0.f };

    /**
     * @brief Z coordinate
     */
    float posZ{ 0.f };

    /**
     * @brief Text ID
     *
     * The text ID to display. If the value is invalid (-1), nothing is
     * displayed.
     */
    int textId1{ -1 };

    /**
     * @brief Occurrence event flag ID
     *
     * Display text Event flag ID. Display if the event flag is On. If the event
     * flag ID (0) is invalid, it will be treated as On.
     */
    unsigned int textEnableFlagId1{ 0 };

    /**
     * @brief Hidden event flag ID
     *
     * Hidden event flag ID of the text. If the event flag is On, it will not be
     * displayed. It takes precedence over the display event flag ID. If the
     * event flag ID (0) is invalid, it will be treated as Off.
     */
    unsigned int textDisableFlagId1{ 0 };

    /**
     * @brief Text ID
     *
     * The text ID to display. If it is an invalid value (-2), nothing is
     * displayed.
     */
    int textId2{ -1 };

    /**
     * @brief Occurrence event flag ID
     *
     * Display text Event flag ID. Display if the event flag is On. If the event
     * flag ID (1) is invalid, it will be treated as On.
     */
    unsigned int textEnableFlagId2{ 0 };

    /**
     * @brief Hidden event flag ID
     *
     * Hidden event flag ID of the text. If the event flag is On, it will not be
     * displayed. It takes precedence over the display event flag ID. If the
     * event flag ID (1) is invalid, it will be treated as Off.
     */
    unsigned int textDisableFlagId2{ 0 };

    /**
     * @brief Text ID
     *
     * The text ID to display. If it is an invalid value (-3), nothing is
     * displayed.
     */
    int textId3{ -1 };

    /**
     * @brief Occurrence event flag ID
     *
     * Display text Event flag ID. Display if the event flag is On. If the event
     * flag ID (2) is invalid, it will be treated as On.
     */
    unsigned int textEnableFlagId3{ 0 };

    /**
     * @brief Hidden event flag ID
     *
     * Hidden event flag ID of the text. If the event flag is On, it will not be
     * displayed. It takes precedence over the display event flag ID. If the
     * event flag ID (2) is invalid, it will be treated as Off.
     */
    unsigned int textDisableFlagId3{ 0 };

    /**
     * @brief Text ID
     *
     * The text ID to display. If it is an invalid value (-4), nothing is
     * displayed.
     */
    int textId4{ -1 };

    /**
     * @brief Occurrence event flag ID
     *
     * Display text Event flag ID. Display if the event flag is On. If the event
     * flag ID (3) is invalid, it will be treated as On.
     */
    unsigned int textEnableFlagId4{ 0 };

    /**
     * @brief Hidden event flag ID
     *
     * Hidden event flag ID of the text. If the event flag is On, it will not be
     * displayed. It takes precedence over the display event flag ID. If the
     * event flag ID (3) is invalid, it will be treated as Off.
     */
    unsigned int textDisableFlagId4{ 0 };

    /**
     * @brief Text ID
     *
     * The text ID to display. If it is an invalid value (-5), nothing is
     * displayed.
     */
    int textId5{ -1 };

    /**
     * @brief Occurrence event flag ID
     *
     * Display text Event flag ID. Display if the event flag is On. If the event
     * flag ID (4) is invalid, it will be treated as On.
     */
    unsigned int textEnableFlagId5{ 0 };

    /**
     * @brief Hidden event flag ID
     *
     * Hidden event flag ID of the text. If the event flag is On, it will not be
     * displayed. It takes precedence over the display event flag ID. If the
     * event flag ID (4) is invalid, it will be treated as Off.
     */
    unsigned int textDisableFlagId5{ 0 };

    /**
     * @brief Text ID
     *
     * The text ID to display. If it is an invalid value (-6), nothing is
     * displayed.
     */
    int textId6{ -1 };

    /**
     * @brief Occurrence event flag ID
     *
     * Display text Event flag ID. Display if the event flag is On. If the event
     * flag ID (5) is invalid, it will be treated as On.
     */
    unsigned int textEnableFlagId6{ 0 };

    /**
     * @brief Hidden event flag ID
     *
     * Hidden event flag ID of the text. If the event flag is On, it will not be
     * displayed. It takes precedence over the display event flag ID. If the
     * event flag ID (5) is invalid, it will be treated as Off.
     */
    unsigned int textDisableFlagId6{ 0 };

    /**
     * @brief Text ID
     *
     * The text ID to display. If it is an invalid value (-7), nothing is
     * displayed.
     */
    int textId7{ -1 };

    /**
     * @brief Occurrence event flag ID
     *
     * Display text Event flag ID. Display if the event flag is On. If the event
     * flag ID (6) is invalid, it will be treated as On.
     */
    unsigned int textEnableFlagId7{ 0 };

    /**
     * @brief Hidden event flag ID
     *
     * Hidden event flag ID of the text. If the event flag is On, it will not be
     * displayed. It takes precedence over the display event flag ID. If the
     * event flag ID (6) is invalid, it will be treated as Off.
     */
    unsigned int textDisableFlagId7{ 0 };

    /**
     * @brief Text ID
     *
     * The text ID to display. If it is an invalid value (-8), nothing is
     * displayed.
     */
    int textId8{ -1 };

    /**
     * @brief Occurrence event flag ID
     *
     * Display text Event flag ID. Display if the event flag is On. If the event
     * flag ID (7) is invalid, it will be treated as On.
     */
    unsigned int textEnableFlagId8{ 0 };

    /**
     * @brief Hidden event flag ID
     *
     * Hidden event flag ID of the text. If the event flag is On, it will not be
     * displayed. It takes precedence over the display event flag ID. If the
     * event flag ID (7) is invalid, it will be treated as Off.
     */
    unsigned int textDisableFlagId8{ 0 };

    /**
     * @brief Text type
     *
     * Text type (place name, NPC name, ...)
     */
    unsigned char textType1{ 0 };

    /**
     * @brief Text type
     *
     * Text type (place name, NPC name, ...)
     */
    unsigned char textType2{ 0 };

    /**
     * @brief Text type
     *
     * Text type (place name, NPC name, ...)
     */
    unsigned char textType3{ 0 };

    /**
     * @brief Text type
     *
     * Text type (place name, NPC name, ...)
     */
    unsigned char textType4{ 0 };

    /**
     * @brief Text type
     *
     * Text type (place name, NPC name, ...)
     */
    unsigned char textType5{ 0 };

    /**
     * @brief Text type
     *
     * Text type (place name, NPC name, ...)
     */
    unsigned char textType6{ 0 };

    /**
     * @brief Text type
     *
     * Text type (place name, NPC name, ...)
     */
    unsigned char textType7{ 0 };

    /**
     * @brief Text type
     *
     * Text type (place name, NPC name, ...)
     */
    unsigned char textType8{ 0 };

    /**
     * @brief Before ignition SFX Damipoly ID0
     *
     * Damipoli ID that issues SFX before bonfire ignition
     */
    int noIgnitionSfxDmypolyId_0{ -1 };

    /**
     * @brief Before ignition SFXID0
     *
     * SFX ID issued before bonfire ignition. It goes out when ignited. In case
     * of -1, SFX is not issued.
     */
    int noIgnitionSfxId_0{ -1 };

    /**
     * @brief Before ignition SFX Damipoly ID1
     *
     * Damipoli ID that issues SFX before bonfire ignition
     */
    int noIgnitionSfxDmypolyId_1{ -1 };

    /**
     * @brief Before ignition SFXID1
     *
     * SFX ID issued before bonfire ignition. It goes out when ignited. In case
     * of -1, SFX is not issued.
     */
    int noIgnitionSfxId_1{ -1 };

    /**
     * @brief textEnableFlag2Id1
     */
    int textEnableFlag2Id1{ 0 };

    /**
     * @brief textEnableFlag2Id2
     */
    int textEnableFlag2Id2{ 0 };

    /**
     * @brief textEnableFlag2Id3
     */
    int textEnableFlag2Id3{ 0 };

    /**
     * @brief textEnableFlag2Id4
     */
    int textEnableFlag2Id4{ 0 };

    /**
     * @brief textEnableFlag2Id5
     */
    int textEnableFlag2Id5{ 0 };

    /**
     * @brief textEnableFlag2Id6
     */
    int textEnableFlag2Id6{ 0 };

    /**
     * @brief textEnableFlag2Id7
     */
    int textEnableFlag2Id7{ 0 };

    /**
     * @brief textEnableFlag2Id8
     */
    int textEnableFlag2Id8{ 0 };

    /**
     * @brief textDisableFlag2Id1
     */
    int textDisableFlag2Id1{ 0 };

    /**
     * @brief textDisableFlag2Id2
     */
    int textDisableFlag2Id2{ 0 };

    /**
     * @brief textDisableFlag2Id3
     */
    int textDisableFlag2Id3{ 0 };

    /**
     * @brief textDisableFlag2Id4
     */
    int textDisableFlag2Id4{ 0 };

    /**
     * @brief textDisableFlag2Id5
     */
    int textDisableFlag2Id5{ 0 };

    /**
     * @brief textDisableFlag2Id6
     */
    int textDisableFlag2Id6{ 0 };

    /**
     * @brief textDisableFlag2Id7
     */
    int textDisableFlag2Id7{ 0 };

    /**
     * @brief textDisableFlag2Id8
     */
    int textDisableFlag2Id8{ 0 };

    /**
     * @brief altIconId
     */
    unsigned short altIconId{ 0 };

    /**
     * @brief altForbiddenIconId
     */
    unsigned short altForbiddenIconId{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::BONFIRE_WARP_PARAM_ST) == 236,
    "BONFIRE_WARP_PARAM_ST paramdef size does not match detected size");
