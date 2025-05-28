#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/server/CPlayer_MovementServices_Humanoid.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
        // static metadata: MNetworkVarNames "bool m_bToggleDuckActive"
        #pragma pack(push, 1)
        class CCitadelPlayer_MovementServices : public source2sdk::server::CPlayer_MovementServices_Humanoid
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x238            
            uint8_t _pad0260[0x8]; // 0x260
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            bool m_bToggleDuckActive; // 0x268            
            uint8_t _pad0269[0x3]; // 0x269
            Vector m_vecPogoVelocity; // 0x26c            
            Vector m_vecSupport; // 0x278            
            bool m_bColliding; // 0x284            
            bool m_bLandedOnGround; // 0x285            
            bool m_bHasFreeCursor; // 0x286            
            uint8_t _pad0287[0x1]; // 0x287
            float m_flTurnSpringSpeed; // 0x288            
            uint8_t _pad028c[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelPlayer_MovementServices) == 0x2a8);
    };
};
