#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x868
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_timeLaunch"
    // static metadata: MNetworkVarNames "GameTime_t m_flAttackableTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flExpireTime"
    // static metadata: MNetworkVarNames "int m_nLaunchNum"
    #pragma pack(push, 1)
    class CItemXP : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7d0[0x5c]; // 0x7d0
        // metadata: MNetworkEnable
        entity2::GameTime_t m_timeLaunch; // 0x82c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flAttackableTime; // 0x830        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flExpireTime; // 0x834        
        // metadata: MNetworkEnable
        int32_t m_nLaunchNum; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemXP because it is not a standard-layout class
    static_assert(sizeof(CItemXP) == 0x868);
};
