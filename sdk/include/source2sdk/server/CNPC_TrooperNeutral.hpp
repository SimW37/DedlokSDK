#pragma once
#include "source2sdk/server/CAI_CitadelNPC.hpp"
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
    // Size: 0x1a00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bShieldActive"
    // static metadata: MNetworkVarNames "bool m_bPlayingIdle"
    // static metadata: MNetworkVarNames "int m_iVaultState"
    #pragma pack(push, 1)
    class CNPC_TrooperNeutral : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1990[0x63]; // 0x1990
        // metadata: MNetworkEnable
        bool m_bShieldActive; // 0x19f3        
        // metadata: MNetworkEnable
        bool m_bPlayingIdle; // 0x19f4        
        [[maybe_unused]] std::uint8_t pad_0x19f5[0x3]; // 0x19f5
        // metadata: MNetworkEnable
        int32_t m_iVaultState; // 0x19f8        
        [[maybe_unused]] std::uint8_t pad_0x19fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperNeutral because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperNeutral) == 0x1a00);
};
