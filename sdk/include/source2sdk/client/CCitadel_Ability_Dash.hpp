#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadel_Ability_Jump;
    };
};

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
        // Size: 0xdf8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flDashAngle"
        // static metadata: MNetworkVarNames "int m_nLastGroundDashTick"
        // static metadata: MNetworkVarNames "GameTime_t m_flGroundDashCastTime"
        // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flGroundDashEndTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAirDashCastTime"
        // static metadata: MNetworkVarNames "GameTime_t m_flAirDashDragStartTime"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveAirDashes"
        // static metadata: MNetworkVarNames "int8 m_nConsecutiveDownDashes"
        // static metadata: MNetworkVarNames "bool m_bDownAirDash"
        #pragma pack(push, 1)
        class CCitadel_Ability_Dash : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            float m_flDashAngle; // 0xd88            
            source2sdk::entity2::GameTime_t m_GroundDashExecuteTime; // 0xd8c            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int32_t m_nLastGroundDashTick; // 0xd90            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flGroundDashCastTime; // 0xd94            
            bool m_bTagCanActivateGroundDash; // 0xd98            
            uint8_t _pad0d99[0x7]; // 0xd99
            // metadata: MNetworkEnable
            source2sdk::client::CCitadelAutoScaledTime m_flGroundDashEndTime; // 0xda0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAirDashCastTime; // 0xdb8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            source2sdk::entity2::GameTime_t m_flAirDashDragStartTime; // 0xdbc            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveAirDashes; // 0xdc0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            std::int8_t m_nConsecutiveDownDashes; // 0xdc1            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bDownAirDash; // 0xdc2            
            uint8_t _pad0dc3[0x29]; // 0xdc3
            // m_hJumpAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CCitadel_Ability_Jump> m_hJumpAbility;
            char m_hJumpAbility[0x4]; // 0xdec            
            source2sdk::entity2::GameTime_t m_flAirDashDelayedEffectsTime; // 0xdf0            
            uint8_t _pad0df4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Dash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Dash) == 0xdf8);
    };
};
