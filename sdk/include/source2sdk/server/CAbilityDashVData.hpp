#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1a58
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityDashVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashParticle;
            char m_DashParticle[0xe0]; // 0x15f0            
            // m_DownDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle;
            char m_DownDashParticle[0xe0]; // 0x16d0            
            // m_WallJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle;
            char m_WallJumpParticle[0xe0]; // 0x17b0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strArriveSound; // 0x1890            
            CSoundEventName m_strStaminaDrainedSound; // 0x18a0            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x18b0            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1938            
            // metadata: MPropertyStartGroup "Ground Dash Stuff"
            float m_flMaxAngDiff; // 0x19c0            
            float m_flDurationScaleForSpeed; // 0x19c4            
            float m_flSlideEarlyOutWindow; // 0x19c8            
            float m_flSlideLockoutTime; // 0x19cc            
            float m_flGroundDashAirbornDrag; // 0x19d0            
            float m_flGroundDashAirbornSpeedClamp; // 0x19d4            
            CSoundEventName m_strGroundDashActivate; // 0x19d8            
            CPiecewiseCurve m_curvePosition; // 0x19e8            
            float m_flGroundDashDuration; // 0x1a28            
            float m_flGroundDashDistanceInMeters; // 0x1a2c            
            // metadata: MPropertyStartGroup "Air Dash Stuff"
            float m_flAirDashEndVelocityScale; // 0x1a30            
            float m_flAirDashAccPct; // 0x1a34            
            float m_flDuringDrag; // 0x1a38            
            float m_flPostDrag; // 0x1a3c            
            float m_flPostDragDuration; // 0x1a40            
            float m_flDownwardAirDashSpeed; // 0x1a44            
            CSoundEventName m_strDashActivate; // 0x1a48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityDashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityDashVData) == 0x1a58);
    };
};
