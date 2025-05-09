#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Enumerator count: 4
    // Alignment: 1
    // Size: 0x1
    enum class EWeaponSwapState_t : std::uint8_t
    {
        EWeaponSwapState_None = 0,
        EWeaponSwapState_StartDelay = 1,
        EWeaponSwapState_Swapped = 2,
        EWeaponSwapState_EndDelay = 3,
    };
};
