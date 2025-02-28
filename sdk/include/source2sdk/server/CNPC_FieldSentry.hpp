#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CNPC_SimpleAnimatingAI.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc70
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flAimPitch"
    // static metadata: MNetworkVarNames "float m_flAttackRange"
    #pragma pack(push, 1)
    class CNPC_FieldSentry : public server::CNPC_SimpleAnimatingAI
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc28[0xc]; // 0xc28
        // metadata: MNetworkEnable
        float m_flAimPitch; // 0xc34        
        entity2::GameTime_t m_flNextAttackTime; // 0xc38        
        float m_flAttackCone; // 0xc3c        
        float m_flAttackDelay; // 0xc40        
        entity2::GameTime_t m_flLastAlertSound; // 0xc44        
        float m_flTrackingSpeed; // 0xc48        
        float m_flDeployTime; // 0xc4c        
        [[maybe_unused]] std::uint8_t pad_0xc50[0xa]; // 0xc50
        bool m_bHadEnemy; // 0xc5a        
        bool m_bLockedOn; // 0xc5b        
        [[maybe_unused]] std::uint8_t pad_0xc5c[0x10]; // 0xc5c
        // metadata: MNetworkEnable
        float m_flAttackRange; // 0xc6c        
        
        // Datamap fields:
        // float m_flLifeTime; // 0xc54
        // void m_flSpawnTime; // 0xc50
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_FieldSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_FieldSentry) == 0xc70);
};
