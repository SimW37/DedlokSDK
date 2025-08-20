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
        // Size: 0xc60
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flMaxStacksBonusDamage"
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_StackingDefense : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x4]; // 0xb98
            // metadata: MNetworkEnable
            float m_flMaxStacksBonusDamage; // 0xb9c            
            uint8_t _pad0ba0[0xc0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_StackingDefense because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Priest_StackingDefense) == 0xc60);
    };
};
