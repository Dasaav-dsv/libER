/**
 * @file fileio.hpp
 * @brief Core of ELDEN RING file IO
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */

#pragma once

#include <dantelion2/kernel_runtime.hpp>
#include <dantelion2/text.hpp>
#include <detail/preprocessor.hpp>
#include <detail/windows.inl>
#include <fd4/detail/singleton.hpp>
#include <fd4/time.hpp>
#include <memory/from_vector.hpp>

namespace from {
// Forward declaration
namespace DLIOD {
namespace msvc90_windows {
class MicrosoftDiskFileDevice;
}
} // namespace DLIOD
// Dantelion input/output
namespace DLIO {
// Forward declaration
class DLFileOperator;
class DLFileEnumeratorSPI;

class DLFileDevice {
public:
    LIBER_CLASS(DLFileDevice);

    virtual ~DLFileDevice() = default;

    virtual DLFileOperator* load_file(DLTX::DLString* path_dlstr,
        const wchar_t* path_lpcwstr, void* liber_unknown,
        from::allocator<void> allocator, bool liber_unknown) LIBER_INTERFACE;

    virtual DLFileEnumeratorSPI* get_file_enumerator() LIBER_INTERFACE;

    // Default = 2, CD-ROM = 1, unknown = 0
    virtual int drive_type(const wchar_t* path) {
        return 2;
    }

private:
    // Always false?
    virtual bool liber_unknown() {
        return false;
    }

    bool liber_unknown;
    mutable DLKR::DLPlainLightMutex mutex;
};

class DLFileOperator {
public:
    LIBER_CLASS(DLFileOperator);

    virtual ~DLFileOperator() = default;

private:
    from::allocator<void> allocator;
    int liber_unknown;
    void* liber_unknown; // Stack address?
    // | 0x1 |  0x2 | 0x4 |
    // | EOF | fail | bad |
    int iostate;
    DLFileDevice* owner;
    DLTX::DLString file;
};

class DLFileEnumeratorSPI {};

class DLFileDeviceImageSPI {
public:
    virtual ~DLFileDeviceImageSPI() = default;
};

class DLBinder4FileDeviceImageSPI : public DLFileDeviceImageSPI {
public:
    virtual ~DLBinder4FileDeviceImageSPI() = default;

private:
    DLTX::DLString liber_unknown;
    void* liber_unknown;
};

class DLFileDeviceManager {
public:
    FD4_SINGLETON_CLASS(DLFileDeviceManager);

private:
    struct bnd_file_entry {
        DLTX::DLString name;
        DLFileDevice* device;
        size_t filesize;
    };

    from::vector<DLFileDevice*> devices;
    from::vector<DLFileDeviceImageSPI*> service_providers;
    DLIOD::msvc90_windows::MicrosoftDiskFileDevice* msvc_file_device;
    from::vector<DLTX::DLString> virual_directories;
    from::vector<bnd_file_entry> bnd3_files;
    from::vector<bnd_file_entry> bnd4_files;
    DLFileDeviceImageSPI* bnd3_service_provider;
    DLBinder4FileDeviceImageSPI* bnd4_service_provider;
    mutable DLKR::DLPlainLightMutex mutex;
};

LIBER_ASSERTS_BEGIN(DLFileDevice);
LIBER_ASSERT_SIZE(0x40);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(DLFileOperator);
LIBER_ASSERT_SIZE(0x60);
LIBER_ASSERTS_END;

LIBER_ASSERTS_BEGIN(DLFileDeviceManager);
LIBER_ASSERT_SIZE(0xE8);
LIBER_ASSERT_OFFS(0xB8, mutex);
LIBER_ASSERTS_END;

} // namespace DLIO
// Dantelion input/output devices (older namespace, has D postfix)
namespace DLIOD {
namespace msvc90_windows {

class MicrosoftDiskFileDevice : public DLIO::DLFileDevice {};

class MicrosoftDiskFileOperator : public DLIO::DLFileOperator {
public:
    LIBER_CLASS(MicrosoftDiskFileOperator)

    virtual ~MicrosoftDiskFileOperator() = default;
    bool liber_unknown(MicrosoftDiskFileOperator* other) LIBER_INTERFACE;
    bool liber_unknown(DLTX::DLString*, char) LIBER_INTERFACE;
    bool liber_unknown(DLTX::DLString*, char) LIBER_INTERFACE;
    bool liber_unknown(DLTX::DLString*, char) LIBER_INTERFACE;
    bool liber_unknown(char) LIBER_INTERFACE;
    bool liber_unknown() LIBER_INTERFACE;
    void liber_unknown() LIBER_INTERFACE;
    void* liber_unknown(void*) LIBER_INTERFACE; // void* is some string
    bool populate_file_info_check() LIBER_INTERFACE;
    bool populate_file_info() LIBER_INTERFACE;
    
    std::pair<FILETIME, FD4::FD4PackedSystemTime>
    get_last_write_time() LIBER_INTERFACE;

private:
    HANDLE file_handle;
    // | 0x1       |  0x2       |
    // | file_info |  file_info |
    char file_control;
    BY_HANDLE_FILE_INFORMATION file_info;
    void* liber_unknown;
    void* liber_unknown;
    void* liber_unknown;
    void* liber_unknown;
    int liber_unknown;
};

LIBER_ASSERTS_BEGIN(MicrosoftDiskFileOperator);
LIBER_ASSERT_SIZE(0xD8);
LIBER_ASSERTS_END;
} // namespace msvc90_windows
} // namespace DLIOD
} // namespace from
