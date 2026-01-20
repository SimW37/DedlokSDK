#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1ad0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Tengu_StoneFormVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastParticle;
            char m_CastParticle[0xe0]; // 0x1700            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x17e0            
            // m_StoneFormParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_StoneFormParticle;
            char m_StoneFormParticle[0xe0]; // 0x18c0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_CastTargetSound; // 0x19a0            
            CSoundEventName m_strImpactSound; // 0x19b0            
            CSoundEventName m_strFallCollideImpactSound; // 0x19c0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_DragModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CBaseModifier> m_DragModifier;
            char m_DragModifier[0x10]; // 0x19d0            
            // metadata: MPropertyDescription "Model"
            // m_strTrueFormModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_strTrueFormModel;
            char m_strTrueFormModel[0xe0]; // 0x19e0            
            // metadata: MPropertyStartGroup "+Stone Form Params"
            float m_flLandHoldTime; // 0x1ac0            
            float m_flRisingTime; // 0x1ac4            
            float m_flCollideRadius; // 0x1ac8            
            float m_flGroundDetectionFailsafeDelay; // 0x1acc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Tengu_StoneFormVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Tengu_StoneFormVData) == 0x1ad0);
    };
};
