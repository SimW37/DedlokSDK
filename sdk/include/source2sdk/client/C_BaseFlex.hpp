#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_BaseFlex_Emphasized_Phoneme.hpp"
#include "source2sdk/client/SceneEventId_t.hpp"
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
        // Size: 0xec0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flexWeight"
        // static metadata: MNetworkVarNames "bool m_blinktoggle"
        #pragma pack(push, 1)
        class C_BaseFlex : public source2sdk::client::CBaseAnimGraph
        {
        public:
            uint8_t _pad0cb0[0x10]; // 0xcb0
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "12"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            // metadata: MNetworkEncodeFlags "1"
            // m_flexWeight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<float> m_flexWeight;
            char m_flexWeight[0x18]; // 0xcc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnViewTargetChanged"
            Vector m_vLookTargetPosition; // 0xcd8            
            uint8_t _pad0ce4[0x84]; // 0xce4
            // metadata: MNetworkEnable
            bool m_blinktoggle; // 0xd68            
            uint8_t _pad0d69[0x5f]; // 0xd69
            std::int32_t m_nLastFlexUpdateFrameCount; // 0xdc8            
            Vector m_CachedViewTarget; // 0xdcc            
            source2sdk::client::SceneEventId_t m_nNextSceneEventId; // 0xdd8            
            std::int32_t m_iBlink; // 0xddc            
            float m_blinktime; // 0xde0            
            bool m_prevblinktoggle; // 0xde4            
            uint8_t _pad0de5[0x3]; // 0xde5
            std::int32_t m_iJawOpen; // 0xde8            
            float m_flJawOpenAmount; // 0xdec            
            float m_flBlinkAmount; // 0xdf0            
            source2sdk::modellib::AttachmentHandle_t m_iMouthAttachment; // 0xdf4            
            source2sdk::modellib::AttachmentHandle_t m_iEyeAttachment; // 0xdf5            
            bool m_bResetFlexWeightsOnModelChange; // 0xdf6            
            uint8_t _pad0df7[0x19]; // 0xdf7
            std::int32_t m_nEyeOcclusionRendererBone; // 0xe10            
            matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // 0xe14            
            Vector m_vEyeOcclusionRendererHalfExtent; // 0xe44            
            uint8_t _pad0e50[0x10]; // 0xe50
            source2sdk::client::C_BaseFlex_Emphasized_Phoneme m_PhonemeClasses[3]; // 0xe60            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseFlex because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseFlex) == 0xec0);
    };
};
