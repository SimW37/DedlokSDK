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
    // Size: 0xc38
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_MortarSentry_GraphController : public server::CAI_CitadelNPC_GraphController
    {
    public:
        // m_flPanel1 has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flPanel1;
        char m_flPanel1[0x20]; // 0xbd8        
        // m_bUnpackInstant has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bUnpackInstant;
        char m_bUnpackInstant[0x20]; // 0xbf8        
        // m_flVelocity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flVelocity;
        char m_flVelocity[0x20]; // 0xc18        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_MortarSentry_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_MortarSentry_GraphController) == 0xc38);
};
