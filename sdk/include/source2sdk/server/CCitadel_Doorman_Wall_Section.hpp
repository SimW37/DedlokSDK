#pragma once
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
    // Size: 0xae8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Doorman_Wall_Section : public server::CBaseAnimGraph
    {
    public:
        Vector m_vStartPos; // 0xab8        
        Vector m_vEndPos; // 0xac4        
        Vector m_vVel; // 0xad0        
        bool m_bSolid; // 0xadc        
        [[maybe_unused]] std::uint8_t pad_0xadd[0x3]; // 0xadd
        int32_t m_nTouchCount; // 0xae0        
        bool m_bLanded; // 0xae4        
        [[maybe_unused]] std::uint8_t pad_0xae5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Doorman_Wall_Section because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Doorman_Wall_Section) == 0xae8);
};
