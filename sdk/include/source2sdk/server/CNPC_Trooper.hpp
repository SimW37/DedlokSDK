#pragma once
#include "source2sdk/server/CAI_CitadelNPC.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CInfoTrooperBossSpawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x19b8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
    // static metadata: MNetworkVarNames "float m_flHealingChargeParticlePct"
    #pragma pack(push, 1)
    class CNPC_Trooper : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1890[0x18]; // 0x1890
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x18a8        
        int32_t m_iLaneSlot; // 0x18ac        
        [[maybe_unused]] std::uint8_t pad_0x18b0[0x20]; // 0x18b0
        // m_hSpawnWaveController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CInfoTrooperBossSpawn> m_hSpawnWaveController;
        char m_hSpawnWaveController[0x4]; // 0x18d0        
        // m_hTrooperSpawnPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTrooperSpawnPoint;
        char m_hTrooperSpawnPoint[0x4]; // 0x18d4        
        [[maybe_unused]] std::uint8_t pad_0x18d8[0x20]; // 0x18d8
        // m_hNearDeathModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CModifierHandleTyped<server::CCitadelModifier> m_hNearDeathModifier;
        char m_hNearDeathModifier[0x18]; // 0x18f8        
        [[maybe_unused]] std::uint8_t pad_0x1910[0x8]; // 0x1910
        // metadata: MNetworkEnable
        // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetedEnemy;
        char m_hTargetedEnemy[0x4]; // 0x1918        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1,000000"
        float m_flHealingChargeParticlePct; // 0x191c        
        [[maybe_unused]] std::uint8_t pad_0x1920[0x98];
        
        // Datamap fields:
        // int32_t m_iCoverGroupID; // 0x17f0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Trooper because it is not a standard-layout class
    static_assert(sizeof(CNPC_Trooper) == 0x19b8);
};
