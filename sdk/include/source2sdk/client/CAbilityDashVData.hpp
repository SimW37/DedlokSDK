#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1a40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityDashVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashParticle;
            char m_DashParticle[0xe0]; // 0x1618            
            // m_DownDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle;
            char m_DownDashParticle[0xe0]; // 0x16f8            
            // m_WallJumpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallJumpParticle;
            char m_WallJumpParticle[0xe0]; // 0x17d8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strArriveSound; // 0x18b8            
            CSoundEventName m_strStaminaDrainedSound; // 0x18c8            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x18d8            
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1960            
            // metadata: MPropertyStartGroup "Ground Dash Stuff"
            float m_flMaxAngDiff; // 0x19e8            
            float m_flSlideEarlyOutWindow; // 0x19ec            
            float m_flSlideLockoutTime; // 0x19f0            
            float m_flGroundDashAirbornDrag; // 0x19f4            
            float m_flGroundDashAirbornSpeedClamp; // 0x19f8            
            uint8_t _pad19fc[0x4]; // 0x19fc
            CSoundEventName m_strGroundDashSound; // 0x1a00            
            // metadata: MPropertyStartGroup "Air Dash Stuff"
            float m_flAirDashEndVelocityScale; // 0x1a10            
            float m_flAirDashAccPct; // 0x1a14            
            float m_flDuringDrag; // 0x1a18            
            float m_flAirSpeedForMaxDrag; // 0x1a1c            
            float m_flAirSpeedForMinDrag; // 0x1a20            
            float m_flPostMaxDrag; // 0x1a24            
            float m_flPostDragDuration; // 0x1a28            
            float m_flDownwardAirDashSpeed; // 0x1a2c            
            CSoundEventName m_strAirDashSound; // 0x1a30            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityDashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityDashVData) == 0x1a40);
    };
};
