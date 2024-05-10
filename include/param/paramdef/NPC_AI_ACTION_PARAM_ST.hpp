/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace from {
namespace paramdef {

struct NPC_AI_ACTION_PARAM_ST {
    unsigned char moveDir{ 0 };
    unsigned char key1{ 0 };
    unsigned char key2{ 0 };
    unsigned char key3{ 0 };
    bool bMoveDirHold{ false };
    bool bKeyHold1{ false };
    bool bKeyHold2{ false };
    bool bKeyHold3{ false };
    int gestureId{ 0 };
    bool bLifeEndSuccess{ false };
    unsigned char pad1[3];
};

}; // namespace paramdef
}; // namespace from

static_assert(sizeof(from::paramdef::NPC_AI_ACTION_PARAM_ST) == 16,
    "NPC_AI_ACTION_PARAM_ST paramdef size does not match detected size");
