#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x20
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootTrajectory
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        Vector m_vOffset; // 0x8        
        float m_flRotationOffset; // 0x14        
        float m_flProgression; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CFootTrajectory, m_vOffset) == 0x8);
    static_assert(offsetof(CFootTrajectory, m_flRotationOffset) == 0x14);
    static_assert(offsetof(CFootTrajectory, m_flProgression) == 0x18);
    
    static_assert(sizeof(CFootTrajectory) == 0x20);
};
