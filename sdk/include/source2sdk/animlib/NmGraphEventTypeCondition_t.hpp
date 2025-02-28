#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Enumerator count: 6
    // Alignment: 1
    // Size: 0x1
    enum class NmGraphEventTypeCondition_t : std::uint8_t
    {
        Entry = 0,
        FullyInState = 1,
        Exit = 2,
        Timed = 3,
        Generic = 4,
        Any = 5,
    };
};
