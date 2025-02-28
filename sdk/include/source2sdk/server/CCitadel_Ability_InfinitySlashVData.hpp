#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelYamatoBaseVData.hpp"
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
    // Size: 0x1858
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_InfinitySlashVData : public server::CCitadelYamatoBaseVData
    {
    public:
        float m_flRiseSpeed; // 0x15d0        
        float m_flRiseDuration; // 0x15d4        
        float m_flSpeedDecayScale; // 0x15d8        
        float m_flExplodeHoldTime; // 0x15dc        
        float m_flExplosionShakeAmplitude; // 0x15e0        
        float m_flExplosionShakeFrequency; // 0x15e4        
        float m_flExplosionShakeDuration; // 0x15e8        
        [[maybe_unused]] std::uint8_t pad_0x15ec[0x4]; // 0x15ec
        // metadata: MPropertyStartGroup "Visuals"
        // m_AOERangeEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AOERangeEffect;
        char m_AOERangeEffect[0xe0]; // 0x15f0        
        // m_AnimCastEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AnimCastEffect;
        char m_AnimCastEffect[0xe0]; // 0x16d0        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceExplosion; // 0x17b0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x1838        
        // m_BuffTimerModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffTimerModifier;
        char m_BuffTimerModifier[0x10]; // 0x1848        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_InfinitySlashVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_InfinitySlashVData) == 0x1858);
};
