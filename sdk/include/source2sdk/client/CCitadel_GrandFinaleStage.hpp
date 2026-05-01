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
        // Size: 0xcc8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_GrandFinaleStage : public source2sdk::client::CBaseAnimGraph
        {
        public:
            Vector m_vStartPos; // 0xca0            
            Vector m_vEndPos; // 0xcac            
            source2sdk::entity2::GameTime_t m_flStartEmitTime; // 0xcb8            
            source2sdk::entity2::GameTime_t m_flEndEmitTime; // 0xcbc            
            std::int32_t m_nTouchCount; // 0xcc0            
            uint8_t _pad0cc4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_GrandFinaleStage because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_GrandFinaleStage) == 0xcc8);
    };
};
