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
    // Size: 0x18e8
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    #pragma pack(push, 1)
    class CNPC_FlyingDrone : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1890[0x58];
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNPC_FlyingDrone) == 0x18e8);
};
