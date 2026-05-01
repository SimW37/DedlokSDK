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
        // Size: 0xf98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flOverrideCooldown"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_HealHost : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            float m_flOverrideCooldown; // 0xf90            
            uint8_t _pad0f94[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_HealHost because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Familiar_HealHost) == 0xf98);
    };
};
