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
    // Size: 0x1f0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_UltimateBurst_Proc : public server::CCitadel_Modifier_BaseEventProc
    {
    public:
        // m_hHitTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hHitTargets;
        char m_hHitTargets[0x18]; // 0x168        
        [[maybe_unused]] std::uint8_t pad_0x180[0x70];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_UltimateBurst_Proc because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_UltimateBurst_Proc) == 0x1f0);
};
