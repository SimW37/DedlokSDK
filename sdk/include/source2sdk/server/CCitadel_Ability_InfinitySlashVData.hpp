#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelYamatoBaseVData.hpp"

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
        // Size: 0x18b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_InfinitySlashVData : public source2sdk::server::CCitadelYamatoBaseVData
        {
        public:
            float m_flRiseSpeed; // 0x1628            
            float m_flRiseDuration; // 0x162c            
            float m_flSpeedDecayScale; // 0x1630            
            float m_flExplodeHoldTime; // 0x1634            
            float m_flExplosionShakeAmplitude; // 0x1638            
            float m_flExplosionShakeFrequency; // 0x163c            
            float m_flExplosionShakeDuration; // 0x1640            
            uint8_t _pad1644[0x4]; // 0x1644
            // metadata: MPropertyStartGroup "Visuals"
            // m_AOERangeEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOERangeEffect;
            char m_AOERangeEffect[0xe0]; // 0x1648            
            // m_AnimCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AnimCastEffect;
            char m_AnimCastEffect[0xe0]; // 0x1728            
            // metadata: MPropertyStartGroup "Camera"
            source2sdk::client::CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x1808            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffModifier;
            char m_BuffModifier[0x10]; // 0x1890            
            // m_BuffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_BuffTimerModifier;
            char m_BuffTimerModifier[0x10]; // 0x18a0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_InfinitySlashVData) == 0x18b0);
    };
};
