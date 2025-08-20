#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_BaseHeldItem.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xc88
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_GoldenIdol : public source2sdk::server::CCitadel_Ability_BaseHeldItem
        {
        public:
            std::int32_t m_nGold; // 0xbe0            
            float m_flAmberTime; // 0xbe4            
            float m_flSapphireTime; // 0xbe8            
            source2sdk::entity2::GameTime_t m_tAbilityCreateTime; // 0xbec            
            source2sdk::entity2::GameTime_t m_tLastDamageTime; // 0xbf0            
            uint8_t _pad0bf4[0x4]; // 0xbf4
            Vector m_vHomePosition; // 0xbf8            
            uint8_t _pad0c04[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GoldenIdol) == 0xc88);
    };
};
