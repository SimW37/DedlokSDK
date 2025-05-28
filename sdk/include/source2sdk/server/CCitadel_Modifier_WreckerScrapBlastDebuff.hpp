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
        // Size: 0x108
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_WreckerScrapBlastDebuff : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x40]; // 0xc0
            float m_flEnemyMoveSlow; // 0x100            
            uint8_t _pad0104[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_WreckerScrapBlastDebuff because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_WreckerScrapBlastDebuff) == 0x108);
    };
};
