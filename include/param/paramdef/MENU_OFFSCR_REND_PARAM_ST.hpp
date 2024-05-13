/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct MENU_OFFSCR_REND_PARAM_ST {
    /**
     * @brief Camera gaze point X
     */
    float camAtPosX{ 0.f };

    /**
     * @brief Camera gaze point Y
     */
    float camAtPosY{ 0.f };

    /**
     * @brief Camera gaze point Z
     */
    float camAtPosZ{ 0.f };

    /**
     * @brief Camera distance
     */
    float camDist{ 10.f };

    /**
     * @brief Camera oriented X
     */
    float camRotX{ 0.f };

    /**
     * @brief Suitable for camera Y
     */
    float camRotY{ 0.f };

    /**
     * @brief Camera angle of view
     */
    float camFov{ 49.f };

    /**
     * @brief Shortest distance when operating the camera
     */
    float camDistMin{ 0.f };

    /**
     * @brief Longest distance when operating the camera
     */
    float camDistMax{ 100.f };

    /**
     * @brief Minimum orientation when operating the camera
     */
    float camRotXMin{ -89.f };

    /**
     * @brief Maximum orientation when operating the camera
     */
    float camRotXMax{ 89.f };

    /**
     * @brief GparamID
     */
    unsigned int GparamID{ 10 };

    /**
     * @brief Environment map texture ID
     *
     * Environment map texture ID. It corresponds to 4 digits of N: \ GR \ data
     * \ Other \ SysEnvTex \ GILM ???? _rem.dds.
     */
    unsigned int envTexId{ 10 };

    /**
     * @brief Gparam ID (for PS4)
     */
    unsigned int Grapm_ID_forPS4{ 10 };

    /**
     * @brief Gparam ID (for Xbox One)
     */
    unsigned int Grapm_ID_forXB1{ 10 };

    unsigned char pad[4];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::MENU_OFFSCR_REND_PARAM_ST) == 64,
    "MENU_OFFSCR_REND_PARAM_ST paramdef size does not match detected size");
