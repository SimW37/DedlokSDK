#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CNPC_SimpleAnimatingAI.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc60
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bTakesDamage"
        // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "Vector m_vecUnitStatusOffset"
        #pragma pack(push, 1)
        class CNPC_BaseDefenseSentry : public source2sdk::server::CNPC_SimpleAnimatingAI
        {
        public:
            uint8_t _pad0c00[0x8]; // 0xc00
            // metadata: MNetworkEnable
            Vector m_vecUnitStatusOffset; // 0xc08            
            uint8_t _pad0c14[0x28]; // 0xc14
            float m_flAttackCone; // 0xc3c            
            // metadata: MNotSaved
            float m_flAttackDelay; // 0xc40            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastAlertSound; // 0xc44            
            uint8_t _pad0c48[0x4]; // 0xc48
            std::int16_t m_nSentryLevel; // 0xc4c            
            uint8_t _pad0c4e[0x2]; // 0xc4e
            Vector m_vecForward; // 0xc50            
            uint8_t _pad0c5c[0x4];
            
            // Datamap fields:
            // void EnableAttacking; // 0x0
            // void DisableAttacking; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_BaseDefenseSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_BaseDefenseSentry) == 0xc60);
    };
};
