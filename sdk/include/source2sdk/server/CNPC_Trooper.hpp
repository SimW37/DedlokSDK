#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAI_CitadelNPC.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CInfoTrooperBossSpawn;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1aa8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
        // static metadata: MNetworkVarNames "float m_flHealingChargeParticlePct"
        #pragma pack(push, 1)
        class CNPC_Trooper : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1990[0x18]; // 0x1990
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x19a8            
            std::int32_t m_iLaneSlot; // 0x19ac            
            uint8_t _pad19b0[0x24]; // 0x19b0
            // m_hSpawnWaveController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoTrooperBossSpawn> m_hSpawnWaveController;
            char m_hSpawnWaveController[0x4]; // 0x19d4            
            // m_hTrooperSpawnPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrooperSpawnPoint;
            char m_hTrooperSpawnPoint[0x4]; // 0x19d8            
            uint8_t _pad19dc[0x1c]; // 0x19dc
            // m_hNearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CModifierHandleTyped<source2sdk::server::CCitadelModifier> m_hNearDeathModifier;
            char m_hNearDeathModifier[0x18]; // 0x19f8            
            uint8_t _pad1a10[0x8]; // 0x1a10
            // metadata: MNetworkEnable
            // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetedEnemy;
            char m_hTargetedEnemy[0x4]; // 0x1a18            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "1,000000"
            float m_flHealingChargeParticlePct; // 0x1a1c            
            uint8_t _pad1a20[0x88];
            
            // Datamap fields:
            // int32_t m_iCoverGroupID; // 0x18f0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_Trooper because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_Trooper) == 0x1aa8);
    };
};
