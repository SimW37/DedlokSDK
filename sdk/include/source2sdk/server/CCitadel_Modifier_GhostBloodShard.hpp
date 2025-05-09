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
    // Size: 0x1d8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_GhostBloodShard : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xc0]; // 0xc0
        float m_flMinSlowAmount; // 0x180        
        float m_flMoveSpeedPenaltyPerStack; // 0x184        
        float m_flSlowDuration; // 0x188        
        [[maybe_unused]] std::uint8_t pad_0x18c[0x4c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_GhostBloodShard because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_GhostBloodShard) == 0x1d8);
};
