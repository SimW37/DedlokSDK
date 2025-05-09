#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class NavScopeFlags_t : std::uint8_t
    {
        eGround = 1,
        eAir = 2,
        // MEnumeratorIsNotAFlag
        eAll = 3,
        // MEnumeratorIsNotAFlag
        eNone = 0,
    };
};
