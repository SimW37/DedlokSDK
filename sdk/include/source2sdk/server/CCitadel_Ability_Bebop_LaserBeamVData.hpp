#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x19a0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeamVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x15c8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle;
        char m_ChargeParticle[0xe0]; // 0x15d8        
        // metadata: MPropertyStartGroup "GamePlay"
        float m_flCancelCooldown; // 0x16b8        
        [[maybe_unused]] std::uint8_t pad_0x16bc[0x4]; // 0x16bc
        // metadata: MPropertyStartGroup "Visuals"
        // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
        char m_BeamParticle[0xe0]; // 0x16c0        
        // m_BeamParticleLocal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticleLocal;
        char m_BeamParticleLocal[0xe0]; // 0x17a0        
        // m_BeamHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamHitParticle;
        char m_BeamHitParticle[0xe0]; // 0x1880        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strLaserStartSound; // 0x1960        
        CSoundEventName m_strLaserEndSound; // 0x1970        
        CSoundEventName m_strLaserLoopSound; // 0x1980        
        CSoundEventName m_strLaserHitSound; // 0x1990        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeamVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeamVData) == 0x19a0);
};
