#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
    // Size: 0x798
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_HookTargetVData : public client::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "GamePlay"
        // metadata: MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
        float m_flApproachingWhooshAnticipationTime; // 0x658        
        float m_flCloseEnoughDistance; // 0x65c        
        float m_flTossUpSpeed; // 0x660        
        float m_flReturnDelay; // 0x664        
        float m_flReturnDelayAlly; // 0x668        
        float m_flReturnSpeed; // 0x66c        
        float m_flReturnSpeedNonHero; // 0x670        
        float m_flReturnPositionForwardOffset; // 0x674        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SlowModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier;
        char m_SlowModifier[0x10]; // 0x678        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
        char m_HookRetrieveParticle[0xe0]; // 0x688        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strRetractSound; // 0x768        
        CSoundEventName m_strRetractSoundEnd; // 0x778        
        CSoundEventName m_strApproachingWhooshSound; // 0x788        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HookTargetVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_HookTargetVData) == 0x798);
};
