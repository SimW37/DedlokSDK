#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x8e8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_HookTargetVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "GamePlay"
            // metadata: MPropertyDescription "How soon before the target arrives at Bebop to play the approaching whoosh sound"
            float m_flApproachingWhooshAnticipationTime; // 0x760            
            float m_flCloseEnoughDistance; // 0x764            
            float m_flTossUpSpeed; // 0x768            
            uint8_t _pad076c[0x4]; // 0x76c
            CPiecewiseCurve m_PullSpeedScaleCurve; // 0x770            
            float m_flReturnSpeed; // 0x7b0            
            float m_flReturnPositionForwardOffset; // 0x7b4            
            float m_flReturnSpeedFail; // 0x7b8            
            float m_flReturnStuckTime; // 0x7bc            
            float m_flFailSafeMinTime; // 0x7c0            
            float m_flFailSafeDurationMult; // 0x7c4            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_RestrictionModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_RestrictionModifier;
            char m_RestrictionModifier[0x10]; // 0x7c8            
            // metadata: MPropertyStartGroup "Visuals"
            // m_HookRetrieveParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HookRetrieveParticle;
            char m_HookRetrieveParticle[0xe0]; // 0x7d8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strRetractSound; // 0x8b8            
            CSoundEventName m_strRetractSoundEnd; // 0x8c8            
            CSoundEventName m_strApproachingWhooshSound; // 0x8d8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_HookTargetVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_HookTargetVData) == 0x8e8);
    };
};
