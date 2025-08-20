#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x218
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Hideout_BallVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            float m_flModelScale; // 0x28            
            float m_flCollisionRadius; // 0x2c            
            float m_flForceMult; // 0x30            
            float m_flForceMultPlayer; // 0x34            
            float m_flForceMultBullet; // 0x38            
            float m_flMaxDistanceAway; // 0x3c            
            float m_flDamagePositionOffset; // 0x40            
            uint8_t _pad0044[0x4]; // 0x44
            CSoundEventName m_strKickSoundName; // 0x48            
            // metadata: MPropertyStartGroup "Visuals"
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x58            
            // m_AmbientParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AmbientParticle;
            char m_AmbientParticle[0xe0]; // 0x138            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Hideout_BallVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Hideout_BallVData) == 0x218);
    };
};
