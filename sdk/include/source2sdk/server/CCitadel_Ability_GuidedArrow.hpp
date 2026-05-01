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
        struct CCitadel_GuidedArrow_OwlModel;
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
        // Size: 0x1268
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
        // static metadata: MNetworkVarNames "float m_flArrowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
        // static metadata: MNetworkVarNames "int m_nBonusTechPower"
        // static metadata: MNetworkVarNames "bool m_bNeedsExplosion"
        #pragma pack(push, 1)
        class CCitadel_Ability_GuidedArrow : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            uint8_t _pad0f90[0x8]; // 0xf90
            // metadata: MNetworkEnable
            // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hProjectile;
            char m_hProjectile[0x4]; // 0xf98            
            // metadata: MNetworkEnable
            float m_flArrowSpeed; // 0xf9c            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSnapAnglesBackTime; // 0xfa0            
            // metadata: MNetworkEnable
            std::int32_t m_nBonusTechPower; // 0xfa4            
            // metadata: MNetworkEnable
            bool m_bNeedsExplosion; // 0xfa8            
            uint8_t _pad0fa9[0x3]; // 0xfa9
            // m_hOwl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadel_GuidedArrow_OwlModel> m_hOwl;
            char m_hOwl[0x4]; // 0xfac            
            uint8_t _pad0fb0[0xc]; // 0xfb0
            source2sdk::entity2::GameTime_t m_flCastTime; // 0xfbc            
            Vector m_vProjectileRemovedOrigin; // 0xfc0            
            QAngle m_angCasterAnglesAtCastTime; // 0xfcc            
            float m_flTravelDistance; // 0xfd8            
            bool m_bInKillFlow; // 0xfdc            
            uint8_t _pad0fdd[0x3]; // 0xfdd
            float m_flProjectileTurnVel; // 0xfe0            
            uint8_t _pad0fe4[0x284];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GuidedArrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_GuidedArrow) == 0x1268);
    };
};
