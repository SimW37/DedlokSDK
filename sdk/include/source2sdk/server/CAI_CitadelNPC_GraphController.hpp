#pragma once
#include "source2sdk/client/CAI_BaseNPCGraphController.hpp"
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
    // Size: 0xbd8
    // Has VTable
    #pragma pack(push, 1)
    class CAI_CitadelNPC_GraphController : public client::CAI_BaseNPCGraphController
    {
    public:
        // m_nHitLayerTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<int32_t> m_nHitLayerTrigger;
        char m_nHitLayerTrigger[0x18]; // 0xad0        
        // m_pszDamageState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<char*> m_pszDamageState;
        char m_pszDamageState[0x28]; // 0xae8        
        // m_flHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<float> m_flHealth;
        char m_flHealth[0x20]; // 0xb10        
        // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<float> m_flTimeScale;
        char m_flTimeScale[0x18]; // 0xb30        
        // m_bBeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bBeam;
        char m_bBeam[0x20]; // 0xb48        
        // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bCrouching;
        char m_bCrouching[0x20]; // 0xb68        
        // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bInAir;
        char m_bInAir[0x18]; // 0xb88        
        // m_bHasTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraph1ParamOptionalRef<bool> m_bHasTarget;
        char m_bHasTarget[0x18]; // 0xba0        
        // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CAnimGraphParamOptionalRef<bool> m_bReloading;
        char m_bReloading[0x20]; // 0xbb8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPC_GraphController because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPC_GraphController) == 0xbd8);
};
