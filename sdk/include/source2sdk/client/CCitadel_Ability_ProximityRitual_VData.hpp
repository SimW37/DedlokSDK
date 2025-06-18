#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1c68
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_ProximityRitual_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_PredatoryStatueModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_PredatoryStatueModel;
            char m_PredatoryStatueModel[0xe0]; // 0x15e8            
            // m_CatReappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatReappearParticle;
            char m_CatReappearParticle[0xe0]; // 0x16c8            
            // m_CatDisappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatDisappearParticle;
            char m_CatDisappearParticle[0xe0]; // 0x17a8            
            // m_CatEyesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatEyesParticle;
            char m_CatEyesParticle[0xe0]; // 0x1888            
            // m_CatSummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatSummonParticle;
            char m_CatSummonParticle[0xe0]; // 0x1968            
            // m_CatRecallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatRecallParticle;
            char m_CatRecallParticle[0xe0]; // 0x1a48            
            // m_RecallLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RecallLineParticle;
            char m_RecallLineParticle[0xe0]; // 0x1b28            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strRecallSound; // 0x1c08            
            CSoundEventName m_strKilledSound; // 0x1c18            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_PredatoryStatueModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_PredatoryStatueModifier;
            char m_PredatoryStatueModifier[0x10]; // 0x1c28            
            // m_RecentDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_RecentDamageModifier;
            char m_RecentDamageModifier[0x10]; // 0x1c38            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flHeavyMeleeDmg; // 0x1c48            
            float m_flLightMeleeDmg; // 0x1c4c            
            float m_flAbilityDamageScale; // 0x1c50            
            float m_flNPCDamageScale; // 0x1c54            
            float m_flCastDelayMin; // 0x1c58            
            float m_flCastDelayMax; // 0x1c5c            
            float m_flCastDelayMaxDist; // 0x1c60            
            float m_flPostCastCooldown; // 0x1c64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ProximityRitual_VData) == 0x1c68);
    };
};
