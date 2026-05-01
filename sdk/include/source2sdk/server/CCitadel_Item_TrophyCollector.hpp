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
        // Size: 0x12b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iTrophyCount"
        #pragma pack(push, 1)
        class CCitadel_Item_TrophyCollector : public source2sdk::server::CCitadel_Item
        {
        public:
            uint8_t _pad0f98[0x300]; // 0xf98
            // metadata: MNetworkEnable
            std::int32_t m_iTrophyCount; // 0x1298            
            std::int32_t m_iInitialKills; // 0x129c            
            std::int32_t m_iInitialAssists; // 0x12a0            
            std::int32_t m_iPrevCount; // 0x12a4            
            bool m_bMaxStacksReached; // 0x12a8            
            uint8_t _pad12a9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_TrophyCollector because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Item_TrophyCollector) == 0x12b0);
    };
};
