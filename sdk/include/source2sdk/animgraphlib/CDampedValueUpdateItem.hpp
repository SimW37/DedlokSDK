#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDampedValueUpdateItem
    {
    public:
        animgraphlib::CAnimInputDamping m_damping; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x18[0x8]; // 0x18
        animgraphlib::CAnimParamHandle m_hParamIn; // 0x20        
        animgraphlib::CAnimParamHandle m_hParamOut; // 0x22        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDampedValueUpdateItem, m_damping) == 0x0);
    static_assert(offsetof(CDampedValueUpdateItem, m_hParamIn) == 0x20);
    static_assert(offsetof(CDampedValueUpdateItem, m_hParamOut) == 0x22);
    
    static_assert(sizeof(CDampedValueUpdateItem) == 0x28);
};
