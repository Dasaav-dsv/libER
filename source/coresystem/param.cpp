#include <coresystem/param.hpp>
#include <detail/functions.hpp>
#include <detail/singleton.hpp>
#include <detail/windows.inl>

using namespace from;

LIBER_SINGLETON_INSTANCE(CS::SoloParamRepositoryImp);

bool CS::SoloParamRepositoryImp::wait_for_params(int timeout) {
    auto are_params_ready = [](int& num_loaded) {
        auto param_repository_ref = instance();
        if (!param_repository_ref)
            return false;
        auto& param_repository = param_repository_ref.reference();
        for (int pos = num_loaded; pos < LIBER_PARAM_COUNT; ++pos, ++num_loaded)
            if (!param_repository.get_param_res_cap<void>(pos))
                return false;
        return true;
    };
    int num_loaded = 0;
    if (timeout >= 0) {
        unsigned long long wait = GetTickCount64() + timeout;
        while (!are_params_ready(num_loaded)) {
            if (GetTickCount64() > wait)
                return false;
            YieldProcessor();
        }
    }
    else {
        while (!are_params_ready(num_loaded)) YieldProcessor();
    }
    return true;
}

void* CS::SoloParamRepositoryImp::get_param_res_cap_address(size_t pos) {
    return liber::function<
        "CS::SoloParamRepositoryImp::get_param_res_cap_address",
        void*>::call(this, pos, 0);
}
