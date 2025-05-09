#pragma once
#include "source2sdk/animlib/CNmEvent.hpp"
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
    // Size: 0x128
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmMaterialAttributeEvent : public animlib::CNmEvent
    {
    public:
        CUtlString m_attributeName; // 0x18        
        CUtlStringToken m_attributeNameToken; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4]; // 0x24
        CPiecewiseCurve m_x; // 0x28        
        CPiecewiseCurve m_y; // 0x68        
        CPiecewiseCurve m_z; // 0xa8        
        CPiecewiseCurve m_w; // 0xe8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmMaterialAttributeEvent because it is not a standard-layout class
    static_assert(sizeof(CNmMaterialAttributeEvent) == 0x128);
};
