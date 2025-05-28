#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseAnimGraph.hpp"

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
        // Size: 0xaf8
        // Has VTable
        #pragma pack(push, 1)
        class CBaseProp : public source2sdk::server::CBaseAnimGraph
        {
        public:
            bool m_bModelOverrodeBlockLOS; // 0xab8            
            uint8_t _pad0ab9[0x3]; // 0xab9
            std::int32_t m_iShapeType; // 0xabc            
            bool m_bConformToCollisionBounds; // 0xac0            
            uint8_t _pad0ac1[0x3]; // 0xac1
            matrix3x4_t m_mPreferredCatchTransform; // 0xac4            
            uint8_t _pad0af4[0x4];
            
            // Datamap fields:
            // void health; // 0x7fffffff
            // CUtlSymbolLarge propdata_override; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseProp because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseProp) == 0xaf8);
    };
};
