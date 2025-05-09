#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"
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
    // Size: 0x10a8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartWindUpTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartFiringTime"
    // static metadata: MNetworkVarNames "bool m_bFiring"
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_Bebop : public server::CCitadel_Ability_PrimaryWeapon_BeamWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x2d0]; // 0xc60
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartWindUpTime; // 0xf30        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartFiringTime; // 0xf34        
        // metadata: MNetworkEnable
        bool m_bFiring; // 0xf38        
        [[maybe_unused]] std::uint8_t pad_0xf39[0x16f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Bebop because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_Bebop) == 0x10a8);
};
