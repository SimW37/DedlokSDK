#pragma once
#include "source2sdk/server/CNPC_Trooper_GraphController.hpp"
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
    // Size: 0xc90
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_Boss_Tier1_GraphController : public server::CNPC_Trooper_GraphController
    {
    public:
        // m_pszActivity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszActivity;
        char m_pszActivity[0x28]; // 0xc20        
        // m_pszLaneSide has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<char*> m_pszLaneSide;
        char m_pszLaneSide[0x28]; // 0xc48        
        // m_bShieldMode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamRef<bool> m_bShieldMode;
        char m_bShieldMode[0x20]; // 0xc70        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier1_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier1_GraphController) == 0xc90);
};
