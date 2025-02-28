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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x8
    // Has Trivial Destructor
    // 
    // static metadata: MIsBoxedIntegerType
    #pragma pack(push, 1)
    struct MatchID_t
    {
    public:
        uint64_t m_Value; // 0x0        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(MatchID_t, m_Value) == 0x0);
    
    static_assert(sizeof(MatchID_t) == 0x8);
};
