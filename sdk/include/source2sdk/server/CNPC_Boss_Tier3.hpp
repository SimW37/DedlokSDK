#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ETier3Phase_t.hpp"
#include "source2sdk/client/ETier3State_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CAI_CitadelNPC.hpp"

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
        // Size: 0x1890
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "Vector m_vecElectricBeamTargetEnd"
        // static metadata: MNetworkVarNames "ETier3State_t m_eAliveState"
        // static metadata: MNetworkVarNames "ETier3Phase_t m_ePhase"
        // static metadata: MNetworkVarNames "Vector m_vShrineAttackTargetPos"
        #pragma pack(push, 1)
        class CNPC_Boss_Tier3 : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1790[0x4]; // 0x1790
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int32_t m_iLane; // 0x1794            
            uint8_t _pad1798[0x34]; // 0x1798
            // metadata: MNetworkEnable
            Vector m_vecElectricBeamTargetEnd; // 0x17cc            
            uint8_t _pad17d8[0x10]; // 0x17d8
            source2sdk::entity2::CEntityIOOutput m_eventOnBossKilled; // 0x17e8            
            source2sdk::entity2::CEntityIOOutput m_eventOnPhase1End; // 0x1800            
            CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1818            
            uint8_t _pad1820[0x4]; // 0x1820
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::ETier3State_t m_eAliveState; // 0x1824            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::client::ETier3Phase_t m_ePhase; // 0x1828            
            uint8_t _pad182c[0x2c]; // 0x182c
            // metadata: MNetworkEnable
            Vector m_vShrineAttackTargetPos; // 0x1858            
            uint8_t _pad1864[0x2c];
            
            // Datamap fields:
            // void m_vecStartingPosition; // 0x17a8
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier3 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier3) == 0x1890);
    };
};
