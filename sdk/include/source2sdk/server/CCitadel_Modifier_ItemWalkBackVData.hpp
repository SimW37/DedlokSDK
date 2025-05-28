#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0xa10
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_ItemWalkBackVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_IdleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdleParticle;
            char m_IdleParticle[0xe0]; // 0x660            
            // m_RunningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RunningParticle;
            char m_RunningParticle[0xe0]; // 0x740            
            // m_BiasEffectPositive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BiasEffectPositive;
            char m_BiasEffectPositive[0xe0]; // 0x820            
            // m_BiasEffectNegative has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BiasEffectNegative;
            char m_BiasEffectNegative[0xe0]; // 0x900            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flStopDistance; // 0x9e0            
            float m_flMaxSpeedDistance; // 0x9e4            
            float m_flSlowSpeed; // 0x9e8            
            float m_flFastSpeed; // 0x9ec            
            float m_flVerticalOffset; // 0x9f0            
            float m_flTolerance; // 0x9f4            
            float m_flRepathTime; // 0x9f8            
            float m_flAutoRunTime; // 0x9fc            
            float m_flTimeToStartAutoRun; // 0xa00            
            float m_flWaitTimeDistance; // 0xa04            
            float m_flWaitTimeLimit; // 0xa08            
            float m_flCheckPlayerRate; // 0xa0c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ItemWalkBackVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_ItemWalkBackVData) == 0xa10);
    };
};
