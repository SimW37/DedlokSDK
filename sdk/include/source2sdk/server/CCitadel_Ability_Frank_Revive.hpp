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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdf0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bReviveIsActive"
    // static metadata: MNetworkVarNames "GameTime_t m_TimeOfDeath"
    #pragma pack(push, 1)
    class CCitadel_Ability_Frank_Revive : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x2]; // 0xba0
        // metadata: MNetworkEnable
        bool m_bReviveIsActive; // 0xba2        
        [[maybe_unused]] std::uint8_t pad_0xba3[0x1]; // 0xba3
        // metadata: MNetworkEnable
        entity2::GameTime_t m_TimeOfDeath; // 0xba4        
        [[maybe_unused]] std::uint8_t pad_0xba8[0x248];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Frank_Revive because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Frank_Revive) == 0xdf0);
};
