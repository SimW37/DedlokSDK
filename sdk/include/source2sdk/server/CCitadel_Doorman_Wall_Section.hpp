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
        // Size: 0xae8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Doorman_Wall_Section : public source2sdk::server::CBaseAnimGraph
        {
        public:
            Vector m_vStartPos; // 0xab8            
            Vector m_vEndPos; // 0xac4            
            Vector m_vVel; // 0xad0            
            bool m_bSolid; // 0xadc            
            uint8_t _pad0add[0x3]; // 0xadd
            std::int32_t m_nTouchCount; // 0xae0            
            bool m_bLanded; // 0xae4            
            uint8_t _pad0ae5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Doorman_Wall_Section because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Doorman_Wall_Section) == 0xae8);
    };
};
