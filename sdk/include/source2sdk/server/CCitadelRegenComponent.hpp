#pragma once
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x180
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelRegenComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x8]; // 0x8
        entity2::GameTime_t m_flLastRegenThinkTime; // 0x10        
        float m_flRegenAccumulator; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x18[0x168];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelRegenComponent because it is not a standard-layout class
    static_assert(sizeof(CCitadelRegenComponent) == 0x180);
};
