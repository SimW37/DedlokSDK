#pragma once
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x248
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_EtherealBullets_Watcher : public server::CCitadel_Modifier_BaseEventProc
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x178[0xc4]; // 0x178
        bool m_bProcNextHit; // 0x23c        
        [[maybe_unused]] std::uint8_t pad_0x23d[0xb];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_EtherealBullets_Watcher because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_EtherealBullets_Watcher) == 0x248);
};
