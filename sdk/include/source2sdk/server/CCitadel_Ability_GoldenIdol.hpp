#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_BaseHeldItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc90
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_GoldenIdol : public server::CCitadel_Ability_BaseHeldItem
    {
    public:
        int32_t m_nGold; // 0xbe8        
        float m_flAmberTime; // 0xbec        
        float m_flSapphireTime; // 0xbf0        
        entity2::GameTime_t m_tAbilityCreateTime; // 0xbf4        
        entity2::GameTime_t m_tLastDamageTime; // 0xbf8        
        [[maybe_unused]] std::uint8_t pad_0xbfc[0x4]; // 0xbfc
        Vector m_vHomePosition; // 0xc00        
        [[maybe_unused]] std::uint8_t pad_0xc0c[0x84];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GoldenIdol because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GoldenIdol) == 0xc90);
};
