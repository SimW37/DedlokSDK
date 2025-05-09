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
    // Registered alignment: unknown
    // Alignment: 0x10
    // Standard-layout class: true
    // Size: 0x80
    #pragma pack(push, 1)
    class CPathQueryUtil
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        CTransform m_PathToEntityTransform; // 0x10        
        // m_vecPathSamplePositions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<Vector> m_vecPathSamplePositions;
        char m_vecPathSamplePositions[0x18]; // 0x30        
        // m_vecPathSampleParameters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecPathSampleParameters;
        char m_vecPathSampleParameters[0x18]; // 0x48        
        // m_vecPathSampleDistances has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_vecPathSampleDistances;
        char m_vecPathSampleDistances[0x18]; // 0x60        
        [[maybe_unused]] std::uint8_t pad_0x78[0x8];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPathQueryUtil, m_PathToEntityTransform) == 0x10);
    static_assert(offsetof(CPathQueryUtil, m_vecPathSamplePositions) == 0x30);
    static_assert(offsetof(CPathQueryUtil, m_vecPathSampleParameters) == 0x48);
    static_assert(offsetof(CPathQueryUtil, m_vecPathSampleDistances) == 0x60);
    
    static_assert(sizeof(CPathQueryUtil) == 0x80);
};
