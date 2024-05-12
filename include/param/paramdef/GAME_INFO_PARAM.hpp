/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct GAME_INFO_PARAM {
    /**
     * @brief Title MsgID
     *
     * Title name
     */
    int titleMsgId{ 0 };

    /**
     * @brief Content MsgID
     *
     * Contents
     */
    int contentMsgId{ 0 };

    /**
     * @brief price
     */
    int value{ 0 };

    /**
     * @brief Sort ID
     */
    int sortId{ 0 };

    /**
     * @brief Action ID
     *
     * This is the action ID that determines the sales status.
     */
    int eventId{ 0 };

    /**
     * @brief Padding
     */
    unsigned char Pad[12];
};

}; // namespace paramdef
}; // namespace from
