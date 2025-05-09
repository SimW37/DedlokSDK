#pragma once
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"
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
    // Size: 0x13a0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartWindUpTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartFiringTime"
    // static metadata: MNetworkVarNames "bool m_bFiring"
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_Bebop : public client::CCitadel_Ability_PrimaryWeapon_BeamWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xeb0[0x378]; // 0xeb0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartWindUpTime; // 0x1228        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartFiringTime; // 0x122c        
        // metadata: MNetworkEnable
        bool m_bFiring; // 0x1230        
        [[maybe_unused]] std::uint8_t pad_0x1231[0x16f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Bebop because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_Bebop) == 0x13a0);
};
