#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"

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
        // Size: 0xba0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_WebWall : public source2sdk::server::CCitadelProjectile
        {
        public:
            bool bHasDetonatedOnTarget; // 0x858            
            uint8_t _pad0859[0x3]; // 0x859
            source2sdk::client::ParticleIndex_t m_nWebWallFxIndex; // 0x85c            
            uint8_t _pad0860[0x10]; // 0x860
            Vector m_vecCastPosition; // 0x870            
            Vector m_vecCastPositionNormal; // 0x87c            
            Vector m_vecEndPosition; // 0x888            
            Vector m_vecEndPositionNormal; // 0x894            
            uint8_t _pad08a0[0x300];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_WebWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_WebWall) == 0xba0);
    };
};
