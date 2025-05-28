#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAura.hpp"

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
        // Size: 0x188
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_ThermalDetonator_Thinker : public source2sdk::server::CCitadelModifierAura
        {
        public:
            Vector m_vecOrigin; // 0xe0            
            Vector m_vecWorldSpaceMins; // 0xec            
            Vector m_vecWorldSpaceMaxs; // 0xf8            
            uint8_t _pad0104[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ThermalDetonator_Thinker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ThermalDetonator_Thinker) == 0x188);
    };
};
