/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct SIGN_PUDDLE_SUB_CATEGORY_PARAM_ST {
    /**
     * @brief startPad
     */
    unsigned char startPad[4];

    /**
     * @brief signPuddleCategoryText
     */
    int signPuddleCategoryText{ 0 };

    /**
     * @brief signPuddleTabId
     */
    unsigned short signPuddleTabId{ 0 };

    unsigned short unknown_0xa{ 0 };

    /**
     * @brief endPad
     */
    unsigned char endPad[4];
};

}; // namespace paramdef
}; // namespace from
