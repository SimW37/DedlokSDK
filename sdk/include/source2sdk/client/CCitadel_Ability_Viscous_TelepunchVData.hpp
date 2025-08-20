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
        // Size: 0x1af0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Viscous_TelepunchVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_PortalParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PortalParticle;
            char m_PortalParticle[0xe0]; // 0x1618            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x16f8            
            // m_PunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PunchParticle;
            char m_PunchParticle[0xe0]; // 0x17d8            
            // m_WallPunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WallPunchParticle;
            char m_WallPunchParticle[0xe0]; // 0x18b8            
            // m_CeilingPunchParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CeilingPunchParticle;
            char m_CeilingPunchParticle[0xe0]; // 0x1998            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_EnemyPortalSound; // 0x1a78            
            CSoundEventName m_SelfPortalSound; // 0x1a88            
            CSoundEventName m_WindupSound; // 0x1a98            
            CSoundEventName m_PunchSound; // 0x1aa8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_PunchRollSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_PunchRollSlowModifier;
            char m_PunchRollSlowModifier[0x10]; // 0x1ab8            
            // m_ImpactModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ImpactModifier;
            char m_ImpactModifier[0x10]; // 0x1ac8            
            // metadata: MPropertyStartGroup "+Telepunch Parameters"
            float m_flEnemyPortalTelegraphTime; // 0x1ad8            
            float m_flSelfPortalTelegraphTime; // 0x1adc            
            float m_flWindupTime; // 0x1ae0            
            float m_flAttackTime; // 0x1ae4            
            float m_flGroundTraceOnPlayerHitDistance; // 0x1ae8            
            float m_flPlayerCheckSphereRadius; // 0x1aec            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Viscous_TelepunchVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Viscous_TelepunchVData) == 0x1af0);
    };
};
