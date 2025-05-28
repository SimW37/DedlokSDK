#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

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
        // Size: 0xde8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Teleport : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bTeleportingToTarget; // 0xdc0            
            uint8_t _pad0dc1[0x3]; // 0xdc1
            Vector m_vTargetPosition; // 0xdc4            
            QAngle m_vTargetAngles; // 0xdd0            
            uint8_t _pad0ddc[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Teleport) == 0xde8);
    };
};
