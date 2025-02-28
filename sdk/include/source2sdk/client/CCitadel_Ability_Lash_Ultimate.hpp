#pragma once
#include "source2sdk/client/CCitadelBaseLockonAbility.hpp"
#include "source2sdk/client/ELashGrappleState.hpp"
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
    // Size: 0xf48
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "ELashGrappleState m_EGrappleState"
    // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBoostEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Lash_Ultimate : public client::CCitadelBaseLockonAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xde0[0x2]; // 0xde0
        // metadata: MNetworkEnable
        client::ELashGrappleState m_EGrappleState; // 0xde2        
        [[maybe_unused]] std::uint8_t pad_0xde3[0x1]; // 0xde3
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStateEnterTime; // 0xde4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNextStateTime; // 0xde8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBoostEndTime; // 0xdec        
        [[maybe_unused]] std::uint8_t pad_0xdf0[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Lash_Ultimate because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Lash_Ultimate) == 0xf48);
};
