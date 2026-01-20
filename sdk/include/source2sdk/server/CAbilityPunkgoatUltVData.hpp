#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Size: 0x19b8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPunkgoatUltVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DiminishingSlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_DiminishingSlowModifier;
            char m_DiminishingSlowModifier[0x10]; // 0x1700            
            // m_FireRateModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_FireRateModifier;
            char m_FireRateModifier[0x10]; // 0x1710            
            // m_VulnerableModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_VulnerableModifier;
            char m_VulnerableModifier[0x10]; // 0x1720            
            // m_GroundAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_GroundAuraModifier;
            char m_GroundAuraModifier[0x10]; // 0x1730            
            // m_PullToGroundModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PullToGroundModifier;
            char m_PullToGroundModifier[0x10]; // 0x1740            
            // metadata: MPropertyStartGroup "Visuals"
            // m_BatChargingEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BatChargingEffect;
            char m_BatChargingEffect[0xe0]; // 0x1750            
            // m_GroundParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GroundParticle;
            char m_GroundParticle[0xe0]; // 0x1830            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHangSound; // 0x1910            
            CSoundEventName m_strDiveSound; // 0x1920            
            // metadata: MPropertyStartGroup "Gameplay"
            CPiecewiseCurve m_TimeToReachGroundByHeight; // 0x1930            
            CPiecewiseCurve m_GoUpSpeedCurve; // 0x1970            
            float m_flGoUpDuration; // 0x19b0            
            float m_flGoDownVelocityDampRate; // 0x19b4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPunkgoatUltVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityPunkgoatUltVData) == 0x19b8);
    };
};
