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
    // Size: 0xf08
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsInCatform"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastDamageTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_CatForm : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIsInCatform; // 0xdc0        
        [[maybe_unused]] std::uint8_t pad_0xdc1[0x3]; // 0xdc1
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLastDamageTime; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc8[0x140];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_CatForm because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_CatForm) == 0xf08);
};
