#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xcd8
        // Has VTable
        #pragma pack(push, 1)
        class C_Citadel_FissureWall : public source2sdk::client::CBaseAnimGraph
        {
        public:
            Vector m_vStartPos; // 0xcb0            
            Vector m_vEndPos; // 0xcbc            
            source2sdk::entity2::GameTime_t m_flStartEmitTime; // 0xcc8            
            source2sdk::entity2::GameTime_t m_flEndEmitTime; // 0xccc            
            bool m_bSolid; // 0xcd0            
            uint8_t _pad0cd1[0x3]; // 0xcd1
            std::int32_t m_nTouchCount; // 0xcd4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_Citadel_FissureWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_Citadel_FissureWall) == 0xcd8);
    };
};
