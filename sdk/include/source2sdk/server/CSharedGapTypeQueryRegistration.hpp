#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x8
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MGapTypeQueriesForScopeSingleton
    #pragma pack(push, 1)
    class CSharedGapTypeQueryRegistration
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CSharedGapTypeQueryRegistration) == 0x8);
};
