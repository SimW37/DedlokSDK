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
        // Size: 0xc50
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flAimPitch"
        // static metadata: MNetworkVarNames "float m_flAttackRange"
        #pragma pack(push, 1)
        class CNPC_FieldSentry : public source2sdk::server::CNPC_SimpleAnimatingAI
        {
        public:
            uint8_t _pad0c00[0xc]; // 0xc00
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAimPitch; // 0xc0c            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flNextAttackTime; // 0xc10            
            float m_flAttackCone; // 0xc14            
            float m_flAttackDelay; // 0xc18            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastAlertSound; // 0xc1c            
            float m_flTrackingSpeed; // 0xc20            
            float m_flDeployTime; // 0xc24            
            uint8_t _pad0c28[0x4]; // 0xc28
            float m_flLifeTime; // 0xc2c            
            uint8_t _pad0c30[0x2]; // 0xc30
            // metadata: MNotSaved
            bool m_bHadEnemy; // 0xc32            
            bool m_bLockedOn; // 0xc33            
            uint8_t _pad0c34[0x10]; // 0xc34
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            float m_flAttackRange; // 0xc44            
            uint8_t _pad0c48[0x8];
            
            // Datamap fields:
            // void m_flSpawnTime; // 0xc28
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_FieldSentry because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_FieldSentry) == 0xc50);
    };
};
