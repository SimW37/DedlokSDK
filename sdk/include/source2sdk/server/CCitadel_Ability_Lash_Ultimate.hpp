#pragma once
#include "source2sdk/client/ELashGrappleState.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseLockonAbility.hpp"
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
    // Size: 0xf00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "ELashGrappleState m_EGrappleState"
    // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBoostEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Lash_Ultimate : public server::CCitadelBaseLockonAbility
    {
    public:
        // metadata: MNetworkEnable
        client::ELashGrappleState m_EGrappleState; // 0xd50        
        [[maybe_unused]] std::uint8_t pad_0xd51[0x3]; // 0xd51
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStateEnterTime; // 0xd54        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNextStateTime; // 0xd58        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBoostEndTime; // 0xd5c        
        [[maybe_unused]] std::uint8_t pad_0xd60[0x1a0];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Lash_Ultimate because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Lash_Ultimate) == 0xf00);
};
