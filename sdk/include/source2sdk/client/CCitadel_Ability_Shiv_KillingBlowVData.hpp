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
        // Size: 0x19c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Shiv_KillingBlowVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_LeapModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LeapModifier;
            char m_LeapModifier[0x10]; // 0x15e8            
            // m_ActiveBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ActiveBuff;
            char m_ActiveBuff[0x10]; // 0x15f8            
            // m_KillableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_KillableModifier;
            char m_KillableModifier[0x10]; // 0x1608            
            // metadata: MPropertyStartGroup "Visuals"
            // m_AttackParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AttackParticle;
            char m_AttackParticle[0xe0]; // 0x1618            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x16f8            
            // m_FlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlashParticle;
            char m_FlashParticle[0xe0]; // 0x17d8            
            // m_KillingBlowCastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_KillingBlowCastParticle;
            char m_KillingBlowCastParticle[0xe0]; // 0x18b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_ChargeUpSound; // 0x1998            
            CSoundEventName m_OnKillSound; // 0x19a8            
            // metadata: MPropertyStartGroup "+Killing Blow Params"
            float m_flPreArrivalAttackStartTime; // 0x19b8            
            float m_flKillableGlowRange; // 0x19bc            
            float m_flGlowMinTime; // 0x19c0            
            uint8_t _pad19c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Shiv_KillingBlowVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Shiv_KillingBlowVData) == 0x19c8);
    };
};
