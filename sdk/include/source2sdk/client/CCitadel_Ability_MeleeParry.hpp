#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xe50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flParryStartTime"
    // static metadata: MNetworkVarNames "bool m_bAttackParried"
    // static metadata: MNetworkVarNames "GameTime_t m_flParrySuccessTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_MeleeParry : public client::C_CitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nActiveFX; // 0xdc0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flParryStartTime; // 0xdc4        
        // metadata: MNetworkEnable
        bool m_bAttackParried; // 0xdc8        
        [[maybe_unused]] std::uint8_t pad_0xdc9[0x3]; // 0xdc9
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flParrySuccessTime; // 0xdcc        
        [[maybe_unused]] std::uint8_t pad_0xdd0[0x80];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_MeleeParry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_MeleeParry) == 0xe50);
};
