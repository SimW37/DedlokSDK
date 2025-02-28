#pragma once
#include "source2sdk/client/CNetworkOriginQuantizedVector.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EClimbRopeState_t.hpp"
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
    // Size: 0xcf8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CNetworkOriginQuantizedVector m_vTop"
    // static metadata: MNetworkVarNames "CNetworkOriginQuantizedVector m_vBottom"
    // static metadata: MNetworkVarNames "bool m_bRequestStopClimbing"
    // static metadata: MNetworkVarNames "bool m_bRequestJumpToRoof"
    // static metadata: MNetworkVarNames "GameTime_t m_flLastMoveTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flMoveDownStartTime"
    // static metadata: MNetworkVarNames "EClimbRopeState_t m_eClimbState"
    #pragma pack(push, 1)
    class CCitadel_Ability_Climb_Rope : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::CNetworkOriginQuantizedVector m_vTop; // 0xc50        
        [[maybe_unused]] std::uint8_t pad_0xc78[0x8]; // 0xc78
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::CNetworkOriginQuantizedVector m_vBottom; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xca8[0x8]; // 0xca8
        entity2::GameTime_t m_flActivatePressTime; // 0xcb0        
        entity2::GameTime_t m_flDisconnectTime; // 0xcb4        
        entity2::GameTime_t m_flClimbStartTime; // 0xcb8        
        Vector m_vLastPos; // 0xcbc        
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x8]; // 0xcc8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bRequestStopClimbing; // 0xcd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bRequestJumpToRoof; // 0xcd1        
        [[maybe_unused]] std::uint8_t pad_0xcd2[0x2]; // 0xcd2
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLastMoveTime; // 0xcd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flMoveDownStartTime; // 0xcd8        
        // metadata: MNetworkEnable
        client::EClimbRopeState_t m_eClimbState; // 0xcdc        
        [[maybe_unused]] std::uint8_t pad_0xce0[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Climb_Rope because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Climb_Rope) == 0xcf8);
};
