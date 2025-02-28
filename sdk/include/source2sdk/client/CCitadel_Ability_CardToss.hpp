#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xed8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bCardIsFlying"
    #pragma pack(push, 1)
    class CCitadel_Ability_CardToss : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0x280]; // 0xc50
        // metadata: MNetworkEnable
        bool m_bCardIsFlying; // 0xed0        
        [[maybe_unused]] std::uint8_t pad_0xed1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_CardToss because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_CardToss) == 0xed8);
};
