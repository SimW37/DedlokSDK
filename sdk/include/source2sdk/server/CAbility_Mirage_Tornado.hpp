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
        // Size: 0xd68
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
        // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
        #pragma pack(push, 1)
        class CAbility_Mirage_Tornado : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x1c0]; // 0xb98
            // metadata: MNetworkEnable
            QAngle m_anglesCharging; // 0xd58            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMirageTornadoStateChanged"
            source2sdk::entity2::GameTime_t m_flChargeStartTime; // 0xd64            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Mirage_Tornado because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Mirage_Tornado) == 0xd68);
    };
};
