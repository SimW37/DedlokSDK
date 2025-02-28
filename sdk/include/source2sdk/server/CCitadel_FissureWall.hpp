#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xab8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_FissureWall : public server::CBaseAnimGraph
    {
    public:
        Vector m_vStartPos; // 0xa90        
        Vector m_vEndPos; // 0xa9c        
        entity2::GameTime_t m_flStartEmitTime; // 0xaa8        
        entity2::GameTime_t m_flEndEmitTime; // 0xaac        
        bool m_bSolid; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab1[0x3]; // 0xab1
        int32_t m_nTouchCount; // 0xab4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_FissureWall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_FissureWall) == 0xab8);
};
