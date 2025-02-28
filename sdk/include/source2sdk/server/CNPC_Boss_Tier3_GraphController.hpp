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
    // Size: 0xc18
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_Boss_Tier3_GraphController : public server::CAI_CitadelNPC_GraphController
    {
    public:
        // m_pszActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszActivity;
        char m_pszActivity[0x28]; // 0xbd8        
        CAnimGraphTagOptionalRef m_sDeathExplode; // 0xc00        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier3_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier3_GraphController) == 0xc18);
};
