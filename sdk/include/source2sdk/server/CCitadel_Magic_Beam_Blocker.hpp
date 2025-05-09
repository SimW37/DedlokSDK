#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    // Size: 0xac0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flTurnSolidTime"
    #pragma pack(push, 1)
    class CCitadel_Magic_Beam_Blocker : public server::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTurnSolidTime; // 0xab8        
        [[maybe_unused]] std::uint8_t pad_0xabc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Magic_Beam_Blocker because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Magic_Beam_Blocker) == 0xac0);
};
