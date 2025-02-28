#pragma once
#include "source2sdk/client/CCitadelAbilityBeam_t.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0x14f0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirCast"
    // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeam : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0x380]; // 0xc50
        bool m_bZoomed; // 0xfd0        
        // metadata: MNetworkEnable
        bool m_bAirCast; // 0xfd1        
        [[maybe_unused]] std::uint8_t pad_0xfd2[0x6]; // 0xfd2
        // metadata: MNetworkEnable
        client::CCitadelAbilityBeam_t m_beam; // 0xfd8        
        [[maybe_unused]] std::uint8_t pad_0x14e8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeam) == 0x14f0);
};
