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
    // Size: 0x1158
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartWindUpTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartFiringTime"
    // static metadata: MNetworkVarNames "bool m_bFiring"
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_Bebop : public client::CCitadel_Ability_PrimaryWeapon_BeamWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd30[0x2b8]; // 0xd30
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartWindUpTime; // 0xfe8        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartFiringTime; // 0xfec        
        // metadata: MNetworkEnable
        bool m_bFiring; // 0xff0        
        [[maybe_unused]] std::uint8_t pad_0xff1[0x167];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Bebop because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_Bebop) == 0x1158);
};
