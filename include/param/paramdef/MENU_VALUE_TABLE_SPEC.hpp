/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct MENU_VALUE_TABLE_SPEC {
    int value{ 0 };
    int textId{ 0 };
    signed char compareType{ 0 };
    unsigned char padding[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MENU_VALUE_TABLE_SPEC) == 12,
    "MENU_VALUE_TABLE_SPEC paramdef size does not match detected size");
