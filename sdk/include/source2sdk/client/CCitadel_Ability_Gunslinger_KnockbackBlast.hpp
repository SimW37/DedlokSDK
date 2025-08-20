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
        // Size: 0xf70
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Ability_Gunslinger_KnockbackBlast : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            Vector m_vecKnockbackDirection; // 0xd88            
            uint8_t _pad0d94[0x4]; // 0xd94
            // m_vecKnockbackedUnits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecKnockbackedUnits;
            char m_vecKnockbackedUnits[0x18]; // 0xd98            
            uint8_t _pad0db0[0x1c0];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_KnockbackBlast because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Gunslinger_KnockbackBlast) == 0xf70);
    };
};
