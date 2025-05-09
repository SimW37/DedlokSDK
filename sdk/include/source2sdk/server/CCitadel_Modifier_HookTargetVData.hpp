#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"
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
    // Size: 0x7e0
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_HookTargetVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "GamePlay"
        // metadata: MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
        float m_flApproachingWhooshAnticipationTime; // 0x660        
        float m_flCloseEnoughDistance; // 0x664        
        float m_flTossUpSpeed; // 0x668        
        [[maybe_unused]] std::uint8_t pad_0x66c[0x4]; // 0x66c
        CPiecewiseCurve m_PullSpeedScaleCurve; // 0x670        
        float m_flReturnSpeed; // 0x6b0        
        float m_flReturnPositionForwardOffset; // 0x6b4        
        float m_flReturnSpeedFail; // 0x6b8        
        float m_flReturnStuckTime; // 0x6bc        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_RestrictionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_RestrictionModifier;
        char m_RestrictionModifier[0x10]; // 0x6c0        
        // metadata: MPropertyStartGroup "Visuals"
        // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
        char m_HookRetrieveParticle[0xe0]; // 0x6d0        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strRetractSound; // 0x7b0        
        CSoundEventName m_strRetractSoundEnd; // 0x7c0        
        CSoundEventName m_strApproachingWhooshSound; // 0x7d0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HookTargetVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_HookTargetVData) == 0x7e0);
};
