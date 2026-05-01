#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"

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
        // Size: 0x1b0
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Fencer_Lunge_Bleed : public source2sdk::client::CCitadelModifier
        {
        public:
            std::int32_t m_nNumTicksRemaining; // 0xc0            
            float m_flTotalBleedDamage; // 0xc4            
            float m_flBonusDamagePct; // 0xc8            
            uint8_t _pad00cc[0xe4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Fencer_Lunge_Bleed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifier_Fencer_Lunge_Bleed) == 0x1b0);
    };
};
