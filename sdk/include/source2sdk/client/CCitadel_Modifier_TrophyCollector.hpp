#pragma once
#include "source2sdk/client/CCitadel_Modifier_Intrinsic_Base.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2d8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_TrophyCollector : public client::CCitadel_Modifier_Intrinsic_Base
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x200]; // 0xc0
        int32_t m_iTrophyCount; // 0x2c0        
        int32_t m_iInitialKills; // 0x2c4        
        int32_t m_iInitialAssists; // 0x2c8        
        int32_t m_iPrevCount; // 0x2cc        
        float m_flCurrentThinkRate; // 0x2d0        
        bool m_bMaxStacksReached; // 0x2d4        
        [[maybe_unused]] std::uint8_t pad_0x2d5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TrophyCollector because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TrophyCollector) == 0x2d8);
};
