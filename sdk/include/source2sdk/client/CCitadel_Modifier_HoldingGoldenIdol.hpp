#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1d0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_HoldingGoldenIdol : public source2sdk::client::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x100]; // 0xc0
            source2sdk::client::ParticleIndex_t m_iIdolParticle; // 0x1c0            
            std::int32_t m_nGoldValue; // 0x1c4            
            bool m_bRevealed; // 0x1c8            
            uint8_t _pad01c9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HoldingGoldenIdol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_HoldingGoldenIdol) == 0x1d0);
    };
};
