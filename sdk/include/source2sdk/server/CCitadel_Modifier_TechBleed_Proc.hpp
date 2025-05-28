#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"
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
        // Size: 0x288
        // Has VTable
        #pragma pack(push, 1)
        class CCitadel_Modifier_TechBleed_Proc : public source2sdk::server::CCitadel_Modifier_BaseEventProc
        {
        public:
            bool m_bNoDeath; // 0x178            
            uint8_t _pad0179[0x3]; // 0x179
            float m_flDamage; // 0x17c            
            std::int32_t m_nDamageTick; // 0x180            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x184            
            uint8_t _pad0188[0x100];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_TechBleed_Proc because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_TechBleed_Proc) == 0x288);
    };
};
