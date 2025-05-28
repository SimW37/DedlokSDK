#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1810
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityTangoTetherVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_TetherModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_TetherModifier;
            char m_TetherModifier[0x10]; // 0x15f0            
            // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_GrappleTargetModifier;
            char m_GrappleTargetModifier[0x10]; // 0x1600            
            // metadata: MPropertyStartGroup "Visuals"
            // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
            char m_BulletGrappleTracerParticle[0xe0]; // 0x1610            
            // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
            char m_EnemyGrappleParticle[0xe0]; // 0x16f0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDamageTarget; // 0x17d0            
            CSoundEventName m_strGrappleHitTarget; // 0x17e0            
            CSoundEventName m_strGrappleHitWorld; // 0x17f0            
            CSoundEventName m_strGrappleHitNothing; // 0x1800            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityTangoTetherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelAbilityTangoTetherVData) == 0x1810);
    };
};
