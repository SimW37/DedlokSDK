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
        // Size: 0x1140
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_GoldenIdol : public source2sdk::server::CCitadel_Ability_BaseHeldItem
        {
        public:
            std::int32_t m_nGold; // 0x1018            
            float m_flAmberTime; // 0x101c            
            float m_flSapphireTime; // 0x1020            
            source2sdk::entity2::GameTime_t m_tAbilityCreateTime; // 0x1024            
            source2sdk::entity2::GameTime_t m_tLastDamageTime; // 0x1028            
            uint8_t _pad102c[0x4]; // 0x102c
            VectorWS m_vHomePosition; // 0x1030            
            uint8_t _pad103c[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdol because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GoldenIdol) == 0x1140);
    };
};
