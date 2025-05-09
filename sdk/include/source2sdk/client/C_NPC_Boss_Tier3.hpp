#pragma once
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/client/ETier3Phase_t.hpp"
#include "source2sdk/client/ETier3State_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1840
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
    // static metadata: MNetworkVarNames "ETier3State_t m_eAliveState"
    // static metadata: MNetworkVarNames "ETier3Phase_t m_ePhase"
    #pragma pack(push, 1)
    class C_NPC_Boss_Tier3 : public client::C_AI_CitadelNPC
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnT3Targeting1Changed"
        QAngle m_angTargeting1; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x84]; // 0x171c
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnT3Targeting2Changed"
        QAngle m_angTargeting2; // 0x17a0        
        [[maybe_unused]] std::uint8_t pad_0x17ac[0x84]; // 0x17ac
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnT3ElectricBeamCastsChanged"
        int32_t m_nElectricBeamCasts; // 0x1830        
        // metadata: MNetworkEnable
        client::ETier3State_t m_eAliveState; // 0x1834        
        // metadata: MNetworkEnable
        client::ETier3Phase_t m_ePhase; // 0x1838        
        [[maybe_unused]] std::uint8_t pad_0x183c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_NPC_Boss_Tier3 because it is not a standard-layout class
    static_assert(sizeof(C_NPC_Boss_Tier3) == 0x1840);
};
