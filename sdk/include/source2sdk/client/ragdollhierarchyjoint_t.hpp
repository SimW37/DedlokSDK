#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has Trivial Constructor
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct ragdollhierarchyjoint_t
    {
    public:
        int32_t parentIndex; // 0x0        
        int32_t childIndex; // 0x4        
        [[maybe_unused]] std::uint8_t pad_0x08[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ragdollhierarchyjoint_t, parentIndex) == 0x0);
    static_assert(offsetof(ragdollhierarchyjoint_t, childIndex) == 0x4);
    
    static_assert(sizeof(ragdollhierarchyjoint_t) == 0x10);
};
