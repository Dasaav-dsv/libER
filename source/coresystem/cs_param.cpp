#include <coresystem/cs_param.hpp>
#include <detail/functions.hpp>
#include <detail/windows.inl>

using namespace from;

bool CS::SoloParamRepository::wait_for_params(int timeout) {
    auto are_params_ready = [](int& num_loaded) {
        auto param_repository_ref = instance();
        if (!param_repository_ref)
            return false;
        auto& param_repository = param_repository_ref.reference();
        for (int pos = num_loaded; pos < param::param_count;
             ++pos, ++num_loaded)
            if (!param_repository.get_param_file(param::param_index(pos)))
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
