#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
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
        // Size: 0xd78
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_HornetSting : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            std::int32_t m_BounceCount; // 0xb98            
            bool m_bHitHero; // 0xb9c            
            uint8_t _pad0b9d[0x3]; // 0xb9d
            // m_vecValidBounceTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecValidBounceTargets;
            char m_vecValidBounceTargets[0x18]; // 0xba0            
            uint8_t _pad0bb8[0x1c0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HornetSting because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_HornetSting) == 0xd78);
    };
};
