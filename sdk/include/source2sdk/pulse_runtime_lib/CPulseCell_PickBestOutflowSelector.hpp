#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_BaseFlow.hpp"
#include "source2sdk/pulse_runtime_lib/PulseBestOutflowRules_t.hpp"
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
    // Size: 0x68
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo "Äùí¯"
    // static metadata: MPropertyFriendlyName "Select Best Exit"
    // static metadata: MPropertyDescription "Evaluate the requirements of each connected node"
    // static metadata: MPulseCell_WithNoDefaultOutflow
    // static metadata: MPulseEditorHeaderIcon "tools/images/pulse_editor/requirements.png"
    // static metadata: MPulseEditorCanvasItemSpecKV3
    // static metadata: MPulseSelectorHasSpecificity
    // static metadata: MPulseSelectorAllowRequirementCriteria
    // static metadata: MPulseSelectorAllowRequirementCriteria
    #pragma pack(push, 1)
    class CPulseCell_PickBestOutflowSelector : public pulse_runtime_lib::CPulseCell_BaseFlow
    {
    public:
        pulse_runtime_lib::PulseBestOutflowRules_t m_nCheckType; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x4c[0x4]; // 0x4c
        pulse_runtime_lib::PulseSelectorOutflowList_t m_OutflowList; // 0x50        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_PickBestOutflowSelector because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_PickBestOutflowSelector) == 0x68);
};
