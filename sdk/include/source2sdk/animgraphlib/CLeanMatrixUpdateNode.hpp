#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CPoseHandle.hpp"
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
    // Size: 0xf0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CLeanMatrixUpdateNode : public animgraphlib::CLeafUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x4]; // 0x58
        int32_t m_frameCorners[3][3]; // 0x5c        
        animgraphlib::CPoseHandle m_poses[9]; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0xa4[0x4]; // 0xa4
        animgraphlib::CAnimInputDamping m_damping; // 0xa8        
        animgraphlib::AnimVectorSource m_blendSource; // 0xc0        
        animgraphlib::CAnimParamHandle m_paramIndex; // 0xc4        
        [[maybe_unused]] std::uint8_t pad_0xc6[0x2]; // 0xc6
        Vector m_verticalAxis; // 0xc8        
        Vector m_horizontalAxis; // 0xd4        
        animationsystem::HSequence m_hSequence; // 0xe0        
        float m_flMaxValue; // 0xe4        
        int32_t m_nSequenceMaxFrame; // 0xe8        
        [[maybe_unused]] std::uint8_t pad_0xec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLeanMatrixUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CLeanMatrixUpdateNode) == 0xf0);
};
