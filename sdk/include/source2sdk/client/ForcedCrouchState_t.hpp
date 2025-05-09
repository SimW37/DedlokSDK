#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 3
    // Alignment: 4
    // Size: 0x4
    enum class ForcedCrouchState_t : std::uint32_t
    {
        FORCEDCROUCH_NONE = 0x0,
        FORCEDCROUCH_CROUCHED = 0x1,
        FORCEDCROUCH_UNCROUCHED = 0x2,
    };
};
