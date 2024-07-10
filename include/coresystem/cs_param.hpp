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

namespace from {
namespace CS {
/**
 * @brief A resource capsule containing a param table capsule.
 *
 * In ELDEN RING, the newer namespace CS ParamResCaps hold
 * the older namespace FD4 ParamResCaps, which in turn
 * hold the raw param file data.
 *
 */
class ParamResCap : public FD4::FD4ResCap {
public:
    FD4_RUNTIME_CLASS(ParamResCap);

    LIBERAPI virtual ~ParamResCap();

    /**
     * @brief Get the param file associated with this capsule.
     *
     * @return liber::optref<param::param_file*> param file pointer, if bound
     */
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
 * @brief A singleton responsible for storing param resource capsules.
 *
 * The capsules are stored in a flat table with param::param_count entries.
 *
 */
class SoloParamRepository : public FD4::FD4ResCap {
public:
    FD4_SINGLETON_CLASS(SoloParamRepository);

    virtual ~SoloParamRepository() LIBER_INTERFACE_ONLY;

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

    /**
     * @brief Get the raw param file at the associated param index.
     *
     * @param index a value from the param index enum
     * @return liber::optref<param::param_file*>
     */
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
        LIBERAPI virtual ~CSWepReinforceTree();
        from::allocator<void*> allocator;
        void* liber_unknown;
    } wep_reinforce_tree;
    from::vector<std::pair<int, int>> liber_unknown;
    from::vector<std::pair<int, int>> liber_unknown;
    from::set<int> liber_unknown;
    from::set<int> liber_unknown;
    from::set<int> liber_unknown;
    from::set<int> liber_unknown;
};

LIBER_ASSERTS_BEGIN(SoloParamRepository);
LIBER_ASSERT_SIZE(0x37C8);
LIBER_ASSERTS_END;
}; // namespace CS
}; // namespace from
