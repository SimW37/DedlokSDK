#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

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
        // Size: 0xd48
        // Has VTable
        #pragma pack(push, 1)
        class C_LocalTempEntity : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNotSaved
            std::int32_t flags; // 0xca0            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t die; // 0xca4            
            // metadata: MNotSaved
            float m_flFrameMax; // 0xca8            
            // metadata: MNotSaved
            float x; // 0xcac            
            // metadata: MNotSaved
            float y; // 0xcb0            
            // metadata: MNotSaved
            float fadeSpeed; // 0xcb4            
            // metadata: MNotSaved
            float bounceFactor; // 0xcb8            
            // metadata: MNotSaved
            std::int32_t hitSound; // 0xcbc            
            // metadata: MNotSaved
            std::int32_t priority; // 0xcc0            
            // metadata: MNotSaved
            Vector tentOffset; // 0xcc4            
            // metadata: MNotSaved
            QAngle m_vecTempEntAngVelocity; // 0xcd0            
            // metadata: MNotSaved
            std::int32_t tempent_renderamt; // 0xcdc            
            // metadata: MNotSaved
            Vector m_vecNormal; // 0xce0            
            // metadata: MNotSaved
            float m_flSpriteScale; // 0xcec            
            // metadata: MNotSaved
            std::int32_t m_nFlickerFrame; // 0xcf0            
            // metadata: MNotSaved
            float m_flFrameRate; // 0xcf4            
            // metadata: MNotSaved
            float m_flFrame; // 0xcf8            
            uint8_t _pad0cfc[0x4]; // 0xcfc
            // metadata: MNotSaved
            char* m_pszImpactEffect; // 0xd00            
            // metadata: MNotSaved
            char* m_pszParticleEffect; // 0xd08            
            // metadata: MNotSaved
            bool m_bParticleCollision; // 0xd10            
            uint8_t _pad0d11[0x3]; // 0xd11
            // metadata: MNotSaved
            std::int32_t m_iLastCollisionFrame; // 0xd14            
            // metadata: MNotSaved
            Vector m_vLastCollisionOrigin; // 0xd18            
            // metadata: MNotSaved
            Vector m_vecTempEntVelocity; // 0xd24            
            // metadata: MNotSaved
            Vector m_vecPrevAbsOrigin; // 0xd30            
            // metadata: MNotSaved
            Vector m_vecTempEntAcceleration; // 0xd3c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_LocalTempEntity) == 0xd48);
    };
};
