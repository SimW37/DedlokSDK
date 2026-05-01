#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
#include "source2sdk/server/CIcePathShardGenerator.hpp"

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
        // Size: 0x11b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIcePathing"
        // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
        // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
        // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
        #pragma pack(push, 1)
        class CCitadel_Ability_IcePath : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x100]; // 0xf90
            VectorWS m_vInitialPosition; // 0x1090            
            uint8_t _pad109c[0x4]; // 0x109c
            source2sdk::server::CIcePathShardGenerator m_cShardGenerator; // 0x10a0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIcePathing; // 0x1188            
            uint8_t _pad1189[0x3]; // 0x1189
            // metadata: MNetworkEnable
            QAngle m_qLastAngles; // 0x118c            
            // metadata: MNetworkEnable
            Vector m_vLastVelocity; // 0x1198            
            // metadata: MNetworkEnable
            bool m_bFirstMovementTick; // 0x11a4            
            uint8_t _pad11a5[0x3]; // 0x11a5
            source2sdk::entity2::GameTime_t m_tLingerMovementControlUntilTime; // 0x11a8            
            uint8_t _pad11ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_IcePath) == 0x11b0);
    };
};
