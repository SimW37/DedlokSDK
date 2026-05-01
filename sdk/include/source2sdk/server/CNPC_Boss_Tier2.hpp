#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_CitadelNPC.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1930
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        // static metadata: MNetworkVarNames "GameTime_t m_flLastWeakpointHitTime"
        // static metadata: MNetworkVarNames "VectorWS m_vecElectricBeamLookTarget"
        // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
        #pragma pack(push, 1)
        class CNPC_Boss_Tier2 : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1790[0x30]; // 0x1790
            // metadata: MNotSaved
            Vector m_vecStartingPosition; // 0x17c0            
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x17cc            
            uint8_t _pad17d0[0x8]; // 0x17d0
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetedEnemy;
            char m_hTargetedEnemy[0x4]; // 0x17d8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x17dc            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x17e0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastWeakpointHitTime; // 0x17e4            
            uint8_t _pad17e8[0x4c]; // 0x17e8
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            VectorWS m_vecElectricBeamLookTarget; // 0x1834            
            // metadata: MNetworkEnable
            std::int32_t m_nElectricBeamCasts; // 0x1840            
            uint8_t _pad1844[0xc]; // 0x1844
            source2sdk::entity2::CEntityIOOutput m_eventOnBossKilled; // 0x1850            
            uint8_t _pad1868[0x8]; // 0x1868
            CUtlSymbolLarge m_strBossEntityName; // 0x1870            
            uint8_t _pad1878[0xb8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Boss_Tier2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Boss_Tier2) == 0x1930);
    };
};
