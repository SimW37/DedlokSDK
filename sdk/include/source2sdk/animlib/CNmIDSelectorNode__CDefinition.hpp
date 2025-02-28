#pragma once
#include "source2sdk/animlib/CNmIDValueNode__CDefinition.hpp"
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
    // Size: 0x80
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmIDSelectorNode__CDefinition : public animlib::CNmIDValueNode__CDefinition
    {
    public:
        // m_conditionNodeIndices has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<int16_t,5> m_conditionNodeIndices;
        char m_conditionNodeIndices[0x28]; // 0x10        
        // m_values has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorFixedGrowable<CGlobalSymbol,5> m_values;
        char m_values[0x40]; // 0x38        
        CGlobalSymbol m_defaultValue; // 0x78        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmIDSelectorNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmIDSelectorNode__CDefinition) == 0x80);
};
