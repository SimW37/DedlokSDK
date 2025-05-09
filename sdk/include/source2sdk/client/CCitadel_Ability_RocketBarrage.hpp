#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
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
    // Size: 0x1050
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBarrageEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_RocketBarrage : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flBarrageEndTime; // 0xdc0        
        [[maybe_unused]] std::uint8_t pad_0xdd8[0x240]; // 0xdd8
        float m_flCurrentTimeScale; // 0x1018        
        Vector m_vecAimPos; // 0x101c        
        Vector m_vecAimVel; // 0x1028        
        entity2::GameTime_t m_flLastUpdateTime; // 0x1034        
        [[maybe_unused]] std::uint8_t pad_0x1038[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_RocketBarrage because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_RocketBarrage) == 0x1050);
};
