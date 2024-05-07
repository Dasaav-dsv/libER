/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdefs {

struct ESTUS_FLASK_RECOVERY_PARAM_ST {
    unsigned char host{ 0 };
    unsigned char invadeOrb_None{ 0 };
    unsigned char invadeOrb_Umbasa{ 0 };
    unsigned char invadeOrb_Berserker{ 0 };
    unsigned char invadeOrb_Sinners{ 0 };
    unsigned char invadeSign_None{ 0 };
    unsigned char invadeSign_Umbasa{ 0 };
    unsigned char invadeSign_Berserker{ 0 };
    unsigned char invadeSign_Sinners{ 0 };
    unsigned char invadeRing_Sinners{ 0 };
    unsigned char invadeRing_Rosalia{ 0 };
    unsigned char invadeRing_Forest{ 0 };
    unsigned char coopSign_None{ 0 };
    unsigned char coopSign_Umbasa{ 0 };
    unsigned char coopSign_Berserker{ 0 };
    unsigned char coopSign_Sinners{ 0 };
    unsigned char coopRing_RedHunter{ 0 };
    unsigned char invadeRing_Anor{ 0 };
    unsigned short paramReplaceRate{ 0 };
    int paramReplaceId{ -1 };
    unsigned char pad[8];
};

}; // namespace paramdefs
}; // namespace from

static_assert(sizeof(from::paramdefs::ESTUS_FLASK_RECOVERY_PARAM_ST) == 32,
    "ESTUS_FLASK_RECOVERY_PARAM_ST paramdef size does not match detected size");
