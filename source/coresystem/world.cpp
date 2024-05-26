#include <coresystem/world.hpp>
#include <detail/singleton.hpp>

using namespace from;
LIBER_SINGLETON_INSTANCE(CS::WorldChrManImp);

using namespace from::CS;

// Anchored vtables:
WorldBlockInfo::~WorldBlockInfo() = default;
WorldAreaInfoBase::~WorldAreaInfoBase() = default;
WorldAreaInfo::~WorldAreaInfo() = default;
WorldGridAreaInfo::~WorldGridAreaInfo() = default;
WorldInfo::~WorldInfo() = default;
WorldAreaResBase::~WorldAreaResBase() = default;
WorldBlockResBase::~WorldBlockResBase() = default;
WorldBlockRes::~WorldBlockRes() = default;
WorldLodBlockRes::~WorldLodBlockRes() = default;
WorldRes::~WorldRes() = default;
WorldInfoOwner::~WorldInfoOwner() = default;