/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct CHARMAKEMENUTOP_PARAM_ST {
    int commandType{ 0 };
    int captionId{ 0 };
    int faceParamId{ 0 };
    int tableId{ 0 };
    int viewCondition{ 0 };
    signed char previewMode{ 0 };
    unsigned char reserved2[3];
    int tableId2{ -1 };
    int refFaceParamId{ -1 };
    int refTextId{ -1 };
    int helpTextId{ -1 };
    unsigned int unlockEventFlagId{ 0 };
    unsigned char reserved[4];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::CHARMAKEMENUTOP_PARAM_ST) == 48,
    "CHARMAKEMENUTOP_PARAM_ST paramdef size does not match detected size");
