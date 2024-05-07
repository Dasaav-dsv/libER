/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned int unlockFlagId{ 0 };
    unsigned int invalidFlagId{ 0 };
    int msgId{ 0 };
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST) == 16,
    "KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST paramdef size does not match detected "
    "size");
