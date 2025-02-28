#pragma once
#include "source2sdk/server/CAI_CitadelNPC.hpp"
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
    // Size: 0x18e8
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_MortarSentry : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1890[0xc]; // 0x1890
        float m_flAttackCone; // 0x189c        
        float m_flLastAlertSound; // 0x18a0        
        float m_flTrackingSpeed; // 0x18a4        
        Vector m_vTargetPosition; // 0x18a8        
        float m_flSearchRadius; // 0x18b4        
        [[maybe_unused]] std::uint8_t pad_0x18b8[0x30];
        
        // Datamap fields:
        // float m_flLifeTime; // 0x18b8
        // void m_nCurrentVolley; // 0x18c8
        // void m_nGrenadesPerVolley; // 0x18cc
        // void m_flNextAttackTime; // 0x18d0
        // void m_flAttackRateInnerVolley; // 0x18d4
        // void m_flAttackRate; // 0x18d8
        // void m_vLastTargetPos; // 0x18dc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_MortarSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_MortarSentry) == 0x18e8);
};
