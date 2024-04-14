/**
 * @file fileio.hpp
 * @brief Core of ELDEN RING file IO
 *
 * Copyright 2024 libER ELDEN RING API library
 *
 */

#pragma once

#include <dantelion2/kernel_runtime.hpp>
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
class DLFileDevice {};
class DLFileDeviceImageSPI {};

class DLBinder3FileDeviceImageSPI : public DLFileDeviceImageSPI {};
class DLBinder4FileDeviceImageSPI : public DLFileDeviceImageSPI {};

class DLFileDeviceManager {
public:

private:
    from::vector<DLFileDevice*> liber_unknown;
    from::vector<DLFileDevice*> liber_unknown;
    DLIOD::msvc90_windows::MicrosoftDiskFileDevice* liber_unknown;
    from::vector<DLFileDevice*> liber_unknown;
    from::vector<DLFileDevice*> liber_unknown;
    from::vector<DLFileDevice*> liber_unknown;
};
} // namespace DLIO
// Dantelion input/output devices (older namespace, has D postfix)
namespace DLIOD {
namespace msvc90_windows {
class MicrosoftDiskFileDevice : public DLIO::DLFileDevice {};
} // namespace msvc90_windows
} // namespace DLIOD
} // namespace from
