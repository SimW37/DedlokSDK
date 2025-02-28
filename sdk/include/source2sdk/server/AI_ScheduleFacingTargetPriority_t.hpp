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
    enum class AI_ScheduleFacingTargetPriority_t : std::uint8_t
    {
        // MPropertyFriendlyName "Default"
        eDefault = 0,
        // MPropertyFriendlyName "High"
        eHigh = 0,
        // MPropertyFriendlyName "Task Blocking"
        eTaskBlocking = 1,
        // MPropertyFriendlyName "Task Blocking + Force Facing"
        eTaskBlockingForceFacing = 2,
    };
};
