#pragma once
#include "source2sdk/soundsystem_voicecontainers/CVSound.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    class CVoiceContainerAnalysisBase;
};

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xc0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataNodeType "1"
    // static metadata: MFgdFromSchemaEditablePolymorphicThisClass
    // static metadata: MVDataFileExtension
    // static metadata: MPropertyFriendlyName "VSND Container"
    // static metadata: MPropertyDescription "Voice Container Base"
    #pragma pack(push, 1)
    class CVoiceContainerBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x38]; // 0x0
        // metadata: MPropertySuppressField
        soundsystem_voicecontainers::CVSound m_vSound; // 0x38        
        // metadata: MPropertySuppressExpr "true"
        soundsystem_voicecontainers::CVoiceContainerAnalysisBase* m_pEnvelopeAnalyzer; // 0xb8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CVoiceContainerBase, m_vSound) == 0x38);
    static_assert(offsetof(CVoiceContainerBase, m_pEnvelopeAnalyzer) == 0xb8);
    
    static_assert(sizeof(CVoiceContainerBase) == 0xc0);
};
