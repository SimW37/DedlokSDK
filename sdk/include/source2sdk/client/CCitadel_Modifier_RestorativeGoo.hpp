#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_Citadel_RestorativeGooCube;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x428
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_RestorativeGoo : public client::CCitadelModifier
    {
    public:
        entity2::GameTime_t m_flEarliestBreakoutTime; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x344]; // 0xc4
        // m_hGooCube has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_Citadel_RestorativeGooCube> m_hGooCube;
        char m_hGooCube[0x4]; // 0x408        
        float m_flBreakoutPercentage; // 0x40c        
        [[maybe_unused]] std::uint8_t pad_0x410[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_RestorativeGoo because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_RestorativeGoo) == 0x428);
};
