#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CNetworkVelocityVector.hpp"
#include "source2sdk/client/CPlayer_MovementServices_Humanoid.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x298
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CNetworkVelocityVector m_vPositionDeltaVelocity"
        // static metadata: MNetworkVarNames "bool m_bToggleDuckActive"
        #pragma pack(push, 1)
        class CCitadelPlayer_MovementServices : public source2sdk::client::CPlayer_MovementServices_Humanoid
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            source2sdk::client::CNetworkVelocityVector m_vPositionDeltaVelocity; // 0x228            
            uint8_t _pad0250[0x8]; // 0x250
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerExclusive"
            // metadata: MNetworkPriority "32"
            bool m_bToggleDuckActive; // 0x258            
            uint8_t _pad0259[0x3]; // 0x259
            Vector m_vecPogoVelocity; // 0x25c            
            Vector m_vecSupport; // 0x268            
            bool m_bColliding; // 0x274            
            bool m_bLandedOnGround; // 0x275            
            bool m_bHasFreeCursor; // 0x276            
            uint8_t _pad0277[0x1]; // 0x277
            float m_flTurnSpringSpeed; // 0x278            
            uint8_t _pad027c[0x1c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelPlayer_MovementServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelPlayer_MovementServices) == 0x298);
    };
};
