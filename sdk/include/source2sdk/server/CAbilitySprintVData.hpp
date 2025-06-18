#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x16e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilitySprintVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_SprintParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprintParticle;
            char m_SprintParticle[0xe0]; // 0x15e8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSprintSound; // 0x16c8            
            // metadata: MPropertyStartGroup "+Sprint Properties"
            // metadata: MPropertyDescription "How longer after taking or dealing damage are we considered to be in combat?"
            float m_flInCombatWithHeroDuration; // 0x16d8            
            float m_flInCombatWithNonHeroDuration; // 0x16dc            
            float m_flSprintAccMS; // 0x16e0            
            uint8_t _pad16e4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilitySprintVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilitySprintVData) == 0x16e8);
    };
};
