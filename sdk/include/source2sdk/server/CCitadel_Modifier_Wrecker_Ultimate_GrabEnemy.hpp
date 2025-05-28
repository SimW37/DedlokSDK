#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x258
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bAddedStasisParticle; // 0xc0            
            uint8_t _pad00c1[0x3]; // 0xc1
            Vector m_vHoldOffset; // 0xc4            
            float m_flLastTouchTime; // 0xd0            
            uint8_t _pad00d4[0x184];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy) == 0x258);
    };
};
