#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Enumerator count: 4
        // Alignment: 1
        // Size: 0x1
        enum class AI_NavLocationType_t : std::uint8_t
        {
            AILT_WORLD_SPACE_POSITION = 0x0,
            AILT_LOCAL_SPACE_NAV_AREA = 0x1,
            AILT_SPACE_BLOCK = 0x2,
            AILT_ENTITY_POSITION = 0x3,
        };
    };
};
