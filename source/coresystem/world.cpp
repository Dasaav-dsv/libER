#include <coresystem/world.hpp>
#include <detail/singleton.hpp>

using namespace from::CS;

// Anchored vtables:
WorldBlockInfo::~WorldBlockInfo() = default;
WorldAreaInfoBase::~WorldAreaInfoBase() = default;
WorldAreaInfo::~WorldAreaInfo() = default;
WorldGridAreaInfo::~WorldGridAreaInfo() = default;
WorldInfo::~WorldInfo() = default;
WorldBlockResBase::~WorldBlockResBase() = default;
WorldBlockRes::~WorldBlockRes() = default;
WorldLodBlockRes::~WorldLodBlockRes() = default;
WorldAreaResBase::~WorldAreaResBase() = default;
WorldAreaRes::~WorldAreaRes() = default;
WorldGridAreaRes::~WorldGridAreaRes() = default;
WorldRes::~WorldRes() = default;
WorldInfoOwner::~WorldInfoOwner() = default;