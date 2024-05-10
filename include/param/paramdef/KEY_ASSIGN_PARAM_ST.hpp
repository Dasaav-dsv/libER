/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct KEY_ASSIGN_PARAM_ST {
    int padKeyId{ -1 };
    int keyboardModifyKey{ 0 };
    int keyboardKeyId{ -1 };
    int mouseModifyKey{ 0 };
    int mouseKeyId{ 0 };
    unsigned char reserved[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::KEY_ASSIGN_PARAM_ST) == 32,
    "KEY_ASSIGN_PARAM_ST paramdef size does not match detected size");
