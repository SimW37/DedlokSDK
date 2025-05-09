#pragma once
#include "source2sdk/client/C_CitadelProjectile.hpp"
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
    // Size: 0xca8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flWidth"
    // static metadata: MNetworkVarNames "GameTime_t m_tDieTime"
    #pragma pack(push, 1)
    class C_Projectile_KnightCharge_Projectile : public client::C_CitadelProjectile
    {
    public:
        // metadata: MNetworkEnable
        float m_flWidth; // 0xaa0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDieTime; // 0xaa4        
        [[maybe_unused]] std::uint8_t pad_0xaa8[0x200];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Projectile_KnightCharge_Projectile because it is not a standard-layout class
    static_assert(sizeof(C_Projectile_KnightCharge_Projectile) == 0xca8);
};
