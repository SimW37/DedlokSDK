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
        // Size: 0xcf0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
        // static metadata: MNetworkVarNames "float m_flArrowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_WreckerTeleport : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0b98[0x8]; // 0xb98
            // metadata: MNetworkEnable
            // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hProjectile;
            char m_hProjectile[0x4]; // 0xba0            
            // metadata: MNetworkEnable
            float m_flArrowSpeed; // 0xba4            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSnapAnglesBackTime; // 0xba8            
            float m_flCastTimeDamage; // 0xbac            
            source2sdk::entity2::GameTime_t m_flCastTime; // 0xbb0            
            bool m_bNeedsExplosion; // 0xbb4            
            uint8_t _pad0bb5[0x3]; // 0xbb5
            Vector m_vProjectileRemovedOrigin; // 0xbb8            
            QAngle m_angCasterAnglesAtCastTime; // 0xbc4            
            float m_flTravelDistance; // 0xbd0            
            uint8_t _pad0bd4[0x11c];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_WreckerTeleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_WreckerTeleport) == 0xcf0);
    };
};
