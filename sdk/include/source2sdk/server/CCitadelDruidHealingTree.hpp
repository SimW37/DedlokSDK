#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc30
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelDruidHealingTree : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            uint8_t _pad0be0[0x20]; // 0xbe0
            CUtlString m_strFruitModelName; // 0xc00            
            VectorWS m_vStartPos; // 0xc08            
            VectorWS m_vEndPos; // 0xc14            
            float m_flGrowDuration; // 0xc20            
            uint8_t _pad0c24[0xc];
            
            // Datamap fields:
            // CHandle< CBaseEntity > ability; // 0x7fffffff
            // CHandle< CBaseEntity > caster; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelDruidHealingTree because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelDruidHealingTree) == 0xc30);
    };
};
