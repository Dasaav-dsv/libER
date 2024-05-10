/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct CS_KEY_ASSIGN_MENUITEM_PARAM {
    int textID{ 0 };
    int key{ -1 };
    bool enableUnassign{ true };
    bool enablePadConfig{ true };
    bool enableMouseConfig{ true };
    unsigned char group{ 0 };
    int mappingTextID{ 0 };
    bool viewPad{ true };
    bool viewKeyboardMouse{ true };
    unsigned char padding[6];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::CS_KEY_ASSIGN_MENUITEM_PARAM) == 24,
    "CS_KEY_ASSIGN_MENUITEM_PARAM paramdef size does not match detected size");
