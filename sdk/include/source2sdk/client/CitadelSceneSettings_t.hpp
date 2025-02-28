#pragma once
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
    // Standard-layout class: true
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelSceneSettings_t
    {
    public:
        // metadata: MPropertyStartGroup "Camera Settings"
        // metadata: MPropertyFriendlyName "Camera Attachment"
        // metadata: MPropertyCustomFGDType "model_attachment"
        CUtlString m_strAttachmentName; // 0x0        
        // metadata: MPropertyFriendlyName "FOV"
        float m_flFOV; // 0x8        
        // metadata: MPropertyFriendlyName "Z-Near"
        float m_flZNear; // 0xc        
        // metadata: MPropertyFriendlyName "Z-Far"
        float m_flZFar; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelSceneSettings_t, m_strAttachmentName) == 0x0);
    static_assert(offsetof(CitadelSceneSettings_t, m_flFOV) == 0x8);
    static_assert(offsetof(CitadelSceneSettings_t, m_flZNear) == 0xc);
    static_assert(offsetof(CitadelSceneSettings_t, m_flZFar) == 0x10);
    
    static_assert(sizeof(CitadelSceneSettings_t) == 0x18);
};
