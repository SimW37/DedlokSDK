#pragma once
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
    // Size: 0x17b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Nano_CatFormVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Visuals"
        // m_PoofInParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PoofInParticle;
        char m_PoofInParticle[0xe0]; // 0x15c8        
        // m_PoofOutParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PoofOutParticle;
        char m_PoofOutParticle[0xe0]; // 0x16a8        
        // metadata: MPropertyStartGroup "+Properties"
        float m_flModelScale; // 0x1788        
        [[maybe_unused]] std::uint8_t pad_0x178c[0x4]; // 0x178c
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strMeow; // 0x1790        
        // metadata: MPropertyGroupName "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x17a0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Nano_CatFormVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Nano_CatFormVData) == 0x17b0);
};
