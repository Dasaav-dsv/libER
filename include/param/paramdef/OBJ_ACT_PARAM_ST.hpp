/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct OBJ_ACT_PARAM_ST {
    /**
     * @brief MsgID when action is enabled
     *
     * The MsgID of the menu displayed when the action is enabled.
     */
    int actionEnableMsgId{ -1 };

    /**
     * @brief MsgID when action fails
     *
     * The MsgID of the menu to display when the action fails.
     */
    int actionFailedMsgId{ -1 };

    /**
     * @brief Event flags for special condition paths
     *
     * Event flags for unconditionally passing special conditions.
     */
    unsigned int spQualifiedPassEventFlag{ 0 };

    /**
     * @brief Player anime ID 0
     *
     * This is the animation ID for the action of the player character.
     */
    unsigned int playerAnimId{ 0 };

    /**
     * @brief Character anime ID0
     *
     * Anime ID at the time of action such as enemy
     */
    unsigned int chrAnimId{ 0 };

    /**
     * @brief Effective distance of action [cm]
     *
     * The effective distance of the action.
     */
    unsigned short validDist{ 150 };

    /**
     * @brief Special condition ID
     */
    unsigned short spQualifiedId{ 0 };

    /**
     * @brief Special condition ID 2
     *
     * Special condition ID part 2
     */
    unsigned short spQualifiedId2{ 0 };

    /**
     * @brief Damipoli ID0 of the object
     *
     * Damipoli ID that is the action position of the object
     */
    unsigned char objDummyId{ 0 };

    /**
     * @brief Whether to synchronize event kicks
     *
     * ObjAct Whether to synchronize the events used in the execution judgment.
     * Set to basic ×. It may be set to ○ only when the actor is not important.
     */
    bool isEventKickSync{ false };

    /**
     * @brief Object Anime ID0
     *
     * This is the animation ID for the action of the object.
     */
    unsigned int objAnimId{ 0 };

    /**
     * @brief Effective angle of player action
     *
     * The effective angle of the player's action. Effective angle difference
     * between the player's orientation vector and the orientation vector to the
     * object
     */
    unsigned char validPlayerAngle{ 30 };

    /**
     * @brief Special condition type
     *
     * Types of special conditions
     */
    unsigned char spQualifiedType{ 0 };

    /**
     * @brief Special condition type 2
     *
     * Type of special condition 2
     */
    unsigned char spQualifiedType2{ 0 };

    /**
     * @brief Effective angle of action of the object
     *
     * The action effective angle of the object. Effective angle difference
     * between the action vector of the object and the character vector
     */
    unsigned char validObjAngle{ 30 };

    /**
     * @brief Character adsorption type
     *
     * It is a method of adsorbing characters during object action.
     */
    unsigned char chrSorbType{ 0 };

    /**
     * @brief Event activation timing
     *
     * Event execution timing
     */
    unsigned char eventKickTiming{ 0 };

    unsigned char pad1[2];

    /**
     * @brief Action button parameter ID
     */
    int actionButtonParamId{ -1 };

    /**
     * @brief Treasure activation delay (seconds)
     *
     * The number of seconds from the execution of the object action to the
     * activation of the treasure. A setting exclusively for the object type
     * "treasure box" of the object act.
     */
    float enableTreasureDelaySec{ 0.f };

    /**
     * @brief Damipoly ID for SFX before execution
     *
     * Issue SFX from this Damipoli ID before executing the object. If it is -1,
     * start from the origin.
     */
    int preActionSfxDmypolyId{ -1 };

    /**
     * @brief Pre-execution SFXID
     *
     * SFX issued before executing the object. If it is -1, it will not be
     * issued.
     */
    int preActionSfxId{ -1 };

    unsigned char unknown_0x38{ 0 };

    unsigned char unknown_0x3c{ 0 };

    unsigned char unknown_0x40{ 0 };

    unsigned char unknown_0x44{ 0 };

    unsigned char unknown_0x48{ 0 };

    unsigned char unknown_0x4c{ 0 };

    unsigned char pad2[34];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::OBJ_ACT_PARAM_ST) == 96,
    "OBJ_ACT_PARAM_ST paramdef size does not match detected size");
