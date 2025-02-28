#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class DynamicContinuousContactBehavior_t : std::uint8_t
    {
        DYNAMIC_CONTINUOUS_ALLOW_IF_REQUESTED_BY_OTHER_BODY = 0,
        DYNAMIC_CONTINUOUS_ALWAYS = 1,
        DYNAMIC_CONTINUOUS_NEVER = 2,
    };
};
