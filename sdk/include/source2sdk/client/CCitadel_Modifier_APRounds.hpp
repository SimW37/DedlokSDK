#pragma once
#include "source2sdk/client/CCitadel_Modifier_BaseBulletPreRollProc.hpp"
#include "source2sdk/client/ShotID_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_APRounds : public client::CCitadel_Modifier_BaseBulletPreRollProc
    {
    public:
        client::ShotID_t m_nLastProcShotID; // 0x198        
        [[maybe_unused]] std::uint8_t pad_0x19c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_APRounds because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_APRounds) == 0x1a0);
};
