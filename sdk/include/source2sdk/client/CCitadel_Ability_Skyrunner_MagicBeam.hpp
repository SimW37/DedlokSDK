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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe58
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_Skyrunner_MagicBeam : public client::C_CitadelBaseAbility
    {
    public:
        Vector m_vCastPosition; // 0xdc0        
        QAngle m_qCastAngle; // 0xdcc        
        [[maybe_unused]] std::uint8_t pad_0xdd8[0x80];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Skyrunner_MagicBeam because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Skyrunner_MagicBeam) == 0xe58);
};
