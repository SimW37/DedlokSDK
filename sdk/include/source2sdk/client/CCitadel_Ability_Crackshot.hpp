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
    // Size: 0xf88
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Crackshot : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x4]; // 0xdc0
        client::ParticleIndex_t m_ReadyParticleIndex; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc8[0x1c0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Crackshot because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Crackshot) == 0xf88);
};
