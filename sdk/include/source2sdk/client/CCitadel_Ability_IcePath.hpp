#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0xe68
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bIcePathing"
        // static metadata: MNetworkVarNames "QAngle m_qLastAngles"
        // static metadata: MNetworkVarNames "Vector m_vLastVelocity"
        // static metadata: MNetworkVarNames "bool m_bFirstMovementTick"
        #pragma pack(push, 1)
        class CCitadel_Ability_IcePath : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x80]; // 0xdc0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIcePathing; // 0xe40            
            uint8_t _pad0e41[0x3]; // 0xe41
            // metadata: MNetworkEnable
            QAngle m_qLastAngles; // 0xe44            
            // metadata: MNetworkEnable
            Vector m_vLastVelocity; // 0xe50            
            // metadata: MNetworkEnable
            bool m_bFirstMovementTick; // 0xe5c            
            uint8_t _pad0e5d[0x3]; // 0xe5d
            source2sdk::entity2::GameTime_t m_tLingerMovementControlUntilTime; // 0xe60            
            uint8_t _pad0e64[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_IcePath) == 0xe68);
    };
};
