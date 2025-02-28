#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
    // Size: 0x1c48
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_ProximityRitual_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_PredatoryStatueModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_PredatoryStatueModel;
        char m_PredatoryStatueModel[0xe0]; // 0x15c8        
        // m_CatReappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatReappearParticle;
        char m_CatReappearParticle[0xe0]; // 0x16a8        
        // m_CatDisappearParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatDisappearParticle;
        char m_CatDisappearParticle[0xe0]; // 0x1788        
        // m_CatEyesParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatEyesParticle;
        char m_CatEyesParticle[0xe0]; // 0x1868        
        // m_CatSummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatSummonParticle;
        char m_CatSummonParticle[0xe0]; // 0x1948        
        // m_CatRecallParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CatRecallParticle;
        char m_CatRecallParticle[0xe0]; // 0x1a28        
        // m_RecallLineParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RecallLineParticle;
        char m_RecallLineParticle[0xe0]; // 0x1b08        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strRecallSound; // 0x1be8        
        CSoundEventName m_strKilledSound; // 0x1bf8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_PredatoryStatueModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PredatoryStatueModifier;
        char m_PredatoryStatueModifier[0x10]; // 0x1c08        
        // m_RecentDamageModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RecentDamageModifier;
        char m_RecentDamageModifier[0x10]; // 0x1c18        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flHeavyMeleeDmg; // 0x1c28        
        float m_flLightMeleeDmg; // 0x1c2c        
        float m_flAbilityDamageScale; // 0x1c30        
        float m_flNPCDamageScale; // 0x1c34        
        float m_flCastDelayMin; // 0x1c38        
        float m_flCastDelayMax; // 0x1c3c        
        float m_flCastDelayMaxDist; // 0x1c40        
        float m_flPostCastCooldown; // 0x1c44        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_ProximityRitual_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_ProximityRitual_VData) == 0x1c48);
};
