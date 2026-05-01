#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf50
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_SummonSkele : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0d90[0x1c0];
            // No schema binary for binding
        };
        #pragma pack(pop)
        
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Necro_SummonSkele) == 0xf50);
    };
};
