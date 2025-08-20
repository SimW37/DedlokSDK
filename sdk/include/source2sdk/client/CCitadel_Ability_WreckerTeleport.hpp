#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0xec8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
        // static metadata: MNetworkVarNames "float m_flArrowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
        #pragma pack(push, 1)
        class CCitadel_Ability_WreckerTeleport : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0d88[0x8]; // 0xd88
            // metadata: MNetworkEnable
            // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hProjectile;
            char m_hProjectile[0x4]; // 0xd90            
            // metadata: MNetworkEnable
            float m_flArrowSpeed; // 0xd94            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSnapAnglesBackTime; // 0xd98            
            float m_flCastTimeDamage; // 0xd9c            
            source2sdk::entity2::GameTime_t m_flCastTime; // 0xda0            
            bool m_bNeedsExplosion; // 0xda4            
            uint8_t _pad0da5[0x3]; // 0xda5
            Vector m_vProjectileRemovedOrigin; // 0xda8            
            QAngle m_angCasterAnglesAtCastTime; // 0xdb4            
            float m_flTravelDistance; // 0xdc0            
            uint8_t _pad0dc4[0x104];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_WreckerTeleport because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_WreckerTeleport) == 0xec8);
    };
};
