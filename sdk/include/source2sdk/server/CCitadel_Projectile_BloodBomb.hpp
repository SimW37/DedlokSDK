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
        // Size: 0x8b0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Projectile_BloodBomb : public source2sdk::server::CCitadelProjectile
        {
        public:
            bool m_bSecondBomb; // 0x880            
            uint8_t _pad0881[0x3]; // 0x881
            std::int32_t m_nBeepSoundBuildupCount; // 0x884            
            float m_flBeepSoundIntervalBias; // 0x888            
            float m_flBeepSoundMaxFrequency; // 0x88c            
            float m_flArmingDuration; // 0x890            
            uint8_t _pad0894[0x4]; // 0x894
            // m_vecBeepIntervals has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_vecBeepIntervals;
            char m_vecBeepIntervals[0x18]; // 0x898            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Projectile_BloodBomb because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Projectile_BloodBomb) == 0x8b0);
    };
};
