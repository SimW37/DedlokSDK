#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Size: 0x18e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Priest_KnockbackVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SelfModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_SelfModifier;
            char m_SelfModifier[0x10]; // 0x15f0            
            // m_KnockbackToWallModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_KnockbackToWallModifier;
            char m_KnockbackToWallModifier[0x10]; // 0x1600            
            // m_KnockbackModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_KnockbackModifier;
            char m_KnockbackModifier[0x10]; // 0x1610            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ShootParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShootParticle;
            char m_ShootParticle[0xe0]; // 0x1620            
            // m_InitialImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InitialImpactParticle;
            char m_InitialImpactParticle[0xe0]; // 0x1700            
            // m_WallImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallImpactParticle;
            char m_WallImpactParticle[0xe0]; // 0x17e0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWallSlamSound; // 0x18c0            
            CSoundEventName m_strShootSound; // 0x18d0            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flMinTravelTime; // 0x18e0            
            float m_flTravelTimeFudge; // 0x18e4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Priest_KnockbackVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Priest_KnockbackVData) == 0x18e8);
    };
};
