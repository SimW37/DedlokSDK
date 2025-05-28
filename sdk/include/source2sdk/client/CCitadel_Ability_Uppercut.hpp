#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_Melee_Base.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x10d8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Uppercut : public source2sdk::client::CCitadel_Ability_Melee_Base
        {
        public:
            uint8_t _pad0e50[0x280]; // 0xe50
            bool m_bShouldUseResources; // 0x10d0            
            uint8_t _pad10d1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Uppercut because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Uppercut) == 0x10d8);
    };
};
