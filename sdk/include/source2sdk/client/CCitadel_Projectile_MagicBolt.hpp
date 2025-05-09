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
    // Size: 0xae8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool bIsCloneProjectile"
    #pragma pack(push, 1)
    class CCitadel_Projectile_MagicBolt : public client::C_CitadelProjectile
    {
    public:
        // metadata: MNetworkEnable
        bool bIsCloneProjectile; // 0xaa0        
        [[maybe_unused]] std::uint8_t pad_0xaa1[0x47];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_MagicBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_MagicBolt) == 0xae8);
};
