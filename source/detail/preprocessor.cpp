#include <detail/preprocessor.hpp>

#include <detail/windows.inl>
#include <filesystem>

using namespace liber;

void liber::append_module_name_and_base(std::ostream& out,
    void* caller) noexcept {
    HMODULE handle;
    std::string module;
    if (GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS
                               | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
            (LPCWSTR)caller, &handle)
        && handle) {
        module.resize(MAX_PATH, '\0');
        module.resize(GetModuleFileNameA(handle, module.data(),
            static_cast<DWORD>(module.size())));
        std::filesystem::path module_path{ module };
        module = module_path.filename().string();
    }
    else {
        module = "UNKNOWN";
        handle = NULL;
    }
    out << " called from \"" + module + "\"+";
    out << std::hex
        << reinterpret_cast<uintptr_t>(caller)
               - reinterpret_cast<uintptr_t>(handle);
}
