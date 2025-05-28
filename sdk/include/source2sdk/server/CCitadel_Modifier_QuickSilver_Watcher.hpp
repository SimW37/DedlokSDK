#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"

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
        // Size: 0x248
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_QuickSilver_Watcher : public source2sdk::server::CCitadel_Modifier_BaseEventProc
        {
        public:
            uint8_t _pad0178[0xc4]; // 0x178
            bool m_bProcNextHit; // 0x23c            
            uint8_t _pad023d[0xb];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_QuickSilver_Watcher because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_QuickSilver_Watcher) == 0x248);
    };
};
