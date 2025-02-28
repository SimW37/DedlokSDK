#pragma once
#include "source2sdk/materialsystem2/PostProcessingBloomParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingFogScatteringParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingLocalContrastParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingTonemapParameters_t.hpp"
#include "source2sdk/materialsystem2/PostProcessingVignetteParameters_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: materialsystem2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::materialsystem2
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x138
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PostProcessingResource_t
    {
    public:
        bool m_bHasTonemapParams; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x3]; // 0x1
        materialsystem2::PostProcessingTonemapParameters_t m_toneMapParams; // 0x4        
        bool m_bHasBloomParams; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x3]; // 0x41
        materialsystem2::PostProcessingBloomParameters_t m_bloomParams; // 0x44        
        bool m_bHasVignetteParams; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc5[0x3]; // 0xc5
        materialsystem2::PostProcessingVignetteParameters_t m_vignetteParams; // 0xc8        
        bool m_bHasLocalContrastParams; // 0xec        
        [[maybe_unused]] std::uint8_t pad_0xed[0x3]; // 0xed
        materialsystem2::PostProcessingLocalContrastParameters_t m_localConstrastParams; // 0xf0        
        int32_t m_nColorCorrectionVolumeDim; // 0x104        
        CUtlBinaryBlock m_colorCorrectionVolumeData; // 0x108        
        bool m_bHasColorCorrection; // 0x120        
        bool m_bHasFogScatteringParams; // 0x121        
        [[maybe_unused]] std::uint8_t pad_0x122[0x2]; // 0x122
        materialsystem2::PostProcessingFogScatteringParameters_t m_fogScatteringParams; // 0x124        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PostProcessingResource_t, m_bHasTonemapParams) == 0x0);
    static_assert(offsetof(PostProcessingResource_t, m_toneMapParams) == 0x4);
    static_assert(offsetof(PostProcessingResource_t, m_bHasBloomParams) == 0x40);
    static_assert(offsetof(PostProcessingResource_t, m_bloomParams) == 0x44);
    static_assert(offsetof(PostProcessingResource_t, m_bHasVignetteParams) == 0xc4);
    static_assert(offsetof(PostProcessingResource_t, m_vignetteParams) == 0xc8);
    static_assert(offsetof(PostProcessingResource_t, m_bHasLocalContrastParams) == 0xec);
    static_assert(offsetof(PostProcessingResource_t, m_localConstrastParams) == 0xf0);
    static_assert(offsetof(PostProcessingResource_t, m_nColorCorrectionVolumeDim) == 0x104);
    static_assert(offsetof(PostProcessingResource_t, m_colorCorrectionVolumeData) == 0x108);
    static_assert(offsetof(PostProcessingResource_t, m_bHasColorCorrection) == 0x120);
    static_assert(offsetof(PostProcessingResource_t, m_bHasFogScatteringParams) == 0x121);
    static_assert(offsetof(PostProcessingResource_t, m_fogScatteringParams) == 0x124);
    
    static_assert(sizeof(PostProcessingResource_t) == 0x138);
};
