#include <coresystem/world_character.hpp>
#include <detail/singleton.hpp>

using namespace from;

LIBER_SINGLETON_INSTANCE(CS::WorldChrMan);

using namespace from::CS;

// Anchored vtables:
int ChrSet::get_capacity() const {
    return this->capacity;
}

WorldAreaChrBase::~WorldAreaChrBase() = default;
WorldAreaChr::~WorldAreaChr() = default;
WorldBlockChr::~WorldBlockChr() = default;
WorldGridAreaChr::~WorldGridAreaChr() = default;
CCSDebugChrCreator::~CCSDebugChrCreator() = default;