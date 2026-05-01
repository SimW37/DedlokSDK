#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelProjectile.hpp"

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
        // Size: 0x10a8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flRangeAtCast"
        // static metadata: MNetworkVarNames "bool m_bArmed"
        // static metadata: MNetworkVarNames "bool m_bMoving"
        #pragma pack(push, 1)
        class CProjectile_Priest_SlideTrap_Projectile : public source2sdk::client::C_CitadelProjectile
        {
        public:
            uint8_t _pad0ad0[0x14]; // 0xad0
            // metadata: MNetworkEnable
            float m_flRangeAtCast; // 0xae4            
            uint8_t _pad0ae8[0x3c]; // 0xae8
            // metadata: MNetworkEnable
            bool m_bArmed; // 0xb24            
            // metadata: MNetworkEnable
            bool m_bMoving; // 0xb25            
            bool m_bFinished; // 0xb26            
            uint8_t _pad0b27[0x581];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CProjectile_Priest_SlideTrap_Projectile because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CProjectile_Priest_SlideTrap_Projectile) == 0x10a8);
    };
};
