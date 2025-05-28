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
        // Size: 0xa48
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_WebWall : public source2sdk::server::CCitadelProjectile
        {
        public:
            bool bHasDetonatedOnTarget; // 0x880            
            uint8_t _pad0881[0x3]; // 0x881
            source2sdk::client::ParticleIndex_t m_nWebWallFxIndex; // 0x884            
            uint8_t _pad0888[0x10]; // 0x888
            Vector m_vecCastPosition; // 0x898            
            Vector m_vecCastPositionNormal; // 0x8a4            
            Vector m_vecEndPosition; // 0x8b0            
            Vector m_vecEndPositionNormal; // 0x8bc            
            uint8_t _pad08c8[0x180];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_WebWall because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_WebWall) == 0xa48);
    };
};
