#pragma once
#include "source2sdk/server/CNPC_TrooperNeutral.hpp"
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
    // Size: 0x1a58
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_TrooperNeutralNodeMover : public server::CNPC_TrooperNeutral
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1a00[0x58];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CNPC_TrooperNeutralNodeMover) == 0x1a58);
};
