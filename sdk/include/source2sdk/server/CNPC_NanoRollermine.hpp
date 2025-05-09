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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a18
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flForwardSpeed"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
    #pragma pack(push, 1)
    class CNPC_NanoRollermine : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1990[0x38]; // 0x1990
        // metadata: MNetworkEnable
        float m_flForwardSpeed; // 0x19c8        
        [[maybe_unused]] std::uint8_t pad_0x19cc[0x44]; // 0x19cc
        // metadata: MNetworkEnable
        // m_hOwnerPawn has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwnerPawn;
        char m_hOwnerPawn[0x4]; // 0x1a10        
        [[maybe_unused]] std::uint8_t pad_0x1a14[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_NanoRollermine because it is not a standard-layout class
    static_assert(sizeof(CNPC_NanoRollermine) == 0x1a18);
};
