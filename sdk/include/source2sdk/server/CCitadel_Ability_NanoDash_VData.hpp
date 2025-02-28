#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x1a10
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_NanoDash_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DashModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_DashModifier;
        char m_DashModifier[0x10]; // 0x15c8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
        char m_DashImpactEffect[0xe0]; // 0x15d8        
        // m_DashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect;
        char m_DashSwingEffect[0xe0]; // 0x16b8        
        // m_DashLineEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect;
        char m_DashLineEffect[0xe0]; // 0x1798        
        // m_SlashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashSwingEffect;
        char m_SlashSwingEffect[0xe0]; // 0x1878        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strDashStart; // 0x1958        
        CSoundEventName m_strSlashStart; // 0x1968        
        CSoundEventName m_strSlashImpactSound; // 0x1978        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceSlash; // 0x1988        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_NanoDash_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_NanoDash_VData) == 0x1a10);
};
