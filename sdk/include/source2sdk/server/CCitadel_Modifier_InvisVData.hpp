#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
        // Size: 0x928
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_InvisVData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_InvisLoopParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisLoopParticle;
            char m_InvisLoopParticle[0xe0]; // 0x660            
            // m_InvisDetectRadiusParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisDetectRadiusParticle;
            char m_InvisDetectRadiusParticle[0xe0]; // 0x740            
            // m_InvisRevealedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_InvisRevealedParticle;
            char m_InvisRevealedParticle[0xe0]; // 0x820            
            float m_flDesatFactor; // 0x900            
            uint8_t _pad0904[0x4]; // 0x904
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strInvisRevealedSound; // 0x908            
            // metadata: MPropertyStartGroup "Behavior"
            bool m_bFadeInsteadOfRemoveOnBulletFire; // 0x918            
            bool m_bFadeInsteadOfRemoveOnAbilityUse; // 0x919            
            bool m_bBreakOnItemUse; // 0x91a            
            // metadata: MPropertyDescription "Fade from hidden to fully visible as invis is about to expire. Does not work with Aura applied invis, since that has no duration."
            bool m_bFadeToVisibleAtEndOfDuration; // 0x91b            
            float m_flMinCloak; // 0x91c            
            float m_flMaxCloak; // 0x920            
            uint8_t _pad0924[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_InvisVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_InvisVData) == 0x928);
    };
};
