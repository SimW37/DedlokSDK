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
        // Size: 0x148
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Tech_Bleed : public source2sdk::server::CCitadelModifier
        {
        public:
            bool m_bNoDeath; // 0xc0            
            bool m_bDamageInProgress; // 0xc1            
            uint8_t _pad00c2[0x2]; // 0xc2
            float m_flDamage; // 0xc4            
            uint8_t _pad00c8[0x80];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Tech_Bleed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Tech_Bleed) == 0x148);
    };
};
