#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x19c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Bebop_LaserBeamVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_RestrictionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_RestrictionModifier;
        char m_RestrictionModifier[0x10]; // 0x15f0        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ChargeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChargeParticle;
        char m_ChargeParticle[0xe0]; // 0x1600        
        // metadata: MPropertyStartGroup "GamePlay"
        float m_flCancelCooldown; // 0x16e0        
        [[maybe_unused]] std::uint8_t pad_0x16e4[0x4]; // 0x16e4
        // metadata: MPropertyStartGroup "Visuals"
        // m_BeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticle;
        char m_BeamParticle[0xe0]; // 0x16e8        
        // m_BeamParticleLocal has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamParticleLocal;
        char m_BeamParticleLocal[0xe0]; // 0x17c8        
        // m_BeamHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BeamHitParticle;
        char m_BeamHitParticle[0xe0]; // 0x18a8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strLaserStartSound; // 0x1988        
        CSoundEventName m_strLaserEndSound; // 0x1998        
        CSoundEventName m_strLaserLoopSound; // 0x19a8        
        CSoundEventName m_strLaserHitSound; // 0x19b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bebop_LaserBeamVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bebop_LaserBeamVData) == 0x19c8);
};
