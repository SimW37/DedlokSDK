#pragma once
#include "source2sdk/animlib/CNmPassthroughNode__CDefinition.hpp"
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
    // Size: 0x28
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmTwoBoneIKNode__CDefinition : public animlib::CNmPassthroughNode__CDefinition
    {
    public:
        CGlobalSymbol m_effectorBoneID; // 0x18        
        int16_t m_nEffectorTargetNodeIdx; // 0x20        
        int16_t m_nEnabledNodeIdx; // 0x22        
        bool m_bIsTargetInWorldSpace; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x25[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmTwoBoneIKNode::CDefinition because it is not a standard-layout class
    static_assert(sizeof(CNmTwoBoneIKNode__CDefinition) == 0x28);
};
