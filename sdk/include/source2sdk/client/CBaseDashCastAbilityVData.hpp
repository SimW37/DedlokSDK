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
        // Size: 0x1678
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBaseDashCastAbilityVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // m_AbilityToTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CSubclassName<4> m_AbilityToTrigger;
            char m_AbilityToTrigger[0x10]; // 0x15f0            
            // metadata: MPropertyDescription "How big of a trigger to use when tracing for targets"
            float m_flDashCastTriggerRadius; // 0x1600            
            // metadata: MPropertyDescription "How fast the dash should go.  When using the curve, the dash will travel this speen when y=1"
            float m_flDashSpeed; // 0x1604            
            // metadata: MPropertyDescription "When true, speed will be set to 0 when the dash cast ends"
            bool m_bSnapToZeroSpeedOnEnd; // 0x1608            
            // metadata: MPropertyDescription "When true, use the curve below to scale the speed of the dash across the distance."
            bool m_bUseCurveToDefineSpeed; // 0x1609            
            uint8_t _pad160a[0x6]; // 0x160a
            // metadata: MPropertySuppressExpr "m_bUseCurveToDefineSpeed == false"
            CPiecewiseCurve m_MovementSpeedCurve; // 0x1610            
            // metadata: MPropertySuppressField
            float m_flMovementSpeedCurveAvgSpeed; // 0x1650            
            uint8_t _pad1654[0x4]; // 0x1654
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Sound to play if we hit a target."
            CSoundEventName m_strTargetHitSound; // 0x1658            
            // metadata: MPropertyDescription "Sound to play if miss entirely.  Only the caster hears it."
            CSoundEventName m_strMissSound; // 0x1668            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseDashCastAbilityVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CBaseDashCastAbilityVData) == 0x1678);
    };
};
