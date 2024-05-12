/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 * 
 */
struct ESTUS_FLASK_RECOVERY_PARAM_ST {
    /**
     * @brief host
     *
     * Number of host est recovery
     */
    unsigned char host{ 0 };

    /**
     * @brief No intrusion route_orb_
     *
     * The number of est recovery of the power of the orb whose invasion route
     * is
     */
    unsigned char invadeOrb_None{ 0 };

    /**
     * @brief Invasion route_Orb_Sun
     *
     * The number of est recovery of the power of the orb whose invasion route
     * is
     */
    unsigned char invadeOrb_Umbasa{ 0 };

    /**
     * @brief Intrusion route_Orb_Berserker
     *
     * The number of est recovery of the power of the orb whose invasion route
     * is
     */
    unsigned char invadeOrb_Berserker{ 0 };

    /**
     * @brief Invasion route_Orb_Sinner
     *
     * The number of est recovery of the power of the orb whose invasion route
     * is
     */
    unsigned char invadeOrb_Sinners{ 0 };

    /**
     * @brief No intrusion route_sign_
     *
     * The number of est recovery of the power whose invasion route is a sign
     */
    unsigned char invadeSign_None{ 0 };

    /**
     * @brief Invasion route_sign_sun
     *
     * The number of est recovery of the power whose invasion route is a sign
     */
    unsigned char invadeSign_Umbasa{ 0 };

    /**
     * @brief Intrusion route_sign_berserker
     *
     * The number of est recovery of the power whose invasion route is a sign
     */
    unsigned char invadeSign_Berserker{ 0 };

    /**
     * @brief Intrusion route_sign_sinner
     *
     * The number of est recovery of the power whose invasion route is a sign
     */
    unsigned char invadeSign_Sinners{ 0 };

    /**
     * @brief Invasion route_ring_sinner
     *
     * The number of est recovery of the power of the ring whose invasion route
     * is
     */
    unsigned char invadeRing_Sinners{ 0 };

    /**
     * @brief Invasion route_Ring_Boss guard (Rosalia)
     *
     * The number of est recovery of the power of the ring whose invasion route
     * is
     */
    unsigned char invadeRing_Rosalia{ 0 };

    /**
     * @brief Invasion route_Ring_Map Mamoru (Forest)
     *
     * The number of est recovery of the power of the ring whose invasion route
     * is
     */
    unsigned char invadeRing_Forest{ 0 };

    /**
     * @brief Cooperation route_sign_ None
     *
     * The number of est recovery of the power whose cooperation route is a sign
     */
    unsigned char coopSign_None{ 0 };

    /**
     * @brief Cooperation route_sign_sun
     *
     * The number of est recovery of the power whose cooperation route is a sign
     */
    unsigned char coopSign_Umbasa{ 0 };

    /**
     * @brief Cooperation route_sign_berserker
     *
     * The number of est recovery of the power whose cooperation route is a sign
     */
    unsigned char coopSign_Berserker{ 0 };

    /**
     * @brief Cooperation route_sign_sinner
     *
     * The number of est recovery of the power whose cooperation route is a sign
     */
    unsigned char coopSign_Sinners{ 0 };

    /**
     * @brief Cooperation route _ ring _ red hunting
     *
     * Cooperation route is the number of est recovery of the power of the ring
     */
    unsigned char coopRing_RedHunter{ 0 };

    /**
     * @brief Intrusion route_Ring_Map guard (Anor)
     *
     * The number of est recovery of the power of the ring whose invasion route
     * is
     */
    unsigned char invadeRing_Anor{ 0 };

    /**
     * @brief Recovery number Parameter replacement rate
     */
    unsigned short paramReplaceRate{ 0 };

    /**
     * @brief Recovery number Parameter replacement destination ID
     */
    int paramReplaceId{ -1 };

    unsigned char pad[8];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::ESTUS_FLASK_RECOVERY_PARAM_ST) == 32,
    "ESTUS_FLASK_RECOVERY_PARAM_ST paramdef size does not match detected size");
