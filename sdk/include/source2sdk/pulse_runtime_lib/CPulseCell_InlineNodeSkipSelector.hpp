#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include "source2sdk/pulse_runtime_lib/PulseDocNodeID_t.hpp"
#include "source2sdk/pulse_runtime_lib/PulseSelectorOutflowList_t.hpp"
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
    // Size: 0xb0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo "Äùí¯"
    // static metadata: MPulseFunctionHiddenInTool
    // static metadata: MPulseSelectorAllowRequirementCriteria
    // static metadata: MPulseSelectorAllowRequirementCriteria
    #pragma pack(push, 1)
    class CPulseCell_InlineNodeSkipSelector : public pulse_runtime_lib::CPulseCell_BaseFlow
    {
    public:
        pulse_runtime_lib::PulseDocNodeID_t m_nFlowNodeID; // 0x48        
        bool m_bAnd; // 0x4c        
        [[maybe_unused]] std::uint8_t pad_0x4d[0x3]; // 0x4d
        pulse_runtime_lib::PulseSelectorOutflowList_t m_PassOutflow; // 0x50        
        pulse_runtime_lib::CPulse_OutflowConnection m_FailOutflow; // 0x68        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_InlineNodeSkipSelector because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_InlineNodeSkipSelector) == 0xb0);
};
