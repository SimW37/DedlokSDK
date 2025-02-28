#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x17a0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_PrimaryWeaponVData : public client::CCitadel_Ability_PrimaryWeaponVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_EscapeModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_EscapeModifier;
        char m_EscapeModifier[0x10]; // 0x1618        
        // metadata: MPropertyStartGroup "Visuals"
        // m_SlashEffectParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashEffectParticle;
        char m_SlashEffectParticle[0xe0]; // 0x1628        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExpireSound; // 0x1708        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceInShadow; // 0x1718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_PrimaryWeaponVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_PrimaryWeaponVData) == 0x17a0);
};
