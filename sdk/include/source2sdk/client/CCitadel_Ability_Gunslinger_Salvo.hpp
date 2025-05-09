#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe50
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Gunslinger_Salvo : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x4]; // 0xdc0
        // m_CastTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_CastTarget;
        char m_CastTarget[0x4]; // 0xdc4        
        int32_t m_iCurrentShots; // 0xdc8        
        int32_t m_iTotalShots; // 0xdcc        
        [[maybe_unused]] std::uint8_t pad_0xdd0[0x80];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Gunslinger_Salvo because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Gunslinger_Salvo) == 0xe50);
};
