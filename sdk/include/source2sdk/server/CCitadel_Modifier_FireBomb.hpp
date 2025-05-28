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
        // Size: 0x160
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_FireBomb : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x80]; // 0xc0
            float m_flSideMoveSpeed; // 0x140            
            Vector m_vReturnPosition; // 0x144            
            QAngle m_vReturnAngles; // 0x150            
            uint8_t _pad015c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_FireBomb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_FireBomb) == 0x160);
    };
};
