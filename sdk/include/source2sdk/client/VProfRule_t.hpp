#pragma once
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
    // Standard-layout class: true
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct VProfRule_t
    {
    public:
        CUtlString strVProfName; // 0x0        
        CUtlString strDesc; // 0x8        
        float flTimeMaxMS; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(VProfRule_t, strVProfName) == 0x0);
    static_assert(offsetof(VProfRule_t, strDesc) == 0x8);
    static_assert(offsetof(VProfRule_t, flTimeMaxMS) == 0x10);
    
    static_assert(sizeof(VProfRule_t) == 0x18);
};
