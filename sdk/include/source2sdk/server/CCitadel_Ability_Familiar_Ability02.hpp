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
        // Size: 0x1318
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bCastWhileAttached"
        #pragma pack(push, 1)
        class CCitadel_Ability_Familiar_Ability02 : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x380]; // 0xf90
            // metadata: MNetworkEnable
            bool m_bCastWhileAttached; // 0x1310            
            uint8_t _pad1311[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Familiar_Ability02 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Familiar_Ability02) == 0x1318);
    };
};
