#pragma once
#include "source2sdk/server/CMarkupVolume.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x810
    // Has VTable
    #pragma pack(push, 1)
    class CMarkupVolumeTagged : public server::CMarkupVolume
    {
    public:
        // m_GroupNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_GroupNames;
        char m_GroupNames[0x18]; // 0x7d8        
        // m_Tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CGlobalSymbol> m_Tags;
        char m_Tags[0x18]; // 0x7f0        
        bool m_bIsGroup; // 0x808        
        bool m_bGroupByPrefab; // 0x809        
        bool m_bGroupByVolume; // 0x80a        
        bool m_bGroupOtherGroups; // 0x80b        
        bool m_bIsInGroup; // 0x80c        
        [[maybe_unused]] std::uint8_t pad_0x80d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeTagged because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeTagged) == 0x810);
};
