#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAbilityBeam_t.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1ae8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAirCast"
        // static metadata: MNetworkVarNames "CCitadelAbilityBeam_t m_beam"
        #pragma pack(push, 1)
        class CCitadel_Ability_Bebop_LaserBeam : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x400]; // 0xd88
            bool m_bZoomed; // 0x1188            
            // metadata: MNetworkEnable
            bool m_bAirCast; // 0x1189            
            uint8_t _pad118a[0x6]; // 0x118a
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAbilityBeam_t m_beam; // 0x1190            
            uint8_t _pad1ae0[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bebop_LaserBeam) == 0x1ae8);
    };
};
