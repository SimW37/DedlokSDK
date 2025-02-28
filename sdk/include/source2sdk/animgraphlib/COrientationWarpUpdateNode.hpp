#pragma once
#include "source2sdk/animgraphlib/AnimValueSource.hpp"
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CAnimParamHandle.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/OrientationWarpMode_t.hpp"
#include "source2sdk/animgraphlib/OrientationWarpRootMotionSource_t.hpp"
#include "source2sdk/animgraphlib/OrientationWarpTargetOffsetMode_t.hpp"
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
    // Size: 0xc0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class COrientationWarpUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x70[0x4]; // 0x70
        animgraphlib::OrientationWarpMode_t m_eMode; // 0x74        
        animgraphlib::CAnimParamHandle m_hTargetParam; // 0x78        
        animgraphlib::CAnimParamHandle m_hTargetPositionParam; // 0x7a        
        animgraphlib::CAnimParamHandle m_hFallbackTargetPositionParam; // 0x7c        
        [[maybe_unused]] std::uint8_t pad_0x7e[0x2]; // 0x7e
        animgraphlib::OrientationWarpTargetOffsetMode_t m_eTargetOffsetMode; // 0x80        
        float m_flTargetOffset; // 0x84        
        animgraphlib::CAnimParamHandle m_hTargetOffsetParam; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x8a[0x6]; // 0x8a
        animgraphlib::CAnimInputDamping m_damping; // 0x90        
        animgraphlib::OrientationWarpRootMotionSource_t m_eRootMotionSource; // 0xa8        
        float m_flMaxRootMotionScale; // 0xac        
        bool m_bEnablePreferredRotationDirection; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb1[0x3]; // 0xb1
        animgraphlib::AnimValueSource m_ePreferredRotationDirection; // 0xb4        
        float m_flPreferredRotationThreshold; // 0xb8        
        [[maybe_unused]] std::uint8_t pad_0xbc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in COrientationWarpUpdateNode because it is not a standard-layout class
    static_assert(sizeof(COrientationWarpUpdateNode) == 0xc0);
};
