#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd38
        // Has VTable
        #pragma pack(push, 1)
        class C_ClientRagdoll : public source2sdk::client::CBaseAnimGraph
        {
        public:
            bool m_bFadeOut; // 0xca0            
            bool m_bImportant; // 0xca1            
            uint8_t _pad0ca2[0x2]; // 0xca2
            source2sdk::entity2::GameTime_t m_flEffectTime; // 0xca4            
            source2sdk::entity2::GameTime_t m_gibDespawnTime; // 0xca8            
            std::int32_t m_iCurrentFriction; // 0xcac            
            std::int32_t m_iMinFriction; // 0xcb0            
            std::int32_t m_iMaxFriction; // 0xcb4            
            std::int32_t m_iFrictionAnimState; // 0xcb8            
            bool m_bReleaseRagdoll; // 0xcbc            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xcbd            
            bool m_bFadingOut; // 0xcbe            
            uint8_t _pad0cbf[0x1]; // 0xcbf
            float m_flScaleEnd[10]; // 0xcc0            
            source2sdk::entity2::GameTime_t m_flScaleTimeStart[10]; // 0xce8            
            source2sdk::entity2::GameTime_t m_flScaleTimeEnd[10]; // 0xd10            
            
            // Datamap fields:
            // Color m_clrRender; // 0x6a8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_ClientRagdoll because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_ClientRagdoll) == 0xd38);
    };
};
