#pragma once
#include "source2sdk/pulse_runtime_lib/CPulseCell_Inflow_BaseEntrypoint.hpp"
#include "source2sdk/pulse_runtime_lib/CPulseRuntimeMethodArg.hpp"
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
    // Size: 0xc8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MCellForDomain "BaseDomain"
    // static metadata: MPulseCellMethodBindings
    // static metadata: MPulseCellOutflowHookInfo "Äùí¯"
    // static metadata: MPulseCellWithCustomDocNode
    #pragma pack(push, 1)
    class CPulseCell_Inflow_Method : public pulse_runtime_lib::CPulseCell_Inflow_BaseEntrypoint
    {
    public:
        PulseSymbol_t m_MethodName; // 0x80        
        CUtlString m_Description; // 0x90        
        bool m_bIsPublic; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x99[0x7]; // 0x99
        CPulseValueFullType m_ReturnType; // 0xa0        
        // m_Args has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlLeanVector<pulse_runtime_lib::CPulseRuntimeMethodArg> m_Args;
        char m_Args[0x10]; // 0xb8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPulseCell_Inflow_Method because it is not a standard-layout class
    static_assert(sizeof(CPulseCell_Inflow_Method) == 0xc8);
};
