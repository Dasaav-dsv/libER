/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct WORLD_MAP_POINT_PARAM_ST {
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
     * @brief Release event flag ID
     *
     * Event flag ID of open condition
     */
    unsigned int eventFlagId{ 0 };

    /**
     * @brief Far-viewing platform discovery event flag ID
     *
     * Event flag ID to be set when found on the distant view
     */
    unsigned int distViewEventFlagId{ 0 };

    /**
     * @brief Icon ID
     */
    unsigned short iconId{ 0 };

    /**
     * @brief BGM location information (inside the entrance area)
     *
     * Bgm location type
     */
    short bgmPlaceType{ 0 };

    /**
     * @brief Is it a range icon?
     *
     * Is it an icon that represents a range? Same size as the map
     */
    bool isAreaIcon : 1 { false };

    /**
     * @brief Tomidai mark_Coordinates overwrite
     *
     * Whether to overwrite the coordinates when using it as a distant view
     * marker
     */
    bool isOverrideDistViewMarkPos : 1 { false };

    /**
     * @brief Whether to display when there is no text
     *
     * Do you want to display it even when there is no text? Basically, points
     * are not displayed without text. Display without text when this flag is
     * enabled
     */
    bool isEnableNoText : 1 { false };

    unsigned char pad3 : 5;

    /**
     * @brief Overwrite distant view mark_area number
     *
     * AA part of mAA_BB_CC_DD
     */
    unsigned char areaNo_forDistViewMark{ 0 };

    /**
     * @brief Overwrite distant view mark_Grid X number
     *
     * BB part of mAA_BB_CC_DD
     */
    unsigned char gridXNo_forDistViewMark{ 0 };

    /**
     * @brief Overwrite distant view mark_Grid Z number
     *
     * CC part of mAA_BB_CC_DD
     */
    unsigned char gridZNo_forDistViewMark{ 0 };

    /**
     * @brief Cleared event flag ID
     *
     * Cleared event flag ID (0: always treated as cleared)
     */
    unsigned int clearedEventFlagId{ 0 };

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

    unsigned char pad2_0_1 : 5;

    unsigned char pad2[1];

    /**
     * @brief Icon ID when distant view is found
     */
    unsigned short distViewIconId{ 0 };

    /**
     * @brief Icon angle [deg]
     *
     * Display icon rotation angle [deg]
     */
    float angle{ 0.f };

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

    unsigned char pad[1];

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
     * @brief Distance stand ID0
     *
     * Distance stand ID
     */
    int distViewId{ -1 };

    /**
     * @brief Distance viewing marker overwrite _X coordinates
     *
     * X coordinate
     */
    float posX_forDistViewMark{ 0.f };

    /**
     * @brief Distance viewing mark overwrite Y coordinate
     *
     * Y coordinate
     */
    float posY_forDistViewMark{ 0.f };

    /**
     * @brief Distant mark overwrite Z coordinate
     *
     * Z coordinate
     */
    float posZ_forDistViewMark{ 0.f };

    /**
     * @brief Distance stand ID1
     *
     * Distance stand ID
     */
    int distViewId1{ -1 };

    /**
     * @brief Distance stand ID2
     *
     * Distance stand ID
     */
    int distViewId2{ -1 };

    /**
     * @brief Distance stand ID3
     *
     * Distance stand ID
     */
    int distViewId3{ -1 };

    /**
     * @brief Display zoom step
     *
     * Zoom step to display map points (0 when zoomed out most, +1 for each
     * zoom). Displayed when "<< Display zoom step >> ≤ Current zoom step".
     * Default is 0 (always displayed)
     */
    unsigned char dispMinZoomStep{ 0 };

    /**
     * @brief Selectable zoom steps
     *
     * Zoom step where map points can be selected (0 when zoomed out most, +1
     * for each zoom). Selectable when "<< Selectable zoom step >> ≤ Current
     * enlargement stage". Default is 0 (always selectable)
     */
    unsigned char selectMinZoomStep{ 0 };

    /**
     * @brief Admission display format
     *
     * Admission display format. Map points to be displayed at the time of
     * admission Types of admission FE
     */
    unsigned char entryFEType{ 0 };

    unsigned char unknown_0xb7{ 0 };

    unsigned char unknown_0xb8{ 0 };

    unsigned char unknown_0xb9{ 0 };

    unsigned char pad4[6];

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
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WORLD_MAP_POINT_PARAM_ST) == 256,
    "WORLD_MAP_POINT_PARAM_ST paramdef size does not match detected size");
