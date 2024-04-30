/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct MENUPROPERTY_LAYOUT {
    char LayoutPath[16];
    int PropertyID{ 0 };
    int CaptionTextID{ 0 };
    int HelpTextID{ 0 };
    unsigned char reserved[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::MENUPROPERTY_LAYOUT) == 32,
    "MENUPROPERTY_LAYOUT paramdef size does not match detected size");
