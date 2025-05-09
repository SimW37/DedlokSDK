#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flUpFactor"
    // static metadata: MNetworkVarNames "float m_flBounceVelocity"
    // static metadata: MNetworkVarNames "GameTime_t m_tDeactivationTime"
    #pragma pack(push, 1)
    class CCitadel_Bounce_Pad : public server::CCitadelAnimatingModelEntity
    {
    public:
        // m_hAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbility;
        char m_hAbility[0x4]; // 0xc38        
        // metadata: MNetworkEnable
        float m_flUpFactor; // 0xc3c        
        // metadata: MNetworkEnable
        float m_flBounceVelocity; // 0xc40        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_tDeactivationTime; // 0xc44        
        bool m_bDeactivated; // 0xc48        
        [[maybe_unused]] std::uint8_t pad_0xc49[0x3]; // 0xc49
        float m_flBarrelBounceVelocity; // 0xc4c        
        float m_flBarrelUpFactor; // 0xc50        
        bool m_bSpeedOnLand; // 0xc54        
        bool m_bHasBouncedPlayerBefore; // 0xc55        
        [[maybe_unused]] std::uint8_t pad_0xc56[0xa];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Bounce_Pad because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Bounce_Pad) == 0xc60);
};
