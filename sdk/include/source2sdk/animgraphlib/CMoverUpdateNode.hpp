#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CMoverUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x8]; // 0x70
        animgraphlib::CAnimInputDamping m_damping; // 0x78        
        animgraphlib::AnimValueSource m_facingTarget; // 0x90        
        animgraphlib::CAnimParamHandle m_hMoveVecParam; // 0x94        
        animgraphlib::CAnimParamHandle m_hMoveHeadingParam; // 0x96        
        animgraphlib::CAnimParamHandle m_hTurnToFaceParam; // 0x98        
        [[maybe_unused]] std::uint8_t pad_0x9a[0x2]; // 0x9a
        float m_flTurnToFaceOffset; // 0x9c        
        float m_flTurnToFaceLimit; // 0xa0        
        bool m_bAdditive; // 0xa4        
        bool m_bApplyMovement; // 0xa5        
        bool m_bOrientMovement; // 0xa6        
        bool m_bApplyRotation; // 0xa7        
        bool m_bLimitOnly; // 0xa8        
        [[maybe_unused]] std::uint8_t pad_0xa9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMoverUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CMoverUpdateNode) == 0xb0);
};
