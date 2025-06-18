#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
#include "source2sdk/client/CRemapFloat.hpp"
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
        // Size: 0x19a8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadelAbilityHealingSlashVData : public source2sdk::client::CCitadelYamatoBaseVData
        {
        public:
            float m_flEffectSize; // 0x15f0            
            float m_flMaxAttackAngle; // 0x15f4            
            source2sdk::client::CRemapFloat m_remapAngleToTime; // 0x15f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1608            
            // metadata: MPropertyStartGroup "Visuals"
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x1618            
            // m_HealingSlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealingSlashParticle;
            char m_HealingSlashParticle[0xe0]; // 0x16f8            
            // m_HealingSlashSwordGlow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HealingSlashSwordGlow;
            char m_HealingSlashSwordGlow[0xe0]; // 0x17d8            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x18b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDamageTarget; // 0x1998            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelAbilityHealingSlashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelAbilityHealingSlashVData) == 0x19a8);
    };
};
