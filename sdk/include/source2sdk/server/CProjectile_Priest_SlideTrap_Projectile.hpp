#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xe30
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flRangeAtCast"
        // static metadata: MNetworkVarNames "bool m_bArmed"
        // static metadata: MNetworkVarNames "bool m_bMoving"
        #pragma pack(push, 1)
        class CProjectile_Priest_SlideTrap_Projectile : public source2sdk::server::CCitadelProjectile
        {
        public:
            uint8_t _pad0858[0x14]; // 0x858
            // metadata: MNetworkEnable
            float m_flRangeAtCast; // 0x86c            
            uint8_t _pad0870[0x3c]; // 0x870
            // metadata: MNetworkEnable
            bool m_bArmed; // 0x8ac            
            // metadata: MNetworkEnable
            bool m_bMoving; // 0x8ad            
            bool m_bFinished; // 0x8ae            
            uint8_t _pad08af[0x581];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Priest_SlideTrap_Projectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CProjectile_Priest_SlideTrap_Projectile) == 0xe30);
    };
};
