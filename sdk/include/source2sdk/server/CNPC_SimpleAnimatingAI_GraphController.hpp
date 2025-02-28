#pragma once
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"
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
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_SimpleAnimatingAI_GraphController : public client::CBaseAnimGraphAnimGraphController
    {
    public:
        // m_bHasTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHasTarget;
        char m_bHasTarget[0x20]; // 0xc8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_SimpleAnimatingAI_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_SimpleAnimatingAI_GraphController) == 0xe8);
};
