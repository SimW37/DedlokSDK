#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/AimMatrixOpFixedSettings_t.hpp"
#include "source2sdk/animgraphlib/AnimVectorSource.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x180
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAimMatrixUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::AimMatrixOpFixedSettings_t m_opFixedSettings; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x160[0x8]; // 0x160
        animgraphlib::AnimVectorSource m_target; // 0x168        
        animgraphlib::CAnimParamHandle m_paramIndex; // 0x16c        
        [[maybe_unused]] std::uint8_t pad_0x16e[0x2]; // 0x16e
        animationsystem::HSequence m_hSequence; // 0x170        
        bool m_bResetChild; // 0x174        
        bool m_bLockWhenWaning; // 0x175        
        [[maybe_unused]] std::uint8_t pad_0x176[0xa];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAimMatrixUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CAimMatrixUpdateNode) == 0x180);
};
