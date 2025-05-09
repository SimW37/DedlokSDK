#pragma once
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
    // Size: 0xa08
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelBoomerangProjectile : public server::CCitadelProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x880[0x180]; // 0x880
        bool m_bReturning; // 0xa00        
        [[maybe_unused]] std::uint8_t pad_0xa01[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelBoomerangProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelBoomerangProjectile) == 0xa08);
};
