#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class OrientationWarpMode_t : std::uint32_t
    {
        // MPropertySuppressEnumerator
        eInvalid = 0x0,
        // MPropertyFriendlyName "Angle"
        eAngle = 0x1,
        // MPropertyFriendlyName "World Position"
        eWorldPosition = 0x2,
    };
};
