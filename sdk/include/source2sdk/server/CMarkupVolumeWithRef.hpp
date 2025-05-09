#pragma once
#include "source2sdk/server/CMarkupVolumeTagged.hpp"
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
    // Size: 0x838
    // Has VTable
    #pragma pack(push, 1)
    class CMarkupVolumeWithRef : public server::CMarkupVolumeTagged
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x810[0x8]; // 0x810
        bool m_bUseRef; // 0x818        
        [[maybe_unused]] std::uint8_t pad_0x819[0x3]; // 0x819
        Vector m_vRefPosEntitySpace; // 0x81c        
        Vector m_vRefPosWorldSpace; // 0x828        
        float m_flRefDot; // 0x834        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeWithRef because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeWithRef) == 0x838);
};
