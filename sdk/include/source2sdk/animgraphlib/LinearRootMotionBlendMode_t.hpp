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
    enum class LinearRootMotionBlendMode_t : std::uint32_t
    {
        // MPropertyFriendlyName "LERP"
        LERP = 0x0,
        // MPropertyFriendlyName "NLERP"
        NLERP = 0x1,
        // MPropertyFriendlyName "SLERP"
        SLERP = 0x2,
    };
};
