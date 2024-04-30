/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct WEATHER_LOT_PARAM_ST {
    bool disableParam_NT : 1 { false };
    unsigned char disableParamReserve1 : 7;
    unsigned char disableParamReserve2[3];
    short weatherType0{ -1 };
    short weatherType1{ -1 };
    short weatherType2{ -1 };
    short weatherType3{ -1 };
    short weatherType4{ -1 };
    short weatherType5{ -1 };
    short weatherType6{ -1 };
    short weatherType7{ -1 };
    short weatherType8{ -1 };
    short weatherType9{ -1 };
    short weatherType10{ -1 };
    short weatherType11{ -1 };
    short weatherType12{ -1 };
    short weatherType13{ -1 };
    short weatherType14{ -1 };
    short weatherType15{ -1 };
    unsigned short lotteryWeight0{ 0 };
    unsigned short lotteryWeight1{ 0 };
    unsigned short lotteryWeight2{ 0 };
    unsigned short lotteryWeight3{ 0 };
    unsigned short lotteryWeight4{ 0 };
    unsigned short lotteryWeight5{ 0 };
    unsigned short lotteryWeight6{ 0 };
    unsigned short lotteryWeight7{ 0 };
    unsigned short lotteryWeight8{ 0 };
    unsigned short lotteryWeight9{ 0 };
    unsigned short lotteryWeight10{ 0 };
    unsigned short lotteryWeight11{ 0 };
    unsigned short lotteryWeight12{ 0 };
    unsigned short lotteryWeight13{ 0 };
    unsigned short lotteryWeight14{ 0 };
    unsigned short lotteryWeight15{ 0 };
    unsigned char timezoneLimit{ 0 };
    unsigned char timezoneStartHour{ 0 };
    unsigned char timezoneStartMinute{ 0 };
    unsigned char timezoneEndHour{ 0 };
    unsigned char timezoneEndMinute{ 0 };
    unsigned char reserve[9];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::WEATHER_LOT_PARAM_ST) == 82,
    "WEATHER_LOT_PARAM_ST paramdef size does not match detected size");
