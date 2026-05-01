#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x11c0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iCurrentShotCount"
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_PrimaryWeapon : public source2sdk::server::CCitadel_Ability_PrimaryWeapon
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iCurrentShotCount; // 0x11b8            
            uint8_t _pad11bc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_PrimaryWeapon because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Fencer_PrimaryWeapon) == 0x11c0);
    };
};
