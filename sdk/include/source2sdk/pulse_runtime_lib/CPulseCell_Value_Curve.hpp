#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseValue.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo "Äùí¯"
    // static metadata: MPropertyFriendlyName "Curve"
    #pragma pack(push, 1)
    class CPulseCell_Value_Curve : public pulse_runtime_lib::CPulseCell_BaseValue
    {
    public:
        CPiecewiseCurve m_Curve; // 0x48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Value_Curve because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Value_Curve) == 0x88);
};
