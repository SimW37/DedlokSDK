#pragma once
#include "source2sdk/server/CAI_CitadelNPC_GraphController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xfa0
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_Trooper_GraphController : public server::CAI_CitadelNPC_GraphController
    {
    public:
        CAnimGraphTagRef m_sUsingMelee; // 0xf58        
        // m_b_Falling has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_b_Falling;
        char m_b_Falling[0x18]; // 0xf70        
        // m_b_Ziplining has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_b_Ziplining;
        char m_b_Ziplining[0x18]; // 0xf88        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Trooper_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_Trooper_GraphController) == 0xfa0);
};
