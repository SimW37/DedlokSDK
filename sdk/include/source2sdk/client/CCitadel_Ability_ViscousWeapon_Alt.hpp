#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/EViscousChargedGunState.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1068
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EViscousChargedGunState m_ChargeState"
        // static metadata: MNetworkVarNames "float m_nClipConsumed"
        // static metadata: MNetworkVarNames "bool m_bIsCharging"
        // static metadata: MNetworkVarNames "bool m_bIsToggled"
        #pragma pack(push, 1)
        class CCitadel_Ability_ViscousWeapon_Alt : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::EViscousChargedGunState m_ChargeState; // 0xdc0            
            // metadata: MNetworkEnable
            float m_nClipConsumed; // 0xdc4            
            // metadata: MNetworkEnable
            bool m_bIsCharging; // 0xdc8            
            // metadata: MNetworkEnable
            bool m_bIsToggled; // 0xdc9            
            uint8_t _pad0dca[0x2]; // 0xdca
            source2sdk::client::ParticleIndex_t m_fxChargingParticle; // 0xdcc            
            uint8_t _pad0dd0[0x14]; // 0xdd0
            source2sdk::entity2::GameTime_t m_flLastBulletConsumedTime; // 0xde4            
            uint8_t _pad0de8[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ViscousWeapon_Alt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_ViscousWeapon_Alt) == 0x1068);
    };
};
