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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1010
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bReviveIsActive"
    // static metadata: MNetworkVarNames "GameTime_t m_TimeOfDeath"
    #pragma pack(push, 1)
    class CCitadel_Ability_Frank_Revive : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x2]; // 0xdc0
        // metadata: MNetworkEnable
        bool m_bReviveIsActive; // 0xdc2        
        [[maybe_unused]] std::uint8_t pad_0xdc3[0x1]; // 0xdc3
        // metadata: MNetworkEnable
        entity2::GameTime_t m_TimeOfDeath; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc8[0x248];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Frank_Revive because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Frank_Revive) == 0x1010);
};
