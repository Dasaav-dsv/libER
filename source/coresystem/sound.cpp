#include <coresystem/sound.hpp>
#include <detail/functions.hpp>

#include <stdexcept>
#include <utility>

using namespace from;

// clang-format off
char sound_type_lut[] = {
     0,  9,  1, 15, 13,
     2, 14, -1, 10, -1,
    -1, -1,  6, -1,  3,
     4, -1, -1,  5, -1,
    -1,  7, -1,  8, 11,
    12
};
// clang-format on

int sound_type_to_int(char sound_type) {
    unsigned int to_base = static_cast<unsigned int>(sound_type) - 'a';
    if (to_base >= 26)
        return -1;
    return sound_type_lut[to_base];
}

DLUT::DLReferenceCountPtr<CS::CSFD4SoundIns> CS::CSSound::play_system_sound(
    char sound_type, int sound_id) {
    int sound_type_integer = sound_type_to_int(sound_type);
    if (sound_type_integer < 0)
        return nullptr;
    auto cssound = CS::CSSound::instance();
    if (!cssound)
        return nullptr;
    auto sound_typeid = std::make_pair(sound_type_integer, sound_id);
    auto sound = liber::function<"CS::CSSound::make_system_sound",
        CS::CSFD4SoundIns*>::call(&cssound.reference(), &sound_typeid, nullptr);
    if (!sound)
        return nullptr;
    sound->play_sound = 1;
    return DLUT::DLReferenceCountPtr<CS::CSFD4SoundIns>{ sound };
}

DLUT::DLReferenceCountPtr<CS::CSFD4SoundIns>
CS::CSSound::play_character_sound(char sound_type, int sound_id, ChrIns& chr,
    int dummypoly, bool follows_origin) {
    int sound_type_integer = sound_type_to_int(sound_type);
    if (sound_type_integer < 0)
        return nullptr;
    auto cssound = CS::CSSound::instance();
    if (!cssound)
        return nullptr;
    auto sound_typeid = std::make_pair(sound_type_integer, sound_id);
    return liber::function<"CS::CSSound::play_character_sound",
        DLUT::DLReferenceCountPtr<CS::CSFD4SoundIns>>::call(&chr, &sound_typeid,
        &dummypoly, follows_origin);
}
