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
    // Size: 0x17b8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityCardTossVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x15c8        
        // m_SummonedCard has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonedCard;
        char m_SummonedCard[0xe0]; // 0x16a8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strCardTossSound; // 0x1788        
        CSoundEventName m_strCardSummonSound; // 0x1798        
        // metadata: MPropertyStartGroup "+Card Toss Properties"
        float m_flSummonedCardStartSideOffset; // 0x17a8        
        float m_flSummonedCardSideOffsetStep; // 0x17ac        
        float m_flSummonedCardForwardOffset; // 0x17b0        
        float m_flSummonedCardVerticalOffset; // 0x17b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityCardTossVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityCardTossVData) == 0x17b8);
};
