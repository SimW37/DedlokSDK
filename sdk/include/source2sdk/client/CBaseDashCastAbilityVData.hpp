#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x16a0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBaseDashCastAbilityVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // m_AbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<4> m_AbilityToTrigger;
            char m_AbilityToTrigger[0x10]; // 0x1618            
            // metadata: MPropertyDescription "How big of a trigger to use when tracing for targets"
            float m_flDashCastTriggerRadius; // 0x1628            
            // metadata: MPropertyDescription "How fast the dash should go.  When using the curve, the dash will travel this speen when y=1"
            float m_flDashSpeed; // 0x162c            
            // metadata: MPropertyDescription "When true, speed will be set to 0 when the dash cast ends"
            bool m_bSnapToZeroSpeedOnEnd; // 0x1630            
            // metadata: MPropertyDescription "When true, use the curve below to scale the speed of the dash across the distance."
            bool m_bUseCurveToDefineSpeed; // 0x1631            
            uint8_t _pad1632[0x6]; // 0x1632
            // metadata: MPropertySuppressExpr "m_bUseCurveToDefineSpeed == false"
            CPiecewiseCurve m_MovementSpeedCurve; // 0x1638            
            // metadata: MPropertySuppressField
            float m_flMovementSpeedCurveAvgSpeed; // 0x1678            
            uint8_t _pad167c[0x4]; // 0x167c
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Sound to play if we hit a target."
            CSoundEventName m_strTargetHitSound; // 0x1680            
            // metadata: MPropertyDescription "Sound to play if miss entirely.  Only the caster hears it."
            CSoundEventName m_strMissSound; // 0x1690            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseDashCastAbilityVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseDashCastAbilityVData) == 0x16a0);
    };
};
