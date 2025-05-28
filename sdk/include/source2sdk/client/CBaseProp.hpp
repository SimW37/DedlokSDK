#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"

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
        // Size: 0xcf0
        // Has VTable
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0xcb0            
            uint8_t _pad0cb1[0x3]; // 0xcb1
            std::int32_t m_iShapeType; // 0xcb4            
            bool m_bConformToCollisionBounds; // 0xcb8            
            uint8_t _pad0cb9[0x3]; // 0xcb9
            matrix3x4_t m_mPreferredCatchTransform; // 0xcbc            
            uint8_t _pad0cec[0x4];
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseProp) == 0xcf0);
    };
};
