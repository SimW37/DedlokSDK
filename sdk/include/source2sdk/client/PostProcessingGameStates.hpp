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
        // Alignment: 4
        // Size: 0x4
        enum class PostProcessingGameStates : std::uint32_t
        {
            PostProcState_Killed = 0x0,
            PostProcState_Black = 0x1,
            PostProcState_Blinded = 0x2,
            PostProcState_ShivPossessed = 0x3,
        };
    };
};
