#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EViscousChargedGunState.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xe48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EViscousChargedGunState m_ChargeState"
        // static metadata: MNetworkVarNames "float m_nClipConsumed"
        // static metadata: MNetworkVarNames "bool m_bIsCharging"
        // static metadata: MNetworkVarNames "bool m_bIsToggled"
        #pragma pack(push, 1)
        class CCitadel_Ability_ViscousWeapon_Alt : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            source2sdk::client::EViscousChargedGunState m_ChargeState; // 0xba0            
            // metadata: MNetworkEnable
            float m_nClipConsumed; // 0xba4            
            // metadata: MNetworkEnable
            bool m_bIsCharging; // 0xba8            
            // metadata: MNetworkEnable
            bool m_bIsToggled; // 0xba9            
            uint8_t _pad0baa[0x2]; // 0xbaa
            source2sdk::client::ParticleIndex_t m_fxChargingParticle; // 0xbac            
            uint8_t _pad0bb0[0x14]; // 0xbb0
            source2sdk::entity2::GameTime_t m_flLastBulletConsumedTime; // 0xbc4            
            uint8_t _pad0bc8[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_ViscousWeapon_Alt because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_ViscousWeapon_Alt) == 0xe48);
    };
};
