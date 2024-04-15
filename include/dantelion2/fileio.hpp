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
#include <memory/from_unique_ptr.hpp>
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

namespace DLFileConstants {
enum file_openmode : int {
    READ = 1,
    WRITE = 2,
    READWRITE = READ | WRITE,
    APPEND = 4,
    ASYNC = 16,
    EXCLUSIVE = 64
};

enum file_result : int {
    DIR_NOT_EMPTY = -17,
    OUT_OF_MEMORY = -13,
    DISK_FULL = -12,
    NOT_STREAMED = -9,
    ALREADY_OPEN = -6,
    IS_NOT_OPEN = -5,
    NOT_FOUND = -4,
    ACCESS_DENIED = -3,
    OPERATION_UNSUPPORTED = -2,
    INVALID = -1,
    SUCCESS = 0,
    NO_MORE_FILES = 1
};
} // namespace DLFileConstants

class DLFileDevice {
public:
    LIBER_CLASS(DLFileDevice);

    virtual ~DLFileDevice() = default;

    virtual from::unique_ptr<DLFileOperator> load_file(
        DLTX::DLString* path_dlstr, const wchar_t* path_lpcwstr,
        void* liber_unknown, from::allocator<void> allocator,
        bool liber_unknown) = 0;

    virtual from::unique_ptr<DLFileEnumeratorSPI> get_file_enumerator() = 0;

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

    using filesys_time = std::pair<FILETIME, FD4::FD4PackedSystemTime>;
    using read_size_type = uint32_t;
    using file_size_type = uint64_t;
    using file_difference_type = int64_t;

    virtual ~DLFileOperator() = default;
    virtual bool copy_base(DLFileOperator* other) = 0;
    virtual bool set_path(DLTX::DLString* new_path, bool iostate_0x2) = 0;

private:
    // set_path duplicates, potentially for other string types
    virtual bool liber_unknown(DLTX::DLString* new_path, bool iostate_0x2) = 0;
    virtual bool liber_unknown(DLTX::DLString* new_path, bool iostate_0x2) = 0;
    virtual bool liber_unknown(DLTX::DLString* new_path, bool iostate_0x2) = 0;

public:
    virtual bool close_file() = 0;
    virtual from::unique_ptr<DLFileOperator> get_virtual_disk_operator() = 0;
    virtual DLFileDeviceImageSPI* bind_device_image(DLFileDeviceImageSPI*) = 0;
    virtual bool populate_dir_info() = 0;
    virtual bool populate_file_info() = 0;
    virtual filesys_time get_last_access_time() = 0;
    virtual filesys_time get_last_write_time() = 0;
    virtual file_size_type get_file_size() = 0;
    virtual file_difference_type get_remaining_size() = 0;
    virtual int max_non_streamed_size() = 0;
    virtual void truncate_file() = 0;
    virtual bool has_file_control_0x4() = 0;
    virtual bool is_directory() = 0;
    virtual bool is_open() = 0;
    virtual bool open_file(int dlfile_openmode) = 0;
    virtual bool try_close_file() = 0;
    virtual bool set_control_unk(bool unk) = 0;
    virtual bool seek(bool is_stream, file_difference_type pos,
        int move_method) = 0;
    virtual file_size_type get_cursor_pos() = 0;
    virtual read_size_type read_file(void* out, read_size_type cb) = 0;
    virtual read_size_type write_file(void* in, read_size_type cb) = 0;
    virtual read_size_type get_sector_size() = 0;
    virtual read_size_type get_virtual_sector_size() = 0;
    virtual read_size_type stream_read_file(void* out, read_size_type cb) = 0;
    virtual read_size_type stream_write_file(void* in, read_size_type cb) = 0;
    virtual bool stream_complete_operation(HANDLE* event_handle_out,
        read_size_type* cb_out) = 0;
    virtual int get_file_creation_flags() = 0;
    virtual bool delete_file() = 0;
    virtual bool liber_unknown() = 0;
    virtual bool populate_file_info_again() = 0;
    virtual bool liber_unknown() = 0;
    virtual bool move_file_w(const wchar_t* new_path) = 0;
    virtual bool move_file(const char* new_path) = 0;
    virtual bool create_directory() = 0;

private:
    from::allocator<void> allocator;
    DLFileConstants::file_result result;
    void* liber_unknown;
    // 0x1 might be "open"
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
    DLTX::DLString path;
    DLFileOperator* operator;
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

private:
    HANDLE file_handle;
    // | 0x1 |  0x2      | 0x4  | 0x8      | 0x10        |
    // | unk |  has_info | EOF? | is_async | is_streamed |
    char file_control;
    BY_HANDLE_FILE_INFORMATION file_info;
    file_size_type cursor_pos;
    OVERLAPPED overlapped;
    int file_creation_flags;
};

LIBER_ASSERTS_BEGIN(MicrosoftDiskFileOperator);
LIBER_ASSERT_SIZE(0xD8);
LIBER_ASSERTS_END;
} // namespace msvc90_windows
} // namespace DLIOD
} // namespace from
