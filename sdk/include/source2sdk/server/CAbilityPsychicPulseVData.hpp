#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
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
        // Size: 0x1800
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityPsychicPulseVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_DebuffModifier;
            char m_DebuffModifier[0x10]; // 0x1700            
            // metadata: MPropertyStartGroup "Visuals"
            // m_PulseParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PulseParticle;
            char m_PulseParticle[0xe0]; // 0x1710            
            // metadata: MPropertyStartGroup "+Psychic Pulse Properties"
            float m_flCastEffectLifetime; // 0x17f0            
            float m_flConeAngle; // 0x17f4            
            float m_flConeHalfWidth; // 0x17f8            
            uint8_t _pad17fc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityPsychicPulseVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityPsychicPulseVData) == 0x1800);
    };
};
