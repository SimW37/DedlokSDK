#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
        class C_CitadelDruidInvisBush : public source2sdk::client::CCitadelAnimatingModelEntity
        {
        public:
            VectorWS m_vStartPos; // 0xca8            
            VectorWS m_vEndPos; // 0xcb4            
            source2sdk::entity2::GameTime_t m_flStartGrowTime; // 0xcc0            
            source2sdk::entity2::GameTime_t m_flEndGrowTime; // 0xcc4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CitadelDruidInvisBush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CitadelDruidInvisBush) == 0xcc8);
    };
};
