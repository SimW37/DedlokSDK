#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/PathAccompanyNode_t.hpp"
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
    // Standard-layout class: false
    // Size: 0x540
    // Has VTable
    #pragma pack(push, 1)
    class CPathAccompany : public client::C_BaseEntity
    {
    public:
        float m_flPathLength; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x514[0x4]; // 0x514
        // m_vecNodes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::PathAccompanyNode_t> m_vecNodes;
        char m_vecNodes[0x18]; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x530[0x8]; // 0x530
        float m_flAutoLeadRange; // 0x538        
        float m_flAutoBreakRange; // 0x53c        
        
        // Datamap fields:
        // CUtlSymbolLarge pathNodes; // 0x7fffffff
        // CUtlSymbolLarge pathNodeRadiusScales; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPathAccompany because it is not a standard-layout class
    static_assert(sizeof(CPathAccompany) == 0x540);
};
