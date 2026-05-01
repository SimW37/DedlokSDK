#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Item.hpp"

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
        // Size: 0x11a0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nWeaponPower"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_WeaponEater : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f98[0x200]; // 0xf98
            // metadata: MNetworkEnable
            std::int32_t m_nWeaponPower; // 0x1198            
            uint8_t _pad119c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_WeaponEater because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_WeaponUpgrade_WeaponEater) == 0x11a0);
    };
};
