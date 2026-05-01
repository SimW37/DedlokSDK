#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
        // Size: 0xb00
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_ItemWalkBackVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_IdleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdleParticle;
            char m_IdleParticle[0xe0]; // 0x750            
            // m_RunningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RunningParticle;
            char m_RunningParticle[0xe0]; // 0x830            
            // m_BiasEffectPositive has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BiasEffectPositive;
            char m_BiasEffectPositive[0xe0]; // 0x910            
            // m_BiasEffectNegative has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BiasEffectNegative;
            char m_BiasEffectNegative[0xe0]; // 0x9f0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flStopDistance; // 0xad0            
            float m_flMaxSpeedDistance; // 0xad4            
            float m_flSlowSpeed; // 0xad8            
            float m_flFastSpeed; // 0xadc            
            float m_flVerticalOffset; // 0xae0            
            float m_flTolerance; // 0xae4            
            float m_flRepathTime; // 0xae8            
            float m_flAutoRunTime; // 0xaec            
            float m_flTimeToStartAutoRun; // 0xaf0            
            float m_flWaitTimeDistance; // 0xaf4            
            float m_flWaitTimeLimit; // 0xaf8            
            float m_flCheckPlayerRate; // 0xafc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ItemWalkBackVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_ItemWalkBackVData) == 0xb00);
    };
};
