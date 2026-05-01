#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"

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
        // Size: 0x1c0
        // Has VTable
        #pragma pack(push, 1)
        class CModifier_Fencer_Lunge_Bleed : public source2sdk::server::CCitadelModifier
        {
        public:
            std::int32_t m_nNumTicksRemaining; // 0xd0            
            float m_flTotalBleedDamage; // 0xd4            
            float m_flBonusDamagePct; // 0xd8            
            uint8_t _pad00dc[0xe4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Fencer_Lunge_Bleed because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Fencer_Lunge_Bleed) == 0x1c0);
    };
};
