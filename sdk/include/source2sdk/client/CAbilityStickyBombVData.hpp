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
        // Size: 0x1740
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityStickyBombVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_BombAttachedModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_BombAttachedModifier;
            char m_BombAttachedModifier[0x10]; // 0x1620            
            // m_KillCheckModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_KillCheckModifier;
            char m_KillCheckModifier[0x10]; // 0x1630            
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastBombParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastBombParticle;
            char m_CastBombParticle[0xe0]; // 0x1640            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flPostRangeGravityScale; // 0x1720            
            float m_flAllyCollideRadius; // 0x1724            
            float m_flBombDragStartRange; // 0x1728            
            float m_flBombDragStartValue; // 0x172c            
            float m_flBombDragEndValue; // 0x1730            
            float m_flAllyTargetRangeMult; // 0x1734            
            float m_flHookTargetOnlyWindow; // 0x1738            
            uint8_t _pad173c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityStickyBombVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityStickyBombVData) == 0x1740);
    };
};
