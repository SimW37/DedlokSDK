#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifierAura.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelBulletTimeWarp;
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x250
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_TimeWall_Aura : public source2sdk::server::CCitadelModifierAura
        {
        public:
            uint8_t _pad00e0[0x140]; // 0xe0
            // m_vecTimeWarps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CCitadelBulletTimeWarp>> m_vecTimeWarps;
            char m_vecTimeWarps[0x18]; // 0x220            
            uint8_t _pad0238[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_TimeWall_Aura because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_TimeWall_Aura) == 0x250);
    };
};
