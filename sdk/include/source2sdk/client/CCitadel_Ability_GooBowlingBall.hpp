#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EViscousBowlingBallState_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    class C_CitadelViscousBall;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x10f0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsRolling"
    // static metadata: MNetworkVarNames "CHandle< CCitadelViscousBall > m_hBall"
    // static metadata: MNetworkVarNames "EViscousBowlingBallState_t m_eRollingState"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextWallCheck"
    // static metadata: MNetworkVarNames "GameTime_t m_flRollStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flWallExitTime"
    // static metadata: MNetworkVarNames "Vector m_vecWallExitVelocity"
    #pragma pack(push, 1)
    class CCitadel_Ability_GooBowlingBall : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc50[0x310]; // 0xc50
        int32_t m_nAirJumpsLeft; // 0xf60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // metadata: MNetworkChangeCallback "OnIsRollingChanged"
        bool m_bIsRolling; // 0xf64        
        [[maybe_unused]] std::uint8_t pad_0xf65[0x3]; // 0xf65
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_hBall has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelViscousBall> m_hBall;
        char m_hBall[0x4]; // 0xf68        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::EViscousBowlingBallState_t m_eRollingState; // 0xf6c        
        [[maybe_unused]] std::uint8_t pad_0xf6d[0x3]; // 0xf6d
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextStateTime; // 0xf70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flNextWallCheck; // 0xf74        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flRollStartTime; // 0xf78        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flWallExitTime; // 0xf7c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        Vector m_vecWallExitVelocity; // 0xf80        
        [[maybe_unused]] std::uint8_t pad_0xf8c[0x8]; // 0xf8c
        client::ParticleIndex_t m_nDirectionParticleIndex; // 0xf94        
        [[maybe_unused]] std::uint8_t pad_0xf98[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GooBowlingBall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_GooBowlingBall) == 0x10f0);
};
