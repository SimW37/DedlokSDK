#pragma once
#include "source2sdk/server/CCitadel_Modifier_BaseEventProc.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x288
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_TechBleed_Proc : public server::CCitadel_Modifier_BaseEventProc
    {
    public:
        bool m_bNoDeath; // 0x178        
        [[maybe_unused]] std::uint8_t pad_0x179[0x3]; // 0x179
        float m_flDamage; // 0x17c        
        int32_t m_nDamageTick; // 0x180        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTarget;
        char m_hTarget[0x4]; // 0x184        
        [[maybe_unused]] std::uint8_t pad_0x188[0x100];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_TechBleed_Proc because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_TechBleed_Proc) == 0x288);
};
