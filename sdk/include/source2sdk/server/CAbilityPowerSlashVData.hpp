#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CCitadelYamatoBaseVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1b10
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityPowerSlashVData : public server::CCitadelYamatoBaseVData
    {
    public:
        float m_flAirDrag; // 0x15f8        
        float m_flMaxPowerPadding; // 0x15fc        
        float m_flEffectGroundTrace; // 0x1600        
        float m_flWhizbyMaxRange; // 0x1604        
        float m_flStartPosTestCapsuleLength; // 0x1608        
        float m_flCoverLOSBackDist; // 0x160c        
        // metadata: MPropertyDescription "Visual offset for the origin of the long-slash particle effect"
        Vector m_vecLongEffectOffset; // 0x1610        
        [[maybe_unused]] std::uint8_t pad_0x161c[0x4]; // 0x161c
        // metadata: MPropertyStartGroup "Visuals"
        // m_PowerSlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashParticle;
        char m_PowerSlashParticle[0xe0]; // 0x1620        
        // m_PowerSlashFullParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerSlashFullParticle;
        char m_PowerSlashFullParticle[0xe0]; // 0x1700        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x17e0        
        // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
        char m_CastParticle[0xe0]; // 0x18c0        
        // m_PowerUpParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PowerUpParticle;
        char m_PowerUpParticle[0xe0]; // 0x19a0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strStartSound; // 0x1a80        
        CSoundEventName m_strHitConfirmSound; // 0x1a90        
        CSoundEventName m_strPowerUp1Sounds; // 0x1aa0        
        CSoundEventName m_strPowerUp2Sounds; // 0x1ab0        
        CSoundEventName m_strPowerUp3Sounds; // 0x1ac0        
        CSoundEventName m_strWhizbySound; // 0x1ad0        
        CSoundEventName m_strSlashSound; // 0x1ae0        
        CSoundEventName m_strSlashFullSound; // 0x1af0        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CBaseModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x1b00        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityPowerSlashVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityPowerSlashVData) == 0x1b10);
};
