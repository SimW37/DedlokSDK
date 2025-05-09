#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x2a0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Invis : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x1c0]; // 0xc0
        bool m_bInvis; // 0x280        
        [[maybe_unused]] std::uint8_t pad_0x281[0x3]; // 0x281
        entity2::GameTime_t m_flStartInvisTime; // 0x284        
        bool m_bFullyInvis; // 0x288        
        [[maybe_unused]] std::uint8_t pad_0x289[0x3]; // 0x289
        entity2::GameTime_t m_flLastDamageTaken; // 0x28c        
        entity2::GameTime_t m_flLastSpotted; // 0x290        
        client::ParticleIndex_t m_nDetectionRangeRing; // 0x294        
        client::ParticleIndex_t m_nFullInvisEffect; // 0x298        
        [[maybe_unused]] std::uint8_t pad_0x29c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Invis because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Invis) == 0x2a0);
};
