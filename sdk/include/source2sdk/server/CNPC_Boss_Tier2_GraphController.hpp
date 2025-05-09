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
    // Size: 0x1048
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_Boss_Tier2_GraphController : public server::CAI_CitadelNPC_GraphController
    {
    public:
        // m_pszActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszActivity;
        char m_pszActivity[0x28]; // 0xf58        
        // m_pszStompAttack has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszStompAttack;
        char m_pszStompAttack[0x28]; // 0xf80        
        // m_pszStaggerDirection has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszStaggerDirection;
        char m_pszStaggerDirection[0x28]; // 0xfa8        
        // m_pszElectricBeamPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszElectricBeamPosition;
        char m_pszElectricBeamPosition[0x28]; // 0xfd0        
        CAnimGraphTagRef m_sStaggered; // 0xff8        
        CAnimGraphTagRef m_sStomp; // 0x1010        
        [[maybe_unused]] std::uint8_t pad_0x1028[0x8]; // 0x1028
        CAnimGraphTagRef m_sApplyStompDamage; // 0x1030        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier2_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier2_GraphController) == 0x1048);
};
