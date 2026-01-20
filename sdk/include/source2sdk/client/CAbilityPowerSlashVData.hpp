#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelYamatoBaseVData.hpp"
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
        // Size: 0x1c20
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPowerSlashVData : public source2sdk::client::CCitadelYamatoBaseVData
        {
        public:
            float m_flAirDrag; // 0x1708            
            float m_flMaxPowerPadding; // 0x170c            
            float m_flEffectGroundTrace; // 0x1710            
            float m_flWhizbyMaxRange; // 0x1714            
            float m_flStartPosTestCapsuleLength; // 0x1718            
            float m_flCoverLOSBackDist; // 0x171c            
            // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
            Vector m_vecLongEffectOffset; // 0x1720            
            uint8_t _pad172c[0x4]; // 0x172c
            // metadata: MPropertyStartGroup "Visuals"
            // m_PowerSlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle;
            char m_PowerSlashParticle[0xe0]; // 0x1730            
            // m_PowerSlashFullParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle;
            char m_PowerSlashFullParticle[0xe0]; // 0x1810            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x18f0            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x19d0            
            // m_PowerUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle;
            char m_PowerUpParticle[0xe0]; // 0x1ab0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strStartSound; // 0x1b90            
            CSoundEventName m_strHitConfirmSound; // 0x1ba0            
            CSoundEventName m_strPowerUp1Sounds; // 0x1bb0            
            CSoundEventName m_strPowerUp2Sounds; // 0x1bc0            
            CSoundEventName m_strPowerUp3Sounds; // 0x1bd0            
            CSoundEventName m_strWhizbySound; // 0x1be0            
            CSoundEventName m_strSlashSound; // 0x1bf0            
            CSoundEventName m_strSlashFullSound; // 0x1c00            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1c10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPowerSlashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityPowerSlashVData) == 0x1c20);
    };
};
