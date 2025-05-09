#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xce0
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_Doorman_Wall_Section : public client::CBaseAnimGraph
    {
    public:
        Vector m_vStartPos; // 0xcb0        
        Vector m_vEndPos; // 0xcbc        
        Vector m_vVel; // 0xcc8        
        bool m_bSolid; // 0xcd4        
        [[maybe_unused]] std::uint8_t pad_0xcd5[0x3]; // 0xcd5
        int32_t m_nTouchCount; // 0xcd8        
        bool m_bLanded; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xcdd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Doorman_Wall_Section because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Doorman_Wall_Section) == 0xce0);
};
