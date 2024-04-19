#include <detail/functions.hpp>
#include <fd4/resource.hpp>

using namespace from;

FD4::FD4ResCap* FD4::FD4ResCapHolder::get_res_cap(DLTX::string_hash* res_name) {
    return liber::function<"FD4::FD4ResCapHolder::get_res_cap",
        FD4::FD4ResCap*>::call(this, res_name);
}
