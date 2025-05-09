#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd48
    // Has VTable
    #pragma pack(push, 1)
    class C_ClientRagdoll : public client::CBaseAnimGraph
    {
    public:
        bool m_bFadeOut; // 0xcb0        
        bool m_bImportant; // 0xcb1        
        [[maybe_unused]] std::uint8_t pad_0xcb2[0x2]; // 0xcb2
        entity2::GameTime_t m_flEffectTime; // 0xcb4        
        entity2::GameTime_t m_gibDespawnTime; // 0xcb8        
        int32_t m_iCurrentFriction; // 0xcbc        
        int32_t m_iMinFriction; // 0xcc0        
        int32_t m_iMaxFriction; // 0xcc4        
        int32_t m_iFrictionAnimState; // 0xcc8        
        bool m_bReleaseRagdoll; // 0xccc        
        modellib::AttachmentHandle_t m_iEyeAttachment; // 0xccd        
        bool m_bFadingOut; // 0xcce        
        [[maybe_unused]] std::uint8_t pad_0xccf[0x1]; // 0xccf
        float m_flScaleEnd[10]; // 0xcd0        
        entity2::GameTime_t m_flScaleTimeStart[10]; // 0xcf8        
        entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xd20        
        
        // Datamap fields:
        // Color m_clrRender; // 0x6a8
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
    static_assert(sizeof(C_ClientRagdoll) == 0xd48);
};
