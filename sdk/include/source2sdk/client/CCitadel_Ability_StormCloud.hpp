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
    // Size: 0xdf0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flFloat"
    // static metadata: MNetworkVarNames "int m_nLightningStrikesRemaining"
    #pragma pack(push, 1)
    class CCitadel_Ability_StormCloud : public client::C_CitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nTargetingParticleIndex; // 0xc50        
        [[maybe_unused]] std::uint8_t pad_0xc54[0x18c]; // 0xc54
        // metadata: MNetworkEnable
        float m_flFloat; // 0xde0        
        // metadata: MNetworkEnable
        int32_t m_nLightningStrikesRemaining; // 0xde4        
        [[maybe_unused]] std::uint8_t pad_0xde8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StormCloud because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StormCloud) == 0xdf0);
};
