#pragma once
#include "source2sdk/animlib/CNmPassthroughNode__CDefinition.hpp"
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
    class CNmScaleNode__CDefinition : public animlib::CNmPassthroughNode__CDefinition
    {
    public:
        int16_t m_nMaskNodeIdx; // 0x18        
        int16_t m_nEnableNodeIdx; // 0x1a        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmScaleNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmScaleNode__CDefinition) == 0x20);
};
