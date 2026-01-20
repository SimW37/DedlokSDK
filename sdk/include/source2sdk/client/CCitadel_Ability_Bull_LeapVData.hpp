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
        // Size: 0x1c48
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Bull_LeapVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            CPiecewiseCurve m_CrashSpeedScaleCurve; // 0x1700            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ActiveModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ActiveModifier;
            char m_ActiveModifier[0x10]; // 0x1740            
            // m_BoostModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BoostModifier;
            char m_BoostModifier[0x10]; // 0x1750            
            // m_CrashModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_CrashModifier;
            char m_CrashModifier[0x10]; // 0x1760            
            // m_ImmunityModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ImmunityModifier;
            char m_ImmunityModifier[0x10]; // 0x1770            
            // m_LandingBonusesModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_LandingBonusesModifier;
            char m_LandingBonusesModifier[0x10]; // 0x1780            
            // metadata: MPropertyStartGroup "Visuals"
            // m_TakeOffParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TakeOffParticle;
            char m_TakeOffParticle[0xe0]; // 0x1790            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x1870            
            // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
            char m_AoEPreviewParticle[0xe0]; // 0x1950            
            // m_HoverParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HoverParticle;
            char m_HoverParticle[0xe0]; // 0x1a30            
            // m_DivingPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DivingPreviewParticle;
            char m_DivingPreviewParticle[0xe0]; // 0x1b10            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCrashingSound; // 0x1bf0            
            CSoundEventName m_strImpactSound; // 0x1c00            
            // metadata: MPropertyStartGroup "GamePlay"
            float m_flStartupTime; // 0x1c10            
            float m_flForwardBoostSpeed; // 0x1c14            
            float m_flUpBoostSpeed; // 0x1c18            
            float m_flBoostTurnRate; // 0x1c1c            
            float m_flHoverTime; // 0x1c20            
            float m_flMinAimAngle; // 0x1c24            
            float m_flBoostGain; // 0x1c28            
            float m_flBoostTime; // 0x1c2c            
            float m_flLandingTime; // 0x1c30            
            float m_flCrashSpeed; // 0x1c34            
            float m_flCrashBraceAnimTime; // 0x1c38            
            float m_flHoverInputSpeedMax; // 0x1c3c            
            float m_flHoverInputAcceleration; // 0x1c40            
            float m_flHoverSpeedDecay; // 0x1c44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bull_LeapVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Bull_LeapVData) == 0x1c48);
    };
};
