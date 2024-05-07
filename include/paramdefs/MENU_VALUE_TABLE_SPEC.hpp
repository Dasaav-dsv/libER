/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MENU_VALUE_TABLE_SPEC {
    int value{ 0 };
    int textId{ 0 };
    signed char compareType{ 0 };
    unsigned char padding[3];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MENU_VALUE_TABLE_SPEC) == 12,
    "MENU_VALUE_TABLE_SPEC paramdef size does not match detected size");
