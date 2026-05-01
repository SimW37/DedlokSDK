#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xc00
        // Has VTable
        #pragma pack(push, 1)
        class CCitadelDruidInvisBush : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            VectorWS m_vStartPos; // 0xbe0            
            VectorWS m_vEndPos; // 0xbec            
            source2sdk::entity2::GameTime_t m_flStartGrowTime; // 0xbf8            
            source2sdk::entity2::GameTime_t m_flEndGrowTime; // 0xbfc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelDruidInvisBush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelDruidInvisBush) == 0xc00);
    };
};
