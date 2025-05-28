#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class EWeaponSwapState_t : std::uint8_t
        {
            EWeaponSwapState_None = 0x0,
            EWeaponSwapState_StartDelay = 0x1,
            EWeaponSwapState_Swapped = 0x2,
            EWeaponSwapState_EndDelay = 0x3,
        };
    };
};
