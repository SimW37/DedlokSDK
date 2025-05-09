#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf30
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iRemainingCasts"
    // static metadata: MNetworkVarNames "bool m_bIsBlinking"
    // static metadata: MNetworkVarNames "GameTime_t m_RecastEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_BlinkEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_VampireBat_BatBlink : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdc0[0x148]; // 0xdc0
        // metadata: MNetworkEnable
        int32_t m_iRemainingCasts; // 0xf08        
        // metadata: MNetworkEnable
        bool m_bIsBlinking; // 0xf0c        
        [[maybe_unused]] std::uint8_t pad_0xf0d[0x3]; // 0xf0d
        // metadata: MNetworkEnable
        entity2::GameTime_t m_RecastEndTime; // 0xf10        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_BlinkEndTime; // 0xf14        
        [[maybe_unused]] std::uint8_t pad_0xf18[0x18];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_VampireBat_BatBlink because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_VampireBat_BatBlink) == 0xf30);
};
