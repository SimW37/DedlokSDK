#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_BaseNPCGraphController.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xf58
        // Has VTable
        #pragma pack(push, 1)
        class CAI_CitadelNPC_GraphController : public source2sdk::client::CAI_BaseNPCGraphController
        {
        public:
            // m_nHitLayerTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<std::int32_t> m_nHitLayerTrigger;
            char m_nHitLayerTrigger[0x18]; // 0xe50            
            // m_pszDamageState has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<char*> m_pszDamageState;
            char m_pszDamageState[0x28]; // 0xe68            
            // m_flHealth has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<float> m_flHealth;
            char m_flHealth[0x20]; // 0xe90            
            // m_flTimeScale has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<float> m_flTimeScale;
            char m_flTimeScale[0x18]; // 0xeb0            
            // m_bBeam has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bBeam;
            char m_bBeam[0x20]; // 0xec8            
            // m_bCrouching has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bCrouching;
            char m_bCrouching[0x20]; // 0xee8            
            // m_bInAir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bInAir;
            char m_bInAir[0x18]; // 0xf08            
            // m_bHasTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraph1ParamOptionalRef<bool> m_bHasTarget;
            char m_bHasTarget[0x18]; // 0xf20            
            // m_bReloading has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CAnimGraphParamOptionalRef<bool> m_bReloading;
            char m_bReloading[0x20]; // 0xf38            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_CitadelNPC_GraphController because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_CitadelNPC_GraphController) == 0xf58);
    };
};
