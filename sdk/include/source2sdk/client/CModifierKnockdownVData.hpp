#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"

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
        // Size: 0x7e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierKnockdownVData : public source2sdk::client::CCitadel_Modifier_StunnedVData
        {
        public:
            float m_flSatVolumeRadius; // 0x740            
            float m_flSatVolumeFadeOut; // 0x744            
            float m_flGravityScale; // 0x748            
            float m_flDesatAmount; // 0x74c            
            Color m_satColorDesat; // 0x750            
            Color m_satColorSat; // 0x754            
            Color m_satColorOutline; // 0x758            
            // metadata: MPropertyStartGroup "Camera"
            float m_flGetUpSeqDuration; // 0x75c            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceGetUp; // 0x760            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierKnockdownVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierKnockdownVData) == 0x7e8);
    };
};
