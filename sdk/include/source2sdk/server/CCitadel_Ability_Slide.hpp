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
        // Size: 0x1048
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
            uint8_t _pad0f90[0x58]; // 0xf90
            // metadata: MNetworkEnable
            source2sdk::server::CCitadelAutoScaledTime m_flGroundDashSlideTime; // 0xfe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlowGetupStartTime; // 0x1000            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bShouldTriggerSlowGetup; // 0x1004            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bWantsSlide; // 0x1005            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bAirborneWhenDuckPressed; // 0x1006            
            // metadata: MNetworkEnable
            bool m_bIsSliding; // 0x1007            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bSlideIsSticky; // 0x1008            
            uint8_t _pad1009[0x3]; // 0x1009
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flSpeedAdjust; // 0x100c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDuckPressedTime; // 0x1010            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlideChangeTime; // 0x1014            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flSlidingOnFlatStartTime; // 0x1018            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nJumpsThisSlideSession; // 0x101c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flOnGroundStartTime; // 0x1020            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flDashSlideStartTime; // 0x1024            
            bool m_bStartedSlideViaProbeSlope; // 0x1028            
            uint8_t _pad1029[0x3]; // 0x1029
            source2sdk::client::ParticleIndex_t m_nSlideEffectIndex; // 0x102c            
            uint8_t _pad1030[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Slide because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Slide) == 0x1048);
    };
};
