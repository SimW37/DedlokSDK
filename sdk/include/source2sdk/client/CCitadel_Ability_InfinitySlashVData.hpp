#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
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
        // Size: 0x1878
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_InfinitySlashVData : public source2sdk::client::CCitadelYamatoBaseVData
        {
        public:
            float m_flRiseSpeed; // 0x15f0            
            float m_flRiseDuration; // 0x15f4            
            float m_flSpeedDecayScale; // 0x15f8            
            float m_flExplodeHoldTime; // 0x15fc            
            float m_flExplosionShakeAmplitude; // 0x1600            
            float m_flExplosionShakeFrequency; // 0x1604            
            float m_flExplosionShakeDuration; // 0x1608            
            uint8_t _pad160c[0x4]; // 0x160c
            // metadata: MPropertyStartGroup "Visuals"
            // m_AOERangeEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOERangeEffect;
            char m_AOERangeEffect[0xe0]; // 0x1610            
            // m_AnimCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AnimCastEffect;
            char m_AnimCastEffect[0xe0]; // 0x16f0            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x17d0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1858            
            // m_BuffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BuffTimerModifier;
            char m_BuffTimerModifier[0x10]; // 0x1868            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_InfinitySlashVData) == 0x1878);
    };
};
