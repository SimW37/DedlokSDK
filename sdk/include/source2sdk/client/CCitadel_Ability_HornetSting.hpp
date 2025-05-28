#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
        // Size: 0xfa0
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_HornetSting : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            std::int32_t m_BounceCount; // 0xdc0            
            bool m_bHitHero; // 0xdc4            
            uint8_t _pad0dc5[0x3]; // 0xdc5
            // m_vecValidBounceTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecValidBounceTargets;
            char m_vecValidBounceTargets[0x18]; // 0xdc8            
            uint8_t _pad0de0[0x1c0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_HornetSting because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_HornetSting) == 0xfa0);
    };
};
