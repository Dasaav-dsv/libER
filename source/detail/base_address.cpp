#include <detail/base_address.hpp>
#include <detail/windows.inl>

using namespace liber;

_base_address::_base_address() noexcept
    : base(reinterpret_cast<uintptr_t>(GetModuleHandleW(NULL))) {}

_base_address liber::base_address;
