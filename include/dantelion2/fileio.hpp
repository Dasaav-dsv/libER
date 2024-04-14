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

class DLFileOperator {};

class DLBinder3FileEnumerator : public DLFileOperator {};
class DLBinder4FileEnumerator : public DLFileOperator {};

class DLFileEnumeratorSPI {};

class DLBinder3FileOperatorSPI : public DLFileEnumeratorSPI {};
class DLBinder4FileOperatorSPI : public DLFileEnumeratorSPI {};

class DLFileDeviceImageSPI {
public:
    virtual ~DLFileDeviceImageSPI() = default;
};

class DLBinder3FileDeviceImageSPI : public DLFileDeviceImageSPI {
    virtual ~DLBinder3FileDeviceImageSPI() = default;

private:
    DLTX::DLString liber_unknown;
    void* liber_unknown;
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
    DLBinder3FileDeviceImageSPI* bnd3_service_provider;
    DLBinder4FileDeviceImageSPI* bnd4_service_provider;
    mutable DLKR::DLPlainLightMutex mutex;
};

LIBER_ASSERTS_BEGIN(DLFileDevice);
LIBER_ASSERT_SIZE(0x40);
LIBER_ASSERTS_END;

} // namespace DLIO
// Dantelion input/output devices (older namespace, has D postfix)
namespace DLIOD {
namespace msvc90_windows {
class MicrosoftDiskFileDevice : public DLIO::DLFileDevice {};
} // namespace msvc90_windows
} // namespace DLIOD
} // namespace from
