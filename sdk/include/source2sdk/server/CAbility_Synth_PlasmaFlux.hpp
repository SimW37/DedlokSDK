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
        // Size: 0xd80
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hActiveProjectile"
        #pragma pack(push, 1)
        class CAbility_Synth_PlasmaFlux : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x28]; // 0xb98
            bool m_bTeleported; // 0xbc0            
            uint8_t _pad0bc1[0x7]; // 0xbc1
            // m_vecUniqueHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecUniqueHitList;
            char m_vecUniqueHitList[0x18]; // 0xbc8            
            Vector m_vLastValidTeleportPosition; // 0xbe0            
            source2sdk::entity2::GameTime_t m_flProjectileLaunchTime; // 0xbec            
            source2sdk::entity2::GameTime_t m_flProjectileExpireTime; // 0xbf0            
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
            // m_hActiveProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActiveProjectile;
            char m_hActiveProjectile[0x4]; // 0xbf4            
            uint8_t _pad0bf8[0x188];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbility_Synth_PlasmaFlux because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbility_Synth_PlasmaFlux) == 0xd80);
    };
};
