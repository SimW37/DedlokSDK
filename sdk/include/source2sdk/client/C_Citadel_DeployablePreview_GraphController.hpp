#pragma once
#include "source2sdk/client/CBaseAnimGraphAnimGraphController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe8
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_DeployablePreview_GraphController : public client::CBaseAnimGraphAnimGraphController
    {
    public:
        // m_bDeploying has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bDeploying;
        char m_bDeploying[0x20]; // 0xc8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_DeployablePreview_GraphController because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_DeployablePreview_GraphController) == 0xe8);
};
