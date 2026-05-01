#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelProjectile.hpp"

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
        // Size: 0xaf0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "GameTime_t m_tDieTime"
        #pragma pack(push, 1)
        class CProjectile_Stomp_Projectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            Vector m_vLastStompPos; // 0x858            
            bool m_bFinished; // 0x864            
            uint8_t _pad0865[0x3]; // 0x865
            // metadata: MNetworkEnable
            float m_flWidth; // 0x868            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDieTime; // 0x86c            
            uint8_t _pad0870[0x280];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Stomp_Projectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Stomp_Projectile) == 0xaf0);
    };
};
