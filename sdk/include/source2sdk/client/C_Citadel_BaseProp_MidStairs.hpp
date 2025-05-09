#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
#include "source2sdk/client/EMidStairsLocation_t.hpp"
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
    // Size: 0x5e8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EMidStairsLocation_t m_eLocation"
    #pragma pack(push, 1)
    class C_Citadel_BaseProp_MidStairs : public client::C_PointEntity
    {
    public:
        // metadata: MNetworkEnable
        client::EMidStairsLocation_t m_eLocation; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Citadel_BaseProp_MidStairs because it is not a standard-layout class
    static_assert(sizeof(C_Citadel_BaseProp_MidStairs) == 0x5e8);
};
