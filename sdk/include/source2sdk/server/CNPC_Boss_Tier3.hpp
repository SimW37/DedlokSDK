#pragma once
#include "source2sdk/client/ETier3Phase_t.hpp"
#include "source2sdk/client/ETier3State_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x1a88
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "QAngle m_angTargeting1"
    // static metadata: MNetworkVarNames "QAngle m_angTargeting2"
    // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
    // static metadata: MNetworkVarNames "ETier3State_t m_eAliveState"
    // static metadata: MNetworkVarNames "ETier3Phase_t m_ePhase"
    #pragma pack(push, 1)
    class CNPC_Boss_Tier3 : public server::CAI_CitadelNPC
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x1990        
        [[maybe_unused]] std::uint8_t pad_0x1994[0x30]; // 0x1994
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        QAngle m_angTargeting1; // 0x19c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        QAngle m_angTargeting2; // 0x19d0        
        // metadata: MNetworkEnable
        int32_t m_nElectricBeamCasts; // 0x19dc        
        [[maybe_unused]] std::uint8_t pad_0x19e0[0x20]; // 0x19e0
        entity2::CEntityIOOutput m_eventOnBossKilled; // 0x1a00        
        entity2::CEntityIOOutput m_eventOnPhase1End; // 0x1a28        
        CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1a50        
        [[maybe_unused]] std::uint8_t pad_0x1a58[0x4]; // 0x1a58
        // metadata: MNetworkEnable
        client::ETier3State_t m_eAliveState; // 0x1a5c        
        [[maybe_unused]] std::uint8_t pad_0x1a60[0x4]; // 0x1a60
        // metadata: MNetworkEnable
        client::ETier3Phase_t m_ePhase; // 0x1a64        
        [[maybe_unused]] std::uint8_t pad_0x1a68[0x20];
        
        // Datamap fields:
        // void m_vecStartingPosition; // 0x19a0
        // int32_t m_nDyingEndCoverPointID; // 0x19ac
        // int32_t m_nVulnerableCoverPointID; // 0x19b0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier3 because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier3) == 0x1a88);
};
