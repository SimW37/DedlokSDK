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
    // Size: 0x16d8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_Magician_AnimalHexAreaVData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_HexAreaModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_HexAreaModifier;
        char m_HexAreaModifier[0x10]; // 0x15c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_TargetWarningSound; // 0x15d8        
        CSoundEventName m_ProjectileHitConfirm; // 0x15e8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_AreaWarningEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AreaWarningEffect;
        char m_AreaWarningEffect[0xe0]; // 0x15f8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Magician_AnimalHexAreaVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Magician_AnimalHexAreaVData) == 0x16d8);
};
