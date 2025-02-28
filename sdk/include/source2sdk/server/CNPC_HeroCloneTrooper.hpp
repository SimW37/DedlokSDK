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
    // Size: 0x18b8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hOwner"
    #pragma pack(push, 1)
    class CNPC_HeroCloneTrooper : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1890[0x4]; // 0x1890
        // metadata: MNetworkEnable
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x1894        
        [[maybe_unused]] std::uint8_t pad_0x1898[0x20];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_HeroCloneTrooper because it is not a standard-layout class
    static_assert(sizeof(CNPC_HeroCloneTrooper) == 0x18b8);
};
