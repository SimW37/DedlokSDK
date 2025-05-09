#pragma once
#include "source2sdk/client/C_CitadelProjectile.hpp"
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
    // Size: 0xde0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_BatSwarmProjectile : public client::C_CitadelProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaa0[0x340];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Projectile_BatSwarmProjectile) == 0xde0);
};
