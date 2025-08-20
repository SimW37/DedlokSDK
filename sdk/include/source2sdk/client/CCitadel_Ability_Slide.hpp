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
        // Size: 0xe40
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
            uint8_t _pad0d88[0x58]; // 0xd88
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xde0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlowGetupStartTime; // 0xdf8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShouldTriggerSlowGetup; // 0xdfc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bWantsSlide; // 0xdfd            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAirborneWhenDuckPressed; // 0xdfe            
            // metadata: MNetworkEnable
            bool m_bIsSliding; // 0xdff            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSlideIsSticky; // 0xe00            
            uint8_t _pad0e01[0x3]; // 0xe01
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpeedAdjust; // 0xe04            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDuckPressedTime; // 0xe08            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlideChangeTime; // 0xe0c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0xe10            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nJumpsThisSlideSession; // 0xe14            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flOnGroundStartTime; // 0xe18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashSlideStartTime; // 0xe1c            
            bool m_bStartedSlideViaProbeSlope; // 0xe20            
            uint8_t _pad0e21[0x3]; // 0xe21
            source2sdk::client::ParticleIndex_t m_nSlideEffectIndex; // 0xe24            
            uint8_t _pad0e28[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Slide because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Slide) == 0xe40);
    };
};
