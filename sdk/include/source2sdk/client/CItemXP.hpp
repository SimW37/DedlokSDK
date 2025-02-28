#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
    // Size: 0x8a0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_timeLaunch"
    // static metadata: MNetworkVarNames "GameTime_t m_flAttackableTime"
    #pragma pack(push, 1)
    class CItemXP : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x808[0x64]; // 0x808
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnLaunchTimeChanged"
        entity2::GameTime_t m_timeLaunch; // 0x86c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flAttackableTime; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x874[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemXP because it is not a standard-layout class
    static_assert(sizeof(CItemXP) == 0x8a0);
};
