/**
 * @file param.hpp
 * @brief Namespace CS param interface
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */
#pragma once

#include <detail/optref.hpp>
#include <detail/preprocessor.hpp>
#include <fd4/detail/fd4_param.hpp>
#include <fd4/detail/singleton.hpp>
#include <fd4/resource.hpp>
#include <memory/from_allocator.hpp>
#include <memory/from_set.hpp>
#include <memory/from_string.hpp>
#include <memory/from_vector.hpp>
#include <param/detail/paramdef.hpp>
#include <param/param_file.hpp>

#include <algorithm>

namespace from {
namespace CS {
class ParamResCap : public FD4::FD4ResCap {
public:
    FD4_RUNTIME_CLASS(ParamResCap);

    liber::optref<param::param_file*> get_param_file() {
        if (!this->underlying)
            return std::nullopt;
        auto& param_file = this->underlying->get_param_file();
        if (!param_file)
            return std::nullopt;
        return param_file;
    }

private:
    long long liber_unknown;
    FD4::FD4ParamResCap* underlying;
};

/**
 * @brief The interface to access and modify param data
 */
class SoloParamRepositoryImp : public FD4::FD4ResCap {
public:
    FD4_SINGLETON_CLASS(SoloParamRepositoryImp);

    virtual ~SoloParamRepositoryImp() LIBER_INTERFACE_ONLY;

    /**
     * @brief Lock until the param repository is loaded or the time runs out.
     *
     * @warning **POTENTIAL DEADLOCK**
     *
     * @warning **DO NOT** call this function from a thread
     * that the game's main thread may wait on.
     *
     * @warning **DO NOT CALL THIS FUNCTION FROM DLLMAIN.**
     *
     * @param timeout time in ms before abandoning the wait
     * @return true wait succeeded
     * @return false wait timed out
     */
    LIBERAPI static bool wait_for_params(int timeout);

    liber::optref<param::param_file*> get_param_file(param::param_index index) {
        auto res_cap = this->param_entries[int(index)].res_cap[0];
        if (!res_cap) 
            return std::nullopt;
        return res_cap->get_param_file();
    }

private:
    void* liber_unknown;
    struct {
        int res_cap_count;
        ParamResCap* res_cap[8];
    } param_entries[int(param::param_index::PARAM_COUNT)];
    struct CSWepReinforceTree {
        virtual ~CSWepReinforceTree() = default;
        from::allocator<void*> allocator;
        void* liber_unknown;
    } wep_reinforce_tree;
    from::vector<std::pair<int, int>> liber_unknown;
    from::vector<std::pair<int, int>> liber_unknown;
    from::set<int> liber_unknown;
    from::set<int> liber_unknown;
};

LIBER_ASSERTS_BEGIN(SoloParamRepositoryImp);
LIBER_ASSERT_SIZE(0x3558);
LIBER_ASSERTS_END;
}; // namespace CS
}; // namespace from
