/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct SHOP_LINEUP_PARAM {
    int equipId{ 0 };
    int value{ -1 };
    int mtrlId{ -1 };
    unsigned int eventFlag_forStock{ 0 };
    unsigned int eventFlag_forRelease{ 0 };
    short sellQuantity{ -1 };
    unsigned char pad3[1];
    unsigned char equipType{ 0 };
    unsigned char costType{ 0 };
    unsigned char pad1[1];
    unsigned short setNum{ 1 };
    int value_Add{ 0 };
    float value_Magnification{ 1 };
    int iconId{ -1 };
    int nameMsgId{ -1 };
    int menuTitleMsgId{ -1 };
    short menuIconId{ -1 };
    unsigned char pad2[2];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::SHOP_LINEUP_PARAM) == 52,
    "SHOP_LINEUP_PARAM paramdef size does not match detected size");
