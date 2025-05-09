#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIcePathing"
    // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
    // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
    // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
    #pragma pack(push, 1)
    class CCitadel_Ability_IcePath : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x80]; // 0xba0
        Vector m_vInitialPosition; // 0xc20        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIcePathing; // 0xc2c        
        [[maybe_unused]] std::uint8_t pad_0xc2d[0x3]; // 0xc2d
        // metadata: MNetworkEnable
        QAngle m_qLastAngles; // 0xc30        
        // metadata: MNetworkEnable
        Vector m_vLastVelocity; // 0xc3c        
        // metadata: MNetworkEnable
        bool m_bFirstMovementTick; // 0xc48        
        [[maybe_unused]] std::uint8_t pad_0xc49[0x3]; // 0xc49
        entity2::GameTime_t m_tLingerMovementControlUntilTime; // 0xc4c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IcePath) == 0xc50);
};
