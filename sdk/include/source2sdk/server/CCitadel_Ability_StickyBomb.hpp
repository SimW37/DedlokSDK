#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xcf0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hAutoTarget"
    // static metadata: MNetworkVarNames "GameTime_t m_flHookEndTime"
    // static metadata: MNetworkVarNames "float m_flBombBonus"
    #pragma pack(push, 1)
    class CCitadel_Ability_StickyBomb : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x4]; // 0xba0
        // metadata: MNetworkEnable
        // m_hAutoTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hAutoTarget;
        char m_hAutoTarget[0x4]; // 0xba4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flHookEndTime; // 0xba8        
        // metadata: MNetworkEnable
        float m_flBombBonus; // 0xbac        
        [[maybe_unused]] std::uint8_t pad_0xbb0[0x140];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StickyBomb because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StickyBomb) == 0xcf0);
};
