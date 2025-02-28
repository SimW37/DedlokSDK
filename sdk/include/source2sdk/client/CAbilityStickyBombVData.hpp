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
    // Size: 0x16e8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityStickyBombVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_BombAttachedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_BombAttachedModifier;
        char m_BombAttachedModifier[0x10]; // 0x15c8        
        // m_KillCheckModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_KillCheckModifier;
        char m_KillCheckModifier[0x10]; // 0x15d8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_CastBombParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastBombParticle;
        char m_CastBombParticle[0xe0]; // 0x15e8        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flPostRangeGravityScale; // 0x16c8        
        float m_flAllyCollideRadius; // 0x16cc        
        float m_flBombDragStartRange; // 0x16d0        
        float m_flBombDragStartValue; // 0x16d4        
        float m_flBombDragEndValue; // 0x16d8        
        float m_flAllyTargetRangeMult; // 0x16dc        
        float m_flHookTargetOnlyWindow; // 0x16e0        
        [[maybe_unused]] std::uint8_t pad_0x16e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityStickyBombVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityStickyBombVData) == 0x16e8);
};
