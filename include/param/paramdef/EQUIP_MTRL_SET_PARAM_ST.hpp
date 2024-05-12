/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct EQUIP_MTRL_SET_PARAM_ST {
    /**
     * @brief Required Material Item ID 01
     *
     * Material item ID required to strengthen armor.
     */
    int materialId01{ -1 };

    /**
     * @brief Required Material Item ID 02
     *
     * Material item ID required to strengthen armor.
     */
    int materialId02{ -1 };

    /**
     * @brief Required Material Item ID 03
     *
     * Material item ID required to strengthen armor.
     */
    int materialId03{ -1 };

    /**
     * @brief Required Material Item ID 04
     *
     * Material item ID required to strengthen armor.
     */
    int materialId04{ -1 };

    /**
     * @brief Required Material Item ID 05
     *
     * Material item ID required to strengthen armor.
     */
    int materialId05{ -1 };

    /**
     * @brief Required Material Item ID 06
     *
     * Material item ID required to strengthen armor.
     */
    int materialId06{ -1 };

    unsigned char pad_id[8];

    /**
     * @brief Required number 01
     *
     * The number of material items required to strengthen armor.
     */
    signed char itemNum01{ -1 };

    /**
     * @brief Required number 02
     *
     * The number of material items required to strengthen armor.
     */
    signed char itemNum02{ -1 };

    /**
     * @brief Required number 03
     *
     * The number of material items required to strengthen armor.
     */
    signed char itemNum03{ -1 };

    /**
     * @brief Required number 04
     *
     * The number of material items required to strengthen armor.
     */
    signed char itemNum04{ -1 };

    /**
     * @brief Required number 05
     *
     * The number of material items required to strengthen armor.
     */
    signed char itemNum05{ -1 };

    /**
     * @brief Required number 06
     *
     * The number of material items required to strengthen armor.
     */
    signed char itemNum06{ -1 };

    unsigned char pad_num[2];

    /**
     * @brief Required Material Item Category 01
     *
     * This is a category of material items required for strengthening armor.
     */
    unsigned char materialCate01{ 4 };

    /**
     * @brief Required Material Item Category 02
     *
     * This is a category of material items required for strengthening armor.
     */
    unsigned char materialCate02{ 4 };

    /**
     * @brief Required Material Item Category 03
     *
     * This is a category of material items required for strengthening armor.
     */
    unsigned char materialCate03{ 4 };

    /**
     * @brief Required Material Item Category 04
     *
     * This is a category of material items required for strengthening armor.
     */
    unsigned char materialCate04{ 4 };

    /**
     * @brief Required Material Item Category 05
     *
     * This is a category of material items required for strengthening armor.
     */
    unsigned char materialCate05{ 4 };

    /**
     * @brief Required Material Item Category 06
     *
     * This is a category of material items required for strengthening armor.
     */
    unsigned char materialCate06{ 4 };

    unsigned char pad_cate[2];

    /**
     * @brief Disable number display 01
     *
     * Disable the number display (for enhanced shops)
     */
    bool isDisableDispNum01 : 1 { false };

    /**
     * @brief Disable number display 02
     *
     * Whether to disable the number display
     */
    bool isDisableDispNum02 : 1 { false };

    /**
     * @brief Disable number display 03
     *
     * Whether to disable the number display
     */
    bool isDisableDispNum03 : 1 { false };

    /**
     * @brief Disable number display 04
     *
     * Whether to disable the number display
     */
    bool isDisableDispNum04 : 1 { false };

    /**
     * @brief Disable number display 05
     *
     * Whether to disable the number display
     */
    bool isDisableDispNum05 : 1 { false };

    /**
     * @brief Disable number display 06
     *
     * Whether to disable the number display
     */
    bool isDisableDispNum06 : 1 { false };

    unsigned char pad[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::EQUIP_MTRL_SET_PARAM_ST) == 52,
    "EQUIP_MTRL_SET_PARAM_ST paramdef size does not match detected size");
