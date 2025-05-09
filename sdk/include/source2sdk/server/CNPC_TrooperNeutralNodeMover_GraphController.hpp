#pragma once
#include "source2sdk/server/CNPC_TrooperNeutral_GraphController.hpp"
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
    // Size: 0x1020
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralNodeMover_GraphController : public server::CNPC_TrooperNeutral_GraphController
    {
    public:
        CAnimGraphTagRef m_sHidingInNode; // 0x1008        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutralNodeMover_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutralNodeMover_GraphController) == 0x1020);
};
