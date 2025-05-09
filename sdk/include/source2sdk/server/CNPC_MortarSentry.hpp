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
    // Size: 0x19e8
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_MortarSentry : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1990[0xc]; // 0x1990
        float m_flAttackCone; // 0x199c        
        float m_flLastAlertSound; // 0x19a0        
        float m_flTrackingSpeed; // 0x19a4        
        Vector m_vTargetPosition; // 0x19a8        
        float m_flSearchRadius; // 0x19b4        
        [[maybe_unused]] std::uint8_t pad_0x19b8[0x30];
        
        // Datamap fields:
        // float m_flLifeTime; // 0x19b8
        // void m_nCurrentVolley; // 0x19c8
        // void m_nGrenadesPerVolley; // 0x19cc
        // void m_flNextAttackTime; // 0x19d0
        // void m_flAttackRateInnerVolley; // 0x19d4
        // void m_flAttackRate; // 0x19d8
        // void m_vLastTargetPos; // 0x19dc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_MortarSentry because it is not a standard-layout class
    static_assert(sizeof(CNPC_MortarSentry) == 0x19e8);
};
