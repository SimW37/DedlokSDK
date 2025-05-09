#pragma once
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
    // Size: 0x16f0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilitySprintVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_SprintParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprintParticle;
        char m_SprintParticle[0xe0]; // 0x15f0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSprintSound; // 0x16d0        
        // metadata: MPropertyStartGroup "+Sprint Properties"
        // metadata: MPropertyDescription "How longer after taking or dealing damage are we considered to be in combat?"
        float m_flInCombatWithHeroDuration; // 0x16e0        
        float m_flInCombatWithNonHeroDuration; // 0x16e4        
        float m_flSprintAccMS; // 0x16e8        
        [[maybe_unused]] std::uint8_t pad_0x16ec[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilitySprintVData because it is not a standard-layout class
    static_assert(sizeof(CAbilitySprintVData) == 0x16f0);
};
