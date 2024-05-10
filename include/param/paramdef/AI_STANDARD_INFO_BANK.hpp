/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct AI_STANDARD_INFO_BANK {
    unsigned short RadarRange{ 20 };
    unsigned char RadarAngleX{ 30 };
    unsigned char RadarAngleY{ 60 };
    unsigned short TerritorySize{ 20 };
    unsigned char ThreatBeforeAttackRate{ 50 };
    bool ForceThreatOnFirstLocked{ false };
    unsigned char reserve0[24];
    unsigned short Attack1_Distance{ 0 };
    unsigned short Attack1_Margin{ 0 };
    unsigned char Attack1_Rate{ 50 };
    unsigned char Attack1_ActionID{ 0 };
    unsigned char Attack1_DelayMin{ 0 };
    unsigned char Attack1_DelayMax{ 0 };
    unsigned char Attack1_ConeAngle{ 30 };
    unsigned char reserve10[7];
    unsigned short Attack2_Distance{ 0 };
    unsigned short Attack2_Margin{ 0 };
    unsigned char Attack2_Rate{ 50 };
    unsigned char Attack2_ActionID{ 0 };
    unsigned char Attack2_DelayMin{ 0 };
    unsigned char Attack2_DelayMax{ 0 };
    unsigned char Attack2_ConeAngle{ 30 };
    unsigned char reserve11[7];
    unsigned short Attack3_Distance{ 0 };
    unsigned short Attack3_Margin{ 0 };
    unsigned char Attack3_Rate{ 50 };
    unsigned char Attack3_ActionID{ 0 };
    unsigned char Attack3_DelayMin{ 0 };
    unsigned char Attack3_DelayMax{ 0 };
    unsigned char Attack3_ConeAngle{ 30 };
    unsigned char reserve12[7];
    unsigned short Attack4_Distance{ 0 };
    unsigned short Attack4_Margin{ 0 };
    unsigned char Attack4_Rate{ 50 };
    unsigned char Attack4_ActionID{ 0 };
    unsigned char Attack4_DelayMin{ 0 };
    unsigned char Attack4_DelayMax{ 0 };
    unsigned char Attack4_ConeAngle{ 30 };
    unsigned char reserve13[7];
    unsigned char reserve_last[32];
};

}; // namespace paramdef
}; // namespace from
