#pragma once
#include "source2sdk/client/CCitadelAnimatingModelEntity.hpp"
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
    // Size: 0xcd8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flUpFactor"
    // static metadata: MNetworkVarNames "float m_flBounceVelocity"
    // static metadata: MNetworkVarNames "GameTime_t m_tDeactivationTime"
    #pragma pack(push, 1)
    class C_Citadel_Bounce_Pad : public client::CCitadelAnimatingModelEntity
    {
    public:
        // metadata: MNetworkEnable
        float m_flUpFactor; // 0xcb8        
        // metadata: MNetworkEnable
        float m_flBounceVelocity; // 0xcbc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDeactivationTime; // 0xcc0        
        bool m_bDeactivated; // 0xcc4        
        [[maybe_unused]] std::uint8_t pad_0xcc5[0x3]; // 0xcc5
        float m_flBarrelBounceVelocity; // 0xcc8        
        float m_flBarrelUpFactor; // 0xccc        
        bool m_bSpeedOnLand; // 0xcd0        
        bool m_bHasBouncedPlayerBefore; // 0xcd1        
        [[maybe_unused]] std::uint8_t pad_0xcd2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_Bounce_Pad because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_Bounce_Pad) == 0xcd8);
};
