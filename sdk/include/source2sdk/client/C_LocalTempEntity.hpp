#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0xd58
    // Has VTable
    #pragma pack(push, 1)
    class C_LocalTempEntity : public client::CBaseAnimGraph
    {
    public:
        int32_t flags; // 0xcb0        
        entity2::GameTime_t die; // 0xcb4        
        float m_flFrameMax; // 0xcb8        
        float x; // 0xcbc        
        float y; // 0xcc0        
        float fadeSpeed; // 0xcc4        
        float bounceFactor; // 0xcc8        
        int32_t hitSound; // 0xccc        
        int32_t priority; // 0xcd0        
        Vector tentOffset; // 0xcd4        
        QAngle m_vecTempEntAngVelocity; // 0xce0        
        int32_t tempent_renderamt; // 0xcec        
        Vector m_vecNormal; // 0xcf0        
        float m_flSpriteScale; // 0xcfc        
        int32_t m_nFlickerFrame; // 0xd00        
        float m_flFrameRate; // 0xd04        
        float m_flFrame; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd0c[0x4]; // 0xd0c
        char* m_pszImpactEffect; // 0xd10        
        char* m_pszParticleEffect; // 0xd18        
        bool m_bParticleCollision; // 0xd20        
        [[maybe_unused]] std::uint8_t pad_0xd21[0x3]; // 0xd21
        int32_t m_iLastCollisionFrame; // 0xd24        
        Vector m_vLastCollisionOrigin; // 0xd28        
        Vector m_vecTempEntVelocity; // 0xd34        
        Vector m_vecPrevAbsOrigin; // 0xd40        
        Vector m_vecTempEntAcceleration; // 0xd4c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_LocalTempEntity because it is not a standard-layout class
    static_assert(sizeof(C_LocalTempEntity) == 0xd58);
};
