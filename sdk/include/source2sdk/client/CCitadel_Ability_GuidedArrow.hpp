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
        // Size: 0xf48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
        // static metadata: MNetworkVarNames "float m_flArrowSpeed"
        // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
        // static metadata: MNetworkVarNames "int m_nBonusTechPower"
        #pragma pack(push, 1)
        class CCitadel_Ability_GuidedArrow : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            uint8_t _pad0dc0[0x8]; // 0xdc0
            // metadata: MNetworkEnable
            // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hProjectile;
            char m_hProjectile[0x4]; // 0xdc8            
            // metadata: MNetworkEnable
            float m_flArrowSpeed; // 0xdcc            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flSnapAnglesBackTime; // 0xdd0            
            // metadata: MNetworkEnable
            std::int32_t m_nBonusTechPower; // 0xdd4            
            source2sdk::entity2::GameTime_t m_flCastTime; // 0xdd8            
            bool m_bNeedsExplosion; // 0xddc            
            uint8_t _pad0ddd[0x3]; // 0xddd
            Vector m_vProjectileRemovedOrigin; // 0xde0            
            QAngle m_angCasterAnglesAtCastTime; // 0xdec            
            float m_flTravelDistance; // 0xdf8            
            bool m_bInKillFlow; // 0xdfc            
            uint8_t _pad0dfd[0x3]; // 0xdfd
            float m_flProjectileTurnVel; // 0xe00            
            uint8_t _pad0e04[0x144];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_GuidedArrow because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_GuidedArrow) == 0xf48);
    };
};
