#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a90
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
    // static metadata: MNetworkVarNames "Vector m_vecElectricBeamLookTarget"
    // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
    #pragma pack(push, 1)
    class CNPC_Boss_Tier2 : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1990[0x18]; // 0x1990
        Vector m_vecStartingPosition; // 0x19a8        
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x19b4        
        [[maybe_unused]] std::uint8_t pad_0x19b8[0x8]; // 0x19b8
        // metadata: MNetworkEnable
        // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetedEnemy;
        char m_hTargetedEnemy[0x4]; // 0x19c0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutStart; // 0x19c4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutEnd; // 0x19c8        
        [[maybe_unused]] std::uint8_t pad_0x19cc[0x24]; // 0x19cc
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecElectricBeamLookTarget; // 0x19f0        
        // metadata: MNetworkEnable
        int32_t m_nElectricBeamCasts; // 0x19fc        
        [[maybe_unused]] std::uint8_t pad_0x1a00[0x28]; // 0x1a00
        entity2::CEntityIOOutput m_eventOnBossKilled; // 0x1a28        
        [[maybe_unused]] std::uint8_t pad_0x1a50[0x40];
        
        // Datamap fields:
        // CUtlSymbolLarge m_strBossEntityName; // 0x1a58
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier2 because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier2) == 0x1a90);
};
