#pragma once
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
    // Size: 0x7e8
    // Has VTable
    #pragma pack(push, 1)
    class CFuncNavObstruction : public server::CBaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x7d0[0x10]; // 0x7d0
        bool m_bDisabled; // 0x7e0        
        bool m_bUseAsyncObstacleUpdate; // 0x7e1        
        [[maybe_unused]] std::uint8_t pad_0x7e2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncNavObstruction because it is not a standard-layout class
    static_assert(sizeof(CFuncNavObstruction) == 0x7e8);
};
