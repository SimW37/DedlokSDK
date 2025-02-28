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
    // Size: 0x16c8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityGarbageVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_GarbageAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_GarbageAuraModifier;
        char m_GarbageAuraModifier[0x10]; // 0x15c8        
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x15d8        
        // metadata: MPropertyStartGroup "+Vacuum Properties"
        float m_flAirSpeedMax; // 0x16b8        
        float m_flFallSpeedMax; // 0x16bc        
        float m_flAirDrag; // 0x16c0        
        float m_flMaxMovespeed; // 0x16c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityGarbageVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityGarbageVData) == 0x16c8);
};
