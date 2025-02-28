#pragma once
#include "source2sdk/client/C_Sprite.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x928
    // Has VTable
    #pragma pack(push, 1)
    class C_FireSprite : public client::C_Sprite
    {
    public:
        Vector m_vecMoveDir; // 0x918        
        bool m_bFadeFromAbove; // 0x924        
        [[maybe_unused]] std::uint8_t pad_0x925[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FireSprite because it is not a standard-layout class
    static_assert(sizeof(C_FireSprite) == 0x928);
};
