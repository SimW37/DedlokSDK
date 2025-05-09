#pragma once
#include "source2sdk/client/CCitadel_Modifier_Invis.hpp"
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
    class C_CitadelPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2d0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_LurkersAmbush_Invis : public client::CCitadel_Modifier_Invis
    {
    public:
        // m_mapStartLookTime has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::C_CitadelPlayerPawn*,entity2::GameTime_t> m_mapStartLookTime;
        char m_mapStartLookTime[0x28]; // 0x2a0        
        entity2::GameTime_t m_flStartSpotted; // 0x2c8        
        [[maybe_unused]] std::uint8_t pad_0x2cc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_LurkersAmbush_Invis because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_LurkersAmbush_Invis) == 0x2d0);
};
