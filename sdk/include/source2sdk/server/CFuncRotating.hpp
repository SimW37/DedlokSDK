#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x8c8
        // Has VTable
        // 
        // static metadata: MNetworkOverride "m_angRotation CGameSceneNode"
        // static metadata: MNetworkOverride "m_flSimulationTime CBaseEntity"
        #pragma pack(push, 1)
        class CFuncRotating : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStopped; // 0x7d0            
            source2sdk::entity2::CEntityIOOutput m_OnStarted; // 0x7f8            
            source2sdk::entity2::CEntityIOOutput m_OnReachedStart; // 0x820            
            RotationVector m_localRotationVector; // 0x848            
            float m_flFanFriction; // 0x854            
            float m_flAttenuation; // 0x858            
            float m_flVolume; // 0x85c            
            float m_flTargetSpeed; // 0x860            
            float m_flMaxSpeed; // 0x864            
            float m_flBlockDamage; // 0x868            
            uint8_t _pad086c[0x4]; // 0x86c
            CUtlSymbolLarge m_NoiseRunning; // 0x870            
            bool m_bReversed; // 0x878            
            bool m_bAccelDecel; // 0x879            
            uint8_t _pad087a[0x16]; // 0x87a
            QAngle m_prevLocalAngles; // 0x890            
            QAngle m_angStart; // 0x89c            
            bool m_bStopAtStartPos; // 0x8a8            
            uint8_t _pad08a9[0x3]; // 0x8a9
            Vector m_vecClientOrigin; // 0x8ac            
            QAngle m_vecClientAngles; // 0x8b8            
            uint8_t _pad08c4[0x4];
            
            // Datamap fields:
            // bool movewithoutpushingblockers; // 0x7fffffff
            // void CFuncRotatingSpinUpMove; // 0x0
            // void CFuncRotatingSpinDownMove; // 0x0
            // void CFuncRotatingHurtTouch; // 0x0
            // void CFuncRotatingRotatingUse; // 0x0
            // void CFuncRotatingRotateMove; // 0x0
            // void CFuncRotatingReverseMove; // 0x0
            // float InputSetSpeed; // 0x0
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
            // void InputReverse; // 0x0
            // void InputStartForward; // 0x0
            // void InputStartBackward; // 0x0
            // void InputStopAtStartPos; // 0x0
            // void InputSnapToStartPos; // 0x0
            // Vector InputSetStartPos; // 0x0
            // void InputEnableAccelDecel; // 0x0
            // void InputDisableAccelDecel; // 0x0
            // void m_nNoiseRunningGuid; // 0x87c
            // int32_t fanfriction; // 0x7fffffff
            // int32_t Volume; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncRotating) == 0x8c8);
    };
};
