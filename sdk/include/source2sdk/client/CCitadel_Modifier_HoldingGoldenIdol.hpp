#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0x150
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_HoldingGoldenIdol : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x80]; // 0xc0
        client::ParticleIndex_t m_iIdolParticle; // 0x140        
        int32_t m_nGoldValue; // 0x144        
        bool m_bRevealed; // 0x148        
        [[maybe_unused]] std::uint8_t pad_0x149[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HoldingGoldenIdol because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_HoldingGoldenIdol) == 0x150);
};
