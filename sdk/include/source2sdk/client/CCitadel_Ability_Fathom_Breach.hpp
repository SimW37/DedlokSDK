#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // static metadata: MNetworkVarNames "bool m_bInFlight"
    #pragma pack(push, 1)
    class CCitadel_Ability_Fathom_Breach : public client::C_CitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nRollFXIndex; // 0xdc0        
        // metadata: MNetworkEnable
        bool m_bInFlight; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc5[0x143];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Fathom_Breach because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Fathom_Breach) == 0xf08);
};
