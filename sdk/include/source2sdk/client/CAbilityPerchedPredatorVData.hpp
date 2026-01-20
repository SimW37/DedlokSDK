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
        // Size: 0x19c8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPerchedPredatorVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeBaseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeBaseParticle;
            char m_ExplodeBaseParticle[0xe0]; // 0x1700            
            // m_ExplodeFriendlyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeFriendlyParticle;
            char m_ExplodeFriendlyParticle[0xe0]; // 0x17e0            
            // m_ExplodeEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeEnemyParticle;
            char m_ExplodeEnemyParticle[0xe0]; // 0x18c0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExplodeSound; // 0x19a0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ModifierDragEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ModifierDragEnemy;
            char m_ModifierDragEnemy[0x10]; // 0x19b0            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flOnHitDetonateTimer; // 0x19c0            
            float m_flTraceTravelRadius; // 0x19c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPerchedPredatorVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityPerchedPredatorVData) == 0x19c8);
    };
};
