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
        // Size: 0x1808
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
            char m_TetherModifier[0x10]; // 0x15e8            
            // m_GrappleTargetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_GrappleTargetModifier;
            char m_GrappleTargetModifier[0x10]; // 0x15f8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_BulletGrappleTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle;
            char m_BulletGrappleTracerParticle[0xe0]; // 0x1608            
            // m_EnemyGrappleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle;
            char m_EnemyGrappleParticle[0xe0]; // 0x16e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDamageTarget; // 0x17c8            
            CSoundEventName m_strGrappleHitTarget; // 0x17d8            
            CSoundEventName m_strGrappleHitWorld; // 0x17e8            
            CSoundEventName m_strGrappleHitNothing; // 0x17f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityTangoTetherVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelAbilityTangoTetherVData) == 0x1808);
    };
};
