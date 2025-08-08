#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
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
        // Size: 0x1820
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityCardTossVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x1620            
            // m_SummonedCard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonedCard;
            char m_SummonedCard[0xe0]; // 0x1700            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strCardTossSound; // 0x17e0            
            CSoundEventName m_strCardSummonSound; // 0x17f0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_SlowModifier;
            char m_SlowModifier[0x10]; // 0x1800            
            // metadata: MPropertyStartGroup "+Card Toss Properties"
            float m_flSummonedCardStartSideOffset; // 0x1810            
            float m_flSummonedCardSideOffsetStep; // 0x1814            
            float m_flSummonedCardForwardOffset; // 0x1818            
            float m_flSummonedCardVerticalOffset; // 0x181c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityCardTossVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityCardTossVData) == 0x1820);
    };
};
