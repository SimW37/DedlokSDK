#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelModifier.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x160
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_PerchedPredatorDrag : public source2sdk::server::CCitadelModifier
        {
        public:
            uint8_t _pad00c0[0x80]; // 0xc0
            QAngle m_qRelativeOffset; // 0x140            
            float m_flRelativeDist; // 0x14c            
            Vector m_vecOffsetDir; // 0x150            
            // m_hFollowEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hFollowEnt;
            char m_hFollowEnt[0x4]; // 0x15c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_PerchedPredatorDrag because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_PerchedPredatorDrag) == 0x160);
    };
};
