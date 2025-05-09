#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
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
    // Size: 0xe0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BarrierTracker : public client::CCitadelModifier
    {
    public:
        float m_flMaxHealth; // 0xc0        
        float m_flCurrentHealth; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc8[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BarrierTracker because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BarrierTracker) == 0xe0);
};
