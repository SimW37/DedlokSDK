#pragma once
#include "source2sdk/server/CAI_MotorTransition.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x70
    // Has VTable
    #pragma pack(push, 1)
    class CAI_MotorNavLink : public server::CAI_MotorTransition
    {
    public:
        int32_t m_nNavLinkActiveType; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x6c[0x4];
        
        // Datamap fields:
        // CHandle< CBaseEntity > m_hNavLinkEntity; // 0x6c
        //  m_strMovementName; // 0x60
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_MotorNavLink because it is not a standard-layout class
    static_assert(sizeof(CAI_MotorNavLink) == 0x70);
};
