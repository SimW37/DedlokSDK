#pragma once
#include "source2sdk/animlib/CNmPoseTask.hpp"
#include "source2sdk/animlib/CNmTarget.hpp"
#include "source2sdk/animlib/NmIKBlendMode_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x110
    // Has VTable
    #pragma pack(push, 1)
    class CNmChainSolverTask : public animlib::CNmPoseTask
    {
    public:
        int32_t m_nEffectorBoneIdx; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0xc]; // 0x34
        CTransform m_targetTransform; // 0x40        
        int32_t m_nNumBonesInChain; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x64[0xc]; // 0x64
        animlib::CNmTarget m_effectorTarget; // 0x70        
        animlib::NmIKBlendMode_t m_blendMode; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0x3]; // 0xa1
        float m_flBlendWeight; // 0xa4        
        bool m_bIsTargetInWorldSpace; // 0xa8        
        bool m_bIsRunningFromDeserializedData; // 0xa9        
        [[maybe_unused]] std::uint8_t pad_0xaa[0x6]; // 0xaa
        CGlobalSymbol m_debugEffectorBoneID; // 0xb0        
        [[maybe_unused]] std::uint8_t pad_0xb8[0x8]; // 0xb8
        CTransform m_chainStartTransformMS; // 0xc0        
        CTransform m_debugRequestedTargetTransformMS; // 0xe0        
        float m_debugTotalChainLength; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x104[0xc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNmChainSolverTask because it is not a standard-layout class
    static_assert(sizeof(CNmChainSolverTask) == 0x110);
};
