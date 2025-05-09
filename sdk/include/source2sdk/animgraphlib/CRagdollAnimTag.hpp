#pragma once
#include "source2sdk/animgraphlib/CAnimTagBase.hpp"
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
    // Size: 0x60
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Ragdoll Tag"
    #pragma pack(push, 1)
    class CRagdollAnimTag : public animgraphlib::CAnimTagBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x50[0x8]; // 0x50
        // metadata: MPropertyFriendlyName "Profile Name"
        // metadata: MPropertySortPriority "100"
        CGlobalSymbol m_profileName; // 0x58        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CRagdollAnimTag because it is not a standard-layout class
    static_assert(sizeof(CRagdollAnimTag) == 0x60);
};
