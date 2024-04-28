/**
 * @file sound.hpp
 * @brief Namespace CS sound playback
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <dantelion2/text.hpp>
#include <dantelion2/utility.hpp>
#include <detail/optref.hpp>
#include <fd4/detail/singleton.hpp>

namespace from {
namespace CS {
/**
 * @brief A single playable sound instance in the sound engine.
 *
 */
class CSFD4SoundIns : public DLUT::DLReferenceCountObject {
public:
    /**
     * @brief The sound playback state.
     *
     */
    enum sound_state : char {
        INIT = 0,
        PLAY = 1,
        STOP = 2,
        DIAL = 3
    };

    /**
     * @brief Start sound playback.
     *
     */
    void start_playback() noexcept {
        this->play_sound = 1;
    }

    /**
     * @brief Stop sound playback.
     *
     */
    void stop_playback() noexcept {
        this->sound_state_selector = STOP;
    }

    /**
     * @brief Is the sound playing?
     *
     * @return true
     * @return false
     */
    bool is_playing() const noexcept {
        return this->sound_state_selector != INIT;
    }

    /**
     * @brief Get the playback state
     *
     * @return const sound_state playback state
     */
    const sound_state get_playback_state() const noexcept {
        return this->sound_state_selector;
    }

private:
    std::pair<int, int> sound;
    void* wwise_obj;
    void* liber_unknown[5];
    void* liber_unknown;
    sound_state sound_state_selector;
    char liber_unknown;
    char play_sound;
    char liber_unknown;
    std::pair<int, int> liber_unknown;
    int liber_unknown;
    char liber_unknown;
    int liber_unknown;
    DLTX::DLString play_sound_name;
    DLTX::DLString stop_sound_name;
    DLTX::DLString dialogue_sound_name;
    short liber_unknown;
};

/**
 * @brief Singleton responsible for managing the sound engine.
 *
 */
class CSSoundImp {
public:
    FD4_SINGLETON_CLASS(CSSoundImp);

    /**
     * @brief Make a wwise system sound wrapper.
     *
     * @param sound_type The single letter prefix of a sound name,
     * possible values: 'a', 'c', 'f', 'o', 'p', 's', 'm', 'v', 'x', 'b', 'i',
     * 'y', 'z', 'e', 'g', 'd'
     * @param sound_id The nine digit decimal sound id
     * @param wwise_object wrapped wwise game object
     * @return liber::optref<CSFD4SoundIns> an optional reference to a new sound
     * instance
     */
    LIBERAPI liber::optref<CSFD4SoundIns> make_system_sound(char sound_type,
        int sound_id, void* wwise_object = nullptr);
};
} // namespace CS
} // namespace from
