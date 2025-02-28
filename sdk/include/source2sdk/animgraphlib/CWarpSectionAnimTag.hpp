#pragma once
#include "source2sdk/animgraphlib/CWarpSectionAnimTagBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x58
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Warp Section Tag"
    #pragma pack(push, 1)
    class CWarpSectionAnimTag : public animgraphlib::CWarpSectionAnimTagBase
    {
    public:
        // metadata: MPropertyFriendlyName "Warp Position"
        bool m_bWarpPosition; // 0x50        
        // metadata: MPropertyFriendlyName "Warp Orientation"
        bool m_bWarpOrientation; // 0x51        
        [[maybe_unused]] std::uint8_t pad_0x52[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CWarpSectionAnimTag because it is not a standard-layout class
    static_assert(sizeof(CWarpSectionAnimTag) == 0x58);
};
