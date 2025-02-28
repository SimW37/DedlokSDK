#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1950
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityDashVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashParticle;
        char m_DashParticle[0xe0]; // 0x15c8        
        // m_DownDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DownDashParticle;
        char m_DownDashParticle[0xe0]; // 0x16a8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strArriveSound; // 0x1788        
        CSoundEventName m_strStaminaDrainedSound; // 0x1798        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceGroundDashActivate; // 0x17a8        
        client::CitadelCameraOperationsSequence_t m_cameraSequenceAirDashActivate; // 0x1830        
        // metadata: MPropertyStartGroup "Ground Dash Stuff"
        float m_flMaxAngDiff; // 0x18b8        
        float m_flDurationScaleForSpeed; // 0x18bc        
        float m_flSlideEarlyOutWindow; // 0x18c0        
        float m_flSlideLockoutTime; // 0x18c4        
        float m_flGroundDashAirbornDrag; // 0x18c8        
        float m_flGroundDashAirbornSpeedClamp; // 0x18cc        
        CSoundEventName m_strGroundDashActivate; // 0x18d0        
        CPiecewiseCurve m_curvePosition; // 0x18e0        
        float m_flGroundDashDuration; // 0x1920        
        float m_flGroundDashDistanceInMeters; // 0x1924        
        // metadata: MPropertyStartGroup "Air Dash Stuff"
        float m_flAirDashEndVelocityScale; // 0x1928        
        float m_flAirDashAccPct; // 0x192c        
        float m_flDuringDrag; // 0x1930        
        float m_flPostDrag; // 0x1934        
        float m_flPostDragDuration; // 0x1938        
        float m_flDownwardAirDashSpeed; // 0x193c        
        CSoundEventName m_strDashActivate; // 0x1940        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityDashVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityDashVData) == 0x1950);
};
