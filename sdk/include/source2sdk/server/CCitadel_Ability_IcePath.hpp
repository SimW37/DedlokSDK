#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
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
        // Size: 0xc48
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
            uint8_t _pad0b98[0x80]; // 0xb98
            Vector m_vInitialPosition; // 0xc18            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            bool m_bIcePathing; // 0xc24            
            uint8_t _pad0c25[0x3]; // 0xc25
            // metadata: MNetworkEnable
            QAngle m_qLastAngles; // 0xc28            
            // metadata: MNetworkEnable
            Vector m_vLastVelocity; // 0xc34            
            // metadata: MNetworkEnable
            bool m_bFirstMovementTick; // 0xc40            
            uint8_t _pad0c41[0x3]; // 0xc41
            source2sdk::entity2::GameTime_t m_tLingerMovementControlUntilTime; // 0xc44            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_IcePath because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_IcePath) == 0xc48);
    };
};
