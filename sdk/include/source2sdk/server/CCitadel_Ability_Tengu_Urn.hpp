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
        // Size: 0x10a8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_Urn : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            VectorWS m_vLaunchPosition; // 0xf90            
            QAngle m_qLaunchAngle; // 0xf9c            
            uint8_t _pad0fa8[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_Urn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Tengu_Urn) == 0x10a8);
    };
};
