#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
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
    // Standard-layout class: false
    // Size: 0xb0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CDirectionalBlendUpdateNode : public animgraphlib::CLeafUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x4]; // 0x58
        animationsystem::HSequence m_hSequences[8]; // 0x5c        
        [[maybe_unused]] std::uint8_t pad_0x7c[0x4]; // 0x7c
        animgraphlib::CAnimInputDamping m_damping; // 0x80        
        animgraphlib::AnimValueSource m_blendValueSource; // 0x98        
        animgraphlib::CAnimParamHandle m_paramIndex; // 0x9c        
        [[maybe_unused]] std::uint8_t pad_0x9e[0x2]; // 0x9e
        float m_playbackSpeed; // 0xa0        
        float m_duration; // 0xa4        
        bool m_bLoop; // 0xa8        
        bool m_bLockBlendOnReset; // 0xa9        
        [[maybe_unused]] std::uint8_t pad_0xaa[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDirectionalBlendUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CDirectionalBlendUpdateNode) == 0xb0);
};
