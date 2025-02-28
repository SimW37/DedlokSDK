#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x1998
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_StoneFormVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x15c8        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x16a8        
        // m_StoneFormParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StoneFormParticle;
        char m_StoneFormParticle[0xe0]; // 0x1788        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_CastTargetSound; // 0x1868        
        CSoundEventName m_strImpactSound; // 0x1878        
        CSoundEventName m_strFallCollideImpactSound; // 0x1888        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_DragModifier;
        char m_DragModifier[0x10]; // 0x1898        
        // metadata: MPropertyDescription "Model"
        // m_strTrueFormModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_strTrueFormModel;
        char m_strTrueFormModel[0xe0]; // 0x18a8        
        // metadata: MPropertyStartGroup "+Stone Form Params"
        float m_flLandHoldTime; // 0x1988        
        float m_flRisingTime; // 0x198c        
        float m_flCollideRadius; // 0x1990        
        [[maybe_unused]] std::uint8_t pad_0x1994[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_StoneFormVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_StoneFormVData) == 0x1998);
};
