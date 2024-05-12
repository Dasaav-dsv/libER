/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct WEATHER_LOT_PARAM_ST {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 { false };

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief Weather type 0
     */
    short weatherType0{ -1 };

    /**
     * @brief Weather type 1
     */
    short weatherType1{ -1 };

    /**
     * @brief Weather type 2
     */
    short weatherType2{ -1 };

    /**
     * @brief Weather type 3
     */
    short weatherType3{ -1 };

    /**
     * @brief Weather type 4
     */
    short weatherType4{ -1 };

    /**
     * @brief Weather type 5
     */
    short weatherType5{ -1 };

    /**
     * @brief Weather type 6
     */
    short weatherType6{ -1 };

    /**
     * @brief Weather type 7
     */
    short weatherType7{ -1 };

    /**
     * @brief Weather type 8
     */
    short weatherType8{ -1 };

    /**
     * @brief Weather type 9
     */
    short weatherType9{ -1 };

    /**
     * @brief Weather type 10
     */
    short weatherType10{ -1 };

    /**
     * @brief Weather type 11
     */
    short weatherType11{ -1 };

    /**
     * @brief Weather type 12
     */
    short weatherType12{ -1 };

    /**
     * @brief Weather type 13
     */
    short weatherType13{ -1 };

    /**
     * @brief Weather type 14
     */
    short weatherType14{ -1 };

    /**
     * @brief Weather type 15
     */
    short weatherType15{ -1 };

    /**
     * @brief Lottery weight 0
     */
    unsigned short lotteryWeight0{ 0 };

    /**
     * @brief Lottery weight 1
     */
    unsigned short lotteryWeight1{ 0 };

    /**
     * @brief Lottery weight 2
     */
    unsigned short lotteryWeight2{ 0 };

    /**
     * @brief Lottery weight 3
     */
    unsigned short lotteryWeight3{ 0 };

    /**
     * @brief Lottery weight 4
     */
    unsigned short lotteryWeight4{ 0 };

    /**
     * @brief Lottery weight 5
     */
    unsigned short lotteryWeight5{ 0 };

    /**
     * @brief Lottery weight 6
     */
    unsigned short lotteryWeight6{ 0 };

    /**
     * @brief Lottery weight 7
     */
    unsigned short lotteryWeight7{ 0 };

    /**
     * @brief Lottery weight 8
     */
    unsigned short lotteryWeight8{ 0 };

    /**
     * @brief Lottery weight 9
     */
    unsigned short lotteryWeight9{ 0 };

    /**
     * @brief Lottery weight 10
     */
    unsigned short lotteryWeight10{ 0 };

    /**
     * @brief Lottery weight 11
     */
    unsigned short lotteryWeight11{ 0 };

    /**
     * @brief Lottery weight 12
     */
    unsigned short lotteryWeight12{ 0 };

    /**
     * @brief Lottery weight 13
     */
    unsigned short lotteryWeight13{ 0 };

    /**
     * @brief Lottery weight 14
     */
    unsigned short lotteryWeight14{ 0 };

    /**
     * @brief Lottery weight 15
     */
    unsigned short lotteryWeight15{ 0 };

    /**
     * @brief Time zone condition list
     */
    unsigned char timezoneLimit{ 0 };

    /**
     * @brief Direct time specification_start_hour
     */
    unsigned char timezoneStartHour{ 0 };

    /**
     * @brief Direct time specification_start_minute
     */
    unsigned char timezoneStartMinute{ 0 };

    /**
     * @brief Direct time specification_start_hour
     */
    unsigned char timezoneEndHour{ 0 };

    /**
     * @brief Direct time specification_start_minute
     */
    unsigned char timezoneEndMinute{ 0 };

    unsigned char reserve[9];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::WEATHER_LOT_PARAM_ST) == 82,
    "WEATHER_LOT_PARAM_ST paramdef size does not match detected size");
