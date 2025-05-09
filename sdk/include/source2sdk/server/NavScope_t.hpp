#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 5
    // Alignment: 1
    // Size: 0x1
    enum class NavScope_t : std::uint8_t
    {
        eGround = 0,
        eAir = 1,
        // MPropertySuppressEnumerator
        eCount = 2,
        // MPropertySuppressEnumerator
        eFirst = 0,
        // MPropertySuppressEnumerator
        eInvalid = 255,
    };
};
