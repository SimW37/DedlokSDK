#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

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
        // Size: 0xdb8
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Bookworm_DragonFire : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x200]; // 0xb98
            Vector m_vLaunchPosition; // 0xd98            
            QAngle m_qLaunchAngle; // 0xda4            
            source2sdk::client::ParticleIndex_t m_nCastParticleIndex; // 0xdb0            
            uint8_t _pad0db4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Bookworm_DragonFire because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Bookworm_DragonFire) == 0xdb8);
    };
};
