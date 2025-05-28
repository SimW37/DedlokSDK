#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0xe78
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
        class CCitadel_Ability_Slide : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x58]; // 0xdc0
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xe18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlowGetupStartTime; // 0xe30            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShouldTriggerSlowGetup; // 0xe34            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bWantsSlide; // 0xe35            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAirborneWhenDuckPressed; // 0xe36            
            // metadata: MNetworkEnable
            bool m_bIsSliding; // 0xe37            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSlideIsSticky; // 0xe38            
            uint8_t _pad0e39[0x3]; // 0xe39
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpeedAdjust; // 0xe3c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDuckPressedTime; // 0xe40            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlideChangeTime; // 0xe44            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xe48            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nJumpsThisSlideSession; // 0xe4c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flOnGroundStartTime; // 0xe50            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashSlideStartTime; // 0xe54            
            bool m_bStartedSlideViaProbeSlope; // 0xe58            
            uint8_t _pad0e59[0x3]; // 0xe59
            source2sdk::client::ParticleIndex_t m_nSlideEffectIndex; // 0xe5c            
            uint8_t _pad0e60[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Slide because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Slide) == 0xe78);
    };
};
