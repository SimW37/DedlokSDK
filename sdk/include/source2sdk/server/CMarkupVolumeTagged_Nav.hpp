#pragma once
#include "source2sdk/server/CMarkupVolumeTagged.hpp"
#include "source2sdk/server/NavScopeFlags_t.hpp"
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
    // Size: 0x818
    // Has VTable
    #pragma pack(push, 1)
    class CMarkupVolumeTagged_Nav : public server::CMarkupVolumeTagged
    {
    public:
        server::NavScopeFlags_t m_nScopeFlags; // 0x810        
        [[maybe_unused]] std::uint8_t pad_0x811[0x7];
        
        // Datamap fields:
        // CUtlSymbolLarge navProperty_NavAttributes; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeTagged_Nav because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeTagged_Nav) == 0x818);
};
