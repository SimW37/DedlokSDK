#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x14b0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bHasTurretReady"
        // static metadata: MNetworkVarNames "int m_iCurrentSwapCount"
        // static metadata: MNetworkVarNames "GameTime_t m_flTurretExpireTime"
        // static metadata: MNetworkVarNames "EHANDLE m_pActiveTurret"
        #pragma pack(push, 1)
        class CCitadel_Ability_TurretClone : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x280]; // 0xf90
            // metadata: MNetworkEnable
            bool m_bHasTurretReady; // 0x1210            
            uint8_t _pad1211[0x3]; // 0x1211
            // metadata: MNetworkEnable
            std::int32_t m_iCurrentSwapCount; // 0x1214            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flTurretExpireTime; // 0x1218            
            uint8_t _pad121c[0x4]; // 0x121c
            source2sdk::client::ShotID_t m_nLastBulletShotID; // 0x1220            
            // metadata: MNetworkEnable
            // m_pActiveTurret has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_pActiveTurret;
            char m_pActiveTurret[0x4]; // 0x1224            
            source2sdk::client::ParticleIndex_t m_nTurretFXIndex; // 0x1228            
            uint8_t _pad122c[0x284];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_TurretClone because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_TurretClone) == 0x14b0);
    };
};
