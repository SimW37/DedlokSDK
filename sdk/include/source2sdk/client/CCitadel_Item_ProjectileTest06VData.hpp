#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Item_ProjectileTestVData.hpp"

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
        // Size: 0x16c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Item_ProjectileTest06VData : public source2sdk::client::CCitadel_Item_ProjectileTestVData
        {
        public:
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flMaxDrag; // 0x16b8            
            float m_flMinDrag; // 0x16bc            
            float m_flMinGravity; // 0x16c0            
            float m_flMaxGravity; // 0x16c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_ProjectileTest06VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_ProjectileTest06VData) == 0x16c8);
    };
};
