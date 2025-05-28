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
        // Size: 0xa98
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flWidth"
        // static metadata: MNetworkVarNames "GameTime_t m_tDieTime"
        #pragma pack(push, 1)
        class CProjectile_KnightCharge_Projectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            Vector m_vLastKnightChargePos; // 0x880            
            bool m_bFinished; // 0x88c            
            uint8_t _pad088d[0x3]; // 0x88d
            // metadata: MNetworkEnable
            float m_flWidth; // 0x890            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_tDieTime; // 0x894            
            uint8_t _pad0898[0x200];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_KnightCharge_Projectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_KnightCharge_Projectile) == 0xa98);
    };
};
