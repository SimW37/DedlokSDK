#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"
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
        // Standard-layout class: true
        // Size: 0x1e0
        // 
        // static metadata: MModelGameData
        // static metadata: MFgdHelper
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct CitadelTeamRelativeParticleSettings_t
        {
        public:
            // m_strFriendlyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strFriendlyParticle;
            char m_strFriendlyParticle[0xe0]; // 0x0            
            // m_strEnemyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strEnemyParticle;
            char m_strEnemyParticle[0xe0]; // 0xe0            
            bool m_bUseConfig; // 0x1c0            
            uint8_t _pad01c1[0x7]; // 0x1c1
            // metadata: MPropertySuppressExpr "!m_bUseConfig"
            CUtlString m_strConfigName; // 0x1c8            
            // metadata: MPropertySuppressExpr "m_bUseConfig"
            source2sdk::animationsystem::ParticleAttachment_t m_AttachmentType; // 0x1d0            
            uint8_t _pad01d4[0x4]; // 0x1d4
            // metadata: MPropertySuppressExpr "m_bUseConfig || ( m_AttachmentType != PATTACH_POINT && m_AttachmentType != PATTACH_POINT_FOLLOW )"
            // metadata: MPropertyCustomFGDType "model_attachment"
            CUtlString m_strAttachmentName; // 0x1d8            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_strFriendlyParticle) == 0x0);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_strEnemyParticle) == 0xe0);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_bUseConfig) == 0x1c0);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_strConfigName) == 0x1c8);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_AttachmentType) == 0x1d0);
        static_assert(offsetof(source2sdk::client::CitadelTeamRelativeParticleSettings_t, m_strAttachmentName) == 0x1d8);
        
        static_assert(sizeof(source2sdk::client::CitadelTeamRelativeParticleSettings_t) == 0x1e0);
    };
};
