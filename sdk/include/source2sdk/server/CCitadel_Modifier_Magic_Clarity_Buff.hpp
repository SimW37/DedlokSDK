#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x1d0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Magic_Clarity_Buff : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xc0]; // 0xc0
        uint64_t m_iAbilityID; // 0x180        
        [[maybe_unused]] std::uint8_t pad_0x188[0x40]; // 0x188
        bool m_bAbilityLocked; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1c9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Magic_Clarity_Buff because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Magic_Clarity_Buff) == 0x1d0);
};
