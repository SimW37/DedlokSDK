#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hAutoTarget"
    // static metadata: MNetworkVarNames "GameTime_t m_flHookEndTime"
    // static metadata: MNetworkVarNames "float m_flBombBonus"
    #pragma pack(push, 1)
    class CCitadel_Ability_StickyBomb : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x4]; // 0xdc0
        // metadata: MNetworkEnable
        // m_hAutoTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hAutoTarget;
        char m_hAutoTarget[0x4]; // 0xdc4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flHookEndTime; // 0xdc8        
        // metadata: MNetworkEnable
        float m_flBombBonus; // 0xdcc        
        [[maybe_unused]] std::uint8_t pad_0xdd0[0x140];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StickyBomb because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StickyBomb) == 0xf10);
};
