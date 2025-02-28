#pragma once
#include "source2sdk/animlib/CNmClipReferenceNode__CDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x20
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmClipNode__CDefinition : public animlib::CNmClipReferenceNode__CDefinition
    {
    public:
        int16_t m_nPlayInReverseValueNodeIdx; // 0x10        
        int16_t m_nResetTimeValueNodeIdx; // 0x12        
        float m_flSpeedMultiplier; // 0x14        
        int32_t m_nStartSyncEventOffset; // 0x18        
        bool m_bSampleRootMotion; // 0x1c        
        bool m_bAllowLooping; // 0x1d        
        int16_t m_nDataSlotIdx; // 0x1e        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmClipNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmClipNode__CDefinition) == 0x20);
};
