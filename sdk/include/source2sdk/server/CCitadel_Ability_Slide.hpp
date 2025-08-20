#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
        // Size: 0xc50
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashSlideTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSlowGetupStartTime"
        // static metadata: MNetworkVarNames "bool m_bShouldTriggerSlowGetup"
        // static metadata: MNetworkVarNames "bool m_bWantsSlide"
        // static metadata: MNetworkVarNames "bool m_bAirborneWhenDuckPressed"
        // static metadata: MNetworkVarNames "bool m_bIsSliding"
        // static metadata: MNetworkVarNames "bool m_bSlideIsSticky"
        // static metadata: MNetworkVarNames "float m_flSpeedAdjust"
        // static metadata: MNetworkVarNames "GameTime_t m_flDuckPressedTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSlideChangeTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flSlidingOnFlatStartTime"
        // static metadata: MNetworkVarNames "int m_nJumpsThisSlideSession"
        // static metadata: MNetworkVarNames "GameTime_t m_flOnGroundStartTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flDashSlideStartTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_Slide : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x58]; // 0xb98
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xbf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlowGetupStartTime; // 0xc08            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShouldTriggerSlowGetup; // 0xc0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bWantsSlide; // 0xc0d            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAirborneWhenDuckPressed; // 0xc0e            
            // metadata: MNetworkEnable
            bool m_bIsSliding; // 0xc0f            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSlideIsSticky; // 0xc10            
            uint8_t _pad0c11[0x3]; // 0xc11
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpeedAdjust; // 0xc14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDuckPressedTime; // 0xc18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlideChangeTime; // 0xc1c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xc20            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nJumpsThisSlideSession; // 0xc24            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flOnGroundStartTime; // 0xc28            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashSlideStartTime; // 0xc2c            
            bool m_bStartedSlideViaProbeSlope; // 0xc30            
            uint8_t _pad0c31[0x3]; // 0xc31
            source2sdk::client::ParticleIndex_t m_nSlideEffectIndex; // 0xc34            
            uint8_t _pad0c38[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Slide because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Slide) == 0xc50);
    };
};
