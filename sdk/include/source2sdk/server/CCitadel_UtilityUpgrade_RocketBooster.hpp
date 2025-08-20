#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_UtilityUpgrade_RocketBoots.hpp"

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
        // Size: 0xe88
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "GameTime_t m_flCastTime"
        // static metadata: MNetworkVarNames "bool m_bCrashingDown"
        // static metadata: MNetworkVarNames "bool m_bImpulseApplied"
        // static metadata: MNetworkVarNames "bool m_bCanCrash"
        // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
        // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
        #pragma pack(push, 1)
        class CCitadel_UtilityUpgrade_RocketBooster : public source2sdk::server::CCitadel_UtilityUpgrade_RocketBoots
        {
        public:
            source2sdk::client::ParticleIndex_t m_nTargetingParticleIndex; // 0xc20            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnCanSlamDownChanged"
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flCastTime; // 0xc24            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCrashingDown; // 0xc28            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bImpulseApplied; // 0xc29            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bCanCrash; // 0xc2a            
            uint8_t _pad0c2b[0x1]; // 0xc2b
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecCrashPosition; // 0xc2c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            Vector m_vecCrashDirection; // 0xc38            
            uint8_t _pad0c44[0x244];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_UtilityUpgrade_RocketBooster because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_UtilityUpgrade_RocketBooster) == 0xe88);
    };
};
