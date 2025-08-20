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
namespace source2sdk
{
    namespace server
    {
        struct CCitadelAnimatingModelEntity;
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
        // Size: 0xd30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
        // static metadata: MNetworkVarNames "float m_flArrowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
        // static metadata: MNetworkVarNames "int m_nBonusTechPower"
        #pragma pack(push, 1)
        class CCitadel_Ability_GuidedArrow : public source2sdk::server::CCitadelBaseAbility
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
            // metadata: MNetworkEnable
            std::int32_t m_nBonusTechPower; // 0xbac            
            // m_hOwl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelAnimatingModelEntity> m_hOwl;
            char m_hOwl[0x4]; // 0xbb0            
            uint8_t _pad0bb4[0xc]; // 0xbb4
            source2sdk::entity2::GameTime_t m_flCastTime; // 0xbc0            
            bool m_bNeedsExplosion; // 0xbc4            
            uint8_t _pad0bc5[0x3]; // 0xbc5
            Vector m_vProjectileRemovedOrigin; // 0xbc8            
            QAngle m_angCasterAnglesAtCastTime; // 0xbd4            
            float m_flTravelDistance; // 0xbe0            
            bool m_bInKillFlow; // 0xbe4            
            uint8_t _pad0be5[0x3]; // 0xbe5
            float m_flProjectileTurnVel; // 0xbe8            
            uint8_t _pad0bec[0x144];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GuidedArrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GuidedArrow) == 0xd30);
    };
};
