/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST {
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
     * @brief Lifting flag
     *
     * Lifting flag (default: 0). If this event flag is set, the ban will be
     * lifted (displayed on the loading screen). If it is 0, the ban is always
     * lifted. The invalid flag has priority
     */
    unsigned int unlockFlagId{ 0 };

    /**
     * @brief Invalid flag
     *
     * Invalid flag (default: 0). If this event flag is set, it will be disabled
     * (it will not be displayed on the loading screen). If it is 0, this flag
     * is not always set.
     */
    unsigned int invalidFlagId{ 0 };

    /**
     * @brief Text ID
     *
     * Text ID (Loading Text.xlsx). Used for both loading titles and loading
     * text
     */
    int msgId{ 0 };
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST) == 16,
    "KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST paramdef size does not match detected "
    "size");
