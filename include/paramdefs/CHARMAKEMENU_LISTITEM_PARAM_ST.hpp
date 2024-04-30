/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CHARMAKEMENU_LISTITEM_PARAM_ST {
    int value{ 0 };
    int captionId{ 0 };
    unsigned char iconId{ 0 };
    unsigned char reserved[7];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::CHARMAKEMENU_LISTITEM_PARAM_ST) == 16,
    "CHARMAKEMENU_LISTITEM_PARAM_ST paramdef size does not match detected "
    "size");
