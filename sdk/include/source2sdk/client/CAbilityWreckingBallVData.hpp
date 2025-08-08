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
        // Size: 0x18e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityWreckingBallVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_SummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonParticle;
            char m_SummonParticle[0xe0]; // 0x1620            
            // m_SummonReadyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonReadyParticle;
            char m_SummonReadyParticle[0xe0]; // 0x1700            
            CUtlString m_SummonParticleAttachment; // 0x17e0            
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x17e8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_AutoThrowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_AutoThrowModifier;
            char m_AutoThrowModifier[0x10]; // 0x18c8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_HoldingBallLoop; // 0x18d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityWreckingBallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityWreckingBallVData) == 0x18e8);
    };
};
