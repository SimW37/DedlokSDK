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
    // Size: 0x1710
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityStickyBombVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_BombAttachedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BombAttachedModifier;
        char m_BombAttachedModifier[0x10]; // 0x15f0        
        // m_KillCheckModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_KillCheckModifier;
        char m_KillCheckModifier[0x10]; // 0x1600        
        // metadata: MPropertyStartGroup "Visuals"
        // m_CastBombParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastBombParticle;
        char m_CastBombParticle[0xe0]; // 0x1610        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flPostRangeGravityScale; // 0x16f0        
        float m_flAllyCollideRadius; // 0x16f4        
        float m_flBombDragStartRange; // 0x16f8        
        float m_flBombDragStartValue; // 0x16fc        
        float m_flBombDragEndValue; // 0x1700        
        float m_flAllyTargetRangeMult; // 0x1704        
        float m_flHookTargetOnlyWindow; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityStickyBombVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityStickyBombVData) == 0x1710);
};
