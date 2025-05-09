#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xe38
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bLeaping"
    // static metadata: MNetworkVarNames "GameTime_t m_flLeapStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_HornetLeap : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x2]; // 0xba0
        // metadata: MNetworkEnable
        bool m_bLeaping; // 0xba2        
        [[maybe_unused]] std::uint8_t pad_0xba3[0x1]; // 0xba3
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLeapStartTime; // 0xba4        
        client::ParticleIndex_t m_nFXIndex; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xbac[0x284]; // 0xbac
        client::ParticleIndex_t m_TrailFX; // 0xe30        
        [[maybe_unused]] std::uint8_t pad_0xe34[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HornetLeap because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HornetLeap) == 0xe38);
};
