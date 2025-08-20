#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item.hpp"

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
        // Size: 0xe50
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iStacks"
        #pragma pack(push, 1)
        class CCitadel_WeaponUpgrade_SiphonBullets : public source2sdk::client::CCitadel_Item
        {
        public:
            // metadata: MNetworkEnable
            std::int32_t m_iStacks; // 0xd88            
            uint8_t _pad0d8c[0xc4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_SiphonBullets because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_WeaponUpgrade_SiphonBullets) == 0xe50);
    };
};
