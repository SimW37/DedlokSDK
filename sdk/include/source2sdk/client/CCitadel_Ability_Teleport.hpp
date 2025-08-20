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
        // Size: 0xdb0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Teleport : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            bool m_bTeleportingToTarget; // 0xd88            
            uint8_t _pad0d89[0x3]; // 0xd89
            Vector m_vTargetPosition; // 0xd8c            
            QAngle m_vTargetAngles; // 0xd98            
            uint8_t _pad0da4[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Teleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Teleport) == 0xdb0);
    };
};
