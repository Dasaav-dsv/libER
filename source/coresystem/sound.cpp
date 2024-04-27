#include <coresystem/sound.hpp>
#include <detail/functions.hpp>
#include <detail/singleton.hpp>

#include <stdexcept>
#include <utility>


using namespace from;

LIBER_SINGLETON_INSTANCE(CS::CSSoundImp);

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

liber::optref<CS::CSFD4SoundIns> CS::CSSoundImp::make_system_sound(
    char sound_type, int sound_id, void* wwise_obj) {
    int sound_type_integer = sound_type_to_int(sound_type);
    if (sound_type_integer < 0)
        return std::nullopt;
    auto sound = std::make_pair(sound_type_integer, sound_id);
    return liber::function<"CS::CSSoundImp::make_system_sound",
        CS::CSFD4SoundIns*>::call(this, &sound, wwise_obj);
}
