#pragma once
#include "source2sdk/animgraphlib/CAnimInputDamping.hpp"
#include "source2sdk/animgraphlib/CUnaryUpdateNode.hpp"
#include "source2sdk/animgraphlib/FootFixedSettings.hpp"
#include "source2sdk/animgraphlib/FootLockPoseOpFixedSettings.hpp"
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
    // Size: 0x158
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CFootLockUpdateNode : public animgraphlib::CUnaryUpdateNode
    {
    public:
        animgraphlib::FootLockPoseOpFixedSettings m_opFixedSettings; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0xd8[0x8]; // 0xd8
        // m_footSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::FootFixedSettings> m_footSettings;
        char m_footSettings[0x18]; // 0xe0        
        animgraphlib::CAnimInputDamping m_hipShiftDamping; // 0xf8        
        animgraphlib::CAnimInputDamping m_rootHeightDamping; // 0x110        
        float m_flStrideCurveScale; // 0x128        
        float m_flStrideCurveLimitScale; // 0x12c        
        float m_flStepHeightIncreaseScale; // 0x130        
        float m_flStepHeightDecreaseScale; // 0x134        
        float m_flHipShiftScale; // 0x138        
        float m_flBlendTime; // 0x13c        
        float m_flMaxRootHeightOffset; // 0x140        
        float m_flMinRootHeightOffset; // 0x144        
        float m_flTiltPlanePitchSpringStrength; // 0x148        
        float m_flTiltPlaneRollSpringStrength; // 0x14c        
        bool m_bApplyFootRotationLimits; // 0x150        
        bool m_bApplyHipShift; // 0x151        
        bool m_bModulateStepHeight; // 0x152        
        bool m_bResetChild; // 0x153        
        bool m_bEnableVerticalCurvedPaths; // 0x154        
        bool m_bEnableRootHeightDamping; // 0x155        
        [[maybe_unused]] std::uint8_t pad_0x156[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootLockUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CFootLockUpdateNode) == 0x158);
};
