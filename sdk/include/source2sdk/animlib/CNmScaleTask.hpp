#pragma once
#include "source2sdk/animlib/CNmPoseTask.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x88
    // Has VTable
    #pragma pack(push, 1)
    class CNmScaleTask : public animlib::CNmPoseTask
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x30[0x58];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNmScaleTask) == 0x88);
};
