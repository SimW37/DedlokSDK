#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0x12f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hActiveProjectile"
        #pragma pack(push, 1)
        class CAbility_Synth_PlasmaFlux : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x28]; // 0xf90
            bool m_bTeleported; // 0xfb8            
            uint8_t _pad0fb9[0x7]; // 0xfb9
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0xfc0            
            Vector m_vLastValidTeleportPosition; // 0xfd8            
            source2sdk::entity2::GameTime_t m_flProjectileLaunchTime; // 0xfe4            
            source2sdk::entity2::GameTime_t m_flProjectileExpireTime; // 0xfe8            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActiveProjectile;
            char m_hActiveProjectile[0x4]; // 0xfec            
            uint8_t _pad0ff0[0x308];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_PlasmaFlux because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Synth_PlasmaFlux) == 0x12f8);
    };
};
