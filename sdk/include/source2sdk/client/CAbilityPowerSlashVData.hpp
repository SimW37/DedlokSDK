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
        // Size: 0x1b08
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPowerSlashVData : public source2sdk::client::CCitadelYamatoBaseVData
        {
        public:
            float m_flAirDrag; // 0x15f0            
            float m_flMaxPowerPadding; // 0x15f4            
            float m_flEffectGroundTrace; // 0x15f8            
            float m_flWhizbyMaxRange; // 0x15fc            
            float m_flStartPosTestCapsuleLength; // 0x1600            
            float m_flCoverLOSBackDist; // 0x1604            
            // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
            Vector m_vecLongEffectOffset; // 0x1608            
            uint8_t _pad1614[0x4]; // 0x1614
            // metadata: MPropertyStartGroup "Visuals"
            // m_PowerSlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle;
            char m_PowerSlashParticle[0xe0]; // 0x1618            
            // m_PowerSlashFullParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle;
            char m_PowerSlashFullParticle[0xe0]; // 0x16f8            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x17d8            
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x18b8            
            // m_PowerUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle;
            char m_PowerUpParticle[0xe0]; // 0x1998            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strStartSound; // 0x1a78            
            CSoundEventName m_strHitConfirmSound; // 0x1a88            
            CSoundEventName m_strPowerUp1Sounds; // 0x1a98            
            CSoundEventName m_strPowerUp2Sounds; // 0x1aa8            
            CSoundEventName m_strPowerUp3Sounds; // 0x1ab8            
            CSoundEventName m_strWhizbySound; // 0x1ac8            
            CSoundEventName m_strSlashSound; // 0x1ad8            
            CSoundEventName m_strSlashFullSound; // 0x1ae8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1af8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPowerSlashVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityPowerSlashVData) == 0x1b08);
    };
};
