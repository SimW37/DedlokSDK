#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_Base_Buildup.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
    // Size: 0x17d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ViperVenomVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuildUpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadel_Modifier_Base_Buildup> m_BuildUpModifier;
        char m_BuildUpModifier[0x10]; // 0x15c8        
        // m_VenomModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_VenomModifier;
        char m_VenomModifier[0x10]; // 0x15d8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_CastVenomParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastVenomParticle;
        char m_CastVenomParticle[0xe0]; // 0x15e8        
        // m_VenomExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_VenomExplodeParticle;
        char m_VenomExplodeParticle[0xe0]; // 0x16c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strVenomWeakExplode; // 0x17a8        
        CSoundEventName m_strVenomExplode; // 0x17b8        
        CSoundEventName m_strVenomStrongExplode; // 0x17c8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ViperVenomVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ViperVenomVData) == 0x17d8);
};
