#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xbf0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_BatSwarmProjectile : public server::CCitadelProjectile
    {
    public:
        Vector m_vecTargetVelocity; // 0x880        
        Vector m_vecLastVelocity; // 0x88c        
        entity2::GameTime_t m_flNextTargetSearchTime; // 0x898        
        entity2::GameTime_t m_flNextTargetClearTime; // 0x89c        
        [[maybe_unused]] std::uint8_t pad_0x8a0[0x350];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_BatSwarmProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_BatSwarmProjectile) == 0xbf0);
};
