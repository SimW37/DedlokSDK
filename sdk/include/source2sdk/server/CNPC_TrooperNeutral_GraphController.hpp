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
    // Size: 0x1008
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_TrooperNeutral_GraphController : public server::CAI_CitadelNPC_GraphController
    {
    public:
        // m_bShielded has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bShielded;
        char m_bShielded[0x20]; // 0xf58        
        // m_bAlert has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bAlert;
        char m_bAlert[0x20]; // 0xf78        
        // m_pszAttackLeanPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszAttackLeanPosition;
        char m_pszAttackLeanPosition[0x28]; // 0xf98        
        // m_pszOrbDrop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszOrbDrop;
        char m_pszOrbDrop[0x28]; // 0xfc0        
        // m_bHeavyMelee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bHeavyMelee;
        char m_bHeavyMelee[0x20]; // 0xfe8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutral_GraphController because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutral_GraphController) == 0x1008);
};
