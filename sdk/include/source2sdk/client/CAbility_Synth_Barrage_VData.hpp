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
    // Size: 0x18b0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Synth_Barrage_VData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BarrageCasterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BarrageCasterModifier;
        char m_BarrageCasterModifier[0x10]; // 0x15c8        
        // m_AmpModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_AmpModifier;
        char m_AmpModifier[0x10]; // 0x15d8        
        // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier;
        char m_DebuffModifier[0x10]; // 0x15e8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ShootParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ShootParticle;
        char m_ShootParticle[0xe0]; // 0x15f8        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x16d8        
        // m_ChannelParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle;
        char m_ChannelParticle[0xe0]; // 0x17b8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strProjectileLaunchSound; // 0x1898        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flAttackInterval; // 0x18a8        
        [[maybe_unused]] std::uint8_t pad_0x18ac[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Barrage_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Barrage_VData) == 0x18b0);
};
