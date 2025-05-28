#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_AI_CitadelNPC.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x17c8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
        // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
        #pragma pack(push, 1)
        class C_NPC_Boss_Tier2 : public source2sdk::client::C_AI_CitadelNPC
        {
        public:
            uint8_t _pad1708[0x18]; // 0x1708
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x1720            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x1724            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x1728            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnBossTargetedEnemyChanged"
            // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTargetedEnemy;
            char m_hTargetedEnemy[0x4]; // 0x172c            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            // metadata: MNetworkChangeCallback "OnLookTargetChanged"
            Vector m_vecElectricBeamLookTarget; // 0x1730            
            uint8_t _pad173c[0x84]; // 0x173c
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnElectricBeamCastsChanged"
            std::int32_t m_nElectricBeamCasts; // 0x17c0            
            uint8_t _pad17c4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NPC_Boss_Tier2 because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NPC_Boss_Tier2) == 0x17c8);
    };
};
