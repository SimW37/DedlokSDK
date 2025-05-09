#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 1
    // Size: 0x1
    enum class ESwingState_t : std::uint8_t
    {
        ESwingState_None = 0,
        ESwingState_StartupDelay = 1,
        ESwingState_Swinging = 2,
    };
};
