#pragma once
#include "source2sdk/server/CMarkupVolumeWithRef.hpp"
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
    // Size: 0x840
    // Has VTable
    #pragma pack(push, 1)
    class CMarkupVolumeTagged_NavGame : public server::CMarkupVolumeWithRef
    {
    public:
        server::NavScopeFlags_t m_nScopeFlags; // 0x838        
        bool m_bFloodFillAttribute; // 0x839        
        [[maybe_unused]] std::uint8_t pad_0x83a[0x6];
        
        // Datamap fields:
        // CUtlSymbolLarge navProperty_NavAttributes; // 0x7fffffff
        // CUtlSymbolLarge navProperty_NavAttributesGame; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeTagged_NavGame because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeTagged_NavGame) == 0x840);
};
