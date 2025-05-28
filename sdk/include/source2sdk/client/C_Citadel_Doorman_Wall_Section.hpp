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
        // Size: 0xce0
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_Doorman_Wall_Section : public source2sdk::client::CBaseAnimGraph
        {
        public:
            Vector m_vStartPos; // 0xcb0            
            Vector m_vEndPos; // 0xcbc            
            Vector m_vVel; // 0xcc8            
            bool m_bSolid; // 0xcd4            
            uint8_t _pad0cd5[0x3]; // 0xcd5
            std::int32_t m_nTouchCount; // 0xcd8            
            bool m_bLanded; // 0xcdc            
            uint8_t _pad0cdd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_Doorman_Wall_Section because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_Doorman_Wall_Section) == 0xce0);
    };
};
