#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CServerOnlyPointEntity.hpp"

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
        // Size: 0x540
        // Has VTable
        #pragma pack(push, 1)
        class CInfoTrooperBossSpawn : public source2sdk::server::CServerOnlyPointEntity
        {
        public:
            uint8_t _pad04a0[0x10]; // 0x4a0
            CUtlSymbolLarge m_strBossEntityName; // 0x4b0            
            std::int32_t m_iLane; // 0x4b8            
            std::int32_t m_iCoverGroupID; // 0x4bc            
            uint8_t _pad04c0[0x8]; // 0x4c0
            bool m_bReinforcementsOnly; // 0x4c8            
            bool m_bTrooperTestSpawner; // 0x4c9            
            uint8_t _pad04ca[0xe]; // 0x4ca
            source2sdk::entity2::CEntityIOOutput m_eventOnTrooperKilled; // 0x4d8            
            uint8_t _pad04f0[0x50];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CInfoTrooperBossSpawn because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CInfoTrooperBossSpawn) == 0x540);
    };
};
