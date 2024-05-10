/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct WEP_ABSORP_POS_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    unsigned char hangPosType{ 0 };
    bool isSkeletonBind{ false };
    unsigned char pad0[2];
    short right_0{ 0 };
    short left_0{ 0 };
    short both_0{ 0 };
    short leftHang_0{ 0 };
    short rightHang_0{ 0 };
    short right_1{ 0 };
    short left_1{ 0 };
    short both_1{ 0 };
    short leftHang_1{ 0 };
    short rightHang_1{ 0 };
    short right_2{ 0 };
    short left_2{ 0 };
    short both_2{ 0 };
    short leftHang_2{ 0 };
    short rightHang_2{ 0 };
    short right_3{ 0 };
    short left_3{ 0 };
    short both_3{ 0 };
    short leftHang_3{ 0 };
    short rightHang_3{ 0 };
    unsigned char wepInvisibleType_0{ 0 };
    unsigned char wepInvisibleType_1{ 0 };
    unsigned char wepInvisibleType_2{ 0 };
    unsigned char wepInvisibleType_3{ 0 };
    short leftBoth_0{ 0 };
    short leftBoth_1{ 0 };
    short leftBoth_2{ 0 };
    short leftBoth_3{ 0 };
    unsigned char dispPosType_right_0{ 0 };
    unsigned char dispPosType_left_0{ 0 };
    unsigned char dispPosType_rightBoth_0{ 0 };
    unsigned char dispPosType_leftBoth_0{ 0 };
    unsigned char dispPosType_rightHang_0{ 0 };
    unsigned char dispPosType_leftHang_0{ 0 };
    unsigned char dispPosType_right_1{ 0 };
    unsigned char dispPosType_left_1{ 0 };
    unsigned char dispPosType_rightBoth_1{ 0 };
    unsigned char dispPosType_leftBoth_1{ 0 };
    unsigned char dispPosType_rightHang_1{ 0 };
    unsigned char dispPosType_leftHang_1{ 0 };
    unsigned char dispPosType_right_2{ 0 };
    unsigned char dispPosType_left_2{ 0 };
    unsigned char dispPosType_rightBoth_2{ 0 };
    unsigned char dispPosType_leftBoth_2{ 0 };
    unsigned char dispPosType_rightHang_2{ 0 };
    unsigned char dispPosType_leftHang_2{ 0 };
    unsigned char dispPosType_right_3{ 0 };
    unsigned char dispPosType_left_3{ 0 };
    unsigned char dispPosType_rightBoth_3{ 0 };
    unsigned char dispPosType_leftBoth_3{ 0 };
    unsigned char dispPosType_rightHang_3{ 0 };
    unsigned char dispPosType_leftHang_3{ 0 };
    unsigned char reserve[12];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WEP_ABSORP_POS_PARAM_ST) == 96,
    "WEP_ABSORP_POS_PARAM_ST paramdef size does not match detected size");
