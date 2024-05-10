/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct EQUIP_MTRL_SET_PARAM_ST {
    int materialId01{ -1 };
    int materialId02{ -1 };
    int materialId03{ -1 };
    int materialId04{ -1 };
    int materialId05{ -1 };
    int materialId06{ -1 };
    unsigned char pad_id[8];
    signed char itemNum01{ -1 };
    signed char itemNum02{ -1 };
    signed char itemNum03{ -1 };
    signed char itemNum04{ -1 };
    signed char itemNum05{ -1 };
    signed char itemNum06{ -1 };
    unsigned char pad_num[2];
    unsigned char materialCate01{ 4 };
    unsigned char materialCate02{ 4 };
    unsigned char materialCate03{ 4 };
    unsigned char materialCate04{ 4 };
    unsigned char materialCate05{ 4 };
    unsigned char materialCate06{ 4 };
    unsigned char pad_cate[2];
    bool isDisableDispNum01 : 1 { false };
    bool isDisableDispNum02 : 1 { false };
    bool isDisableDispNum03 : 1 { false };
    bool isDisableDispNum04 : 1 { false };
    bool isDisableDispNum05 : 1 { false };
    bool isDisableDispNum06 : 1 { false };
    unsigned char pad[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_MTRL_SET_PARAM_ST) == 52,
    "EQUIP_MTRL_SET_PARAM_ST paramdef size does not match detected size");
