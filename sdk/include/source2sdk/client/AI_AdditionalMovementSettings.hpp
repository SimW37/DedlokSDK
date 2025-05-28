#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_MovementHeadingSettings_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x90
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class AI_AdditionalMovementSettings
        {
        public:
            CGlobalSymbol m_sName; // 0x0            
            source2sdk::client::AI_MovementHeadingSettings_t m_heading; // 0x8            
            float m_flProceduralIdleTurnSpeed; // 0x30            
            float m_flAcceleration; // 0x34            
            float m_flDeceleration; // 0x38            
            uint8_t _pad003c[0x4]; // 0x3c
            CPiecewiseCurve m_decelerationCurve; // 0x40            
            float m_flMovementMaxPathEndDirectionAngleDifferenceForStop; // 0x80            
            // metadata: MPropertyDescription "What angle between the current move direction and the direction to the next waypoint will trigger a planted turn. Any value <= 0 will use the sharp angle from the vmdl movement settings."
            float m_flMovementPlantedTurnAngleThreshold; // 0x84            
            float m_flMaxIdleTurnScaleUp; // 0x88            
            uint8_t _pad008c[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_sName) == 0x0);
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_heading) == 0x8);
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_flProceduralIdleTurnSpeed) == 0x30);
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_flAcceleration) == 0x34);
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_flDeceleration) == 0x38);
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_decelerationCurve) == 0x40);
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_flMovementMaxPathEndDirectionAngleDifferenceForStop) == 0x80);
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_flMovementPlantedTurnAngleThreshold) == 0x84);
        static_assert(offsetof(source2sdk::client::AI_AdditionalMovementSettings, m_flMaxIdleTurnScaleUp) == 0x88);
        
        static_assert(sizeof(source2sdk::client::AI_AdditionalMovementSettings) == 0x90);
    };
};
