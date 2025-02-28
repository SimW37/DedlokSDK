#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityBeam_t.hpp"
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
    // Size: 0x1388
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeam : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x380]; // 0xb00
        bool m_bZoomed; // 0xe80        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xe81        
        [[maybe_unused]] std::uint8_t pad_0xe82[0x6]; // 0xe82
        // metadata: MNetworkEnable
        server::CCitadelAbilityBeam_t m_beam; // 0xe88        
        [[maybe_unused]] std::uint8_t pad_0x1378[0x4]; // 0x1378
        float m_flAngleBetweenTrace; // 0x137c        
        int32_t m_nTotalDamage; // 0x1380        
        entity2::GameTime_t m_flNextDamageTime; // 0x1384        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeam) == 0x1388);
};
