/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct GAME_AREA_PARAM_ST {
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
     * @brief Single time clear bonus soul amount
     *
     * Amount of soul that can be obtained when defeating an area boss (in
     * single play)
     */
    unsigned int bonusSoul_single{ 0 };

    /**
     * @brief Clear bonus soul amount during multiplayer
     *
     * Amount of soul that can be obtained when defeating an area boss (during
     * multiplayer)
     */
    unsigned int bonusSoul_multi{ 0 };

    /**
     * @brief Human nature drop point count head flag ID
     *
     * First flag ID for managing humanity drop points (using 20 Bit)
     */
    unsigned int humanityPointCountFlagIdTop{ 0 };

    /**
     * @brief Human nature drop required point 1
     *
     * Threshold for acquiring humanity 1
     */
    unsigned short humanityDropPoint1{ 0 };

    /**
     * @brief Human nature drop required point 2
     *
     * Threshold 2 for acquiring humanity
     */
    unsigned short humanityDropPoint2{ 0 };

    /**
     * @brief Human nature drop required point 3
     *
     * Threshold 3 for acquiring humanity
     */
    unsigned short humanityDropPoint3{ 0 };

    /**
     * @brief Human nature drop required point 4
     *
     * Threshold 4 for acquiring humanity
     */
    unsigned short humanityDropPoint4{ 0 };

    /**
     * @brief Human nature drop required point 5
     *
     * Threshold 5 for acquiring humanity
     */
    unsigned short humanityDropPoint5{ 0 };

    /**
     * @brief Human nature drop required point 6
     *
     * Threshold 6 for acquiring humanity
     */
    unsigned short humanityDropPoint6{ 0 };

    /**
     * @brief Human nature drop required point 7
     *
     * Threshold for acquiring humanity 7
     */
    unsigned short humanityDropPoint7{ 0 };

    /**
     * @brief Human nature drop required point 8
     *
     * Threshold for acquiring humanity 8
     */
    unsigned short humanityDropPoint8{ 0 };

    /**
     * @brief Human nature drop required point 9
     *
     * Threshold for acquiring humanity 9
     */
    unsigned short humanityDropPoint9{ 0 };

    /**
     * @brief Humanity drop required points 10
     *
     * Threshold 10 for acquiring humanity
     */
    unsigned short humanityDropPoint10{ 0 };

    /**
     * @brief Solo intrusion point addition lower limit
     *
     * The minimum value of solo intrusion points to be added when defeating an
     * area boss.
     */
    unsigned int soloBreakInPoint_Min{ 0 };

    /**
     * @brief Solo intrusion point addition value upper limit
     *
     * The maximum value of solo intrusion points to be added when defeating an
     * area boss.
     */
    unsigned int soloBreakInPoint_Max{ 10000 };

    /**
     * @brief Boss defeated flag ID (for displaying purpose when hosting)
     *
     * If this flag is ON, it will not be displayed in the list of purpose
     * settings at the time of hosting. If it is 0, it is always displayed.
     */
    unsigned int defeatBossFlagId_forSignAimList{ 0 };

    /**
     * @brief Purpose display flag ID
     */
    unsigned int displayAimFlagId{ 0 };

    /**
     * @brief Boss discovery flag ID
     */
    unsigned int foundBossFlagId{ 0 };

    /**
     * @brief Text ID at the time of discovery
     */
    int foundBossTextId{ -1 };

    /**
     * @brief Undiscovered text ID
     */
    int notFindBossTextId{ -1 };

    /**
     * @brief Boss challengeable flag ID
     *
     * Boss challengeable flag ID. When selecting the target boss in the
     * intrusion position search when "Is the intrusion point automatically
     * generated?" In the multiplayer area para is ○, the boss with this flag ON
     * is targeted. If it is 0, it is always the target.
     */
    unsigned int bossChallengeFlagId{ 0 };

    /**
     * @brief Boss defeat flag ID
     *
     * Boss defeat flag ID. When selecting the target boss in the intrusion
     * position search when "Is the intrusion point automatically generated?" In
     * the multiplayer area para is ○, the boss with this flag OFF is targeted.
     */
    unsigned int defeatBossFlagId{ 0 };

    /**
     * @brief Boss position_X coordinates
     *
     * Boss position_X coordinates (relative coordinates from the specified
     * map). It is used to check the distance between the host and the boss in
     * the intrusion position search when "Is the intrusion point automatically
     * generated?" In the multiplayer area para.
     */
    float bossPosX{ 0.f };

    /**
     * @brief Boss position_Y coordinates
     *
     * Boss position_Y coordinates (relative coordinates from the specified
     * map). It is used to check the distance between the host and the boss in
     * the intrusion position search when "Is the intrusion point automatically
     * generated?" In the multiplayer area para.
     */
    float bossPosY{ 0.f };

    /**
     * @brief Boss position_Z coordinates
     *
     * Boss position_Z coordinates (relative coordinates from the specified
     * map). It is used to check the distance between the host and the boss in
     * the intrusion position search when "Is the intrusion point automatically
     * generated?" In the multiplayer area para.
     */
    float bossPosZ{ 0.f };

    /**
     * @brief Boss position_Area number (mXX_00_00_00)
     *
     * Boss position_area number (mXX_00_00_00). It is used to check the
     * distance between the host and the boss in the intrusion position search
     * when "Is the intrusion point automatically generated?" In the multiplayer
     * area para.
     */
    unsigned char bossMapAreaNo{ 0 };

    /**
     * @brief Boss position_grid X number (m00_XX_00_00)
     *
     * Boss position_grid X number (m00_XX_00_00). It is used to check the
     * distance between the host and the boss in the intrusion position search
     * when "Is the intrusion point automatically generated?" In the multiplayer
     * area para.
     */
    unsigned char bossMapBlockNo{ 0 };

    /**
     * @brief Boss position_grid Z number (m00_00_XX_00)
     *
     * Boss position_grid Z number (m00_00_XX_00). It is used to check the
     * distance between the host and the boss in the intrusion position search
     * when "Is the intrusion point automatically generated?" In the multiplayer
     * area para.
     */
    unsigned char bossMapMapNo{ 0 };

    unsigned char reserve[9];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::GAME_AREA_PARAM_ST) == 96,
    "GAME_AREA_PARAM_ST paramdef size does not match detected size");
