#pragma once
#include "source2sdk/animgraphlib/DampingSpeedFunction.hpp"
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
    // Size: 0x18
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Damping"
    #pragma pack(push, 1)
    class CAnimInputDamping
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MPropertyFriendlyName "Speed Function"
        animgraphlib::DampingSpeedFunction m_speedFunction; // 0x8        
        // metadata: MPropertyFriendlyName "Speed Scale"
        float m_fSpeedScale; // 0xc        
        // metadata: MPropertyFriendlyName "Falling Speed Scale"
        float m_fFallingSpeedScale; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CAnimInputDamping, m_speedFunction) == 0x8);
    static_assert(offsetof(CAnimInputDamping, m_fSpeedScale) == 0xc);
    static_assert(offsetof(CAnimInputDamping, m_fFallingSpeedScale) == 0x10);
    
    static_assert(sizeof(CAnimInputDamping) == 0x18);
};
