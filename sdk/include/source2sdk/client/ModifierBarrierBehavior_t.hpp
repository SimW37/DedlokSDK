#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 2
    // Alignment: 4
    // Size: 0x4
    enum class ModifierBarrierBehavior_t : std::uint32_t
    {
        MODIFIER_BARRIER_BEHAVIOR_KEEP_ON_DESTROY = 0x0,
        MODIFIER_BARRIER_BEHAVIOR_REMOVE_ON_DESTROY = 0x1,
    };
};
