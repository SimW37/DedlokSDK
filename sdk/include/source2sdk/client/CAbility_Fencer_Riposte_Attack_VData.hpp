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
        // Size: 0x1de0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbility_Fencer_Riposte_Attack_VData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_DashImpactEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashImpactEffect;
            char m_DashImpactEffect[0xe0]; // 0x1818            
            // m_DashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashSwingEffect;
            char m_DashSwingEffect[0xe0]; // 0x18f8            
            // m_DashLineEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DashLineEffect;
            char m_DashLineEffect[0xe0]; // 0x19d8            
            // m_SlashSwingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashSwingEffect;
            char m_SlashSwingEffect[0xe0]; // 0x1ab8            
            // m_StackProcParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StackProcParticle;
            char m_StackProcParticle[0xe0]; // 0x1b98            
            // m_RiposteDashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RiposteDashParticle;
            char m_RiposteDashParticle[0xe0]; // 0x1c78            
            // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
            Vector m_vecLongEffectOffset; // 0x1d58            
            float m_vecPlayerLeftOffset; // 0x1d64            
            float m_flAirSpeedMax; // 0x1d68            
            float m_flAirDrag; // 0x1d6c            
            float m_flFallSpeedMax; // 0x1d70            
            float m_flMaxPowerPadding; // 0x1d74            
            float m_flEffectGroundTrace; // 0x1d78            
            float m_flWhizbyMaxRange; // 0x1d7c            
            float m_flStartPosTestCapsuleLength; // 0x1d80            
            float m_flCoverLOSBackDist; // 0x1d84            
            float m_flAttackDuration; // 0x1d88            
            uint8_t _pad1d8c[0x4]; // 0x1d8c
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strDashStart; // 0x1d90            
            CSoundEventName m_strSlashStart; // 0x1da0            
            CSoundEventName m_strSlashImpactSound; // 0x1db0            
            CSoundEventName m_strStunImpactSound; // 0x1dc0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1dd0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Fencer_Riposte_Attack_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbility_Fencer_Riposte_Attack_VData) == 0x1de0);
    };
};
