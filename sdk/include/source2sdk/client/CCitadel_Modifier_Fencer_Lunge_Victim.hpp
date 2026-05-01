#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0x448
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_Fencer_Lunge_Victim : public source2sdk::client::CCitadelModifier
        {
        public:
            std::int32_t m_nNumTicksRemaining; // 0xc0            
            float m_flTotalBleedDamage; // 0xc4            
            source2sdk::entity2::GameTime_t m_flLastBleedStartTime; // 0xc8            
            uint8_t _pad00cc[0x144]; // 0xcc
            bool m_bGotMaxStacks; // 0x210            
            uint8_t _pad0211[0x237];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Fencer_Lunge_Victim because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_Fencer_Lunge_Victim) == 0x448);
    };
};
