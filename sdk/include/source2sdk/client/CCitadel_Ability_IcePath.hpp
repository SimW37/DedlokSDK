#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xe68
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIcePathing"
    // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
    // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
    // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
    #pragma pack(push, 1)
    class CCitadel_Ability_IcePath : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x80]; // 0xdc0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bIcePathing; // 0xe40        
        [[maybe_unused]] std::uint8_t pad_0xe41[0x3]; // 0xe41
        // metadata: MNetworkEnable
        QAngle m_qLastAngles; // 0xe44        
        // metadata: MNetworkEnable
        Vector m_vLastVelocity; // 0xe50        
        // metadata: MNetworkEnable
        bool m_bFirstMovementTick; // 0xe5c        
        [[maybe_unused]] std::uint8_t pad_0xe5d[0x3]; // 0xe5d
        entity2::GameTime_t m_tLingerMovementControlUntilTime; // 0xe60        
        [[maybe_unused]] std::uint8_t pad_0xe64[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_IcePath) == 0xe68);
};
