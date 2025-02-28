#pragma once
#include "source2sdk/client/EFlightState.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd20
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hGrabTarget"
    // static metadata: MNetworkVarNames "EFlightState m_eFlightState"
    // static metadata: MNetworkVarNames "bool m_bIsGrabbing"
    // static metadata: MNetworkVarNames "bool m_bIsHoldingBomb"
    // static metadata: MNetworkVarNames "float m_flCurrentSpeed"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tengu_AirLift : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb00[0x18]; // 0xb00
        // metadata: MNetworkEnable
        // m_hGrabTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hGrabTarget;
        char m_hGrabTarget[0x4]; // 0xb18        
        client::ParticleIndex_t m_nHoldBombEffect; // 0xb1c        
        [[maybe_unused]] std::uint8_t pad_0xb20[0x1f8]; // 0xb20
        // metadata: MNetworkEnable
        client::EFlightState m_eFlightState; // 0xd18        
        // metadata: MNetworkEnable
        bool m_bIsGrabbing; // 0xd19        
        // metadata: MNetworkEnable
        bool m_bIsHoldingBomb; // 0xd1a        
        [[maybe_unused]] std::uint8_t pad_0xd1b[0x1]; // 0xd1b
        // metadata: MNetworkEnable
        float m_flCurrentSpeed; // 0xd1c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tengu_AirLift because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tengu_AirLift) == 0xd20);
};
