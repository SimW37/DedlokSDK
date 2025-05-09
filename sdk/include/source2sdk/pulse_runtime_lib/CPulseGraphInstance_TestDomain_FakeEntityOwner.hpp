#pragma once
#include "source2sdk/pulse_runtime_lib/CBasePulseGraphInstance.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0x110
    // Has VTable
    // 
    // static metadata: MPulseInstanceDomainInfo
    // static metadata: MPulseDomainHookInfo
    // static metadata: MPulseLibraryBindings
    // static metadata: MPulseDomainOptInFeatureTag
    // static metadata: MPulseDomainHiddenInTool
    #pragma pack(push, 1)
    class CPulseGraphInstance_TestDomain_FakeEntityOwner : public pulse_runtime_lib::CBasePulseGraphInstance
    {
    public:
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseGraphInstance_TestDomain_FakeEntityOwner) == 0x110);
};
